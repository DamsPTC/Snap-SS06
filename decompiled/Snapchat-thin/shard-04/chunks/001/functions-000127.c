/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031a6984; end: 1031a69c3;  */

undefined8 FUN_1031a6984(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1031a69c4; end: 1031a6a47;  */

void FUN_1031a69c4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x40 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031a6a48; end: 1031a6a53;  */

void FUN_1031a6a48(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001031a6a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1031a42e4)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1031a6a54; end: 1031a6ad7;  */

void FUN_1031a6a54(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001031a6a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             unaff_x20 + (uVar2 + 0x40 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1031a6ad8; end: 1031a6af7;  */

/* WARNING: Removing unreachable block (ram,0x0001031a59f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a6ad8(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  if (param_2 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x1a,0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000010;
    uStack_98 = 0x800000010f12c110;
    lVar7 = *(long *)(param_1 + 0x10);
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    alStack_78[0] = lVar7;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x7374706d6f727020,0xe800000000000000);
    func_0x000107c6142c(uStack_98);
    func_0x000106a3aea0(*(undefined8 *)(lVar2 + 0x10),lVar7);
    func_0x000107c61428(lVar5 + 0x10,alStack_78,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      FUN_1031a67e8(lVar5 + _DAT_112f48580,&uStack_a0);
      func_0x000107c61170(lVar5);
      func_0x0001000a8868(&uStack_a0,uStack_88);
      (**(code **)(lStack_80 + 0x10))(param_1,uVar4,uVar3,uStack_88,lStack_80);
      func_0x0001000834e4(&uStack_a0);
    }
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x28,param_2,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000026;
    uStack_98 = 0x800000010f12c130;
    alStack_78[0] = param_2;
    func_0x000107c614b0(param_2);
    uVar4 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(alStack_78,uVar4);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uStack_98);
  }
  (*pcVar1)();
  return;
}



/* Entry: 1031a6af8; end: 1031a6bbf;  */

void FUN_1031a6af8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,lVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + uVar4));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + uVar4 + 0x10));
  lVar1 = unaff_x20 + uVar4 + 0x18;
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x18));
  func_0x00010006c090(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031a6bc0; end: 1031a6bc3;  */

void FUN_1031a6bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_1031a5454(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1],unaff_x20 + uVar3 + 0x18);
  return;
}



/* Entry: 1031a6bc4; end: 1031a6c57;  */

void FUN_1031a6bc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_1031a5454(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1],unaff_x20 + uVar3 + 0x18);
  return;
}



/* Entry: 1031a6c58; end: 1031a6c63;  */

void FUN_1031a6c58(long param_1,long param_2)

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



/* Entry: 1031a6c64; end: 1031a6ca7;  */

void FUN_1031a6c64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031a6ca8; end: 1031a6e1b;  */

void FUN_1031a6ca8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  puVar4 = auStack_f0;
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f12c240);
  uVar3 = param_1;
  func_0x000107c4e60c(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef1b1f0;
  uStack_b8 = 0;
  uStack_b0 = 0x201;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c615f0(uVar3);
  (*pcVar5)(auStack_f0,0xd000000000000012,0x800000010f12c260,&uStack_c8,uVar3,uVar2,lVar1);
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615e8(param_1);
  func_0x000107c615ec(uVar3,2);
  func_0x0001031b3118(0);
  func_0x000107c613fc();
  FUN_1031b3158();
  *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 1031a6e1c; end: 1031a6e3f;  */

void FUN_1031a6e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_7;
  *(undefined8 *)(unaff_x22 + 0x108) = param_8;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031a6e40,0,0);
  return;
}



/* Entry: 1031a6e40; end: 1031a6f73;  */

