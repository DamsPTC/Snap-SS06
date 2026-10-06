/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c7db10; end: 101c7db33;  */

void FUN_101c7db10(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010048f4b8();
  *param_1 = param_2;
  return;
}



/* Entry: 101c7db34; end: 101c7dbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7db34(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126a8d98;
  func_0x000107c610f8();
  func_0x000107c45608();
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7dc00);
  (*pcVar1)();
}



/* Entry: 101c7dc00; end: 101c7dc43;  */

void FUN_101c7dc00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0fb20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8d98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e0fb20 = puVar1;
  return;
}



/* Entry: 101c7dc44; end: 101c7dd13;  */

void FUN_101c7dc44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x88) = param_8;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  return;
}



/* Entry: 101c7dd14; end: 101c7de33;  */

void FUN_101c7dd14(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8de0;
  func_0x000107c610f8();
  func_0x000107c460b0();
  *param_1 = puVar1;
  return;
}



/* Entry: 101c7de34; end: 101c7e063;  */

void FUN_101c7de34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar2 = 0;
  uStack_78 = param_5;
  uStack_70 = param_8;
  puStack_68 = param_1;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x68))
            (auStack_80 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f007930);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar8 + 8))(auStack_80 + lVar1,lVar2);
  puVar5 = PTR_PTR_1126a8dc0;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c45a70();
  puVar6 = PTR_PTR_1126a8dc8;
  func_0x000107c610f8(PTR_PTR_1126a8dc8);
  func_0x000107c46098();
  puVar7 = PTR_PTR_1126a8dd0;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  *(undefined **)((long)auStack_90 + lVar1) = puVar5;
  *(undefined **)((long)auStack_90 + lVar1 + 8) = puVar3;
  func_0x000107c48004();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  *puStack_68 = puVar7;
  return;
}



/* Entry: 101c7e064; end: 101c7e06f;  */

void FUN_101c7e064(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  puStack_68 = param_1;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x68))
            (auStack_80 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar2);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f007930);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar12 + 8))(auStack_80 + lVar1,lVar2);
  puVar5 = PTR_PTR_1126a8dc0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar6);
  func_0x000107c45a70();
  puVar7 = PTR_PTR_1126a8dc8;
  func_0x000107c610f8(PTR_PTR_1126a8dc8);
  func_0x000107c46098();
  puVar8 = PTR_PTR_1126a8dd0;
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar11);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  *(undefined **)((long)auStack_90 + lVar1) = puVar5;
  *(undefined **)((long)auStack_90 + lVar1 + 8) = puVar3;
  func_0x000107c48004();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  *puStack_68 = puVar8;
  return;
}



/* Entry: 101c7e070; end: 101c7e0ab;  */

void FUN_101c7e070(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c7e0ac; end: 101c7e12f;  */

void FUN_101c7e0ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126a8db0;
  func_0x000107c610f8(PTR_PTR_1126a8db0);
  func_0x000107c45a74();
  puVar2 = PTR_PTR_1126a8db8;
  func_0x000107c610f8();
  func_0x000107c48028();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 101c7e130; end: 101c7e2ef;  */

void FUN_101c7e130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar2 = 0;
  uStack_78 = param_7;
  uStack_70 = param_6;
  puStack_68 = param_1;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x68))
            (auStack_80 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f007910);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar6 + 8))(auStack_80 + lVar1,lVar2);
  puVar5 = PTR_PTR_1126a8da8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  *(undefined8 *)((long)auStack_90 + lVar1 + 8) = param_8;
  *(undefined8 *)((long)auStack_90 + lVar1) = uStack_78;
  func_0x000107c495b0();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar3);
  *puStack_68 = puVar5;
  return;
}



/* Entry: 101c7e2f0; end: 101c7e343;  */

void FUN_101c7e2f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c7e344; end: 101c7e367;  */

void FUN_101c7e344(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  puStack_68 = param_1;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x68))
            (auStack_80 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8(PTR_PTR_1126ae790);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f007910);
  func_0x000107c5f800();
  func_0x000107c470d0(puVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar11 + 8))(auStack_80 + lVar1,lVar2);
  puVar5 = PTR_PTR_1126a8da8;
  func_0x000107c610f8();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  *(undefined8 *)((long)auStack_90 + lVar1 + 8) = uVar10;
  *(undefined8 *)((long)auStack_90 + lVar1) = uStack_78;
  func_0x000107c495b0();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar3);
  *puStack_68 = puVar5;
  return;
}



/* Entry: 101c7e368; end: 101c7e3f3;  */

void FUN_101c7e368(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8da0;
  func_0x000107c610f8();
  func_0x000107c45594();
  *param_1 = puVar1;
  return;
}



/* Entry: 101c7e3f4; end: 101c7e563;  */

/* WARNING: Possible PIC construction at 0x000101c7e400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c7e480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7e474) */
/* WARNING: Removing unreachable block (ram,0x000101c7e464) */
/* WARNING: Removing unreachable block (ram,0x000101c7e454) */
/* WARNING: Removing unreachable block (ram,0x000101c7e444) */
/* WARNING: Removing unreachable block (ram,0x000101c7e434) */
/* WARNING: Removing unreachable block (ram,0x000101c7e424) */
/* WARNING: Removing unreachable block (ram,0x000101c7e414) */
/* WARNING: Removing unreachable block (ram,0x000101c7e404) */
/* WARNING: Removing unreachable block (ram,0x000101c7e484) */

void FUN_101c7e3f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c7e564; end: 101c7e587;  */

void FUN_101c7e564(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010048dbb0();
  *param_1 = param_2;
  return;
}



/* Entry: 101c7e588; end: 101c7e6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c7e588(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112e0fca8;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112e0fcb0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c7f1dc();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 101c7e6d8; end: 101c7e787; -[AdMediaCoordinator initWithAdConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c7e6d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e0fca8;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112e0fcb0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c7f1dc();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar5;
}



/* Entry: 101c7e788; end: 101c7e807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c7e788(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_38;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uStack_38 = 0;
  }
  else {
    func_0x000100087bd4(&uStack_38,FUN_101c7f2d0,auStack_60,&UNK_110750dc0);
  }
  return uStack_38;
}



/* Entry: 101c7e808; end: 101c7e86f; -[AdMediaCoordinator mediaLoadStatusForMediaId:] */

undefined8 FUN_101c7e808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7e788(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 101c7e870; end: 101c7e923; -[AdMediaCoordinator willStartFetchingForMediaId:] */

/* WARNING: Possible PIC construction at 0x000101c7e8f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7e8f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7e870(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c5faec();
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uStack_50 = param_1;
    uStack_48 = param_3;
    uStack_40 = param_2;
    func_0x000107c61174(param_1);
    func_0x000100087bd4(0x101c7f460,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7e924; end: 101c7e9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7e924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e0fcb0;
  func_0x000107c61428(param_1 + _DAT_112e0fcb0,auStack_58,0x21,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61558(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = 0x8000000000000000;
  FUN_101c7ec98(param_4,param_2,param_3,uVar2);
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c7e9c0; end: 101c7ea73; -[AdMediaCoordinator didFailFetchingMediaWithId:error:] */

/* WARNING: Possible PIC construction at 0x000101c7ea44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7ea48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7e9c0(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c5faec();
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uStack_50 = param_1;
    uStack_48 = param_3;
    uStack_40 = param_2;
    func_0x000107c61174(param_1);
    func_0x000100087bd4(0x101c7f44c,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7ea74; end: 101c7eb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7ea74(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e0fcb0;
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_2 + _DAT_112e0fcb0,auStack_58,0x21,0);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uStack_60 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    uVar3 = 2;
  }
  else {
    func_0x000107c61428(param_2 + _DAT_112e0fcb0,auStack_58,0x21,0);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uStack_60 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    uVar3 = 3;
  }
  FUN_101c7ec98(uVar3,param_3,param_4,uVar2);
  *(undefined8 *)(param_2 + lVar1) = uStack_60;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c7eb4c; end: 101c7ec2b; -[AdMediaCoordinator didFinishMatchingMediaToAdResponse:success:error:] */

/* WARNING: Possible PIC construction at 0x000101c7ebec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7ebf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7eb4c(undefined8 param_1,ulong param_2,ulong param_3,undefined1 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_80 [16];
  undefined1 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c5faec();
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uStack_70 = param_4;
    uStack_68 = param_1;
    uStack_60 = param_3;
    uStack_58 = param_2;
    uStack_50 = param_5;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_5);
    func_0x000100087bd4(0x101c7f438,auStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7ec2c; end: 101c7ec5f;  */

void FUN_101c7ec2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c7ec60; end: 101c7ec97; -[AdMediaCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7ec60(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e0fca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e0fcb0));
  return;
}



/* Entry: 101c7ec98; end: 101c7ef47;  */

void FUN_101c7ec98(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c7ed68);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_101c7ef48(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c7ed38);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101c7ede0();
    lVar6 = *unaff_x20;
    goto joined_r0x000101c7ed7c;
  }
  lVar6 = *unaff_x20;
joined_r0x000101c7ed7c:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c7ede0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101c7ef48; end: 101c7f1db;  */

void FUN_101c7ef48(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e0fce0;
  func_0x0001000285a8(0x112e0fce0,&UNK_10d9eaf98);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101c7f1a8:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar18 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c7f1d8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar17 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar17 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_101c7f1a8;
        }
        uVar17 = puVar18[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c7f1dc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101c7f1dc; end: 101c7f2cf;  */

undefined * FUN_101c7f1dc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e0fce0,&UNK_10d9eaf98);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c7f2cc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c7f2d0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101c7f2d0; end: 101c7f387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7f2d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e0fcb0;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + _DAT_112e0fcb0,auStack_58,0x20,0);
  lVar3 = *(long *)(lVar3 + lVar1);
  if (*(long *)(lVar3 + 0x10) != 0) {
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar2 * 8);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar3);
      goto LAB_101c7f368;
    }
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c614a8(auStack_58);
  uVar4 = 0;
LAB_101c7f368:
  *param_1 = uVar4;
  return;
}



/* Entry: 101c7f388; end: 101c7f3b7;  */

void FUN_101c7f388(void)

{
  long unaff_x20;
  
  FUN_101c7e924(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),1);
  return;
}



/* Entry: 101c7f3b8; end: 101c7f3e7;  */

void FUN_101c7f3b8(void)

{
  long unaff_x20;
  
  FUN_101c7e924(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),2);
  return;
}



/* Entry: 101c7f3e8; end: 101c7f417;  */

void FUN_101c7f3e8(void)

