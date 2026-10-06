/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f83d24; end: 106f83d93; -[SCSpectaclesHermosaResponseMessage deviceColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106f83d24(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0xa5) {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bfc5d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb6b00();
    lVar4 = (uVar3 & 0xffffffff) + 5;
    if (6 < (uint)uVar3) {
      lVar4 = 0;
    }
    _objc_release(uVar2);
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}



/* Entry: 106f83d94; end: 106f83e63; -[SCSpectaclesHermosaResponseMessage firmwareVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83d94(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 7) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfccc80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdd1e0();
    if ((int)uVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126c0c68;
      _objc_alloc(PTR_PTR_1126c0c68);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfccc80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c268120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar5,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f83e64; end: 106f83ef3; -[SCSpectaclesHermosaResponseMessage serialNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83e64(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x59) {
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bfca140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfca140(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_106f83ee0;
    }
  }
  uVar4 = 0;
LAB_106f83ee0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f83ef4; end: 106f83efb; -[SCSpectaclesHermosaResponseMessage hasSpaceToRecord] */

undefined8 FUN_106f83ef4(void)

{
  return 1;
}



/* Entry: 106f83efc; end: 106f83f97; -[SCSpectaclesHermosaResponseMessage cloudUploadClientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83efc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0xbf) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd55c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfae0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f83f84;
    }
  }
  uVar3 = 0;
LAB_106f83f84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f83f98; end: 106f84033; -[SCSpectaclesHermosaResponseMessage oauthScopes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f83f98(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0xbf) {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c0dfae0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c150600();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c0dfae0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c1505e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      goto LAB_106f84020;
    }
  }
  uVar5 = 0;
LAB_106f84020:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106f84034; end: 106f840ef; -[SCSpectaclesHermosaResponseMessage hardwareVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84034(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x40) {
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010bf1e980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd7ac0();
    if (((int)uVar3 == 0) || (uVar3 = uVar2, func_0x00010bfd7ae0(), (int)uVar3 == 0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126c0c70;
      _objc_alloc(PTR_PTR_1126c0c70);
      uVar3 = uVar2;
      func_0x00010bfd3840(uVar2);
      uVar4 = uVar2;
      func_0x00010bfd3860(uVar2);
      func_0x00010c00c380(puVar6,param_2,0,uVar3 & 0xffffffff,uVar4 & 0xffffffff);
    }
    _objc_release(uVar2);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f840f0; end: 106f84187; -[SCSpectaclesHermosaResponseMessage nordicTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f840f0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 8) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar2 = lVar3, func_0x00010bfd9860(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (int)lVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010c0db280(lVar3);
      func_0x00010c0df740(puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f84188; end: 106f84223; -[SCSpectaclesHermosaResponseMessage socTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84188(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 8) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar2 = lVar3, func_0x00010bfd4080(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (int)lVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar3;
      func_0x00010bf02340(lVar3);
      func_0x00010c0df760(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f84224; end: 106f842bf; -[SCSpectaclesHermosaResponseMessage coulombCounterTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84224(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 8) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar2 = lVar3, func_0x00010bfd5de0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (int)lVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar3;
      func_0x00010bf529a0(lVar3);
      func_0x00010c0df760(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f842c0; end: 106f8435b; -[SCSpectaclesHermosaResponseMessage wifiTemperature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f842c0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c13ba40();
  if (iVar1 == 8) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfcb160();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) ||
       (lVar2 = lVar3, func_0x00010bfde8a0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
       (int)lVar2 == 0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar3;
      func_0x00010c2a5640(lVar3);
      func_0x00010c0df760(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f8435c; end: 106f84363; -[SCSpectaclesHermosaResponseMessage bluetoothEvent] */

undefined8 FUN_106f8435c(void)

{
  return 0;
}



/* Entry: 106f84364; end: 106f843ef; -[SCSpectaclesHermosaResponseMessage hasWifiState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f84364(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 != 0x83) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c13ba40();
    if (iVar1 != 0x84) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
      func_0x00010c13ba40();
      if (iVar1 == 0x82) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c2a5360(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfdc980();
        _objc_release(uVar2);
        return uVar3;
      }
      return 0;
    }
  }
  return 1;
}



/* Entry: 106f843f0; end: 106f844c7; -[SCSpectaclesHermosaResponseMessage wifiOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f843f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  if (iVar1 == 0x83) {
    func_0x00010c2a5580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfd81e0();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c2a5580(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c080340();
      _objc_release(uVar3);
    }
LAB_106f844ac:
    _objc_release(uVar2);
  }
  else {
    func_0x00010c13ba40();
    if ((int)uVar2 != 0x84) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
      func_0x00010c13ba40();
      if (iVar1 == 0x82) {
        uVar2 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c2a5360(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfdc980();
        goto LAB_106f844ac;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 106f844c8; end: 106f844cf; -[SCSpectaclesHermosaResponseMessage firmwareUpdateResponseType] */

undefined8 FUN_106f844c8(void)

{
  return 3;
}



/* Entry: 106f844d0; end: 106f844d7; -[SCSpectaclesHermosaResponseMessage patchApplied] */

undefined8 FUN_106f844d0(void)

{
  return 0;
}



/* Entry: 106f844d8; end: 106f844ff; -[SCSpectaclesHermosaResponseMessage receivedCheckOTAUpdateAvailabilityRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f844d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xcd;
}



/* Entry: 106f84500; end: 106f84527; -[SCSpectaclesHermosaResponseMessage receivedOTAUpdateRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xce;
}



/* Entry: 106f84528; end: 106f8454f; -[SCSpectaclesHermosaResponseMessage hasLocationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xa6;
}



/* Entry: 106f84550; end: 106f845a3; -[SCSpectaclesHermosaResponseMessage locationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd8a20();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfc7240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f845a4; end: 106f845cb; -[SCSpectaclesHermosaResponseMessage receivedLocationEnabledUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f845a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xa7;
}



/* Entry: 106f845cc; end: 106f84637; -[SCSpectaclesHermosaResponseMessage wiFiStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f845cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0xc0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcc440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_106f85f88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f84638; end: 106f848bb; -[SCSpectaclesHermosaResponseMessage availableWiFiNetworks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f84638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112761be8;
  puVar1 = *(undefined **)(param_1 + lVar5);
  func_0x00010c13ba40();
  if ((int)puVar1 == 0xc1) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010bfc2c60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0d8380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar5;
    func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar2 != 0) {
      lVar4 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(lVar5);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          puVar8 = PTR_PTR_1126d3900;
          _objc_alloc(PTR_PTR_1126d3900);
          uVar3 = uVar9;
          func_0x00010bfdc980();
          if ((int)uVar3 == 0) {
            uVar10 = 0;
          }
          else {
            unaff_x22 = uVar9;
            func_0x00010c24cc00(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = unaff_x22;
          }
          uVar11 = uVar9;
          func_0x00010bfd8160();
          if ((int)uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar9;
            func_0x00010c06fec0(uVar9);
          }
          uVar7 = uVar9;
          func_0x00010bfde840();
          if ((int)uVar7 == 0) {
            uVar12 = 0;
          }
          else {
            uVar7 = uVar9;
            func_0x00010c2a53e0();
            uVar12 = 2;
            if ((int)uVar7 != 2) {
              uVar12 = (int)uVar7 == 1;
            }
          }
          uVar7 = uVar9;
          func_0x00010bfd81a0();
          if ((int)uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar9;
            func_0x00010c07b5c0(uVar9);
          }
          func_0x00010c07d080();
          func_0x00010c04b6e0(puVar8,param_2,uVar10,uVar11,uVar12,uVar7,0,0,(char)uVar9);
          if ((int)uVar3 != 0) {
            _objc_release(unaff_x22);
          }
          func_0x00010befa120(puVar1,param_2,puVar8);
          _objc_release(puVar8);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar5);
    puVar8 = PTR_PTR_1126d3908;
    _objc_alloc(PTR_PTR_1126d3908);
    func_0x00010c02f880();
    _objc_release();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar3 = *(undefined8 *)(puVar1 + _DAT_112761be8);
    func_0x00010c13ba40(uVar3);
    return (undefined *)(ulong)((int)uVar3 == 0xad);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 106f848bc; end: 106f848e3; -[SCSpectaclesHermosaResponseMessage setWifiNetworksResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f848bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xad;
}



/* Entry: 106f848e4; end: 106f849a3; -[SCSpectaclesHermosaResponseMessage lensLaunchResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f848e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010c13ba40();
  if (iVar1 == 0x11d) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c094d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252d60();
    _objc_release(uVar2);
    uVar2 = 4;
    if (3 < (int)uVar3 - 1U) {
      uVar2 = 0;
    }
    puVar5 = PTR_PTR_1126d3910;
    _objc_alloc(PTR_PTR_1126d3910);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c094d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c261740();
    func_0x00010c04c300(puVar5,param_2,uVar2,uVar3);
    _objc_release(uVar4);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f849a4; end: 106f84b33; -[SCSpectaclesHermosaResponseMessage mediaCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f849a4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uVar6;
  long lVar9;
  
  lVar11 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010c13ba40();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 == 0x9d) {
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0c47c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfde500();
    if ((int)uVar5 == 0) {
      iVar1 = 0;
    }
    else {
      uStack_68 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c0c47c0();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = uStack_68;
      func_0x00010c0c47a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_70;
      func_0x00010c29bec0();
      iVar1 = (int)uVar6;
    }
    uVar7 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c0c47c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c0c47a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bfda300();
    iVar2 = 0;
    if ((int)uVar8 != 0) {
      param_1 = *(long *)(param_1 + lVar11);
      func_0x00010c0c47c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0c47a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar11;
      func_0x00010c0fb780();
      iVar2 = (int)lVar9;
    }
    func_0x00010c0df820(puVar10,param_2,iVar2 + iVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar8 != 0) {
      _objc_release(lVar11);
      _objc_release(param_1);
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
    if ((int)uVar5 != 0) {
      _objc_release(uStack_70);
      _objc_release(uStack_68);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106f84b34; end: 106f84b5b; -[SCSpectaclesHermosaResponseMessage receivedUserAssociationDoneMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84b34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x9f;
}



/* Entry: 106f84b5c; end: 106f84bc3; -[SCSpectaclesHermosaResponseMessage audioLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84b5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar2 == 0xb7) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfc29a0(uVar3);
    func_0x00010c0df760(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f84bc4; end: 106f84c2b; -[SCSpectaclesHermosaResponseMessage brightnessLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar2 == 0xb9) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfc31e0(uVar3);
    func_0x00010c0df760(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f84c2c; end: 106f84c53; -[SCSpectaclesHermosaResponseMessage hasAutoBrightness] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84c2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xf5;
}



/* Entry: 106f84c54; end: 106f84ca7; -[SCSpectaclesHermosaResponseMessage autoBrightnessEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd4620();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfc2aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06cba0();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f84ca8; end: 106f84ccf; -[SCSpectaclesHermosaResponseMessage receivedAutoBrightnessEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84ca8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xf4;
}



/* Entry: 106f84cd0; end: 106f84d33; -[SCSpectaclesHermosaResponseMessage systemSoundMuted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f84cd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c13ba40();
  if (iVar1 == 0x114) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfcafc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c080800();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 106f84d34; end: 106f84d5b; -[SCSpectaclesHermosaResponseMessage hasMuteSystemSound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84d34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x113;
}



/* Entry: 106f84d5c; end: 106f84d83; -[SCSpectaclesHermosaResponseMessage hasGetLowPowerModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84d5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xda;
}



/* Entry: 106f84d84; end: 106f84e17; -[SCSpectaclesHermosaResponseMessage lowPowerModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84d84(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010bfd7720();
  if ((int)lVar5 == 0) {
    bVar1 = false;
  }
  else {
    lVar5 = (long)_DAT_112761be8;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bfc7540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8760();
    if ((int)uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfc7540(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c098a00();
      bVar1 = (int)uVar3 != 0;
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  return bVar1;
}



/* Entry: 106f84e18; end: 106f84e3f; -[SCSpectaclesHermosaResponseMessage hasSetLowPowerModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xd9;
}



/* Entry: 106f84e40; end: 106f84e67; -[SCSpectaclesHermosaResponseMessage contentCleared] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84e40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xde;
}



/* Entry: 106f84e68; end: 106f84e8f; -[SCSpectaclesHermosaResponseMessage hasGetQuickSaveModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84e68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xe3;
}



/* Entry: 106f84e90; end: 106f84ee3; -[SCSpectaclesHermosaResponseMessage quickSaveModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f84e90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd7760();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfc94e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f84ee4; end: 106f84f0b; -[SCSpectaclesHermosaResponseMessage hasSetQuickSaveModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84ee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xe4;
}



/* Entry: 106f84f0c; end: 106f84f33; -[SCSpectaclesHermosaResponseMessage hasPerformFactoryResetResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84f0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xe0;
}



/* Entry: 106f84f34; end: 106f84f5b; -[SCSpectaclesHermosaResponseMessage hasClearCacheResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84f34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xdf;
}



/* Entry: 106f84f5c; end: 106f84f83; -[SCSpectaclesHermosaResponseMessage hasQcomResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x30;
}



/* Entry: 106f84f84; end: 106f84fab; -[SCSpectaclesHermosaResponseMessage _hasGetQcomStateResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f84f84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x91;
}



/* Entry: 106f84fac; end: 106f85003; -[SCSpectaclesHermosaResponseMessage getQcomStateResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f84fac(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be33f20();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + _DAT_112761be8);
    func_0x00010c11cc00();
    if ((uint)uVar2 < 0xb) {
      uVar3 = *(undefined8 *)(&UNK_10de19440 + (uVar2 & 0xffffffff) * 8);
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 106f85004; end: 106f851ef; -[SCSpectaclesHermosaResponseMessage availableLensesGetResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f85004(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_112761be8;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c13ba40();
  if ((int)lVar1 == 0x135) {
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010bf12820();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar7 = lVar1;
    func_0x00010bf127e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          puVar3 = PTR_PTR_1126c1a28;
          _objc_alloc(PTR_PTR_1126c1a28);
          uVar5 = uVar9;
          func_0x00010bfe5ea0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          func_0x00010c0d4f60(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe5bc0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c024620(puVar3,param_2,uVar5,uVar4,uVar9,0);
          _objc_release(uVar9);
          _objc_release(uVar4);
          _objc_release(uVar5);
          func_0x00010befa120(puVar6,param_2,puVar3);
          _objc_release(puVar3);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar7;
        func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar7);
    _objc_release();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar5);
  return (undefined *)(ulong)((int)uVar5 == 0xd6);
}



/* Entry: 106f851f0; end: 106f85217; -[SCSpectaclesHermosaResponseMessage hasGetDeveloperModeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f851f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xd6;
}



/* Entry: 106f85218; end: 106f8526b; -[SCSpectaclesHermosaResponseMessage developerModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85218(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd7700();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010c18c6c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8f300();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f8526c; end: 106f852bf; -[SCSpectaclesHermosaResponseMessage oemUnlockingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f8526c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd7700();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010c18c6c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fa80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f852c0; end: 106f852e7; -[SCSpectaclesHermosaResponseMessage hasSetAdbKeyResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f852c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xf1;
}



/* Entry: 106f852e8; end: 106f8530f; -[SCSpectaclesHermosaResponseMessage _hasBatteryPreservationMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f852e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x12e;
}



/* Entry: 106f85310; end: 106f8536f; -[SCSpectaclesHermosaResponseMessage batteryPreservationModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85310(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010be33c20();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfc2f20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cfd40();
    bVar1 = (int)uVar4 == 2;
    _objc_release(uVar3);
  }
  return bVar1;
}



/* Entry: 106f85370; end: 106f85397; -[SCSpectaclesHermosaResponseMessage hasUserDeviceSecurityData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0xf7;
}



/* Entry: 106f85398; end: 106f853fb; -[SCSpectaclesHermosaResponseMessage userDeviceSecurityData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85398(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bfde0c0();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfcbdc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_106f861d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f853fc; end: 106f85497; -[SCSpectaclesHermosaResponseMessage setUserDevicePasswordResponseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f853fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c21e260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5660();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c21e260(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    _objc_release(uVar2);
  }
  _objc_alloc(PTR_PTR_1126d3918);
  func_0x00010c03fbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f85498; end: 106f854e7; -[SCSpectaclesHermosaResponseMessage verifyPasscodeResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85498(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c2989a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3ec40();
  _objc_release(uVar1);
  return (int)uVar2 - 4U < 0xfffffffd;
}



/* Entry: 106f854e8; end: 106f85623; -[SCSpectaclesHermosaResponseMessage _spectaclesSettingsValueForValue:] */

void FUN_106f854e8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c2970a0();
  puVar3 = PTR_PTR_1126c1a20;
  iVar1 = (int)uVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      unaff_x20 = PTR_PTR_1126c1a20;
      func_0x00010c0db140(PTR_PTR_1126c1a20);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 1) {
      uVar2 = param_4;
      func_0x00010c25d700(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26cd40(puVar3,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      unaff_x20 = puVar3;
    }
  }
  else if (iVar1 == 2) {
    uVar2 = param_4;
    func_0x00010bf1f3c0(param_4);
    func_0x00010bf1f520(puVar3,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar3;
  }
  else if (iVar1 == 4) {
    func_0x00010bfb2c80(param_4);
    func_0x00010bfb2d40((double)param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar3;
  }
  else if (iVar1 == 3) {
    uVar2 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c068000(puVar3,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar3;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 106f85624; end: 106f858e7; -[SCSpectaclesHermosaResponseMessage settingsForCategoryResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85624(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_170;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112761be8;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c13ba40();
  if ((int)lVar2 == 0x129) {
    puStack_170 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_1 + lVar10);
    func_0x00010bfca2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c227e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        puVar13 = *(undefined **)(lVar11 * 8);
        puVar3 = puVar13;
        func_0x00010c296d80(puVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bebea20(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar5 = puVar13;
        func_0x00010c0ec880();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR____NSArray0__struct_11034ab48;
        if (puVar6 != (undefined *)0x0) {
          puVar3 = puVar6;
        }
        _objc_retain(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126c1a18;
        _objc_alloc(PTR_PTR_1126c1a18);
        puVar6 = puVar13;
        func_0x00010c227ea0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar13;
        func_0x00010c2711a0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e2c0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c045800(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar13);
        _objc_release(puVar7);
        _objc_release(puVar6);
        func_0x00010befa120(puStack_170);
        _objc_release(puVar5);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release();
  }
  else {
    puStack_170 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    uVar12 = *(undefined8 *)(lVar2 + 0x20);
    _objc_retain(param_2);
    uVar8 = param_2;
    func_0x00010c296d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebea20(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puStack_170 = PTR_PTR_1126c1dd0;
    _objc_alloc(PTR_PTR_1126c1dd0);
    uVar8 = param_2;
    func_0x00010c087500(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c0214a0(puStack_170);
    _objc_release(uVar8);
    _objc_release(uVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_170);
  return;
}



/* Entry: 106f858e8; end: 106f8599f;  */

void FUN_106f858e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebea20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c1dd0;
  _objc_alloc(PTR_PTR_1126c1dd0);
  uVar1 = param_2;
  func_0x00010c087500(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0214a0(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f859a0; end: 106f859c7; -[SCSpectaclesHermosaResponseMessage hasSetBatchSettingsResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f859a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 299;
}



/* Entry: 106f859c8; end: 106f859d7; -[SCSpectaclesHermosaResponseMessage setBatchSettingsResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f859c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112761be8),PTR_s_setBatchSettingsResponse_112639848);
  return;
}



/* Entry: 106f859d8; end: 106f85a5b; -[SCSpectaclesHermosaResponseMessage validatePairingResult] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f859d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c2969e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdb3a0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c2969e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13ca20();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 106f85a5c; end: 106f85ae7; -[SCSpectaclesHermosaResponseMessage peerPublicKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85a5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c1d8d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdac20();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c1d8d60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f85ae8; end: 106f85b73; -[SCSpectaclesHermosaResponseMessage peerVerificationNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85ae8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c1d8d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9820();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c1d8d60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0db0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f85b74; end: 106f85bff; -[SCSpectaclesHermosaResponseMessage peerVerificationSigPairing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85b74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c1da100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc120();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c1da100(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c23b8a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f85c00; end: 106f85c8b; -[SCSpectaclesHermosaResponseMessage peerVerificationPairingSCCertChain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85c00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761be8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c1da100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f3400();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1da100(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f33e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f85c8c; end: 106f85d17; -[SCSpectaclesHermosaResponseMessage encryptionSetupNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85c8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf94020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9820();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf94020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0db0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f85d18; end: 106f85da3; -[SCSpectaclesHermosaResponseMessage channelEncryptionNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85d18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112761be8;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c17ab40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9820();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c17ab40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0db0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f85da4; end: 106f85dcb; -[SCSpectaclesHermosaResponseMessage hasGetOTAAutoUpdateEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85da4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x102;
}



/* Entry: 106f85dcc; end: 106f85e1f; -[SCSpectaclesHermosaResponseMessage otaAutoUpdateEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85dcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bfd7740();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112761be8);
    func_0x00010bfc85c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106f85e20; end: 106f85e47; -[SCSpectaclesHermosaResponseMessage hasSetOTAAutoUpdateEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85e20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x103;
}



/* Entry: 106f85e48; end: 106f85e6f; -[SCSpectaclesHermosaResponseMessage hasCancelOTAUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85e48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x115;
}



/* Entry: 106f85e70; end: 106f85edb; -[SCSpectaclesHermosaResponseMessage proxyManualStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f85e70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112761be8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c13ba40();
  if (iVar1 == 0x111) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c119fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf98940();
    uVar4 = 1;
    if ((int)uVar3 != 0) {
      uVar4 = 2;
    }
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 106f85edc; end: 106f85f03; -[SCSpectaclesHermosaResponseMessage proxyManualStop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f85edc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  func_0x00010c13ba40(uVar1);
  return (int)uVar1 == 0x112;
}



/* Entry: 106f85f04; end: 106f85f33; -[SCSpectaclesHermosaResponseMessage genericResponseProtocol] */

void FUN_106f85f04(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e90098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e90098);
  return;
}



/* Entry: 106f85f34; end: 106f85f63; -[SCSpectaclesHermosaResponseMessage genericResponseData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85f34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761be8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f85f64; end: 106f85f73; -[SCSpectaclesHermosaResponseMessage hermosaResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f85f64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761be8);
}



/* Entry: 106f85f74; end: 106f85f87; -[SCSpectaclesHermosaResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f85f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761be8,0);
  return;
}



/* Entry: 106f85f88; end: 106f861b3;  */

void FUN_106f85f88(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_106f86054;
  }
  uVar3 = param_1;
  func_0x00010bfd8120();
  if (((int)uVar3 == 0) ||
     (uVar3 = param_1, func_0x00010c06f120(), puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     (int)uVar3 == 0)) {
LAB_106f86000:
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c24cc00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,uVar3);
    _objc_release(uVar3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_106f86000;
    puVar6 = PTR_PTR_1126d3900;
    _objc_alloc(PTR_PTR_1126d3900);
    uVar3 = param_1;
    func_0x00010bfdc980();
    if ((int)uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1;
      func_0x00010c24cc00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = param_1;
    func_0x00010bfde840();
    if ((int)uVar1 == 0) {
      uVar8 = 0;
    }
    else {
      uVar1 = param_1;
      func_0x00010c2a53e0();
      uVar8 = 2;
      if ((int)uVar1 != 2) {
        uVar8 = (int)uVar1 == 1;
      }
    }
    uVar1 = param_1;
    func_0x00010bfd80c0();
    if ((int)uVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1;
      func_0x00010c06afe0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = param_1;
    func_0x00010bfd66a0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c04b6e0(puVar6,param_2,uVar5,1,uVar8,0,uVar7,0,1);
    }
    else {
      uVar2 = param_1;
      func_0x00010bf872a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04b6e0(puVar6,param_2,uVar5,1,uVar8,0,uVar7,uVar2,1);
      _objc_release(uVar2);
    }
    if ((int)uVar1 != 0) {
      _objc_release(uVar7);
    }
    if ((int)uVar3 != 0) {
      _objc_release(uVar5);
    }
  }
  puVar4 = PTR_PTR_1126d3920;
  _objc_alloc(PTR_PTR_1126d3920);
  uVar3 = param_1;
  func_0x00010bfd8200();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c083c20(param_1);
  }
  func_0x00010c0631a0(puVar4,param_2,uVar3,puVar6);
  _objc_release(puVar6);
LAB_106f86054:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f861b4; end: 106f861d7;  */

undefined8 FUN_106f861b4(int param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&UNK_10de19498 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106f861d8; end: 106f86407;  */

void FUN_106f861d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfdb300();
    if ((int)lVar1 != 0) {
      func_0x00010c137520(param_1);
    }
    lVar1 = param_1;
    func_0x00010bfd8a80();
    if ((int)lVar1 != 0) {
      func_0x00010c0a00a0();
    }
    lVar1 = param_1;
    func_0x00010bfd8aa0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar1 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c0a00c0(param_1);
      func_0x00010c0df760(puVar3,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_1;
    func_0x00010bfda2c0();
    if ((int)lVar1 != 0) {
      func_0x00010c0fb160(param_1);
    }
    lVar1 = param_1;
    func_0x00010bfde160();
    if ((int)lVar1 != 0) {
      func_0x00010c292d80(param_1);
    }
    lVar1 = param_1;
    func_0x00010bfd4440();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf0dc40(param_1);
      func_0x00010c0df760(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_1;
    func_0x00010bfdd580();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar1 = param_1;
      func_0x00010c26fb40(param_1);
      func_0x00010c0df760(puVar5,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = param_1;
    func_0x00010bfd6520();
    if ((int)lVar1 != 0) {
      func_0x00010bf7ef00();
    }
    lVar1 = param_1;
    func_0x00010bfddd00();
    if ((int)lVar1 != 0) {
      func_0x00010c2816e0();
    }
    puVar2 = PTR_PTR_1126d3928;
    _objc_alloc(PTR_PTR_1126d3928);
    func_0x00010c03f680();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f86408; end: 106f864df; -[SCSpectaclesHermosaRpcMessageFactory responseFromData:requestProvidingBlock:error:] */

void FUN_106f86408(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3930;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010bfe5ea0(puVar1);
      lVar2 = param_4;
      (**(code **)(param_4 + 0x10))(param_4,(ulong)puVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126d3938;
    _objc_alloc(PTR_PTR_1126d3938);
    func_0x00010c01a4c0();
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f864e0; end: 106f86533; -[SCSpectaclesHermosaRpcMessageFactory setupRpcRequest:withRequestID:] */

void FUN_106f864e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c18d0;
  _objc_opt_class(PTR_PTR_1126c18d0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1a99c0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f86534; end: 106f8653b; -[SCSpectaclesHermosaRpcMessageFactory rpcRequestsFromSpecsRequestMessage:] */

void FUN_106f86534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_hermosaRequests_1125d5cb8);
  return;
}



/* Entry: 106f8653c; end: 106f865c3; -[SCSpectaclesHermosaRpcMessageFactory pushResponseMessageFromData:error:] */

void FUN_106f8653c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3940;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d3948;
    _objc_alloc(PTR_PTR_1126d3948);
    func_0x00010c01a480();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f865c4; end: 106f865cb; -[SCSpectaclesHermosaRpcMessageFactory genericChannelRequestsFromNetworkRequest:] */

void FUN_106f865c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_hermosaRequests_1125d5cb8);
  return;
}



/* Entry: 106f865cc; end: 106f8667b; -[SCSpectaclesHermosaRpcMessageFactory networkResponseFromData:URLResponse:error:] */

void FUN_106f865cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3930;
  _objc_alloc();
  func_0x00010c008360();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d3950;
    _objc_alloc(PTR_PTR_1126d3950);
    uVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c040ac0(puVar3,param_2,puVar1,param_4,uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8667c; end: 106f86853; -[SCSpectaclesHermosaRpcMessageFactory networkResponseDescriptionFromData:] */

void FUN_106f8667c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d3930;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c13ba40();
  if ((int)puVar2 == 0x9e) {
    puVar2 = puVar1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd6200();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar4 != 0) {
      puVar4 = puVar1;
      func_0x00010c0c64c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08fa60();
      func_0x00010c0df840(puVar3,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8fd78);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar3 = puVar2;
      func_0x00010bf64920(puVar2,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0c64c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c4820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189980();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  puVar2 = puVar1;
  func_0x00010bf6e340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f86854; end: 106f86903; -[SCSpectaclesHermosaRpcMessageFactory networkResponseFromResponseMessage:] */

void FUN_106f86854(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126d3938;
  _objc_opt_class(PTR_PTR_1126d3938);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d3958;
    _objc_alloc(PTR_PTR_1126d3958);
    uVar2 = param_3;
    func_0x00010bfe0c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb00(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f86904; end: 106f86b23; -[SCSpectaclesRPCNetworkClient initWithSession:connectivityDelegate:messagingDelegate:rpcMessageFactory:packetEncryptorBuilder:enableEncryption:encryptionKey:] */

undefined1 *
FUN_106f86904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             long param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_4);
  _objc_initWeak(auStack_60,param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f80b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = auStack_58;
    _objc_loadWeakRetained(puVar5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),puVar5);
    _objc_release(puVar5);
    puVar5 = auStack_60;
    _objc_loadWeakRetained(puVar5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x58),puVar5);
    _objc_release(puVar5);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x4c) = 0;
    if (*(char *)((long)puVar1 + 0x10) == '\x01') {
      lVar4 = param_9;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        puVar5 = (undefined1 *)0x0;
        goto LAB_106f86aa8;
      }
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined8 *)((long)puVar1 + 0x40) = param_7;
      _objc_release(uVar2);
      func_0x00010c1b6b40(*(undefined8 *)((long)puVar1 + 0x40));
    }
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_106f86aa8:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 106f86b24; end: 106f86b2b; -[SCSpectaclesRPCNetworkClient start] */

void FUN_106f86b24(long param_1)

{
  *(undefined1 *)(param_1 + 0x49) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010beac570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupEncryption_112588b00);
  return;
}



/* Entry: 106f86b2c; end: 106f86b37; -[SCSpectaclesRPCNetworkClient suspend] */

void FUN_106f86b2c(long param_1)

{
  *(undefined2 *)(param_1 + 0x48) = 0x100;
                    /* WARNING: Could not recover jumptable at 0x00010bec9130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__suspendAllTasks_11258fdf0);
  return;
}



/* Entry: 106f86b38; end: 106f86b8b; -[SCSpectaclesRPCNetworkClient halt] */

void FUN_106f86b38(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  _os_unfair_lock_lock(param_1 + 0x4c);
  func_0x00010c069d40(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x4c);
  return;
}



/* Entry: 106f86b8c; end: 106f86b93; -[SCSpectaclesRPCNetworkClient isActive] */

undefined1 FUN_106f86b8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 106f86b94; end: 106f86ba3; -[SCSpectaclesRPCNetworkClient isConnected] */

bool FUN_106f86b94(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}



/* Entry: 106f86ba4; end: 106f86e17; -[SCSpectaclesRPCNetworkClient sendRequest:] */

void FUN_106f86ba4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(param_1);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010bfc0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(lVar8 * 8);
        func_0x00010c1423c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          func_0x00010bf48ec0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf42c80(param_1);
          _objc_release(puVar5);
          _objc_release(puVar6);
          _objc_release(param_1);
          goto LAB_106f86dd0;
        }
        func_0x00010be17b00(param_1);
        _objc_release(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
LAB_106f86dd0:
    _objc_release(lVar2);
    _objc_release(lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdda410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106f86e18; end: 106f86e1b; -[SCSpectaclesRPCNetworkClient cancelOutstandingRequest] */

void FUN_106f86e18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelAllTasks_1125542a0);
  return;
}



/* Entry: 106f86e1c; end: 106f8712f; -[SCSpectaclesRPCNetworkClient _fireRequest:encryptMessage:] */

void FUN_106f86e1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010bdc3bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar1 = param_1;
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e8fe78;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(lVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(lVar1);
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_106f87130;
    uStack_88 = 0x106f87140;
    uStack_80 = 0;
    lVar1 = lVar4;
    func_0x00010bdc16c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106f82934();
    _objc_release(lVar1);
    _objc_initWeak(auStack_b0,param_1);
    _os_unfair_lock_lock(param_1 + 0x4c);
    ppuVar3 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uVar6 = *(undefined8 *)(param_1 + 8);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_106f87148;
    puStack_d0 = &UNK_110986150;
    ppuVar2 = &puStack_e8;
    _objc_copyWeak(auStack_b8,auStack_b0);
    puStack_c0 = &uStack_a8;
    _objc_retain(param_3);
    lStack_c8 = param_3;
    func_0x00010bf647e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puStack_a0[5];
    puStack_a0[5] = uVar6;
    _objc_release(uVar5);
    if (puStack_a0[5] != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puStack_118 = (undefined *)ppuVar3;
      uStack_110 = 0xc2000000;
      uStack_108 = 0x106f87328;
      puStack_100 = &UNK_110850308;
      ppuVar3 = &puStack_118;
      _objc_copyWeak(auStack_f0,auStack_b0);
      puStack_f8 = &uStack_a8;
      func_0x00010c0f7fc0(uVar6);
      _objc_destroyWeak(auStack_f0);
    }
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_b8);
    _os_unfair_lock_unlock(param_1 + 0x4c);
    _objc_destroyWeak(auStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 5);
  _objc_destroyWeak(ppuVar2 + 6);
  _os_unfair_lock_unlock(param_1 + 0x4c);
  _objc_destroyWeak(auStack_b0);
  lVar4 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 106f87130; end: 106f87147;  */

void FUN_106f87130(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


