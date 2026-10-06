/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c99e2c; end: 102c99e73; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99e2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f08ea8;
  func_0x000107c61428(param_1 + _DAT_112f08ea8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c99e74; end: 102c99ecb; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f08ea8;
  func_0x000107c61428(param_1 + _DAT_112f08ea8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102c99ecc; end: 102c99fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99ecc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102c97acc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f08c78) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c99fa4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f08c80);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f08eb0);
    *(long **)(unaff_x20 + _DAT_112f08eb0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102c99fa4; end: 102c99fcb; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint begin] */

void FUN_102c99fa4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c99ecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c99fcc; end: 102c9a143;  */

/* WARNING: Possible PIC construction at 0x000102c9a034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9a0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9a038) */
/* WARNING: Removing unreachable block (ram,0x000102c9a0d0) */
/* WARNING: Removing unreachable block (ram,0x000102c9a0e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c99fcc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f08eb0);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102c9a144; end: 102c9a14b;  */

void FUN_102c9a144(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102c9a14c; end: 102c9a17f; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint end] */

void FUN_102c9a14c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c99fcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c9a180; end: 102c9a29f;  */

void FUN_102c9a180(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "AdPagePlaybackScopeGraphBridge/SCSCAdPagePlaybackScopedServicesSaberEntryPoint.swift"
                        ,0x54,2,0x2e,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9a2a0);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102c9a2a0; end: 102c9a34b; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102c9a2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_102c9a180(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102c9a34c; end: 102c9a3ab; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9a34c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f08ea8,0);
  *(undefined8 *)(param_1 + _DAT_112f08eb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c9a3ac; end: 102c9a3df;  */

void FUN_102c9a3ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c9a3e0; end: 102c9a417; -[SCSCAdPagePlaybackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9a3e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f08ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f08eb0));
  return;
}



/* Entry: 102c9a418; end: 102c9a437;  */

void FUN_102c9a418(void)

{
  func_0x000107c61168(&PTR_PTR_11289c138);
  return;
}



/* Entry: 102c9a438; end: 102c9a497; -[_TtC24AdPlayableImplementation25AdPlayableContentWorkflow init] */

void FUN_102c9a438(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableImplementation.AdPlayableContentWorkflow",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9a464);
  (*pcVar1)();
}



/* Entry: 102c9a498; end: 102c9a503; -[_TtC24AdPlayableImplementation25AdPlayableContentWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9a498(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f08ee0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f08ee8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08ef0));
  FUN_102c9b000(param_1 + _DAT_112f08f00,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 102c9a504; end: 102c9a50b;  */

void FUN_102c9a504(void)

{
  if (lRam0000000112f08f30 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7264cc);
  return;
}



/* Entry: 102c9a50c; end: 102c9a543;  */

void FUN_102c9a50c(undefined8 param_1)

{
  if (lRam0000000112f08f30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7264cc);
  return;
}



/* Entry: 102c9a544; end: 102c9a5db;  */

void FUN_102c9a544(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBoWV_11034d678 + 0x40;
  puStack_48 = &UNK_10db3bf20;
  puStack_38 = &UNK_10db3bf38;
  puStack_30 = &UNK_10db3bf50;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 102c9a5dc; end: 102c9a92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9a5dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar8;
  long unaff_x20;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [32];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar11 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar11 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    uVar7 = 0;
    lVar2 = -0x2fffffffffffffe0;
    func_0x000100029284(0xd000000000000020);
    if ((uVar7 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_70);
      func_0x000107c6142c(param_1);
      lVar2 = lVar12;
      func_0x000107c6147c(lVar12,auStack_70,PTR___sypN_11034f1a8 + 8,lVar1,6);
      pcVar9 = *(code **)(lVar13 + 0x38);
      (*pcVar9)(lVar12,(uint)lVar2 ^ 1,1,lVar1);
      lVar2 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1,lVar1);
      if ((int)lVar2 != 1) {
        (**(code **)(lVar13 + 0x20))(lVar10,lVar12,lVar1);
        (**(code **)(lVar13 + 0x10))(puVar11,lVar10,lVar1);
        (*pcVar9)(puVar11,0,1,lVar1);
        lVar12 = _DAT_112f08f00;
        func_0x000107c61428(unaff_x20 + _DAT_112f08f00,auStack_70,0x21,0);
        func_0x0001014522e4(puVar11,unaff_x20 + lVar12);
        func_0x000107c614a8(auStack_70);
        if ((*(byte *)(unaff_x20 + _DAT_112f08ef8) & 1) == 0) {
          *(undefined1 *)(unaff_x20 + _DAT_112f08ef8) = 1;
          uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f08ef0);
          lVar12 = ((undefined8 *)(unaff_x20 + _DAT_112f08ef0))[1];
          func_0x000107c614f0(uVar3);
          (**(code **)(lVar12 + 0x40))(lVar10,uVar3,lVar12);
        }
        puVar4 = (undefined8 *)0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        puVar4[3] = 2;
        puVar4[2] = 1;
        puVar5 = puVar4;
        func_0x000103b98e98();
        uVar3 = puVar5[1];
        puVar4[4] = *puVar5;
        puVar4[5] = uVar3;
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f08ef0);
        uVar6 = uVar8;
        func_0x000107c614f0();
        puVar4[9] = uVar6;
        puVar4[6] = uVar8;
        func_0x000107c61434(uVar3);
        func_0x000107c615f0(uVar8);
        func_0x000100214a84(puVar4);
        func_0x000107c61588(puVar4);
        FUN_102c9b000(puVar4 + 4,0x112d4b5f0,&UNK_10d9127d0);
        (**(code **)(lVar13 + 8))(lVar10,lVar1);
        return;
      }
      goto LAB_102c9a8ac;
    }
    func_0x000107c6142c(param_1);
  }
  pcVar9 = *(code **)(lVar13 + 0x38);
  (*pcVar9)(lVar12,1,1,lVar1);
LAB_102c9a8ac:
  FUN_102c9b000(lVar12,0x112d36580,&UNK_10d9016d0);
  (*pcVar9)(puVar11,1,1,lVar1);
  lVar1 = _DAT_112f08f00;
  func_0x000107c61428(unaff_x20 + _DAT_112f08f00,auStack_70,0x21,0);
  func_0x0001014522e4(puVar11,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_70);
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102c9a930; end: 102c9ac33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c9a930(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar9 - extraout_x8_00;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar10 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = _DAT_112f08f00;
  lVar11 = uVar10 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112f08f00,auStack_78,0,0);
  (**(code **)(lVar13 + 0x38))(lVar11,1,1,lVar1);
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  func_0x000100029394(unaff_x20 + lVar2,lVar7);
  func_0x000100029394(lVar11,lVar7 + lVar12);
  pcVar8 = *(code **)(lVar13 + 0x30);
  lVar2 = lVar7;
  (*pcVar8)(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_102c9b000(lVar11,0x112d36580,&UNK_10d9016d0);
    lVar12 = lVar7 + lVar12;
    (*pcVar8)(lVar12,1,lVar1);
    if ((int)lVar12 == 1) {
      FUN_102c9b000(lVar7,0x112d36580,&UNK_10d9016d0);
      return PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  else {
    func_0x000100029394(lVar7,uVar10);
    lVar2 = lVar7 + lVar12;
    (*pcVar8)(lVar2,1,lVar1);
    if ((int)lVar2 != 1) {
      puVar5 = puVar9;
      (**(code **)(lVar13 + 0x20))(puVar9,lVar7 + lVar12,lVar1);
      func_0x000101553b98();
      uVar6 = uVar10;
      func_0x000107c5fab8(uVar10,puVar9,lVar1,puVar5);
      pcVar8 = *(code **)(lVar13 + 8);
      (*pcVar8)(puVar9,lVar1);
      FUN_102c9b000(lVar11,0x112d36580,&UNK_10d9016d0);
      (*pcVar8)(uVar10,lVar1);
      FUN_102c9b000(lVar7,0x112d36580,&UNK_10d9016d0);
      if ((uVar6 & 1) != 0) {
        return PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      goto LAB_102c9ab40;
    }
    FUN_102c9b000(lVar11,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar13 + 8))(uVar10,lVar1);
  }
  FUN_102c9b000(lVar7,0x112d7e680,&UNK_10d95e350);
LAB_102c9ab40:
  puVar3 = (undefined *)0x112f05268;
  func_0x0001000285a8(0x112f05268,&UNK_10db39870);
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  uVar4 = 0;
  func_0x000103b99614();
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  return puVar3;
}



/* Entry: 102c9ac34; end: 102c9ac6f;  */

void FUN_102c9ac34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f08f40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f08f40,&UNK_10db3bf98);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102c9ac70; end: 102c9ac8f;  */

void FUN_102c9ac70(void)

{
  FUN_102c9a5dc();
  return;
}



/* Entry: 102c9ac90; end: 102c9ac9b;  */

