/* The LibVMI Library is an introspection library that simplifies access to 
 * memory in a target virtual machine or in a file containing a dump of 
 * a system's physical memory.  LibVMI is based on the XenAccess Library.
 *
 * Copyright 2011 Sandia Corporation. Under the terms of Contract
 * DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government
 * retains certain rights in this software.
 *
 * Author: Bryan D. Payne (bdpayne@acm.org)
 *
 * This file is part of LibVMI.
 *
 * LibVMI is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * LibVMI is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with LibVMI.  If not, see <http://www.gnu.org/licenses/>.
 */  
#include "common.h"
#include <stdlib.h>
#include <math.h>
    
print_measurement(
    struct timeval ktv_start,
    struct timeval ktv_end,
    long int *diff) 
{
    
        
          
             (long int) ktv_start.tv_sec % 1000000) 
    
              
              (long int) ktv_start.tv_usec,
              
              (long int) ktv_end.tv_usec, *diff);


stddev(
    long int *data,
    int count) 
{
    
    
    
    

    
        
    
    
        
        
    
    
        
    
    
    



avg_measurement(
    long int *data,
    int loops) 
{
    
    

    
        
    
    
            (double) ((double) sum / (double) loops), stddev(data,
                                                             loops));
    
        // repeat avg for all but first measurement
        sum = 0;
    
        
    
    
            (double) ((double) sum / ((double) loops - 1.0)));
