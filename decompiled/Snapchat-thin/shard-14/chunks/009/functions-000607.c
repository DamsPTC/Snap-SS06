/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b715a9c; end: 10b715b93; +[SDMSubtitles descriptor] */

undefined * FUN_10b715a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1500,
                        &PTR____CFConstantStringClassReference_110ea7f38,&PTR_DAT_1133c7da8,
                        &PTR_DAT_1133c7e40,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8d88 = puVar1;
  }
  return puRam00000001137f8d88;
}



/* Entry: 10b715b94; end: 10b715baf;  */

bool FUN_10b715b94(uint param_1)

{
  return param_1 < 0x8c || param_1 - 0xb9 < 0x75;
}



/* Entry: 10b715bb0; end: 10b715c2b;  */

undefined * FUN_10b715bb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8d98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76318,
                        &UNK_10e5d6d60,&UNK_10e5d6e30,0xc,FUN_10b715c2c,0);
    do {
      if (puRam00000001137f8d98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8d98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8d98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8d98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8d98;
}



/* Entry: 10b715c2c; end: 10b715c37;  */

bool FUN_10b715c2c(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b715c38; end: 10b715cb3;  */

undefined * FUN_10b715c38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8da0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76338,
                        &UNK_10e5d6e60,&UNK_10e5d6ee4,7,FUN_10b715cb4,0);
    do {
      if (puRam00000001137f8da0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8da0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8da0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8da0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8da0;
}



/* Entry: 10b715cb4; end: 10b715cbf;  */

bool FUN_10b715cb4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b715cc0; end: 10b715d27; +[SDMProvenance descriptor] */

void FUN_10b715cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb15f0,
                        &PTR____CFConstantStringClassReference_110ea7fb8,&PTR_DAT_1133c7ec0,
                        &PTR_DAT_1133c7f98,8,0x40,0x1c);
    puRam00000001137f8da8 = puVar1;
  }
  return;
}



/* Entry: 10b715d28; end: 10b715d8f; +[SDMSnapKitAttributes descriptor] */

void FUN_10b715d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8db0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1640,
                        &PTR____CFConstantStringClassReference_110f76358,&PTR_DAT_1133c7ec0,
                        &PTR_DAT_1133c7ed8,2,0x18,0x1c);
    puRam00000001137f8db0 = puVar1;
  }
  return;
}



/* Entry: 10b715d90; end: 10b715e73; +[SDMSnapAlias descriptor] */

void FUN_10b715d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1690,
                        &PTR____CFConstantStringClassReference_110f76378,&PTR_DAT_1133c7ec0,
                        &PTR_DAT_1133c7f18,4,0x28,0x1c);
    puRam00000001137f8db8 = puVar1;
  }
  return;
}



/* Entry: 10b715e74; end: 10b715e7f;  */

bool FUN_10b715e74(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b715e80; end: 10b715ee7; +[SDMOwner descriptor] */

void FUN_10b715e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1730,
                        &PTR____CFConstantStringClassReference_110f05638,&PTR_DAT_1133c8098,0,0,4,
                        0x1c);
    puRam00000001137f8dc8 = puVar1;
  }
  return;
}



/* Entry: 10b715ee8; end: 10b715fdf; +[SDMOwner_ID descriptor] */

undefined * FUN_10b715ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8dd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1780,
                        &PTR____CFConstantStringClassReference_110e77bb8,&PTR_DAT_1133c8098,
                        &PTR_DAT_1133c80b0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8dd0 = puVar1;
  }
  return puRam00000001137f8dd0;
}



/* Entry: 10b715fe0; end: 10b715ffb;  */

uint FUN_10b715fe0(ulong param_1)

{
  return (uint)((uint)param_1 < 0x38) & (uint)(0xffffffffcfffff >> (param_1 & 0x3f));
}



/* Entry: 10b715ffc; end: 10b716077;  */