undefined * FUN_102c9ac90(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c9ac9c; end: 102c9acbb;  */

void FUN_102c9ac9c(void)

{
  FUN_102c9a930();
  return;
}



/* Entry: 102c9acbc; end: 102c9acbf;  */

undefined * FUN_102c9acbc(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102c9acc0; end: 102c9adeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9acc0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(3,uVar2,lVar3);
  func_0x0001000d224c(auStack_78);
  lVar1 = lStack_58;
  uVar2 = uStack_60;
  func_0x0001000a8868(auStack_78,uStack_60);
  uStack_88 = 1;
  uStack_80 = 2;
  (**(code **)(lVar1 + 0x10))(&uStack_88,&UNK_1105c3600,&PTR_DAT_1105c32c0,uVar2,lVar1);
  func_0x0001000834e4(auStack_78);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uStack_88 = 1;
  uStack_80 = 3;
  (**(code **)(lStack_58 + 0x10))(&uStack_88,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102c9adec; end: 102c9aeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9adec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uStack_68 = 0x11;
  uStack_60 = 1;
  (**(code **)(lStack_38 + 0x10))(&uStack_68,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9aeac; end: 102c9aeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9aeac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(3,uVar2,lVar3);
  func_0x0001000d224c(auStack_78);
  lVar1 = lStack_58;
  uVar2 = uStack_60;
  func_0x0001000a8868(auStack_78,uStack_60);
  uStack_88 = 1;
  uStack_80 = 2;
  (**(code **)(lVar1 + 0x10))(&uStack_88,&UNK_1105c3600,&PTR_DAT_1105c32c0,uVar2,lVar1);
  func_0x0001000834e4(auStack_78);
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uStack_88 = 1;
  uStack_80 = 3;
  (**(code **)(lStack_58 + 0x10))(&uStack_88,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_60,lStack_58);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102c9aeb0; end: 102c9af03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9aeb0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(param_1,uVar2,lVar3);
  return;
}



/* Entry: 102c9af04; end: 102c9af07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9af04(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uStack_68 = 0x11;
  uStack_60 = 1;
  (**(code **)(lStack_38 + 0x10))(&uStack_68,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9af08; end: 102c9af57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9af08(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f08ee0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9af58; end: 102c9af67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9af58(ulong param_1)

{
  ulong uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uStack_78 = param_1 & 1;
  uStack_70 = 2;
  (**(code **)(lStack_48 + 0x10))(&uStack_78,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102c9af68; end: 102c9afff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9af68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulong uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uStack_78 = param_1 & 1;
  uStack_70 = param_4;
  (**(code **)(lStack_48 + 0x10))(&uStack_78,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102c9b000; end: 102c9b03f;  */

undefined8 FUN_102c9b000(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c9b040; end: 102c9bdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c9b040(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  long *aplStack_f8 [3];
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(param_6 + _DAT_11308b848);
  uVar16 = *(undefined8 *)(param_8 + _DAT_1130115c0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar16);
  func_0x0001000d224c(auStack_90);
  func_0x000107c61574(uVar16);
  lVar15 = _DAT_113068e88;
  puVar1 = (undefined8 *)(param_1 + _DAT_113068e80);
  uVar12 = *puVar1;
  uVar20 = puVar1[1];
  uVar17 = *(undefined8 *)(param_1 + _DAT_113068e88);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar16 = *(undefined8 *)(param_6 + _DAT_11308b850);
  func_0x000107c61434(uVar20);
  func_0x000107c615f0(uVar17);
  func_0x000107c61174();
  uVar19 = uVar16;
  func_0x0001000bda74();
  func_0x000107c61170(uVar16);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar6 = 0;
  FUN_102c9c9cc();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar9 = _DAT_112f09028;
  uVar16 = 0x112f08f48;
  func_0x0001000285a8(0x112f08f48,&UNK_10db3bfa8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar7 + lVar9) = uVar16;
  puVar2 = (undefined8 *)(lVar7 + _DAT_112f09008);
  *puVar2 = uVar12;
  puVar2[1] = uVar20;
  *(undefined8 *)(lVar7 + _DAT_112f09010) = uVar17;
  *(undefined8 *)(lVar7 + _DAT_112f09018) = uVar19;
  *(undefined **)(lVar7 + _DAT_112f09020) = puVar5;
  plVar8 = &lStack_a0;
  lStack_a0 = lVar7;
  lStack_98 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x20) = plVar8;
  lVar9 = _DAT_113069018;
  lVar4 = _DAT_113068e98;
  lVar3 = _DAT_112f0ded0;
  uVar17 = *(undefined8 *)(param_1 + lVar15);
  uVar16 = *puVar1;
  uVar12 = puVar1[1];
  uVar22 = *(undefined8 *)(param_5 + _DAT_112f0ded0);
  func_0x000107c61428(param_2 + _DAT_113069018,auStack_b8,0,0);
  lVar9 = param_2 + lVar9;
  func_0x000107c61618();
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  uVar20 = *(undefined8 *)(param_3 + _DAT_113091b70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar12);
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar22);
  func_0x000107c41b80();
  func_0x000107c61180();
  uVar19 = uVar20;
  func_0x0001000b637c();
  func_0x000107c61170(uVar20);
  lVar14 = lStack_70;
  uVar20 = uStack_78;
  uVar18 = *(undefined8 *)(param_7 + _DAT_11304a478);
  func_0x0001000a8868(auStack_90,uStack_78);
  pcVar21 = *(code **)(lVar14 + 0x10);
  func_0x000107c6157c(uVar18);
  (*pcVar21)();
  ppuStack_d8 = &PTR_DAT_1105bc268;
  lVar10 = 0;
  aplStack_f8[0] = plVar8;
  lStack_e0 = lVar6;
  FUN_102c9e2c4();
  lVar6 = lVar10;
  func_0x000107c610f8();
  lVar15 = _DAT_112f09080;
  func_0x000107c61614(lVar6 + _DAT_112f09080,0);
  lVar7 = _DAT_112f090a0;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  plVar13 = plVar8;
  func_0x0001000c6580();
  *(long **)(lVar6 + lVar7) = plVar13;
  *(undefined1 *)(lVar6 + _DAT_112f090a8) = 0;
  *(undefined1 *)(lVar6 + _DAT_112f090b0) = 0;
  *(undefined1 *)(lVar6 + _DAT_112f090b8) = 0;
  *(undefined1 *)(lVar6 + _DAT_112f090c0) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f09058);
  *puVar1 = uVar16;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar6 + _DAT_112f09060) = uVar17;
  FUN_102c9bedc(aplStack_f8,lVar6 + _DAT_112f09068);
  FUN_102c9bedc(param_1 + lVar4,lVar6 + _DAT_112f09070);
  *(undefined8 *)(lVar6 + _DAT_112f09078) = uVar22;
  func_0x000107c61604(lVar6 + lVar15,lVar9);
  *(undefined8 *)(lVar6 + _DAT_112f09088) = uVar19;
  *(undefined8 *)(lVar6 + _DAT_112f09090) = uVar18;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112f09098);
  *puVar1 = uVar20;
  puVar1[1] = lVar14;
  puVar5 = PTR_s_init_1125d9248;
  lStack_c8 = lVar6;
  lStack_c0 = lVar10;
  func_0x000107c615f0(uVar17);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar18);
  func_0x000107c6157c(uVar19);
  func_0x000107c615f0(uVar20);
  plVar11 = &lStack_c8;
  func_0x000107c61154(plVar11,puVar5);
  uVar16 = *(undefined8 *)((long)plVar11 + _DAT_112f09098);
  lVar15 = ((undefined8 *)((long)plVar11 + _DAT_112f09098))[1];
  uVar12 = uVar16;
  func_0x000107c614f0(uVar16);
  pcVar21 = *(code **)(lVar15 + 0x20);
  plVar13 = plVar11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar16);
  (*pcVar21)(plVar11,&PTR_DAT_1105bc2b8,uVar12,lVar15);
  func_0x000107c61170(plVar8);
  func_0x000107c615e8(uVar17);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar18);
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(plVar13);
  func_0x000107c615e8(lVar9);
  func_0x000107c615e8(uVar16);
  FUN_102c9bf20(aplStack_f8);
  *(long **)(unaff_x20 + 0x10) = plVar13;
  lVar9 = param_4 + _DAT_113068e50;
  uVar16 = *(undefined8 *)(lVar9 + 0x18);
  lVar15 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar16);
  ppuStack_d8 = &PTR_DAT_1105bc2a8;
  ppuStack_d0 = &PTR_DAT_1105bc280;
  pcVar21 = *(code **)(lVar15 + 0x10);
  aplStack_f8[0] = plVar13;
  lStack_e0 = lVar10;
  func_0x000107c61174(plVar13);
  (*pcVar21)(aplStack_f8,uVar16,lVar15);
  FUN_102c9bf20(aplStack_f8);
  uVar19 = *(undefined8 *)(param_5 + lVar3);
  func_0x0001000a8868(auStack_90,uStack_78);
  pcVar21 = *(code **)(lStack_70 + 0x10);
  func_0x000107c61174();
  func_0x000107c6157c(uVar19);
  uVar16 = uStack_78;
  lVar15 = lStack_70;
  (*pcVar21)(uStack_78,lStack_70);
  uVar20 = 0;
  FUN_102c9a50c();
  uVar12 = uVar20;
  func_0x000107c610f8();
  plVar13 = plVar8;
  FUN_102c9bf40(plVar8,uVar19,uVar16,lVar15,uVar12);
  func_0x000107c61574(uVar19);
  func_0x000107c615e8(uVar16);
  *(long **)(unaff_x20 + 0x18) = plVar13;
  uVar16 = *(undefined8 *)(lVar9 + 0x18);
  lVar15 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar16);
  ppuStack_d8 = &PTR_DAT_1105bc220;
  ppuStack_d0 = &PTR_DAT_1105bc1f8;
  pcVar21 = *(code **)(lVar15 + 0x10);
  aplStack_f8[0] = plVar13;
  lStack_e0 = uVar20;
  func_0x000107c61174(plVar13);
  (*pcVar21)(aplStack_f8,uVar16,lVar15);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar8);
  FUN_102c9bf20(aplStack_f8);
  FUN_102c9bf20(auStack_90);
  return unaff_x20;
}



