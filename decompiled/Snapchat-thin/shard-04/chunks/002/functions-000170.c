/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10326e7d0; end: 10326e7e7;  */

/* WARNING: Possible PIC construction at 0x000103ee397c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ee3980) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b00) */
/* WARNING: Removing unreachable block (ram,0x000103ee398c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b04) */
/* WARNING: Removing unreachable block (ram,0x000103ee3994) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b08) */
/* WARNING: Removing unreachable block (ram,0x000103ee399c) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b0c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b10) */
/* WARNING: Removing unreachable block (ram,0x000103ee39a8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b14) */
/* WARNING: Removing unreachable block (ram,0x000103ee39ac) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b18) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b1c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39b8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b20) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b24) */
/* WARNING: Removing unreachable block (ram,0x000103ee39c4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b28) */
/* WARNING: Removing unreachable block (ram,0x000103ee39cc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b2c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d0) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b30) */
/* WARNING: Removing unreachable block (ram,0x000103ee39d8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b34) */
/* WARNING: Removing unreachable block (ram,0x000103ee39dc) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b38) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e4) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b3c) */
/* WARNING: Removing unreachable block (ram,0x000103ee39e8) */
/* WARNING: Removing unreachable block (ram,0x000103ee3b40) */
/* WARNING: Removing unreachable block (ram,0x000103ee3ad8) */

void FUN_10326e7d0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long alStack_110 [8];
  undefined1 auStack_d0 [80];
  ulong *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar12 = param_1;
  (**(code **)(param_2 + 0x18))();
  (**(code **)(param_2 + 0x30))(param_1,param_2);
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_70 = uVar12 >> 0x20 | uVar12 << 0x20;
  uVar12 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uStack_78 = uVar12 >> 0x20 | uVar12 << 0x20;
  puVar4 = &uStack_70;
  puVar8 = &uStack_68;
  func_0x000100e36f4c(puVar4,puVar8);
  puVar5 = &uStack_78;
  puVar9 = &uStack_70;
  func_0x000100e36f4c(puVar5,puVar9);
  func_0x00010006c00c(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  puVar6 = puVar4;
  func_0x0001018e4e30(puVar4,(ulong)puVar8 & 0xffffffffffffff);
  func_0x00010006c00c(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puVar7 = puVar5;
  func_0x0001018e4e30(puVar5,(ulong)puVar9 & 0xffffffffffffff);
  puStack_80 = puVar6;
  *(ulong **)((long)alStack_110 + lVar1) = puVar5;
  *(undefined1 **)((long)alStack_110 + lVar1 + 8) = auStack_d0 + lVar1;
  *(ulong **)((long)alStack_110 + lVar1 + 0x10) = puVar4;
  *(long *)((long)alStack_110 + lVar1 + 0x18) = lVar11;
  *(ulong ***)((long)alStack_110 + lVar1 + 0x20) = &puStack_80;
  *(long *)((long)alStack_110 + lVar1 + 0x28) = lVar3;
  *(undefined1 **)((long)alStack_110 + lVar1 + 0x30) = &stack0xfffffffffffffff0;
  *(undefined **)((long)alStack_110 + lVar1 + 0x38) = &UNK_103ee3980;
  puVar9 = puStack_80;
  uVar12 = puVar7[2];
  uVar13 = puStack_80[2];
  if (SCARRY8(uVar13,uVar12)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c28);
    (*pcVar2)();
  }
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar6 == 0) || (uVar10 = puVar9[3] >> 1, (long)uVar10 < (long)(uVar13 + uVar12))) {
    func_0x0001014d97ac();
    uVar10 = puVar6[3] >> 1;
    uVar13 = puVar7[2];
    puVar9 = puVar6;
  }
  else {
    uVar13 = puVar7[2];
  }
  if (uVar13 == 0) {
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c2c);
      (*pcVar2)();
    }
  }
  else {
    if (uVar10 - puVar9[2] < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c30);
      (*pcVar2)();
    }
    _memcpy((long)puVar9 + puVar9[2] + 0x20,puVar7 + 4,uVar12);
    _swift_bridgeObjectRelease(puVar7);
    if (uVar12 != 0) {
      if (SCARRY8(puVar9[2],uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ee3c34);
        (*pcVar2)();
      }
      puVar9[2] = puVar9[2] + uVar12;
    }
  }
  return;
}