{
  long unaff_x20;
  
  FUN_101c7ea74(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101c7f418; end: 101c7f473;  */

void FUN_101c7f418(void)

{
  func_0x000107c61168(&PTR_PTR_1127fec38);
  return;
}



/* Entry: 101c7f474; end: 101c7f69f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101c7f474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_c0 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_70 [16];
  
  lVar4 = 0;
  uStack_a8 = param_6;
  uStack_98 = param_1;
  uStack_90 = param_2;
  func_0x000107c5f804();
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fce8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fcf0) = param_4;
  puVar5 = PTR_PTR_1126bdc18;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  *(undefined8 *)((long)auStack_c0 + lVar4) = param_7;
  *(undefined8 *)((long)auStack_c0 + lVar4 + 8) = param_8;
  uVar2 = uStack_a8;
  func_0x000107c455ec();
  lVar3 = lStack_a0;
  lVar1 = lStack_b0;
  *(undefined **)(unaff_x20 + _DAT_112e0fcf8) = puVar5;
  (**(code **)(lStack_b0 + 0x68))
            ((long)&lStack_b0 + lVar4,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_a0);
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f007990);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar1 + 8))((long)&lStack_b0 + lVar4,lVar3);
  *(undefined **)(unaff_x20 + _DAT_112e0fd00) = puVar5;
  puVar7 = auStack_70;
  func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar7;
}



/* Entry: 101c7f6a0; end: 101c7f7c3; -[SCAdContentDeepLinkPrefetcher initWithAdProvider:adMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adsPreferencesProvider:grapheneRegistry:lifecycleTracker:] */

undefined8
FUN_101c7f6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar1 = param_3;
  FUN_101c80588(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  return uVar1;
}



/* Entry: 101c7f7c4; end: 101c7f8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7f7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0fd00);
  puVar1 = &UNK_1104627c0;
  func_0x000107c613fc(&UNK_1104627c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104627e8;
  func_0x000107c613fc(&UNK_1104627e8,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  pcStack_60 = FUN_101c80744;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110462800;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101c7f8d0; end: 101c7f9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7f8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0fd00);
  puVar1 = &UNK_1104627c0;
  func_0x000107c613fc(&UNK_1104627c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110462838;
  func_0x000107c613fc(&UNK_110462838,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  uStack_70 = 0x101c80990;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110462850;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101c7f9fc; end: 101c7fa6f; -[SCAdContentDeepLinkPrefetcher prefetchContentAdWithInventoryType:viewLocation:adProductType:] */

void FUN_101c7f9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c7f7c4(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7fa70; end: 101c7fb87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7fa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0fd00);
  puVar1 = &UNK_1104627c0;
  func_0x000107c613fc(&UNK_1104627c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110462888;
  func_0x000107c613fc(&UNK_110462888,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  uStack_60 = 0x101c80994;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104628a0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101c7fb88; end: 101c7fc27; -[SCAdContentDeepLinkPrefetcher prefetchContentAdWithInventoryType:viewLocation:adProductType:upcomingStoriesContext:] */

/* WARNING: Possible PIC construction at 0x000101c7fc0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c7fc10) */

void FUN_101c7fb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x00010430c134(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c61174(param_1);
  FUN_101c7fa70(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c7fc28; end: 101c800f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7fc28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  long lVar4;
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + _DAT_112e0fcf0);
  lVar5 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f007a50);
    lVar4 = lVar5;
    func_0x000107c3ebdc();
    iVar2 = (int)lVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar5);
  }
  lVar5 = *(long *)(param_1 + _DAT_112e0fce8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) goto LAB_101c800b8;
  func_0x000107c5fadc(param_2,param_3);
  uVar3 = param_2;
  func_0x0001063fa06c();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_101c7fdfc:
    uVar9 = *(undefined8 *)(param_1 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (param_7 == 0) {
        param_7 = 0;
      }
      else {
        func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      param_6 = param_7;
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e4);
        (*pcVar1)();
      }
LAB_101c80090:
      func_0x000107c4ece4(uVar9);
    }
    else {
      if (param_7 == 0) {
        param_6 = 0;
      }
      else {
        func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
        param_6 = param_7;
      }
      lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7fe68);
        (*pcVar1)();
      }
LAB_101c8001c:
      func_0x000107c423d8(uVar9);
    }
  }
  else {
    uVar9 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f007a10);
    lVar4 = lVar8;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(lVar8);
    if ((int)lVar4 == 0) goto LAB_101c7fdfc;
    if (param_6 == 0) {
LAB_101c7ffb4:
      uVar9 = *(undefined8 *)(param_1 + _DAT_112e0fcf8);
      if (iVar2 == 0) {
        if (param_7 == 0) {
          param_7 = 0;
        }
        else {
          func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
        }
        lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        param_6 = param_7;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800ec);
          (*pcVar1)();
        }
        goto LAB_101c80090;
      }
      if (param_7 == 0) {
        param_7 = 0;
      }
      else {
        func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      param_6 = param_7;
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e8);
        (*pcVar1)();
      }
      goto LAB_101c8001c;
    }
    if (param_6 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_6;
      if (-1 < (long)param_6) {
        uVar6 = param_6 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar6 == 0) goto LAB_101c7ffb4;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (param_7 == 0) {
        param_7 = 0;
      }
      else {
        func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar7 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(param_6,uVar7);
      lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f4);
        (*pcVar1)();
      }
      func_0x000107c4ece4(uVar9);
    }
    else {
      if (param_7 == 0) {
        param_7 = 0;
      }
      else {
        func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar7 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(param_6,uVar7);
      lVar8 = *(long *)(param_1 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f0);
        (*pcVar1)();
      }
      func_0x000107c423d8(uVar9);
    }
    func_0x000107c61170(param_7);
  }
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(param_6);
LAB_101c800b8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101c800f4; end: 101c802f7; -[SCAdContentDeepLinkPrefetcher prefetchContentAdWithInventoryType:viewLocation:adProductType:upcomingStoriesContext:adOrganicSignals:] */

/* WARNING: Possible PIC construction at 0x000101c8019c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c801a0) */

void FUN_101c800f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x00010430c134(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  if (param_7 != 0) {
    func_0x000107c5fc54(param_7,PTR___s10Foundation4DataVN_110350ae0);
  }
  func_0x000107c61174(param_1);
  FUN_101c7f8d0(param_3,param_2,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c802f8; end: 101c803db; -[SCAdContentDeepLinkPrefetcher prefetchContentAdWithInventoryType:viewLocation:adProductType:targetStoryId:targetSnapId:] */

/* WARNING: Possible PIC construction at 0x000101c803b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c803b4) */

void FUN_101c802f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar1 = uVar2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c61174(param_1);
  func_0x000101c801c4(param_3,param_2,param_4,param_5,param_6,uVar1,param_7,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c803dc; end: 101c8048f; +[SCAdContentDeepLinkPrefetcher singleStoryUpcomingContextWithTargetStoryId:targetSnapId:] */

void FUN_101c803dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_101c80764(param_3,uVar1,param_4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010430c134(0);
    lVar2 = param_3;
    func_0x000107c5fc48(param_3,uVar1);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101c80490; end: 101c804c3;  */

void FUN_101c80490(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c804c4; end: 101c8051b; -[SCAdContentDeepLinkPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c804e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c80500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c804e4) */
/* WARNING: Removing unreachable block (ram,0x000101c80504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c804c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0fcf8));
  return;
}



/* Entry: 101c8051c; end: 101c80587;  */

void FUN_101c8051c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101c80588; end: 101c80743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c80588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_90 = param_8;
  uStack_88 = param_5;
  uStack_80 = param_6;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112e0fce8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fcf0) = param_4;
  puVar3 = PTR_PTR_1126bdc18;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar4 = uStack_90;
  *(undefined8 *)((long)auStack_a0 + lVar1) = param_7;
  *(undefined8 *)((long)auStack_a0 + lVar1 + 8) = uVar4;
  func_0x000107c455ec();
  *(undefined **)(unaff_x20 + _DAT_112e0fcf8) = puVar3;
  (**(code **)(lVar5 + 0x68))
            ((long)&uStack_90 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f007990);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))((long)&uStack_90 + lVar1,lVar2);
  *(undefined **)(unaff_x20 + _DAT_112e0fd00) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c80744; end: 101c80763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c80744(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(ulong *)(unaff_x20 + 0x38);
  uVar9 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar3 + _DAT_112e0fcf0);
  lVar6 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f007a50);
    lVar5 = lVar6;
    func_0x000107c3ebdc();
    iVar2 = (int)lVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar6);
  }
  lVar6 = *(long *)(lVar3 + _DAT_112e0fce8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) goto LAB_101c800b8;
  func_0x000107c5fadc(uVar12,uVar7);
  uVar7 = uVar12;
  func_0x0001063fa06c();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
LAB_101c7fdfc:
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      uVar10 = uVar9;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e4);
        (*pcVar1)();
      }
LAB_101c80090:
      func_0x000107c4ece4(uVar12);
    }
    else {
      if (uVar9 == 0) {
        uVar10 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
        uVar10 = uVar9;
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7fe68);
        (*pcVar1)();
      }
LAB_101c8001c:
      func_0x000107c423d8(uVar12);
    }
  }
  else {
    uVar12 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f007a10);
    lVar5 = lVar11;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(lVar11);
    if ((int)lVar5 == 0) goto LAB_101c7fdfc;
    if (uVar10 == 0) {
LAB_101c7ffb4:
      uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
      if (iVar2 == 0) {
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
        }
        lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        uVar10 = uVar9;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800ec);
          (*pcVar1)();
        }
        goto LAB_101c80090;
      }
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      uVar10 = uVar9;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e8);
        (*pcVar1)();
      }
      goto LAB_101c8001c;
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar10;
      if (-1 < (long)uVar10) {
        uVar8 = uVar10 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar8 == 0) goto LAB_101c7ffb4;
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar4 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(uVar10,uVar4);
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f4);
        (*pcVar1)();
      }
      func_0x000107c4ece4(uVar12);
    }
    else {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar4 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(uVar10,uVar4);
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f0);
        (*pcVar1)();
      }
      func_0x000107c423d8(uVar12);
    }
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar10);
LAB_101c800b8:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101c80764; end: 101c80907;  */

undefined * FUN_101c80764(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar1 != 0) && (param_4 != 0)) {
      puVar2 = (undefined *)0x0;
      uVar1 = param_3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar1 = param_4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x00010430add4(0);
        puVar4 = &SUB_10430add4;
        func_0x000107c610f8();
        func_0x000107c61434(param_2);
        func_0x000107c61434(param_4);
        func_0x00010430a7c8(param_3,param_4,0);
        func_0x00010430a6cc(0);
        func_0x000107c610f8();
        uVar3 = 0;
        func_0x00010430a154(0,0,0xe000000000000000);
        puVar2 = &SUB_10430c134;
        FUN_101c8051c(&SUB_10430c134,0x112e0fd38,&UNK_10d9eb000);
        func_0x000107c613fc();
        *(undefined8 *)(puVar2 + 0x18) = 3;
        *(undefined8 *)(puVar2 + 0x10) = 1;
        FUN_101c8051c(&SUB_10430add4,0x112e0fd30,&UNK_10d9eaff0);
        func_0x000107c613fc();
        *(undefined8 *)(puVar4 + 0x18) = 3;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(ulong *)(puVar4 + 0x20) = param_3;
        uVar5 = 0;
        func_0x00010430c134(0);
        func_0x000107c610f8();
        func_0x00010430af34(puVar4,uVar3,param_1,param_2,uVar5);
        *(undefined **)(puVar2 + 0x20) = puVar4;
      }
    }
    return puVar2;
  }
  return (undefined *)0x0;
}