/* Entry: 102c9bdf0; end: 102c9be43;  */

void FUN_102c9bdf0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_102c9ca34();
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c9be44; end: 102c9be7f;  */

void FUN_102c9be44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c9be80; end: 102c9bed3;  */

void FUN_102c9be80(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_102c9ca34();
  lVar1 = *(long *)(lVar1 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3e7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c9bed4; end: 102c9bedb;  */

undefined8 FUN_102c9bed4(void)

{
  return 0;
}



/* Entry: 102c9bedc; end: 102c9bf1f;  */

long FUN_102c9bedc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c9bf20; end: 102c9bf3f;  */

void FUN_102c9bf20(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102c9bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102c9bf40; end: 102c9c0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102c9bf40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar4 = param_5;
  func_0x000107c614f0();
  uVar5 = 0;
  FUN_102c9c9cc();
  ppuStack_48 = &PTR_DAT_1105bc268;
  *(undefined1 *)(param_5 + _DAT_112f08ef8) = 0;
  lVar2 = _DAT_112f08f00;
  lVar6 = 0;
  auStack_68[0] = param_1;
  uStack_50 = uVar5;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_5 + lVar2,1,1,lVar6);
  FUN_102c9bedc(auStack_68,param_5 + _DAT_112f08ee0);
  *(undefined8 *)(param_5 + _DAT_112f08ee8) = param_2;
  puVar1 = (undefined8 *)(param_5 + _DAT_112f08ef0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = param_5;
  lStack_70 = lVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  plVar7 = &lStack_78;
  func_0x000107c61154(plVar7,puVar3);
  uVar5 = *(undefined8 *)((long)plVar7 + _DAT_112f08ef0);
  lVar2 = ((undefined8 *)((long)plVar7 + _DAT_112f08ef0))[1];
  uVar8 = uVar5;
  func_0x000107c614f0(uVar5);
  pcVar10 = *(code **)(lVar2 + 0x20);
  plVar9 = plVar7;
  func_0x000107c61174(plVar7);
  func_0x000107c61174();
  func_0x000107c615f0(uVar5);
  (*pcVar10)(plVar7,&PTR_DAT_1105bc1c0,uVar8,lVar2);
  func_0x000107c61170(plVar9);
  func_0x000107c615e8(uVar5);
  FUN_102c9bf20(auStack_68);
  return plVar9;
}



/* Entry: 102c9c0a4; end: 102c9c0c3;  */

void FUN_102c9c0a4(void)

{
  func_0x000107c61168(&PTR_PTR_112f08f90);
  return;
}



/* Entry: 102c9c0c4; end: 102c9c0eb; -[_TtC24AdPlayableImplementation21AdPlayableEventStream adLifecycleEventObservableV2] */

void FUN_102c9c0c4(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c9c0ec; end: 102c9c0f3; -[_TtC24AdPlayableImplementation21AdPlayableEventStream streamsType] */

undefined8 FUN_102c9c0ec(void)

{
  return 3;
}



/* Entry: 102c9c0f4; end: 102c9c133; -[_TtC24AdPlayableImplementation21AdPlayableEventStream adPlayableEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9c0f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c9c134; end: 102c9c223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9c134(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_48;
  
  FUN_102c9c224();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c610f8(PTR_PTR_1126b9098);
    func_0x000107c30d14();
    func_0x000107c61170(lVar1);
    func_0x00010468cd6c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x00010468c60c();
    lStack_48 = lVar1;
    func_0x0001002a64a8(&lStack_48);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c9c224; end: 102c9c76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c9c224(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uStack_98;
  ulong uStack_88;
  undefined8 uStack_80;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112f09010);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f09008);
  func_0x000107c5fadc(lVar5,((long *)(unaff_x20 + _DAT_112f09008))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar15 == 0) {
    return (undefined *)0x0;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar15);
  lVar15 = _DAT_113068f40;
  if (lVar5 == 0) {
    return (undefined *)0x0;
  }
  lVar6 = *(long *)(lVar5 + _DAT_113068f40);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f09020);
  func_0x000107c61174();
  func_0x000107c3ceac(uVar16);
  uVar16 = *(undefined8 *)(lVar6 + _DAT_11308f130);
  uVar1 = ((undefined8 *)(lVar6 + _DAT_11308f130))[1];
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c61434(uVar1);
  func_0x000107c602fc(0x17);
  func_0x000107c5fb78(0x656c626179616c70,0xef5f746e6576655f);
  func_0x000107c5fb78(uVar16,uVar1);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar11 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar11);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_80;
  uVar10 = uStack_88;
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uVar23 = 0;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uVar23 = uVar17;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uVar25 = 1;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uVar25 = uVar17;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  func_0x0001000d224c(&uStack_88);
  uVar17 = uStack_88;
  if (uStack_88 == 0) {
    uStack_98 = 1;
  }
  else {
    uVar21 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    uStack_98 = uVar17;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar21);
  }
  uVar17 = *(ulong *)(lVar6 + _DAT_113815208);
  if (uVar17 == 0) {
    func_0x000107c61174(lVar6);
    lVar18 = 0;
  }
  else {
    uVar22 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar22 + 0x10);
    }
    else {
      uVar7 = uVar17;
      if (-1 < (long)uVar17) {
        uVar7 = uVar22;
      }
      func_0x000107c60480();
    }
    if (uVar7 == 0) {
      func_0x000107c61174(lVar6);
      lVar18 = 0;
    }
    else if ((uVar17 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar22 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102c9c76c);
        (*pcVar4)();
      }
      lVar18 = *(long *)(uVar17 + 0x20);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(lVar18);
    }
    else {
      func_0x000107c61174(lVar6);
      lVar18 = 0;
      func_0x000100e471e4(0,uVar17);
    }
  }
  lVar8 = lVar6;
  lVar13 = lVar18;
  func_0x0001084c6f7c(lVar6,lVar18);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar18);
  if ((long)(uVar25 | uVar23 | uStack_98) < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102c9c750);
    (*pcVar4)();
  }
  uVar21 = *(undefined8 *)(lVar6 + _DAT_11308f140);
  lVar18 = ((undefined8 *)(lVar6 + _DAT_11308f140))[1];
  uVar24 = *(undefined8 *)(lVar6 + _DAT_11308f138);
  lVar2 = ((undefined8 *)(lVar6 + _DAT_11308f138))[1];
  lVar15 = *(long *)(*(long *)(lVar5 + lVar15) + _DAT_113815208);
  if (lVar15 != 0) {
    uVar19 = *(undefined8 *)(lVar5 + _DAT_113068f48);
    func_0x000107c61434(lVar15);
    lVar13 = lVar15;
    FUN_102c7fa90();
    uVar12 = (uint)lVar13;
    func_0x000107c6142c(lVar15);
    if ((uVar12 & 0xff) != 1) goto LAB_102c9c5e8;
  }
  uVar19 = 0;
LAB_102c9c5e8:
  uVar14 = *(undefined8 *)(lVar6 + _DAT_113815200);
  uVar20 = *(undefined8 *)(lVar6 + _DAT_11308f128);
  uVar9 = uVar20;
  func_0x000104840e10();
  func_0x000107c5fadc(uVar10,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(uVar16,uVar1);
  func_0x000107c6142c(uVar1);
  if (lVar18 == 0) {
    uVar21 = 0;
  }
  else {
    func_0x000107c5fadc(uVar21,lVar18);
  }
  if (lVar2 == 0) {
    uVar24 = 0;
  }
  else {
    func_0x000107c5fadc(uVar24,lVar2);
  }
  puVar11 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar9,lVar13);
  func_0x000107c6142c(lVar13);
  func_0x000107c30ad4(param_1 * 1000.0,puVar11,uVar10,uVar16,uVar21,uVar24,0,uVar23,uVar25,uStack_98
                      ,0,uVar19,uVar14,lVar8,lVar8,uVar20,uVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar9);
  return puVar11;
}



/* Entry: 102c9c76c; end: 102c9c8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9c76c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_58;
  
  lVar1 = 6;
  FUN_102c9c224();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar6 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    param_2 = uVar6;
  }
  if (param_1 == 0) {
    param_2 = 0xe700000000000000;
    lVar7 = 0x6e776f6e6b6e75;
  }
  else {
    lVar3 = param_1;
    func_0x000107c42210(param_1);
    func_0x000107c61180();
    lVar7 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c3fcb0(param_1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar5 = PTR_PTR_1126b9098;
  func_0x000107c610f8(PTR_PTR_1126b9098);
  func_0x000107c5fadc(lVar7,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c30d14(puVar5,lVar2,6,lVar7,puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  func_0x00010468cd6c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x00010468c60c();
  lStack_58 = lVar2;
  func_0x0001002a64a8(&lStack_58);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102c9c900; end: 102c9c95f; -[_TtC24AdPlayableImplementation21AdPlayableEventStream init] */

void FUN_102c9c900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableImplementation.AdPlayableEventStream",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9c92c);
  (*pcVar1)();
}



/* Entry: 102c9c960; end: 102c9c9cb; -[_TtC24AdPlayableImplementation21AdPlayableEventStream .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c9c9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9c9a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9c960(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f09008 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09010));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09018));
  return;
}



/* Entry: 102c9c9cc; end: 102c9c9eb;  */

void FUN_102c9c9cc(void)

{
  func_0x000107c61168(&PTR_PTR_11289c2e0);
  return;
}



/* Entry: 102c9c9ec; end: 102c9ca2b;  */

void FUN_102c9c9ec(void)

{
  FUN_102c9c134();
  return;
}



/* Entry: 102c9ca2c; end: 102c9ca2f; -[_TtC24AdPlayableImplementation21AdPlayableEventStream adInteractionEventObservable] */

void FUN_102c9ca2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c9ca30; end: 102c9ca33; -[_TtC24AdPlayableImplementation21AdPlayableEventStream adLifecycleEventObservable] */

void FUN_102c9ca30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102c9ca34; end: 102c9d063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9ca34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar1 = unaff_x20 + _DAT_112f09070;
  lVar3 = *(long *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,lVar3);
  (**(code **)(lVar2 + 8))(lVar3,lVar2);
  if (lVar3 != 0) {
    FUN_102c9d1b4(&lStack_c0);
    if (lStack_c0 != 0) {
      func_0x000107c61170(uStack_b8);
      func_0x000107c61170(lStack_c0);
      func_0x000107c6142c(uStack_a8);
      func_0x000107c6142c(uStack_98);
      FUN_102c9d1b4(&lStack_90);
      if (lStack_90 != 0) {
        func_0x000107c61170();
        func_0x000107c6142c(uStack_68);
        func_0x000107c6142c(uStack_78);
        if ((*(byte *)(unaff_x20 + _DAT_112f090c0) & 1) == 0) {
          *(undefined1 *)(unaff_x20 + _DAT_112f090c0) = 1;
          uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09098);
          lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f09098))[1];
          func_0x000107c614f0(uVar4);
          (**(code **)(lVar1 + 0x40))(lStack_88 + _DAT_113815330,uVar4,lVar1);
        }
        func_0x000107c61170(lStack_88);
      }
    }
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09058);
    uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f09058))[1];
    puVar5 = &UNK_1105bc300;
    func_0x000107c613fc(&UNK_1105bc300,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    func_0x000107c61434(uVar7);
    uVar4 = 0x102c9ed80;
    func_0x0001000c0ebc(0x102c9ed80,puVar5);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1105bc328;
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x102c9ed88;
    func_0x0001000c0ebc(0x102c9ed88,puVar6);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar6);
    plVar13 = (long *)0x102c9ee08;
    func_0x0001000c0ebc(0x102c9ee08,0);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar4 = 0x102c9ed90;
    puVar12 = puVar6;
    (**(code **)(*plVar13 + 0x60))(0x102c9ed90);
    func_0x000107c61574(plVar13);
    func_0x000107c61574(puVar6);
    uVar8 = uVar4;
    func_0x000107c614f0(uVar4);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f090a0);
    (**(code **)(puVar12 + 0x10))(uVar14,uVar8,puVar12);
    func_0x000107c615e8(uVar4);
    pcVar9 = FUN_102c9d61c;
    func_0x0001000c0ebc(FUN_102c9d61c,0);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar4 = 0x102c9ed98;
    puVar12 = puVar6;
    (**(code **)(*(long *)pcVar9 + 0x60))(0x102c9ed98);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(puVar6);
    uVar8 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar12 + 0x10))(uVar14,uVar8,puVar12);
    func_0x000107c615e8(uVar4);
    plVar13 = (long *)0x102c9d6e0;
    func_0x0001000c0ebc(0x102c9d6e0,0);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar4 = 0x102c9eda0;
    puVar12 = puVar6;
    (**(code **)(*plVar13 + 0x60))(0x102c9eda0);
    func_0x000107c61574(plVar13);
    func_0x000107c61574(puVar6);
    uVar8 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar12 + 0x10))(uVar14,uVar8,puVar12);
    func_0x000107c615e8(uVar4);
    func_0x0001000d224c(auStack_e8);
    func_0x0001000a8868(auStack_e8,uStack_d0);
    uVar4 = uStack_d0;
    (**(code **)(lStack_c8 + 8))(uStack_d0,lStack_c8);
    pcVar9 = FUN_102c9d98c;
    func_0x0001000d5158(FUN_102c9d98c,0,&UNK_1105c3600);
    func_0x000107c61574(uVar4);
    func_0x0001000834e4(auStack_e8);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar4 = 0x102c9eda8;
    puVar12 = puVar6;
    (**(code **)(*(long *)pcVar9 + 0x60))(0x102c9eda8);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(puVar6);
    uVar8 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar12 + 0x10))(uVar14,uVar8,puVar12);
    func_0x000107c615e8(uVar4);
    plVar13 = *(long **)(unaff_x20 + _DAT_112f09088);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar4 = 0x102c9edb0;
    puVar12 = puVar6;
    (**(code **)(*plVar13 + 0x60))(0x102c9edb0);
    func_0x000107c61574(puVar6);
    uVar8 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar12 + 0x10))(uVar14,uVar8,puVar12);
    func_0x000107c615e8(uVar4);
    uVar4 = 0x102c9ee0c;
    func_0x0001000c0ebc(0x102c9ee0c,0);
    puVar6 = puVar5;
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar10 = 0;
    FUN_102c9edc0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = 0x102c9edb8;
    func_0x0001000d5158(0x102c9edb8,puVar6,uVar10);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar6);
    pcVar9 = FUN_102c9df38;
    func_0x00010068b194(FUN_102c9df38,0,uVar10);
    func_0x000107c61574(uVar8);
    plVar13 = (long *)0x1;
    func_0x00010061b458();
    func_0x000107c61574(pcVar9);
    func_0x000107c613fc(&UNK_1105bc328,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcVar9 = FUN_102c9ee00;
    puVar6 = puVar5;
    (**(code **)(*plVar13 + 0x60))();
    func_0x000107c61574(plVar13);
    func_0x000107c61574(puVar5);
    pcVar11 = pcVar9;
    func_0x000107c614f0();
    (**(code **)(puVar6 + 0x10))(uVar14,pcVar11,puVar6);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar7);
    func_0x000107c615e8(pcVar9);
  }
  return;
}



