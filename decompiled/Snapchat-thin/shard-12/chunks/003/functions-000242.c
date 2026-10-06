/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109021764; end: 109021823; +[SCMapTweakCOFHelper boolValueWithManualExposure:forTweakValue:circumstanceEngine:configKeyName:defaultValue:] */

ulong FUN_109021764(undefined8 param_1,undefined8 param_2,int param_3,long param_4,ulong param_5,
                   undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c0b84a0(param_5,param_2,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_5;
    func_0x00010c296d80(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_7 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  if ((param_3 == 0) || (param_4 != 0)) {
    if (param_4 != 0) {
      param_7 = (ulong)(param_4 != 2);
    }
  }
  else {
    func_0x00010bf9d480(param_5);
  }
  _objc_release(param_5);
  return param_7;
}



/* Entry: 109021824; end: 109021843;  */

void FUN_109021824(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcf48,PTR_s_boolValueForTweakValue_circumsta_1125a56d0,0,param_1,
             &PTR____CFConstantStringClassReference_110f191b8,0);
  return;
}



/* Entry: 109021844; end: 1090218bb;  */

long FUN_109021844(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f191d8,0xa8c0,0);
  return (long)(int)param_1;
}



/* Entry: 1090218bc; end: 10902194f;  */

void FUN_1090218bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_longValueForConfigKeySync_defaul_11260ae20,
             &PTR____CFConstantStringClassReference_110f19238,0,0);
  return;
}



/* Entry: 109021950; end: 10902198b;  */

undefined ** FUN_109021950(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0x10daafd8;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110daafd8,param_2,
                      &PTR____CFConstantStringClassReference_110deb938);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111175378;
  if (iVar2 == 0) {
    ppuVar1 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  }
  return ppuVar1;
}



/* Entry: 10902198c; end: 109021b73;  */

void FUN_10902198c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR____CFConstantStringClassReference_110daafd8,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110deb938);
  return;
}



/* Entry: 109021b74; end: 109021bc7;  */

double FUN_109021b74(double param_1,undefined8 param_2)

{
  double dVar1;
  
  _objc_retain();
  func_0x00010c0c32c0(param_2);
  dVar1 = 18.0;
  if (0.0 < param_1) {
    func_0x00010c0c32c0(param_2);
    dVar1 = param_1;
  }
  _objc_release(param_2);
  return dVar1;
}



/* Entry: 109021bc8; end: 109021c37;  */

undefined8 FUN_109021bc8(void)

{
  return 0;
}



/* Entry: 109021c38; end: 109021c73;  */

void FUN_109021c38(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  ppuVar1 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 109021c74; end: 109021d37;  */

void FUN_109021c74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable3DOrSatelliteToggle_1125c1598);
  return;
}



/* Entry: 109021d38; end: 109021d5f;  */

long FUN_109021d38(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19618,0x15e,0);
  return (long)(int)param_1;
}



/* Entry: 109021d60; end: 109021db7;  */

void FUN_109021d60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19638,0,0);
  return;
}



/* Entry: 109021db8; end: 109021e97;  */

void FUN_109021db8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109021e98; end: 109021ebf;  */

long FUN_109021e98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f196b8,10,0);
  return (long)(int)param_1;
}



/* Entry: 109021ec0; end: 109021f1b;  */

void FUN_109021ec0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f196d8,0,0);
  return;
}



/* Entry: 109021f1c; end: 109021f43;  */

long FUN_109021f1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19758,0,0);
  return (long)(int)param_1;
}



/* Entry: 109021f44; end: 109022003;  */

void FUN_109021f44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19778,0,0);
  return;
}



/* Entry: 109022004; end: 10902206f;  */

undefined8 FUN_109022004(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dc3a38,param_2,
                      &PTR____CFConstantStringClassReference_110dc3a38);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dc3a38,param_2,
                        &PTR____CFConstantStringClassReference_110f19878);
    if ((uVar2 & 1) == 0) {
      iVar1 = 0x10dc3a38;
      func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110dc3a38,param_2,
                          &PTR____CFConstantStringClassReference_110f19898);
      uVar3 = 2;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 109022070; end: 109022077;  */