/* Entry: 101c80908; end: 101c80943;  */

void FUN_101c80908(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c80944; end: 101c80957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c80944(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(ulong *)(unaff_x20 + 0x38);
  uVar9 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar3 + _DAT_112e0fcf0);
  lVar6 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f007a50);
    lVar5 = lVar6;
    func_0x000107c3ebdc();
    iVar2 = (int)lVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar6);
  }
  lVar6 = *(long *)(lVar3 + _DAT_112e0fce8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) goto LAB_101c800b8;
  func_0x000107c5fadc(uVar12,uVar7);
  uVar7 = uVar12;
  func_0x0001063fa06c();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar11 == 0) {
LAB_101c7fdfc:
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      uVar10 = uVar9;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e4);
        (*pcVar1)();
      }
LAB_101c80090:
      func_0x000107c4ece4(uVar12);
    }
    else {
      if (uVar9 == 0) {
        uVar10 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
        uVar10 = uVar9;
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c7fe68);
        (*pcVar1)();
      }
LAB_101c8001c:
      func_0x000107c423d8(uVar12);
    }
  }
  else {
    uVar12 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f007a10);
    lVar5 = lVar11;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(lVar11);
    if ((int)lVar5 == 0) goto LAB_101c7fdfc;
    if (uVar10 == 0) {
LAB_101c7ffb4:
      uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
      if (iVar2 == 0) {
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
        }
        lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        uVar10 = uVar9;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800ec);
          (*pcVar1)();
        }
        goto LAB_101c80090;
      }
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      uVar10 = uVar9;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800e8);
        (*pcVar1)();
      }
      goto LAB_101c8001c;
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar10;
      if (-1 < (long)uVar10) {
        uVar8 = uVar10 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar8 == 0) goto LAB_101c7ffb4;
    uVar12 = *(undefined8 *)(lVar3 + _DAT_112e0fcf8);
    if (iVar2 == 0) {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar4 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(uVar10,uVar4);
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f4);
        (*pcVar1)();
      }
      func_0x000107c4ece4(uVar12);
    }
    else {
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fc48(uVar9,PTR___s10Foundation4DataVN_110350ae0);
      }
      uVar4 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(uVar10,uVar4);
      lVar11 = *(long *)(lVar3 + _DAT_112e0fd00);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c800f0);
        (*pcVar1)();
      }
      func_0x000107c423d8(uVar12);
    }
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar10);
LAB_101c800b8:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101c80958; end: 101c80977;  */

void FUN_101c80958(void)

{
  func_0x000107c61168(&PTR_PTR_1127fed00);
  return;
}



/* Entry: 101c80978; end: 101c8099b;  */

void FUN_101c80978(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8099c; end: 101c809e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c8099c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fd40) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c809e8; end: 101c80a3f; -[SCAdDiscoverTileTapContextBuilder initWithAdConfigProviderV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c809e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e0fd40) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101c80a40; end: 101c810c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101c80a40(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long unaff_x20;
  int iVar24;
  undefined *puVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  puVar27 = *(undefined **)(param_1 + 0x10);
  puVar25 = *(undefined **)(param_2 + 0x10);
  puVar2 = puVar25;
  if (puVar27 <= puVar25) {
    puVar2 = puVar27;
  }
  if (puVar2 != (undefined *)0x0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e0fd40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x00010640c980();
      func_0x000107c61180();
      if (lVar6 == 0) {
        func_0x000107c615e8(lVar5);
      }
      else {
        lVar7 = lVar6;
        func_0x000107c4eba4();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101c810c0);
          (*pcVar4)();
        }
        lVar8 = lVar7;
        func_0x000107c43c04();
        func_0x000107c61170(lVar7);
        lVar7 = lVar6;
        func_0x000107c4100c();
        lVar9 = lVar6;
        func_0x000107c4eba4();
        func_0x000107c61180();
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101c810c4);
          (*pcVar4)();
        }
        iVar24 = (int)lVar8;
        lVar8 = lVar9;
        func_0x000107c43c08();
        func_0x000107c61170(lVar9);
        if (iVar24 < 1) {
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(lVar6);
        }
        else {
          if ((long)iVar24 <= (long)puVar2) {
            puVar2 = (undefined *)(long)iVar24;
          }
          if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
            puVar10 = *(undefined **)
                       (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)
                      ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
              puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            func_0x000107c60480();
          }
          if ((long)puVar10 <= (long)puVar2) {
            puVar10 = puVar2;
          }
          uVar11 = 0;
          FUN_101c82984(0,puVar10,0,PTR___swiftEmptyArrayStorage_11034f1c8,&SUB_10430c134,
                        0x112e0fd38,&UNK_10d9eb000,0x101c82c5c);
          if ((long)puVar25 < (long)puVar2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101c810a4);
            (*pcVar4)();
          }
          puVar25 = (undefined *)0x0;
          do {
            puVar1 = (ulong *)(param_2 + 0x20 + (long)puVar25 * 0x10);
            uVar20 = *puVar1;
            uVar23 = puVar1[1];
            uVar21 = uVar20 & 0xffffffffffff;
            if ((uVar23 & 0x2000000000000000) != 0) {
              uVar21 = uVar23 >> 0x38 & 0xf;
            }
            if (uVar21 != 0) {
              if (puVar27 <= puVar25) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101c8108c);
                (*pcVar4)();
              }
              func_0x0001000bb420(param_1 + 0x20 + (long)puVar25 * 0x20,auStack_c8);
              uVar17 = uStack_b0;
              puVar26 = auStack_c8;
              func_0x0001006732c8(puVar26,uStack_b0);
              func_0x000107c61434(uVar23);
              func_0x000107c605b0(puVar26,uVar17);
              puVar12 = puVar26;
              func_0x00010640b590();
              func_0x000107c615e8(puVar26);
              uVar17 = uStack_b0;
              puVar26 = auStack_c8;
              func_0x0001006732c8(puVar26,uStack_b0);
              func_0x000107c605b0();
              puVar13 = puVar26;
              func_0x00010640b5a4();
              func_0x000107c61180();
              func_0x000107c615e8(puVar26);
              if (puVar13 == (undefined1 *)0x0) {
                puVar26 = (undefined1 *)0x0;
                uVar17 = 0xe000000000000000;
              }
              else {
                puVar26 = puVar13;
                func_0x000107c5faec(puVar13);
                func_0x000107c61170(puVar13);
              }
              uVar14 = 0;
              func_0x00010430a6cc(0);
              func_0x000107c610f8();
              func_0x00010430a154(puVar12,puVar26,uVar17,uVar14);
              iVar24 = (int)lVar7;
              if (puVar25 != (undefined *)0x0) {
                iVar24 = (int)lVar8;
              }
              puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (0 < iVar24) {
                puVar26 = auStack_c8;
                func_0x0001006732c8(puVar26,uStack_b0);
                func_0x000107c605b0();
                puVar13 = puVar26;
                func_0x00010640b274();
                func_0x000107c61180();
                func_0x000107c615e8(puVar26);
                puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar13 != (undefined1 *)0x0) {
                  puVar15 = puVar13;
                  func_0x000107c5fc54(puVar13,PTR___sypN_11034f1a8 + 8);
                  func_0x000107c61170(puVar13);
                  uVar21 = *(ulong *)(puVar15 + 0x10);
                  uVar3 = uVar21;
                  puVar26 = puVar15;
                  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if ((ulong)(long)iVar24 <= uVar21) {
                    uVar3 = (long)iVar24;
                  }
                  while (uVar21 != 0) {
                    func_0x0001000bb420(puVar26 + 0x20,auStack_88);
                    func_0x000100102924(auStack_88,auStack_a8);
                    uVar21 = uStack_90;
                    puVar13 = auStack_a8;
                    func_0x0001006732c8(puVar13,uStack_90);
                    func_0x000107c605b0();
                    puVar16 = puVar13;
                    func_0x00010640a9ec();
                    func_0x000107c61180();
                    func_0x000107c615e8(puVar13);
                    if (puVar16 != (undefined1 *)0x0) {
                      puVar13 = puVar16;
                      func_0x000107c5faec();
                      func_0x000107c61170(puVar16);
                      uVar22 = (ulong)puVar13 & 0xffffffffffff;
                      if ((uVar21 & 0x2000000000000000) != 0) {
                        uVar22 = uVar21 >> 0x38 & 0xf;
                      }
                      if (uVar22 == 0) {
                        func_0x000107c6142c(uVar21);
                      }
                      else {
                        uVar17 = 0;
                        func_0x00010430add4(0);
                        func_0x000107c610f8();
                        func_0x00010430a7c8(puVar13,uVar21,0,uVar17);
                        puVar19 = puVar10;
                        func_0x000107c61550();
                        if ((((int)puVar19 == 0) || ((long)puVar10 < 0)) ||
                           (puVar19 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
                          if ((ulong)puVar10 >> 0x3e == 0) {
                            puVar18 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
                          }
                          else {
                            puVar18 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                            if ((undefined *)0x7fffffffffffffff < puVar10) {
                              puVar18 = puVar10;
                            }
                            func_0x000107c60480(puVar18);
                          }
                          puVar19 = (undefined *)0x0;
                          FUN_101c82984(0,puVar18 + 1,1,puVar10,&SUB_10430add4,0x112e0fd30,
                                        &UNK_10d9eaff0,FUN_101c82b64);
                        }
                        uVar22 = (ulong)puVar19 & 0xffffffffffffff8;
                        uVar21 = *(ulong *)(uVar22 + 0x10);
                        puVar10 = puVar19;
                        if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar21) {
                          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
                          FUN_101c82984(puVar10,uVar21 + 1,1,puVar19,&SUB_10430add4,0x112e0fd30,
                                        &UNK_10d9eaff0,FUN_101c82b64);
                          uVar22 = (ulong)puVar10 & 0xffffffffffffff8;
                        }
                        *(ulong *)(uVar22 + 0x10) = uVar21 + 1;
                        *(undefined1 **)(uVar22 + uVar21 * 8 + 0x20) = puVar13;
                      }
                    }
                    func_0x000100183ab8(auStack_a8);
                    uVar21 = uVar3 - 1;
                    uVar3 = uVar21;
                    puVar26 = puVar26 + 0x20;
                  }
                  func_0x000107c615e8(puVar15);
                }
              }
              func_0x00010430c134(0);
              func_0x000107c610f8();
              func_0x000107c61174(puVar12);
              func_0x00010430af34(puVar10,puVar12,uVar20,uVar23);
              uVar21 = uVar11;
              if (uVar11 >> 0x3e != 0) {
                uVar20 = uVar11 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar11) {
                  uVar20 = uVar11;
                }
                func_0x000107c60480(uVar20);
                uVar21 = 0;
                FUN_101c82984(0,uVar20 + 1,1,uVar11,&SUB_10430c134,0x112e0fd38,&UNK_10d9eb000,
                              0x101c82c5c);
              }
              uVar23 = uVar21 & 0xffffffffffffff8;
              uVar20 = *(ulong *)(uVar23 + 0x10);
              uVar11 = uVar21;
              if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar20) {
                uVar11 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
                FUN_101c82984(uVar11,uVar20 + 1,1,uVar21,&SUB_10430c134,0x112e0fd38,&UNK_10d9eb000,
                              0x101c82c5c);
                uVar23 = uVar11 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar23 + 0x10) = uVar20 + 1;
              *(undefined **)(uVar23 + uVar20 * 8 + 0x20) = puVar10;
              func_0x000107c61170(puVar12);
              func_0x000100183ab8(auStack_c8);
            }
            puVar25 = puVar25 + 1;
          } while (puVar25 != puVar2);
          if (uVar11 >> 0x3e == 0) {
            uVar21 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar21 = uVar11 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar11) {
              uVar21 = uVar11;
            }
            func_0x000107c60480();
          }
          func_0x000107c61170(lVar6);
          func_0x000107c615e8(lVar5);
          if (uVar21 != 0) {
            return uVar11;
          }
          func_0x000107c6142c(uVar11);
        }
      }
    }
  }
  return 0;
}