/* Entry: 102c9d064; end: 102c9d1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c9d064(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  char cStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar2 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uStack_58 = 0xd000000000000034;
  uStack_50 = 0x800000010f104940;
  uStack_48 = 0;
  (**(code **)(lStack_38 + 8))
            (&cStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lStack_38);
  func_0x000107c615e8(uStack_40);
  if (cStack_41 == '\x01') {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f09060);
    lVar3 = *(long *)(unaff_x20 + _DAT_112f09058);
    func_0x000107c5fadc(lVar3,((long *)(unaff_x20 + _DAT_112f09058))[1]);
    func_0x000107c3d368();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 != 0) {
      func_0x0001041f3970();
      func_0x000107c61170(lVar4);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + _DAT_113068f40);
        func_0x000107c61174();
        func_0x000107c61170(lVar3);
        iVar1 = *(int *)(lVar4 + _DAT_11308f128);
        func_0x000107c61170(lVar4);
        return iVar1 == 6 || iVar1 == 0x15;
      }
    }
  }
  return false;
}



/* Entry: 102c9d1b4; end: 102c9d3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9d1b4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f09060);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f09058);
  func_0x000107c5fadc(lVar4,((long *)(unaff_x20 + _DAT_112f09058))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
LAB_102c9d32c:
    lVar4 = 0;
  }
  else {
    func_0x0001041f3970();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar4 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      lVar3 = lVar1;
      func_0x000107c3dde0();
      func_0x000107c61180();
      if (lVar3 == 0) {
LAB_102c9d2bc:
        lVar3 = lVar1;
        func_0x000107c414c4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          goto LAB_102c9d32c;
        }
        lVar4 = *(long *)(lVar3 + _DAT_11308fe58);
        if (lVar4 == 0) {
          func_0x000107c61170();
          func_0x000107c61170(lVar1);
          goto LAB_102c9d330;
        }
        if (*(long *)(lVar3 + _DAT_11308fe38) == 0) {
          lVar7 = 0;
          lVar5 = 0;
        }
        else {
          plVar2 = (long *)(*(long *)(lVar3 + _DAT_11308fe38) + _DAT_113090408);
          lVar7 = *plVar2;
          lVar5 = plVar2[1];
          func_0x000107c61434(lVar5);
        }
        plVar2 = (long *)&DAT_11308fe18;
      }
      else {
        lVar4 = *(long *)(lVar3 + _DAT_11308faf8);
        if (lVar4 == 0) {
          func_0x000107c61170();
          goto LAB_102c9d2bc;
        }
        if (*(long *)(lVar3 + _DAT_11308fab8) == 0) {
          lVar7 = 0;
          lVar5 = 0;
        }
        else {
          plVar2 = (long *)(*(long *)(lVar3 + _DAT_11308fab8) + _DAT_113090408);
          lVar7 = *plVar2;
          lVar5 = plVar2[1];
          func_0x000107c61434(lVar5);
        }
        plVar2 = (long *)&DAT_11308fab0;
      }
      lVar8 = *(long *)(lVar3 + *plVar2);
      lVar6 = ((long *)(lVar3 + *plVar2))[1];
      func_0x000107c61434(lVar6);
      func_0x000107c61174(lVar4);
      func_0x000107c61170(lVar3);
      goto LAB_102c9d3a4;
    }
    lVar4 = 0;
  }
LAB_102c9d330:
  lVar1 = 0;
  lVar7 = 0;
  lVar5 = 0;
  lVar8 = 0;
  lVar6 = 0;
LAB_102c9d3a4:
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = lVar7;
  param_1[3] = lVar5;
  param_1[4] = lVar8;
  param_1[5] = lVar6;
  return;
}



/* Entry: 102c9d3c8; end: 102c9d477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c9d3c8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = *(long *)(*param_1 + _DAT_11308c0c0);
  lVar3 = param_2;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    if (param_2 == lVar2 && param_3 == lVar3) {
      uVar4 = 1;
    }
    else {
      func_0x000107c605b8(param_2,param_3,lVar2,lVar3,0);
      uVar4 = (uint)param_2;
    }
    func_0x000107c6142c(lVar3);
  }
  return uVar4 & 1;
}



/* Entry: 102c9d478; end: 102c9d61b;  */