undefined * FUN_10b715ffc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8de0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f763d8,
                        &UNK_10e5d72ec,&UNK_10e5d730c,6,FUN_10b716078,0);
    do {
      if (puRam00000001137f8de0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8de0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8de0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8de0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8de0;
}



/* Entry: 10b716078; end: 10b716083;  */

bool FUN_10b716078(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b716084; end: 10b7160ff;  */

undefined * FUN_10b716084(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8de8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f763f8,
                        &UNK_10e5d7324,&UNK_10e5d7344,3,FUN_10b716100,0);
    do {
      if (puRam00000001137f8de8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8de8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8de8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8de8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8de8;
}



/* Entry: 10b716100; end: 10b71610b;  */

bool FUN_10b716100(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b71610c; end: 10b7161ef; +[SDMSpectacles descriptor] */

void FUN_10b71610c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1870,
                        &PTR____CFConstantStringClassReference_110e0a938,&PTR_DAT_1133c80f0,
                        &PTR_s_version_1133c8108,5,0x20,0x1c);
    puRam00000001137f8df0 = puVar1;
  }
  return;
}



/* Entry: 10b7161f0; end: 10b716207;  */

uint FUN_10b7161f0(uint param_1)

{
  return (uint)(param_1 < 0x10) & 0xfdffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10b716208; end: 10b71626f; +[SDMStickerMetadata descriptor] */

void FUN_10b716208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1910,
                        &PTR____CFConstantStringClassReference_110f76438,&PTR_DAT_1133c81a8,
                        &PTR_DAT_1133c81c0,6,0x20,0x1c);
    puRam00000001137f8e00 = puVar1;
  }
  return;
}



/* Entry: 10b716270; end: 10b716367; +[SDMThumbnail descriptor] */

undefined * FUN_10b716270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb19b0,
                        &PTR____CFConstantStringClassReference_110e8ce78,&PTR_DAT_1133c8280,
                        &PTR_s_URL_1133c8298,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8e08 = puVar1;
  }
  return puRam00000001137f8e08;
}



/* Entry: 10b716368; end: 10b716373;  */

bool FUN_10b716368(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b716374; end: 10b7163db; +[SDMVideoInterval descriptor] */

void FUN_10b716374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1b90,
                        &PTR____CFConstantStringClassReference_110f76498,&PTR_DAT_1133c84e8,
                        &PTR_DAT_1133c8500,4,0x18,0x1c);
    puRam00000001137f8e28 = puVar1;
  }
  return;
}



/* Entry: 10b7163dc; end: 10b7164bf; +[SDMWeatherInfo descriptor] */

void FUN_10b7163dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1c30,
                        &PTR____CFConstantStringClassReference_110f764b8,&PTR_DAT_1133c8580,
                        &PTR_DAT_1133c8598,1,0x10,0x1c);
    puRam00000001137f8e30 = puVar1;
  }
  return;
}



/* Entry: 10b7164c0; end: 10b7164cb;  */

bool FUN_10b7164c0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7164cc; end: 10b716547;  */

undefined * FUN_10b7164cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8e40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f764f8,
                        &UNK_10e5d7580,&UNK_10e5d75fc,0xe,FUN_10b716548,0);
    do {
      if (puRam00000001137f8e40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8e40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8e40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8e40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8e40;
}



/* Entry: 10b716548; end: 10b716553;  */

bool FUN_10b716548(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b716554; end: 10b7165cf;  */

undefined * FUN_10b716554(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8e48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76518,
                        &UNK_10e5d7634,&UNK_10e5d78b4,0x29,FUN_10b7165d0,0);
    do {
      if (puRam00000001137f8e48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8e48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8e48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8e48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8e48;
}



/* Entry: 10b7165d0; end: 10b7165db;  */

bool FUN_10b7165d0(uint param_1)

{
  return param_1 < 0x29;
}



/* Entry: 10b7165dc; end: 10b716657;  */

undefined * FUN_10b7165dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8e50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76538,
                        &UNK_10e5d7958,&UNK_10e5d79a0,7,FUN_10b716658,0);
    do {
      if (puRam00000001137f8e50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8e50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8e50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8e50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8e50;
}



/* Entry: 10b716658; end: 10b716663;  */

bool FUN_10b716658(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b716664; end: 10b7166f3;  */

undefined * FUN_10b716664(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8e58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f76558,
                        &UNK_10e5d79bc,&UNK_10e5d79e8,7,FUN_10b7166f4,0,&UNK_10e5d7a04);
    do {
      if (puRam00000001137f8e58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8e58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8e58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8e58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8e58;
}



/* Entry: 10b7166f4; end: 10b7166ff;  */

bool FUN_10b7166f4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b716700; end: 10b716767; +[SCWWeather descriptor] */

void FUN_10b716700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1cd0,
                        &PTR____CFConstantStringClassReference_110e33078,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8b90,0xb,0x40,0x1c);
    puRam00000001137f8e60 = puVar1;
  }
  return;
}



/* Entry: 10b716768; end: 10b7167cf; +[SCWDetailedCondition descriptor] */

void FUN_10b716768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1d20,
                        &PTR____CFConstantStringClassReference_110f76578,&PTR_DAT_1133c85b8,0,0,4,
                        0x1c);
    puRam00000001137f8e68 = puVar1;
  }
  return;
}



