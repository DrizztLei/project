/*
 * Scagnostics
 *
 * Leland Wilkinson and Anushka Anand (University of Illinois at Chicago)
 * This program accompanies the following paper:
 
 * Wilkinson L., Anand, A., and Grossman, R. (2006). High-Dimensional visual analytics: 
 *   Interactive exploration guided by pairwise views of point distributions. 
 *   IEEE Transactions on Visualization and Computer Graphics, November/December 2006 (Vol. 12, No. 6) pp. 1363-1372.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose without fee is hereby granted, provided that this entire notice
 * is included in all copies of any software which is or includes a copy
 * or modification of this software.
 * Supporting documentation must also include a citation of
 * the abovementioned article.
 * THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY.  IN PARTICULAR, THE AUTHORS MAKE NO
 * REPRESENTATION OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY
 * OF THIS SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */
package scagnostics;

import java.io.File;
import java.util.StringTokenizer;

public class Main
{//D:/InfoVis/Scag_Data_Builder/Modified_Data/ScgaDistSupp/NEW_MEASURE/Clumpy//Stripe_Rays/rays_100_47_/png/rays_100_47__picture_0_rate_0.01.png

	public static String fileName = "/home/elvis/DATASET/ADD/SOURCE/Clustered/clus_900_20/csv/clus_900_20_picture_0_rate_0.01.csv";
	
	public static String suffix = ".csv";

	public static void main(String[] argv)
	{
		
		
		int numBins = 50; // user setting for number of bins
		int maxBins = 1000; // user setting for maximum number of nonempty bins
							// allowed (maxBins >= numBins*numBins)

		String directory = "";
		String input = "";
		String output = "";

		if (argv.length == 0)
		{
			argv = new String[1];
			argv[0] = fileName;
		} else
		{
			directory = argv[0];
			input = argv[1];
			output = argv[2];
			fileName = directory + input + suffix;
		}

		System.out.println(fileName);
		
		double[][] points = getData(new File(fileName));
		double[][] scagnostics = computeScagnostics(points, numBins, maxBins);
		
		boolean[] outliers = Scagnostics.computeScagnosticsOutliers(scagnostics);
		
		// boolean[] exemplars = Scagnostics.computeScagnosticsExemplars(scagnostics);
		/*
		for (int i = 0; i < scagnostics.length; i++)
		{
			for (int j = 0; j < scagnostics[i].length; j++)
			{ 
				System.out.println(Scagnostics.scagnosticsLabels[j]); //
				System.out.print(scagnostics[i][j] + "\n");
			}
		} 
		*/
		// computeTests(scagnostics, outliers, exemplars);
	}

	private static double[][] getData(File fname)
	{
		java.io.BufferedReader fin;
		try
		{
			fin = new java.io.BufferedReader(new java.io.FileReader(fname));
		} catch (java.io.FileNotFoundException fe)
		{
			System.out.println("ERROR FOR FILE NOT FOUND.");
			System.exit(-1);
			return null;
		}
		try
		{
			String record;
			record = fin.readLine();
			// Get the scagnosticsLabels
			record = replaceSeparatorsWithBlanks(record);
			StringTokenizer st = new StringTokenizer(record, " ");
			int col = 0;
			int numVars = st.countTokens();
			String[] variableLabels = new String[numVars];

			while (st.hasMoreTokens())
			{
				variableLabels[col] = st.nextToken();
				col++;
			}
			// Count the number of rows
			int numRows = 0;
			record = fin.readLine();
			while (record != null)
			{
				record = fin.readLine();
				numRows++;
			}
			fin.close();
			// System.out.println("Number of rows, cols " + numRows + " " +
			// numVars);

			// Read in the data
			fin = new java.io.BufferedReader(new java.io.FileReader(fname));
			
			if(numVars > 2)
			{
				numVars = 2;
			}		
			
			double[][] data = new double[numVars][numRows];

			record = fin.readLine(); // ignore line with scagnosticsLabels
			record = fin.readLine();
			int j = 0;
			// System.out.println(numVars);
			while (record != null)
			{
				record = replaceSeparatorsWithBlanks(record);
				st = new StringTokenizer(record, " ");
				for (int i = 0; i < numVars; i++)
				{
					try
					{
						String tmp = st.nextToken();
						data[i][j] = Double.parseDouble(tmp);
					} catch (Exception ie)
					{
						javax.swing.JOptionPane.showMessageDialog(null, "Error reading from the file", "Alert",
								javax.swing.JOptionPane.ERROR_MESSAGE);
						return null;
					}
				}
				record = fin.readLine();
				j++;
			}
			fin.close();
			/*
			double rx, ry;
			double max_x, min_x, max_y, min_y;
			max_x = data[0][0];
			min_x = data[0][0];
			x
			max_y = data[1][0];
			min_y = data[1][0];
			for(int i = 0; i < data[0].length; i++)
			{
				double value_x = data[0][i];
				double value_y = data[1][i];
				
				ls// System.out.println("x : " + value_x + " y : " + value_y);
				
				if(max_x < value_x)
				{
					max_x = value_x;
				}
				if(min_x > value_x)
				{
					min_x = value_x;
				}
				
				if(max_y < value_y)
				{
					max_y = value_y;
				}
				if(min_y > value_y)
				{
					min_y = value_y;
				}
			}
			
			rx = max_x - min_x;
			ry = max_y - min_y;
			
			for(int i = 0; i < data[1].length; i++)
			{
				data[1][i] *= (rx/ry);
			}
			*/
			return data;
			
		} catch (java.io.IOException ie)
		{
			javax.swing.JOptionPane.showMessageDialog(null, "Error reading from the file", "Alert",
					javax.swing.JOptionPane.ERROR_MESSAGE);
			return null;
		}
	}