undefined8 FUN_109022070(void)

{
  return 0;
}



/* Entry: 109022078; end: 10902209f;  */

long FUN_109022078(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f198b8,1,0);
  return (long)(int)param_1;
}



/* Entry: 1090220a0; end: 1090220eb;  */

void FUN_1090220a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcf48,PTR_s_boolValueForTweakValue_circumsta_1125a56d0,0,param_1,
             &PTR____CFConstantStringClassReference_110f198d8,0);
  return;
}



/* Entry: 1090220ec; end: 109022113;  */

long FUN_1090220ec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19918,10,0);
  return (long)(int)param_1;
}



/* Entry: 109022114; end: 10902213b;  */

void FUN_109022114(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19938,0,0);
  return;
}



/* Entry: 10902213c; end: 10902218f;  */

void FUN_10902213c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109022190; end: 10902219b;  */

undefined ** FUN_109022190(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10902219c; end: 10902225b;  */

undefined8 FUN_10902219c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010bfb2ce0(param_2,param_3,&PTR____CFConstantStringClassReference_110f19978,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0x4026000000000000;
  }
  else {
    func_0x00010bf885a0(param_2);
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10902225c; end: 1090222b3;  */

long FUN_10902225c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c067f20(param_1,param_2,&PTR____CFConstantStringClassReference_110f199b8,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c067fc0(param_1);
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1090222b4; end: 10902237b;  */

void FUN_1090222b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126dcf48,PTR_s_boolValueForTweakValue_circumsta_1125a56d0,0,param_1,
             &PTR____CFConstantStringClassReference_110f199d8,0);
  return;
}



/* Entry: 10902237c; end: 1090223a3;  */

long FUN_10902237c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19af8,0xe10,0);
  return (long)(int)param_1;
}



/* Entry: 1090223a4; end: 1090223b7;  */

void FUN_1090223a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,param_1,PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,
             &PTR____CFConstantStringClassReference_110f19b18,0);
  return;
}



/* Entry: 1090223b8; end: 1090223df;  */

long FUN_1090223b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19b38,5,0);
  return (long)(int)param_1;
}



/* Entry: 1090223e0; end: 10902241b;  */

void FUN_1090223e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19b58,0,0);
  return;
}



/* Entry: 10902241c; end: 109022443;  */

long FUN_10902241c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f19bb8,0,0);
  return (long)(int)param_1;
}



/* Entry: 109022444; end: 109022457;  */

void FUN_109022444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19bd8,0,0);
  return;
}



/* Entry: 109022458; end: 1090224af;  */

double FUN_109022458(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 16.5;
  func_0x00010bfb2cc0(0x41840000,param_1,param_2,&PTR____CFConstantStringClassReference_110f19bf8,0)
  ;
  return (double)fVar1;
}



/* Entry: 1090224b0; end: 1090224df;  */

undefined8 FUN_1090224b0(void)

{
  return 0;
}



/* Entry: 1090224e0; end: 1090224e7; -[SCLocationSharingServices locationNotificationPresenter] */

undefined8 FUN_1090224e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090224e8; end: 10902252f; -[SCLocationSharingServices .cxx_destruct] */

void FUN_1090224e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109022530; end: 10902262f; -[SCLocationSharingPreferences initWithSharingAudience:ghostMode:ghostModeExpirationDate:whitelistSharingModeUserIds:blacklistSharingModeUserIds:onboardedToSimplified:] */

undefined1 *
FUN_109022530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ffe78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 109022630; end: 109022653; -[SCLocationSharingPreferences copyWithZone:] */

undefined8 FUN_109022630(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109022654; end: 109022703; -[SCLocationSharingPreferences encodeWithCoder:] */

void FUN_109022654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f19c58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e30258);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f19c78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f19c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f19cb8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f19cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109022704; end: 109022797; -[SCLocationSharingPreferences hash] */