/* Entry: 10326e7e8; end: 10326e81f;  */

undefined1  [16] FUN_10326e7e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c44e64();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10326e820;
  return auVar2;
}



/* Entry: 10326e820; end: 10326e83f;  */

void FUN_10326e820(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setHighBits__112647b88,*param_1);
  return;
}



/* Entry: 10326e840; end: 10326e877;  */

undefined1  [16] FUN_10326e840(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[1] = uVar1;
  func_0x000107c4c0fc();
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10326e878;
  return auVar2;
}



/* Entry: 10326e878; end: 10326e883;  */

void FUN_10326e878(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1[1],PTR_s_setLowBits__11264de20,*param_1);
  return;
}



/* Entry: 10326e884; end: 10326e943;  */

undefined8 * FUN_10326e884(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace00;
  func_0x000107c610f8(PTR_PTR_1126ace00);
  func_0x000107c453e4();
  func_0x000107c541d0(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441df50();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326e944);
  (*pcVar2)();
}



/* Entry: 10326e944; end: 10326e967; +[SCCTXAction discoverPremiumAction] */

void FUN_10326e944(void)

{
  func_0x000107c614ec();
  FUN_10326e884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326e968; end: 10326ea27;  */

undefined8 * FUN_10326e968(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace08;
  func_0x000107c610f8(PTR_PTR_1126ace08);
  func_0x000107c453e4();
  func_0x000107c52fb0(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441d580();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ea28);
  (*pcVar2)();
}



/* Entry: 10326ea28; end: 10326ea4b; +[SCCTXAction snapReplyAction] */

void FUN_10326ea28(void)

{
  func_0x000107c614ec();
  FUN_10326e968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ea4c; end: 10326eb0b;  */

undefined8 * FUN_10326ea4c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace10;
  func_0x000107c610f8(PTR_PTR_1126ace10);
  func_0x000107c453e4();
  func_0x000107c543ac(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441db64();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326eb0c);
  (*pcVar2)();
}



/* Entry: 10326eb0c; end: 10326eb2f; +[SCCTXAction editAction] */

void FUN_10326eb0c(void)

{
  func_0x000107c614ec();
  FUN_10326ea4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326eb30; end: 10326ebef;  */

undefined8 * FUN_10326eb30(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace18;
  func_0x000107c610f8(PTR_PTR_1126ace18);
  func_0x000107c453e4();
  func_0x000107c57614(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441d61c();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ebf0);
  (*pcVar2)();
}



/* Entry: 10326ebf0; end: 10326ec13; +[SCCTXAction postStoryAction] */

void FUN_10326ebf0(void)

{
  func_0x000107c614ec();
  FUN_10326eb30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ec14; end: 10326ecd3;  */

undefined8 * FUN_10326ec14(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace20;
  func_0x000107c610f8(PTR_PTR_1126ace20);
  func_0x000107c453e4();
  func_0x000107c58c0c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e170();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ecd4);
  (*pcVar2)();
}



/* Entry: 10326ecd4; end: 10326ecf7; +[SCCTXAction scanAction] */

void FUN_10326ecd4(void)

{
  func_0x000107c614ec();
  FUN_10326ec14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ecf8; end: 10326ed23; +[SCCTXAction shareAction] */

void FUN_10326ecf8(void)

{
  func_0x000107c61168(PTR_PTR_1126b5b00);
  func_0x000107c5a93c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ed24; end: 10326edf7;  */

undefined8 * FUN_10326ed24(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace28;
  func_0x000107c610f8(PTR_PTR_1126ace28);
  func_0x000107c453e4();
  func_0x000107c5905c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    if ((param_1 & 1) == 0) {
      func_0x00010441d7c8();
    }
    else {
      func_0x00010441d804();
    }
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326edf8);
  (*pcVar2)();
}



/* Entry: 10326edf8; end: 10326ee23; +[SCCTXAction shareActionFromUpsell:] */

void FUN_10326edf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_10326ed24(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ee24; end: 10326ee73; +[SCCTXAction cardsAction] */

void FUN_10326ee24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126ace30;
  func_0x000107c610f8(PTR_PTR_1126ace30);
  func_0x000107c453e4();
  func_0x000107c5322c(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10326ee74; end: 10326ef33;  */

undefined8 * FUN_10326ee74(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace38;
  func_0x000107c610f8(PTR_PTR_1126ace38);
  func_0x000107c453e4();
  func_0x000107c5331c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441db10();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ef34);
  (*pcVar2)();
}



/* Entry: 10326ef34; end: 10326ef57; +[SCCTXAction chatAction] */

void FUN_10326ef34(void)

{
  func_0x000107c614ec();
  FUN_10326ee74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ef58; end: 10326ef83; +[SCCTXAction remixAction] */

void FUN_10326ef58(void)

{
  func_0x000107c61168(PTR_PTR_1126b5b00);
  func_0x000107c4fdc0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326ef84; end: 10326f057;  */

undefined8 * FUN_10326ef84(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace40;
  func_0x000107c610f8(PTR_PTR_1126ace40);
  func_0x000107c453e4();
  func_0x000107c525d4(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    if ((param_1 & 1) == 0) {
      func_0x00010441e3f4();
    }
    else {
      func_0x00010441e42c();
    }
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f058);
  (*pcVar2)();
}



/* Entry: 10326f058; end: 10326f083; +[SCCTXAction aiStoryReplyActionWithShouldShowPlusUpsell:] */

void FUN_10326f058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_10326ef84(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f084; end: 10326f183;  */

undefined8 * FUN_10326f084(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace48;
  func_0x000107c610f8(PTR_PTR_1126ace48);
  func_0x000107c453e4();
  func_0x000107c57c9c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f180);
    (*pcVar2)();
  }
  puVar5 = puVar4;
  func_0x00010441dcf4();
  uVar6 = *puVar5;
  uVar1 = puVar5[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c52194(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  if ((param_1 & 1) != 0) {
    puVar4 = unaff_x20;
    func_0x000107c4fdbc();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f184);
      (*pcVar2)();
    }
    func_0x000107c58dd0();
    func_0x000107c61170(puVar4);
  }
  return unaff_x20;
}



/* Entry: 10326f184; end: 10326f1af; +[SCCTXAction remixActionShouldSelectMyStory:] */

void FUN_10326f184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_10326f084(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f1b0; end: 10326f26f;  */

undefined8 * FUN_10326f1b0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace50;
  func_0x000107c610f8(PTR_PTR_1126ace50);
  func_0x000107c453e4();
  func_0x000107c57da8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e19c();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f270);
  (*pcVar2)();
}



/* Entry: 10326f270; end: 10326f293; +[SCCTXAction repostAction] */

void FUN_10326f270(void)

{
  func_0x000107c614ec();
  FUN_10326f1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f294; end: 10326f367;  */

undefined8 * FUN_10326f294(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace58;
  func_0x000107c610f8(PTR_PTR_1126ace58);
  func_0x000107c453e4();
  func_0x000107c52de8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    if ((param_1 & 1) == 0) {
      func_0x00010441da80();
    }
    else {
      func_0x00010441da50();
    }
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f368);
  (*pcVar2)();
}



/* Entry: 10326f368; end: 10326f393; +[SCCTXAction favoriteActionWithShouldAdd:] */

void FUN_10326f368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_10326f294(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f394; end: 10326f3bf; +[SCCTXAction commentsAction] */

void FUN_10326f394(void)

{
  func_0x000107c61168(PTR_PTR_1126b5b00);
  func_0x000107c3fe20();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f3c0; end: 10326f3d7; +[SCCTXAction commentsActionFromCTABelowPlayback:] */

void FUN_10326f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103271df8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f3d8; end: 10326f4c3;  */

long FUN_10326f3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126e0608;
  func_0x000107c610f8(PTR_PTR_1126e0608);
  func_0x000107c453e4();
  func_0x000107c535b8(unaff_x20);
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c3fe1c();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10326f4c0);
    (*pcVar1)();
  }
  func_0x000107c55454();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c52194(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_2);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326f4c4);
  (*pcVar1)();
}



/* Entry: 10326f4c4; end: 10326f527; +[SCCTXAction commentsActionWithShouldPopUpKeyboard:actionType:] */

void FUN_10326f4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c614ec(param_1);
  FUN_10326f3d8(param_3,param_4,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326f528; end: 10326f66b;  */

undefined8 * FUN_10326f528(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = unaff_x20;
  func_0x000107c4f604();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f664);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c578cc(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  puVar3 = unaff_x20;
  func_0x000107c4f604();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar5 = param_3;
    }
    func_0x000107c551c0(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    puVar3 = unaff_x20;
    func_0x000107c4ce6c();
    func_0x000107c61180();
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x00010441d5e4();
      uVar5 = *puVar4;
      uVar1 = puVar4[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52194(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar5);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f66c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f668);
  (*pcVar2)();
}



/* Entry: 10326f66c; end: 10326f677; +[SCCTXAction publicProfileActionWithProfileId:hostAccount:] */

void FUN_10326f66c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c614ec(param_1);
  FUN_10326f528(param_3,param_2,param_4,uVar1,param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326f678; end: 10326f817;  */

undefined8 *
FUN_10326f678(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = unaff_x20;
  func_0x000107c5da28();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f80c);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a344(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  puVar3 = unaff_x20;
  func_0x000107c5da28();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f810);
    (*pcVar2)();
  }
  uVar5 = 0;
  if (param_6 != 0) {
    func_0x000107c5fadc(param_5,param_6);
    uVar5 = param_5;
  }
  func_0x000107c53f7c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  puVar3 = unaff_x20;
  func_0x000107c5da28();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f814);
    (*pcVar2)();
  }
  uVar5 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar5 = param_3;
  }
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  puVar3 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x00010441d230();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f818);
  (*pcVar2)();
}



