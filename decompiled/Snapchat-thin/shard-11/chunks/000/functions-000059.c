/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080dcf98; end: 1080dcfcb; -[SCValdiAttributedText textDecorationAtIndex:] */

undefined8 FUN_1080dcf98(void)

{
  uint uVar1;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  uVar1 = *(int *)(extraout_x8 + 0x18) - 1;
  if (uVar1 < 5) {
    return *(undefined8 *)(&UNK_10deeeb38 + (ulong)uVar1 * 8);
  }
  return 0;
}



/* Entry: 1080dcfcc; end: 1080dd027; -[SCValdiAttributedText colorAtIndex:] */

void FUN_1080dcfcc(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0x28) == '\x01') {
    puVar1 = (undefined8 *)(extraout_x8 + 0x20);
    func_0x0001080dd010();
    func_0x00010b988f18(*puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd028; end: 1080dd08b; -[SCValdiAttributedText backgroundColorAtIndex:] */

void FUN_1080dd028(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  
  func_0x0001080dd5a0();
  lVar2 = *(long *)(extraout_x8 + 0x30);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x18) == '\x01')) {
    puVar1 = (undefined8 *)(lVar2 + 0x10);
    func_0x0001080dd074();
    func_0x00010b988f18(*puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd08c; end: 1080dd0c3; -[SCValdiAttributedText onTapAtIndex:] */

void FUN_1080dd08c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + param_3 * 0xf8 + 0x38) != 0) {
    func_0x00010b981210();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd0c4; end: 1080dd0fb; -[SCValdiAttributedText onLayoutAtIndex:] */

void FUN_1080dd0c4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + param_3 * 0xf8 + 0x40) != 0) {
    func_0x00010b981210();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd0fc; end: 1080dd13f; -[SCValdiAttributedText outlineColorAtIndex:] */

void FUN_1080dd0fc(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0x50) == '\x01') {
    puVar1 = (undefined8 *)(extraout_x8 + 0x48);
    func_0x0001080dd010();
    func_0x00010b988f18(*puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd140; end: 1080dd197; -[SCValdiAttributedText outlineWidthAtIndex:] */

void FUN_1080dd140(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(extraout_x8 + 0x5c) == '\x01') {
    puVar2 = (undefined4 *)(extraout_x8 + 0x58);
    FUN_1080dd198();
    func_0x00010c0df740(*puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd198; end: 1080dd1af;  */

void FUN_1080dd198(long param_1)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    func_0x0001080da3e4();
    func_0x0001080dd5a0();
    if (*(char *)(extraout_x8 + 0x68) == '\x01') {
      puVar1 = (undefined8 *)(extraout_x8 + 0x60);
      func_0x0001080dd010();
      func_0x00010b988f18(*puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 1080dd1b0; end: 1080dd1f3; -[SCValdiAttributedText outerOutlineColorAtIndex:] */

void FUN_1080dd1b0(void)

{
  undefined8 *puVar1;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0x68) == '\x01') {
    puVar1 = (undefined8 *)(extraout_x8 + 0x60);
    func_0x0001080dd010();
    func_0x00010b988f18(*puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd1f4; end: 1080dd24b; -[SCValdiAttributedText outerOutlineWidthAtIndex:] */

void FUN_1080dd1f4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long extraout_x8;
  
  func_0x0001080dd5a0();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(extraout_x8 + 0x74) == '\x01') {
    puVar2 = (undefined4 *)(extraout_x8 + 0x70);
    FUN_1080dd198();
    func_0x00010c0df740(*puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080dd24c; end: 1080dd30f; -[SCValdiAttributedText imageAttachmentAtIndex:] */

void FUN_1080dd24c(void)

{
  long extraout_x8;
  long lVar1;
  float fVar2;
  float fVar3;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0xa0) == '\x01') {
    lVar1 = extraout_x8 + 0x78;
    FUN_1080dd310();
    func_0x00010b98101c();
    _objc_retainAutoreleasedReturnValue();
    fVar2 = *(float *)(lVar1 + 8);
    fVar3 = *(float *)(lVar1 + 0xc);
    if (*(long *)(lVar1 + 0x20) != 0) {
      func_0x00010b981730(lVar1 + 0x10);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_alloc(PTR_PTR_1126d94b8);
    func_0x00010bff4b00((double)fVar2,(double)fVar3);
    func_0x0001080dd594();
    func_0x0001080dd58c();
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080dd310; end: 1080dd327;  */

void FUN_1080dd310(long param_1)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x0001080da3e4();
    func_0x0001080dd5a0();
    lVar3 = *(long *)(extraout_x8 + 0xa8);
    if (lVar3 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(lVar3 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      _objc_alloc(PTR_PTR_1126d9298);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      func_0x00010bffe0c0();
      func_0x0001080dd5bc();
      func_0x0001078d39e8(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
    return;
  }
  return;
}



/* Entry: 1080dd328; end: 1080dd407; -[SCValdiAttributedText inlineViewAttachmentAtIndex:] */

void FUN_1080dd328(void)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long *plVar4;
  
  func_0x0001080dd5a0();
  lVar3 = *(long *)(extraout_x8 + 0xa8);
  if (lVar3 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(lVar3 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    _objc_alloc(PTR_PTR_1126d9298);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x00010bffe0c0();
    func_0x0001080dd5bc();
    func_0x0001078d39e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1080dd408; end: 1080dd42f;  */

undefined1  [16] FUN_1080dd408(float param_1,float param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  (**(code **)(**(long **)(param_3 + 0x20) + 0x20))();
  auVar1._0_8_ = (double)param_1;
  auVar1._8_8_ = (double)param_2;
  return auVar1;
}



/* Entry: 1080dd430; end: 1080dd45b;  */

void FUN_1080dd430(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x20) = lVar4;
  return;
}



/* Entry: 1080dd45c; end: 1080dd54b; -[SCValdiAttributedText animationTransformAtIndex:] */

void FUN_1080dd45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x0001080dd5a0();
  if (*(char *)(extraout_x8 + 0xf0) == '\x01') {
    if (*(char *)(extraout_x8 + 0xb8) == '\x01') {
      func_0x0001080dcf80(extraout_x8 + 0xb0);
      func_0x00010b98101c();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((*(long *)(extraout_x8 + 0xe8) != 0) && (*(int *)(*(long *)(extraout_x8 + 0xe8) + 0xc) != 0)
       ) {
      func_0x00010b98101c();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_alloc(PTR_PTR_1126d92b8);
    func_0x00010c020c60((double)*(float *)(extraout_x8 + 0xc0),
                        (double)*(float *)(extraout_x8 + 0xc4),(double)*(float *)(extraout_x8 + 200)
                        ,*(undefined8 *)(extraout_x8 + 0xd0),*(undefined8 *)(extraout_x8 + 0xd8));
    func_0x0001080dd5c8();
    func_0x0001080dd58c();
  }
  else {
    param_3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1080dd54c; end: 1080dd553; -[SCValdiAttributedText .cxx_destruct] */

undefined8 * FUN_1080dd54c(long param_1)

{
  FUN_1080cf6b0(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1080dd554; end: 1080dd55b; -[SCValdiAttributedText .cxx_construct] */

void FUN_1080dd554(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1080dd55c; end: 1080dd583;  */

undefined8 * FUN_1080dd55c(undefined8 *param_1)

{
  FUN_1080cf6b0(*param_1);
  return param_1;
}



/* Entry: 1080dd584; end: 1080dd5d3;  */

void FUN_1080dd584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1080dd5d4; end: 1080dd62b;  */

void FUN_1080dd5d4(long param_1)

{
  undefined8 unaff_x19;
  undefined1 auStack_28 [8];
  
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x00010b8c2988(auStack_28);
    func_0x00010b981064(auStack_28,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080de2e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080dd62c; end: 1080dd633;  */

void FUN_1080dd62c(long *param_1)

{
  undefined8 unaff_x19;
  undefined1 auStack_28 [8];
  
  if (*param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x00010b8c2988(auStack_28);
    func_0x00010b981064(auStack_28,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080de2e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1080dd634; end: 1080dd6ff;  */

void FUN_1080dd634(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 uVar2;
  int extraout_w10;
  long lStack_50;
  undefined8 uStack_48;
  long lVar3;
  
  _objc_retain();
  uStack_48 = param_2;
  FUN_1080dd700(&lStack_50,&uStack_48,param_3,param_4,param_5);
  lVar1 = lStack_50;
  *(undefined1 *)(lStack_50 + 0xa8) = 1;
  lVar3 = lStack_50;
  FUN_1080dd780();
  uVar2 = (undefined1)lVar3;
  func_0x0001080dd740();
  *(undefined1 *)(lVar1 + 0xa9) = uVar2;
  if ((lStack_50 != 0) && (*(long *)(lStack_50 + 0x10) != 0)) {
    do {
      func_0x0001080de270();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_50;
  func_0x0001080ddd70();
  _objc_release(uStack_48);
  return;
}



/* Entry: 1080dd700; end: 1080dd77f;  */

ulong FUN_1080dd700(ulong param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080de22c();
  uStack_28 = extraout_x8;
  FUN_1080dd934(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001080de218(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2957b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_managesChildFrames_112683010);
    return param_1;
  }
  return 0;
}



/* Entry: 1080dd780; end: 1080dd887;  */

void FUN_1080dd780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 0xb0);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)(param_1 + 0x18);
    func_0x00010b98101c();
    _objc_retainAutoreleasedReturnValue();
    _NSClassFromString();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c076f00();
      if ((int)puVar1 != 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110ed5d58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eeea0(puVar2,param_2,puVar1,4);
        _objc_release(puVar1);
      }
      func_0x0001080de260();
      puVar2 = PTR_PTR_1126d93f0;
      _objc_opt_class();
    }
    *(undefined **)(param_1 + 0xb0) = puVar2;
    _objc_retain(puVar2);
    func_0x0001080de298();
  }
  else {
    _objc_retain(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080dd888; end: 1080dd8f3;  */

void FUN_1080dd888(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int extraout_w10;
  long lStack_28;
  long lVar3;
  
  FUN_1080dd8f4(&lStack_28);
  lVar1 = lStack_28;
  lVar3 = lStack_28;
  FUN_1080dd780();
  uVar2 = (undefined1)lVar3;
  func_0x0001080dd740();
  *(undefined1 *)(lVar1 + 0xa9) = uVar2;
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x0001080de270();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_28;
  func_0x0001080de20c();
  return;
}



/* Entry: 1080dd8f4; end: 1080dd933;  */

void FUN_1080dd8f4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001080de22c();
  uStack_28 = extraout_x8;
  FUN_1080ddd7c(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001080de218(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080de308();
  FUN_1080dd954();
  return;
}



/* Entry: 1080dd934; end: 1080dd953;  */

void FUN_1080dd934(void)

{
  func_0x0001080de308();
  FUN_1080dd954();
  return;
}



/* Entry: 1080dd954; end: 1080dd9f7;  */

void FUN_1080dd954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = auStack_60;
  func_0x0001080de22c();
  uStack_48 = extraout_x8;
  FUN_1080dda14(auStack_60,1);
  FUN_1080dda6c(uStack_50,param_2,param_3,param_4,param_5);
  func_0x0001080de31c();
  FUN_1080dd9f8();
  FUN_1080ddd60(auStack_60);
  func_0x0001080de218(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1080ddd60();
  func_0x0001080de240();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = param_2;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_68 = FUN_1080dd9f8;
    lStack_78 = extraout_x8_00[1];
    if (lStack_78 != 0) {
      plVar1 = (long *)(lStack_78 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_80 = puVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001080de2fc(puVar2);
    func_0x0001003a824c(&puStack_80);
    return;
  }
  return;
}



/* Entry: 1080dd9f8; end: 1080dda13;  */

void FUN_1080dd9f8(long *param_1,long param_2,long param_3)

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
    func_0x0001080de2fc(lVar2);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080dda14; end: 1080dda3b;  */

long FUN_1080dda14(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080dda3c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080dda3c; end: 1080dda6b;  */

undefined8 * FUN_1080dda3c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x12f684bda12f685) {
    puVar1 = (undefined8 *)(param_2 * 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f720;
  FUN_1080ddac4(param_1 + 3);
  return param_1;
}



/* Entry: 1080dda6c; end: 1080ddaa3;  */

undefined8 * FUN_1080dda6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f720;
  FUN_1080ddac4(param_1 + 3);
  return param_1;
}



/* Entry: 1080ddaa4; end: 1080ddaa7;  */

void FUN_1080ddaa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080ddaa8; end: 1080ddabb;  */

void FUN_1080ddaa8(void)

{
  FUN_1080ddcf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ddabc; end: 1080ddac3;  */

void FUN_1080ddabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080de2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080ddac4; end: 1080ddb93;  */

undefined8 *
FUN_1080ddac4(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,long *param_5
             )

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int extraout_w10;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  uVar4 = *param_2;
  lVar5 = *param_3;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *param_5;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    do {
      func_0x0001080de270();
    } while (extraout_w10 != 0);
  }
  _objc_retain(uVar4);
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  FUN_1080ddb94(param_1,&lStack_48,param_4,&lStack_50);
  FUN_1080d5cdc(lStack_50);
  func_0x0001003a8cb8(lStack_48);
  *param_1 = &PTR_FUN_110a1f770;
  _objc_retainBlock();
  param_1[0x17] = uVar4;
  _objc_retainBlock();
  func_0x0001080de288();
  func_0x0001080de2d4();
  func_0x0001080de2dc();
  return param_1;
}



/* Entry: 1080ddb94; end: 1080ddc1b;  */

undefined8 *
FUN_1080ddb94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  uVar2 = *param_4;
  *param_4 = 0;
  *param_1 = &PTR_DAT_110d78f40;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar1;
  param_1[4] = param_3;
  param_1[5] = uVar2;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0x32aaaba7;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  func_0x0001080de2d4();
  func_0x0001080de2dc();
  *param_1 = &PTR_DAT_110a1f7e8;
  param_1[0x16] = 0;
  return param_1;
}



/* Entry: 1080ddc1c; end: 1080ddc1f;  */

undefined8 * FUN_1080ddc1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f770;
  _objc_release(param_1[0x17]);
  _objc_release(param_1[0x17]);
  *param_1 = &PTR_DAT_110d78f40;
  func_0x00010b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  func_0x00010b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ddc20; end: 1080ddc33;  */

void FUN_1080ddc20(void)

{
  FUN_1080ddcb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ddc34; end: 1080ddcb3;  */

void FUN_1080ddc34(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_28;
  
  lVar1 = *(long *)(param_2 + 0xb8);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1080c6098(&lStack_28,lVar1);
    if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
      do {
        func_0x0001080de270();
      } while (extraout_w10 != 0);
    }
    *param_1 = lStack_28;
    func_0x0001080c69c4();
  }
  func_0x0001080de298();
  return;
}



/* Entry: 1080ddcb4; end: 1080ddcef;  */

undefined8 * FUN_1080ddcb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f770;
  _objc_release(param_1[0x17]);
  _objc_release(param_1[0x17]);
  *param_1 = &PTR_DAT_110d78f40;
  func_0x00010b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  func_0x00010b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ddcf0; end: 1080ddcff;  */

void FUN_1080ddcf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080ddd00; end: 1080ddd5f;  */

void FUN_1080ddd00(long param_1,long param_2,undefined8 param_3)

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
    func_0x0001080de2fc(param_2);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080ddd60; end: 1080ddd7b;  */

void FUN_1080ddd60(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080ddd7c; end: 1080ddd97;  */

void FUN_1080ddd7c(void)

{
  func_0x0001080de308();
  FUN_1080ddd98();
  return;
}



/* Entry: 1080ddd98; end: 1080dde2b;  */

void FUN_1080ddd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x0001080de22c();
  uStack_38 = extraout_x8;
  FUN_1080dde48(auStack_50,1);
  FUN_1080ddea0(uStack_40,param_2,param_3,param_4);
  func_0x0001080de31c();
  FUN_1080dde2c();
  func_0x0001080de1fc(auStack_50);
  func_0x0001080de218(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080de1fc();
  func_0x0001080de240();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = param_2;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1080dde2c;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0001080de2fc(puVar2);
    func_0x0001003a824c(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1080dde2c; end: 1080dde47;  */

void FUN_1080dde2c(long *param_1,long param_2,long param_3)

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
    func_0x0001080de2fc(lVar2);
    func_0x0001003a824c(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1080dde48; end: 1080dde6f;  */

long FUN_1080dde48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1080dde70();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1080dde70; end: 1080dde9f;  */

undefined8 * FUN_1080dde70(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x13b13b13b13b13c) {
    puVar1 = (undefined8 *)(param_2 * 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f830;
  FUN_1080ddef8(param_1 + 3);
  return param_1;
}



/* Entry: 1080ddea0; end: 1080dded7;  */

undefined8 * FUN_1080ddea0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a1f830;
  FUN_1080ddef8(param_1 + 3);
  return param_1;
}



/* Entry: 1080dded8; end: 1080ddedb;  */

void FUN_1080dded8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1f830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080ddedc; end: 1080ddeef;  */

void FUN_1080ddedc(void)

{
  func_0x0001080de18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ddef0; end: 1080ddef7;  */

void FUN_1080ddef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080de2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080ddef8; end: 1080ddf97;  */

undefined8 * FUN_1080ddef8(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *param_2;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_30 = *param_4;
  if ((lStack_30 != 0) && (*(long *)(lStack_30 + 0x10) != 0)) {
    plVar2 = (long *)(*(long *)(lStack_30 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1080ddb94(param_1,&lStack_28,param_3,&lStack_30);
  FUN_1080d5cdc(lStack_30);
  func_0x0001003a8cb8(lStack_28);
  *param_1 = &PTR_FUN_110a1f880;
  func_0x0001080de2d4();
  func_0x0001080de2dc();
  return param_1;
}



/* Entry: 1080ddf98; end: 1080ddf9b;  */

undefined8 * FUN_1080ddf98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d78f40;
  func_0x00010b9a1f08(param_1 + 0xc);
  func_0x00010b950e20(param_1 + 6);
  func_0x00010b8a83c8(param_1 + 5);
  func_0x000107c278f4(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1080ddf9c; end: 1080ddfaf;  */

void FUN_1080ddf9c(void)

{
  func_0x00010b950a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080ddfb0; end: 1080de133;  */

void FUN_1080ddfb0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  int extraout_w10;
  undefined8 *unaff_x19;
  ulong uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  ulong *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_48;
  
  func_0x0001080de22c();
  uStack_48 = extraout_x8;
  FUN_1080dd780();
  uStack_88 = 0;
  uStack_80 = param_1;
  if (param_2 != 0) {
    uVar1 = param_2 + 0x20;
    FUN_1080dd62c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f06c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      func_0x0001080de260();
    }
    else {
      func_0x00010c295520();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uVar1;
      func_0x0001080de260();
      if (uVar1 != 0) goto LAB_1080de088;
    }
  }
  pcStack_78 = FUN_1080de134;
  ppuStack_70 = &PTR_FUN_110a1f8d0;
  puStack_68 = &uStack_88;
  puStack_60 = &uStack_80;
  FUN_1080c5ffc(&pcStack_78);
  func_0x0001080de2a0();
  uVar1 = uStack_88;
LAB_1080de088:
  FUN_1080c6098(&pcStack_78,uVar1);
  pcVar3 = pcStack_78;
  if ((pcStack_78 != (code *)0x0) && (*(long *)(pcStack_78 + 0x10) != 0)) {
    do {
      func_0x0001080de270();
    } while (extraout_w10 != 0);
  }
  *unaff_x19 = pcVar3;
  func_0x0001080c69c4();
  func_0x0001080de288();
  _objc_release();
  func_0x0001080de218(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = uStack_88;
    _objc_release();
    func_0x0001080de240();
    uVar4 = **(undefined8 **)(uVar1 + 0x18);
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = **(undefined8 **)(uVar1 + 0x10);
    **(undefined8 **)(uVar1 + 0x10) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 1080de134; end: 1080de17f;  */

void FUN_1080de134(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = **(undefined8 **)(param_1 + 0x10);
  **(undefined8 **)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080de180; end: 1080de19b;  */

void FUN_1080de180(void)

{
  return;
}



/* Entry: 1080de19c; end: 1080de1fb;  */

void FUN_1080de19c(long param_1,long param_2,undefined8 param_3)

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
    func_0x0001080de2fc(param_2);
    func_0x0001003a824c(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080de1fc; end: 1080de32f;  */

void FUN_1080de1fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1080de330; end: 1080de34f;  */

void FUN_1080de330(undefined8 param_1,undefined8 param_2)

{
  FUN_1080de350(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080de350; end: 1080de90f;  */

void FUN_1080de350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long *param_6,long param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x26;
  ulong uVar9;
  long alStack_100 [6];
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_6;
  _objc_retain();
  _objc_retain(param_7);
  plVar1 = param_5;
  func_0x00010bdc2ae0();
  _objc_retainAutoreleasedReturnValue();
  if (plVar1 == (long *)0x0) {
    _objc_retain(param_5);
  }
  else {
    plVar2 = plVar1;
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x26 = (long *)PTR__OBJC_CLASS___CIImage_1126b3128;
    if (plVar2 == (long *)0x0) {
      _objc_retainAutorelease(plVar1);
      func_0x00010bdc1020();
      func_0x00010bfe9240();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x26 = plVar1;
      func_0x00010bdc10e0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf9de20();
    func_0x00010bfe6de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080dead0();
    FUN_1080de9b8(*param_6,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_1080de9b8(*param_6,5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1080de9b8(*param_6,10);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *param_6;
    FUN_1080de9b8(lVar3,0xf);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *param_6;
    puVar8 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
    func_0x00010c2979c0((double)*(float *)(lVar7 + 0x28),(double)*(float *)(lVar7 + 0x3c),
                        (double)*(float *)(lVar7 + 0x50),(double)*(float *)(lVar7 + 100));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
    func_0x00010bfae9a0(PTR__OBJC_CLASS___CIFilter_1126c7620);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar3);
    func_0x0001080deaa0();
    func_0x0001080dead0();
    func_0x0001080deae8();
    FUN_1080de910(unaff_x26,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080dea98();
    func_0x0001080deaa8();
    puVar8 = PTR__OBJC_CLASS___CIFilter_1126c7620;
    uVar9 = (ulong)(uint)*(float *)(*param_6 + 0x68);
    if (*(float *)(*param_6 + 0x68) == 0.0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x00010c0df740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae9a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080dea90();
    }
    param_6 = unaff_x26;
    FUN_1080de910(unaff_x26,puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080dead0();
    func_0x0001080deaa8();
    func_0x00010c14e120(plVar1);
    func_0x00010bfe8380(plVar1);
    plVar2 = plVar1;
    func_0x00010c130820();
    _objc_retain(param_6);
    _objc_retain(param_7);
    if (lRam0000000113729330 != -1) {
      func_0x000107c27d9c(0x113729330,&PTR___NSConcreteGlobalBlock_110a1f8f0);
    }
    lVar3 = lRam0000000113729328;
    if (param_7 != 0) {
      lVar3 = param_7;
    }
    _objc_retain(lVar3);
    lVar7 = lRam0000000113729338;
    lRam0000000113729338 = lVar3;
    _objc_release(lVar7);
    lVar3 = lRam0000000113729338;
    func_0x00010bf54e00(param_1,param_2,param_3,param_4,lRam0000000113729338);
    plVar5 = (long *)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9260(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(lVar3);
    plVar6 = plVar5;
    func_0x00010c130820();
    if (plVar2 != plVar6) {
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080dea98();
      plVar6 = plVar5;
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_d0 = 0x1080dea18;
    ppuStack_c8 = &PTR_FUN_110a1f910;
    plRam0000000113729340 = plVar6;
    func_0x00010b999018();
    FUN_1080dea64(alStack_100,&uStack_d0);
    plVar2 = alStack_100;
    (**(code **)(*plVar6 + 0x30))(plVar6,plVar2,1000000000);
    func_0x0001080dead8();
    func_0x0001080deac0();
    func_0x0001080deaa0();
    func_0x0001080dea90();
    param_5 = (long *)PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080dea98();
    func_0x0001080dea90();
  }
  plVar5 = plVar1;
  _objc_release();
  func_0x0001080deaa0();
  func_0x0001080deae8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    _objc_release(param_6);
    _objc_release(unaff_x26);
    _objc_release(plVar1);
    func_0x0001080deaa0();
    func_0x0001080deae8();
    __Unwind_Resume(plVar5);
    _objc_retain();
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      _objc_retain(plVar5);
      param_5 = plVar5;
    }
    else {
      func_0x00010c220220(plVar2);
      param_5 = plVar2;
      func_0x00010c296f60(plVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(plVar2);
    func_0x0001080deaa8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1080de910; end: 1080de9b7;  */

void FUN_1080de910(long param_1,long param_2)

{
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c220220(param_2);
    param_1 = param_2;
    func_0x00010c296f60(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  func_0x0001080deaa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080de9b8; end: 1080de9e3;  */

void FUN_1080de9b8(long param_1,long param_2)

{
  param_1 = param_1 + param_2 * 4;
                    /* WARNING: Could not recover jumptable at 0x00010c2979d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c),
             (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
             PTR__OBJC_CLASS___CIVector_1126d8aa0,PTR_s_vectorWithX_Y_Z_W__112683898);
  return;
}



/* Entry: 1080de9e4; end: 1080dea57;  */

void FUN_1080de9e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113729328;
  puRam0000000113729328 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080dea58; end: 1080dea63;  */

void FUN_1080dea58(void)

{
  return;
}



/* Entry: 1080dea64; end: 1080dea8f;  */

undefined8 * FUN_1080dea64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000100556b24(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1080dea90; end: 1080deaef;  */

void FUN_1080dea90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080deaf0; end: 1080deb03; +[SCValdiViewFactory valdiMarshallableObjectDescriptor] */

void FUN_1080deaf0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 3;
  return;
}



/* Entry: 1080deb04; end: 1080deb5b; -[SCValdiAnimatedContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080deb04(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc728;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_1127748b0));
  return;
}



/* Entry: 1080deb5c; end: 1080dec7b; -[SCValdiAnimatedContentView didMoveToValdiContext:viewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080deb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x0001080df500();
  lVar4 = (long)_DAT_1127748b0;
  if (*(long *)(param_1 + lVar4) == 0) {
    uVar3 = param_3;
    func_0x00010c142e00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b82c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c2405a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127748b4;
    _objc_storeWeak(param_1 + lVar5,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar3);
    func_0x0001080df510();
    puVar2 = PTR_PTR_1126d94c0;
    _objc_alloc();
    _objc_loadWeakRetained(param_1 + lVar5);
    func_0x00010c040b80();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x0001080df510();
    func_0x00010befbb60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080dec7c; end: 1080dede7; -[SCValdiAnimatedContentView onValdiAssetDidChange:shouldFlip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080dec7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x0001080df500();
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d94c8;
  _objc_opt_class(PTR_PTR_1126d94c8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x0001080df4d0();
  if (uVar1 == 0) {
    func_0x00010bf3b520(*(undefined8 *)(param_3 + _DAT_1127748b0));
  }
  else {
    puVar2 = PTR_PTR_1126d91a0;
    func_0x00010bfe93a0(PTR_PTR_1126d91a0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + _DAT_1127748b0);
    func_0x00010c1aa020(uVar4);
    lVar5 = (long)_DAT_1127748b8;
    if (*(long *)(param_3 + lVar5) != 0) {
      func_0x00010b97f424();
      func_0x00010c23d0a0(puVar2);
      func_0x00010b97f870(uVar4);
      func_0x00010c23d0a0(puVar2);
      func_0x00010b97f870(param_2,uVar4);
      func_0x00010c0f9540(*(undefined8 *)(param_3 + lVar5));
      func_0x0001080df518();
    }
    func_0x0001080df508();
  }
  func_0x0001080df510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1080dede8; end: 1080def13; +[SCValdiAnimatedContentView bindAttributes:] */

void FUN_1080dede8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080df500();
  func_0x00010bf1a020(param_3,param_2,6);
  func_0x0001080df4ec();
  func_0x0001080df4ec();
  func_0x0001080df4ec();
  func_0x0001080df4ec();
  func_0x00010bf1a080(param_3,param_2,&PTR____CFConstantStringClassReference_110e158f8,0,
                      &PTR___NSConcreteGlobalBlock_110a1fa90,&PTR___NSConcreteGlobalBlock_110a1fab0)
  ;
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed6078,
                      &PTR___NSConcreteGlobalBlock_110a1faf0,&PTR___NSConcreteGlobalBlock_110a1fb60)
  ;
  func_0x00010bf1a140(param_3,param_2,&PTR____CFConstantStringClassReference_110ea96d8,0,
                      &PTR___NSConcreteGlobalBlock_110a1fba0,&PTR___NSConcreteGlobalBlock_110a1fbc0)
  ;
  func_0x00010bf1a1e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed6098,
                      &PTR___NSConcreteGlobalBlock_110a1fbe0,&PTR___NSConcreteGlobalBlock_110a1fc00)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080def14; end: 1080def57;  */

undefined8 FUN_1080def14(void)

{
  func_0x0001080df53c();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662c0();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080def58; end: 1080def93;  */

void FUN_1080def58(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080def94; end: 1080defd7;  */

undefined8 FUN_1080def94(void)

{
  func_0x0001080df53c();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187d00();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080defd8; end: 1080df013;  */

void FUN_1080defd8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187d00(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df014; end: 1080df057;  */

undefined8 FUN_1080df014(void)

{
  func_0x0001080df53c();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168320();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080df058; end: 1080df093;  */

void FUN_1080df058(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168320(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df094; end: 1080df0d7;  */

undefined8 FUN_1080df094(void)

{
  func_0x0001080df53c();
  func_0x00010bf03660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1681e0();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080df0d8; end: 1080df113;  */

void FUN_1080df0d8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1681e0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df114; end: 1080df15b;  */

undefined8 FUN_1080df114(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2009a0();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080df15c; end: 1080df197;  */

void FUN_1080df15c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2009a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df198; end: 1080df253;  */

void FUN_1080df198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080df500();
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c1e47a0(param_2);
  func_0x0001080df508();
  _objc_release(param_3);
  func_0x0001080df4d0();
  return;
}



/* Entry: 1080df254; end: 1080df313;  */

void FUN_1080df254(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = param_3;
  func_0x00010b97f424();
  func_0x00010b97f5e4();
  func_0x00010b97f870(param_1,plVar1);
  func_0x0001080df530();
  func_0x00010b97f870(param_2,plVar1);
  func_0x0001080df530();
  func_0x00010c0f9540(param_3[4]);
                    /* WARNING: Could not recover jumptable at 0x0001080df2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}



/* Entry: 1080df314; end: 1080df34f;  */

void FUN_1080df314(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e47a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df350; end: 1080df3bb;  */

undefined8 FUN_1080df350(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080df500();
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0700();
  func_0x0001080df508();
  func_0x0001080df4d0();
  return 1;
}



/* Entry: 1080df3bc; end: 1080df3f7;  */

void FUN_1080df3bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf03660(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080df3f8; end: 1080df40b;  */

void FUN_1080df3f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setOnImageDecodedCallback__112683200);
  return;
}



/* Entry: 1080df40c; end: 1080df447; -[SCValdiAnimatedContentView valdi_setOnImageDecodedCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080df40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001080df500();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127748b8);
  *(undefined8 *)(param_1 + _DAT_1127748b8) = param_3;
  _objc_release(uVar1);
  return 1;
}



/* Entry: 1080df448; end: 1080df457; -[SCValdiAnimatedContentView animatedImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080df448(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127748b0);
}



/* Entry: 1080df458; end: 1080df477; -[SCValdiAnimatedContentView snapDrawingRuntime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080df458(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127748b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080df478; end: 1080df4c3; -[SCValdiAnimatedContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080df478(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127748b4);
  _objc_storeStrong(param_1 + _DAT_1127748b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127748b8,0);
  return;
}



/* Entry: 1080df4c4; end: 1080df547;  */

void FUN_1080df4c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080df548; end: 1080df6e3;  */

undefined8 * FUN_1080df548(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [40];
  
  puVar1 = &stack0xfffffffffffffff0;
  switch(param_1) {
  case 0:
  case 2:
    break;
  default:
    func_0x0001080df67c(auStack_48,&UNK_10f47a3c0);
    func_0x0001080df6b0();
    func_0x0001080df6c8();
    func_0x00010bd3f4e0();
  case 4:
    func_0x0001080df67c(auStack_48,&UNK_10f47a467);
    func_0x0001080df6b0();
    func_0x0001080df6c8();
    func_0x00010bd3f4e0();
  case 3:
    func_0x0001080df67c(auStack_48,&UNK_10f47a42c);
    func_0x0001080df6b0();
    func_0x0001080df6c8();
    func_0x00010bd3f4e0();
  case 1:
    func_0x0001080df67c(auStack_48,&UNK_10f47a3ec);
    func_0x0001080df6b0();
    func_0x0001080df6c8();
    unaff_x30 = 0x1080df60c;
    func_0x00010bd3f4e0();
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000113824998 & 1) == 0) {
    iVar2 = 0x13824998;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      puVar3 = (undefined8 *)0x8;
      __Znwm();
      *puVar3 = &PTR_DAT_110a1ff40;
      puRam0000000113824990 = puVar3;
      ___cxa_guard_release(0x113824998);
    }
  }
  return puRam0000000113824990;
}



/* Entry: 1080df6e4; end: 1080df89f;  */

long * FUN_1080df6e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000050;
  long alStack_180 [2];
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [8];
  long *plStack_148;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_10;
  
  func_0x0001080e0e74();
  uStack_168 = param_6;
  uStack_160 = param_3;
  func_0x0001080e0d20();
  uStack_10 = extraout_x8;
  FUN_1080df8a0();
  lVar6 = *(long *)(param_2 + 0x10);
  lVar7 = param_4 << 5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar8 = auStack_170 + param_4 * -0x20;
  puVar3 = puVar8;
  lVar1 = param_4;
  while (lVar1 != 0) {
    FUN_1080e0180(puVar3);
    puVar3 = puVar3 + 0x20;
    lVar7 = lVar7 + -0x20;
    lVar1 = lVar7;
  }
  puStack_158 = puVar8;
  for (lVar7 = 0; uVar2 = param_4 == lVar7, !(bool)uVar2; lVar7 = lVar7 + 1) {
    uVar9 = *(undefined8 *)(param_5 + lVar7 * 8);
    _JSValueGetType(param_1,uVar9);
    func_0x0001080e0e5c();
    uStack_e8 = extraout_x9 | extraout_x8_00;
    uStack_e0 = 0;
    lStack_f8 = lVar6;
    uStack_f0 = uVar9;
    FUN_1080df8d0(puVar8,&lStack_f8);
    FUN_1080e0bc0(&lStack_f8);
    puVar8 = puVar8 + 0x20;
  }
  func_0x00010b8ffd54(&lStack_f8,*(undefined8 *)(param_2 + 0x10));
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  plVar5 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar5 + 0x20))();
  puVar3 = puStack_158;
  puStack_128 = puStack_158;
  uStack_130 = uVar9;
  lStack_120 = param_4;
  plStack_118 = &lStack_f8;
  FUN_1080e0e24(&uStack_130);
  uStack_110 = uStack_160;
  plVar4 = *(long **)(param_2 + 0x10);
  plStack_100 = plVar5;
  func_0x0001080df950(plVar4,&lStack_f8);
  if (((ulong)plVar4 & 1) == 0) {
    plVar5 = *(long **)(param_2 + 0x18);
    (**(code **)(*plVar5 + 0x28))(auStack_150,plVar5,&uStack_130);
    uVar2 = (char)uStack_f0 == '\x01';
    plVar4 = plStack_148;
    if (!(bool)uVar2) {
      func_0x0001080e0de8();
      plVar4 = plVar5;
    }
    FUN_1080e0bc0(auStack_150);
  }
  else {
    func_0x0001080e0de8();
  }
  plVar5 = &lStack_f8;
  func_0x00010b8ffdac();
  if (param_4 != 0) {
    lVar7 = param_4 * -0x20;
    plVar5 = (long *)(puVar3 + param_4 * 0x20 + -0x20);
    do {
      FUN_1080e0bc0();
      plVar5 = plVar5 + -4;
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != 0);
  }
  func_0x0001080e0ce0(uStack_10);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  alStack_180[param_4 * -4] = (long)&stack0x00000050;
  alStack_180[param_4 * -4 + 1] = (long)FUN_1080df8a0;
  _JSObjectGetPrivate();
  if (plVar5 != (long *)0x0) {
    func_0x0001080e0e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)();
    return plVar5;
  }
  return (long *)0x0;
}



/* Entry: 1080df8a0; end: 1080df8cf;  */

void FUN_1080df8a0(long param_1)

{
  _JSObjectGetPrivate();
  if (param_1 != 0) {
    func_0x0001080e0e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)();
    return;
  }
  return;
}



/* Entry: 1080df8d0; end: 1080dfa07;  */

undefined8 * FUN_1080df8d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  func_0x0001080e0d20();
  uVar1 = puVar2 == param_2;
  puVar3 = param_2;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x0001080e0c10(param_1);
    *param_1 = *param_2;
    uVar4 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    *param_2 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    puVar2 = &uStack_38;
    FUN_1080e01a8();
    param_2[2] = uStack_30;
    param_2[1] = uStack_38;
    *(undefined1 *)(param_2 + 3) = 0;
  }
  func_0x0001080e0ce0(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if (((*(byte *)((long)puVar2 + 0x1f9) & 1) == 0) && ((*(byte *)((long)puVar2 + 0x1fa) & 1) == 0))
  {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b8dca74();
    if ((int)puVar2 != 0) {
      func_0x00010b9a0050(puVar3,&UNK_10f47a4a6);
      puVar2 = (undefined8 *)0x1;
    }
  }
  return puVar2;
}