void FUN_1031a6e40(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar5 = *(long *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_1031ae4fc(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
  func_0x000107c61434(uVar3);
  func_0x000100bcb1dc(unaff_x22 + 0xc0);
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x120) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = uVar6;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  FUN_1031a7478((undefined8 *)(unaff_x22 + 0xd0),0x112d38270,&UNK_10d905a20);
  plVar10 = *(long **)(lVar5 + 0x10);
  *(long *)(unaff_x22 + 0x70) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar7;
  FUN_1031a733c(unaff_x22 + 0x10);
  piVar9 = *(int **)(*plVar10 + 0x78);
  iVar1 = *piVar9;
  plVar10 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1031a6f74;
                    /* WARNING: Could not recover jumptable at 0x0001031a6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))((long *)(unaff_x22 + 0x70),unaff_x22 + 0x10);
  return;
}



/* Entry: 1031a6f74; end: 1031a7023;  */

void FUN_1031a6f74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x130) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x138) = param_3;
    *(undefined8 *)(lVar2 + 0x140) = param_2;
    *(undefined8 *)(lVar2 + 0x148) = param_1;
    FUN_1031a7478(lVar2 + 0x10,0x112d39250,&UNK_10d9d84e0);
    pcVar1 = FUN_1031a7024;
  }
  else {
    FUN_1031a7478(lVar2 + 0x10,0x112d39250,&UNK_10d9d84e0);
    pcVar1 = FUN_1031a70b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1031a7024; end: 1031a70b7;  */

void FUN_1031a7024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(unaff_x22 + 0x100))(uVar3,0);
  func_0x000107c6142c(uVar3);
  func_0x00010006c090(uVar1,uVar6);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar7);
  func_0x00010006c090(uVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001031a70b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1031a70b8; end: 1031a7143;  */

void FUN_1031a70b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  pcVar5 = *(code **)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c6142c(uVar4);
  func_0x00010006c090(uVar2,uVar1);
  func_0x000107c614b0(uVar3);
  (*pcVar5)(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
  func_0x000107c614ac(uVar3);
  func_0x000107c614ac(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001031a7140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1031a7144; end: 1031a7187;  */

void FUN_1031a7144(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031a7188; end: 1031a726b;  */

/* WARNING: Possible PIC construction at 0x0001031a7248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a724c) */

void FUN_1031a7188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  puVar1 = &UNK_11061a500;
  func_0x000107c613fc(&UNK_11061a500,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_6);
  func_0x0001001ca524(0,0,0x5c,4,0,0,&UNK_10db95770,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031a726c; end: 1031a72ff;  */

void FUN_1031a726c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1031a7300;
  plVar7[0x20] = lVar6;
  plVar7[0x21] = lVar8;
  plVar7[0x1e] = lVar5;
  plVar7[0x1f] = lVar3;
  plVar7[0x1c] = lVar4;
  plVar7[0x1d] = lVar2;
  plVar7[0x1b] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031a6e40,0,0);
  return;
}



/* Entry: 1031a7300; end: 1031a733b;  */

void FUN_1031a7300(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001031a7338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1031a733c; end: 1031a7477;  */

void FUN_1031a733c(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [96];
  undefined1 auStack_b0 [96];
  
  func_0x00010448a8f4(auStack_110);
  func_0x00010448aa5c(auStack_b0);
  func_0x000100e19000(auStack_110);
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  puVar5 = auStack_150;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010ef1c330;
  lVar3 = lVar2;
  func_0x000106b7ff80();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    *(long *)(lVar2 + 0x30) = lVar4;
    *(undefined1 **)(lVar2 + 0x38) = puVar5;
    lVar3 = lVar2;
    func_0x0001001830b8(lVar2);
    func_0x000107c61588(lVar2);
    FUN_1031a7478((undefined8 *)(lVar2 + 0x20),0x112d38308,&UNK_10d902040);
    func_0x00010448a92c(&uStack_1b0,lVar3);
    func_0x000107c6142c(lVar3);
    func_0x000100e19000(auStack_b0);
    param_1[5] = uStack_188;
    param_1[4] = uStack_190;
    param_1[7] = uStack_178;
    param_1[6] = uStack_180;
    param_1[9] = uStack_168;
    param_1[8] = uStack_170;
    param_1[0xb] = uStack_158;
    param_1[10] = uStack_160;
    param_1[1] = uStack_1a8;
    *param_1 = uStack_1b0;
    param_1[3] = uStack_198;
    param_1[2] = uStack_1a0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a7478);
  (*pcVar1)();
}



/* Entry: 1031a7478; end: 1031a74b7;  */

undefined8 FUN_1031a7478(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1031a74b8; end: 1031a7c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1031a74b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  lVar3 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + _DAT_112f48738) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f48740) = param_3;
    *(undefined8 *)(unaff_x20 + _DAT_112f48748) = param_7;
    *(undefined8 *)(unaff_x20 + _DAT_112f48750) = param_8;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar4 = param_1;
    func_0x000107c4141c();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x20 + _DAT_112f48758) = uVar4;
    *(undefined8 *)(unaff_x20 + _DAT_112f48760) = param_9;
    *(undefined8 *)(unaff_x20 + _DAT_112f48768) = param_10;
    *(undefined8 *)(unaff_x20 + _DAT_112f48770) = param_11;
    *(undefined8 *)(unaff_x20 + _DAT_112f48778) = param_12;
    func_0x000107c61174(param_9);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar4 = param_6;
    func_0x000107c5cec4();
    func_0x000107c61180();
    lVar5 = 0;
    func_0x0001031a858c();
    lVar3 = lVar5;
    func_0x000107c613fc();
    func_0x0001000285a8(0x112f48780,&UNK_10db95780);
    func_0x000107c613fc();
    pcVar2 = FUN_1031a8448;
    func_0x0001000bdd8c(FUN_1031a8448,0);
    *(code **)(lVar3 + 0x18) = pcVar2;
    puVar6 = &UNK_11061a528;
    func_0x000107c613fc(&UNK_11061a528,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    uVar4 = 0x112f48788;
    func_0x0001000285a8(0x112f48788,&UNK_10db95788);
    func_0x000107c613fc();
    uVar7 = 0x1031a814c;
    func_0x0001000bdd8c(0x1031a814c,puVar6,uVar4);
    *(undefined8 *)(lVar3 + 0x10) = uVar7;
    plVar1 = (long *)(unaff_x20 + _DAT_112f48790);
    plVar1[3] = lVar5;
    plVar1[4] = (long)&PTR_DAT_11061a630;
    *plVar1 = lVar3;
    puVar6 = &UNK_11061a550;
    func_0x000107c613fc(&UNK_11061a550,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_4;
    *(undefined8 *)(puVar6 + 0x18) = param_5;
    func_0x0001000285a8(0x112f48798,&UNK_10db95790);
    func_0x000107c613fc();
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    uVar4 = 0x1031a8154;
    func_0x0001000bdd8c(0x1031a8154,puVar6);
    *(undefined8 *)(unaff_x20 + _DAT_112f487a0) = uVar4;
    puVar6 = &UNK_11061a578;
    func_0x000107c613fc(&UNK_11061a578,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = param_13;
    func_0x0001000285a8(0x112ec94f8,&UNK_10daed0e0);
    func_0x000107c613fc();
    func_0x000107c61174(param_13);
    uVar4 = 0x1031a815c;
    func_0x0001000bdd8c(0x1031a815c,puVar6);
    *(undefined8 *)(unaff_x20 + _DAT_112f487a8) = uVar4;
    puVar8 = auStack_70;
    func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031a7870);
  (*pcVar2)();
}



/* Entry: 1031a7c24; end: 1031a7cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a7c24(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(param_2 + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar4 = 0;
    lVar2 = 0;
    ppuVar3 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000107c615f0();
    func_0x000103e3687c(auStack_58);
    lVar2 = 0;
    func_0x0001031a7168();
    func_0x000107c613fc();
    lVar4 = lVar1;
    FUN_1031a6ca8(lVar1,auStack_58);
    func_0x000107c615e8(lVar1);
    ppuVar3 = &PTR_DAT_11061a4e0;
  }
  *param_1 = lVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)ppuVar3;
  return;
}



/* Entry: 1031a7cdc; end: 1031a7d3b; -[_TtC24ConvoSafetyPromptFeature17CSPPluginProvider init] */

void FUN_1031a7cdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoSafetyPromptFeature.CSPPluginProvider",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a7d08);
  (*pcVar1)();
}



/* Entry: 1031a7d3c; end: 1031a7e13; -[_TtC24ConvoSafetyPromptFeature17CSPPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031a7df8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031a7dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a7d3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f48738));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48740));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48750));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f48758));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48760));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48768));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48770));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f48778));
  func_0x0001000834e4(param_1 + _DAT_112f48790);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f487a0));
  return;
}



/* Entry: 1031a7e14; end: 1031a7e1b; -[_TtC24ConvoSafetyPromptFeature17CSPPluginProvider providerType] */

undefined8 FUN_1031a7e14(void)

{
  return 2;
}



/* Entry: 1031a7e1c; end: 1031a7e87;  */

void FUN_1031a7e1c(undefined8 *param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1031a7e88(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1031a7e88; end: 1031a80cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a7e88(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f48760);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f48748);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f48750);
  func_0x000107c3cfe0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f48758);
  func_0x000107c41414();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f48768);
  func_0x000107c5b4a8();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f48770);
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar3 = _DAT_112f48790;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f487a8);
  lVar10 = 0;
  FUN_1031aaae4();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar4 = _DAT_112f48900;
  func_0x0001000285a8(0x112f48780,&UNK_10db95780);
  func_0x000107c613fc();
  pcVar12 = FUN_1031aa970;
  func_0x0001000bdd8c(FUN_1031aa970,0);
  *(code **)(lVar11 + lVar4) = pcVar12;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112f48908);
  func_0x0001031a8424(&uStack_e8);
  puVar1[5] = uStack_c0;
  puVar1[4] = uStack_c8;
  puVar1[7] = uStack_b0;
  puVar1[6] = uStack_b8;
  puVar1[1] = uStack_e0;
  *puVar1 = uStack_e8;
  puVar1[3] = uStack_d0;
  puVar1[2] = uStack_d8;
  puVar1[0xd] = uStack_80;
  puVar1[0xc] = uStack_88;
  puVar1[0xf] = uStack_70;
  puVar1[0xe] = uStack_78;
  puVar1[9] = uStack_a0;
  puVar1[8] = uStack_a8;
  puVar1[0xb] = uStack_90;
  puVar1[10] = uStack_98;
  *(undefined8 *)(lVar11 + _DAT_112f48910) = 0;
  *(undefined8 *)(lVar11 + _DAT_112f488c0) = uVar14;
  *(undefined8 *)(lVar11 + _DAT_112f488c8) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112f488d0) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112f488d8) = uVar7;
  *(undefined8 *)(lVar11 + _DAT_112f488e0) = uVar8;
  *(undefined8 *)(lVar11 + _DAT_112f488e8) = uVar9;
  FUN_1031a67e8(unaff_x20 + lVar3,lVar11 + _DAT_112f488f0);
  *(undefined8 *)(lVar11 + _DAT_112f488f8) = uVar15;
  puVar2 = PTR_s_init_1125d9248;
  lStack_f8 = lVar11;
  lStack_f0 = lVar10;
  func_0x000107c61174(uVar14);
  func_0x000107c6157c(uVar15);
  plVar13 = &lStack_f8;
  func_0x000107c61154(plVar13,puVar2);
  param_1[3] = lVar10;
  param_1[4] = (long)&PTR_DAT_11061a948;
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1031a80d0; end: 1031a8143; -[_TtC24ConvoSafetyPromptFeature17CSPPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031a80d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1031a81a0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031a8144; end: 1031a815f; -[_TtC24ConvoSafetyPromptFeature17CSPPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031a8144(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031a8160; end: 1031a819f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a8160(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1031a81a0; end: 1031a83fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031a81a0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lStack_70;
  long lStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f48738);
  uVar7 = 0x112d3b7d0;
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x0001000b637c(param_1,uVar7);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f48740);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  lVar3 = _DAT_112f48790;
  if (lVar5 != 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f487a0);
    puVar6 = &UNK_11061a618;
    func_0x000107c613fc(&UNK_11061a618,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x112f487d8;
    func_0x0001000285a8(0x112f487d8,&UNK_10db957c0);
    func_0x000107c613fc();
    pcVar4 = FUN_1031a841c;
    func_0x0001000bdd8c(FUN_1031a841c,puVar6,uVar7);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f48778);
    func_0x000107c4cdb8();
    func_0x000107c61180();
    lVar8 = 0;
    FUN_1031a676c();
    lVar9 = lVar8;
    func_0x000107c610f8();
    lVar2 = _DAT_112f48598;
    func_0x0001000285a8(0x112f48780,&UNK_10db95780);
    func_0x000107c613fc();
    pcVar10 = FUN_1031a3824;
    func_0x0001000bdd8c(FUN_1031a3824,0);
    *(code **)(lVar9 + lVar2) = pcVar10;
    lVar2 = _DAT_112f485a0;
    uVar11 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar9 + lVar2) = uVar11;
    puVar1 = (undefined8 *)(lVar9 + _DAT_112f485a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61614(lVar9 + _DAT_112f485b0,0);
    *(undefined8 *)(lVar9 + _DAT_112f48560) = uVar12;
    *(undefined8 *)(lVar9 + _DAT_112f48568) = param_1;
    *(long *)(lVar9 + _DAT_112f48570) = lVar5;
    *(undefined8 *)(lVar9 + _DAT_112f48578) = uVar13;
    FUN_1031a67e8(unaff_x20 + lVar3,lVar9 + _DAT_112f48580);
    *(code **)(lVar9 + _DAT_112f48588) = pcVar4;
    *(undefined8 *)(lVar9 + _DAT_112f48590) = uVar7;
    puVar6 = PTR_s_init_1125d9248;
    lStack_70 = lVar9;
    lStack_68 = lVar8;
    func_0x000107c615f0(uVar12);
    func_0x000107c6157c(uVar13);
    func_0x000107c61154(&lStack_70,puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1031a83fc);
  (*pcVar4)();
}



/* Entry: 1031a83fc; end: 1031a841b;  */

void FUN_1031a83fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128bea28);
  return;
}