/* Entry: 10b7167d0; end: 10b716837; +[SCWTimeZone descriptor] */

void FUN_10b7167d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1d70,
                        &PTR____CFConstantStringClassReference_110e044b8,&PTR_DAT_1133c85b8,
                        &PTR_s_id_p_1133c85d0,2,0x10,0x1c);
    puRam00000001137f8e70 = puVar1;
  }
  return;
}



/* Entry: 10b716838; end: 10b71689f; +[SCWCurrentConditionResponse descriptor] */

void FUN_10b716838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1dc0,
                        &PTR____CFConstantStringClassReference_110f76598,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8650,3,0x20,0x1c);
    puRam00000001137f8e78 = puVar1;
  }
  return;
}



/* Entry: 10b7168a0; end: 10b716907; +[SCWHourlyForecastResponse descriptor] */

void FUN_10b7168a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1e10,
                        &PTR____CFConstantStringClassReference_110f765b8,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c86b0,3,0x20,0x1c);
    puRam00000001137f8e80 = puVar1;
  }
  return;
}



/* Entry: 10b716908; end: 10b71696f; +[SCWDailyForecast descriptor] */

void FUN_10b716908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1e60,
                        &PTR____CFConstantStringClassReference_110f765d8,&PTR_DAT_1133c85b8,
                        &PTR_s_day_1133c8610,2,0x18,0x1c);
    puRam00000001137f8e88 = puVar1;
  }
  return;
}



/* Entry: 10b716970; end: 10b7169d7; +[SCWDailyForecastResponse descriptor] */

void FUN_10b716970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1eb0,
                        &PTR____CFConstantStringClassReference_110f765f8,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8710,3,0x20,0x1c);
    puRam00000001137f8e90 = puVar1;
  }
  return;
}



/* Entry: 10b7169d8; end: 10b716a3f; +[SCWCurrentConditionAndForecastResponse descriptor] */

void FUN_10b7169d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1f00,
                        &PTR____CFConstantStringClassReference_110f76618,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8990,5,0x30,0x1c);
    puRam00000001137f8e98 = puVar1;
  }
  return;
}



/* Entry: 10b716a40; end: 10b716aa7; +[SCWCurrentConditionRequest descriptor] */

void FUN_10b716a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1f50,
                        &PTR____CFConstantStringClassReference_110f76638,&PTR_DAT_1133c85b8,
                        &PTR_s_lat_1133c8770,3,0x18,0x1c);
    puRam00000001137f8ea0 = puVar1;
  }
  return;
}



/* Entry: 10b716aa8; end: 10b716b0f; +[SCWHourlyForecastRequest descriptor] */

void FUN_10b716aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1fa0,
                        &PTR____CFConstantStringClassReference_110f76658,&PTR_DAT_1133c85b8,
                        &PTR_s_lat_1133c8890,4,0x20,0x1c);
    puRam00000001137f8ea8 = puVar1;
  }
  return;
}



/* Entry: 10b716b10; end: 10b716b77; +[SCWDailyForecastRequest descriptor] */