/* Entry: 101c810c4; end: 101c8117b; -[SCAdDiscoverTileTapContextBuilder upcomingStoriesContextFromGroupDataModels:storyIds:] */

void FUN_101c810c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c5fc54(param_3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  FUN_101c80a40(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_4);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010430c134(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101c8117c; end: 101c826ab;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101c8117c(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  long unaff_x20;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long *plVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined *puVar31;
  long lStack_130;
  ulong uStack_f8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar5 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar5 == (undefined *)0x0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    puVar5 = (undefined *)0xa;
    lStack_130 = 0xf;
  }
  else {
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112e0fd40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar6 == 0) {
      return 0;
    }
    uVar7 = uVar6;
    func_0x00010640c980();
    func_0x000107c61180();
    if (uVar7 == 0) {
      func_0x000107c615e8(uVar6);
      return 0;
    }
    uVar29 = uVar7;
    func_0x000107c4eba4();
    func_0x000107c61180();
    if (uVar29 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c826ac);
      (*pcVar4)();
    }
    uVar8 = uVar29;
    func_0x000107c43c04();
    func_0x000107c61170(uVar29);
    uVar29 = uVar7;
    func_0x000107c4100c();
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(uVar6);
    if ((int)uVar8 < 1) {
      return 0;
    }
    lStack_130 = (long)(int)uVar29;
    puVar5 = (undefined *)(uVar8 & 0xffffffff);
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = puVar9;
  if ((long)puVar5 <= (long)puVar9) {
    puVar1 = puVar5;
  }
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar5 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar5 <= (long)puVar1) {
    puVar5 = puVar1;
  }
  uStack_f8 = 0;
  FUN_101c82984(0,puVar5,0,PTR___swiftEmptyArrayStorage_11034f1c8,&SUB_10430c134,0x112e0fd38,
                &UNK_10d9eb000,0x101c82c5c);
  if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82670);
    (*pcVar4)();
  }
  if (puVar9 != (undefined *)0x0) {
    if ((((ulong)param_1 & 0xc000000000000001) == 0) &&
       ((lVar18 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10), lVar18 == 0 ||
        (lVar18 <= (long)(puVar1 + -1))))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82690);
      (*pcVar4)();
    }
    puVar5 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar9 = *(undefined **)(param_1 + (long)puVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar5;
        FUN_101c82d54(puVar5,param_1,&PTR_PTR_1126c2098,0x112e0fd70);
      }
      puVar22 = puVar9;
      func_0x000107c4004c();
      func_0x000107c61180();
      if (puVar22 != (undefined *)0x0) {
        uVar6 = *(ulong *)(puVar22 + _DAT_11307fe98);
        uVar7 = *(ulong *)((long)(puVar22 + _DAT_11307fe98) + 8);
        func_0x000107c61434(uVar7);
        func_0x000107c61170(puVar22);
        if (uVar7 != 0) {
          uVar29 = uVar6 & 0xffffffffffff;
          if ((uVar7 & 0x2000000000000000) != 0) {
            uVar29 = uVar7 >> 0x38 & 0xf;
          }
          if (uVar29 == 0) {
            func_0x000107c6142c(uVar7);
          }
          else {
            puVar22 = puVar9;
            func_0x000107c5c080();
            if ((param_2 & 1) == 0) {
              if ((long)puVar22 < 3) {
                if (puVar22 == (undefined *)0x1) {
                  uVar26 = 0;
                  uVar29 = 0xe000000000000000;
                  puVar22 = (undefined *)0x2;
                }
                else {
                  if (puVar22 != (undefined *)0x2) goto LAB_101c814dc;
                  uVar26 = 0;
                  uVar29 = 0xe000000000000000;
                  puVar22 = (undefined *)0xa;
                }
              }
              else if ((puVar22 == (undefined *)0x3) || (puVar22 == (undefined *)0xb)) {
LAB_101c815bc:
                uVar26 = 0;
                uVar29 = 0xe000000000000000;
              }
              else if (puVar22 == (undefined *)0xd) {
                uVar26 = 0;
                uVar29 = 0xe000000000000000;
                puVar22 = (undefined *)0xf;
              }
              else {
LAB_101c814dc:
                uVar26 = 0;
                puVar22 = (undefined *)0x0;
                uVar29 = 0xe000000000000000;
              }
            }
            else {
              if ((long)puVar22 < 0xb) {
                if (puVar22 == (undefined *)0x1) {
                  puVar22 = (undefined *)0x2;
                }
                else if (puVar22 == (undefined *)0x2) {
                  puVar22 = (undefined *)0xa;
                }
                else {
                  if (puVar22 != (undefined *)0x3) goto LAB_101c814f4;
                  puVar22 = puVar9;
                  func_0x000107c5bfc4();
                  func_0x000107c61180();
                  puVar30 = puVar22;
                  func_0x000107c2bcbc();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar22);
                  if (puVar30 != (undefined *)0x0) {
                    puVar22 = puVar30;
                    func_0x000107c4a10c();
                    func_0x000107c61170(puVar30);
                    if (((ulong)puVar22 & 1) != 0) {
                      puVar22 = (undefined *)0xc;
                      goto LAB_101c81508;
                    }
                  }
LAB_101c814a4:
                  puVar22 = (undefined *)0x3;
                }
              }
              else if (puVar22 != (undefined *)0xb) {
                if (puVar22 == (undefined *)0xd) {
                  puVar22 = (undefined *)0xf;
                }
                else {
                  if (puVar22 == (undefined *)0xe) goto LAB_101c814a4;
LAB_101c814f4:
                  puVar22 = (undefined *)0x0;
                }
              }
LAB_101c81508:
              puVar30 = puVar9;
              func_0x000107c5c080();
              if ((long)puVar30 < 0xb) {
                if (puVar30 == (undefined *)0x1) {
LAB_101c815d8:
                  uVar29 = 0xe400000000000000;
                  uVar26 = 0x4556494c;
                }
                else {
                  if (puVar30 == (undefined *)0x2) goto LAB_101c815c8;
                  if (puVar30 != (undefined *)0x3) goto LAB_101c815bc;
                  puVar30 = puVar9;
                  func_0x000107c5bfc4();
                  func_0x000107c61180();
                  puVar17 = puVar30;
                  func_0x000107c2bcbc();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar30);
                  if ((puVar17 == (undefined *)0x0) ||
                     (puVar30 = puVar17, func_0x000107c4a10c(), ((ulong)puVar30 & 1) == 0)) {
                    func_0x000107c61170(puVar17);
                    uVar26 = 0x4255505f52455355;
                    uVar29 = 0x43494c;
                    goto LAB_101c81608;
                  }
                  func_0x000107c61170(puVar17);
                  uVar29 = 0xe600000000000000;
                  uVar26 = 0x414c41504d49;
                }
              }
              else if (puVar30 == (undefined *)0xb) {
LAB_101c815c8:
                uVar29 = 0xe400000000000000;
                uVar26 = 0x574f4853;
              }
              else {
                if (puVar30 == (undefined *)0xd) goto LAB_101c815d8;
                if (puVar30 != (undefined *)0xe) goto LAB_101c815bc;
                uVar26 = 0x54535f4445564153;
                uVar29 = 0x59524f;
LAB_101c81608:
                uVar29 = uVar29 | 0xeb00000000000000;
              }
            }
            uVar10 = 0;
            func_0x00010430a6cc(0);
            func_0x000107c610f8();
            func_0x00010430a154(puVar22,uVar26,uVar29,uVar10);
            lVar18 = lStack_130;
            if (puVar5 != (undefined *)0x0) {
              lVar18 = 0;
            }
            puVar30 = puVar9;
            func_0x000107c5c080();
            if ((long)puVar30 < 0xb) {
              if (puVar30 == (undefined *)0x1) {
                puVar30 = puVar9;
                func_0x000107c5bfc4();
                func_0x000107c61180();
                puVar11 = puVar30;
                func_0x000107c2bcc8();
                func_0x000107c61180();
                func_0x000107c61170(puVar30);
                puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar11 != (undefined *)0x0) {
                  puVar30 = puVar11;
                  func_0x000107c5b538();
                  func_0x000107c61180();
                  uVar26 = 0;
                  func_0x000101c83628(0,0x112e0fd78,&PTR_PTR_1126cbc90);
                  puVar27 = puVar30;
                  func_0x000107c5fc54(puVar30,uVar26);
                  func_0x000107c61170(puVar30);
                  if ((ulong)puVar27 >> 0x3e == 0) {
                    puVar30 = *(undefined **)(((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar30 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar27) {
                      puVar30 = puVar27;
                    }
                    func_0x000107c60480();
                  }
                  if (puVar30 == (undefined *)0x0) {
LAB_101c82484:
                    func_0x000107c6142c(puVar27);
                    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  }
                  else {
                    puVar17 = (undefined *)
                              ((ulong)puVar30 & ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU));
                    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    func_0x0001011bf650(0,puVar17,0);
                    if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c826a4);
                      (*pcVar4)();
                    }
                    puVar31 = (undefined *)0x0;
                    do {
                      puVar12 = puStack_c0;
                      if (((ulong)puVar27 & 0xc000000000000001) == 0) {
                        puVar23 = *(undefined **)(puVar27 + (long)puVar31 * 8 + 0x20);
                        func_0x000107c61174();
                        puVar24 = puVar17;
                      }
                      else {
                        puVar23 = puVar31;
                        puVar24 = puVar27;
                        FUN_101c82d54(puVar31,puVar27,&PTR_PTR_1126cbc90,0x112e0fd78);
                      }
                      func_0x000107c61174();
                      puVar20 = puVar23;
                      func_0x000107c5b2d0();
                      func_0x000107c61180();
                      if (puVar20 == (undefined *)0x0) {
                        func_0x000107c61170(puVar23);
                        func_0x000107c61170(puVar23);
                        puVar19 = (undefined *)0x0;
                        puVar23 = (undefined *)0x0;
                        puVar17 = puVar24;
                      }
                      else {
                        puVar19 = puVar20;
                        func_0x000107c5faec();
                        puVar17 = puVar24;
                        func_0x000107c61170(puVar20);
                        func_0x000107c61170(puVar23);
                        func_0x000107c61170(puVar23);
                        puVar23 = puVar24;
                      }
                      uVar29 = *(ulong *)(puVar12 + 0x10);
                      puVar24 = (undefined *)(uVar29 + 1);
                      puStack_c0 = puVar12;
                      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar29) {
                        puVar17 = puVar24;
                        func_0x0001011bf650(1 < *(ulong *)(puVar12 + 0x18),puVar24,1);
                      }
                      puVar31 = puVar31 + 1;
                      *(undefined **)(puStack_c0 + 0x10) = puVar24;
                      *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x20) = puVar19;
                      *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x28) = puVar23;
                    } while (puVar30 != puVar31);