/* Entry: 1031a841c; end: 1031a8447;  */

void FUN_1031a841c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1031a7e88(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1031a8448; end: 1031a8493;  */

void FUN_1031a8448(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x0001031a6c88();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126acd40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1031a8494; end: 1031a855f;  */

void FUN_1031a8494(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    func_0x000107c614e8();
    func_0x000107c615f0(param_2);
    uVar1 = 0x61735f6f766e6f63;
    func_0x000107c5fadc(0x61735f6f766e6f63,0xef62642e79746566);
    lVar2 = param_2;
    func_0x000107c5cecc();
    func_0x000107c61180();
    func_0x000107c615ec(param_2,2);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1031a8560; end: 1031a85ab;  */

void FUN_1031a8560(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031a85ac; end: 1031a85bf;  */

bool FUN_1031a85ac(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1031a85c0; end: 1031a866b;  */

void FUN_1031a85c0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031a866c; end: 1031a867b;  */

void FUN_1031a866c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1031a867c; end: 1031a8757;  */

void FUN_1031a867c(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long alStack_60 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  puVar1 = param_1;
  func_0x0001000d224c(alStack_60);
  if (alStack_60[0] == 0) {
    func_0x0001031aa2e0();
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    uVar2 = 0;
    puStack_50 = param_1;
    uStack_48 = param_2;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    FUN_1031ac8e8(auStack_38,0,0,0x1031aa76c,alStack_60,alStack_60[0],uVar2,PTR___sSiN_11034deb0);
    func_0x000107c61170(alStack_60[0]);
  }
  return;
}



/* Entry: 1031a8758; end: 1031a883b;  */

void FUN_1031a8758(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long alStack_70 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = param_1;
  func_0x0001000d224c(alStack_70);
  if (alStack_70[0] == 0) {
    func_0x0001031aa2e0();
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    uVar2 = 0;
    puStack_60 = param_1;
    uStack_58 = param_2;
    uStack_50 = param_3;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    FUN_1031acfe4(0,0,FUN_1031aa95c,alStack_70,alStack_70[0],uVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(alStack_70[0]);
  }
  return;
}



/* Entry: 1031a883c; end: 1031a893b;  */

void FUN_1031a883c(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_70 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_38 [8];
  
  puVar1 = param_1;
  func_0x0001000d224c(alStack_70);
  if (alStack_70[0] == 0) {
    func_0x0001031aa2e0();
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    uVar2 = 0;
    puStack_60 = param_1;
    uStack_58 = param_2;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    uVar3 = 0x112f48898;
    func_0x0001000285a8(0x112f48898,&UNK_10db95820);
    FUN_1031ac8e8(auStack_38,0,0,FUN_1031aa750,alStack_70,alStack_70[0],uVar2,uVar3);
    func_0x000107c61170(alStack_70[0]);
  }
  return;
}



/* Entry: 1031a893c; end: 1031a8e17;  */

void FUN_1031a893c(undefined8 *param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined *puStack_198;
  undefined8 ***apppuStack_178 [11];
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000106a39574(param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  ppppuVar4 = (undefined8 ****)0x0;
  FUN_1031aa6b0(0,0x112f488a0,&PTR_PTR_1126cfde0);
  ppppuVar5 = param_2;
  func_0x000107c5fc54();
  func_0x000107c61170(param_2);
  if ((ulong)ppppuVar5 >> 0x3e == 0) {
    ppppuVar17 = *(undefined8 *****)(((ulong)ppppuVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppppuVar17 = (undefined8 ****)((ulong)ppppuVar5 & 0xffffffffffffff8);
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar5) {
      ppppuVar17 = ppppuVar5;
    }
    func_0x000107c60480();
  }
  if (ppppuVar17 == (undefined8 ****)0x0) {
    func_0x000107c6142c(ppppuVar5);
  }
  else {
    if ((long)ppppuVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031a8e18);
      (*pcVar3)();
    }
    ppppuVar18 = (undefined8 ****)0x0;
    puStack_198 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)ppppuVar5 & 0xc000000000000001) == 0) {
        ppppuVar7 = (undefined8 ****)ppppuVar5[(long)ppppuVar18 + 4];
        func_0x000107c61174();
      }
      else {
        ppppuVar7 = ppppuVar18;
        ppppuVar4 = ppppuVar5;
        FUN_1031aa368(ppppuVar18,ppppuVar5,&PTR_PTR_1126cfde0,0x112f488a0);
      }
      uStack_a8 = 0;
      pppuStack_a0 = (undefined8 ****)0x0;
      uStack_98 = 1;
      pppuStack_90 = (undefined8 ****)0x0;
      uStack_88 = 1;
      uStack_78 = 0xc000000000000000;
      uStack_80 = 0;
      ppppuVar6 = ppppuVar7;
      func_0x000106a3a510();
      func_0x000107c61180();
      ppppuVar8 = ppppuVar6;
      func_0x000107c5faec();
      ppppuVar15 = ppppuVar4;
      func_0x000107c61170(ppppuVar6);
      ppppuVar6 = ppppuVar7;
      pppuStack_c8 = ppppuVar8;
      pppuStack_c0 = ppppuVar4;
      func_0x000106a3a51c();
      func_0x000107c61180();
      ppppuVar4 = ppppuVar6;
      func_0x000107c5faec();
      ppppuVar8 = ppppuVar15;
      func_0x000107c61170(ppppuVar6);
      uVar10 = (uint)ppppuVar8;
      ppppuVar6 = ppppuVar7;
      pppuStack_b8 = ppppuVar4;
      pppuStack_b0 = ppppuVar15;
      func_0x000106a3a528();
      func_0x0001031ae35c();
      if ((uVar10 & 0xff00) == 0x100) {
LAB_1031a8a3c:
        pppuStack_120 = (undefined8 ****)0x0;
        pppuStack_118 = (undefined8 ****)0xe000000000000000;
        func_0x000107c602fc(0x42);
        uVar12 = 0x800000010f12c350;
        func_0x000107c5fb78(0xd000000000000024,0x800000010f12c350);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a510(ppppuVar7);
        func_0x000107c61180();
        ppppuVar6 = ppppuVar4;
        func_0x000107c5faec();
        func_0x000107c61170(ppppuVar4);
        func_0x000107c5fb78(ppppuVar6,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c5fb78(0x72616d697270202c,0xeb00000000203a79);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a528();
        puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar9 = PTR___sSiN_11034deb0;
        puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        apppuStack_178[0] = ppppuVar4;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x646e6f636573202c,0xed0000203a797261);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a534();
        apppuStack_178[0] = ppppuVar4;
        func_0x000107c6057c(puVar9,puVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar14);
        func_0x000107c6142c(pppuStack_118);
        func_0x0001000d224c(&pppuStack_120);
        pppuVar2 = pppuStack_120;
        pppuVar16 = (undefined8 ***)pppuStack_120[2];
        ppppuVar6 = (undefined8 ****)0x6f635f6573726170;
        func_0x000107c5fadc(0x6f635f6573726170,0xec0000006769666e);
        ppppuVar4 = ppppuVar6;
        func_0x000106a3af90(pppuVar16,ppppuVar6,1);
        func_0x000107c61574(pppuVar2);
        func_0x000107c61170(ppppuVar7);
        func_0x000107c61170(ppppuVar6);
      }
      else {
        ppppuVar8 = ppppuVar7;
        uVar11 = uVar10;
        func_0x000106a3a534();
        func_0x0001031ae35c();
        if ((uVar11 & 0xff00) == 0x100) goto LAB_1031a8a3c;
        uStack_98 = (undefined1)uVar10;
        uStack_88 = (undefined1)uVar11;
        uStack_d0 = uStack_78;
        pppuStack_118 = pppuStack_c0;
        pppuStack_120 = pppuStack_c8;
        pppuStack_108 = pppuStack_b0;
        pppuStack_110 = pppuStack_b8;
        uStack_f0 = CONCAT71(uStack_97,uStack_98);
        uStack_100 = uStack_a8;
        uStack_e0 = CONCAT71(uStack_87,uStack_88);
        uStack_d8 = uStack_80;
        ppppuVar4 = apppuStack_178;
        pppuStack_f8 = ppppuVar6;
        pppuStack_e8 = ppppuVar8;
        pppuStack_a0 = ppppuVar6;
        pppuStack_90 = ppppuVar8;
        FUN_1031a68dc(&pppuStack_120);
        puVar9 = puStack_198;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          ppppuVar4 = (undefined8 ****)(*(long *)(puStack_198 + 0x10) + 1);
          puStack_198 = (undefined *)0x0;
          FUN_1031aa558(0,ppppuVar4,1);
        }
        uVar1 = *(ulong *)(puStack_198 + 0x10);
        ppppuVar6 = (undefined8 ****)(uVar1 + 1);
        if (*(ulong *)(puStack_198 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_198 + 0x18));
          ppppuVar4 = ppppuVar6;
          FUN_1031aa558(puVar9,ppppuVar6,1,puStack_198);
          puStack_198 = puVar9;
        }
        *(undefined8 *****)(puStack_198 + 0x10) = ppppuVar6;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x28) = pppuStack_118;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x20) = pppuStack_120;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x38) = pppuStack_108;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x30) = pppuStack_110;
        *(undefined8 *)(puStack_198 + uVar1 * 0x58 + 0x70) = uStack_d0;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x58) = pppuStack_e8;
        *(undefined8 *)(puStack_198 + uVar1 * 0x58 + 0x50) = uStack_f0;
        *(undefined8 *)(puStack_198 + uVar1 * 0x58 + 0x68) = uStack_d8;
        *(undefined8 *)(puStack_198 + uVar1 * 0x58 + 0x60) = uStack_e0;
        *(undefined8 ****)(puStack_198 + uVar1 * 0x58 + 0x48) = pppuStack_f8;
        *(undefined8 *)(puStack_198 + uVar1 * 0x58 + 0x40) = uStack_100;
        func_0x000107c61170(ppppuVar7);
        *param_1 = puStack_198;
      }
      FUN_1031aa524(&pppuStack_c8);
      ppppuVar18 = (undefined8 ****)((long)ppppuVar18 + 1);
    } while (ppppuVar17 != ppppuVar18);
    func_0x000107c6142c(ppppuVar5);
  }
  return;
}