void FUN_102c9d478(undefined8 param_1,long param_2)

{
  undefined1 auStack_78 [24];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c9d1b4(&lStack_60);
    func_0x000107c61170(param_2);
    if (lStack_60 != 0) {
      func_0x000107c61170(uStack_58);
      func_0x000107c61170(lStack_60);
      func_0x000107c6142c(uStack_38);
      func_0x000107c6142c(uStack_48);
    }
  }
  return;
}



/* Entry: 102c9d61c; end: 102c9d64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c9d61c(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 8;
}



/* Entry: 102c9d64c; end: 102c9d727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9d64c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112f090b0) == '\x01') {
      param_2 = param_2 + _DAT_112f09080;
      func_0x000107c61618();
      if (param_2 != 0) {
        func_0x000107c4e470(param_2);
        func_0x000107c615e8(param_2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c9d728; end: 102c9d7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9d728(undefined8 param_1,long param_2)

{
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112f090b0) == '\x01') {
      func_0x0001000d224c(auStack_70);
      func_0x0001000a8868(auStack_70,uStack_58);
      uStack_80 = 5;
      uStack_78 = 4;
      (**(code **)(lStack_50 + 0x10))
                (&uStack_80,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_58,lStack_50);
      func_0x0001000834e4(auStack_70);
      FUN_102c9d800();
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c9d800; end: 102c9d98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9d800(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar2 = _DAT_112f090b0;
  lVar6 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + _DAT_112f090b0) == '\x01') {
    lVar4 = unaff_x20 + _DAT_112f09068;
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    lVar1 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar5);
    (**(code **)(lVar1 + 8))(4,uVar5,lVar1);
    lVar4 = unaff_x20 + _DAT_112f09080;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c50724();
      func_0x000107c615e8(lVar4);
    }
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
    FUN_102c9d1b4(&lStack_90);
    if (lStack_90 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f09098);
      lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f09098))[1];
      func_0x000107c614f0(uVar5);
      (**(code **)(lVar7 + 0x10))(lVar6,lStack_88 + _DAT_113815330,lVar3);
      (**(code **)(lVar2 + 0x40))(lVar6,uVar5,lVar2);
      func_0x000107c61170(lStack_88);
      func_0x000107c61170(lStack_90);
      func_0x000107c6142c(uStack_78);
      func_0x000107c6142c(uStack_68);
      (**(code **)(lVar7 + 8))(lVar6,lVar3);
    }
  }
  return;
}



/* Entry: 102c9d98c; end: 102c9da57;  */

void FUN_102c9d98c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar2,uVar1,&UNK_10e729ab4,&UNK_10e729ac4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x18))(&stack0xffffffffffffffc0 + -extraout_x8,uVar1,lVar2);
  puVar4 = param_1;
  func_0x000107c6147c(param_1,&stack0xffffffffffffffc0 + -extraout_x8,lVar3,&UNK_1105c3600,6);
  if (((ulong)puVar4 & 1) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
  return;
}



/* Entry: 102c9da58; end: 102c9dac7;  */

void FUN_102c9da58(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c9dac8(uVar2,uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c9dac8; end: 102c9dd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9dac8(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = (long)&lStack_90 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == '\0') {
    lVar5 = unaff_x20 + _DAT_112f09068;
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar4);
    pcVar6 = *(code **)(lVar2 + 0x10);
  }
  else {
    if (param_2 != '\x04') {
      return;
    }
    if (param_1 < 2) {
      if (param_1 == 0) {
        lVar5 = unaff_x20 + _DAT_112f09068;
        uVar4 = *(undefined8 *)(lVar5 + 0x18);
        lVar2 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar4);
        (**(code **)(lVar2 + 8))(2,uVar4,lVar2);
        lVar5 = unaff_x20 + _DAT_112f09080;
        func_0x000107c61618();
        if (lVar5 != 0) {
          func_0x000107c4e470();
          func_0x000107c615e8(lVar5);
        }
        *(undefined1 *)(unaff_x20 + _DAT_112f090b0) = 1;
        return;
      }
      if (param_1 != 1) {
        return;
      }
      lVar5 = unaff_x20 + _DAT_112f09068;
      uVar4 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar4);
      pcVar6 = *(code **)(lVar2 + 8);
      param_1 = 3;
    }
    else {
      if (param_1 == 2) {
        lVar2 = 0;
        func_0x000107c5ede0();
        lVar7 = *(long *)(lVar2 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
        lVar5 = _DAT_112f090b0;
        lVar8 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        if (*(char *)(unaff_x20 + _DAT_112f090b0) == '\x01') {
          lVar3 = unaff_x20 + _DAT_112f09068;
          uVar4 = *(undefined8 *)(lVar3 + 0x18);
          lVar1 = *(long *)(lVar3 + 0x20);
          func_0x0001000a8868(lVar3,uVar4);
          (**(code **)(lVar1 + 8))(4,uVar4,lVar1);
          lVar3 = unaff_x20 + _DAT_112f09080;
          func_0x000107c61618();
          if (lVar3 != 0) {
            func_0x000107c50724();
            func_0x000107c615e8(lVar3);
          }
          *(undefined1 *)(unaff_x20 + lVar5) = 0;
          FUN_102c9d1b4(&lStack_90);
          if (lStack_90 != 0) {
            uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09098);
            lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f09098))[1];
            func_0x000107c614f0(uVar4);
            (**(code **)(lVar7 + 0x10))(lVar8,lStack_88 + _DAT_113815330,lVar2);
            (**(code **)(lVar5 + 0x40))(lVar8,uVar4,lVar5);
            func_0x000107c61170(lStack_88);
            func_0x000107c61170(lStack_90);
            func_0x000107c6142c(uStack_78);
            func_0x000107c6142c(uStack_68);
            (**(code **)(lVar7 + 8))(lVar8,lVar2);
          }
        }
        return;
      }
      if (param_1 != 3) {
        if (param_1 != 6) {
          return;
        }
        lVar7 = unaff_x20 + _DAT_112f09068;
        uVar4 = *(undefined8 *)(lVar7 + 0x18);
        lVar3 = *(long *)(lVar7 + 0x20);
        func_0x0001000a8868(lVar7,uVar4);
        (**(code **)(lVar3 + 8))(7,uVar4,lVar3);
        FUN_102c9d1b4(&lStack_90);
        if (lStack_90 == 0) {
          return;
        }
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f09098);
        lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f09098))[1];
        func_0x000107c614f0(uVar4);
        (**(code **)(lVar8 + 0x10))(lVar2,lStack_88 + _DAT_113815330,lVar5);
        (**(code **)(lVar7 + 0x40))(lVar2,uVar4,lVar7);
        func_0x000107c61170(lStack_88);
        func_0x000107c61170(lStack_90);
        func_0x000107c6142c(uStack_78);
        func_0x000107c6142c(uStack_68);
        (**(code **)(lVar8 + 8))(lVar2,lVar5);
        return;
      }
      lVar5 = unaff_x20 + _DAT_112f09068;
      uVar4 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar4);
      pcVar6 = *(code **)(lVar2 + 8);
      param_1 = 5;
    }
  }
  (*pcVar6)(param_1,uVar4,lVar2);
  return;
}