LAB_101c81d50:
                    puVar17 = puStack_c0;
                    func_0x000107c6142c(puVar27);
                  }
                }
LAB_101c82498:
                puVar30 = puVar17;
                FUN_101c82f10(puVar17,lVar18);
                func_0x000107c61170(puVar11);
                func_0x000107c6142c(puVar17);
joined_r0x000101c8227c:
                if (puVar30 != (undefined *)0x0) goto LAB_101c824c4;
              }
              else {
                if (puVar30 == (undefined *)0x2) {
                  puVar30 = puVar9;
                  func_0x000107c5bfc4();
                  func_0x000107c61180();
                  puVar17 = puVar30;
                  func_0x000107c2bcc0();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar30);
                  if (puVar17 == (undefined *)0x0) {
LAB_101c82128:
                    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0)
                    goto LAB_101c81b90;
LAB_101c82138:
                    puVar30 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar30 = puVar17;
                    func_0x000107c5b538();
                    func_0x000107c61180();
                    if (puVar30 == (undefined *)0x0) goto LAB_101c82128;
                    uVar26 = 0;
                    func_0x000101c83628(0,0x112e0fd88,&PTR_PTR_1126cc730);
                    puVar11 = puVar30;
                    func_0x000107c5fc54(puVar30,uVar26);
                    func_0x000107c61170(puVar30);
                    if ((ulong)puVar11 >> 0x3e == 0) goto LAB_101c82138;
LAB_101c81b90:
                    puVar30 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar11) {
                      puVar30 = puVar11;
                    }
                    func_0x000107c60480();
                  }
                  if (puVar30 == (undefined *)0x0) {
LAB_101c8223c:
                    func_0x000107c6142c(puVar11);
                    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  }
                  else {
                    uVar29 = (ulong)puVar30 & ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU);
                    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    func_0x0001011bf650(0,uVar29,0);
                    if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82694);
                      (*pcVar4)();
                    }
                    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
                      plVar28 = (long *)(puVar11 + 0x20);
                      do {
                        puVar27 = puStack_c0;
                        lVar16 = *plVar28;
                        func_0x000107c61174();
                        func_0x000107c61174();
                        lVar15 = lVar16;
                        func_0x000107c5b2d0();
                        func_0x000107c61180();
                        if (lVar15 == 0) {
                          func_0x000107c61170(lVar16);
                          func_0x000107c61170(lVar16);
                          lVar21 = 0;
                          uVar25 = 0;
                          uVar8 = uVar29;
                        }
                        else {
                          lVar21 = lVar15;
                          func_0x000107c5faec();
                          uVar8 = uVar29;
                          func_0x000107c61170(lVar15);
                          func_0x000107c61170(lVar16);
                          func_0x000107c61170(lVar16);
                          uVar25 = uVar29;
                        }
                        uVar29 = uVar8;
                        uVar2 = *(ulong *)(puVar27 + 0x10);
                        uVar8 = uVar2 + 1;
                        puStack_c0 = puVar27;
                        if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar2) {
                          uVar29 = uVar8;
                          func_0x0001011bf650(1 < *(ulong *)(puVar27 + 0x18),uVar8,1);
                        }
                        *(ulong *)(puStack_c0 + 0x10) = uVar8;
                        *(long *)(puStack_c0 + uVar2 * 0x10 + 0x20) = lVar21;
                        *(ulong *)(puStack_c0 + uVar2 * 0x10 + 0x28) = uVar25;
                        puVar30 = puVar30 + -1;
                        plVar28 = plVar28 + 1;
                      } while (puVar30 != (undefined *)0x0);
                    }
                    else {
                      puVar27 = (undefined *)0x0;
                      do {
                        puVar31 = puStack_c0;
                        puVar12 = puVar27;
                        puVar24 = puVar11;
                        FUN_101c82d54(puVar27,puVar11,&PTR_PTR_1126cc730,0x112e0fd88);
                        puVar23 = puVar12;
                        func_0x000107c615f0();
                        func_0x000107c5b2d0();
                        func_0x000107c61180();
                        if (puVar23 == (undefined *)0x0) {
                          func_0x000107c615ec(puVar12,2);
                          puVar20 = (undefined *)0x0;
                          puVar24 = (undefined *)0x0;
                        }
                        else {
                          puVar20 = puVar23;
                          func_0x000107c5faec();
                          func_0x000107c61170(puVar23);
                          func_0x000107c615ec(puVar12,2);
                        }
                        uVar29 = *(ulong *)(puVar31 + 0x10);
                        puStack_c0 = puVar31;
                        if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar29) {
                          func_0x0001011bf650(1 < *(ulong *)(puVar31 + 0x18),uVar29 + 1,1);
                        }
                        puVar27 = puVar27 + 1;
                        *(ulong *)(puStack_c0 + 0x10) = uVar29 + 1;
                        *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x20) = puVar20;
                        *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x28) = puVar24;
                      } while (puVar30 != puVar27);
                    }
                    puVar27 = puStack_c0;
                    func_0x000107c6142c(puVar11);
                  }
                  goto LAB_101c82408;
                }
                if (puVar30 == (undefined *)0x3) {
                  puVar30 = puVar9;
                  func_0x000107c5bfc4();
                  func_0x000107c61180();
                  puVar11 = puVar30;
                  func_0x000107c2bcbc();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar30);
                  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if (puVar11 != (undefined *)0x0) {
                    puVar30 = puVar11;
                    func_0x000107c5b538();
                    func_0x000107c61180();
                    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    if (puVar30 != (undefined *)0x0) {
                      uVar26 = 0;
                      func_0x000101c83628(0,0x112e0fd78,&PTR_PTR_1126cbc90);
                      puVar27 = puVar30;
                      func_0x000107c5fc54(puVar30,uVar26);
                      func_0x000107c61170(puVar30);
                      if ((ulong)puVar27 >> 0x3e == 0) {
                        puVar30 = *(undefined **)(((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
                      }
                      else {
                        puVar30 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
                        if ((undefined *)0x7fffffffffffffff < puVar27) {
                          puVar30 = puVar27;
                        }
                        func_0x000107c60480();
                      }
                      if (puVar30 != (undefined *)0x0) {
                        puVar17 = (undefined *)
                                  ((ulong)puVar30 & ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU));
                        puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                        func_0x0001011bf650(0,puVar17,0);
                        if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x101c826a8);
                          (*pcVar4)();
                        }
                        puVar31 = (undefined *)0x0;
                        do {
                          puVar12 = puStack_c0;
                          if (((ulong)puVar27 & 0xc000000000000001) == 0) {
                            puVar23 = *(undefined **)(puVar27 + (long)puVar31 * 8 + 0x20);
                            func_0x000107c61174();
                            puVar24 = puVar17;
                          }
                          else {
                            puVar23 = puVar31;
                            puVar24 = puVar27;
                            FUN_101c82d54(puVar31,puVar27,&PTR_PTR_1126cbc90,0x112e0fd78);
                          }
                          func_0x000107c61174();
                          puVar20 = puVar23;
                          func_0x000107c5b2d0();
                          func_0x000107c61180();
                          if (puVar20 == (undefined *)0x0) {
                            func_0x000107c61170(puVar23);
                            func_0x000107c61170(puVar23);
                            puVar19 = (undefined *)0x0;
                            puVar23 = (undefined *)0x0;
                            puVar17 = puVar24;
                          }
                          else {
                            puVar19 = puVar20;
                            func_0x000107c5faec();
                            puVar17 = puVar24;
                            func_0x000107c61170(puVar20);
                            func_0x000107c61170(puVar23);
                            func_0x000107c61170(puVar23);
                            puVar23 = puVar24;
                          }
                          uVar29 = *(ulong *)(puVar12 + 0x10);
                          puVar24 = (undefined *)(uVar29 + 1);
                          puStack_c0 = puVar12;
                          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar29) {
                            puVar17 = puVar24;
                            func_0x0001011bf650(1 < *(ulong *)(puVar12 + 0x18),puVar24,1);
                          }
                          puVar31 = puVar31 + 1;
                          *(undefined **)(puStack_c0 + 0x10) = puVar24;
                          *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x20) = puVar19;
                          *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x28) = puVar23;
                        } while (puVar30 != puVar31);
                        goto LAB_101c81d50;
                      }
                      goto LAB_101c82484;
                    }
                  }
                  goto LAB_101c82498;
                }
              }