/* Entry: 1031a8e18; end: 1031a9167;  */

/* WARNING: Removing unreachable block (ram,0x0001031a8eb0) */

void FUN_1031a8e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(alStack_80);
  if (alStack_80[0] != 0) {
    uVar1 = 0;
    uStack_70 = param_1;
    uStack_68 = param_2;
    uStack_60 = param_3;
    uStack_58 = param_4;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    FUN_1031acfe4(0,0,0x1031aa2bc,alStack_80,alStack_80[0],uVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(alStack_80[0]);
  }
  return;
}



/* Entry: 1031a9168; end: 1031a91e7;  */

void FUN_1031a9168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  (*param_6)(param_1,param_2,param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1031a91e8; end: 1031a92bb;  */

void FUN_1031a91e8(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long alStack_50 [2];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x0001000d224c(alStack_50);
  if (alStack_50[0] == 0) {
    func_0x0001031aa2e0();
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    uVar2 = 0;
    puStack_40 = param_1;
    uStack_38 = param_2;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    FUN_1031acfe4(0,0,FUN_1031aa6f0,alStack_50,alStack_50[0],uVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(alStack_50[0]);
  }
  return;
}



/* Entry: 1031a92bc; end: 1031a9417;  */

void FUN_1031a92bc(undefined1 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    func_0x0001031aa2e0();
    puVar4 = &UNK_11061a848;
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    (*param_3)();
    func_0x000107c614ac(puVar4);
  }
  else {
    puVar4 = &UNK_11061a788;
    func_0x000107c613fc(&UNK_11061a788,0x20,7);
    *(undefined1 **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    puVar2 = &UNK_11061a7b0;
    func_0x000107c613fc(&UNK_11061a7b0,0x20,7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    uVar3 = 0;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_4);
    FUN_1031ad424(0xd000000000000019,0x800000010f12c3a0,FUN_1031aa944,puVar4,FUN_1031aa958,puVar2,
                  lStack_58,uVar3,PTR___sSiN_11034deb0);
    func_0x000107c61170(lStack_58);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1031a9418; end: 1031a9577;  */

void FUN_1031a9418(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  func_0x000107c5fadc(param_3,param_4);
  func_0x000106a39818(param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = 0;
  FUN_1031aa6b0(0,0x112f488b0,&PTR_PTR_1126cfde8);
  puVar3 = param_2;
  func_0x000107c5fc54(param_2,uVar2);
  func_0x000107c61170(param_2);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar5 = *(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      puVar5 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c6142c();
    func_0x0001031aa2e0();
    func_0x000107c613f8(&UNK_11061a848,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
  }
  else {
    if (((ulong)puVar3 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031a9578);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(puVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = 0;
      FUN_1031aa368(0,puVar3,&PTR_PTR_1126cfde8,0x112f488b0);
    }
    func_0x000107c6142c(puVar3);
    uVar4 = uVar2;
    func_0x000106a3a964();
    func_0x000107c61170(uVar2);
    *param_1 = uVar4;
  }
  return;
}



/* Entry: 1031a9578; end: 1031a96e7;  */

void FUN_1031a9578(undefined1 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    func_0x0001031aa2e0();
    puVar4 = &UNK_11061a848;
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    (*param_4)();
    func_0x000107c614ac(puVar4);
  }
  else {
    puVar4 = &UNK_11061a738;
    func_0x000107c613fc(&UNK_11061a738,0x28,7);
    *(undefined1 **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    puVar2 = &UNK_11061a760;
    func_0x000107c613fc(&UNK_11061a760,0x20,7);
    *(code **)(puVar2 + 0x10) = param_4;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    uVar3 = 0;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    func_0x000107c61434(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(param_5);
    FUN_1031ad7f0(0xd000000000000015,0x800000010f12c380,FUN_1031aa67c,puVar4,0x1031aa698,puVar2,
                  lStack_58,uVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lStack_58);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1031a96e8; end: 1031a9947;  */

void FUN_1031a96e8(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = *(long *)(param_3 + 0x10);
  if (lVar16 != 0) {
    puVar17 = (undefined8 *)(param_3 + 0x38);
    do {
      uVar12 = puVar17[-3];
      uVar2 = puVar17[-2];
      uVar11 = puVar17[-1];
      uVar3 = *puVar17;
      iVar5 = *(int *)(puVar17 + 1);
      iVar6 = *(int *)((long)puVar17 + 0xc);
      uVar15 = puVar17[2];
      uVar14 = puVar17[4];
      uVar1 = puVar17[6];
      uVar4 = puVar17[7];
      func_0x000107c61434(uVar2);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar1,uVar4);
      uVar9 = param_4;
      func_0x000107c5fadc(param_4,param_5);
      uVar10 = uVar12;
      func_0x000107c5fadc(uVar12,uVar2);
      func_0x000107c5fadc(uVar11,uVar3);
      func_0x000106a399c0(param_2,uVar9,uVar10,uVar11,uVar15,uVar14,(long)iVar5,(long)iVar6);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar11);
      uVar11 = param_4;
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c5fadc(uVar12,uVar2);
      func_0x000106a39bb4(param_2,uVar11,uVar12);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar12);
      func_0x00010006c090(uVar1,uVar4);
      puVar17 = puVar17 + 0xb;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5eea0(&stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar13 + 8))
            (&stack0xffffffffffffff40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar8);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1031a9940);
    (*pcVar7)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1031a9944);
    (*pcVar7)();
  }
  if (param_1 < 9.223372036854776e+18) {
    func_0x000106a39d18(param_2,param_4,(long)param_1);
    func_0x000107c61170(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1031a9948);
  (*pcVar7)();
}



/* Entry: 1031a9948; end: 1031a9ac3;  */

void FUN_1031a9948(undefined1 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    func_0x0001031aa2e0();
    puVar4 = &UNK_11061a848;
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    (*param_3)();
    func_0x000107c614ac(puVar4);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = &UNK_11061a6e8;
    func_0x000107c613fc(&UNK_11061a6e8,0x28,7);
    *(undefined1 **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    puVar2 = &UNK_11061a710;
    func_0x000107c613fc(&UNK_11061a710,0x20,7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    uVar3 = 0;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    func_0x000107c6157c(uVar5);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_4);
    uVar5 = 0x112f48898;
    func_0x0001000285a8(0x112f48898,&UNK_10db95820);
    FUN_1031ad424(0xd000000000000016,0x800000010f12c330,0x1031aa320,puVar4,FUN_1031aa33c,puVar2,
                  lStack_58,uVar3,uVar5);
    func_0x000107c61170(lStack_58);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1031a9ac4; end: 1031a9f97;  */

void FUN_1031a9ac4(undefined8 *param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined *puStack_1a0;
  undefined8 ***apppuStack_178 [11];
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000106a39574(param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  ppppuVar4 = (undefined8 ****)0x0;
  FUN_1031aa6b0(0,0x112f488a0,&PTR_PTR_1126cfde0);
  ppppuVar5 = param_2;
  func_0x000107c5fc54();
  func_0x000107c61170(param_2);
  if ((ulong)ppppuVar5 >> 0x3e == 0) {
    ppppuVar17 = *(undefined8 *****)(((ulong)ppppuVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppppuVar17 = (undefined8 ****)((ulong)ppppuVar5 & 0xffffffffffffff8);
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar5) {
      ppppuVar17 = ppppuVar5;
    }
    func_0x000107c60480();
  }
  if (ppppuVar17 == (undefined8 ****)0x0) {
    func_0x000107c6142c(ppppuVar5);
  }
  else {
    if ((long)ppppuVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031a9f98);
      (*pcVar3)();
    }
    ppppuVar18 = (undefined8 ****)0x0;
    puStack_1a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (((ulong)ppppuVar5 & 0xc000000000000001) == 0) {
        ppppuVar7 = (undefined8 ****)ppppuVar5[(long)ppppuVar18 + 4];
        func_0x000107c61174();
      }
      else {
        ppppuVar7 = ppppuVar18;
        ppppuVar4 = ppppuVar5;
        FUN_1031aa368(ppppuVar18,ppppuVar5,&PTR_PTR_1126cfde0,0x112f488a0);
      }
      uStack_a8 = 0;
      pppuStack_a0 = (undefined8 ****)0x0;
      uStack_98 = 1;
      pppuStack_90 = (undefined8 ****)0x0;
      uStack_88 = 1;
      uStack_78 = 0xc000000000000000;
      uStack_80 = 0;
      ppppuVar6 = ppppuVar7;
      func_0x000106a3a510();
      func_0x000107c61180();
      ppppuVar8 = ppppuVar6;
      func_0x000107c5faec();
      ppppuVar15 = ppppuVar4;
      func_0x000107c61170(ppppuVar6);
      ppppuVar6 = ppppuVar7;
      pppuStack_c8 = ppppuVar8;
      pppuStack_c0 = ppppuVar4;
      func_0x000106a3a51c();
      func_0x000107c61180();
      ppppuVar4 = ppppuVar6;
      func_0x000107c5faec();
      ppppuVar8 = ppppuVar15;
      func_0x000107c61170(ppppuVar6);
      uVar10 = (uint)ppppuVar8;
      ppppuVar6 = ppppuVar7;
      pppuStack_b8 = ppppuVar4;
      pppuStack_b0 = ppppuVar15;
      func_0x000106a3a528();
      func_0x0001031ae35c();
      if ((uVar10 & 0xff00) == 0x100) {
LAB_1031a9bbc:
        pppuStack_120 = (undefined8 ****)0x0;
        pppuStack_118 = (undefined8 ****)0xe000000000000000;
        func_0x000107c602fc(0x42);
        uVar12 = 0x800000010f12c350;
        func_0x000107c5fb78(0xd000000000000024,0x800000010f12c350);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a510(ppppuVar7);
        func_0x000107c61180();
        ppppuVar6 = ppppuVar4;
        func_0x000107c5faec();
        func_0x000107c61170(ppppuVar4);
        func_0x000107c5fb78(ppppuVar6,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c5fb78(0x72616d697270202c,0xeb00000000203a79);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a528();
        puVar14 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        puVar9 = PTR___sSiN_11034deb0;
        puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        apppuStack_178[0] = ppppuVar4;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x646e6f636573202c,0xed0000203a797261);
        ppppuVar4 = ppppuVar7;
        func_0x000106a3a534();
        apppuStack_178[0] = ppppuVar4;
        func_0x000107c6057c(puVar9,puVar14);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar14);
        func_0x000107c6142c(pppuStack_118);
        func_0x0001000d224c(&pppuStack_120);
        pppuVar2 = pppuStack_120;
        pppuVar16 = (undefined8 ***)pppuStack_120[2];
        ppppuVar6 = (undefined8 ****)0x6f635f6573726170;
        func_0x000107c5fadc(0x6f635f6573726170,0xec0000006769666e);
        ppppuVar4 = ppppuVar6;
        func_0x000106a3af90(pppuVar16,ppppuVar6,1);
        func_0x000107c61574(pppuVar2);
        func_0x000107c61170(ppppuVar7);
        func_0x000107c61170(ppppuVar6);
      }
      else {
        ppppuVar8 = ppppuVar7;
        uVar11 = uVar10;
        func_0x000106a3a534();
        func_0x0001031ae35c();
        if ((uVar11 & 0xff00) == 0x100) goto LAB_1031a9bbc;
        uStack_98 = (undefined1)uVar10;
        uStack_88 = (undefined1)uVar11;
        uStack_d0 = uStack_78;
        pppuStack_118 = pppuStack_c0;
        pppuStack_120 = pppuStack_c8;
        pppuStack_108 = pppuStack_b0;
        pppuStack_110 = pppuStack_b8;
        uStack_f0 = CONCAT71(uStack_97,uStack_98);
        uStack_100 = uStack_a8;
        uStack_e0 = CONCAT71(uStack_87,uStack_88);
        uStack_d8 = uStack_80;
        ppppuVar4 = apppuStack_178;
        pppuStack_f8 = ppppuVar6;
        pppuStack_e8 = ppppuVar8;
        pppuStack_a0 = ppppuVar6;
        pppuStack_90 = ppppuVar8;
        FUN_1031a68dc(&pppuStack_120);
        puVar9 = puStack_1a0;
        func_0x000107c61558();
        if (((ulong)puVar9 & 1) == 0) {
          ppppuVar4 = (undefined8 ****)(*(long *)(puStack_1a0 + 0x10) + 1);
          puStack_1a0 = (undefined *)0x0;
          FUN_1031aa558(0,ppppuVar4,1);
        }
        uVar1 = *(ulong *)(puStack_1a0 + 0x10);
        ppppuVar6 = (undefined8 ****)(uVar1 + 1);
        if (*(ulong *)(puStack_1a0 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1a0 + 0x18));
          ppppuVar4 = ppppuVar6;
          FUN_1031aa558(puVar9,ppppuVar6,1,puStack_1a0);
          puStack_1a0 = puVar9;
        }
        *(undefined8 *****)(puStack_1a0 + 0x10) = ppppuVar6;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x28) = pppuStack_118;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x20) = pppuStack_120;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x38) = pppuStack_108;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x30) = pppuStack_110;
        *(undefined8 *)(puStack_1a0 + uVar1 * 0x58 + 0x70) = uStack_d0;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x58) = pppuStack_e8;
        *(undefined8 *)(puStack_1a0 + uVar1 * 0x58 + 0x50) = uStack_f0;
        *(undefined8 *)(puStack_1a0 + uVar1 * 0x58 + 0x68) = uStack_d8;
        *(undefined8 *)(puStack_1a0 + uVar1 * 0x58 + 0x60) = uStack_e0;
        *(undefined8 ****)(puStack_1a0 + uVar1 * 0x58 + 0x48) = pppuStack_f8;
        *(undefined8 *)(puStack_1a0 + uVar1 * 0x58 + 0x40) = uStack_100;
        func_0x000107c61170(ppppuVar7);
        *param_1 = puStack_1a0;
      }
      FUN_1031aa524(&pppuStack_c8);
      ppppuVar18 = (undefined8 ****)((long)ppppuVar18 + 1);
    } while (ppppuVar17 != ppppuVar18);
    func_0x000107c6142c(ppppuVar5);
  }
  return;
}



/* Entry: 1031a9f98; end: 1031aa0f7;  */

void FUN_1031a9f98(undefined1 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    func_0x0001031aa2e0();
    puVar4 = &UNK_11061a848;
    func_0x000107c613f8(&UNK_11061a848,puVar1,0,0);
    *puVar1 = 0;
    (*param_3)();
    func_0x000107c614ac(puVar4);
  }
  else {
    puVar4 = &UNK_11061a698;
    func_0x000107c613fc(&UNK_11061a698,0x20,7);
    *(undefined1 **)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    puVar2 = &UNK_11061a6c0;
    func_0x000107c613fc(&UNK_11061a6c0,0x20,7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    uVar3 = 0;
    FUN_1031aa6b0(0,0x112f48888,&PTR_PTR_1126acd48);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(param_4);
    FUN_1031ad7f0(0xd000000000000010,0x800000010f12c310,0x1031aa92c,puVar4,FUN_1031aa940,puVar2,
                  lStack_58,uVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lStack_58);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 1031aa0f8; end: 1031aa157;  */

void FUN_1031aa0f8(undefined8 *param_1,code *param_2)

{
  bool bVar1;
  undefined8 unaff_x21;
  
  bVar1 = *(char *)(param_1 + 1) == '\x01';
  if (bVar1) {
    unaff_x21 = *param_1;
    func_0x000107c614b0(unaff_x21);
  }
  (*param_2)(unaff_x21,bVar1);
  if (!bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(unaff_x21);
  return;
}



/* Entry: 1031aa158; end: 1031aa177;  */

void FUN_1031aa158(void)

{
  FUN_1031a867c();
  return;
}



/* Entry: 1031aa178; end: 1031aa197;  */

void FUN_1031aa178(void)

{
  FUN_1031a8758();
  return;
}



/* Entry: 1031aa198; end: 1031aa1b7;  */

void FUN_1031aa198(void)

{
  FUN_1031a883c();
  return;
}



/* Entry: 1031aa1b8; end: 1031aa1d7;  */

void FUN_1031aa1b8(void)

{
  FUN_1031a91e8();
  return;
}



/* Entry: 1031aa1d8; end: 1031aa297;  */

void FUN_1031aa1d8(void)

{
  FUN_1031a92bc();
  return;
}



/* Entry: 1031aa298; end: 1031aa33b;  */

void FUN_1031aa298(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031a9168(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&UNK_106a39fc0);
  return;
}



/* Entry: 1031aa33c; end: 1031aa367;  */

void FUN_1031aa33c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1031aa368; end: 1031aa523;  */

ulong FUN_1031aa368(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031aa44c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031aa450);
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
  FUN_1031aa6b0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031aa524);
  (*pcVar2)();
}



/* Entry: 1031aa524; end: 1031aa557;  */

undefined8 FUN_1031aa524(undefined8 param_1)

{
  FUN_1031b2388();
  return param_1;
}



/* Entry: 1031aa558; end: 1031aa67b;  */

undefined * FUN_1031aa558(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031aa67c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f488a8;
    func_0x0001000285a8(0x112f488a8,&UNK_10db95828);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11061ba70);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1031aa67c; end: 1031aa6af;  */

void FUN_1031aa67c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031a96e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1031aa6b0; end: 1031aa6ef;  */

void FUN_1031aa6b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031aa6f0; end: 1031aa703;  */

void FUN_1031aa6f0(void)

{
  FUN_1031aa704();
  return;
}



/* Entry: 1031aa704; end: 1031aa74f;  */

void FUN_1031aa704(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000106a3a124(param_1,uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1031aa750; end: 1031aa783;  */

void FUN_1031aa750(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031a893c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1031aa784; end: 1031aa8eb;  */

int FUN_1031aa784(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1031aa800;
        goto LAB_1031aa7e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1031aa7e4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1031aa800:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1031aa8ec; end: 1031aa93f;  */

void FUN_1031aa8ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f488b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db95880;
  func_0x000107c61520(&UNK_10db95880,&UNK_11061a848);
  puRam0000000112f488b8 = puVar1;
  return;
}



/* Entry: 1031aa940; end: 1031aa943;  */

void FUN_1031aa940(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031aa0f8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1031aa944; end: 1031aa957;  */

void FUN_1031aa944(void)

{
  func_0x0001031aa76c();
  return;
}



/* Entry: 1031aa958; end: 1031aa95b;  */

void FUN_1031aa958(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 1031aa95c; end: 1031aa96f;  */

void FUN_1031aa95c(void)

{
  FUN_1031aa67c();
  return;
}



/* Entry: 1031aa970; end: 1031aa9bb;  */

void FUN_1031aa970(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x0001031a6c88();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126acd40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 1031aa9bc; end: 1031aaa1b; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl init] */

void FUN_1031aa9bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ConvoSafetyPromptFeature.CSPRouterImpl",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031aa9e8);
  (*pcVar1)();
}



/* Entry: 1031aaa1c; end: 1031aaae3; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031aaa38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaa78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031aaa5c) */
/* WARNING: Removing unreachable block (ram,0x0001031aaa3c) */
/* WARNING: Removing unreachable block (ram,0x0001031aaa7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031aaa1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f488c0));
  return;
}



/* Entry: 1031aaae4; end: 1031aab03;  */

void FUN_1031aaae4(void)

{
  func_0x000107c61168(&PTR_PTR_1128beb40);
  return;
}



/* Entry: 1031aab04; end: 1031ab277;  */

/* WARNING: Possible PIC construction at 0x0001031aab90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aad14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aaef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ab01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ab034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ab044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ab000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031ab010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031aafcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ab014) */
/* WARNING: Removing unreachable block (ram,0x0001031ab004) */
/* WARNING: Removing unreachable block (ram,0x0001031ab048) */
/* WARNING: Removing unreachable block (ram,0x0001031ab038) */
/* WARNING: Removing unreachable block (ram,0x0001031ab020) */
/* WARNING: Removing unreachable block (ram,0x0001031aaef8) */
/* WARNING: Removing unreachable block (ram,0x0001031aaee8) */
/* WARNING: Removing unreachable block (ram,0x0001031aaed8) */
/* WARNING: Removing unreachable block (ram,0x0001031aaec0) */
/* WARNING: Removing unreachable block (ram,0x0001031aad18) */
/* WARNING: Removing unreachable block (ram,0x0001031aab94) */
/* WARNING: Removing unreachable block (ram,0x0001031aab98) */
/* WARNING: Removing unreachable block (ram,0x0001031aafa8) */
/* WARNING: Removing unreachable block (ram,0x0001031aabb4) */
/* WARNING: Removing unreachable block (ram,0x0001031aafb0) */
/* WARNING: Removing unreachable block (ram,0x0001031aabd4) */
/* WARNING: Removing unreachable block (ram,0x0001031aafc0) */
/* WARNING: Removing unreachable block (ram,0x0001031aabf4) */
/* WARNING: Removing unreachable block (ram,0x0001031aaff4) */
/* WARNING: Removing unreachable block (ram,0x0001031aac18) */
/* WARNING: Removing unreachable block (ram,0x0001031ab018) */
/* WARNING: Removing unreachable block (ram,0x0001031aacc4) */
/* WARNING: Removing unreachable block (ram,0x0001031aafd0) */
/* WARNING: Removing unreachable block (ram,0x0001031aafd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031aab04(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long alStack_f0 [18];
  
  puVar1 = (ulong *)(unaff_x20 + _DAT_112f48908);
  puVar2 = puVar1;
  func_0x0001031abfcc();
  if ((int)puVar2 != 1) {
    if ((param_3 == *puVar1 && param_4 == puVar1[1]) ||
       (func_0x000107c605b8(param_3,param_4,*puVar1,puVar1[1],0), (param_3 & 1) != 0)) {
      func_0x0001000d224c(alStack_f0);
      uVar4 = *(undefined8 *)(alStack_f0[0] + 0x10);
      uVar3 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f12c410);
      func_0x000106a3af90(uVar4,uVar3,1);
      func_0x000107c61574(alStack_f0[0]);
      func_0x000107c61170(uVar3);
      return;
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f488c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c509b4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 1031ab278; end: 1031ab2b7;  */

void FUN_1031ab278(void)

{
  FUN_1031aab04();
  return;
}



/* Entry: 1031ab2b8; end: 1031ab57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ab2b8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_1f0 [128];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar6 = auStack_1f0;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f48908);
  uVar9 = puVar2[0xd];
  uStack_90 = puVar2[0xc];
  lVar11 = puVar2[0xf];
  uStack_80 = puVar2[0xe];
  uStack_a8 = puVar2[9];
  uStack_b0 = puVar2[8];
  uStack_98 = puVar2[0xb];
  uStack_a0 = puVar2[10];
  uStack_e8 = puVar2[1];
  uStack_f0 = *puVar2;
  uVar10 = puVar2[3];
  uVar8 = puVar2[2];
  uStack_c8 = puVar2[5];
  uStack_d0 = puVar2[4];
  uStack_b8 = puVar2[7];
  uStack_c0 = puVar2[6];
  puVar2 = &uStack_f0;
  uStack_e0 = uVar8;
  uStack_d8 = uVar10;
  uStack_88 = uVar9;
  lStack_78 = lVar11;
  func_0x0001031abfcc();
  if ((int)puVar2 != 1) {
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    lStack_f8 = lStack_78;
    uStack_100 = uStack_80;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    FUN_1031ac1a0(&uStack_170,auStack_1f0);
    lVar3 = lVar11;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4d06c(uVar9);
      func_0x000107c61180();
      func_0x000107c5db08();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar7 = 0;
        puVar6 = (undefined1 *)0xe000000000000000;
      }
      else {
        lVar7 = lVar11;
        func_0x000107c5faec();
        func_0x000107c61170(lVar11);
      }
      puVar4 = PTR_PTR_1126b2e98;
      func_0x000107c61168(PTR_PTR_1126b2e98);
      puVar5 = PTR_PTR_1126b4a08;
      func_0x000107c610f8(PTR_PTR_1126b4a08);
      func_0x000107c5fadc(lVar7,puVar6);
      func_0x000107c6142c(puVar6);
      func_0x000107c49270(puVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar7);
      func_0x000107c5dae8(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      puVar5 = PTR_PTR_1126b2ec8;
      func_0x000107c610f8(PTR_PTR_1126b2ec8);
      func_0x000107c615f0(uVar9);
      func_0x000107c61174(puVar4);
      func_0x000107c5fadc(uVar8,uVar10);
      func_0x000107c49050(puVar5);
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar8);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f488c0));
      func_0x000107c61170(puVar5);
      FUN_1031ac05c(&uStack_f0);
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(puVar4);
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112f48910);
      *(undefined **)(unaff_x20 + _DAT_112f48910) = puVar1;
      func_0x000107c61174(puVar1);
      goto LAB_1031ab550;
    }
    puVar2 = &uStack_f0;
    FUN_1031ac05c(puVar2);
  }
  FUN_1031ac160();
  puVar4 = &UNK_11061aad0;
  func_0x000107c613f8(&UNK_11061aad0,puVar2,0,0);
  puVar5 = puVar4;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar4);
  func_0x000107c43b70(puVar1);
LAB_1031ab550:
  func_0x000107c61170(puVar5);
  return puVar1;
}



/* Entry: 1031ab57c; end: 1031ab5af; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl onReport] */

void FUN_1031ab57c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031ab2b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031ab5b0; end: 1031ab823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ab5b0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [128];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  ppuVar5 = &puStack_280;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f48908);
  uStack_108 = puVar2[9];
  uStack_110 = puVar2[8];
  uStack_f8 = puVar2[0xb];
  uStack_100 = puVar2[10];
  uVar9 = puVar2[0xd];
  uStack_f0 = puVar2[0xc];
  uStack_d8 = puVar2[0xf];
  uStack_e0 = puVar2[0xe];
  uStack_148 = puVar2[1];
  uStack_150 = *puVar2;
  uStack_138 = puVar2[3];
  uStack_140 = puVar2[2];
  uStack_128 = puVar2[5];
  uStack_130 = puVar2[4];
  uStack_118 = puVar2[7];
  uStack_120 = puVar2[6];
  uStack_60 = puVar2[0xc];
  uStack_c8 = puVar2[0xf];
  uStack_d0 = puVar2[0xe];
  puVar2 = &uStack_150;
  uStack_e8 = uVar9;
  uStack_c0 = uStack_150;
  uStack_b8 = uStack_148;
  uStack_b0 = uStack_140;
  uStack_a8 = uStack_138;
  uStack_a0 = uStack_130;
  uStack_98 = uStack_128;
  uStack_90 = uStack_120;
  uStack_88 = uStack_118;
  uStack_80 = uStack_110;
  uStack_78 = uStack_108;
  uStack_70 = uStack_100;
  uStack_68 = uStack_f8;
  func_0x0001031abfcc();
  if ((int)puVar2 != 1) {
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    lVar8 = *(long *)(unaff_x20 + _DAT_112f488e0);
    FUN_1031ac1a0(&uStack_1d0,auStack_250);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar3 = uVar9;
      func_0x000107c4d06c();
      func_0x000107c61180();
      pcVar4 = "onBlock()";
      func_0x0001000c10c0("onBlock()");
      func_0x000107c61180();
      puVar6 = &UNK_11061a9c0;
      func_0x000107c613fc(&UNK_11061a9c0,0xa8,7);
      *(undefined8 *)(puVar6 + 0x50) = uStack_88;
      *(undefined8 *)(puVar6 + 0x48) = uStack_90;
      *(undefined8 *)(puVar6 + 0x60) = uStack_78;
      *(undefined8 *)(puVar6 + 0x58) = uStack_80;
      *(undefined8 *)(puVar6 + 0x70) = uStack_68;
      *(undefined8 *)(puVar6 + 0x68) = uStack_70;
      *(undefined8 *)(puVar6 + 0x20) = uStack_b8;
      *(undefined8 *)(puVar6 + 0x18) = uStack_c0;
      *(undefined8 *)(puVar6 + 0x30) = uStack_a8;
      *(undefined8 *)(puVar6 + 0x28) = uStack_b0;
      *(long *)(puVar6 + 0x10) = lVar8;
      *(undefined8 *)(puVar6 + 0x40) = uStack_98;
      *(undefined8 *)(puVar6 + 0x38) = uStack_a0;
      *(undefined8 *)(puVar6 + 0x78) = uStack_60;
      *(undefined8 *)(puVar6 + 0x80) = uVar9;
      *(undefined8 *)(puVar6 + 0x90) = uStack_c8;
      *(undefined8 *)(puVar6 + 0x88) = uStack_d0;
      *(undefined8 *)(puVar6 + 0x98) = uVar3;
      *(undefined **)(puVar6 + 0xa0) = puVar1;
      pcStack_260 = FUN_1031ac1d4;
      puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_278 = 0x42000000;
      puStack_270 = &UNK_1000f6b44;
      puStack_268 = &UNK_11061a9d8;
      puStack_258 = puVar6;
      func_0x000107c60bc4(&puStack_280);
      puVar6 = puStack_258;
      FUN_1031abfe4(&uStack_150,auStack_250);
      func_0x000107c615f0(lVar8);
      func_0x000107c615f0(uVar3);
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar6);
      func_0x000107c4e590(pcVar4);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(uVar3);
      func_0x000107c615e8(pcVar4);
      FUN_1031ac05c(&uStack_150);
      func_0x000107c615e8(lVar8);
      return puVar1;
    }
    puVar2 = &uStack_150;
    FUN_1031ac05c(puVar2);
  }
  FUN_1031ac160();
  puVar6 = &UNK_11061aad0;
  func_0x000107c613f8(&UNK_11061aad0,puVar2,0,0);
  puVar7 = puVar6;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar6);
  func_0x000107c43b70(puVar1);
  func_0x000107c61170(puVar7);
  return puVar1;
}



/* Entry: 1031ab824; end: 1031ab8f3;  */

void FUN_1031ab824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11061aa10;
  func_0x000107c613fc(&UNK_11061aa10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  pcStack_50 = FUN_1031ac1e4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ab47f8;
  puStack_58 = &UNK_11061aa28;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c3eb04(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1031ab8f4; end: 1031ab927; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl onBlock] */

void FUN_1031ab8f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031ab5b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031ab928; end: 1031ab9a3; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl onClearConversation] */

void FUN_1031ab928(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1031ac160();
  puVar3 = &UNK_11061aad0;
  func_0x000107c613f8(&UNK_11061aad0,puVar2,0,0);
  puVar2 = puVar3;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar3);
  func_0x000107c43b70(puVar1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1031ab9a4; end: 1031abaab; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl onOkay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ab9a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_160 [128];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f48908);
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  uVar10 = puVar1[3];
  uVar9 = puVar1[2];
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  uStack_88 = puVar1[0xb];
  uStack_90 = puVar1[10];
  uStack_78 = puVar1[0xd];
  uStack_80 = puVar1[0xc];
  uStack_68 = puVar1[0xf];
  uStack_70 = puVar1[0xe];
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  iVar5 = (int)&uStack_e0;
  uStack_e0 = uVar7;
  uStack_d8 = uVar8;
  uStack_d0 = uVar9;
  uStack_c8 = uVar10;
  func_0x0001031abfcc();
  if (iVar5 != 1) {
    lVar2 = param_1 + _DAT_112f488f0;
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar4 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar3);
    pcVar6 = *(code **)(lVar4 + 0x50);
    func_0x000107c61174(param_1);
    FUN_1031abfe4(&uStack_e0,auStack_160);
    func_0x000107c61434(uVar10);
    (*pcVar6)(uVar7,uVar8,uVar9,uVar10,uVar3,lVar4);
    func_0x000107c6142c(uVar10);
    func_0x0001031ab04c();
    func_0x000107c61170(param_1);
    FUN_1031ac05c(&uStack_e0);
  }
  return;
}