void FUN_10b716b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb1ff0,
                        &PTR____CFConstantStringClassReference_110f76678,&PTR_DAT_1133c85b8,
                        &PTR_s_lat_1133c8910,4,0x20,0x1c);
    puRam00000001137f8eb0 = puVar1;
  }
  return;
}



/* Entry: 10b716b78; end: 10b716bdf; +[SCWCurrentConditionAndForecastRequest descriptor] */

void FUN_10b716b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb2040,
                        &PTR____CFConstantStringClassReference_110f76698,&PTR_DAT_1133c85b8,
                        &PTR_s_lat_1133c8a30,5,0x20,0x1c);
    puRam00000001137f8eb8 = puVar1;
  }
  return;
}



/* Entry: 10b716be0; end: 10b716c47; +[SCWAirQuality descriptor] */

void FUN_10b716be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb2090,
                        &PTR____CFConstantStringClassReference_110f766b8,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8ad0,6,0x20,0x1c);
    puRam00000001137f8ec0 = puVar1;
  }
  return;
}



/* Entry: 10b716c48; end: 10b716caf; +[SCWCurrentAirQualityRequest descriptor] */

void FUN_10b716c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb20e0,
                        &PTR____CFConstantStringClassReference_110f766d8,&PTR_DAT_1133c85b8,
                        &PTR_s_lat_1133c87d0,3,0x18,0x1c);
    puRam00000001137f8ec8 = puVar1;
  }
  return;
}



/* Entry: 10b716cb0; end: 10b716d17; +[SCWCurrentAirQualityResponse descriptor] */

void FUN_10b716cb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8ed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb2130,
                        &PTR____CFConstantStringClassReference_110f766f8,&PTR_DAT_1133c85b8,
                        &PTR_DAT_1133c8830,3,0x20,0x1c);
    puRam00000001137f8ed0 = puVar1;
  }
  return;
}



/* Entry: 10b716d18; end: 10b716db7; -[AFHTTPClient init] */