/* Entry: 102c9dd30; end: 102c9de7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9dd30(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_112f090b0) == '\x01') {
      func_0x0001000d224c(auStack_80);
      lVar1 = lStack_60;
      func_0x0001000a8868(auStack_80,uStack_68);
      (**(code **)(lVar1 + 0x10))();
      func_0x0001000834e4(auStack_80);
      func_0x0001000d224c(auStack_80);
      func_0x0001000a8868(auStack_80,uStack_68);
      uStack_90 = 5;
      uStack_88 = 4;
      (**(code **)(lStack_60 + 0x10))
                (&uStack_90,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_68,lStack_60);
      func_0x0001000834e4(auStack_80);
      FUN_102c9d800();
      lVar1 = param_2 + _DAT_112f09080;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c4e1d4();
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c9de80; end: 102c9df37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9de80(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  uVar1 = 0;
  if (param_3 != 0) {
    FUN_102c9d1b4(&lStack_60);
    func_0x000107c61170(param_3);
    if (lStack_60 == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c61170();
      func_0x000107c6142c(uStack_38);
      func_0x000107c6142c(uStack_48);
      uVar1 = *(undefined8 *)(lStack_58 + _DAT_113815350);
      func_0x000107c61174(uVar1);
      func_0x000107c61170(lStack_58);
    }
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102c9df38; end: 102c9dfd7;  */

char * FUN_102c9df38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  puVar1 = &uStack_48;
  uStack_48 = uVar4;
  func_0x000100854cb0(puVar1);
  func_0x000107c5fdcc(uVar4);
  pcVar2 = "begin()";
  func_0x0001000c10c0("begin()");
  func_0x000107c61180();
  pcVar3 = pcVar2;
  func_0x00010487cd5c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(pcVar2);
  return pcVar3;
}



/* Entry: 102c9dfd8; end: 102c9e1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9dfd8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + _DAT_112f090b8) = 1;
    func_0x000102c9e104();
    lVar1 = param_2 + _DAT_112f09068;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    (**(code **)(lVar3 + 8))(1,uVar2,lVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c9e1a8; end: 102c9e207; -[_TtC24AdPlayableImplementation18AdPlayableWorkflow init] */

void FUN_102c9e1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlayableImplementation.AdPlayableWorkflow",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c9e1d4);
  (*pcVar1)();
}



/* Entry: 102c9e208; end: 102c9e2c3; -[_TtC24AdPlayableImplementation18AdPlayableWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c9e268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c9e288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9e26c) */
/* WARNING: Removing unreachable block (ram,0x000102c9e28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9e208(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f09058 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f09060));
  func_0x0001000834e4(param_1 + _DAT_112f09068);
  func_0x0001000834e4(param_1 + _DAT_112f09070);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f09078));
  return;
}



/* Entry: 102c9e2c4; end: 102c9e2e3;  */

void FUN_102c9e2c4(void)

{
  func_0x000107c61168(&PTR_PTR_11289c3c0);
  return;
}



/* Entry: 102c9e2e4; end: 102c9ea8b;  */

/* WARNING: Possible PIC construction at 0x000102c9e9fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9ea00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c9e2e4(ulong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long extraout_x8;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 *unaff_x21;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long lVar21;
  long lVar22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  uint uStack_1f4;
  ulong auStack_1a8 [23];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar3 = auStack_210;
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar22 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar19 = auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_102c9d1b4(&plStack_d0);
  puVar12 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (plStack_d0 == (long *)0x0) goto code_r0x000100214a84;
  lVar15 = *(long *)(unaff_x20 + _DAT_112f09060);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f09058);
  func_0x000107c5fadc(lVar8,((long *)(unaff_x20 + _DAT_112f09058))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar15 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar15);
    if (lVar8 != 0) {
      lVar15 = *(long *)(lVar8 + _DAT_113068f40);
      func_0x000107c61174();
      func_0x000107c61170(lVar8);
      bVar4 = *(byte *)(unaff_x20 + _DAT_112f090b8);
      FUN_102c9d1b4(&lStack_a0);
      if (lStack_a0 == 0) {
LAB_102c9e4c0:
        uStack_1f4 = 1;
      }
      else {
        func_0x000107c61170();
        func_0x000107c6142c(uStack_78);
        func_0x000107c6142c(uStack_88);
        lVar21 = *(long *)(lStack_98 + _DAT_113815350);
        lVar8 = lVar21;
        func_0x000107c61174(lVar21);
        func_0x000107c61170(lStack_98);
        if (lVar21 == 0) goto LAB_102c9e4c0;
        func_0x000107c61170(lVar8);
        uStack_1f4 = (uint)bVar4;
      }
      uVar20 = *(undefined8 *)(lStack_c8 + _DAT_113815338);
      lVar8 = ((undefined8 *)(lStack_c8 + _DAT_113815338))[1];
      uVar9 = 0;
      func_0x000103bfb8b0();
      func_0x000107c61434(lVar8);
      lVar21 = lVar8;
      uStack_200 = uVar9;
      func_0x000103bfaab8();
      uStack_f0 = uVar20;
      lStack_e8 = lVar21;
      func_0x000100e8b654();
      puVar18 = PTR___sSSN_11034da80;
      uStack_208 = uVar20;
      func_0x000107c601f8(PTR___sSSN_11034da80);
      func_0x000107c6142c(lVar21);
      func_0x000107c6142c(lVar8);
      lVar8 = lStack_c8 + _DAT_113815330;
      puVar10 = puVar19;
      (**(code **)(lVar22 + 0x10))(puVar19,lVar8,lVar7);
      func_0x000107c5ed70();
      (**(code **)(lVar22 + 8))(puVar19,lVar7);
      unaff_x24 = (undefined8 *)PTR_PTR_1126ac1c8;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar18,uVar20);
      func_0x000107c6142c(uVar20);
      func_0x000107c5fadc(puVar10,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c47f2c();
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar10);
      if (lStack_b8 == 0) {
        uVar20 = 0;
      }
      else {
        func_0x000107c61434(lStack_b8);
        uVar20 = uStack_c0;
        func_0x000107c5fadc(uStack_c0,lStack_b8);
        func_0x000107c6142c(lStack_b8);
      }
      func_0x000107c52774(unaff_x24);
      func_0x000107c61170(uVar20);
      if (lStack_a8 == 0) {
        uVar20 = 0;
      }
      else {
        func_0x000107c61434(lStack_a8);
        uVar20 = uStack_b0;
        func_0x000107c5fadc(uStack_b0,lStack_a8);
        func_0x000107c6142c(lStack_a8);
      }
      func_0x000107c527ec(unaff_x24);
      func_0x000107c61170(uVar20);
      uVar16 = ((undefined8 *)(lVar15 + _DAT_113815248))[1];
      if (uVar16 >> 0x3c < 0xf) {
        uVar9 = *(undefined8 *)(lVar15 + _DAT_113815248);
        func_0x00010006c00c(uVar9,uVar16);
        uVar20 = uVar9;
        func_0x000107c5ee20(uVar9,uVar16);
        func_0x0001000b44c0(uVar9,uVar16);
      }
      else {
        uVar20 = 0;
      }
      func_0x000107c54528(unaff_x24);
      func_0x000107c61170(uVar20);
      lVar7 = *(long *)(lVar15 + _DAT_113815208);
      plVar17 = (long *)0x0;
      if (lVar7 != 0) {
        func_0x000107c61434(lVar7);
        plVar17 = plStack_d0;
        lVar22 = lVar7;
        FUN_102c7fa90();
        func_0x000107c6142c(lVar7);
        if (((uint)lVar22 & 0xff) == 1) {
          plVar17 = (long *)0x0;
        }
        else {
          func_0x000107c5fe40();
        }
      }
      func_0x000107c523f0(unaff_x24);
      func_0x000107c61170();
      func_0x00010404c15c();
      if (*(long *)(param_1 + 0x10) == 0) {
        lStack_e8 = 0;
        uStack_f0 = 0;
        lStack_d8 = 0;
        uStack_e0 = 0;
LAB_102c9e83c:
        func_0x00010006e7f4(&uStack_f0);
LAB_102c9e844:
        unaff_x26 = 0;
LAB_102c9e848:
        lVar7 = *(long *)((long)plStack_d0 + _DAT_11308f208);
        if (lVar7 == 0) {
          uVar20 = 0;
          lVar7 = 0;
        }
        else {
          uVar20 = *(undefined8 *)(lVar7 + _DAT_113091068);
          lVar7 = *(long *)(lVar7 + _DAT_113091070);
          func_0x000107c61174(lVar7);
          func_0x000107c61174(uVar20);
        }
        uVar9 = uVar20;
        lVar22 = lVar7;
        func_0x000103bfab18();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar20);
        if (lVar22 == 0) {
          puVar18 = (undefined *)0x0;
        }
        else {
          puVar18 = PTR___sSSN_11034da80;
          uVar20 = uStack_208;
          uStack_f0 = uVar9;
          lStack_e8 = lVar22;
          func_0x000107c601f8(PTR___sSSN_11034da80,uStack_208);
          func_0x000107c6142c(lVar22);
          func_0x000107c5fadc(puVar18,uVar20);
          func_0x000107c6142c(uVar20);
        }
        func_0x000107c52980(unaff_x24);
        func_0x000107c61170(puVar18);
      }
      else {
        lVar7 = *plVar17;
        uVar16 = plVar17[1];
        func_0x000107c61434(uVar16);
        func_0x000107c61434(param_1);
        uVar13 = uVar16;
        func_0x000100029284(lVar7);
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(param_1);
          lStack_e8 = 0;
          uStack_f0 = 0;
          lStack_d8 = 0;
          uStack_e0 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar7 * 0x20,&uStack_f0);
          func_0x000107c6142c(uVar16);
          uVar16 = param_1;
        }
        func_0x000107c6142c(uVar16);
        if (lStack_d8 == 0) goto LAB_102c9e83c;
        uVar20 = 0;
        FUN_102c9edc0(0,0x112efcdc0,&PTR_PTR_1126ca4e0);
        puVar11 = auStack_1a8;
        func_0x000107c6147c(puVar11,&uStack_f0,PTR___sypN_11034f1a8 + 8,uVar20,6);
        if (((ulong)puVar11 & 1) == 0) goto LAB_102c9e844;
        uVar16 = auStack_1a8[0];
        func_0x000107c40e0c();
        unaff_x26 = auStack_1a8[0];
        if (((int)uVar16 != 4) || (FUN_102c9d064(), (uVar16 & 1) != 0)) goto LAB_102c9e848;
      }
      unaff_x22 = (undefined8 *)0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      unaff_x22[3] = 6;
      unaff_x22[2] = 3;
      puVar12 = unaff_x22;
      func_0x000103b985e4();
      uVar20 = puVar12[1];
      unaff_x21 = unaff_x22 + 4;
      *unaff_x21 = *puVar12;
      unaff_x22[5] = uVar20;
      uVar9 = 0;
      FUN_102c9edc0(0,0x112f090f8,&PTR_PTR_1126ac1c8);
      unaff_x22[9] = uVar9;
      unaff_x22[6] = unaff_x24;
      func_0x000107c61434(uVar20);
      func_0x000107c61174();
      puVar12 = unaff_x24;
      func_0x000103b9861c();
      uVar20 = puVar12[1];
      unaff_x22[10] = *puVar12;
      unaff_x22[0xb] = uVar20;
      unaff_x23 = *(undefined8 **)(unaff_x20 + _DAT_112f09098);
      puVar12 = unaff_x23;
      func_0x000107c614f0();
      unaff_x22[0xf] = puVar12;
      unaff_x22[0xc] = unaff_x23;
      func_0x000107c61434(uVar20);
      puVar12 = unaff_x23;
      func_0x000107c615f0();
      func_0x000103b98660();
      uVar20 = puVar12[1];
      unaff_x22[0x10] = *puVar12;
      unaff_x22[0x11] = uVar20;
      func_0x000107c61434();
      bVar4 = (byte)uVar20;
      FUN_102c9d064();
      unaff_x22[0x15] = PTR___sSbN_11034dd40;
      *(byte *)(unaff_x22 + 0x12) = bVar4 & 1;
      unaff_x30 = 0x102c9ea00;
      register0x00000008 = (BADSPACEBASE *)puVar19;
      puVar12 = unaff_x22;
      unaff_x19 = puVar3;
      unaff_x25 = unaff_x20;
      unaff_x29 = puVar1;
      goto code_r0x000100214a84;
    }
  }
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(plStack_d0);
  func_0x000107c6142c(lStack_b8);
  func_0x000107c6142c(lStack_a8);
  puVar12 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
code_r0x000100214a84:
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar18 = (undefined *)puVar12[2];
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar18 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar18;
    func_0x000107c60498();
    puVar12 = puVar12 + 4;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar12,(undefined1 *)((long)register0x00000008 + -0x80));
      uVar16 = *(ulong *)((long)register0x00000008 + -0x80);
      uVar13 = *(ulong *)((long)register0x00000008 + -0x78);
      uVar6 = uVar16;
      uVar14 = uVar13;
      func_0x000100029284();
      if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar2)();
      }
      uVar14 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar14 + 0x40) = *(ulong *)(puVar5 + uVar14 + 0x40) | 1L << (uVar6 & 0x3f)
      ;
      puVar11 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar11 = uVar16;
      puVar11[1] = uVar13;
      func_0x000100102924((undefined1 *)((long)register0x00000008 + -0x70),
                          *(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar2)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar12 = puVar12 + 6;
      puVar18 = puVar18 + -1;
    } while (puVar18 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c9ea8c; end: 102c9eac7;  */