/* Entry: 10326f818; end: 10326f8e7; +[SCCTXAction userProfileActionWithUserId:username:displayName:] */

void FUN_10326f818(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = uVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c614ec(param_1);
  FUN_10326f678(param_3,param_2,param_4,uVar1,param_5,uVar2,param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326f8e8; end: 10326f9a7;  */

undefined8 * FUN_10326f8e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace60;
  func_0x000107c610f8(PTR_PTR_1126ace60);
  func_0x000107c453e4();
  func_0x000107c58bb8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441dbd4();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326f9a8);
  (*pcVar2)();
}



/* Entry: 10326f9a8; end: 10326f9cb; +[SCCTXAction saveAction] */

void FUN_10326f9a8(void)

{
  func_0x000107c614ec();
  FUN_10326f8e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326f9cc; end: 10326fadb;  */

long FUN_10326f9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c9668;
  func_0x000107c610f8(PTR_PTR_1126c9668);
  func_0x000107c453e4();
  func_0x000107c59f00(unaff_x20);
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c5cc1c();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10326fad8);
    (*pcVar1)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59efc(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  lVar3 = unaff_x20;
  func_0x000107c5cc1c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar4 = param_3;
    }
    func_0x000107c54230(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326fadc);
  (*pcVar1)();
}