LAB_101c824bc:
              puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            else {
              if (puVar30 == (undefined *)0xb) {
                puVar30 = puVar9;
                func_0x000107c5bfc4();
                func_0x000107c61180();
                puVar17 = puVar30;
                func_0x000107c2bccc();
                func_0x000107c61180();
                func_0x000107c61170(puVar30);
                if (puVar17 == (undefined *)0x0) {
LAB_101c81d60:
                  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0)
                  goto LAB_101c81adc;
LAB_101c81d70:
                  puVar30 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
                  if (puVar30 == (undefined *)0x0) goto LAB_101c81b00;
LAB_101c81d80:
                  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  func_0x0001011bf650(0,(ulong)puVar30 &
                                        ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU),0);
                  if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82698);
                    (*pcVar4)();
                  }
                  puVar31 = (undefined *)0x0;
                  do {
                    puVar27 = puStack_80;
                    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
                      puVar12 = *(undefined **)(puVar11 + (long)puVar31 * 8 + 0x20);
                      func_0x000107c61174(puVar12);
                    }
                    else {
                      puVar12 = puVar31;
                      FUN_101c82d54(puVar31,puVar11,&PTR_PTR_1126ced58,0x112e0fd80);
                    }
                    uStack_90 = 0;
                    uStack_88 = 0;
                    puVar23 = &UNK_1104629d0;
                    func_0x000107c613fc(&UNK_1104629d0,0x18,7);
                    *(undefined8 **)(puVar23 + 0x10) = &uStack_90;
                    puVar24 = &UNK_1104629f8;
                    func_0x000107c613fc(&UNK_1104629f8,0x20,7);
                    *(code **)(puVar24 + 0x10) = FUN_101c83438;
                    *(undefined **)(puVar24 + 0x18) = puVar23;
                    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                    pcStack_a0 = FUN_101c8356c;
                    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b8 = 0x42000000;
                    pcStack_b0 = FUN_101c82810;
                    puStack_a8 = &UNK_110462a10;
                    ppuVar13 = &puStack_c0;
                    puStack_98 = puVar24;
                    func_0x000107c60bc4(ppuVar13);
                    puVar20 = puStack_98;
                    func_0x000107c6157c(puVar24);
                    func_0x000107c61574(puVar20);
                    puVar20 = &UNK_110462a48;
                    func_0x000107c613fc(&UNK_110462a48,0x18,7);
                    *(undefined8 **)(puVar20 + 0x10) = &uStack_90;
                    puVar19 = &UNK_110462a70;
                    func_0x000107c613fc(&UNK_110462a70,0x20,7);
                    *(code **)(puVar19 + 0x10) = FUN_101c835a8;
                    *(undefined **)(puVar19 + 0x18) = puVar20;
                    pcStack_a0 = (code *)0x101c83608;
                    puStack_c0 = puVar3;
                    uStack_b8 = 0x42000000;
                    pcStack_b0 = FUN_101c82894;
                    puStack_a8 = &UNK_110462a88;
                    ppuVar14 = &puStack_c0;
                    puStack_98 = puVar19;
                    func_0x000107c60bc4(ppuVar14);
                    puVar3 = puStack_98;
                    func_0x000107c6157c(puVar19);
                    func_0x000107c61574(puVar3);
                    func_0x000107c4c698(puVar12);
                    func_0x000107c61170(puVar12);
                    func_0x000107c60bd0(ppuVar14);
                    func_0x000107c60bd0(ppuVar13);
                    func_0x000107c61574(puVar23);
                    puVar12 = puVar24;
                    func_0x000107c61544(puVar24,"",0x6a,0x11a,0x2c,1);
                    func_0x000107c61574(puVar24);
                    func_0x000107c61574(puVar20);
                    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82640);
                      (*pcVar4)();
                    }
                    puVar12 = puVar19;
                    func_0x000107c61544(puVar19,"",0x6a,0x11c,0x23,1);
                    func_0x000107c61574(puVar19);
                    uVar10 = uStack_88;
                    uVar26 = uStack_90;
                    if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c82644);
                      (*pcVar4)();
                    }
                    uVar29 = *(ulong *)(puVar27 + 0x10);
                    puStack_80 = puVar27;
                    if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar29) {
                      func_0x0001011bf650(1 < *(ulong *)(puVar27 + 0x18),uVar29 + 1,1);
                    }
                    puVar27 = puStack_80;
                    puVar31 = puVar31 + 1;
                    *(ulong *)(puStack_80 + 0x10) = uVar29 + 1;
                    *(undefined8 *)(puStack_80 + uVar29 * 0x10 + 0x28) = uVar10;
                    *(undefined8 *)(puStack_80 + uVar29 * 0x10 + 0x20) = uVar26;
                  } while (puVar30 != puVar31);
                  func_0x000107c6142c(puVar11);
                }
                else {
                  puVar30 = puVar17;
                  func_0x000107c5b538();
                  func_0x000107c61180();
                  if (puVar30 == (undefined *)0x0) goto LAB_101c81d60;
                  uVar26 = 0;
                  func_0x000101c83628(0,0x112e0fd80,&PTR_PTR_1126ced58);
                  puVar11 = puVar30;
                  func_0x000107c5fc54(puVar30,uVar26);
                  func_0x000107c61170(puVar30);
                  if ((ulong)puVar11 >> 0x3e == 0) goto LAB_101c81d70;
LAB_101c81adc:
                  puVar30 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar11) {
                    puVar30 = puVar11;
                  }
                  func_0x000107c60480();
                  if (puVar30 != (undefined *)0x0) goto LAB_101c81d80;
LAB_101c81b00:
                  func_0x000107c6142c();
                  puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
                }
                puVar30 = puVar27;
                FUN_101c82f10(puVar27,lVar18);
                func_0x000107c6142c(puVar27);
                func_0x000107c61170(puVar17);
                goto joined_r0x000101c8227c;
              }
              if (puVar30 == (undefined *)0xd) {
                puVar30 = puVar9;
                func_0x000107c5bfc4();
                func_0x000107c61180();
                puVar11 = puVar30;
                func_0x000107c2bcc4();
                func_0x000107c61180();
                func_0x000107c61170(puVar30);
                puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar11 != (undefined *)0x0) {
                  puVar30 = puVar11;
                  func_0x000107c5b538();
                  func_0x000107c61180();
                  uVar26 = 0;
                  func_0x000101c83628(0,0x112e0fd78,&PTR_PTR_1126cbc90);
                  puVar27 = puVar30;
                  func_0x000107c5fc54(puVar30,uVar26);
                  func_0x000107c61170(puVar30);
                  if ((ulong)puVar27 >> 0x3e == 0) {
                    puVar30 = *(undefined **)(((ulong)puVar27 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar30 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar27) {
                      puVar30 = puVar27;
                    }
                    func_0x000107c60480();
                  }
                  if (puVar30 != (undefined *)0x0) {
                    puVar17 = (undefined *)
                              ((ulong)puVar30 & ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU));
                    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    func_0x0001011bf650(0,puVar17,0);
                    if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c826a0);
                      (*pcVar4)();
                    }
                    puVar31 = (undefined *)0x0;
                    do {
                      puVar12 = puStack_c0;
                      if (((ulong)puVar27 & 0xc000000000000001) == 0) {
                        puVar23 = *(undefined **)(puVar27 + (long)puVar31 * 8 + 0x20);
                        func_0x000107c61174();
                        puVar24 = puVar17;
                      }
                      else {
                        puVar23 = puVar31;
                        puVar24 = puVar27;
                        FUN_101c82d54(puVar31,puVar27,&PTR_PTR_1126cbc90,0x112e0fd78);
                      }
                      func_0x000107c61174();
                      puVar20 = puVar23;
                      func_0x000107c5b2d0();
                      func_0x000107c61180();
                      if (puVar20 == (undefined *)0x0) {
                        func_0x000107c61170(puVar23);
                        func_0x000107c61170(puVar23);
                        puVar19 = (undefined *)0x0;
                        puVar23 = (undefined *)0x0;
                        puVar17 = puVar24;
                      }
                      else {
                        puVar19 = puVar20;
                        func_0x000107c5faec();
                        puVar17 = puVar24;
                        func_0x000107c61170(puVar20);
                        func_0x000107c61170(puVar23);
                        func_0x000107c61170(puVar23);
                        puVar23 = puVar24;
                      }
                      uVar29 = *(ulong *)(puVar12 + 0x10);
                      puVar24 = (undefined *)(uVar29 + 1);
                      puStack_c0 = puVar12;
                      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar29) {
                        puVar17 = puVar24;
                        func_0x0001011bf650(1 < *(ulong *)(puVar12 + 0x18),puVar24,1);
                      }
                      puVar31 = puVar31 + 1;
                      *(undefined **)(puStack_c0 + 0x10) = puVar24;
                      *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x20) = puVar19;
                      *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x28) = puVar23;
                    } while (puVar30 != puVar31);
                    goto LAB_101c81d50;
                  }
                  goto LAB_101c82484;
                }
                goto LAB_101c82498;
              }
              if (puVar30 != (undefined *)0xe) goto LAB_101c824bc;
              puVar30 = puVar9;
              func_0x000107c5bfc4();
              func_0x000107c61180();
              puVar17 = puVar30;
              func_0x000107c2bcd0();
              func_0x000107c61180();
              func_0x000107c61170(puVar30);
              if (puVar17 == (undefined *)0x0) {
LAB_101c82014:
                puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_101c818a4;
LAB_101c82024:
                puVar30 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
                if (puVar30 != (undefined *)0x0) goto LAB_101c82030;
                goto LAB_101c8223c;
              }
              puVar30 = puVar17;
              func_0x000107c5b538();
              func_0x000107c61180();
              if (puVar30 == (undefined *)0x0) goto LAB_101c82014;
              uVar26 = 0;
              func_0x000101c83628(0,0x112e0fd78,&PTR_PTR_1126cbc90);
              puVar11 = puVar30;
              func_0x000107c5fc54(puVar30,uVar26);
              func_0x000107c61170(puVar30);
              if ((ulong)puVar11 >> 0x3e == 0) goto LAB_101c82024;
LAB_101c818a4:
              puVar30 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar11) {
                puVar30 = puVar11;
              }
              func_0x000107c60480();
              if (puVar30 == (undefined *)0x0) goto LAB_101c8223c;