undefined * FUN_10b716d18(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long in_x5;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = 0;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_exception_throw();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar10);
  _objc_retain(in_x5);
  puVar2 = puVar3;
  func_0x00010c1370c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0620;
  _objc_alloc(PTR_PTR_1126e0620);
  func_0x00010c25d1c0(puVar3);
  func_0x00010c057d40(puVar4);
  if (lVar10 != 0) {
    lVar5 = 0;
    func_0x000107c30950(0,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        puVar13 = *(undefined **)(lVar12 * 8);
        puVar7 = puVar13;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar9 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar8);
        _objc_release(puVar7);
        puVar7 = puVar13;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        if (((ulong)puVar9 & 1) == 0) {
          puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar8);
          _objc_release(puVar7);
          if ((int)puVar9 == 0) {
            puVar8 = puVar13;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d1c0(puVar3);
            puVar7 = puVar9;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar8);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bfac680(puVar13);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar13;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06f00(puVar4);
          _objc_release(puVar8);
          _objc_release(puVar13);
        }
        _objc_release(puVar7);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
  }
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,puVar4);
  }
  puVar3 = puVar4;
  func_0x00010c134c40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(in_x5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    return *(undefined **)(lVar10 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 10b716db8; end: 10b7170df; -[AFHTTPClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:] */

undefined * FUN_10b716db8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long in_x4;
  long in_x5;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  uVar2 = param_1;
  func_0x00010c1370c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0620;
  _objc_alloc(PTR_PTR_1126e0620);
  func_0x00010c25d1c0(param_1);
  func_0x00010c057d40(puVar3);
  if (in_x4 != 0) {
    lVar4 = 0;
    func_0x000107c30950(0,in_x4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar11 = *(undefined **)(lVar10 * 8);
        puVar6 = puVar11;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar8 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar7);
        _objc_release(puVar6);
        puVar6 = puVar11;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        if (((ulong)puVar8 & 1) == 0) {
          puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c071ae0();
          _objc_release(puVar7);
          _objc_release(puVar6);
          if ((int)puVar8 == 0) {
            puVar7 = puVar11;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d1c0(param_1);
            puVar6 = puVar8;
            func_0x00010bf64920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          else {
            puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        if (puVar6 != (undefined *)0x0) {
          func_0x00010bfac680(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar11;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06f00(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar11);
        }
        _objc_release(puVar6);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,puVar3);
  }
  puVar6 = puVar3;
  func_0x00010c134c40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(in_x5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    return *(undefined **)(in_x4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10b7170e0; end: 10b7170e7; -[AFHTTPClient stringEncoding] */

undefined8 FUN_10b7170e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7170e8; end: 10b7170ef; -[AFHTTPClient parameterEncoding] */

undefined4 FUN_10b7170e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7170f0; end: 10b7170f7; -[AFHTTPClient operationQueue] */

undefined8 FUN_10b7170f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7170f8; end: 10b717133; -[AFHTTPClient .cxx_destruct] */

void FUN_10b7170f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b717134; end: 10b7171f3; -[AFStreamingMultipartFormData initWithURLRequest:stringEncoding:] */

undefined1 * FUN_10b717134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270a1a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ebac0(puVar1);
    func_0x00010c20e820(puVar1);
    puVar2 = PTR_PTR_1126e0628;
    _objc_alloc(PTR_PTR_1126e0628);
    func_0x00010c04e880();
    func_0x00010c172d60(puVar1);
    _objc_release(puVar2);
    _objc_retain(puVar1);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7171f4; end: 10b717303; -[AFStreamingMultipartFormData appendPartWithFileData:name:fileName:mimeType:] */

void FUN_10b7171f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f767d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c220220(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f767f8);
  _objc_release(puVar2);
  func_0x00010c220220(puVar1,param_2,param_6,&PTR____CFConstantStringClassReference_110dbea38);
  _objc_release(param_6);
  func_0x00010bf06f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b717304; end: 10b7173cf; -[AFStreamingMultipartFormData appendPartWithFormData:name:] */

void FUN_10b717304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f76818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c220220(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f767f8);
  _objc_release(puVar2);
  func_0x00010bf06f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7173d0; end: 10b717497; -[AFStreamingMultipartFormData appendPartWithHeaders:body:] */

void FUN_10b7173d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e0630;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c25d1c0(param_1);
  func_0x00010c20e820(puVar1,param_2,uVar2);
  func_0x00010c1a7b40(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c08fa60(param_4);
  func_0x00010c172ce0(puVar1,param_2,uVar2);
  func_0x00010c172cc0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010bf1eb60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06c00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b717498; end: 10b717717; -[AFStreamingMultipartFormData requestByFinalizingMultipartFormData] */

void FUN_10b717498(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010bf1eb60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071780();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_autoreleasePoolPush();
    uVar2 = param_1;
    func_0x00010bf1eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ac860();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f76838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2201e0(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dbea38);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = param_1;
    func_0x00010bf1eb60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c940();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db1798);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2201e0(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110dd69f8);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    uVar2 = param_1;
    func_0x00010bf1eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4c940();
    func_0x00010bf64b80(puVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf1eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8e20();
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf1eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    _objc_retainAutorelease(puVar3);
    func_0x00010bf25f00();
    puVar6 = puVar3;
    func_0x00010c08fa60(puVar3);
    func_0x00010c121160(uVar2,param_2,puVar5,puVar6);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c134680(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c1a4f00(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf1eb60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d9e0();
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_autoreleasePoolPop(uVar1);
  }
  func_0x00010c134680(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b717718; end: 10b71771f; -[AFStreamingMultipartFormData request] */

undefined8 FUN_10b717718(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b717720; end: 10b717727; -[AFStreamingMultipartFormData setRequest:] */

void FUN_10b717720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b717728; end: 10b71772f; -[AFStreamingMultipartFormData bodyStream] */

undefined8 FUN_10b717728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b717730; end: 10b71775f; -[AFStreamingMultipartFormData setBodyStream:] */

void FUN_10b717730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b717760; end: 10b717767; -[AFStreamingMultipartFormData stringEncoding] */

undefined8 FUN_10b717760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b717768; end: 10b71776f; -[AFStreamingMultipartFormData setStringEncoding:] */

void FUN_10b717768(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b717770; end: 10b71779f; -[AFStreamingMultipartFormData .cxx_destruct] */

void FUN_10b717770(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7177a0; end: 10b71783f; -[AFMultipartBodyStream initWithStringEncoding:] */

undefined1 * FUN_10b7177a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a1b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c20e820(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4f40(puVar1);
    _objc_release(puVar2);
    func_0x00010c1cf980(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10b717840; end: 10b7179f3; -[AFMultipartBodyStream setInitialAndFinalBoundaries] */

void FUN_10b717840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bdc1660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_1;
    func_0x00010bdc1660();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x00010c1a6120(uVar3,param_2,0);
          func_0x00010c1a5f80(uVar3,param_2,0);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bdc1660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a6120();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bdc1660();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 1;
    func_0x00010c1a5f80();
    _objc_release(lVar1);
    _objc_release(param_1);
    lVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  func_0x00010bdc1660(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7179f4; end: 10b717a43; -[AFMultipartBodyStream appendHTTPBodyPart:] */

void FUN_10b7179f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdc1660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b717a44; end: 10b717a83; -[AFMultipartBodyStream isEmpty] */

bool FUN_10b717a44(long param_1)

{
  long lVar1;
  
  func_0x00010bdc1660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 10b717a84; end: 10b717beb; -[AFMultipartBodyStream read:maxLength:] */

ulong FUN_10b717a84(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                   )

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  func_0x00010c25c680();
  if (uVar5 != 6) {
    uVar2 = param_2;
    func_0x00010c0deb20();
    uVar5 = param_5;
    if (uVar2 <= param_5) {
      uVar5 = uVar2;
    }
    if (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar2 = param_2;
        func_0x00010bf5eea0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 == 0) {
LAB_10b717b6c:
          uVar2 = param_2;
          func_0x00010bdc1640();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0d9ba0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c187420(param_2,param_3,uVar3);
          _objc_release(uVar3);
          _objc_release(uVar2);
          if (uVar3 == 0) {
            return uVar5;
          }
        }
        else {
          uVar3 = param_2;
          func_0x00010bf5eea0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfd4e40();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar4 & 1) == 0) goto LAB_10b717b6c;
          uVar2 = param_2;
          func_0x00010bf5eea0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c121160();
          uVar5 = uVar3 + uVar5;
          _objc_release(uVar2);
          func_0x00010bf6adc0(param_2);
          puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
          if (0.0 < param_1) {
            func_0x00010bf6adc0(param_2);
            func_0x00010c23e800(puVar1);
          }
        }
        uVar3 = param_2;
        func_0x00010c0deb20();
        uVar2 = param_5;
        if (uVar3 <= param_5) {
          uVar2 = uVar3;
        }
        if (uVar2 <= uVar5) {
          return uVar5;
        }
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10b717bec; end: 10b717bf3; -[AFMultipartBodyStream getBuffer:length:] */

undefined8 FUN_10b717bec(void)

{
  return 0;
}



/* Entry: 10b717bf4; end: 10b717c0f; -[AFMultipartBodyStream hasBytesAvailable] */

bool FUN_10b717bf4(long param_1)

{
  func_0x00010c25c680();
  return param_1 == 2;
}



/* Entry: 10b717c10; end: 10b717c9f; -[AFMultipartBodyStream open] */

void FUN_10b717c10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c25c680();
  if (lVar1 == 2) {
    return;
  }
  func_0x00010c20e560(param_1,param_2,2);
  func_0x00010c1ac860(param_1);
  lVar1 = param_1;
  func_0x00010bdc1660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f20(param_1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b717ca0; end: 10b717ca7; -[AFMultipartBodyStream close] */

void FUN_10b717ca0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStreamStatus__112661380,6);
  return;
}



/* Entry: 10b717ca8; end: 10b717caf; -[AFMultipartBodyStream propertyForKey:] */

undefined8 FUN_10b717ca8(void)

{
  return 0;
}



/* Entry: 10b717cb0; end: 10b717cb7; -[AFMultipartBodyStream setProperty:forKey:] */

undefined8 FUN_10b717cb0(void)

{
  return 0;
}



/* Entry: 10b717cb8; end: 10b717cbb; -[AFMultipartBodyStream scheduleInRunLoop:forMode:] */

void FUN_10b717cb8(void)

{
  return;
}



/* Entry: 10b717cbc; end: 10b717cbf; -[AFMultipartBodyStream removeFromRunLoop:forMode:] */

void FUN_10b717cbc(void)

{
  return;
}



/* Entry: 10b717cc0; end: 10b717dc3; -[AFMultipartBodyStream contentLength] */

long FUN_10b717cc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bdc1660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00010bf4c940(lVar2);
        lVar3 = lVar2 + lVar3;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    return param_1;
  }
  return lVar3;
}



/* Entry: 10b717dc4; end: 10b717dc7; -[AFMultipartBodyStream _scheduleInCFRunLoop:forMode:] */

void FUN_10b717dc4(void)

{
  return;
}



/* Entry: 10b717dc8; end: 10b717dcb; -[AFMultipartBodyStream _unscheduleFromCFRunLoop:forMode:] */

void FUN_10b717dc8(void)

{
  return;
}



/* Entry: 10b717dcc; end: 10b717dd3; -[AFMultipartBodyStream _setCFClientFlags:callback:context:] */

undefined8 FUN_10b717dcc(void)

{
  return 0;
}



/* Entry: 10b717dd4; end: 10b717f23; -[AFMultipartBodyStream copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b717dd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  lVar2 = param_1;
  func_0x00010c25d1c0(param_1);
  func_0x00010c04e880(lVar1,param_2,lVar2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bdc1660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010bf51e00(uVar3);
        func_0x00010bf06c00(lVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c1ac860();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127923dc);
}



/* Entry: 10b717f24; end: 10b717f33; -[AFMultipartBodyStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b717f24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127923dc);
}



/* Entry: 10b717f34; end: 10b717f43; -[AFMultipartBodyStream setStreamStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b717f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127923dc) = param_3;
  return;
}



/* Entry: 10b717f44; end: 10b717f53; -[AFMultipartBodyStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b717f44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792410);
}



/* Entry: 10b717f54; end: 10b717f93; -[AFMultipartBodyStream setStreamError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b717f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112792410;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b717f94; end: 10b717fa3; -[AFMultipartBodyStream stringEncoding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b717f94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127923e0);
}



/* Entry: 10b717fa4; end: 10b717fb3; -[AFMultipartBodyStream setStringEncoding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b717fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127923e0) = param_3;
  return;
}



/* Entry: 10b717fb4; end: 10b717fc3; -[AFMultipartBodyStream HTTPBodyParts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b717fb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792414);
}



/* Entry: 10b717fc4; end: 10b718003; -[AFMultipartBodyStream setHTTPBodyParts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b717fc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112792414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b718004; end: 10b718013; -[AFMultipartBodyStream HTTPBodyPartEnumerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b718004(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792418);
}



/* Entry: 10b718014; end: 10b718053; -[AFMultipartBodyStream setHTTPBodyPartEnumerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b718014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112792418;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b718054; end: 10b718063; -[AFMultipartBodyStream currentHTTPBodyPart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b718054(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279241c);
}



/* Entry: 10b718064; end: 10b7180a3; -[AFMultipartBodyStream setCurrentHTTPBodyPart:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b718064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11279241c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7180a4; end: 10b7180b3; -[AFMultipartBodyStream buffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7180a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112792420);
}



/* Entry: 10b7180b4; end: 10b7180f3; -[AFMultipartBodyStream setBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7180b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112792420;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7180f4; end: 10b718103; -[AFMultipartBodyStream numberOfBytesInPacket] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7180f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127923e4);
}



/* Entry: 10b718104; end: 10b718113; -[AFMultipartBodyStream setNumberOfBytesInPacket:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b718104(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127923e4) = param_3;
  return;
}