/* Entry: 10326fadc; end: 10326fae7; +[SCCTXAction topicActionWithTopic:displayName:] */

void FUN_10326fadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c614ec(param_1);
  FUN_10326f9cc(param_3,param_2,param_4,uVar1,param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326fae8; end: 10326fb9b;  */

long FUN_10326fae8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126ace68;
  func_0x000107c610f8(PTR_PTR_1126ace68);
  func_0x000107c453e4();
  func_0x000107c55984(unaff_x20);
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20;
  func_0x000107c4a840();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c53964(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326fb9c);
  (*pcVar1)();
}



/* Entry: 10326fb9c; end: 10326fba7; +[SCCTXAction joinTheChatCtaActionWithConversationId:] */

void FUN_10326fb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_10326fae8(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326fba8; end: 10326fc67;  */

undefined8 * FUN_10326fba8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126cab88;
  func_0x000107c610f8(PTR_PTR_1126cab88);
  func_0x000107c453e4();
  func_0x000107c561c8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e064();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326fc68);
  (*pcVar2)();
}



/* Entry: 10326fc68; end: 10326fc8b; +[SCCTXAction mfsAction] */

void FUN_10326fc68(void)

{
  func_0x000107c614ec();
  FUN_10326fba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326fc8c; end: 10326fd4b;  */

undefined8 * FUN_10326fc8c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace70;
  func_0x000107c610f8(PTR_PTR_1126ace70);
  func_0x000107c453e4();
  func_0x000107c56fc0(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e0c8();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326fd4c);
  (*pcVar2)();
}