LAB_101c82030:
              puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
              uVar29 = (ulong)puVar30 & ((long)puVar30 >> 0x3f ^ 0xffffffffffffffffU);
              func_0x0001011bf650(0,uVar29,0);
              if ((long)puVar30 < 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x101c8269c);
                (*pcVar4)();
              }
              if (((ulong)puVar11 & 0xc000000000000001) == 0) {
                plVar28 = (long *)(puVar11 + 0x20);
                do {
                  puVar27 = puStack_c0;
                  lVar16 = *plVar28;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  lVar15 = lVar16;
                  func_0x000107c5b2d0();
                  func_0x000107c61180();
                  if (lVar15 == 0) {
                    func_0x000107c61170(lVar16);
                    func_0x000107c61170(lVar16);
                    lVar21 = 0;
                    uVar25 = 0;
                    uVar8 = uVar29;
                  }
                  else {
                    lVar21 = lVar15;
                    func_0x000107c5faec();
                    uVar8 = uVar29;
                    func_0x000107c61170(lVar15);
                    func_0x000107c61170(lVar16);
                    func_0x000107c61170(lVar16);
                    uVar25 = uVar29;
                  }
                  uVar29 = uVar8;
                  uVar2 = *(ulong *)(puVar27 + 0x10);
                  uVar8 = uVar2 + 1;
                  puStack_c0 = puVar27;
                  if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar2) {
                    uVar29 = uVar8;
                    func_0x0001011bf650(1 < *(ulong *)(puVar27 + 0x18),uVar8,1);
                  }
                  *(ulong *)(puStack_c0 + 0x10) = uVar8;
                  *(long *)(puStack_c0 + uVar2 * 0x10 + 0x20) = lVar21;
                  *(ulong *)(puStack_c0 + uVar2 * 0x10 + 0x28) = uVar25;
                  puVar30 = puVar30 + -1;
                  plVar28 = plVar28 + 1;
                } while (puVar30 != (undefined *)0x0);
              }
              else {
                puVar27 = (undefined *)0x0;
                do {
                  puVar31 = puStack_c0;
                  puVar12 = puVar27;
                  puVar24 = puVar11;
                  FUN_101c82d54(puVar27,puVar11,&PTR_PTR_1126cbc90,0x112e0fd78);
                  puVar23 = puVar12;
                  func_0x000107c615f0();
                  func_0x000107c5b2d0();
                  func_0x000107c61180();
                  if (puVar23 == (undefined *)0x0) {
                    func_0x000107c615ec(puVar12,2);
                    puVar20 = (undefined *)0x0;
                    puVar24 = (undefined *)0x0;
                  }
                  else {
                    puVar20 = puVar23;
                    func_0x000107c5faec();
                    func_0x000107c61170(puVar23);
                    func_0x000107c615ec(puVar12,2);
                  }
                  uVar29 = *(ulong *)(puVar31 + 0x10);
                  puStack_c0 = puVar31;
                  if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar29) {
                    func_0x0001011bf650(1 < *(ulong *)(puVar31 + 0x18),uVar29 + 1,1);
                  }
                  puVar27 = puVar27 + 1;
                  *(ulong *)(puStack_c0 + 0x10) = uVar29 + 1;
                  *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x20) = puVar20;
                  *(undefined **)(puStack_c0 + uVar29 * 0x10 + 0x28) = puVar24;
                } while (puVar30 != puVar27);
              }
              puVar27 = puStack_c0;
              func_0x000107c6142c(puVar11);
LAB_101c82408:
              puVar30 = puVar27;
              FUN_101c82f10(puVar27,lVar18);
              func_0x000107c6142c(puVar27);
              func_0x000107c61170(puVar17);
              if (puVar30 == (undefined *)0x0) goto LAB_101c824bc;
            }
LAB_101c824c4:
            func_0x00010430c134(0);
            func_0x000107c610f8();
            func_0x000107c61174(puVar22);
            func_0x00010430af34(puVar30,puVar22,uVar6,uVar7);
            uVar6 = uStack_f8;
            if (uStack_f8 >> 0x3e != 0) {
              uVar7 = uStack_f8 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uStack_f8) {
                uVar7 = uStack_f8;
              }
              func_0x000107c60480(uVar7);
              uVar6 = 0;
              FUN_101c82984(0,uVar7 + 1,1,uStack_f8,&SUB_10430c134,0x112e0fd38,&UNK_10d9eb000,
                            0x101c82c5c);
            }
            uVar29 = uVar6 & 0xffffffffffffff8;
            uVar7 = *(ulong *)(uVar29 + 0x10);
            uStack_f8 = uVar6;
            if (*(ulong *)(uVar29 + 0x18) >> 1 <= uVar7) {
              uStack_f8 = (ulong)(1 < *(ulong *)(uVar29 + 0x18));
              FUN_101c82984(uStack_f8,uVar7 + 1,1,uVar6,&SUB_10430c134,0x112e0fd38,&UNK_10d9eb000,
                            0x101c82c5c);
              uVar29 = uStack_f8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar29 + 0x10) = uVar7 + 1;
            *(undefined **)(uVar29 + uVar7 * 8 + 0x20) = puVar30;
            func_0x000107c61170(puVar22);
          }
        }
      }
      puVar5 = puVar5 + 1;
      func_0x000107c61170(puVar9);
    } while (puVar5 != puVar1);
  }
  if (uStack_f8 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uStack_f8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uStack_f8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uStack_f8) {
      uVar6 = uStack_f8;
    }
    func_0x000107c60480();
  }
  if (uVar6 != 0) {
    return uStack_f8;
  }
  func_0x000107c6142c(uStack_f8);
  return 0;
}



/* Entry: 101c826ac; end: 101c826b3; -[SCAdDiscoverTileTapContextBuilder upcomingStoriesContextFromStories:] */

void FUN_101c826ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000101c83628(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  FUN_101c8117c(param_3,0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010430c134(0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101c826b4; end: 101c826bb; -[SCAdDiscoverTileTapContextBuilder upcomingStoriesContextFromDiscoverTileTapStories:] */

void FUN_101c826b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000101c83628(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  FUN_101c8117c(param_3,1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010430c134(0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101c826bc; end: 101c8276b;  */

void FUN_101c826bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000101c83628(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  FUN_101c8117c(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010430c134(0);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar1);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101c8276c; end: 101c8280f; -[SCAdDiscoverTileTapContextBuilder adOrganicSignalsFromStories:] */

void FUN_101c8276c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  func_0x000101c83628(0,0x112e0fd70,&PTR_PTR_1126c2098);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000101c8312c();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___s10Foundation4DataVN_110350ae0);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 101c82810; end: 101c82893;  */

void FUN_101c82810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  func_0x000101c83628(0,0x112e0fd90,&PTR_PTR_1126d9770);
  func_0x000107c5fc54(param_4,uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 101c82894; end: 101c828d3;  */

void FUN_101c82894(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c828d4; end: 101c82907;  */

void FUN_101c828d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c82908; end: 101c82917; -[SCAdDiscoverTileTapContextBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c82908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0fd40));
  return;
}



/* Entry: 101c82918; end: 101c82983;  */

void FUN_101c82918(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101c82984; end: 101c82ad7;  */

ulong FUN_101c82984(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c82ad8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101c82ad8(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c82ad4);
      (*pcVar1)();
    }
    (*param_8)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101c82ad8; end: 101c82b63;  */

undefined *
FUN_101c82ad8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_101c82918(param_3,param_4,param_5);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101c82b64; end: 101c82d53;  */

long FUN_101c82b64(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c82c58);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101c82c5c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010430add4(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x00010430add4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c82c54);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101c82d54; end: 101c82f0f;  */

ulong FUN_101c82d54(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c82e38);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c82e3c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000101c83628(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c82f10);
  (*pcVar2)();
}



/* Entry: 101c82f10; end: 101c83417;  */

ulong FUN_101c82f10(long param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  puVar4 = *(undefined **)(param_1 + 0x10);
  if (puVar4 != (undefined *)0x0 && 0 < (long)param_2) {
    if (param_2 <= puVar4) {
      puVar4 = param_2;
    }
    if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
      puVar1 = *(undefined **)
                (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar1 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      func_0x000107c60480();
    }
    if ((long)puVar1 <= (long)puVar4) {
      puVar1 = puVar4;
    }
    uVar2 = 0;
    FUN_101c82984(0,puVar1,0,PTR___swiftEmptyArrayStorage_11034f1c8,&SUB_10430add4,0x112e0fd30,
                  &UNK_10d9eaff0,FUN_101c82b64);
    puVar8 = (ulong *)(param_1 + 0x28);
    do {
      uVar6 = *puVar8;
      if (uVar6 != 0) {
        uVar7 = puVar8[-1];
        uVar3 = uVar7 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar3 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          func_0x00010430add4(0);
          func_0x000107c610f8();
          func_0x000107c61434(uVar6);
          func_0x00010430a7c8(uVar7,uVar6,0);
          uVar6 = uVar2;
          if (uVar2 >> 0x3e != 0) {
            uVar3 = uVar2 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar2) {
              uVar3 = uVar2;
            }
            func_0x000107c60480(uVar3);
            uVar6 = 0;
            FUN_101c82984(0,uVar3 + 1,1,uVar2,&SUB_10430add4,0x112e0fd30,&UNK_10d9eaff0,
                          FUN_101c82b64);
          }
          uVar5 = uVar6 & 0xffffffffffffff8;
          uVar3 = *(ulong *)(uVar5 + 0x10);
          uVar2 = uVar6;
          if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
            uVar2 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
            FUN_101c82984(uVar2,uVar3 + 1,1,uVar6,&SUB_10430add4,0x112e0fd30,&UNK_10d9eaff0,
                          FUN_101c82b64);
            uVar5 = uVar2 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
          *(ulong *)(uVar5 + uVar3 * 8 + 0x20) = uVar7;
        }
      }
      puVar8 = puVar8 + 2;
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined *)0x0);
    if (uVar2 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar6 = uVar2;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      return uVar2;
    }
    func_0x000107c6142c(uVar2);
  }
  return 0;
}



/* Entry: 101c83418; end: 101c83437;  */

void FUN_101c83418(void)

{
  func_0x000107c61168(&PTR_PTR_1127fedd8);
  return;
}



/* Entry: 101c83438; end: 101c8356b;  */

/* WARNING: Possible PIC construction at 0x000101c834c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c83520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c834cc) */
/* WARNING: Removing unreachable block (ram,0x000101c83524) */
/* WARNING: Removing unreachable block (ram,0x000101c834ec) */
/* WARNING: Removing unreachable block (ram,0x000101c8352c) */

void FUN_101c83438(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c3f7f4();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8356c);
    (*pcVar1)();
  }
  uVar2 = 0;
  func_0x000101c83628(0,0x112e0fd98,&PTR_PTR_1126cc728);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c83568);
        (*pcVar1)();
      }
      func_0x000107c61174(*(undefined8 *)(uVar3 + 0x20));
    }
    else {
      FUN_101c82d54(0,uVar3,&PTR_PTR_1126cc728,0x112e0fd98);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101c8356c; end: 101c8358b;  */

void FUN_101c8356c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c8358c; end: 101c835a7;  */

void FUN_101c8358c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c835a8; end: 101c83607;  */

void FUN_101c835a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = plVar3[1];
  *plVar3 = lVar2;
  plVar3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 101c83608; end: 101c83667;  */

void FUN_101c83608(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c83668; end: 101c8366f;  */

void FUN_101c83668(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c83670; end: 101c838bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101c83670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_70 [16];
  
  lVar5 = 0;
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_98 = param_5;
  func_0x000107c5f804();
  lStack_b0 = *(long *)(lVar5 + -8);
  lStack_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0fda0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fda8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fdb0) = param_9;
  puVar6 = PTR_PTR_1126bdc18;
  func_0x000107c610f8();
  func_0x000107c61174();
  uStack_a0 = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  *(undefined8 *)((long)auStack_d0 + lVar5 + 8) = param_8;
  *(undefined8 *)((long)auStack_d0 + lVar5) = param_7;
  uVar2 = uStack_b8;
  uVar1 = uStack_c0;
  func_0x000107c455ec();
  lVar4 = lStack_a8;
  lVar3 = lStack_b0;
  *(undefined **)(unaff_x20 + _DAT_112e0fdb8) = puVar6;
  (**(code **)(lStack_b0 + 0x68))
            ((long)&uStack_c0 + lVar5,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_a8);
  puVar6 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f007ad0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar7);
  (**(code **)(lVar3 + 8))((long)&uStack_c0 + lVar5,lVar4);
  *(undefined **)(unaff_x20 + _DAT_112e0fdc0) = puVar6;
  puVar8 = auStack_70;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  return puVar8;
}