void FUN_102c9ea8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f090f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f090f0,&UNK_10db3c0a8);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102c9eac8; end: 102c9eae7;  */

void FUN_102c9eac8(void)

{
  FUN_102c9e2e4();
  return;
}



/* Entry: 102c9eae8; end: 102c9eaf3;  */

undefined * FUN_102c9eae8(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c9eaf4; end: 102c9eba7;  */

undefined * FUN_102c9eaf4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  FUN_102c9d1b4(&lStack_60);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_60 != 0) {
    func_0x000107c61170(uStack_58);
    func_0x000107c61170(lStack_60);
    func_0x000107c6142c(uStack_38);
    func_0x000107c6142c(uStack_48);
    puVar1 = (undefined *)0x112f05268;
    func_0x0001000285a8(0x112f05268,&UNK_10db39870);
    func_0x000107c613fc();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    uVar2 = 0;
    func_0x000103b98e4c();
    *(undefined8 *)(puVar1 + 0x20) = uVar2;
  }
  return puVar1;
}



/* Entry: 102c9eba8; end: 102c9ebab;  */

undefined * FUN_102c9eba8(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 102c9ebac; end: 102c9ed23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9ebac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uStack_68 = 0x11;
  uStack_60 = 1;
  (**(code **)(lStack_38 + 0x10))(&uStack_68,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  lVar1 = unaff_x20 + _DAT_112f09068;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9ed24; end: 102c9ed27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9ed24(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uStack_68 = 0x11;
  uStack_60 = 1;
  (**(code **)(lStack_38 + 0x10))(&uStack_68,&UNK_1105c3600,&PTR_DAT_1105c32c0,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  lVar1 = unaff_x20 + _DAT_112f09068;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9ed28; end: 102c9ed77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9ed28(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f09068;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(5,uVar2,lVar3);
  return;
}



/* Entry: 102c9ed78; end: 102c9edbf;  */

void FUN_102c9ed78(void)

{
  return;
}



/* Entry: 102c9edc0; end: 102c9edff;  */

void FUN_102c9edc0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102c9ee00; end: 102c9ee0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c9ee00(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + _DAT_112f090b8) = 1;
    func_0x000102c9e104();
    lVar1 = lVar4 + _DAT_112f09068;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    (**(code **)(lVar3 + 8))(1,uVar2,lVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102c9ee10; end: 102c9f1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c9ee10(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(param_3 + _DAT_11304a478);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  lVar4 = _DAT_113069018;
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar10 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar8 = *(undefined8 *)(param_4 + _DAT_113068628);
  func_0x000107c61428(param_2 + _DAT_113069018,auStack_78,0,0);
  lVar4 = param_2 + lVar4;
  func_0x000107c61618(lVar4);
  lVar5 = 0;
  func_0x000102c9f66c();
  lVar6 = lVar5;
  func_0x000107c613fc();
  func_0x000107c61614(lVar6 + 0x30,0);
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(uVar10);
  uVar7 = uVar8;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar6 + 0x38) = uVar7;
  *(undefined1 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar10;
  *(undefined8 *)(lVar6 + 0x28) = uVar8;
  func_0x000107c61604(lVar6 + 0x30,lVar4);
  func_0x000107c615e8(lVar4);
  *(long *)(unaff_x20 + 0x18) = lVar6;
  lVar4 = param_5 + _DAT_113068e50;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar1);
  ppuStack_88 = &PTR_DAT_1105bc448;
  ppuStack_80 = &PTR_DAT_1105bc420;
  pcVar9 = *(code **)(lVar3 + 0x10);
  alStack_a8[0] = lVar6;
  lStack_90 = lVar5;
  func_0x000107c6157c(lVar6);
  (*pcVar9)(alStack_a8,uVar1,lVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000100dd2718(alStack_a8);
  return unaff_x20;
}



/* Entry: 102c9f200; end: 102c9f2a7;  */

void FUN_102c9f200(void)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  char cStack_41;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uStack_58 = 0xd00000000000001c;
  uStack_50 = 0x800000010f0fbb20;
  uStack_48 = 0;
  (**(code **)(lStack_38 + 8))
            (&cStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  if (cStack_41 == '\x01') {
    FUN_102c9f31c();
  }
  return;
}



/* Entry: 102c9f2a8; end: 102c9f2d3;  */

void FUN_102c9f2a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c9f2d4; end: 102c9f2f3;  */

void FUN_102c9f2d4(void)

{
  FUN_102c9f200();
  return;
}



/* Entry: 102c9f2f4; end: 102c9f2fb;  */

undefined8 FUN_102c9f2f4(void)

{
  return 0;
}



/* Entry: 102c9f2fc; end: 102c9f31b;  */

void FUN_102c9f2fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f09140);
  return;
}



/* Entry: 102c9f31c; end: 102c9f45f;  */

void FUN_102c9f31c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61434(uVar6);
  func_0x0001000d224c(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c614f0(uStack_48);
  func_0x0001041dfcd0();
  func_0x000107c615e8(uStack_48);
  pcVar2 = FUN_102c9f460;
  func_0x0001000c0ebc(FUN_102c9f460,0);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_1105bc4e0;
  func_0x000107c613fc(&UNK_1105bc4e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  plVar4 = (long *)0x102c9fda0;
  func_0x0001000c0ebc(0x102c9fda0,puVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105bc508;
  func_0x000107c613fc(&UNK_1105bc508,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar5 = 0x102c9fda8;
  puVar7 = puVar3;
  (**(code **)(*plVar4 + 0x60))(0x102c9fda8);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar3);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),uVar6,puVar7);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 102c9f460; end: 102c9f493;  */

byte FUN_102c9f460(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001041cdd44();
  return (*(byte *)(param_1 + *(int *)(lVar1 + 0x18)) ^ 0xff) & 1;
}



/* Entry: 102c9f494; end: 102c9f51f;  */

long FUN_102c9f494(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  func_0x0001041cdd44();
  iVar2 = *(int *)(lVar3 + 0x14);
  lVar3 = 0;
  func_0x000100b91cc8();
  plVar1 = (long *)(param_1 + iVar2 + (long)*(int *)(lVar3 + 0x24));
  lVar3 = plVar1[1];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    if (lVar4 != param_2 || lVar3 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(lVar4,lVar3,param_2,param_3,0);
      return lVar4;
    }
    lVar3 = 1;
  }
  return lVar3;
}



/* Entry: 102c9f520; end: 102c9f57b;  */

void FUN_102c9f520(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102c9f57c(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c9f57c; end: 102c9f627;  */

/* WARNING: Possible PIC construction at 0x000102c9f5bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c9f5c0) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5dc) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5c4) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5ec) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5cc) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5d4) */
/* WARNING: Removing unreachable block (ram,0x000102c9f5f0) */
/* WARNING: Removing unreachable block (ram,0x000102c9f600) */
/* WARNING: Removing unreachable block (ram,0x000102c9f614) */

void FUN_102c9f57c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4a784(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c9f628; end: 102c9f68b;  */

void FUN_102c9f628(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_102c62b64(unaff_x20 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c9f68c; end: 102c9fa4b;  */

void FUN_102c9f68c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long alStack_b0 [11];
  undefined8 *puStack_58;
  
  ppuVar13 = &puStack_e0;
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    plVar3 = param_1;
    func_0x00010404c6e0();
    if (param_1[2] == 0) {
      uStack_d8 = 0;
      puStack_e0 = (undefined *)0x0;
      puStack_c8 = (undefined *)0x0;
      uStack_d0 = 0;
    }
    else {
      lVar4 = *plVar3;
      uVar1 = plVar3[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(param_1);
      uVar15 = uVar1;
      func_0x000100029284(lVar4);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(param_1);
        uStack_d8 = 0;
        puStack_e0 = (undefined *)0x0;
        puStack_c8 = (undefined *)0x0;
        uStack_d0 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(param_1[7] + lVar4 * 0x20,&puStack_e0);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_1);
        if (puStack_c8 != (undefined *)0x0) {
          uVar5 = 0;
          func_0x000102c9fcd0(0,0x112efcdc0,&PTR_PTR_1126ca4e0);
          puVar11 = PTR___sypN_11034f1a8;
          ppuVar6 = &puStack_58;
          func_0x000107c6147c(ppuVar6,&puStack_e0,PTR___sypN_11034f1a8 + 8,uVar5,6);
          if (((ulong)ppuVar6 & 1) == 0) goto LAB_102c9f878;
          puVar7 = (undefined8 *)0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          puVar7[3] = 2;
          puVar7[2] = 1;
          puVar8 = puVar7;
          func_0x00010404c15c();
          uVar2 = puVar8[1];
          puVar7[4] = *puVar8;
          puVar7[9] = uVar5;
          puVar7[5] = uVar2;
          puVar7[6] = puStack_58;
          func_0x000107c61434();
          puVar8 = puStack_58;
          func_0x000107c61174();
          puVar9 = puVar7;
          func_0x000100214a84();
          func_0x000107c61588(puVar7);
          plVar3 = (long *)0x112d4b5f0;
          func_0x000102c9fc90(puVar7 + 4,0x112d4b5f0,&UNK_10d9127d0);
          ppuVar10 = &PTR____CFConstantStringClassReference_110dcab38;
          puStack_58 = puVar9;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
          if (param_1[2] != 0) {
            func_0x000107c61434(param_1);
            plVar16 = plVar3;
            func_0x000100029284(ppuVar10);
            if (((ulong)plVar16 & 1) != 0) {
              func_0x0001000bb420(param_1[7] + (long)ppuVar10 * 0x20,&puStack_e0);
              func_0x000107c6142c(plVar3);
              plVar3 = param_1;
              goto LAB_102c9f8b0;
            }
            func_0x000107c6142c(param_1);
          }
          uStack_d8 = 0;
          puStack_e0 = (undefined *)0x0;
          puStack_c8 = (undefined *)0x0;
          uStack_d0 = 0;
LAB_102c9f8b0:
          func_0x000107c6142c(plVar3);
          if (puStack_c8 == (undefined *)0x0) {
            func_0x000107c61170(puVar8);
            func_0x000102c9fc90(&puStack_e0,0x112d387f8,&UNK_10d902650);
            return;
          }
          uVar5 = 0;
          func_0x000102c9fcd0(0,0x112d7a520,&PTR_PTR_1126b2390);
          plVar3 = alStack_b0;
          func_0x000107c6147c(plVar3,&puStack_e0,puVar11 + 8,uVar5,6);
          if (((ulong)plVar3 & 1) != 0) {
            lVar4 = alStack_b0[0];
            func_0x000107c42e84();
            func_0x000107c61180();
            if (lVar4 != 0) {
              puVar11 = &UNK_1105bc468;
              func_0x000107c613fc(&UNK_1105bc468,0x28,7);
              *(undefined8 **)(puVar11 + 0x10) = puVar8;
              *(long *)(puVar11 + 0x18) = alStack_b0[0];
              *(undefined8 ***)(puVar11 + 0x20) = &puStack_58;
              puVar12 = &UNK_1105bc490;
              func_0x000107c613fc(&UNK_1105bc490,0x20,7);
              *(code **)(puVar12 + 0x10) = FUN_102c9fd10;
              *(undefined **)(puVar12 + 0x18) = puVar11;
              pcStack_c0 = FUN_102c9fd4c;
              puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_d8 = 0x42000000;
              uStack_d0 = 0x102bb8b54;
              puStack_c8 = &UNK_1105bc4a8;
              puStack_b8 = puVar12;
              func_0x000107c60bc4(&puStack_e0);
              puVar12 = puStack_b8;
              func_0x000107c61174(puVar8);
              lVar14 = alStack_b0[0];
              func_0x000107c61174(alStack_b0[0]);
              func_0x000107c61574(puVar12);
              func_0x000107c4c6a4(lVar4);
              func_0x000107c61170(puVar8);
              func_0x000107c60bd0(ppuVar13);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar4);
              func_0x000107c61574(puVar11);
              return;
            }
            func_0x000107c61170(alStack_b0[0]);
          }
          func_0x000107c61170(puVar8);
          return;
        }
      }
    }
    func_0x000102c9fc90(&puStack_e0,0x112d387f8,&UNK_10d902650);
  }
LAB_102c9f878:
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102c9fa4c; end: 102c9fc17;  */

void FUN_102c9fa4c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  long in_x7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  
  func_0x000107c40e0c(in_stack_00000010);
  uVar2 = 0;
  if (in_x7 != 0) {
    func_0x000107c5fadc(in_x6,in_x7);
    uVar2 = in_x6;
  }
  puVar1 = PTR_PTR_1126b23a8;
  func_0x000107c61168(PTR_PTR_1126b23a8);
  func_0x000107c3da04();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c40794(in_stack_00000018);
  func_0x000107c60234(auStack_80);
  func_0x000107c615e8(in_stack_00000018);
  uVar2 = 0;
  func_0x000102c9fcd0(0,0x112d7a520,&PTR_PTR_1126b2390);
  puVar3 = &uStack_88;
  func_0x000107c6147c(puVar3,auStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c61174(puVar1);
    uVar4 = 0x5065727574616566;
    uVar6 = 0xed0000736d617261;
    func_0x000107c5fadc(0x5065727574616566,0xed0000736d617261);
    func_0x000107c5a4a4(uStack_88);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar4);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcab38;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
    auStack_80[0] = uStack_88;
    uVar4 = uStack_88;
    uStack_68 = uVar2;
    func_0x000107c61174(uStack_88);
    func_0x000100102934(auStack_80,ppuVar5,uVar6);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(puVar1);
  return;
}