/* Entry: 10326fd4c; end: 10326fd6f; +[SCCTXAction openSearchChatTabAction] */

void FUN_10326fd4c(void)

{
  func_0x000107c614ec();
  FUN_10326fc8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10326fd70; end: 10326ff2b;  */

undefined8 * FUN_10326fd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = unaff_x20;
  func_0x000107c5d240();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ff1c);
    (*pcVar2)();
  }
  puVar4 = puVar3;
  func_0x000107c4f66c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ff20);
    (*pcVar2)();
  }
  uVar5 = 0;
  FUN_103271e88(0);
  func_0x000107c61434(param_2);
  func_0x000103ee3c34(param_1,param_2,uVar5,&PTR_DAT_11062e220);
  func_0x000107c578cc(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  if (param_4 != 0) {
    func_0x000107c61434(param_4);
    puVar3 = unaff_x20;
    func_0x000107c5d240();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ff28);
      (*pcVar2)();
    }
    puVar4 = puVar3;
    func_0x000107c4f66c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ff2c);
      (*pcVar2)();
    }
    func_0x000103ee3c34(param_3,param_4,uVar5,&PTR_DAT_11062e220);
    func_0x000107c551c0(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_3);
  }
  puVar3 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x00010441d5e4();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326ff24);
  (*pcVar2)();
}



/* Entry: 10326ff2c; end: 10326ff37; +[SCCTXAction unifiedPublicProfileActionWithPublisherProfileId:hostAccountId:] */

void FUN_10326ff2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c614ec(param_1);
  FUN_10326fd70(param_3,param_2,param_4,uVar1,param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10326ff38; end: 103270107;  */

void FUN_10326ff38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c614ec(param_1);
  (*param_5)(param_3,param_2,param_4,uVar1,param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270108; end: 103270113; +[SCCTXAction unifiedPublicProfileActionWithUserProfileId:] */

void FUN_103270108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  (*(code *)0x10326ffd4)(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270114; end: 1032701d3;  */

undefined8 * FUN_103270114(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace78;
  func_0x000107c610f8(PTR_PTR_1126ace78);
  func_0x000107c453e4();
  func_0x000107c5309c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e100();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032701d4);
  (*pcVar2)();
}



/* Entry: 1032701d4; end: 1032701f7; +[SCCTXAction cameraShortcutAction] */

void FUN_1032701d4(void)

{
  func_0x000107c614ec();
  FUN_103270114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032701f8; end: 10327030b;  */

undefined8 * FUN_1032701f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace80;
  func_0x000107c610f8(PTR_PTR_1126ace80);
  func_0x000107c453e4();
  func_0x000107c53f60(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c41538();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103270308);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53f64(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e138();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10327030c);
  (*pcVar2)();
}



/* Entry: 10327030c; end: 103270317; +[SCCTXAction discoverDeeplinkStickerActionWithDeeplinkUrl:] */

void FUN_10327030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_1032701f8(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270318; end: 10327042b;  */

undefined8 * FUN_103270318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace88;
  func_0x000107c610f8(PTR_PTR_1126ace88);
  func_0x000107c453e4();
  func_0x000107c54bd0(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4396c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103270428);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a344(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441d9e0();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10327042c);
  (*pcVar2)();
}



/* Entry: 10327042c; end: 103270437; +[SCCTXAction friendAddActionWithUserId:] */

void FUN_10327042c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_103270318(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270438; end: 1032704f7;  */

undefined8 * FUN_103270438(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ace90;
  func_0x000107c610f8(PTR_PTR_1126ace90);
  func_0x000107c453e4();
  func_0x000107c524a8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e1cc();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032704f8);
  (*pcVar2)();
}



/* Entry: 1032704f8; end: 10327051b; +[SCCTXAction addLensAction] */

void FUN_1032704f8(void)

{
  func_0x000107c614ec();
  FUN_103270438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10327051c; end: 10327056b; +[SCCTXAction stickerCutoutAction] */

void FUN_10327051c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126ace98;
  func_0x000107c610f8(PTR_PTR_1126ace98);
  func_0x000107c453e4();
  func_0x000107c59890(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10327056c; end: 1032705bb; +[SCCTXAction aiRemixAction] */

void FUN_10327056c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126acea0;
  func_0x000107c610f8(PTR_PTR_1126acea0);
  func_0x000107c453e4();
  func_0x000107c525bc(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1032705bc; end: 103270843;  */

undefined8 *
FUN_1032705bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b5c18;
  func_0x000107c610f8(PTR_PTR_1126b5c18);
  func_0x000107c453e4();
  func_0x000107c5796c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4f498();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10327082c);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c57968(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  puVar4 = unaff_x20;
  func_0x000107c4f498();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103270830);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c55d70(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  puVar4 = unaff_x20;
  func_0x000107c4f498();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103270834);
    (*pcVar2)();
  }
  func_0x000107c5ee20(param_5,param_6);
  func_0x000107c54580(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  puVar4 = unaff_x20;
  func_0x000107c4f498();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107c57a6c();
    func_0x000107c61170(puVar4);
    if (param_8 != 0) {
      func_0x000107c61174(param_8);
      puVar4 = unaff_x20;
      func_0x000107c4f498();
      func_0x000107c61180();
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103270840);
        (*pcVar2)();
      }
      func_0x000107c5795c();
      func_0x000107c61170(param_8);
      func_0x000107c61170(puVar4);
    }
    if (param_9 != 0) {
      func_0x000107c61174();
      puVar4 = unaff_x20;
      func_0x000107c4f498();
      func_0x000107c61180();
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103270844);
        (*pcVar2)();
      }
      func_0x000107c5797c();
      func_0x000107c61170(param_9);
      func_0x000107c61170(puVar4);
    }
    puVar4 = unaff_x20;
    func_0x000107c4ce6c();
    func_0x000107c61180();
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
      func_0x00010441e2e8();
      uVar6 = *puVar5;
      uVar1 = puVar5[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar6,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52194(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar6);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10327083c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270838);
  (*pcVar2)();
}