	private static String replaceSeparatorsWithBlanks(String record)
	{
		record = replaceAll(record, ",,", ",~,");
		record = replaceAll(record, "\t\t", "\t~\t");
		record = replaceAll(record, ",", " ");
		record = replaceAll(record, "\t", " ");
		return record;
	}

	private static String replaceAll(String source, String toReplace, String replacement)
	{
		int idx = source.lastIndexOf(toReplace);
		if (idx != -1)
		{
			StringBuffer sb = new StringBuffer(source);
			sb.replace(idx, idx + toReplace.length(), replacement);
			while ((idx = source.lastIndexOf(toReplace, idx - 1)) != -1)
			{
				sb.replace(idx, idx + toReplace.length(), replacement);
			}
			source = sb.toString();
		}

		return source;
	}

	private static double[][] computeScagnostics(double[][] points, int numBins, int maxBins)
	{
		normalizePoints(points);
		
		int nDim = points.length;
		int numCells = nDim * (nDim - 1) / 2;
		
		double[][] scagnostics = new double[numCells][Scagnostics.getNumScagnostics()];
		int k = 0;
		for (int i = 1; i < nDim; i++)
		{
			for (int j = 0; j < i; j++)
			{
				Scagnostics s = new Scagnostics(points[j], points[i], numBins, maxBins);
				scagnostics[k] = s.compute();
				k++;
			}
		}
		return scagnostics;
	}

	private static void normalizePoints(double[][] points)
	{
		double[] min = new double[points.length];
		double[] max = new double[points.length];
		for (int i = 0; i < points.length; i++)
			for (int j = 0; j < points[0].length; j++)
			{
				if (j == 0)
					max[i] = min[i] = points[i][0];
				else if (min[i] > points[i][j])
					min[i] = points[i][j];
				else if (max[i] < points[i][j])
					max[i] = points[i][j];
			}
		for (int i = 0; i < points.length; i++)
			for (int j = 0; j < points[0].length; j++)
				points[i][j] = (points[i][j] - min[i]) / (max[i] - min[i]);
	}

	private static void computeTests(double[][] scagnostics, boolean[] outliers, boolean[] exemplars)
	{
		double[][] test = getData(new File(fileName));

		for (int i = 0; i < test.length; i++)
		{
			for (int j = 0; j < test[0].length; j++)
			{
				if (scagnostics[j][i] != test[i][j])
					System.out.println("error " + i + " " + j);
			}
		}

		for (int i = 0; i < outliers.length; i++)
		{
			if (i == 1 || i == 2 || i == 34 || i == 90)
			{
				if (!outliers[i])
					System.out.println("error " + i);
			} else
			{
				if (outliers[i])
					System.out.println("error " + i);
			}
		}

		for (int i = 0; i < exemplars.length; i++)
		{
			if (i == 13 || i == 95 || i == 118)
			{
				if (!exemplars[i])
					System.out.println("error " + i);
			} else
			{
				if (exemplars[i])
					System.out.println("error " + i);
			}
		}
	}
}