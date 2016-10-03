<table class="screenTable">
	<tbody>
		<tr>
			<td width="150px">
				Name
			</td>
			<td colspan="5" style="text-align:left">
				<input style="width: 300px" id="name" type="textbox" />
			</td>
		</tr>
		<tr>
			<td width="150px">
				Description
			</td>
			<td colspan="5" style="text-align:left">
				<input style="width: 300px" id="description" type="textbox" />
			</td>
		</tr>
		<tr>
			<td>
				Calculation </option> 
			</td>
			<td colspan=5>
				<select id="calculationType" class="box grey" onchange="addKpiNumberSupport()" >
					<option value="" disabled selected hidden>Calculation Type</option>
					<option value="simple">Simple Measure</option>
					<option value="aggregate">Aggregate Measure</option>
					<option value="composed">Composed Measure</option>
				</select>
		        <select id="numberSupport" class="box grey" onchange="addKpiNumberSupportFormat()" disabled="true">
		          	<option value="" disabled selected hidden>Number Type</option>
		          	<option value="numeric">Numeric</option>
		          	<option value="boolean">Boolean</option>
		          	<option value="text">Text</option>
		          	<option value="date">Date</option>
		          	<option value="category">Category</option>
		        </select>
		        <select id="numberSupportFormat" style="visibility: hidden">
		        	<option value="decimal">Decimal</option>
		    	    <option value="percentage" selected>Percentage</option>
		        </select>
			</td>


		</tr>
		<tr class="hiddenRow simple">
			<td>
				&nbsp;
			</td>
			<td>
				<select id="selectSensor1" class="box grey sensorBox">
					<option value="" disabled selected hidden>Select Sensor</option>
				</select>
				<select id="selectSensorEvent1" class="box grey eventBox eventBoxType">
					<option value="" disabled selected hidden>Select Event</option>
				</select>
				<label id="eventType1" class="grey eventBoxType">Type: </label>
				<input type="text" id="eventTypeValue1" value="Event value" class="eventTypeValue eventBoxType" onfocus="if(this.value=='Event value')this.value=''" onblur="if(this.value=='')this.value='Event value'">
			</td>
		</tr>

		<tr class="hiddenRow aggregate">
			<td>
				&nbsp;
			</td>
			<td>
				<select id="kpiSensor1" class="box grey">
					<option value="" disabled selected hidden>KPI/Sensor</option>
					<option value="kpi">KPI</option>
					<option value="sensor">Sensor</option>
				</select>
			</td>
			<td>
				&nbsp;
			</td>
			<td>
				<select id="selectAggType" class="box grey">
					<option value="" disabled selected hidden>Select Aggregation Type</option>					
				</select>
			</td>
		</tr>
		<tr class="hiddenRow elAggRow">
			<td>
				&nbsp;
			</td>
			<td>
				<select id="selectSensor2" class="box grey sensorBox">
					<option value="" disabled selected hidden>Select Sensor</option>
				</select>
				<select id="selectSensorEvent2" class="box grey eventBox eventBoxType">
					<option value="" disabled selected hidden>Select Event</option>
				</select>
				<label id="eventType2" class="grey eventBoxType">Type: </label>
				<input type="text" id="eventTypeValue2" value="Event value" class="eventTypeValue eventBoxType" onfocus="if(this.value=='Event value')this.value=''" onblur="if(this.value=='')this.value='Event value'">
				<select id="selectKpi1" class="box grey kpiBox">
					<option value="" disabled selected hidden>Select Kpi</option>
				</select>
			</td>
			<td>
				&nbsp;
			</td>
			<td>
				&nbsp;
			</td>
		</tr>
		<tr class="hiddenRow composed">
			<td>
				&nbsp;
			</td>
			<td>
				<select id="kpiSensor2" class="box grey kpiSensor">
					<option value="" disabled selected hidden>KPI/Sensor</option>
					<option value="kpi">KPI</option>
					<option value="sensor">Sensor</option>
				</select>
			</td>
			<td>
				<select id="op1" class="box grey" style="width:60">
					<option value="" disabled selected hidden>Op</option>
					<option value="add">+</option>
					<option value="subtract">-</option>
					<option value="multiply">x</option>
					<option value="divide">/</option>
				</select>
			</td>
			<td>
				<select id="kpiSensor3" class="box grey kpiSensor">
					<option value="" disabled selected hidden>KPI/Sensor</option>
					<option value="kpi">KPI</option>
					<option value="sensor">Sensor</option>
				</select>
			</td>
			<td>
				<select id="op2" class="box grey" style="width:80">
					<option value="" disabled selected hidden>Op</option>
					<option value="none">none</option>
					<option value="add">+</option>
					<option value="subtract">-</option>
					<option value="multiply">x</option>
					<option value="divide">/</option>
				</select>
			</td>
			<td>
				<select id="kpiSensor4" disabled class="box grey kpiSensor thEl">
					<option value="" disabled selected hidden>KPI/Sensor</option>
					<option value="kpi">KPI</option>
					<option value="sensor">Sensor</option>
				</select>
			</td>

		</tr>
		<tr class="hiddenRow elRow">
			<td>
				&nbsp;
			</td>
			<td>
				<select id="selectSensor3" class="box grey sensorBox sensorChoice">
					<option value="" disabled selected hidden>Select Sensor</option>
				</select>
				<select id="selectSensorEvent3" class="box grey eventBox eventBoxType">
					<option value="" partition="false" disabled selected hidden>Select Event</option>
				</select>
				<label id="eventType3" class="grey eventBoxType">Type: </label>
				<input type="text" id="eventTypeValue3" value="Event value" class="eventTypeValue eventBoxType" onfocus="if(this.value=='Event value')this.value=''" onblur="if(this.value=='')this.value='Event value'">
				<select id="selectKpi2" class="box grey kpiBox kpiChoice">
					<option value="" disabled selected hidden>Select KPI</option>
				</select>
			</td>
			<td width=40>
				&nbsp;
			</td>
			<td>
				<select id="selectSensor4" class="box grey sensorBox sensorChoice">
					<option value="" disabled selected hidden>Select Sensor</option>
				</select>
				<select id="selectSensorEvent4" class="box grey eventBox eventBoxType">
					<option value="" partition="false" disabled selected hidden>Select Event</option>
				</select>
				<label id="eventType4" class="grey eventBoxType">Type: </label>
				<input type="text" id="eventTypeValue4" value="Event value" class="eventTypeValue eventBoxType" onfocus="if(this.value=='Event value')this.value=''" onblur="if(this.value=='')this.value='Event value'">
				<select id="selectKpi3" class="box grey kpiBox kpiChoice">
					<option value="" disabled selected hidden>Select KPI</option>
				</select>
			</td>
			<td width=40>
				&nbsp;
			</td>
			<td>
				<select id="selectSensor5" disabled class="box grey sensorBox sensorChoice thEl">
					<option value="" disabled selected hidden>Select Sensor</option>
				</select>
				<select id="selectSensorEvent5" class="box grey eventBox eventBoxType">
					<option value="" partition="false" disabled selected hidden>Select Event</option>
				</select>
				<label id="eventType5" class="grey eventBoxType">Type: </label>
				<input type="text" id="eventTypeValue5" value="Event value" class="eventTypeValue eventBoxType" onfocus="if(this.value=='Event value')this.value=''" onblur="if(this.value=='')this.value='Event value'">
				<select id="selectKpi4" disabled class="box grey kpiBox kpiChoice thEl">
					<option value="" disabled selected hidden>Select KPI</option>
				</select>
			</td>

		</tr>
		<tr class="samplingRate">
			<td>
				Sampling
			</td>
			<td>
				<input id="samplingRate" type="textbox">
			</td>
			<td colspan=4>

				<select id="samplingInterval" class="box grey">
					<option value="" disabled selected hidden>Sampling interval</option>
				</select>
			</td>
		</tr>
		<!--<tr>
				<td width="15%">&nbsp</td>
				<td width="37%">&nbsp</td>
				<td width="10%">&nbsp</td>
				<td width="">&nbsp</td>
			</tr>		-->
		<br>
	</tbody>
</table>
<div align="left" class="partitionSelection">Contextual Information (partition)
<table class="bottomTable containerColor2 partitionSelection">
	<tr>
		<td>
			<form id="contextualInformation">
				<input name="partition" type="radio" value="product">Product
				<br>
				<input name="partition" type="radio" value="machine">Machine
				<br>
				<input name="partition" type="radio" value="shift">Shift
				<br>
				<input name="partition" type="radio" value="mould">Mould
				<br>
				<input name="partition" id="NonePartition" type="radio" value="none" checked>None
				<br>
			</form>
			<select id="partitionOptions" class="box grey eventBoxType" >
				<option value="" disabled selected hidden>Select Partition Id</option>
			</select>
		</td>
	</tr>
</table>
</div>
<br>
<div align="right" class="btn-group screen;" role="group" aria-label="...">
	<button type="button" id="cancelBtn" class="btn btn-default">Cancel</button>
	<button type="button" id="saveBtn" class="btn btn-default">Save</button>
</div>