/* Entry: 103270844; end: 103270963; +[SCCTXAction promptLensActionWithLensId:promptId:encryptionKey:qaFlowType:promptCreatorUserId:promptReceiverUserId:] */

void FUN_103270844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c5faec(param_3);
  uVar4 = param_2;
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  uVar5 = uVar4;
  func_0x000107c61174(param_5);
  uVar2 = param_7;
  func_0x000107c61174();
  uVar3 = param_8;
  func_0x000107c61174();
  func_0x000107c5ee30(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c614ec(param_1);
  FUN_1032705bc(param_1,param_3,param_2,param_4,uVar4,param_5,uVar5,param_6,param_7,param_8);
  func_0x00010006c090(param_5,uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270964; end: 103270a37;  */

undefined8 * FUN_103270964(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acea8;
  func_0x000107c610f8(PTR_PTR_1126acea8);
  func_0x000107c453e4();
  func_0x000107c57c00(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    if ((param_1 & 1) == 0) {
      func_0x00010441e3b8();
    }
    else {
      func_0x00010441e380();
    }
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270a38);
  (*pcVar2)();
}



/* Entry: 103270a38; end: 103270a63; +[SCCTXAction recommendActionWithShouldAdd:] */

void FUN_103270a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_103270964(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270a64; end: 103270b23;  */

undefined8 * FUN_103270a64(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126aceb0;
  func_0x000107c610f8(PTR_PTR_1126aceb0);
  func_0x000107c453e4();
  func_0x000107c550c4(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e738();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270b24);
  (*pcVar2)();
}



/* Entry: 103270b24; end: 103270b47; +[SCCTXAction heroContextMenuAction] */

void FUN_103270b24(void)

{
  func_0x000107c614ec();
  FUN_103270a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270b48; end: 103270c07;  */

undefined8 * FUN_103270b48(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126aceb8;
  func_0x000107c610f8(PTR_PTR_1126aceb8);
  func_0x000107c453e4();
  func_0x000107c54dfc(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441da18();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270c08);
  (*pcVar2)();
}



/* Entry: 103270c08; end: 103270c2b; +[SCCTXAction genAiFeaturedStoryAction] */

void FUN_103270c08(void)

{
  func_0x000107c614ec();
  FUN_103270b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270c2c; end: 103270ceb;  */

undefined8 * FUN_103270c2c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acec0;
  func_0x000107c610f8(PTR_PTR_1126acec0);
  func_0x000107c453e4();
  func_0x000107c58bbc(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e4e0();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270cec);
  (*pcVar2)();
}



/* Entry: 103270cec; end: 103270d0f; +[SCCTXAction saveClientGeneratedSnapAction] */

void FUN_103270cec(void)

{
  func_0x000107c614ec();
  FUN_103270c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270d10; end: 103270e23;  */

undefined8 * FUN_103270d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acec8;
  func_0x000107c610f8(PTR_PTR_1126acec8);
  func_0x000107c453e4();
  func_0x000107c57498(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4e8a8();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103270e20);
    (*pcVar2)();
  }
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59950(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e518();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270e24);
  (*pcVar2)();
}



/* Entry: 103270e24; end: 103270e2f; +[SCCTXAction launchPublicStoryWithStoryId:] */

void FUN_103270e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_103270d10(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103270e30; end: 103270e5f; +[SCCTXAction contentLabelAction] */

void FUN_103270e30(void)

{
  func_0x000107c614ec();
  FUN_103270e60(&UNK_10441e5b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270e60; end: 103270f23;  */

undefined8 * FUN_103270e60(code *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126ac0e0;
  func_0x000107c610f8(PTR_PTR_1126ac0e0);
  func_0x000107c453e4();
  func_0x000107c53838(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    (*param_1)();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103270f24);
  (*pcVar2)();
}



/* Entry: 103270f24; end: 103270f53; +[SCCTXAction replyToFriendBarAction] */

void FUN_103270f24(void)

{
  func_0x000107c614ec();
  FUN_103270e60(&UNK_10441ea48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103270f54; end: 103271163;  */

undefined8 * FUN_103270f54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126aced0;
  func_0x000107c610f8(PTR_PTR_1126aced0);
  func_0x000107c453e4();
  func_0x000107c59eec(unaff_x20);
  func_0x000107c61170(puVar3);
  if (param_1 != 0) {
    func_0x000107c61174(param_1);
    puVar4 = unaff_x20;
    func_0x000107c5cc00();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103271160);
      (*pcVar2)();
    }
    func_0x000107c5fdd4(param_1);
    func_0x000107c52d14(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  if (param_3 != 0) {
    puVar4 = unaff_x20;
    func_0x000107c5cc00();
    func_0x000107c61180();
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103271164);
      (*pcVar2)();
    }
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c5446c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_2);
  }
  puVar4 = unaff_x20;
  func_0x000107c5cc00();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000107c575ec();
    func_0x000107c61170(puVar4);
    if (param_4 < 0) {
      uVar8 = 0;
      uVar7 = 0xe000000000000000;
    }
    else {
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar8 = 0x5f;
      uVar7 = 0xe100000000000000;
    }
    puVar4 = unaff_x20;
    func_0x000107c4ce6c();
    func_0x000107c61180();
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = puVar4;
      func_0x00010441e69c();
      uVar6 = *puVar5;
      uVar1 = puVar5[1];
      func_0x000107c61434();
      func_0x000107c5fb78(uVar8,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c5fadc(uVar6,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52194(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar6);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10327115c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103271158);
  (*pcVar2)();
}



/* Entry: 103271164; end: 1032711ff; +[SCCTXAction topLevelStickerReactActionWithBitmojiIntentId:emoji:position:] */

void FUN_103271164(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c614ec(param_1);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103270f54(param_3,param_4,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271200; end: 1032712bf;  */

undefined8 * FUN_103271200(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126aced8;
  func_0x000107c610f8(PTR_PTR_1126aced8);
  func_0x000107c453e4();
  func_0x000107c56fbc(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e700();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032712c0);
  (*pcVar2)();
}



/* Entry: 1032712c0; end: 1032712e3; +[SCCTXAction openReactionTrayAction] */

void FUN_1032712c0(void)

{
  func_0x000107c614ec();
  FUN_103271200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032712e4; end: 1032713a3;  */

undefined8 * FUN_1032712e4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acee0;
  func_0x000107c610f8(PTR_PTR_1126acee0);
  func_0x000107c453e4();
  func_0x000107c57610(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e778();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032713a4);
  (*pcVar2)();
}



/* Entry: 1032713a4; end: 1032713c7; +[SCCTXAction postSpotlightAction] */

void FUN_1032713a4(void)

{
  func_0x000107c614ec();
  FUN_1032712e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032713c8; end: 1032713e7; +[SCCTXAction quickShareAction] */

void FUN_1032713c8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4f838(param_1,param_2,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032713e8; end: 1032714bb;  */

undefined8 * FUN_1032713e8(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acee8;
  func_0x000107c610f8(PTR_PTR_1126acee8);
  func_0x000107c453e4();
  func_0x000107c57ad8(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    if ((param_1 & 1) == 0) {
      func_0x00010441e7b8();
    }
    else {
      func_0x00010441e7f0();
    }
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032714bc);
  (*pcVar2)();
}



/* Entry: 1032714bc; end: 1032714e7; +[SCCTXAction quickShareActionFromUpsell:] */

void FUN_1032714bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c614ec();
  FUN_1032713e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032714e8; end: 1032715a7;  */

undefined8 * FUN_1032714e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acef0;
  func_0x000107c610f8(PTR_PTR_1126acef0);
  func_0x000107c453e4();
  func_0x000107c57abc(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e828();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032715a8);
  (*pcVar2)();
}



/* Entry: 1032715a8; end: 1032715cb; +[SCCTXAction quickCommentAction] */

void FUN_1032715a8(void)

{
  func_0x000107c614ec();
  FUN_1032714e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032715cc; end: 1032716fb;  */

undefined8 * FUN_1032715cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126e0610;
  func_0x000107c610f8(PTR_PTR_1126e0610);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c55d70(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c55b04(puVar3);
  func_0x000107c5745c(unaff_x20);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032716f8);
    (*pcVar2)();
  }
  func_0x000107c53218();
  func_0x000107c61170(puVar4);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e890();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032716fc);
  (*pcVar2)();
}



/* Entry: 1032716fc; end: 103271873; +[SCCTXAction playGameLensActionWithLensId:launchSource:] */

void FUN_1032716fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_1032715cc(param_3,param_2,param_4);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271874; end: 10327187f; +[SCCTXAction playSpotlightStoryActionWithCompositeStoryId:] */

void FUN_103271874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  (*(code *)0x103271760)(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271880; end: 103271973;  */

undefined8 * FUN_103271880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acf00;
  func_0x000107c610f8(PTR_PTR_1126acf00);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53964(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c54114(unaff_x20);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e900();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103271974);
  (*pcVar2)();
}



/* Entry: 103271974; end: 10327197f; +[SCCTXAction directShareActionWithConversationId:] */

void FUN_103271974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_103271880(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271980; end: 103271a73;  */

undefined8 * FUN_103271980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126acf08;
  func_0x000107c610f8(PTR_PTR_1126acf08);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c58d40(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c55b00(unaff_x20);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441e998();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103271a74);
  (*pcVar2)();
}



/* Entry: 103271a74; end: 103271a7f; +[SCCTXAction launchSearchActionWithSearchString:] */

void FUN_103271a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  FUN_103271980(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271a80; end: 103271b9b;  */

void FUN_103271a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c614ec(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103271b9c; end: 103271bbf; +[SCCTXAction storagePlanUpsellAction] */

void FUN_103271b9c(void)

{
  func_0x000107c614ec();
  func_0x000103271ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103271bc0; end: 103271c7b;  */

undefined8 * FUN_103271bc0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
    func_0x00010441ea0c();
    uVar5 = *puVar4;
    uVar1 = puVar4[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    puVar6 = PTR_PTR_1126acf18;
    func_0x000107c610f8(PTR_PTR_1126acf18);
    func_0x000107c453e4();
    func_0x000107c525d0(unaff_x20);
    func_0x000107c61170(puVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103271c7c);
  (*pcVar2)();
}



/* Entry: 103271c7c; end: 103271c9f; +[SCCTXAction aiSongUpsellAction] */

void FUN_103271c7c(void)

{
  func_0x000107c614ec();
  FUN_103271bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103271ca0; end: 103271d5f;  */

undefined8 * FUN_103271ca0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b6270;
  func_0x000107c610f8(PTR_PTR_1126b6270);
  func_0x000107c453e4();
  func_0x000107c5940c(unaff_x20);
  func_0x000107c61170(puVar3);
  puVar4 = unaff_x20;
  func_0x000107c4ce6c();
  func_0x000107c61180();
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010441d61c();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52194(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103271d60);
  (*pcVar2)();
}