long * FUN_109022704(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  plVar3 = &lStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(plVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_109022860:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10902286c;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) &&
       (((plVar3[2] == param_3[2] && ((char)plVar3[1] == (char)param_3[1])) &&
        (*(char *)((long)plVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = plVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[5];
          if (plVar6 != (long *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_10902286c;
          }
          goto LAB_109022860;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10902286c:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 109022798; end: 109022887; -[SCLocationSharingPreferences isEqual:] */

long FUN_109022798(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109022860:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10902286c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10902286c;
          }
          goto LAB_109022860;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10902286c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109022888; end: 10902288f; -[SCLocationSharingPreferences ghostModeExpirationDate] */

undefined8 FUN_109022888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109022890; end: 109022897; -[SCLocationSharingPreferences whitelistSharingModeUserIds] */

undefined8 FUN_109022890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109022898; end: 10902289f; -[SCLocationSharingPreferences blacklistSharingModeUserIds] */

undefined8 FUN_109022898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090228a0; end: 1090228a7; -[SCLocationSharingPreferences onboardedToSimplified] */

undefined1 FUN_1090228a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1090228a8; end: 1090228e3; -[SCLocationSharingPreferences .cxx_destruct] */

void FUN_1090228a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1090228e4; end: 10902294b; +[SCMSqliteConfig descriptor] */

void FUN_1090228e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137306a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be1210,
                        &PTR____CFConstantStringClassReference_110f19cf8,&PTR_DAT_1132bed18,
                        &PTR_DAT_1132bed30,0xc,0x14,0x1c);
    puRam00000001137306a0 = puVar1;
  }
  return;
}



/* Entry: 10902294c; end: 109022a3b;  */

void FUN_10902294c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f19d18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f19d18,
                      &PTR____CFConstantStringClassReference_110f19d38,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 109022a3c; end: 109022a47; +[SCCAEAGLView layerClass] */

void FUN_109022a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0);
  return;
}



/* Entry: 109022a48; end: 109022a4b; -[SCCAEAGLView glLayer] */

void FUN_109022a48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 109022a4c; end: 109022a4f; -[SCCAEAGLView renderInContext:] */

void FUN_109022a4c(void)

{
  return;
}



/* Entry: 109022a50; end: 109022be7; -[SCCAEAGLView setVideoPlaybackQuality:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109022a50(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(long *)(param_5 + _DAT_11277fcf8) == param_7) {
    return;
  }
  *(long *)(param_5 + _DAT_11277fcf8) = param_7;
  if (param_7 == 0) {
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 1.0;
  }
  else {
    if (param_7 == 2) {
      pdVar2 = (double *)0x11332ebe8;
    }
    else {
      if (param_7 != 1) {
        puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d5c20();
        func_0x00010c08c0e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c182d20(param_1);
        _objc_release(param_5);
        goto LAB_109022bcc;
      }
      pdVar2 = (double *)0x11332ebf8;
    }
    dVar5 = *pdVar2;
    dVar4 = pdVar2[1];
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar1);
    if (dVar5 * param_4 <= dVar4 * param_3) {
      dVar3 = 1.0;
      if (0.0 < param_3) {
        dVar3 = dVar5 / param_3;
      }
    }
    else {
      dVar3 = 1.0;
      if (0.0 < param_4) {
        dVar3 = dVar4 / param_4;
      }
    }
    dVar4 = 0.5;
    if (0.5 <= dVar3) {
      dVar4 = dVar3;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    _objc_release(puVar1);
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c182d20(dVar4);
  puVar1 = param_5;
LAB_109022bcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109022be8; end: 109022bf7; -[SCCAEAGLView videoPlaybackQuality] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109022be8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fcf8);
}



/* Entry: 109022bf8; end: 109022bff; -[SCNetworkImageServices imageDownloader] */

undefined8 FUN_109022bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109022c00; end: 109022c0b; -[SCNetworkImageServices .cxx_destruct] */

void FUN_109022c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109022c0c; end: 109022ce7; -[SCMagicMomentLoggingSession initWithBlizzardLogger:snap:sessionId:source:] */

undefined1 *
FUN_109022c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ffe88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109022ce8; end: 109022e07; -[SCMagicMomentLoggingSession _newBaseMagicMomentEvent] */

undefined * FUN_109022ce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dcf50;
  _objc_alloc_init(PTR_PTR_1126dcf50);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010b5fa088();
  if (lVar3 - 1U < 0xc) {
    uVar2 = *(undefined8 *)(&UNK_10dfb2218 + (lVar3 - 1U) * 8);
  }
  else {
    uVar2 = 6;
  }
  func_0x00010c19bba0(puVar1,param_2,uVar2);
  func_0x00010c1d56e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c207200(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf704c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf70720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 109022e08; end: 109022ee3; -[SCMagicMomentLoggingSession _logEventWithAction:frameTime:] */

void FUN_109022e08(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010be62ce0(param_2);
  func_0x00010c161fe0();
  if (*(long *)(param_2 + 0x30) != 0) {
    func_0x00010c26f3a0();
    param_1 = -param_1;
    func_0x00010c192ec0(lVar1);
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  func_0x00010b5fa088();
  if (((uVar2 < 0xd && (1L << (uVar2 & 0x3f) & 0x1566U) != 0) && param_5 != 0) &&
     (func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x10)), SUB84(param_1,0) != 0.0)) {
    func_0x00010bf885a0(param_5);
    dVar3 = param_1;
    func_0x00010bf8b160(*(undefined8 *)(param_2 + 0x10));
    func_0x00010c203260(param_1 / (double)SUB84(dVar3,0),lVar1);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 109022ee4; end: 109022f5b; -[SCMagicMomentLoggingSession _logEventWithStep:] */

void FUN_109022ee4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010be62ce0();
  func_0x00010c20a760();
  if (*(long *)(param_2 + 0x38) != 0) {
    func_0x00010c26f3a0();
    param_1 = -param_1;
    func_0x00010c218540(param_1,lVar1);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    func_0x00010c26f3a0();
    func_0x00010c192ec0(-param_1,lVar1);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109022f5c; end: 109022f9b; -[SCMagicMomentLoggingSession resetTimers] */

void FUN_109022f5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109022f9c; end: 109022fff; -[SCMagicMomentLoggingSession logMagicMomentDisabled] */

void FUN_109022f9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010be52c00(param_1,param_2,2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109023000; end: 10902305b; -[SCMagicMomentLoggingSession logMagicMomentStartedEnabling] */

void FUN_109023000(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10902305c; end: 10902309f; -[SCMagicMomentLoggingSession logMagicMomentGeneratingDepth] */

void FUN_10902305c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be52d60(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090230a0; end: 1090230e3; -[SCMagicMomentLoggingSession logMagicMomentGeneratedDepth] */

void FUN_1090230a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be52d60(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1090230e4; end: 109023127; -[SCMagicMomentLoggingSession logMagicMomentApplyingEffect] */

void FUN_1090230e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be52d60(param_1,param_2,2);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109023128; end: 1090231b3; -[SCMagicMomentLoggingSession logMagicMomentEnabledWithFrameTime:] */

void FUN_109023128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be52d60(param_1,param_2,3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  func_0x00010be52c00(param_1,param_2,*(undefined1 *)(param_1 + 0x28),param_3);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x28) = 1;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090231b4; end: 109023213; -[SCMagicMomentLoggingSession .cxx_destruct] */

void FUN_1090231b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109023214; end: 10902339b;  */

void FUN_109023214(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar6 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar5 = param_1;
  if ((uVar6 & 1) != 0) {
    _objc_retain(param_1);
    uVar6 = param_1;
    func_0x00010bf529e0();
    if (1 < uVar6) {
      uVar6 = 0;
      do {
        uVar2 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c067fc0();
        _objc_release(uVar2);
        uVar2 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c067fc0();
        _objc_release(uVar2);
        if ((uVar3 == 0x28) && (uVar4 == 0)) {
          puVar1 = PTR_PTR_1126cc770;
          _objc_alloc_init(PTR_PTR_1126cc770);
          func_0x00010c220e20();
          func_0x00010c1769e0(puVar1);
          goto LAB_109023350;
        }
        uVar6 = uVar6 + 1;
        uVar2 = param_1;
        func_0x00010bf529e0();
      } while (uVar6 < uVar2 >> 1);
    }
    _objc_release(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar6 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(param_1);
  if (uVar6 == 0) {
    puVar1 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126cc770;
    _objc_alloc(PTR_PTR_1126cc770);
    func_0x00010c008360();
  }
LAB_109023350:
  _objc_release(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10902339c; end: 109023563;  */

void FUN_10902339c(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010b5fa088();
  if (lVar2 - 2U < 0xb) {
    uVar4 = param_2;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    FUN_109023214();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar3 == 0) {
      lVar2 = param_1;
      func_0x00010b5fa088();
      uVar1 = (int)(lVar2 - 2U) + 2;
      if (10 < lVar2 - 2U) {
        uVar1 = 5;
      }
      uVar4 = (ulong)uVar1;
      FUN_1090244f8(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar3);
      uVar4 = uVar3;
    }
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 109023564; end: 10902369b;  */

void FUN_109023564(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
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
  _objc_retain();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111183728;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111183728);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000109023474();
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
        func_0x00010c12d360(ppuVar1,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  ppuVar3 = ppuVar1;
  func_0x00010bf51e00(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return;
  }
  ___stack_chk_fail();
  func_0x00010b5fa088();
  return;
}



/* Entry: 10902369c; end: 109023713;  */

undefined4 FUN_10902369c(ulong param_1)

{
  func_0x00010b5fa088();
  if (param_1 < 0xd) {
    if ((1L << (param_1 & 0x3f) & 0x1f80U) != 0) {
      return 0x42aa0000;
    }
    if ((1L << (param_1 & 0x3f) & 3U) != 0) {
      return 0;
    }
    if ((1L << (param_1 & 0x3f) & 0x30U) != 0) {
      return 0x42d20000;
    }
  }
  if (param_1 == 9999) {
    return 0;
  }
  return 0x42e60000;
}



/* Entry: 109023714; end: 109023973;  */

ulong FUN_109023714(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar5 = param_1;
  func_0x00010b5fa088();
  puVar1 = PTR_PTR_1126bf6e8;
  if (uVar5 - 2 < 0xb) {
    uVar5 = param_1;
    func_0x00010c273740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298c40(puVar1,param_2,0xfffffffff42f9e3f,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (puVar1 == (undefined *)0x0) {
      uVar5 = param_1;
      func_0x00010b5fa088();
      if ((long)uVar5 < 8) {
        if ((long)uVar5 < 4) {
          if ((uVar5 != 2) && (uVar5 != 3)) goto LAB_109023968;
        }
        else if ((uVar5 != 4) && ((uVar5 != 6 && (uVar5 != 7)))) {
LAB_109023968:
          uVar5 = 5;
        }
      }
      else if ((long)uVar5 < 0xb) {
        if (uVar5 - 9 < 2) {
          uVar5 = param_1;
          func_0x00010c2a5040();
          uVar4 = param_1;
          func_0x00010bfe0640();
          uVar5 = (ulong)((int)uVar5 < (int)uVar4);
          goto LAB_10902391c;
        }
        if (uVar5 != 8) goto LAB_109023968;
      }
      else if ((uVar5 != 0xb) && (uVar5 != 0xc)) goto LAB_109023968;
      FUN_10902503c();
      goto LAB_10902391c;
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar5 = param_1;
    func_0x00010c0c41a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar6 = *plStack_120;
      do {
        uVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(uVar5);
          }
          lVar2 = *(long *)(lStack_128 + uVar7 * 8);
          func_0x00010bf0ddc0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010b778660();
          _objc_release(lVar2);
          if (lVar3 == -0x6d9d7408) {
            _objc_release(uVar5);
            uVar5 = 1;
            goto LAB_10902391c;
          }
          uVar7 = uVar7 + 1;
        } while (uVar4 != uVar7);
        uVar4 = uVar5;
        func_0x00010bf52a60(uVar5,param_2,&uStack_130,auStack_e8,0x10);
      } while (uVar4 != 0);
    }
    _objc_release(uVar5);
  }
  uVar5 = 0;
LAB_10902391c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  FUN_109023714();
  func_0x00010c2a5040(param_1);
  func_0x00010bfe0640(param_1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 109023974; end: 1090239df;  */

undefined1  [16] FUN_109023974(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain();
  uVar1 = param_1;
  FUN_109023714();
  dVar3 = 0.5;
  if ((int)uVar1 == 0) {
    dVar3 = 1.0;
  }
  uVar1 = param_1;
  func_0x00010c2a5040(param_1);
  uVar2 = param_1;
  func_0x00010bfe0640(param_1);
  _objc_release(param_1);
  auVar4._8_8_ = dVar3 * (double)(int)uVar2;
  auVar4._0_8_ = (double)(int)uVar1;
  return auVar4;
}



/* Entry: 1090239e0; end: 109023acb;  */

undefined8 FUN_1090239e0(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010b5fa088();
  if (((param_1 < 0xd) && ((1L << (param_1 & 0x3f) & 0x187fU) != 0)) || (param_1 == 9999)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109023acc; end: 109023b83;  */

bool FUN_109023acc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010b5fa088();
  if (lVar2 - 2U < 0xb) {
    lVar2 = param_1;
    func_0x00010b5fa088(param_1);
    bVar1 = lVar2 - 0xdU < 0xfffffffffffffffc;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 109023b84; end: 109023c13;  */

void FUN_109023b84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf70720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x00010c0c5180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_109024fa8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109023c14; end: 109023c77;  */

uint FUN_109023c14(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010b5fa088();
  if (uVar1 - 2 < 0xb) {
    uVar1 = param_1;
    func_0x00010b5fa088();
    uVar2 = 1;
    if (uVar1 < 0xd) {
      uVar2 = 0x33 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2 & 1;
}



/* Entry: 109023c78; end: 109023d97;  */

double FUN_109023c78(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010b5fa088();
  dVar2 = 1.0;
  if (lVar1 - 2U < 0xb) {
    FUN_109023974(param_2);
    dVar2 = param_1;
    func_0x000109023cdc(param_2);
    dVar2 = param_1 / dVar2;
  }
  _objc_release(param_2);
  return dVar2;
}



/* Entry: 109023d98; end: 109023e07;  */

uint FUN_109023d98(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010b5fa088();
  if ((uVar1 - 2 < 0xb) && (uVar1 = param_1, FUN_109023acc(), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010b5fa088();
    uVar2 = 1;
    if (uVar1 < 7) {
      uVar2 = 0x33 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2 & 1;
}



/* Entry: 109023e08; end: 109023ef7;  */

void FUN_109023e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c24fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  func_0x00010c26f320(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bdc35a0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109023ef8; end: 109024027;  */

bool FUN_109023ef8(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    _objc_retain(param_1);
    lVar3 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    bVar1 = false;
    if (lVar3 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(param_1);
          }
          iVar4 = (int)*(undefined8 *)(lStack_108 + lVar6 * 8);
          iVar2 = iVar4;
          func_0x00010b5fa70c();
          if ((iVar2 != 0) && (func_0x00010b5faa08(), iVar4 == 0)) {
            bVar1 = true;
            goto LAB_109023fe0;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
      bVar1 = false;
    }
LAB_109023fe0:
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010b5fa088();
  if (lVar3 - 2U < 0xb) {
    lVar3 = param_1;
    func_0x00010b5fa088(param_1);
    bVar1 = lVar3 == 0xc;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 109024028; end: 10902417b;  */

bool FUN_109024028(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010b5fa088();
  if (lVar2 - 2U < 0xb) {
    lVar2 = param_1;
    func_0x00010b5fa088(param_1);
    bVar1 = lVar2 == 0xc;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10902417c; end: 10902432f;  */

undefined * FUN_10902417c(undefined *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_a8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar8 = param_1;
  func_0x00010b5fa760();
  if ((int)puVar8 == 0) {
    puVar8 = param_1;
    func_0x00010b5fa088();
    if ((((puVar8 == (undefined *)0x9) ||
         (puVar8 = param_1, func_0x00010b5fa088(), puVar8 == (undefined *)0xa)) ||
        (puVar8 = param_1, func_0x00010b5fa088(), puVar8 == (undefined *)0x8)) ||
       (puVar8 = param_1, func_0x00010b5fa088(), puVar8 == (undefined *)0x7)) {
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar8 = (undefined *)0x0;
    }
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf0b480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb2980();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 - 1U < 4) {
      func_0x00010befa120(puVar8);
    }
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar6 = &uStack_170;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    _objc_retain(param_1);
    puVar5 = param_1;
    func_0x00010bf52a60();
    puVar8 = (undefined *)0x0;
    if (puVar5 != (undefined *)0x0) {
      lVar7 = *plStack_160;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_160 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          iVar1 = (int)*(undefined8 *)(lStack_168 + (long)puVar8 * 8);
          func_0x00010b5fa760();
          if (iVar1 != 0) {
            puVar8 = param_1;
            func_0x00010bf529e0();
            if (puVar8 == (undefined *)0x1) {
              func_0x000109025db0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000109025dc8();
              _objc_retainAutoreleasedReturnValue();
            }
            goto LAB_109024420;
          }
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar8);
        puVar5 = param_1;
        puVar6 = &uStack_170;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
      puVar8 = (undefined *)0x0;
    }
LAB_109024420:
    _objc_release(param_1);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar8 = PTR_PTR_1126dcf58;
      _objc_retain(puVar6);
      func_0x00010c2b1c80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_setAssociatedObject(puVar5,PTR_s_triedCount_11253f2a8,puVar6,1);
      _objc_release(puVar6);
      return puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 109024330; end: 109024467;  */

undefined * FUN_109024330(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bf52a60();
  puVar5 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar4 = *plStack_100;
    do {
      puVar5 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        iVar1 = (int)*(undefined8 *)(lStack_108 + (long)puVar5 * 8);
        func_0x00010b5fa760();
        if (iVar1 != 0) {
          puVar5 = param_1;
          func_0x00010bf529e0();
          if (puVar5 == (undefined *)0x1) {
            func_0x000109025db0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000109025dc8();
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_109024420;
        }
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar5);
      puVar2 = param_1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar5 = (undefined *)0x0;
  }
LAB_109024420:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126dcf58;
    _objc_retain(puVar3);
    func_0x00010c2b1c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_setAssociatedObject(puVar2,PTR_s_triedCount_11253f2a8,puVar3,1);
    _objc_release(puVar3);
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 109024468; end: 1090244f3; -[SOJUGalleryMagicMomentState copyWithTriedCount:] */

undefined * FUN_109024468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dcf58;
  _objc_retain(param_3);
  func_0x00010c2b1c80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_setAssociatedObject(puVar2,PTR_s_triedCount_11253f2a8,param_3,1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1090244f4; end: 1090244f7; -[SOJUGalleryMagicMomentState triedCount] */

void FUN_1090244f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)();
  return;
}



/* Entry: 1090244f8; end: 10902456f;  */

void FUN_1090244f8(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_1126cc770;
  _objc_alloc_init(PTR_PTR_1126cc770);
  uVar2 = 1;
  if (param_1 - 4U < 9) {
    uVar2 = *(undefined4 *)(&UNK_10dfb2278 + (ulong)(param_1 - 4U) * 4);
  }
  func_0x00010c220e20(puVar1,param_2,uVar2);
  FUN_10902503c();
  uVar2 = 1;
  if (param_1 != 0) {
    uVar2 = 2;
  }
  func_0x00010c1769e0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109024570; end: 10902462f;  */

void FUN_109024570(void)

{
  func_0x00010c298be0();
  return;
}



/* Entry: 109024630; end: 1090246a3;  */

bool FUN_109024630(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010bf29de0();
  iVar2 = (int)uVar3;
  if (iVar2 != -0x4524111) {
    if (iVar2 == 2) {
      bVar1 = true;
      goto LAB_10902468c;
    }
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_10902468c;
    }
  }
  uVar3 = param_1;
  func_0x00010c298be0(param_1);
  bVar1 = (int)uVar3 - 3U < 2;
LAB_10902468c:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1090246a4; end: 10902497f; +[SCSpectaclesStabilizationFrame stabilizationFrameAtTimestamp:withFrames:inRowMajorOrder:] */

void FUN_1090246a4(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  float fVar13;
  
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bfe6000(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126d36a0;
    _objc_alloc();
    dVar10 = param_1;
    func_0x00010c0529e0(param_1);
    puVar1 = param_4;
    func_0x00010bf529e0(param_4);
    puVar6 = param_4;
    func_0x00010bfece00(param_4,param_3,puVar2,0,puVar1,0x600,&PTR___NSConcreteGlobalBlock_110ad52a8
                       );
    puVar3 = param_4;
    func_0x00010bf529e0();
    puVar6 = (undefined *)((ulong)puVar6 & ((long)puVar6 >> 0x3f ^ 0xffffffffffffffffU));
    puVar1 = puVar3 + -1;
    if (puVar6 <= puVar3 + -1) {
      puVar1 = puVar6;
    }
    if (puVar1 == (undefined *)0x0) {
      param_2 = param_4;
      func_0x00010c0dfd40(param_4,param_3,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = param_4;
      func_0x00010c0dfd20(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_4;
      func_0x00010c0dfd20(param_4,param_3,puVar1 + -1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0(puVar6);
      dVar11 = dVar10;
      func_0x00010c2709c0(puVar3);
      fVar13 = (float)((param_1 - dVar11) / (dVar10 - dVar11));
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_3,9);
      _objc_retainAutoreleasedReturnValue();
      iVar7 = 0;
      uVar12 = 0x3f800000;
      do {
        fVar8 = (float)uVar12;
        puVar4 = puVar6;
        func_0x00010c24cfe0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        fVar9 = fVar8;
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar4 = puVar3;
        func_0x00010c24cfe0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(puVar5);
        _objc_release(puVar4);
        uVar12 = (ulong)(uint)(fVar8 * fVar13 + fVar9 * (1.0 - fVar13));
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df740(uVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_3,puVar4);
        _objc_release(puVar4);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 9);
      param_2 = PTR_PTR_1126d36a0;
      _objc_alloc(PTR_PTR_1126d36a0);
      func_0x00010c0529e0(param_1);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 109024980; end: 109024a2f;  */

undefined *
FUN_109024980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  func_0x00010c2709c0(param_3);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c2709c0(param_4);
  _objc_release(param_4);
  func_0x00010c0df720(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 109024a30; end: 109024a5b; +[SCSpectaclesStabilizationFrame identity] */

void FUN_109024a30(void)

{
  _objc_alloc(PTR_PTR_1126d36a0);
  func_0x00010c0529e0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109024a5c; end: 109024b53;  */

void FUN_109024a5c(undefined8 param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_2;
  FUN_109024d08();
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
    goto LAB_109024b34;
  }
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar1 = param_2;
    func_0x0001090245b8();
    if ((int)uVar1 != 0) goto LAB_109024aa8;
  }
  else {
    uVar1 = param_2;
    FUN_109024570();
    if ((uVar1 & 1) != 0) {
LAB_109024aa8:
      func_0x0001090245f4();
    }
  }
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dcf60;
  _objc_alloc(PTR_PTR_1126dcf60);
  func_0x00010bfffb20(param_1);
  _objc_release(puVar2);
LAB_109024b34:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109024b54; end: 109024c03;  */

void FUN_109024b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf29de0(param_1);
  FUN_109024d08(param_1);
  FUN_109024d4c(param_1);
  func_0x0001090245f4(param_1);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126dcf68;
  _objc_alloc(PTR_PTR_1126dcf68);
  func_0x00010c01f7e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109024c04; end: 109024d07;  */

void FUN_109024c04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1090244f8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_109024a5c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_109024b54(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109024d08; end: 109024d4b;  */

undefined8 FUN_109024d08(uint param_1)

{
  undefined8 uVar1;
  
  func_0x00010c298be0();
  if ((5 < param_1) || (uVar1 = 1, (1 << (ulong)(param_1 & 0x1f) & 0xeU) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 109024d4c; end: 109024d9f;  */

bool FUN_109024d4c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c141c40();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c298be0(param_1);
    bVar1 = (int)uVar2 - 1U < 4;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 109024da0; end: 109024e6b; -[SCMagicMomentServices initWithMagicMomentButtonProvider:magicMomentControllerProvider:magicMomentAlertPresenter:] */

undefined1 *
FUN_109024da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ffe90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