/* Entry: 1031abaac; end: 1031abaaf; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl onOpenSettings] */

void FUN_1031abaac(void)

{
  return;
}



/* Entry: 1031abab0; end: 1031abbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031abab0(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f48910);
  if (lVar4 != 0) {
    func_0x000107c61174();
    uVar5 = (ulong)((param_1 ^ 0xffffffff) & 1);
    func_0x000107c5fca0(uVar5);
    func_0x000107c43b74(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112f488c0);
  lVar4 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(0xe000000000000000);
    bVar3 = (param_1 & 1) == 0;
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(0x800000010f12c430);
  }
  return;
}



/* Entry: 1031abbd4; end: 1031abc7f; -[_TtC24ConvoSafetyPromptFeature13CSPRouterImpl reportDidCompleteWithCancelled:] */

void FUN_1031abbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1031abab0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031abc80; end: 1031abd3f;  */

undefined8 * FUN_1031abc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = param_2[9];
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  uVar1 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  uVar4 = param_2[0xf];
  param_1[0xf] = uVar4;
  func_0x000107c615f0();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 1031abd40; end: 1031abe5f;  */

undefined8 * FUN_1031abd40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  uVar4 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  uVar2 = param_2[0xc];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xb];
  uVar3 = param_1[0xc];
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar4);
  uVar4 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  return param_1;
}



/* Entry: 1031abe60; end: 1031abf13;  */

undefined8 * FUN_1031abe60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  func_0x000107c615e8(param_1[0xd]);
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  func_0x000107c615e8(uVar2);
  uVar2 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 1031abf14; end: 1031abfe3;  */

int FUN_1031abf14(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031abfe4; end: 1031ac033;  */

undefined8 FUN_1031abfe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f48940;
  func_0x0001000285a8(0x112f48940,&UNK_10db95920);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031ac034; end: 1031ac05b;  */

void FUN_1031ac034(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1031ac05c; end: 1031ac0a3;  */

undefined8 FUN_1031ac05c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f48940;
  func_0x0001000285a8(0x112f48940,&UNK_10db95920);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