/* Entry: 101c838bc; end: 101c839ff; -[SCAdSpotlightPrefetcher initWithAdProvider:adMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adsPreferencesProvider:grapheneRegistry:lifecycleTracker:contextBuilder:] */

undefined8
FUN_101c838bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_101c84844(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  return uVar1;
}



/* Entry: 101c83a00; end: 101c83b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c83a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = 0;
  func_0x000100029930();
  func_0x000100579dc0();
  uVar2 = uVar1;
  func_0x0001048d812c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
  puVar3 = &UNK_110462b68;
  func_0x000107c613fc(&UNK_110462b68,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110462b90;
  func_0x000107c613fc(&UNK_110462b90,0x51,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000016;
  *(undefined8 *)(puVar4 + 0x28) = 0x800000010f007af0;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  puVar4[0x50] = 0;
  pcStack_60 = FUN_101c84a24;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110462ba8;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101c83b38; end: 101c83b7b; -[SCAdSpotlightPrefetcher prefetchSpotlightAdWithViewLocation:adProductType:] */

void FUN_101c83b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_101c83a00(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c83b7c; end: 101c83d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c83b7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar7 = &puStack_80;
  uVar1 = 0;
  func_0x000100029930();
  func_0x000100579dc0();
  uVar2 = uVar1;
  func_0x0001048d812c();
  func_0x000107c61170(uVar1);
  if (param_3 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar3 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = param_3;
      if (-1 < (long)param_3) {
        uVar3 = param_3 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
      puVar5 = &UNK_110462b68;
      func_0x000107c613fc(&UNK_110462b68,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_110462c30;
      func_0x000107c613fc(&UNK_110462c30,0x38,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = uVar2;
      *(undefined8 *)(puVar6 + 0x20) = param_1;
      *(undefined8 *)(puVar6 + 0x28) = param_2;
      *(ulong *)(puVar6 + 0x30) = param_3;
      pcStack_60 = FUN_101c84a44;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110462c48;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar5 = puStack_58;
      func_0x000107c61434(param_3);
      func_0x000107c61574(puVar5);
      ppuVar7 = ppuVar4;
      goto LAB_101c83d6c;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
  puVar5 = &UNK_110462b68;
  func_0x000107c613fc(&UNK_110462b68,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_110462be0;
  func_0x000107c613fc(&UNK_110462be0,0x51,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000016;
  *(undefined8 *)(puVar6 + 0x28) = 0x800000010f007af0;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  *(undefined8 *)(puVar6 + 0x38) = param_2;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  puVar6[0x50] = 1;
  pcStack_60 = (code *)0x101c84fa8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110462bf8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
LAB_101c83d6c:
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 101c83d98; end: 101c840cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c83d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,uint param_8)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112e0fda0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c5fadc(param_2,param_3);
  uVar4 = param_2;
  func_0x0001063fa06c();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar5 = &UNK_110462d70;
  func_0x000107c613fc(&UNK_110462d70,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  *(long *)(puVar5 + 0x20) = lVar8;
  if (param_6 != 0) {
    if (param_6 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_6;
      if (-1 < (long)param_6) {
        uVar6 = param_6 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) goto LAB_101c83e88;
  }
  param_6 = 0;
LAB_101c83e88:
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdb8);
  puStack_68 = puVar5;
  if ((param_8 & 1) == 0) {
    if (param_7 != 0) {
      func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
    }
    if (param_6 != 0) {
      uVar7 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(param_6,uVar7);
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112e0fdc0);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c840cc);
      (*pcVar2)();
    }
    pcStack_70 = FUN_101c84df8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1018c5918;
    puStack_78 = &UNK_110462d88;
    ppuVar9 = &puStack_90;
    func_0x000107c60bc4();
    puVar1 = puStack_68;
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c4ece4(uVar10);
  }
  else {
    if (param_7 != 0) {
      func_0x000107c5fc48(param_7,PTR___s10Foundation4DataVN_110350ae0);
    }
    if (param_6 != 0) {
      uVar7 = 0;
      func_0x00010430c134(0);
      func_0x000107c5fc48(param_6,uVar7);
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112e0fdc0);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c840c8);
      (*pcVar2)();
    }
    pcStack_70 = FUN_101c84df8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1018c5918;
    puStack_78 = &UNK_110462db0;
    ppuVar9 = &puStack_90;
    func_0x000107c60bc4();
    puVar1 = puStack_68;
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c423d8(uVar10);
  }
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 101c840cc; end: 101c84143; -[SCAdSpotlightPrefetcher prefetchSpotlightAdWithViewLocation:adProductType:upcomingStories:] */

void FUN_101c840cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (param_5 != 0) {
    uVar1 = 0;
    func_0x000101c84db4(0);
    func_0x000107c5fc54(param_5,uVar1);
  }
  func_0x000107c61174(param_1);
  FUN_101c83b7c(param_3,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 101c84144; end: 101c84277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c84144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = 0;
  func_0x000100029930();
  func_0x000100579dc0();
  uVar2 = uVar1;
  func_0x0001048d812c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
  puVar3 = &UNK_110462b68;
  func_0x000107c613fc(&UNK_110462b68,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110462c80;
  func_0x000107c613fc(&UNK_110462c80,0x51,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  puVar4[0x50] = 0;
  uStack_60 = 0x101c84fac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110462c98;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101c84278; end: 101c842eb; -[SCAdSpotlightPrefetcher prefetchContentInterstitialAdWithInventoryType:viewLocation:adProductType:] */

void FUN_101c84278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c84144(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c842ec; end: 101c8442f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c842ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar1 = 0;
  func_0x000100029930();
  func_0x000100579dc0();
  uVar2 = uVar1;
  func_0x0001048d812c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
  puVar3 = &UNK_110462b68;
  func_0x000107c613fc(&UNK_110462b68,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110462cd0;
  func_0x000107c613fc(&UNK_110462cd0,0x48,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  *(undefined8 *)(puVar4 + 0x40) = param_5;
  uStack_70 = 0x101c84c18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110462ce8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101c84430; end: 101c844cf; -[SCAdSpotlightPrefetcher prefetchContentInterstitialAdWithInventoryType:viewLocation:adProductType:upcomingStoriesContext:] */

/* WARNING: Possible PIC construction at 0x000101c844b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c844b8) */

void FUN_101c84430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x00010430c134(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c61174(param_1);
  FUN_101c842ec(param_3,param_2,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c844d0; end: 101c84627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c844d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar1 = 0;
  func_0x000100029930();
  func_0x000100579dc0();
  uVar2 = uVar1;
  func_0x0001048d812c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e0fdc0);
  puVar3 = &UNK_110462b68;
  func_0x000107c613fc(&UNK_110462b68,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110462d20;
  func_0x000107c613fc(&UNK_110462d20,0x51,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  *(undefined8 *)(puVar4 + 0x40) = param_5;
  *(undefined8 *)(puVar4 + 0x48) = param_6;
  puVar4[0x50] = 1;
  uStack_70 = 0x101c84fb0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110462d38;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar1);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 101c84628; end: 101c847a7; -[SCAdSpotlightPrefetcher prefetchContentInterstitialAdWithInventoryType:viewLocation:adProductType:upcomingStoriesContext:adOrganicSignals:] */

/* WARNING: Possible PIC construction at 0x000101c846d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c846d4) */

void FUN_101c84628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x00010430c134(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  if (param_7 != 0) {
    func_0x000107c5fc54(param_7,PTR___s10Foundation4DataVN_110350ae0);
  }
  func_0x000107c61174(param_1);
  FUN_101c844d0(param_3,param_2,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c847a8; end: 101c847db;  */

void FUN_101c847a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c847dc; end: 101c84843; -[SCAdSpotlightPrefetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c847f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c84818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c847fc) */
/* WARNING: Removing unreachable block (ram,0x000101c8481c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c847dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0fdb8));
  return;
}



/* Entry: 101c84844; end: 101c84a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c84844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_98 = param_8;
  uStack_90 = param_7;
  uStack_88 = param_5;
  uStack_80 = param_6;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112e0fda0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fda8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e0fdb0) = param_9;
  puVar3 = PTR_PTR_1126bdc18;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_9);
  *(undefined8 *)((long)auStack_b0 + lVar1 + 8) = uStack_98;
  *(undefined8 *)((long)auStack_b0 + lVar1) = uStack_90;
  func_0x000107c455ec();
  *(undefined **)(unaff_x20 + _DAT_112e0fdb8) = puVar3;
  (**(code **)(lVar5 + 0x68))
            (auStack_a0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f007ad0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))(auStack_a0 + lVar1,lVar2);
  *(undefined **)(unaff_x20 + _DAT_112e0fdc0) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c84a24; end: 101c84a43;  */

void FUN_101c84a24(void)

{
  long unaff_x20;
  
  func_0x000101c846f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101c84a44; end: 101c84d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c84a44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + _DAT_112e0fdb0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar10 = 0;
      lVar11 = 0;
    }
    else {
      uVar6 = 0;
      func_0x000101c84db4(0);
      func_0x000107c615f0(lVar5);
      uVar7 = uVar9;
      func_0x000107c5fc48(uVar9,uVar6);
      lVar10 = lVar5;
      func_0x000107c5d3c0();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c615e8(lVar5);
      if (lVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar7 = 0;
        func_0x00010430c134(0);
        lVar11 = lVar10;
        func_0x000107c5fc54(lVar10,uVar7);
        func_0x000107c61170(lVar10);
      }
      func_0x000107c615f0(lVar5);
      func_0x000107c5fc48(uVar9,uVar6);
      lVar8 = lVar5;
      func_0x000107c3d38c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(lVar5);
      if (lVar8 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = lVar8;
        func_0x000107c5fc54(lVar8,PTR___s10Foundation4DataVN_110350ae0);
        func_0x000107c61170(lVar8);
      }
    }
    FUN_101c83d98(uVar2,0xd000000000000016,0x800000010f007af0,uVar1,uVar3,lVar11,lVar10,1);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar11);
  }
  return;
}



/* Entry: 101c84d24; end: 101c84df7;  */

void FUN_101c84d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


