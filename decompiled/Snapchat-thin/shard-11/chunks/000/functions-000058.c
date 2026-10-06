/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080da830; end: 1080da83f; -[SCSnapDrawingAnimatedImage frameRate] */

void FUN_1080da830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080da83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x58))();
  return;
}



/* Entry: 1080da840; end: 1080da86b; -[SCSnapDrawingAnimatedImage size] */

undefined1  [16] FUN_1080da840(long param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  
  pfVar1 = *(float **)(param_1 + 8);
  (**(code **)(*(long *)pfVar1 + 0x50))();
  auVar2._0_8_ = (double)*pfVar1;
  auVar2._8_8_ = (double)pfVar1[1];
  return auVar2;
}



/* Entry: 1080da86c; end: 1080da927; +[SCSnapDrawingAnimatedImage imageWithRuntime:data:error:] */

void FUN_1080da86c(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x19;
  long lStack_38;
  
  func_0x0001080db148();
  _objc_retain(in_x3);
  func_0x00010bfcff40();
  lStack_38 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x10);
  if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
    plVar3 = (long *)(*(long *)(lStack_38 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = &lStack_38;
  FUN_1080da928(plVar3,in_x3,in_x4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080db10c();
  func_0x0001080db168();
  func_0x0001080db0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 1080da928; end: 1080daaef;  */

void FUN_1080da928(undefined8 param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined *param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  undefined1 **unaff_x21;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined *puStack_d0;
  undefined1 **ppuStack_c8;
  long *plStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [24];
  undefined1 *apuStack_80 [2];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_2;
  func_0x0001080db17c();
  uStack_48 = extraout_x8;
  _objc_retain(puVar4);
  puVar4 = param_2;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60(param_2);
  FUN_10813e508(&lStack_58);
  cVar1 = SBORROW8(lStack_58,1);
  cVar2 = lStack_58 + -1 < 0;
  uVar3 = lStack_58 == 1;
  if ((bool)uVar3) {
    _objc_alloc(PTR_PTR_1126d91a0);
    puStack_70 = puStack_50;
    puStack_50 = (undefined *)0x0;
    ppuVar7 = &puStack_70;
    func_0x00010c01bf60();
    func_0x0001080db130();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    func_0x0001080db154();
    func_0x0001080db190();
    apuStack_80[0] = extraout_x10;
    if (cVar2 == cVar1) {
      apuStack_80[0] = auStack_98;
    }
    unaff_x21 = apuStack_80;
    func_0x00010b9812a4();
    _objc_retainAutoreleasedReturnValue();
    param_5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_60 = unaff_x21;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    param_4 = 0;
    puVar5 = puVar4;
    func_0x00010c00e2e0();
    _objc_autorelease();
    *param_3 = puVar5;
    func_0x0001080db11c();
    func_0x0001080db104();
    func_0x0001080db114();
    param_3 = (undefined8 *)0x0;
  }
  plVar6 = &lStack_58;
  func_0x0001080daf78();
  func_0x0001080db0f4();
  func_0x0001080db1a4(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001080db11c();
    func_0x0001080db104();
    func_0x0001080db114();
    func_0x0001080daf78(&lStack_58);
    func_0x0001080db0f4();
    func_0x0001080db160();
    pcStack_a8 = FUN_1080daaf0;
    puStack_d0 = puVar4;
    ppuStack_c8 = unaff_x21;
    plStack_c0 = plVar6;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    _objc_retain(ppuVar7);
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x00010c296580(ppuVar7);
    func_0x0001080db104();
    FUN_1080dabac(&uStack_e8,&uStack_e0);
    param_3 = &uStack_e8;
    FUN_1080da928(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080db10c();
    func_0x00010b9a8d98(&uStack_e0);
    func_0x0001080db0f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1080daaf0; end: 1080dabab; +[SCSnapDrawingAnimatedImage imageWithFontManager:data:error:] */

void FUN_1080daaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010c296580(param_3);
  func_0x0001080db104();
  FUN_1080dabac(auStack_48,&uStack_40);
  puVar1 = auStack_48;
  FUN_1080da928(puVar1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080db10c();
  func_0x00010b9a8d98(&uStack_40);
  func_0x0001080db0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080dabac; end: 1080dac03;  */

void FUN_1080dabac(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110a26380,0);
    }
    FUN_1080dafb8();
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 1080dac04; end: 1080daccb; +[SCSnapDrawingAnimatedImage imageWithCppObject:] */

void FUN_1080dac04(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lStack_30;
  long lStack_28;
  
  func_0x0001080db148();
  puVar1 = PTR_PTR_1126d91a0;
  _objc_alloc(PTR_PTR_1126d91a0);
  if (unaff_x19 == 0) {
    lVar2 = 0;
    lStack_30 = 0;
  }
  else {
    func_0x00010c124da0(&lStack_30);
    lVar2 = lStack_30;
    if (lStack_30 != 0) {
      ___dynamic_cast(lStack_30,&PTR_DAT_1107e3600,&PTR_DAT_110a27008,0);
    }
  }
  func_0x0001080dafe8();
  lStack_28 = lVar2;
  func_0x00010c01bf60(puVar1);
  func_0x0001080db124();
  if (lStack_30 != 0) {
    func_0x0001080db13c();
  }
  func_0x0001080db0f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080daccc; end: 1080daf3b; -[SCSnapDrawingAnimatedImage drawInBitmap:bitmapInfo:drawBounds:atTime:] */

void FUN_1080daccc(double param_1,double param_2,double param_3,double param_4,float *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lVar7;
  float *extraout_x10;
  undefined8 *puVar8;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float *apfStack_c0 [2];
  long *plStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  func_0x0001080db17c();
  puVar6 = (undefined8 *)0x50;
  uStack_78 = extraout_x8;
  __Znwm();
  plVar9 = puVar6 + 1;
  *plVar9 = 0;
  puVar6[2] = 0;
  puVar8 = puVar6 + 3;
  *puVar8 = &PTR_FUN_110a1f4a0;
  *puVar6 = &PTR_FUN_110a1f450;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = param_8;
  uVar10 = *param_9;
  puVar6[8] = param_9[1];
  puVar6[7] = uVar10;
  puVar6[9] = param_9[2];
  do {
    cVar4 = '\x01';
    bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar1) {
      *plVar9 = *plVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puStack_98 = puVar8;
  puStack_90 = puVar6;
  func_0x0001003a8180(puVar6 + 4,&puStack_98);
  func_0x0001003a824c(&puStack_98);
  if (puVar6[5] != 0) {
    plVar9 = (long *)(puVar6[5] + 8);
    do {
      cVar4 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar1) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_98 = puVar8;
  func_0x000108113b60(&plStack_b0,auStack_a8,&puStack_98);
  FUN_1080cc5cc(puStack_98);
  (**(code **)(*plStack_b0 + 0x28))(&puStack_98,plStack_b0);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  cVar3 = SBORROW8((long)puStack_98,1);
  cVar4 = (long)puStack_98 + -1 < 0;
  uVar5 = puStack_98 == (undefined8 *)0x1;
  if (!(bool)uVar5) {
    func_0x0001080db154();
    func_0x0001080db190();
    apfStack_c0[0] = extraout_x10;
    if (cVar4 == cVar3) {
      apfStack_c0[0] = &fStack_d8;
    }
    func_0x00010b9812a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f020(puVar2);
    func_0x0001080db11c();
    func_0x0001080db114();
  }
  plVar9 = *(long **)(unaff_x21 + 8);
  fStack_d8 = (float)param_1;
  fStack_d4 = (float)param_2;
  fStack_d0 = fStack_d8 + (float)param_3;
  fStack_cc = fStack_d4 + (float)param_4;
  func_0x00010b99f328();
  apfStack_c0[0] = param_5;
  (**(code **)(*plVar9 + 0x60))(plVar9,uStack_88,&fStack_d8,apfStack_c0,3);
  (**(code **)(*plStack_b0 + 0x30))(plStack_b0);
  func_0x0001078d49a4(&puStack_98);
  func_0x0001078d4980(plStack_b0);
  puVar6 = puVar8;
  func_0x0001080db0e8();
  func_0x0001080db1a4(uStack_78);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001080db11c();
    func_0x0001080db114();
    func_0x0001078d49a4(&puStack_98);
    func_0x0001078d4980(plStack_b0);
    func_0x0001080db0e8(puVar8);
    __Unwind_Resume();
    lVar7 = puVar6[1];
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      plVar9 = (long *)(*(long *)(lVar7 + 0x10) + 8);
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar1) {
          *plVar9 = *plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *extraout_x8_00 = lVar7;
    return;
  }
  return;
}



/* Entry: 1080daf3c; end: 1080daf67; -[SCSnapDrawingAnimatedImage animatedImage] */

void FUN_1080daf3c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080daf68; end: 1080daf6f; -[SCSnapDrawingAnimatedImage .cxx_destruct] */

undefined8 * FUN_1080daf68(long param_1)

{
  func_0x0001080dafa0(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080daf70; end: 1080dafb7; -[SCSnapDrawingAnimatedImage .cxx_construct] */

void FUN_1080daf70(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1080dafb8; end: 1080db03b;  */

undefined8 * FUN_1080dafb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if ((((param_1 != (undefined8 *)0x0) &&
       (puVar1 = param_1, func_0x00010b9a5818(), ((ulong)puVar1 & 1) == 0)) &&
      (func_0x00010b9a5890(), param_1 = puVar1, puVar1 != (undefined8 *)0x0)) &&
     (func_0x00010b9a5818(), ((ulong)puVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    func_0x0001080dafa0(*puVar1);
    param_1 = puVar1;
  }
  return param_1;
}



/* Entry: 1080db03c; end: 1080db03f;  */

void FUN_1080db03c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f450;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080db040; end: 1080db053;  */

void FUN_1080db040(void)

{
  func_0x0001080db0d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080db054; end: 1080db063;  */

void FUN_1080db054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080db05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080db064; end: 1080db09f;  */

void FUN_1080db064(void)

{
  func_0x0001080db170();
  return;
}



/* Entry: 1080db0a0; end: 1080db1b7;  */

void FUN_1080db0a0(void)

{
  return;
}



/* Entry: 1080db1b8; end: 1080db2df; -[SCSnapDrawingAnimatedImageView initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1080db1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x0001080db8ec();
  puStack_38 = PTR_PTR_1126fc708;
  puVar5 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithRuntime__1125edce0,param_3);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf53a20(puVar5);
    FUN_1080db2e0(&lStack_48,puVar6 + 9);
    lVar4 = lStack_48;
    plVar1 = (long *)((long)puVar5 + (long)_DAT_112774890);
    if (plVar1 != &lStack_48) {
      lStack_48 = 0;
      lVar7 = *plVar1;
      *plVar1 = lVar4;
      func_0x0001078d53f8(lVar7);
    }
    func_0x0001078d53f8(lStack_48);
    func_0x00010c08c3e0(&lStack_48,puVar5);
    lStack_50 = *plVar1;
    if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_50 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000108122b44(lStack_48,&lStack_50,1);
    func_0x0001078bee50(lStack_50);
    func_0x0001080db840(lStack_48);
  }
  func_0x0001080db8e4();
  return puVar5;
}



/* Entry: 1080db2e0; end: 1080db31f;  */

void FUN_1080db2e0(undefined8 *param_1)

{
  FUN_1080db608();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1080db320; end: 1080db3b3; -[SCSnapDrawingAnimatedImageView setImage:shouldDrawFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db320(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  func_0x0001080db8ec();
  lVar2 = (long)_DAT_112774890;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  if (param_3 == 0) {
    uStack_48 = 0;
  }
  else {
    func_0x00010bf03520(&uStack_48,param_3);
  }
  func_0x00010811c444(uVar1,&uStack_48);
  func_0x0001080dafa0(uStack_48);
  func_0x00010811c4c0(*(undefined8 *)(param_1 + lVar2),param_4);
  func_0x0001080db8e4();
  return;
}



/* Entry: 1080db3b4; end: 1080db3e7; -[SCSnapDrawingAnimatedImageView clearImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db3b4(long param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010811c444(*(undefined8 *)(param_1 + _DAT_112774890),&uStack_18);
  func_0x0001080dafa0(uStack_18);
  return;
}



/* Entry: 1080db3e8; end: 1080db3f7; -[SCSnapDrawingAnimatedImageView setAdvanceRate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db3e8(double param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plStack_38;
  
  uVar5 = *(ulong *)(param_2 + _DAT_112774890);
  uVar3 = *(double *)(uVar5 + 0x240) == param_1;
  if ((bool)uVar3) {
    return;
  }
  *(double *)(uVar5 + 0x240) = param_1;
  if ((bRam0000000113824a50 & 1) == 0) {
    iVar4 = 0x13824a50;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x0001003a83dc(0x113824a48,&UNK_10f47ba14);
      ___cxa_guard_release(0x113824a50);
    }
  }
  if (((*(long *)(uVar5 + 0xa8) != 0) && (*(long *)(uVar5 + 0x1f8) != 0)) &&
     (uVar3 = *(double *)(uVar5 + 0x240) == 0.0, !(bool)uVar3)) {
    uVar6 = uVar5;
    func_0x00010811ff28(uVar5,0x113824a48);
    if ((uVar6 & 1) == 0) {
      lVar10 = *(long *)(uVar5 + 0x200);
      if (lVar10 != 0) {
        plVar8 = (long *)(lVar10 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010811fc6c(uVar5,0x113824a48,&stack0xffffffffffffffd8);
      FUN_1080e5d1c(lVar10);
    }
    return;
  }
  lVar10 = 0x113824a48;
  plStack_38 = (long *)0x0;
  *(int *)(uVar5 + 100) = *(int *)(uVar5 + 100) + 1;
  lVar7 = uVar5 + 0x68;
  FUN_10811fe64(lVar7,0x113824a48);
  func_0x000108122788();
  if ((bool)uVar3) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_1080e570c(&plStack_38,lVar10 + 8);
    FUN_10811fe8c(uVar5 + 0x68,lVar7,lVar10);
    plVar8 = plStack_38;
  }
  *(int *)(uVar5 + 100) = *(int *)(uVar5 + 100) + -1;
  plVar9 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    func_0x000108122824(*(undefined8 *)(*plVar8 + 0x28));
    plVar9 = plStack_38;
  }
  FUN_1080e5d1c(plVar9);
  return;
}



/* Entry: 1080db3f8; end: 1080db40b; -[SCSnapDrawingAnimatedImageView setShouldLoop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db3f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_112774890) + 0x238) = param_3;
  return;
}



/* Entry: 1080db40c; end: 1080db437; -[SCSnapDrawingAnimatedImageView setCurrentTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db40c(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010811c7d8(*(undefined8 *)(param_2 + _DAT_112774890),&uStack_18);
  return;
}



/* Entry: 1080db438; end: 1080db44b; -[SCSnapDrawingAnimatedImageView setAnimationStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db438(double param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dStack_28;
  
  lVar2 = *(long *)(param_2 + _DAT_112774890);
  *(double *)(lVar2 + 0x218) = param_1;
  if (*(long *)(lVar2 + 0x1f8) == 0) {
    *(undefined8 *)(lVar2 + 0x230) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
  }
  else {
    func_0x00010811c8e4();
    dStack_28 = param_1;
    dVar3 = 0.0;
    if (0.0 <= *(double *)(lVar2 + 0x218)) {
      pdVar1 = &dStack_28;
      if (*(double *)(lVar2 + 0x218) <= param_1) {
        pdVar1 = (double *)(lVar2 + 0x218);
      }
      dVar3 = *pdVar1;
    }
    *(double *)(lVar2 + 0x228) = dVar3;
    pdVar1 = &dStack_28;
    if (*(double *)(lVar2 + 0x220) <= param_1) {
      pdVar1 = (double *)(lVar2 + 0x220);
    }
    if (*(double *)(lVar2 + 0x220) <= 0.0) {
      pdVar1 = &dStack_28;
    }
    if (dVar3 <= *pdVar1) {
      dVar3 = *pdVar1;
    }
    *(double *)(lVar2 + 0x230) = dVar3;
  }
  return;
}



/* Entry: 1080db44c; end: 1080db45f; -[SCSnapDrawingAnimatedImageView setAnimationEndTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db44c(double param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  double dStack_28;
  
  lVar2 = *(long *)(param_2 + _DAT_112774890);
  *(double *)(lVar2 + 0x220) = param_1;
  if (*(long *)(lVar2 + 0x1f8) == 0) {
    *(undefined8 *)(lVar2 + 0x230) = 0;
    *(undefined8 *)(lVar2 + 0x228) = 0;
  }
  else {
    func_0x00010811c8e4();
    dStack_28 = param_1;
    dVar3 = 0.0;
    if (0.0 <= *(double *)(lVar2 + 0x218)) {
      pdVar1 = &dStack_28;
      if (*(double *)(lVar2 + 0x218) <= param_1) {
        pdVar1 = (double *)(lVar2 + 0x218);
      }
      dVar3 = *pdVar1;
    }
    *(double *)(lVar2 + 0x228) = dVar3;
    pdVar1 = &dStack_28;
    if (*(double *)(lVar2 + 0x220) <= param_1) {
      pdVar1 = (double *)(lVar2 + 0x220);
    }
    if (*(double *)(lVar2 + 0x220) <= 0.0) {
      pdVar1 = &dStack_28;
    }
    if (dVar3 <= *pdVar1) {
      dVar3 = *pdVar1;
    }
    *(double *)(lVar2 + 0x230) = dVar3;
  }
  return;
}



/* Entry: 1080db460; end: 1080db54b; -[SCSnapDrawingAnimatedImageView setProgressHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db460(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  func_0x0001080db8ec();
  if (param_3 == 0) {
    func_0x0001080db950(*(undefined8 *)(param_1 + _DAT_112774890));
    func_0x0001080db8c0(0);
  }
  else {
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    _objc_retain(param_3);
    plVar5 = puVar3 + 1;
    *plVar5 = 1;
    *puVar3 = &PTR_DAT_110a1f568;
    func_0x00010bf51e00();
    puVar3[2] = param_3;
    func_0x0001080db8e4();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112774890);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001080db950(uVar4);
    func_0x0001080db8c0(puVar3);
    func_0x0001080db89c(puVar3);
    func_0x0001080db8e4();
  }
  return;
}



/* Entry: 1080db54c; end: 1080db5e7; -[SCSnapDrawingAnimatedImageView setObjectFit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db54c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x0001080db8ec();
  func_0x0001080db8f4();
  if ((uVar1 & 1) == 0) {
    func_0x0001080db8f4();
    if ((uVar1 & 1) == 0) {
      func_0x0001080db8f4();
      if ((uVar1 & 1) == 0) {
        func_0x0001080db8f4();
        uVar2 = 3;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  func_0x00010811c4e0(*(undefined8 *)(param_1 + (long)_DAT_112774890),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080db5e8; end: 1080db5f7; -[SCSnapDrawingAnimatedImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1080db5e8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112774890;
  func_0x0001078d53f8(*(undefined8 *)(param_1 + lVar1));
  return (undefined8 *)(param_1 + lVar1);
}



/* Entry: 1080db5f8; end: 1080db607; -[SCSnapDrawingAnimatedImageView .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080db5f8(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112774890) = 0;
  return;
}



/* Entry: 1080db608; end: 1080db643;  */

void FUN_1080db608(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [3];
  
  func_0x0001080db91c();
  FUN_1080db644(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001080db904();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1080db644;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1080db664(&uStack_51,param_1);
  return;
}



/* Entry: 1080db644; end: 1080db663;  */

void FUN_1080db644(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1080db664(&uStack_11,param_1);
  return;
}



/* Entry: 1080db664; end: 1080db6e3;  */

void FUN_1080db664(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar5 = auStack_40;
  func_0x0001080db91c();
  FUN_1080db700(auStack_40,1);
  FUN_1080db758(lStack_30,param_2);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_1080db6e4(lVar6 + 0x18);
  FUN_1080db830();
  func_0x0001080db904();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1080db830(auStack_40);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_1080db6e4;
    lStack_58 = extraout_x8[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001003a8180(puVar2,&puStack_60);
    func_0x0001003a824c(&puStack_60);
    return;
  }
  return;
}



/* Entry: 1080db6e4; end: 1080db6ff;  */

void FUN_1080db6e4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x0001003a8180(lVar2,&lStack_20);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080db700; end: 1080db727;  */

long FUN_1080db700(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080db728();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080db728; end: 1080db757;  */

undefined8 * FUN_1080db728(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x6a63bd81a98ef7) {
    puVar1 = (undefined8 *)(param_2 * 0x268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f518;
  param_1[1] = 0;
  func_0x00010811c200(param_1 + 3);
  return param_1;
}



/* Entry: 1080db758; end: 1080db78b;  */

undefined8 * FUN_1080db758(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f518;
  param_1[1] = 0;
  func_0x00010811c200(param_1 + 3);
  return param_1;
}



/* Entry: 1080db78c; end: 1080db78f;  */

void FUN_1080db78c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080db790; end: 1080db7a3;  */

void FUN_1080db790(void)

{
  func_0x0001080db7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080db7a4; end: 1080db7c7;  */

void FUN_1080db7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080db7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080db7c8; end: 1080db82f;  */

void FUN_1080db7c8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x0001003a8180(param_2,&uStack_20);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080db830; end: 1080db84f;  */

void FUN_1080db830(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080db850; end: 1080db863;  */

void FUN_1080db850(void)

{
  FUN_1080db878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080db864; end: 1080db877;  */

void FUN_1080db864(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001080db874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*param_3,*param_4);
  return;
}



/* Entry: 1080db878; end: 1080db89b;  */

long FUN_1080db878(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 1080db89c; end: 1080db963;  */

void FUN_1080db89c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080db944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080db964; end: 1080db99f; -[SCSnapDrawingViewportDisplayLinkProxy tick] */

void FUN_1080db964(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080db9a0; end: 1080db9b7; -[SCSnapDrawingViewportDisplayLinkProxy view] */

void FUN_1080db9a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080db9b8; end: 1080db9c3; -[SCSnapDrawingViewportDisplayLinkProxy setView:] */

void FUN_1080db9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1080db9c4; end: 1080db9cb; -[SCSnapDrawingViewportDisplayLinkProxy .cxx_destruct] */

void FUN_1080db9c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1080db9cc; end: 1080dbbff; -[SCSnapDrawingUIView initWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1080db9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lStack_68;
  undefined8 auStack_60 [2];
  long *plStack_50;
  undefined8 *puStack_48;
  
  _objc_retain(param_3);
  func_0x0001080dc798();
  puVar3 = auStack_60;
  auStack_60[0] = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11277489c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar9);
    *(undefined8 *)((long)puVar3 + lVar9) = param_3;
    _objc_release(uVar4);
    puVar5 = puVar3;
    func_0x00010bf53a20();
    puVar6 = (undefined8 *)0x1c0;
    __Znwm();
    plVar10 = puVar6 + 1;
    *plVar10 = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_DAT_110a1f5d0;
    plVar7 = puVar6 + 3;
    FUN_108122a10(plVar7,puVar5 + 9);
    if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_50 = plVar7;
      puStack_48 = puVar6;
      func_0x0001003a8180(puVar6 + 4,&plStack_50);
      func_0x0001003a824c(&plStack_50);
    }
    (**(code **)(*plVar7 + 0x20))(plVar7);
    lVar9 = (long)_DAT_1127748a0;
    uVar4 = *(undefined8 *)((long)puVar3 + lVar9);
    *(long **)((long)puVar3 + lVar9) = plVar7;
    func_0x0001080db840(uVar4);
    func_0x0001080db840(0);
    plVar7 = (long *)puVar5[8];
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      ___dynamic_cast(plVar7,&PTR_DAT_110a24b90,&PTR_DAT_110a24c50,0);
      if (plVar7 != (long *)0x0) {
        plVar10 = plVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    lVar8 = 0x50;
    plStack_50 = plVar7;
    __Znwm();
    FUN_1080dcd00();
    uVar4 = puVar5[4];
    plVar7 = (long *)(lVar8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lStack_68 = lVar8;
    func_0x00010811057c(uVar4,(long)puVar3 + lVar9,&lStack_68,0);
    func_0x0001080dc708(lStack_68);
    func_0x0001080dc6e4(lVar8);
    func_0x0001080dc6c0(plStack_50);
  }
  _objc_retain(puVar3);
  func_0x0001080dc740();
  func_0x0001080dc780();
  return puVar3;
}



/* Entry: 1080dbc00; end: 1080dbc83; -[SCSnapDrawingUIView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dbc00(long param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  func_0x00010c256f00();
  lVar1 = param_1;
  func_0x00010bf53a20();
  if (lVar1 != 0) {
    func_0x0001081106e8(*(undefined8 *)(lVar1 + 0x20),param_1 + _DAT_1127748a0);
  }
  func_0x0001080dc798();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080dbc84; end: 1080dbcff; -[SCSnapDrawingUIView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dbc84(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  func_0x0001080dc798();
  func_0x0001080dc7a4();
  uVar1 = *(undefined8 *)(param_5 + _DAT_1127748a0);
  func_0x0001080dc788();
  func_0x0001080dc788();
  FUN_1080dbd00();
  func_0x000108122c38((float)(double)CONCAT44(uVar3,uVar2),(float)param_4,(float)param_1,uVar1);
  func_0x00010c125560(param_5);
  return;
}



/* Entry: 1080dbd00; end: 1080dbd53;  */

undefined8 FUN_1080dbd00(undefined8 param_1)

{
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  func_0x0001080dc740();
  return param_1;
}



/* Entry: 1080dbd54; end: 1080dbf0f; -[SCSnapDrawingUIView visibleContentRect] */

void FUN_1080dbd54(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf20c00();
  func_0x0001080dc748();
  uVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x0001080dc72c();
    _CGRectIsEmpty();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar3);
        param_1 = uVar3;
      }
      func_0x0001080dc790();
      _objc_release(uVar2);
      uVar2 = uVar1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        func_0x00010c08c0e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar3);
        uVar1 = uVar3;
      }
      func_0x0001080dc790();
      _objc_release(uVar2);
      func_0x0001080dc788();
      func_0x00010bf513c0(param_1,param_2,uVar1);
      func_0x0001080dc7c4();
      func_0x0001080dc72c();
      _CGRectIntersection();
      func_0x0001080dc748();
      _CGRectIsNull();
      _objc_release(uVar1);
      func_0x0001080dc780();
    }
  }
  func_0x0001080dc740();
  func_0x0001080dc72c();
  return;
}



/* Entry: 1080dbf10; end: 1080dbf5b; -[SCSnapDrawingUIView refreshRenderViewport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dbf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  func_0x00010c29fd20();
  func_0x0001080dc748();
  puVar1 = (undefined8 *)(param_5 + _DAT_112774898);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x00010bf08b60(param_5);
  func_0x0001080dc72c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c28c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080dbf5c; end: 1080dc14b; -[SCSnapDrawingUIView applyVisibleContentRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dbf5c(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  long lStack_a8;
  
  func_0x0001080dc7d8();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_138 = (float)param_1;
  fStack_134 = (float)param_2;
  fStack_130 = fStack_138 + (float)param_3;
  fStack_12c = fStack_134 + (float)param_4;
  func_0x000108122da4(*(undefined8 *)(param_5 + (long)_DAT_1127748a0),&fStack_138);
  func_0x0001080dc788();
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_5);
      }
      uVar5 = *(undefined8 *)(uVar7 * 8);
      uVar4 = uVar5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___CAMetalLayer_1126c9000;
      _objc_opt_class(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
      _objc_opt_isKindOfClass(uVar4,puVar2);
      func_0x0001080dc790();
      func_0x00010c19f0e0(uVar5);
      func_0x00010c08cdc0(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
    uVar1 = param_5;
    func_0x00010bf52a60();
  }
  uVar1 = 0;
  func_0x0001080dc740();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    func_0x0001080dc740();
    func_0x0001080dc75c();
    func_0x0001080dc7d8();
    uVar7 = uVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 != 0) {
      uVar7 = uVar1;
      func_0x00010bf20c00();
      func_0x0001080dc7c4();
      _CGRectEqualToRect();
      func_0x0001080dc740();
      if ((uVar7 & 1) == 0) {
        lVar6 = (long)_DAT_1127748a4;
        if (*(long *)(uVar1 + lVar6) == 0) {
          puVar2 = PTR_PTR_1126d94a8;
          _objc_opt_new(PTR_PTR_1126d94a8);
          func_0x00010c222380();
          puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
          func_0x00010bf85b60();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(uVar1 + lVar6);
          *(undefined **)(uVar1 + lVar6) = puVar3;
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(uVar1 + lVar6);
          func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befc2c0(uVar4);
          func_0x0001080dc780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar2);
          return;
        }
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010c256f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_stopViewportTracking_1126735e8);
    return;
  }
  return;
}



/* Entry: 1080dc14c; end: 1080dc2af; -[SCSnapDrawingUIView updateViewportTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc14c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x0001080dc7d8();
  uVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf20c00();
    func_0x0001080dc7c4();
    _CGRectEqualToRect();
    func_0x0001080dc740();
    if ((uVar1 & 1) == 0) {
      lVar5 = (long)_DAT_1127748a4;
      if (*(long *)(param_1 + lVar5) != 0) {
        return;
      }
      puVar2 = PTR_PTR_1126d94a8;
      _objc_opt_new(PTR_PTR_1126d94a8);
      func_0x00010c222380();
      puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
      func_0x00010bf85b60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc2c0(uVar4);
      func_0x0001080dc780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c256f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopViewportTracking_1126735e8);
  return;
}



/* Entry: 1080dc2b0; end: 1080dc2e3; -[SCSnapDrawingUIView stopViewportTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc2b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127748a4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080dc2e4; end: 1080dc357; -[SCSnapDrawingUIView onViewportDisplayLinkTick] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc2e4(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  uVar2 = param_1;
  func_0x00010c29fd20();
  func_0x0001080dc748();
  puVar1 = (undefined8 *)(param_1 + (long)_DAT_112774898);
  _CGRectEqualToRect();
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = unaff_d8;
  puVar1[1] = unaff_d9;
  puVar1[2] = unaff_d10;
  puVar1[3] = unaff_d11;
  func_0x0001080dc72c(param_1);
  func_0x00010bf08b60();
  func_0x0001080dc72c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c28c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080dc358; end: 1080dc3b3; -[SCSnapDrawingUIView didMoveToWindow] */

void FUN_1080dc358(long param_1)

{
  long lVar1;
  
  func_0x0001080dc798();
  func_0x0001080dc7a4();
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c256f00(param_1);
  }
  else {
    func_0x00010c125560();
  }
  return;
}



/* Entry: 1080dc3b4; end: 1080dc3c3; -[SCSnapDrawingUIView cppRuntime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc3b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277489c),PTR_s_handle_1125d1978);
  return;
}



/* Entry: 1080dc3c4; end: 1080dc3e7; -[SCSnapDrawingUIView createEmbeddedPresenterForView:] */

void FUN_1080dc3c4(void)

{
  func_0x00010c10fb20(PTR_PTR_1126d94b0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dc3e8; end: 1080dc44b; -[SCSnapDrawingUIView createMetalPresenter:] */

void FUN_1080dc3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d94b0;
  FUN_1080dbd00();
  func_0x00010c10fb40(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080dc44c; end: 1080dc453; -[SCSnapDrawingUIView removePresenter:] */

void FUN_1080dc44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1080dc454; end: 1080dc4eb; -[SCSnapDrawingUIView setFrame:transform:opacity:clipPath:clipHasChanged:forEmbeddedPresenter:] */

void FUN_1080dc454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_e0 [128];
  
  _memcpy(auStack_e0,param_8,0x80);
  func_0x00010c1942a0(param_1,param_2,param_3,param_4,param_5,param_11);
  return;
}



/* Entry: 1080dc4ec; end: 1080dc557; -[SCSnapDrawingUIView setZIndex:forPresenter:] */

void FUN_1080dc4ec(void)

{
  undefined8 in_x3;
  
  func_0x0001080dc7b8();
  _objc_retain(in_x3);
  func_0x00010c12c960(in_x3);
  func_0x00010c066fa0();
  func_0x00010c125560();
  func_0x0001080dc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 1080dc558; end: 1080dc5cf; -[SCSnapDrawingUIView surfacePresenterView:willResizeDrawableWithBlock:] */

void FUN_1080dc558(void)

{
  long in_x3;
  long unaff_x20;
  long lStack_30;
  undefined1 uStack_28;
  
  func_0x0001080dc7b8();
  func_0x00010bf53a20();
  if (unaff_x20 != 0) {
    lStack_30 = *(long *)(unaff_x20 + 0x20) + 0x98;
    uStack_28 = 1;
    __ZNSt3__115recursive_mutex4lockEv();
    (**(code **)(in_x3 + 0x10))(in_x3);
    func_0x0001003ad644(&lStack_30);
  }
  func_0x0001080dc740();
  return;
}



/* Entry: 1080dc5d0; end: 1080dc603; -[SCSnapDrawingUIView layerRoot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc5d0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + _DAT_1127748a0);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 1080dc604; end: 1080dc64f; -[SCSnapDrawingUIView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc604(long param_1)

{
  FUN_1080dc698(param_1 + _DAT_1127748a0);
  _objc_storeStrong(param_1 + _DAT_1127748a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277489c,0);
  return;
}



/* Entry: 1080dc650; end: 1080dc663; -[SCSnapDrawingUIView .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dc650(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_1127748a0) = 0;
  return;
}



/* Entry: 1080dc664; end: 1080dc677;  */

void FUN_1080dc664(void)

{
  func_0x0001080dc688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080dc678; end: 1080dc697;  */

void FUN_1080dc678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080dc680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080dc698; end: 1080dc6bf;  */

undefined8 * FUN_1080dc698(undefined8 *param_1)

{
  func_0x0001080db840(*param_1);
  return param_1;
}



/* Entry: 1080dc6c0; end: 1080dc7eb;  */

void FUN_1080dc6c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080dc76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080dc7ec; end: 1080dcb37; -[SCValdiSnapDrawingRuntime initWithDiskCache:hostViewManager:logger:workerQueue:assetLoaderManager:maxCacheSizeInBytes:] */

undefined8 *
FUN_1080dc7ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  long *plStack_68;
  
  puStack_98 = PTR_PTR_1126fc718;
  puVar5 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      plVar10 = (long *)(param_3 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_a8 = param_3;
    if ((param_6 != 0) && (uVar6 = param_6, func_0x00010b9a5818(), (uVar6 & 1) == 0)) {
      func_0x00010b9a5890();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1080dca88);
      (*pcVar4)();
    }
    plVar7 = (long *)0x68;
    uStack_b0 = param_6;
    __Znwm();
    plVar8 = (long *)0xc8;
    __Znwm();
    FUN_108109f98();
    plVar10 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    auVar14 = NEON_fmov(0x3fd0000000000000,8);
    uStack_88 = auVar14._8_8_;
    plStack_90 = auVar14._0_8_;
    uStack_80 = 0x40a0000041200000;
    uStack_78 = 0x3c75c28f;
    uStack_74 = 0;
    plStack_68 = plVar8;
    func_0x000108101a50(plVar7,&plStack_68,&plStack_90,&lStack_a8,param_4,param_5,&uStack_b0,param_8
                       );
    plVar9 = plStack_68;
    FUN_1080dcbfc(plStack_68);
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      plVar9 = plVar8;
    }
    *plVar7 = (long)&PTR_DAT_110a1f620;
    plVar7[0xc] = 0;
    _MTLCreateSystemDefaultDevice();
    plVar10 = plVar9;
    func_0x00010c0d8720();
    plVar13 = (long *)plVar7[5];
    plVar8 = (long *)0x20;
    __Znwm();
    if ((plVar13 != (long *)0x0) && (plVar13[3] != 0)) {
      plVar1 = (long *)(plVar13[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_90 = plVar13;
    func_0x000108114078(plVar8,&plStack_90);
    plStack_68 = plVar8;
    func_0x0001080dcc20(plStack_90);
    plVar13 = (long *)0x38;
    __Znwm();
    plVar8 = plVar13;
    func_0x000108114650();
    plVar8 = plVar8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar13;
    func_0x000108101edc(plVar7,&plStack_90);
    func_0x0001080dcc30(plStack_90);
    do {
      lVar12 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,1);
    FUN_1080dcc7c(plStack_68);
    _objc_release(plVar10);
    _objc_release(plVar9);
    uVar11 = puVar5[1];
    puVar5[1] = plVar7;
    FUN_1080dccd0(uVar11);
    FUN_1080dccd0(0);
    func_0x0001003acbf4(uStack_b0);
    func_0x0001080d8654(param_3);
    func_0x000108101e5c(puVar5[1],param_7);
  }
  return puVar5;
}



/* Entry: 1080dcb38; end: 1080dcba7; -[SCValdiSnapDrawingRuntime dealloc] */

void FUN_1080dcb38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  undefined *puStack_28;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puStack_28 = PTR_PTR_1126fc718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080dcba8; end: 1080dcbb3; -[SCValdiSnapDrawingRuntime onApplicationEnteringBackground] */

void FUN_1080dcba8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  __ZNSt3__115recursive_mutex4lockEv();
  *(undefined1 *)(lVar1 + 0xe3) = 1;
  func_0x000108111e98();
  func_0x000108110824(lVar1,1);
  return;
}



/* Entry: 1080dcbb4; end: 1080dcbbf; -[SCValdiSnapDrawingRuntime onApplicationEnteringForeground] */

void FUN_1080dcbb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  func_0x000108111e5c(lVar1 + 0x58);
  *(undefined1 *)(lVar1 + 0xe3) = 0;
  func_0x000108112018();
  func_0x000108111e98();
  return;
}



/* Entry: 1080dcbc0; end: 1080dcbcb; -[SCValdiSnapDrawingRuntime onApplicationIsInLowMemory] */

void FUN_1080dcbc0(long param_1)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long *plVar1;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  lStack_40 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  uStack_24 = 2;
  plVar1 = *(long **)(lStack_40 + 0x18);
  func_0x0001081110ac(&lStack_38,&lStack_40,&uStack_24);
  uStack_30 = 0;
  if (lStack_38 != 0) {
    do {
      func_0x000108111ef8();
      uStack_30 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_30);
  FUN_1081099dc(uStack_30);
  func_0x000108111b1c(lStack_38);
  return;
}



/* Entry: 1080dcbcc; end: 1080dcbd3; -[SCValdiSnapDrawingRuntime handle] */

undefined8 FUN_1080dcbcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080dcbd4; end: 1080dcbdb; -[SCValdiSnapDrawingRuntime .cxx_destruct] */

void FUN_1080dcbd4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080dccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080dcbdc; end: 1080dcbe7; -[SCValdiSnapDrawingRuntime .cxx_construct] */

void FUN_1080dcbdc(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1080dcbe8; end: 1080dcbfb;  */

void FUN_1080dcbe8(void)

{
  FUN_1080dcca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080dcbfc; end: 1080dcc53;  */

void FUN_1080dcbfc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080dccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080dcc54; end: 1080dcc7b;  */

undefined8 * FUN_1080dcc54(undefined8 *param_1)

{
  FUN_1080dc6c0(*param_1);
  return param_1;
}



/* Entry: 1080dcc7c; end: 1080dcc9f;  */

void FUN_1080dcc7c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080dccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080dcca0; end: 1080dcccf;  */

undefined8 * FUN_1080dcca0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a1f620;
  FUN_1080dcc54(param_1 + 0xc);
  *param_1 = &PTR_DAT_110a23690;
  func_0x000107475310(param_1 + 9);
  func_0x00010810206c(param_1 + 8);
  func_0x000104bd5214(param_1 + 7);
  func_0x0001074755f4(param_1 + 6);
  func_0x00010810203c(param_1 + 5);
  func_0x000108101ff8(param_1 + 4);
  func_0x000108101fb4(param_1 + 3);
  func_0x000108101f94(param_1 + 2);
  return param_1;
}



/* Entry: 1080dccd0; end: 1080dccff;  */

void FUN_1080dccd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080dccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080dcd00; end: 1080dcd57;  */

void FUN_1080dcd00(undefined8 *param_1)

{
  FUN_10810a438();
  *param_1 = &PTR_FUN_110a1f670;
  return;
}



/* Entry: 1080dcd58; end: 1080dcd5b;  */

undefined8 * FUN_1080dcd58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = &PTR_DAT_110a24430;
  lVar2 = 0;
  _objc_storeWeak(param_1 + 2);
  puVar1 = param_1 + 4;
  FUN_10810a564();
  lVar3 = param_1[4];
  lVar4 = param_1[7];
  puStack_40 = puVar1;
  lStack_38 = lVar2;
  while (puStack_40 != (undefined8 *)(lVar3 + lVar4)) {
    _CFRelease(*(undefined8 *)(lStack_38 + 8));
    FUN_10810a590(&puStack_40);
  }
  FUN_10810abe4(param_1 + 4);
  FUN_1080dcc54(param_1 + 3);
  _objc_destroyWeak(param_1 + 2);
  return param_1;
}



/* Entry: 1080dcd5c; end: 1080dcd6f;  */

void FUN_1080dcd5c(void)

{
  FUN_10810a4bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080dcd70; end: 1080dcde7; -[SCValdiAttributedText initWithCppInstance:] */

undefined8 * FUN_1080dcd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc720;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001080cf680();
    uStack_38 = param_3;
    FUN_1080dcde8(puVar1 + 1,&uStack_38);
    FUN_1080cf6b0(uStack_38);
  }
  return puVar1;
}



/* Entry: 1080dcde8; end: 1080dce23;  */

undefined8 * FUN_1080dcde8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1080cf6b0(uVar1);
  }
  return param_1;
}



/* Entry: 1080dce24; end: 1080dcec3; -[SCValdiAttributedText initWithWrappedValue:] */

undefined8 * FUN_1080dce24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fc720;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c296d80(param_3);
    FUN_1080cf62c(&uStack_48);
    FUN_1080dcde8(puVar1 + 1,&uStack_48);
    FUN_1080cf6b0(uStack_48);
  }
  func_0x0001080dd58c();
  return puVar1;
}



/* Entry: 1080dcec4; end: 1080dcf13; -[SCValdiAttributedText dealloc] */

void FUN_1080dcec4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    func_0x0001003a916c();
  }
  puStack_28 = PTR_PTR_1126fc720;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080dcf14; end: 1080dcf1f; -[SCValdiAttributedText partsCount] */

undefined8 FUN_1080dcf14(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 1080dcf20; end: 1080dcf2b; -[SCValdiAttributedText animationTransformsCount] */

undefined8 FUN_1080dcf20(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x410);
}



/* Entry: 1080dcf2c; end: 1080dcf3f; -[SCValdiAttributedText contentAtIndex:] */

void FUN_1080dcf2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_20;
  ulong uStack_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + param_3 * 0xf8);
  if (lVar1 == 0) {
    puStack_20 = &UNK_10f7d0ef0;
    uStack_18 = 0;
  }
  else {
    puStack_20 = (undefined *)(lVar1 + 0x18);
    uStack_18 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  func_0x00010b9812a4(&puStack_20);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dcf40; end: 1080dcf97; -[SCValdiAttributedText fontAtIndex:] */

void FUN_1080dcf40(void)

{
  long extraout_x8;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0x10) == '\x01') {
    func_0x0001080dcf80(extraout_x8 + 8);
    func_0x00010b98101c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


