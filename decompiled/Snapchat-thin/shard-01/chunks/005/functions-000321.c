/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010b2fd4; end: 1010b2ff3;  */

void FUN_1010b2fd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae230);
  return;
}



/* Entry: 1010b2ff4; end: 1010b2ffb;  */

void FUN_1010b2ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1010b2ffc; end: 1010b302f;  */

undefined8 * FUN_1010b2ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010b3030; end: 1010b3083;  */

undefined8 * FUN_1010b3030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1010b3084; end: 1010b30bf;  */

undefined8 * FUN_1010b3084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 1010b30c0; end: 1010b3157;  */

int FUN_1010b30c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010b3158; end: 1010b3217;  */

long FUN_1010b3158(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010b3218; end: 1010b329f;  */

undefined8 * FUN_1010b3218(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1010b32a0; end: 1010b32fb;  */

undefined8 * FUN_1010b32a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c61170(param_1[3]);
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1010b32fc; end: 1010b339f;  */

int FUN_1010b32fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010b33a0; end: 1010b498f;  */

/* WARNING: Removing unreachable block (ram,0x0001010b348c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b33a0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long extraout_x8;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  ulong uStack_68;
  
  lVar4 = 0;
  lVar12 = param_2;
  lStack_80 = param_3;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_1;
  func_0x000107c3eb80();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(puVar15);
    func_0x000107c61170(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar8 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar9 = puVar8;
    func_0x000107c5ed90();
    uVar14 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010ef23e20);
    puVar10 = puVar7;
    func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c4913c(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar10);
    (**(code **)(lStack_80 + 0x10))(lStack_80,puVar8);
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(puVar8);
  }
  else {
    lVar6 = lVar5;
    lStack_88 = lVar16;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar5);
    puVar7 = &DAT_112d5a790;
    func_0x0001010b19e0(&DAT_112d5a790,PTR___s10Foundation11JSONDecoderCMa_110350350,
                        PTR___s10Foundation11JSONDecoderCACycfc_110350348);
    puVar8 = puVar7;
    FUN_1010b4990();
    func_0x000107c5eb1c(&lStack_70,&UNK_110380a78,lVar6,lVar12,&UNK_110380a78,puVar8);
    lStack_90 = lVar12;
    func_0x000107c61574(puVar7);
    uVar3 = uStack_68;
    lVar5 = lStack_70;
    uVar14 = *(undefined8 *)(param_2 + _DAT_112d5a7b8);
    func_0x000107c6157c(uVar14);
    func_0x0001000c74f0(&lStack_70);
    func_0x000107c61574(uVar14);
    lVar12 = lStack_70;
    if ((*(long *)(lStack_70 + 0x10) == 0) ||
       (lVar16 = lVar5, uVar13 = uVar3, func_0x000100029284(), (uVar13 & 1) == 0)) {
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(lVar12);
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(puVar15);
      func_0x000107c61170(param_1);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar8 = PTR_PTR_1126b1ce0;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar9 = puVar8;
      func_0x000107c5ed90();
      uVar14 = 0xd000000000000025;
      func_0x000107c5fadc(0xd000000000000025,0x800000010ef23e60);
      puVar10 = puVar7;
      func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c4913c(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar10);
      (**(code **)(lStack_80 + 0x10))(lStack_80,puVar8);
      func_0x00010006c090(lVar6,lStack_90);
      func_0x000107c6142c(puVar7);
      func_0x000107c61170(puVar8);
      lVar16 = lStack_88;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar16 * 0x10);
      uVar14 = *puVar1;
      uVar2 = puVar1[1];
      func_0x00010006c00c(uVar14,uVar2);
      func_0x000107c6142c(lVar12);
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(puVar15);
      func_0x000107c61170(param_1);
      uStack_98 = 200;
      lStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_68);
      lStack_70 = -0x2fffffffffffffe5;
      uStack_68 = 0x800000010ef23e90;
      func_0x000107c5fb78(lVar5,uVar3);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_68;
      lVar5 = lStack_70;
      uStack_a0 = uStack_68;
      func_0x00010006c00c(uVar14,uVar2);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      puVar8 = PTR_PTR_1126b1ce0;
      puStack_a8 = puVar7;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar9 = puVar8;
      func_0x000107c5ed90();
      func_0x000107c5fadc(lVar5,uVar3);
      func_0x000107c5f9dc(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      uVar11 = uVar14;
      func_0x000107c5ee20(uVar14,uVar2);
      func_0x000107c4913c(puVar8);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar11);
      (**(code **)(lStack_80 + 0x10))(lStack_80,puVar8);
      func_0x000107c61170(puVar8);
      func_0x00010006c090(lVar6,lStack_90);
      func_0x000107c6142c(uStack_a0);
      func_0x000107c6142c(puStack_a8);
      func_0x00010006c090(uVar14,uVar2);
      func_0x00010006c090(uVar14,uVar2);
      lVar16 = lStack_88;
    }
  }
  (**(code **)(lVar16 + 8))(puVar15,lVar4);
  return;
}



/* Entry: 1010b4990; end: 1010b49cf;  */

void FUN_1010b4990(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921660;
  func_0x000107c61520(&UNK_10d921660,&UNK_110380a78);
  puRam0000000112d5a7f8 = puVar1;
  return;
}



/* Entry: 1010b49d0; end: 1010b49e7;  */

void FUN_1010b49d0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001010b4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1010b49e8; end: 1010b4a27;  */

void FUN_1010b49e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921c84;
  func_0x000107c61520(&UNK_10d921c84,&UNK_110380e98);
  puRam0000000112d5a800 = puVar1;
  return;
}



/* Entry: 1010b4a28; end: 1010b4a8f;  */

void FUN_1010b4a28(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1010b4a90;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3[4] = unaff_x20 + 0x10;
  plVar3[5] = lVar4;
  plVar2 = (long *)0x130;
  func_0x000107c615b8();
  plVar3[6] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1010b2798;
  plVar2[0x1e] = lVar4;
  plVar2[0x1f] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010b2964,0,0);
  return;
}



/* Entry: 1010b4a90; end: 1010b4b0b;  */

void FUN_1010b4a90(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001010b4ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1010b4b0c; end: 1010b4b3f;  */

undefined8 FUN_1010b4b0c(undefined8 param_1)

{
  (*(code *)(undefined *)0x1010bd8d8)();
  return param_1;
}



/* Entry: 1010b4b40; end: 1010b4b5b;  */

void FUN_1010b4b40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1010b2de0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1010b4b5c; end: 1010b4b63;  */

undefined8 * FUN_1010b4b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010b4b64; end: 1010b4bfb;  */

void FUN_1010b4b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c610f8();
  FUN_1010b4c88(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 1010b4bfc; end: 1010b4c0f;  */

void FUN_1010b4bfc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001010b4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 1010b4c10; end: 1010b4c87;  */

long FUN_1010b4c10(long *param_1,code *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c613fc();
    (*param_3)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 1010b4c88; end: 1010b5043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1010b4c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined *puStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d5a810) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a820) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a828) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a830) = 0;
  lVar2 = _DAT_112d5a838;
  uVar4 = 0;
  func_0x0001000c6560();
  uVar5 = uVar4;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _DAT_112d5a840;
  uVar5 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _DAT_112d5a848;
  func_0x000107c613fc(uVar4,0x20,7);
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a850) = 0;
  lVar2 = _DAT_112d5a858;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1010b11e8();
  uVar5 = 0x112d5a788;
  puStack_68 = puVar6;
  func_0x0001000285a8(0x112d5a788,&UNK_10d921460);
  func_0x000107c613fc();
  ppuVar7 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar7;
  lVar2 = _DAT_112d5a860;
  FUN_1010b11e8();
  puStack_68 = puVar8;
  func_0x000107c613fc(uVar5,0x20,7);
  ppuVar7 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d5a868);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d5a870) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d5a878) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a880) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a888) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a890) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a898) = param_4;
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  uVar5 = param_5;
  func_0x0001000b637c();
  *(undefined8 *)(unaff_x20 + _DAT_112d5a8a8) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a8b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a8b8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a8c0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a8c8) = param_9;
  puVar8 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  puVar9 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar9,puVar8);
  uVar5 = *(undefined8 *)(puVar9 + _DAT_112d5a880);
  puVar8 = &UNK_110380750;
  func_0x000107c613fc(&UNK_110380750,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,puVar9);
  puVar6 = &UNK_110380778;
  func_0x000107c613fc(&UNK_110380778,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar8;
  *(long *)(puVar6 + 0x18) = lVar3;
  func_0x000107c61174(puVar9);
  func_0x000107c6157c(uVar5);
  func_0x00010075a04c(0,1,FUN_1010b94b4,puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61574(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar6);
  return puVar9;
}



/* Entry: 1010b5044; end: 1010b5233;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b5044(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar5 = *param_1;
  cVar1 = (char)param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    if (cVar1 != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (lVar5 == 0) {
        func_0x000107c61170();
        return;
      }
      lVar4 = *(long *)(lVar5 + _DAT_113035438);
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c4d1e4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar2 = lVar4;
        func_0x000107c4ac54();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar2 != 0) {
          func_0x0001000285a8(0x112d5a908,&UNK_10d921538);
          lVar4 = lVar2;
          func_0x0001000bda74();
          uVar3 = *(undefined8 *)(param_2 + _DAT_112d5a820);
          *(long *)(param_2 + _DAT_112d5a820) = lVar4;
          func_0x000107c61574(uVar3);
          FUN_1010b5234();
          func_0x000107c61170(lVar2);
          FUN_100ca2540(lVar5,cVar1);
          FUN_100ca2540(lVar5,cVar1);
          func_0x000107c61170(param_2);
          return;
        }
      }
      func_0x000107c61170(param_2);
      FUN_100ca2540(lVar5,cVar1);
      FUN_100ca2540(lVar5,cVar1);
      return;
    }
    func_0x000107c61170();
  }
  alStack_70[1] = 0;
  alStack_70[2] = 0xe000000000000000;
  func_0x000107c614b0(lVar5);
  func_0x000107c602fc(0x27);
  func_0x000107c5fb78(0xd000000000000025,0x800000010ef243f0);
  uVar3 = 0x112d393f0;
  alStack_70[0] = lVar5;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(alStack_70,alStack_70 + 1,uVar3,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  FUN_100ca2540(lVar5,cVar1);
  func_0x000107c6142c(alStack_70[2]);
  return;
}



/* Entry: 1010b5234; end: 1010b5d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b5234(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = *(long *)(unaff_x20 + _DAT_112d5a820);
  if (lVar9 != 0) {
    func_0x000107c6157c(lVar9);
    func_0x0001000d224c(&pcStack_68);
    func_0x000107c61574(lVar9);
    pcVar8 = pcStack_68;
    if (pcStack_68 != (code *)0x0) {
      func_0x0001000d224c(&pcStack_68);
      if (pcStack_68 != (code *)0x0) {
        pcVar2 = pcStack_68;
        func_0x000107c4c238();
        func_0x000107c61180();
        pcVar3 = pcVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (pcVar3 != (code *)0x0) {
          pcVar4 = pcVar3;
          func_0x000107c52094();
          func_0x000107c61180();
          func_0x000107c615e8(pcVar3);
          if (pcVar4 != (code *)0x0) {
            pcVar3 = pcVar4;
            func_0x000107c5d58c();
            func_0x000107c61180();
            func_0x000107c615e8(pcVar4);
            if (pcVar3 != (code *)0x0) {
              func_0x0001000285a8(0x112d5a930,&UNK_10d921550);
              pcVar4 = pcVar3;
              func_0x0001000b637c();
              puVar5 = &UNK_110380750;
              func_0x000107c613fc(&UNK_110380750,0x18,7);
              func_0x000107c61614(puVar5 + 0x10);
              uVar6 = 0x1010b9da4;
              puVar7 = puVar5;
              (**(code **)(*(long *)pcVar4 + 0x60))(0x1010b9da4);
              func_0x000107c61574(pcVar4);
              func_0x000107c61574(puVar5);
              uVar10 = uVar6;
              func_0x000107c614f0(uVar6);
              (**(code **)(puVar7 + 0x10))
                        (*(undefined8 *)(unaff_x20 + _DAT_112d5a848),uVar10,puVar7);
              func_0x000107c61170(pcVar3);
              func_0x000107c615e8(uVar6);
            }
          }
        }
        pcVar3 = pcVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (pcVar3 != (code *)0x0) {
          pcVar4 = pcVar3;
          func_0x000107c4c940();
          func_0x000107c61180();
          func_0x000107c615e8(pcVar3);
          if (pcVar4 != (code *)0x0) {
            pcVar3 = pcVar4;
            func_0x000107c5d58c();
            func_0x000107c61180();
            func_0x000107c615e8(pcVar4);
            if (pcVar3 != (code *)0x0) {
              func_0x0001000285a8(0x112d5a928,&UNK_10db22d90);
              pcVar4 = pcVar3;
              func_0x0001000b637c();
              puVar5 = &UNK_110380750;
              func_0x000107c613fc(&UNK_110380750,0x18,7);
              func_0x000107c61614(puVar5 + 0x10);
              uVar6 = 0x1010b9d9c;
              puVar7 = puVar5;
              (**(code **)(*(long *)pcVar4 + 0x60))(0x1010b9d9c);
              func_0x000107c61574(pcVar4);
              func_0x000107c61574(puVar5);
              uVar10 = uVar6;
              func_0x000107c614f0(uVar6);
              (**(code **)(puVar7 + 0x10))
                        (*(undefined8 *)(unaff_x20 + _DAT_112d5a848),uVar10,puVar7);
              func_0x000107c61170(pcVar3);
              func_0x000107c615e8(uVar6);
            }
          }
        }
        func_0x0001000285a8(0x112d5a910,&UNK_10d921540);
        pcVar4 = pcVar8;
        func_0x000107c4d264(pcVar8);
        func_0x000107c61180();
        pcVar3 = pcVar4;
        func_0x0001000b637c();
        func_0x000107c61170(pcVar4);
        FUN_1010b9d00();
        func_0x0001000c2068();
        func_0x000107c61574(pcVar3);
        pcVar3 = FUN_1010b8b20;
        func_0x0001000bfde0(FUN_1010b8b20,0,&UNK_11072d970);
        func_0x000107c61574(pcVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d5a828);
        *(code **)(unaff_x20 + _DAT_112d5a828) = pcVar3;
        func_0x000107c61574(uVar6);
        func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
        pcVar3 = pcVar8;
        func_0x000107c4d23c();
        func_0x000107c61180();
        pcVar4 = pcVar3;
        func_0x0001000b637c();
        func_0x000107c61170();
        func_0x0001010b9d44();
        func_0x0001000c2068();
        func_0x000107c61574(pcVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d5a830);
        *(code **)(unaff_x20 + _DAT_112d5a830) = pcVar3;
        func_0x000107c61574(uVar6);
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d5a8a8);
        uVar6 = 0;
        FUN_100c70ba8(0);
        func_0x000107c6157c(uVar10);
        pcVar3 = FUN_1010b8b70;
        func_0x0001000d5158(FUN_1010b8b70,0,uVar6);
        func_0x000107c61574(uVar10);
        puVar5 = &UNK_110380750;
        func_0x000107c613fc(&UNK_110380750,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar7 = &UNK_110380868;
        func_0x000107c613fc(&UNK_110380868,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar5;
        *(long *)(puVar7 + 0x18) = lVar1;
        pcVar4 = FUN_1010b9d94;
        puVar5 = puVar7;
        (**(code **)(*(long *)pcVar3 + 0x60))(FUN_1010b9d94);
        func_0x000107c61574(pcVar3);
        func_0x000107c61574(puVar7);
        pcVar3 = pcVar4;
        func_0x000107c614f0(pcVar4);
        (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d5a838),pcVar3,puVar5);
        func_0x000107c615e8(pcVar8);
        func_0x000107c615e8(pcStack_68);
        func_0x000107c61170(pcVar2);
        pcVar8 = pcVar4;
      }
      func_0x000107c615e8(pcVar8);
    }
  }
  return;
}



/* Entry: 1010b5d44; end: 1010b5e97; -[_TtC34ExternalMusicPlaybackEventProvider32ExternalMusicPlaybackUriDelegate handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x0001010b5da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010b5dac) */

void FUN_1010b5d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010b94dc(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010b5e98; end: 1010b5ebf; -[_TtC34ExternalMusicPlaybackEventProvider32ExternalMusicPlaybackUriDelegate reset] */

void FUN_1010b5e98(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001010b5dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010b5ec0; end: 1010b66fb;  */

/* WARNING: Removing unreachable block (ram,0x0001010b6410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b5ec0(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar1 = 0;
  uVar16 = param_1;
  uStack_e0 = param_7;
  uStack_d8 = param_9;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_6 + 0x10,auStack_90,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    pcStack_100 = param_8;
    lStack_f8 = lVar12;
    lStack_f0 = lVar1;
    func_0x000107c4dfe8();
    func_0x000107c61180();
    puStack_e8 = puVar13;
    if (param_3 == (undefined *)0x0) {
      func_0x000107c5eea0(lVar10);
      func_0x000107c5ee8c();
      (**(code **)(lVar7 + 8))(lVar10,lVar2);
      *(undefined8 *)(param_6 + _DAT_112d5a850) = uVar16;
      param_1 = 0;
      if (((*(byte *)(param_6 + _DAT_112d5a870) & 1) == 0) &&
         ((*(byte *)(param_6 + _DAT_112d5a878) & 1) == 0)) {
        func_0x0001000d224c(&puStack_c8);
        func_0x0001000a8868(&puStack_c8,uStack_b0);
        (**(code **)(lStack_a8 + 0x48))(uStack_b0,lStack_a8);
        func_0x0001000834e4(&puStack_c8);
      }
      puVar11 = (undefined *)0x0;
      puVar9 = (undefined *)0x0;
      puVar8 = (undefined *)0xe000000000000000;
      uVar15 = 2;
      puVar14 = (undefined *)0xe000000000000000;
    }
    else {
      puVar9 = param_3;
      func_0x000107c51cc8();
      func_0x000107c61180();
      puVar11 = puVar9;
      func_0x000107c5cda4();
      func_0x000107c61170(puVar9);
      puVar9 = PTR___ss6UInt64VN_11034f048;
      puVar14 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      puStack_c8 = puVar11;
      func_0x000107c6057c();
      puVar11 = param_3;
      puVar8 = puVar14;
      func_0x000107c5cdb0(param_3);
      func_0x000107c61180();
      puVar3 = puVar11;
      func_0x000107c5ce2c();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      puVar11 = puVar3;
      func_0x000107c5faec(puVar3);
      func_0x000107c61170(puVar3);
      *(undefined8 *)(param_6 + _DAT_112d5a850) = param_2;
      func_0x000107c61170(param_3);
      uVar15 = (ulong)(param_4 != 0);
    }
    if ((*(byte *)(param_6 + _DAT_112d5a878) & 1) == 0) {
      puStack_c8 = (undefined *)0x0;
      puStack_c0 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x66);
      func_0x000107c5fb78(0x666e496b63617274,0xeb00000000203a6f);
      func_0x000107c61434(puVar8);
      func_0x000107c5fb78(puVar11,puVar8);
      puStack_108 = puVar8;
      func_0x000107c6142c(puVar8);
      func_0x000107c5fb78(0x202d20,0xe300000000000000);
      func_0x000107c5fb78(puVar9,puVar14);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0x664f6b6361727420,0xee00203a74657366);
      puVar8 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar11 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      func_0x000107c5fddc(param_1,&puStack_c8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0xd000000000000013,0x800000010ef242e0);
      lVar1 = _DAT_112d5a850;
      func_0x000107c5fddc(*(undefined8 *)(param_6 + _DAT_112d5a850),&puStack_c8,puVar11,puVar8);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0x53726579616c7020,0xee00203a65746174);
      uVar16 = *(undefined8 *)(&UNK_10d921558 + uVar15 * 8);
      func_0x000107c5fb78(uVar16,0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0xd000000000000011,0x800000010ef24300);
      func_0x000107c5fddc(param_1,&puStack_c8,puVar11,puVar8);
      func_0x000107c6142c(puStack_c0);
      uVar17 = *(undefined8 *)(param_6 + lVar1);
      func_0x000107c61434(puVar14);
      puVar11 = &DAT_112d5a818;
      FUN_1010b4c10(&DAT_112d5a818,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                    PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
      uStack_b0 = 0xe700000000000000;
      puVar8 = puVar11;
      puStack_c8 = puVar9;
      puStack_c0 = puVar14;
      uStack_b8 = uVar16;
      lStack_a8 = param_1;
      uStack_a0 = param_1;
      uStack_98 = uVar17;
      FUN_1010b49e8();
      puVar9 = &UNK_110380e98;
      ppuVar4 = &puStack_c8;
      func_0x000107c5eb4c(ppuVar4,&UNK_110380e98,puVar8);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c6142c(puVar14);
      func_0x000107c61574(puVar11);
      uVar16 = uStack_e0;
      func_0x000107c5d7e0(uStack_e0);
      func_0x000107c61180();
      func_0x000107c5edb4(puStack_e8);
      func_0x000107c61170(uVar16);
      uStack_e0 = 200;
      func_0x00010006c00c(ppuVar4,puVar9);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar8 = PTR_PTR_1126b1ce0;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar3 = puVar8;
      func_0x000107c5ed90();
      uVar16 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010ef23f80);
      puVar5 = puVar11;
      func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                         );
      ppuVar6 = ppuVar4;
      func_0x000107c5ee20(ppuVar4,puVar9);
      func_0x000107c4913c(puVar8);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(ppuVar6);
      (*pcStack_100)(puVar8);
      func_0x000107c6142c(puVar11);
      func_0x000107c61170(puVar8);
      func_0x00010006c090(ppuVar4,puVar9);
      func_0x000107c61170(param_6);
      func_0x00010006c090(ppuVar4,puVar9);
      func_0x000107c6142c(puVar14);
      func_0x000107c6142c(puStack_108);
      (**(code **)(lStack_f8 + 8))(puStack_e8,lStack_f0);
    }
    else {
      puStack_c8 = (undefined *)0x0;
      puStack_c0 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x2e);
      func_0x000107c5fb78(0xd000000000000023,0x800000010ef24320);
      func_0x000107c5fb78(*(undefined8 *)(&UNK_10d921558 + uVar15 * 8),0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c5fb78(0x203a656d697420,0xe700000000000000);
      func_0x000107c5fddc(*(undefined8 *)(param_6 + _DAT_112d5a850),&puStack_c8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(puVar14);
      func_0x000107c61170(param_6);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puStack_c0);
    }
  }
  return;
}



/* Entry: 1010b66fc; end: 1010b824b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b66fc(byte *param_1,byte *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  long extraout_x8;
  byte *pbVar19;
  byte **ppbVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long unaff_x20;
  undefined8 uVar24;
  long lVar25;
  byte *pbVar26;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar12 = 0;
  func_0x000107c5ede0();
  lVar25 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar22 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar17 = (byte *)((ulong)param_1 & 0xffffffffffff);
  pbVar19 = (byte *)((ulong)param_2 >> 0x38 & 0xf);
  pbVar26 = pbVar17;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pbVar26 = pbVar19;
  }
  if (pbVar26 == (byte *)0x0) goto LAB_1010b69bc;
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        pbVar19 = param_1;
        pbVar17 = param_2;
        func_0x000107c60358();
      }
      else {
        pbVar19 = (byte *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar19 != 0x2b) {
        if (*pbVar19 != 0x2d) {
          if (pbVar17 == (byte *)0x0) goto LAB_1010b69bc;
          pbVar26 = (byte *)0x0;
          pbVar18 = pbVar19;
          while (pbVar18 != (byte *)0x0) {
            if (((9 < *pbVar19 - 0x30) ||
                (auVar8._8_8_ = 0, auVar8._0_8_ = pbVar26, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
               (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
               pbVar26 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1))) goto LAB_1010b69bc;
            pbVar17 = pbVar17 + -1;
            pbVar19 = pbVar19 + 1;
            pbVar18 = pbVar17;
          }
          goto LAB_1010b6b94;
        }
        pbVar18 = pbVar17 + -1;
        if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1010b6d70);
          (*pcVar11)();
        }
        if (pbVar18 != (byte *)0x0) {
          pbVar26 = (byte *)0x0;
          do {
            pbVar19 = pbVar19 + 1;
            if (((9 < *pbVar19 - 0x30) ||
                (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar26, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
               (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
               pbVar26 = (byte *)(uVar21 - uVar1), uVar21 < uVar1)) goto LAB_1010b69bc;
            pbVar18 = pbVar18 + -1;
          } while (pbVar18 != (byte *)0x0);
          goto LAB_1010b6b94;
        }
        goto LAB_1010b69bc;
      }
      pbVar18 = pbVar17 + -1;
      if ((long)pbVar17 < 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1010b6d78);
        (*pcVar11)();
      }
      if (pbVar18 == (byte *)0x0) goto LAB_1010b69bc;
      pbVar26 = (byte *)0x0;
      do {
        pbVar19 = pbVar19 + 1;
        if (((9 < *pbVar19 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar26, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*pbVar19 - 0x30),
           pbVar26 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1))) goto LAB_1010b69bc;
        pbVar18 = pbVar18 + -1;
      } while (pbVar18 != (byte *)0x0);
      goto LAB_1010b6b94;
    }
    pbStack_88 = param_1;
    uStack_80 = (ulong)param_2 & 0xffffffffffffff;
    uVar23 = (uint)param_1 & 0xff;
    if (uVar23 == 0x2b) {
      if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1010b6d7c);
        (*pcVar11)();
      }
      pbVar19 = pbVar19 + -1;
      if (pbVar19 == (byte *)0x0) goto LAB_1010b69a8;
      pbVar26 = (byte *)0x0;
      pbVar17 = (byte *)((ulong)&pbStack_88 | 1);
      do {
        if (((9 < *pbVar17 - 0x30) ||
            (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar26, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
           (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
           pbVar26 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1))) goto LAB_1010b69a8;
        uVar23 = 0;
        pbVar19 = pbVar19 + -1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar19 != (byte *)0x0);
    }
    else if (uVar23 == 0x2d) {
      if (pbVar19 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1010b6d74);
        (*pcVar11)();
      }
      pbVar19 = pbVar19 + -1;
      if (pbVar19 == (byte *)0x0) {
LAB_1010b69a8:
        pbVar26 = (byte *)0x0;
        uVar23 = 1;
      }
      else {
        pbVar26 = (byte *)0x0;
        pbVar17 = (byte *)((ulong)&pbStack_88 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar26, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
             pbVar26 = (byte *)(uVar21 - uVar1), uVar21 < uVar1)) goto LAB_1010b69a8;
          uVar23 = 0;
          pbVar19 = pbVar19 + -1;
          pbVar17 = pbVar17 + 1;
        } while (pbVar19 != (byte *)0x0);
      }
    }
    else {
      if (pbVar19 == (byte *)0x0) goto LAB_1010b69a8;
      pbVar26 = (byte *)0x0;
      ppbVar20 = &pbStack_88;
      do {
        if (((9 < *(byte *)ppbVar20 - 0x30) ||
            (auVar9._8_8_ = 0, auVar9._0_8_ = pbVar26, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
           (uVar21 = (long)pbVar26 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar20 - 0x30),
           pbVar26 = (byte *)(uVar21 + uVar1), CARRY8(uVar21,uVar1))) goto LAB_1010b69a8;
        uVar23 = 0;
        pbVar19 = pbVar19 + -1;
        ppbVar20 = (byte **)((long)ppbVar20 + 1);
      } while (pbVar19 != (byte *)0x0);
    }
  }
  else {
    lStack_90 = lVar22;
    func_0x000107c61434(param_2);
    pbVar26 = param_1;
    pbVar19 = param_2;
    FUN_100f5015c(param_1,param_2,10);
    uVar23 = (uint)pbVar19;
    func_0x000107c6142c(param_2);
    lVar22 = lStack_90;
  }
  if ((uVar23 & 0xff) == 1) {
LAB_1010b69bc:
    lStack_90 = 400;
    pbStack_88 = (byte *)0x0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x1d);
    func_0x000107c6142c(uStack_80);
    pbStack_88 = (byte *)0xd00000000000001b;
    uStack_80 = 0x800000010ef24160;
    func_0x000107c5fb78(param_1,param_2);
    uVar1 = uStack_80;
    pbVar26 = pbStack_88;
    func_0x0001000d224c(&pbStack_88);
    lVar10 = lStack_68;
    uVar24 = uStack_70;
    lStack_a0 = lVar25;
    lStack_98 = lVar12;
    func_0x0001000a8868(&pbStack_88,uStack_70);
    (**(code **)(lVar10 + 0x10))(uVar24,lVar10);
    func_0x0001000834e4(&pbStack_88);
    func_0x0001000d224c(&pbStack_88);
    func_0x0001000a8868(&pbStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x48))(uStack_70,lStack_68);
    func_0x0001000834e4(&pbStack_88);
    func_0x000107c5d7e0(param_3);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar22);
    func_0x000107c61170(param_3);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar14 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar15 = puVar14;
    func_0x000107c5ed90();
    func_0x000107c5fadc(pbVar26,uVar1);
    puVar16 = puVar13;
    func_0x000107c5f9dc(puVar13,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c4913c(puVar14);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(pbVar26);
    func_0x000107c61170(puVar16);
    (*param_4)(puVar14);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(puVar13);
    func_0x000107c61170(puVar14);
    (**(code **)(lStack_a0 + 8))(lVar22,lStack_98);
    return;
  }
LAB_1010b6b94:
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112d5a858);
  func_0x000107c6157c(uVar24);
  func_0x0001000c74f0(&pbStack_88);
  func_0x000107c61574(uVar24);
  pbVar19 = pbStack_88;
  if ((*(long *)(pbStack_88 + 0x10) == 0) ||
     (pbVar17 = param_1, pbVar18 = param_2, func_0x000100029284(), ((ulong)pbVar18 & 1) == 0)) {
    func_0x000107c6142c(pbVar19);
    func_0x0001000d224c(&pbStack_88);
    func_0x0001000a8868(&pbStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x30))(pbVar26,uStack_70,lStack_68);
    puVar13 = &UNK_110380750;
    func_0x000107c613fc(&UNK_110380750,0x18,7);
    func_0x000107c61614(puVar13 + 0x10);
    puVar14 = &UNK_1103807c8;
    func_0x000107c613fc(&UNK_1103807c8,0x40,7);
    *(undefined **)(puVar14 + 0x10) = puVar13;
    *(byte **)(puVar14 + 0x18) = param_1;
    *(byte **)(puVar14 + 0x20) = param_2;
    *(undefined8 *)(puVar14 + 0x28) = param_3;
    *(code **)(puVar14 + 0x30) = param_4;
    *(undefined8 *)(puVar14 + 0x38) = param_5;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(param_5);
    func_0x00010075a04c(0,1,0x1010b9c08,puVar14);
    func_0x000107c61574(pbVar26);
    func_0x000107c61574(puVar14);
    func_0x0001000834e4(&pbStack_88);
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(pbVar19 + 0x38) + (long)pbVar17 * 0x10);
    uVar24 = *puVar2;
    uVar3 = puVar2[1];
    func_0x00010006c00c(uVar24,uVar3);
    func_0x000107c6142c(pbVar19);
    func_0x0001010b7e48(param_1,param_2,uVar24,uVar3,param_3,param_4,param_5);
    func_0x00010006c090(uVar24,uVar3);
  }
  return;
}



/* Entry: 1010b824c; end: 1010b8997;  */

/* WARNING: Removing unreachable block (ram,0x0001010b8448) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b824c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined5 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  long extraout_x8;
  undefined8 uVar13;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  uStack_f0 = param_7;
  pcStack_e8 = param_6;
  func_0x000107c5ede0();
  lStack_100 = *(long *)(lVar3 + -8);
  lStack_f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar3 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)((long)param_1 + 0x15) == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
    lVar4 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
    uStack_e0 = 0;
    lStack_d8 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(lStack_d8);
    uStack_e0 = 0xd000000000000021;
    lStack_d8 = 0x800000010ef24260;
    func_0x000107c5fb78(param_3,param_4);
    lVar10 = lStack_d8;
    uVar13 = uStack_e0;
    func_0x0001000d224c(&uStack_e0);
    func_0x0001000a8868(&uStack_e0,uStack_c8);
    (**(code **)((long)puStack_c0 + 0x10))(uStack_c8,puStack_c0);
    func_0x0001000834e4(&uStack_e0);
    func_0x000107c5d7e0(param_5);
  }
  else {
    uVar13 = *param_1;
    lVar10 = param_1[1];
    uVar1 = *(undefined5 *)(param_1 + 2);
    func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
    lVar4 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      if (lVar10 != 0) {
        uVar11 = (undefined1)((uint5)uVar1 >> 0x20);
        uVar12 = (undefined4)uVar1;
        FUN_1010bb4f4();
        if (*(long *)(lVar10 + 0x10) != 0) {
          puVar5 = &DAT_112d5a818;
          FUN_1010b4c10(&DAT_112d5a818,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                        PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
          uStack_d0._0_5_ = CONCAT14(uVar11,uVar12);
          puVar6 = puVar5;
          uStack_e0 = uVar13;
          lStack_d8 = lVar10;
          FUN_1010b9c18();
          puVar8 = &UNK_1103809f0;
          puVar7 = &uStack_e0;
          func_0x000107c5eb4c(puVar7,&UNK_1103809f0,puVar6);
          func_0x000107c6142c(lVar10);
          func_0x000107c61574(puVar5);
          uVar13 = *(undefined8 *)(lVar4 + _DAT_112d5a858);
          uStack_d0 = param_3;
          uStack_c8 = param_4;
          puStack_c0 = puVar7;
          puStack_b8 = puVar8;
          func_0x000107c6157c(uVar13);
          func_0x000100075034(0x1010b9c58,&uStack_e0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar13);
          func_0x0001010b7e48(param_3,param_4,puVar7,puVar8,param_5,pcStack_e8,uStack_f0);
          func_0x00010006c090(puVar7,puVar8);
          func_0x000107c61170(lVar4);
          return;
        }
        func_0x000107c6142c(lVar10);
        uStack_e0 = 0;
        lStack_d8 = 0xe000000000000000;
        func_0x000107c602fc(0x23);
        func_0x000107c6142c(lStack_d8);
        uStack_e0 = 0xd000000000000021;
        lStack_d8 = 0x800000010ef24230;
        func_0x000107c5fb78(param_3,param_4);
        lVar10 = lStack_d8;
        uVar13 = uStack_e0;
        func_0x0001000d224c(&uStack_e0);
        puVar7 = puStack_c0;
        uVar2 = uStack_c8;
        func_0x0001000a8868(&uStack_e0,uStack_c8);
        (**(code **)((long)puVar7 + 0x10))(uVar2,puVar7);
        func_0x0001000834e4(&uStack_e0);
        func_0x0001000d224c(&uStack_e0);
        func_0x0001000a8868(&uStack_e0,uStack_c8);
        (**(code **)((long)puStack_c0 + 0x48))(uStack_c8,puStack_c0);
        func_0x0001000834e4(&uStack_e0);
        func_0x000107c5d7e0(param_5);
        func_0x000107c61180();
        func_0x000107c5edb4(lVar3);
        func_0x000107c61170(param_5);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar8 = PTR_PTR_1126b1ce0;
        func_0x000107c610f8(PTR_PTR_1126b1ce0);
        puVar6 = puVar8;
        func_0x000107c5ed90();
        func_0x000107c5fadc(uVar13,lVar10);
        puVar9 = puVar5;
        func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c4913c(puVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar9);
        (*pcStack_e8)(puVar8);
        goto LAB_1010b88b8;
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
    lVar4 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
    uStack_e0 = 0;
    lStack_d8 = 0xe000000000000000;
    func_0x000107c602fc(0x2b);
    func_0x000107c6142c(lStack_d8);
    uStack_e0 = 0xd000000000000029;
    lStack_d8 = 0x800000010ef241d0;
    func_0x000107c5fb78(param_3,param_4);
    lVar10 = lStack_d8;
    uVar13 = uStack_e0;
    func_0x0001000d224c(&uStack_e0);
    puVar7 = puStack_c0;
    uVar2 = uStack_c8;
    func_0x0001000a8868(&uStack_e0,uStack_c8);
    (**(code **)((long)puVar7 + 0x10))(uVar2,puVar7);
    func_0x0001000834e4(&uStack_e0);
    func_0x0001000d224c(&uStack_e0);
    func_0x0001000a8868(&uStack_e0,uStack_c8);
    (**(code **)((long)puStack_c0 + 0x48))(uStack_c8,puStack_c0);
    func_0x0001000834e4(&uStack_e0);
    func_0x000107c5d7e0(param_5);
  }
  func_0x000107c61180();
  func_0x000107c5edb4(lVar3);
  func_0x000107c61170(param_5);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar8 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar6 = puVar8;
  func_0x000107c5ed90();
  func_0x000107c5fadc(uVar13,lVar10);
  puVar9 = puVar5;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar9);
  (*pcStack_e8)(puVar8);
LAB_1010b88b8:
  func_0x000107c61170(lVar4);
  func_0x000107c6142c(lVar10);
  func_0x000107c6142c(puVar5);
  func_0x000107c61170(puVar8);
  (**(code **)(lStack_100 + 8))(lVar3,lStack_f8);
  return;
}



/* Entry: 1010b8998; end: 1010b8a33;  */

void FUN_1010b8998(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(param_3);
  func_0x00010006c00c(param_4,param_5);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_1010b8f18(param_4,param_5,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *param_1 = uVar2;
  return;
}



/* Entry: 1010b8a34; end: 1010b8b1f;  */

void FUN_1010b8a34(undefined8 param_1,long param_2)

{
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_40 = param_2;
    func_0x0001043dc5e0(0x1010b9dac,auStack_50);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1010b8b20; end: 1010b8b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b8b20(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_2;
  uVar2 = *(undefined8 *)(lVar1 + _DAT_1130400b0);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_1130400b8);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_1130400c0);
  *param_1 = *(undefined8 *)(lVar1 + _DAT_1130400a8);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



/* Entry: 1010b8b70; end: 1010b8c13;  */

void FUN_1010b8b70(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = *param_2;
  func_0x000107c43638();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60);
    func_0x000107c615e8(lVar1);
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
  }
  else {
    uVar2 = 0;
    FUN_100c70ba8(0);
    puVar3 = param_1;
    func_0x000107c6147c(param_1,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1010b8c14; end: 1010b8d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b8c14(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar5 = *param_1;
  puVar3 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + _DAT_112d5a840);
    func_0x000107c6157c(uVar4);
    FUN_100c82230();
    func_0x000107c61574(uVar4);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    puVar1 = (undefined8 *)(param_2 + _DAT_112d5a868);
    uVar5 = puVar1[1];
    *puVar1 = uVar4;
    puVar1[1] = puVar3;
    func_0x000107c6142c(uVar5);
    *(undefined8 *)(param_2 + _DAT_112d5a850) = 0;
    func_0x0001000d224c(auStack_70);
    lVar2 = lStack_50;
    uVar5 = uStack_58;
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lVar2 + 0x48))(uVar5,lVar2);
    func_0x0001000834e4(auStack_70);
    func_0x0001000d224c(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))(uStack_58,lStack_50);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1010b8d5c; end: 1010b8dbb; -[_TtC34ExternalMusicPlaybackEventProvider32ExternalMusicPlaybackUriDelegate init] */

void FUN_1010b8d5c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicPlaybackEventProvider.ExternalMusicPlaybackUriDelegate",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010b8d88);
  (*pcVar1)();
}



/* Entry: 1010b8dbc; end: 1010b8f17; -[_TtC34ExternalMusicPlaybackEventProvider32ExternalMusicPlaybackUriDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b8dbc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a810));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a818));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a898));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a888));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a890));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a880));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a8b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a8b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a8c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a8c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a820));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a8a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a828));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a830));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a838));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a840));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a848));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a858));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d5a860));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d5a868 + 8))
  ;
  return;
}



/* Entry: 1010b8f18; end: 1010b9073;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1010b8f18(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar4 = param_4;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010b8ff4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    func_0x0001010b91f8(lVar7,param_5 & 1);
    uVar3 = param_3;
    uVar8 = param_4;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010b8fbc);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x0001010b9074();
    lVar7 = *unaff_x20;
    goto joined_r0x0001010b9008;
  }
  lVar7 = *unaff_x20;
joined_r0x0001010b9008:
  if ((uVar4 & 1) == 0) {
    lVar6 = lVar7 + (uVar3 >> 6) * 8;
    *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010b9074);
    (*pcVar2)();
  }
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar5 = (uint)(uVar4 >> 0x3e);
  if (uVar5 == 1) {
    uVar3 = uVar4 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 1010b9074; end: 1010b94b3;  */

void FUN_1010b9074(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112d5a6a8,&UNK_10d9869e0);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x40);
    if (uVar9 == 0) goto LAB_1010b9154;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar12);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar12);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        func_0x000107c61434();
        func_0x00010006c00c(uVar4,uVar6);
        if (uVar9 != 0) break;
LAB_1010b9154:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1010b91f8);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1010b91cc;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_1010b91cc:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 1010b94b4; end: 1010b94bb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b94b4(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *param_1;
  cVar1 = (char)param_1[1];
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    if (cVar1 != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (lVar6 == 0) {
        func_0x000107c61170();
        return;
      }
      lVar5 = *(long *)(lVar6 + _DAT_113035438);
      func_0x000107c61174(lVar6);
      func_0x000107c61174();
      func_0x000107c4d1e4();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar3 = lVar5;
        func_0x000107c4ac54();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar3 != 0) {
          func_0x0001000285a8(0x112d5a908,&UNK_10d921538);
          lVar5 = lVar3;
          func_0x0001000bda74();
          uVar4 = *(undefined8 *)(lVar2 + _DAT_112d5a820);
          *(long *)(lVar2 + _DAT_112d5a820) = lVar5;
          func_0x000107c61574(uVar4);
          FUN_1010b5234();
          func_0x000107c61170(lVar3);
          FUN_100ca2540(lVar6,cVar1);
          FUN_100ca2540(lVar6,cVar1);
          func_0x000107c61170(lVar2);
          return;
        }
      }
      func_0x000107c61170(lVar2);
      FUN_100ca2540(lVar6,cVar1);
      FUN_100ca2540(lVar6,cVar1);
      return;
    }
    func_0x000107c61170();
  }
  alStack_70[1] = 0;
  alStack_70[2] = 0xe000000000000000;
  func_0x000107c614b0(lVar6);
  func_0x000107c602fc(0x27);
  func_0x000107c5fb78(0xd000000000000025,0x800000010ef243f0);
  uVar4 = 0x112d393f0;
  alStack_70[0] = lVar6;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(alStack_70,alStack_70 + 1,uVar4,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  FUN_100ca2540(lVar6,cVar1);
  func_0x000107c6142c(alStack_70[2]);
  return;
}



/* Entry: 1010b94bc; end: 1010b94db;  */

void FUN_1010b94bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae328);
  return;
}



/* Entry: 1010b94dc; end: 1010b9bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b94dc(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  code *pcVar16;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = 0;
  lStack_80 = param_2;
  func_0x000107c5ede0();
  lVar12 = *(long *)(uVar1 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar15 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = &UNK_1103807a0;
  uVar9 = 0x18;
  func_0x000107c613fc(&UNK_1103807a0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  puStack_78 = puVar2;
  func_0x000107c60bc4(param_3);
  uVar3 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar14 - extraout_x12_00);
  func_0x000107c61170();
  func_0x000107c5edc8();
  pcVar16 = *(code **)(lVar12 + 8);
  uVar13 = uVar1;
  (*pcVar16)(lVar14 - extraout_x12_00);
  if (lRam0000000112d5a780 == -1) {
    if (uVar9 == 0) goto LAB_1010b9ab0;
LAB_1010b95f4:
    if (uVar3 == uRam00000001137ff1a8 && uVar9 == uRam00000001137ff1b0) {
      func_0x000107c6142c(uVar9);
    }
    else {
      uVar13 = uVar9;
      func_0x000107c605b8();
      func_0x000107c6142c(uVar9);
      if ((uVar3 & 1) == 0) goto LAB_1010b9ab0;
    }
    uVar9 = param_1;
    func_0x000107c4ce5c();
    func_0x000107c61180();
    uVar4 = uVar9;
    func_0x000107c5faec();
    uVar3 = uVar13;
    func_0x000107c61170(uVar9);
    if (lRam0000000112d5a778 != -1) {
      uVar3 = 0x1010b170c;
      func_0x000107c61568(0x112d5a778);
    }
    if ((uVar4 == uRam00000001137ff198) && (uVar13 == uRam00000001137ff1a0)) {
      func_0x000107c6142c(uVar13);
    }
    else {
      uVar3 = uVar13;
      func_0x000107c605b8();
      func_0x000107c6142c(uVar13);
      if ((uVar4 & 1) == 0) goto LAB_1010b9ab0;
    }
    FUN_1010b1738();
    uVar9 = param_1;
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170();
    func_0x000107c5edc4();
    (*pcVar16)(lVar14,uVar1);
    uVar4 = uVar3;
    func_0x0001000f66f0(uVar9,uVar3,uVar13);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(uVar13);
    if ((uVar9 & 1) == 0) goto LAB_1010b9ab0;
    uVar13 = ((ulong *)(lStack_80 + _DAT_112d5a868))[1];
    if (uVar13 != 0) {
      uStack_88 = *(ulong *)(lStack_80 + _DAT_112d5a868);
      func_0x000107c61434(uVar13);
      uVar3 = param_1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar9 = uVar3;
      func_0x000107c5faec();
      uVar10 = uVar4;
      func_0x000107c61170(uVar3);
      if ((uVar9 == uStack_88) && (uVar13 == uVar4)) {
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar4);
      }
      else {
        uVar10 = uVar4;
        func_0x000107c605b8();
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar4);
        if ((uVar9 & 1) == 0) goto LAB_1010b9924;
      }
      uVar9 = 0x6972794c7465672f;
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x11);
      func_0x000107c6142c(uStack_68);
      uStack_70 = 0x676e696c646e6168;
      uStack_68 = 0xef203a6874617020;
      uVar13 = param_1;
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(lVar14);
      func_0x000107c61170(uVar13);
      func_0x000107c5edc4();
      (*pcVar16)(lVar14,uVar1);
      uVar3 = uVar10;
      func_0x000107c5fb78(uVar13);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uStack_68);
      uVar13 = param_1;
      func_0x000107c5d7e0();
      func_0x000107c61180();
      func_0x000107c5edb4(puVar15);
      func_0x000107c61170();
      func_0x000107c5edc4();
      (*pcVar16)(puVar15,uVar1);
      if (((uVar13 == 0x6972794c7465672f) && (uVar3 == 0xea00000000007363)) ||
         (func_0x000107c605b8(0x6972794c7465672f,0xea00000000007363,uVar13,uVar3,0),
         puVar2 = puStack_78, (uVar9 & 1) != 0)) {
        func_0x000107c6142c(uVar3);
        puVar2 = puStack_78;
        func_0x0001010b59cc(param_1,FUN_1010b9bf8,puStack_78,FUN_1010b66fc);
      }
      else {
        if ((uVar13 != 0xd000000000000013) || (uVar3 != 0x800000010ef23db0)) {
          uVar1 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef23db0,uVar13,uVar3,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = 0x6e756f537465672f;
            if ((uVar13 == 0x6e756f537465672f) && (uVar3 == 0xed0000636e795364)) {
              func_0x000107c6142c(0xed0000636e795364);
            }
            else {
              func_0x000107c605b8(0x6e756f537465672f,0xed0000636e795364,uVar13,uVar3,0);
              func_0x000107c6142c(uVar3);
              if ((uVar1 & 1) == 0) goto LAB_1010b9bbc;
            }
            func_0x0001010b59cc(param_1,FUN_1010b9bf8,puVar2,0x1010b6d7c);
            goto LAB_1010b9bbc;
          }
        }
        func_0x000107c6142c(uVar3);
        func_0x0001010b56d8(param_1,FUN_1010b9bf8,puVar2);
      }
      goto LAB_1010b9bbc;
    }
LAB_1010b9924:
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170(param_1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar5 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar6 = puVar5;
    func_0x000107c5ed90();
    uVar7 = 0xd000000000000026;
    uVar11 = 0x800000010ef240e0;
  }
  else {
    uVar13 = 0x1010b16e0;
    func_0x000107c61568(0x112d5a780);
    if (uVar9 != 0) goto LAB_1010b95f4;
LAB_1010b9ab0:
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar14);
    func_0x000107c61170(param_1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar5 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar6 = puVar5;
    func_0x000107c5ed90();
    uVar7 = 0x2064696c61766e69;
    uVar11 = 0xef74736575716572;
  }
  func_0x000107c5fadc(uVar7,uVar11);
  puVar8 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  (**(code **)(param_3 + 0x10))(param_3,puVar5);
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(puVar5);
  (*pcVar16)(lVar14,uVar1);
  puVar2 = puStack_78;
LAB_1010b9bbc:
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1010b9bf8; end: 1010b9c17;  */

void FUN_1010b9bf8(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001010b9c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1010b9c18; end: 1010b9c73;  */

void FUN_1010b9c18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5a8f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d921638;
  func_0x000107c61520(&UNK_10d921638,&UNK_1103809f0);
  puRam0000000112d5a8f8 = puVar1;
  return;
}



/* Entry: 1010b9c74; end: 1010b9c83;  */

/* WARNING: Removing unreachable block (ram,0x0001010b6410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b9c74(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  uVar18 = param_1;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar15 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar4 + 0x10,auStack_90,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcStack_100 = pcVar1;
    lStack_f8 = lVar14;
    lStack_f0 = lVar2;
    func_0x000107c4dfe8();
    func_0x000107c61180();
    puStack_e8 = puVar15;
    if (param_3 == (undefined *)0x0) {
      func_0x000107c5eea0(lVar12);
      func_0x000107c5ee8c();
      (**(code **)(lVar9 + 8))(lVar12,lVar3);
      *(undefined8 *)(lVar4 + _DAT_112d5a850) = uVar18;
      param_1 = 0;
      if (((*(byte *)(lVar4 + _DAT_112d5a870) & 1) == 0) &&
         ((*(byte *)(lVar4 + _DAT_112d5a878) & 1) == 0)) {
        func_0x0001000d224c(&puStack_c8);
        func_0x0001000a8868(&puStack_c8,uStack_b0);
        (**(code **)(lStack_a8 + 0x48))(uStack_b0,lStack_a8);
        func_0x0001000834e4(&puStack_c8);
      }
      puVar13 = (undefined *)0x0;
      puVar11 = (undefined *)0x0;
      puVar10 = (undefined *)0xe000000000000000;
      uVar17 = 2;
      puVar16 = (undefined *)0xe000000000000000;
    }
    else {
      puVar11 = param_3;
      func_0x000107c51cc8();
      func_0x000107c61180();
      puVar13 = puVar11;
      func_0x000107c5cda4();
      func_0x000107c61170(puVar11);
      puVar11 = PTR___ss6UInt64VN_11034f048;
      puVar16 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      puStack_c8 = puVar13;
      func_0x000107c6057c();
      puVar13 = param_3;
      puVar10 = puVar16;
      func_0x000107c5cdb0(param_3);
      func_0x000107c61180();
      puVar5 = puVar13;
      func_0x000107c5ce2c();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar13 = puVar5;
      func_0x000107c5faec(puVar5);
      func_0x000107c61170(puVar5);
      *(undefined8 *)(lVar4 + _DAT_112d5a850) = param_2;
      func_0x000107c61170(param_3);
      uVar17 = (ulong)(param_4 != 0);
    }
    if ((*(byte *)(lVar4 + _DAT_112d5a878) & 1) == 0) {
      puStack_c8 = (undefined *)0x0;
      puStack_c0 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x66);
      func_0x000107c5fb78(0x666e496b63617274,0xeb00000000203a6f);
      func_0x000107c61434(puVar10);
      func_0x000107c5fb78(puVar13,puVar10);
      puStack_108 = puVar10;
      func_0x000107c6142c(puVar10);
      func_0x000107c5fb78(0x202d20,0xe300000000000000);
      func_0x000107c5fb78(puVar11,puVar16);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0x664f6b6361727420,0xee00203a74657366);
      puVar10 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar13 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      func_0x000107c5fddc(param_1,&puStack_c8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0xd000000000000013,0x800000010ef242e0);
      lVar2 = _DAT_112d5a850;
      func_0x000107c5fddc(*(undefined8 *)(lVar4 + _DAT_112d5a850),&puStack_c8,puVar13,puVar10);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0x53726579616c7020,0xee00203a65746174);
      uVar18 = *(undefined8 *)(&UNK_10d921558 + uVar17 * 8);
      func_0x000107c5fb78(uVar18,0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c5fb78(10,0xe100000000000000);
      func_0x000107c5fb78(0xd000000000000024,0x800000010ef242b0);
      func_0x000107c5fb78(0xd000000000000011,0x800000010ef24300);
      func_0x000107c5fddc(param_1,&puStack_c8,puVar13,puVar10);
      func_0x000107c6142c(puStack_c0);
      uVar19 = *(undefined8 *)(lVar4 + lVar2);
      func_0x000107c61434(puVar16);
      puVar13 = &DAT_112d5a818;
      FUN_1010b4c10(&DAT_112d5a818,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                    PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
      uStack_b0 = 0xe700000000000000;
      puVar10 = puVar13;
      puStack_c8 = puVar11;
      puStack_c0 = puVar16;
      uStack_b8 = uVar18;
      lStack_a8 = param_1;
      uStack_a0 = param_1;
      uStack_98 = uVar19;
      FUN_1010b49e8();
      puVar11 = &UNK_110380e98;
      ppuVar6 = &puStack_c8;
      func_0x000107c5eb4c(ppuVar6,&UNK_110380e98,puVar10);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c6142c(puVar16);
      func_0x000107c61574(puVar13);
      uVar18 = uStack_e0;
      func_0x000107c5d7e0(uStack_e0);
      func_0x000107c61180();
      func_0x000107c5edb4(puStack_e8);
      func_0x000107c61170(uVar18);
      uStack_e0 = 200;
      func_0x00010006c00c(ppuVar6,puVar11);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar10 = PTR_PTR_1126b1ce0;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar5 = puVar10;
      func_0x000107c5ed90();
      uVar18 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010ef23f80);
      puVar7 = puVar13;
      func_0x000107c5f9dc(puVar13,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                         );
      ppuVar8 = ppuVar6;
      func_0x000107c5ee20(ppuVar6,puVar11);
      func_0x000107c4913c(puVar10);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(ppuVar8);
      (*pcStack_100)(puVar10);
      func_0x000107c6142c(puVar13);
      func_0x000107c61170(puVar10);
      func_0x00010006c090(ppuVar6,puVar11);
      func_0x000107c61170(lVar4);
      func_0x00010006c090(ppuVar6,puVar11);
      func_0x000107c6142c(puVar16);
      func_0x000107c6142c(puStack_108);
      (**(code **)(lStack_f8 + 8))(puStack_e8,lStack_f0);
    }
    else {
      puStack_c8 = (undefined *)0x0;
      puStack_c0 = (undefined *)0xe000000000000000;
      func_0x000107c602fc(0x2e);
      func_0x000107c5fb78(0xd000000000000023,0x800000010ef24320);
      func_0x000107c5fb78(*(undefined8 *)(&UNK_10d921558 + uVar17 * 8),0xe700000000000000);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c5fb78(0x203a656d697420,0xe700000000000000);
      func_0x000107c5fddc(*(undefined8 *)(lVar4 + _DAT_112d5a850),&puStack_c8,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(puVar16);
      func_0x000107c61170(lVar4);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puStack_c0);
    }
  }
  return;
}



/* Entry: 1010b9c84; end: 1010b9cb3;  */

void FUN_1010b9c84(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1[3],param_1[4],*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 1010b9cb4; end: 1010b9cef;  */

void FUN_1010b9cb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010b9cf0; end: 1010b9cff;  */

/* WARNING: Removing unreachable block (ram,0x0001010b7860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b9cf0(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long extraout_x8;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  pcStack_108 = *(code **)(unaff_x20 + 0x30);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_100 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar15 = (long)&puStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    func_0x000107c61428(lVar8 + 0x10,&uStack_f0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000022;
    uStack_98 = 0x800000010ef24380;
    func_0x000107c5fb78(uVar16,uVar12);
    uVar16 = uStack_98;
    uVar12 = uStack_a0;
    func_0x0001000d224c(&uStack_a0);
    func_0x0001000a8868(&uStack_a0,uStack_88);
    (**(code **)(lStack_80 + 0x10))(uStack_88,lStack_80);
    func_0x0001000834e4(&uStack_a0);
    func_0x000107c5d7e0(uVar9);
  }
  else {
    lVar17 = *param_1;
    func_0x000107c61428(lVar8 + 0x10,auStack_b8,0,0);
    lVar3 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      if (lVar17 == 0) {
        func_0x000107c61170(lVar3);
      }
      else {
        lVar4 = lVar17;
        func_0x000107c61174();
        func_0x000107c3e734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lStack_118 = lVar4;
          FUN_1010bd674(&uStack_a0);
          puVar5 = &DAT_112d5a818;
          FUN_1010b4c10(&DAT_112d5a818,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                        PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
          uStack_e8 = uStack_98;
          uStack_f0 = uStack_a0;
          uStack_d8 = uStack_88;
          uStack_e0 = uStack_90;
          puStack_c8 = (undefined *)uStack_78;
          puStack_d0 = (undefined8 *)lStack_80;
          uStack_c0 = uStack_70;
          puVar6 = puVar5;
          func_0x0001010b4acc();
          puVar11 = &UNK_110381058;
          puVar7 = &uStack_f0;
          func_0x000107c5eb4c(puVar7,&UNK_110381058,puVar6);
          lStack_128 = lVar17;
          puStack_120 = puVar11;
          func_0x000107c61574(puVar5);
          FUN_1010b4b0c(&uStack_a0);
          uVar14 = *(undefined8 *)(lVar3 + _DAT_112d5a860);
          puStack_c8 = puStack_120;
          uStack_e0 = uVar16;
          uStack_d8 = uVar12;
          puStack_d0 = puVar7;
          func_0x000107c6157c(uVar14);
          func_0x000100075034(FUN_1010b9dfc,&uStack_f0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(uVar14);
          func_0x0001010b7504(1,uVar16,uVar12);
          func_0x000107c5d7e0(uVar9);
          func_0x000107c61180();
          func_0x000107c5edb4(lVar15);
          func_0x000107c61170(uVar9);
          uStack_130 = 200;
          uStack_f0 = 0;
          uStack_e8 = 0xe000000000000000;
          func_0x000107c602fc(0x23);
          func_0x000107c6142c(uStack_e8);
          uStack_f0 = 0xd000000000000021;
          uStack_e8 = 0x800000010ef24350;
          func_0x000107c5fb78(uVar16,uVar12);
          uVar16 = uStack_e8;
          uVar12 = uStack_f0;
          uStack_138 = uStack_e8;
          puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001001830b8();
          puVar11 = PTR_PTR_1126b1ce0;
          puStack_140 = puVar5;
          func_0x000107c610f8(PTR_PTR_1126b1ce0);
          puVar6 = puVar11;
          func_0x000107c5ed90();
          func_0x000107c5fadc(uVar12,uVar16);
          func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                              PTR___sSSSHsWP_11034da90);
          puVar13 = puVar7;
          func_0x000107c5ee20(puVar7,puStack_120);
          func_0x000107c4913c(puVar11);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar13);
          (*pcStack_108)(puVar11);
          func_0x000107c6142c(uStack_138);
          func_0x000107c6142c(puStack_140);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(lStack_118);
          func_0x00010006c090(puVar7,puStack_120);
          func_0x000107c61170(lVar3);
          FUN_100ca2540(lStack_128,cVar1);
          goto LAB_1010b7be8;
        }
        func_0x000107c61170(lVar3);
        FUN_100ca2540(lVar17,cVar1);
      }
    }
    func_0x000107c61428(lVar8 + 0x10,&uStack_f0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    uStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_98);
    uStack_a0 = 0xd000000000000022;
    uStack_98 = 0x800000010ef24380;
    func_0x000107c5fb78(uVar16,uVar12);
    uVar16 = uStack_98;
    uVar12 = uStack_a0;
    func_0x0001000d224c(&uStack_a0);
    func_0x0001000a8868(&uStack_a0,uStack_88);
    (**(code **)(lStack_80 + 0x10))(uStack_88,lStack_80);
    func_0x0001000834e4(&uStack_a0);
    func_0x000107c5d7e0(uVar9);
  }
  func_0x000107c61180();
  func_0x000107c5edb4(lVar15);
  func_0x000107c61170(uVar9);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar11 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar6 = puVar11;
  func_0x000107c5ed90();
  func_0x000107c5fadc(uVar12,uVar16);
  puVar10 = puVar5;
  func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar11);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar10);
  (*pcStack_108)(puVar11);
  func_0x000107c61170(lVar8);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(puVar5);
  func_0x000107c61170(puVar11);
LAB_1010b7be8:
  (**(code **)(lStack_100 + 8))(lVar15,lVar2);
  return;
}



/* Entry: 1010b9d00; end: 1010b9d93;  */

void FUN_1010b9d00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d5a918 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103fcc7b0(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d5a918 = puVar2;
  return;
}



/* Entry: 1010b9d94; end: 1010b9dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b9d94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *param_1;
  puVar4 = auStack_48;
  func_0x000107c61428(lVar3 + 0x10,puVar4,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + _DAT_112d5a840);
    func_0x000107c6157c(uVar5);
    FUN_100c82230();
    func_0x000107c61574(uVar5);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar5 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d5a868);
    uVar6 = puVar1[1];
    *puVar1 = uVar5;
    puVar1[1] = puVar4;
    func_0x000107c6142c(uVar6);
    *(undefined8 *)(lVar3 + _DAT_112d5a850) = 0;
    func_0x0001000d224c(auStack_70);
    lVar2 = lStack_50;
    uVar6 = uStack_58;
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lVar2 + 0x48))(uVar6,lVar2);
    func_0x0001000834e4(auStack_70);
    func_0x0001000d224c(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))(uStack_58,lStack_50);
    func_0x000107c61170(lVar3);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 1010b9dfc; end: 1010b9e37;  */

void FUN_1010b9dfc(void)

{
  func_0x0001010b9c58();
  return;
}



/* Entry: 1010b9e38; end: 1010b9e3f;  */

undefined8 FUN_1010b9e38(void)

{
  return 1;
}



/* Entry: 1010b9e40; end: 1010b9edf;  */

void FUN_1010b9e40(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010b9ee0; end: 1010b9ef7;  */

undefined1  [16] FUN_1010b9ee0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe700000000000000;
  auVar1._0_8_ = 0x64496b63617274;
  return auVar1;
}



/* Entry: 1010b9ef8; end: 1010b9f7b;  */

void FUN_1010b9ef8(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x64496b63617274 && param_3 == -0x1900000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x64496b63617274,0xe700000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1010b9f7c; end: 1010b9f93;  */

undefined1  [16] FUN_1010b9f7c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010b9f94; end: 1010b9fe3;  */

void FUN_1010b9f94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010bbc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010b9fe4; end: 1010ba12b;  */

void FUN_1010b9fe4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [14];
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x112d5a988;
  func_0x0001000285a8(0x112d5a988,&UNK_10d9216a0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  func_0x0001010bbd20();
  func_0x000107c606ec(puVar4,&UNK_110380ba0,&UNK_110380ba0,param_2,uVar1,uVar2);
  uStack_61 = 0;
  func_0x000107c6053c(param_3,param_4,&uStack_61,lVar3);
  if (unaff_x21 == 0) {
    uStack_62 = 1;
    func_0x000107c60548(param_1,&uStack_62,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1010ba12c; end: 1010ba2cf;  */

void FUN_1010ba12c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [5];
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar1 = 0x112d5a998;
  func_0x0001000285a8(0x112d5a998,&UNK_10d9216a8);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar2);
  func_0x0001010bbd60();
  func_0x000107c606ec(puVar4,&UNK_110380b10,&UNK_110380b10,param_3,uVar2,uVar3);
  uStack_69 = 0;
  uVar2 = 0x112d5a9a8;
  uStack_68 = param_4;
  func_0x0001000285a8(0x112d5a9a8,&UNK_10d9216b0);
  uVar3 = 0x112d5a9b0;
  FUN_1010bbda0(0x112d5a9b0,0x112d5a9a8,&UNK_10d9216b0,FUN_1010bbe08);
  func_0x000107c60554(&uStack_68,&uStack_69,lVar1,uVar2,uVar3);
  if (unaff_x21 == 0) {
    uStack_6a = 1;
    func_0x000107c60548(param_1,&uStack_6a,lVar1);
    uStack_6b = 2;
    func_0x000107c60548(param_2,&uStack_6b,lVar1);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 1010ba2d0; end: 1010ba3f7;  */

/* WARNING: Removing unreachable block (ram,0x0001010ba394) */

void FUN_1010ba2d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112d5a948;
  func_0x0001000285a8(0x112d5a948,&UNK_10d921688);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1010bbc20();
  puVar5 = &UNK_110380cc0;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110380cc0,&UNK_110380cc0,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1010ba3f8; end: 1010ba453;  */

void FUN_1010ba3f8(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6f;
  if (cVar2 != '\x01') {
    uVar1 = 0x73;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ba454; end: 1010ba483;  */

void FUN_1010ba454(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe100000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe100000000000000);
  return;
}



/* Entry: 1010ba484; end: 1010ba4db;  */

void FUN_1010ba484(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x6f;
  if (cVar2 != '\x01') {
    uVar1 = 0x73;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ba4dc; end: 1010ba553;  */

void FUN_1010ba4dc(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1010ba554; end: 1010ba58f;  */

void FUN_1010ba554(undefined8 *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73;
  }
  *param_1 = uVar1;
  param_1[1] = 0xe100000000000000;
  return;
}



/* Entry: 1010ba590; end: 1010ba60b;  */

void FUN_1010ba590(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1010ba60c; end: 1010ba623;  */

undefined1  [16] FUN_1010ba60c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010ba624; end: 1010ba673;  */

void FUN_1010ba624(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010bbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010ba674; end: 1010ba68f;  */

void FUN_1010ba674(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010b9fe4(*(undefined4 *)(unaff_x20 + 2),param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1010ba690; end: 1010ba80f;  */

void FUN_1010ba690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6f;
  if (cVar4 != '\x01') {
    uVar1 = 0x656f;
  }
  uVar2 = 0xe100000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe200000000000000;
  }
  uVar3 = 0x73;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  uVar1 = 0xe100000000000000;
  if (cVar4 != '\0') {
    uVar1 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ba810; end: 1010ba883;  */

void FUN_1010ba810(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x6f;
  if (cVar4 != '\x01') {
    uVar1 = 0x656f;
  }
  uVar2 = 0xe100000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe200000000000000;
  }
  uVar3 = 0x73;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  uVar1 = 0xe100000000000000;
  if (cVar4 != '\0') {
    uVar1 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1010ba884; end: 1010ba8af;  */

void FUN_1010ba884(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1010bc6b8(param_2,param_3,0x112d5ab18);
  *param_1 = (char)param_2;
  return;
}



/* Entry: 1010ba8b0; end: 1010ba8c7;  */

undefined1  [16] FUN_1010ba8b0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010ba8c8; end: 1010ba917;  */

void FUN_1010ba8c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010bbd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010ba918; end: 1010ba933;  */

void FUN_1010ba918(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010ba12c(*(undefined4 *)(unaff_x20 + 1),*(undefined4 *)((long)unaff_x20 + 0xc),param_1,
                *unaff_x20);
  return;
}



/* Entry: 1010ba934; end: 1010bab2b;  */

void FUN_1010ba934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar2 = 0x4e59535f48434952;
  if (cVar3 != '\x01') {
    uVar2 = 0x4e59535f454e494c;
  }
  uVar1 = 0x7465736e75;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe900000000000043;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010bab2c; end: 1010bab8f;  */

void FUN_1010bab2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar2 = 0x4e59535f48434952;
  if (cVar3 != '\x01') {
    uVar2 = 0x4e59535f454e494c;
  }
  uVar1 = 0x7465736e75;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar2 = 0xe900000000000043;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1010bab90; end: 1010babdb;  */

void FUN_1010bab90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010bc788();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1010babdc; end: 1010badbf;  */

void FUN_1010babdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar2 = 0x112d5a958;
  uStack_78 = param_5;
  func_0x0001000285a8(0x112d5a958,&UNK_10d921690);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  func_0x0001010bbc60();
  func_0x000107c606ec(auStack_80 + -extraout_x8,&UNK_110380c30,&UNK_110380c30,param_2,uVar3,uVar4);
  uStack_61 = 0;
  func_0x000107c60560(param_3,&uStack_61,lVar2);
  uVar1 = uStack_78;
  if (unaff_x21 == 0) {
    uStack_71 = 1;
    uVar3 = 0x112d5a968;
    uStack_70 = param_4;
    func_0x0001000285a8(0x112d5a968,&UNK_10d921698);
    uVar4 = 0x112d5a970;
    FUN_1010bbda0(0x112d5a970,0x112d5a968,&UNK_10d921698,0x1010bbca0);
    func_0x000107c60554(&uStack_70,&uStack_71,lVar2,uVar3,uVar4);
    uStack_72 = 2;
    puVar5 = &uStack_72;
    func_0x000107c60548(param_1,puVar5,lVar2);
    uStack_73 = (undefined1)uVar1;
    uStack_74 = 3;
    func_0x0001010bbce0();
    func_0x000107c60554(&uStack_73,&uStack_74,lVar2,&UNK_110380d50,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,lVar2);
  return;
}



/* Entry: 1010badc0; end: 1010bb01b;  */

void FUN_1010badc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xec0000006e6f6974;
  uVar4 = 0x6172754470696c63;
  if (bVar3 != 2) {
    uVar5 = 0xea00000000006570;
    uVar4 = 0x795473636972796c;
  }
  uVar1 = 0x64496b63617274;
  if (bVar3 != 0) {
    uVar1 = 0x73656e696c;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe500000000000000;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010bb01c; end: 1010bb127;  */

void FUN_1010bb01c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xec0000006e6f6974;
  uVar4 = 0x6172754470696c63;
  if (bVar3 != 2) {
    uVar5 = 0xea00000000006570;
    uVar4 = 0x795473636972796c;
  }
  uVar1 = 0x64496b63617274;
  if (bVar3 != 0) {
    uVar1 = 0x73656e696c;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar2 = 0xe500000000000000;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



/* Entry: 1010bb128; end: 1010bb14b;  */

void FUN_1010bb128(undefined1 *param_1,undefined1 param_2)

{
  FUN_1010bc724();
  *param_1 = param_2;
  return;
}



/* Entry: 1010bb14c; end: 1010bb163;  */

undefined1  [16] FUN_1010bb14c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010bb164; end: 1010bb1b3;  */

void FUN_1010bb164(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010bbc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010bb1b4; end: 1010bb1d3;  */

void FUN_1010bb1b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010babdc(*(undefined4 *)(unaff_x20 + 2),param_1,*unaff_x20,unaff_x20[1],
                *(undefined1 *)((long)unaff_x20 + 0x14));
  return;
}



/* Entry: 1010bb1d4; end: 1010bb4f3;  */

undefined * FUN_1010bb1d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010bb2d4);
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
    puVar3 = (undefined *)0x112d52660;
    func_0x0001000285a8(0x112d52660,&UNK_10d921580);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1010bb4f4; end: 1010bb6f3;  */

undefined8 FUN_1010bb4f4(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 uVar15;
  
  lVar9 = *(long *)(param_2 + 0x10);
  if (lVar9 != 0) {
    lVar12 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      plVar1 = (long *)(param_2 + 0x20 + lVar12 * 0x10);
      lVar11 = *plVar1;
      lVar14 = plVar1[1];
      lVar10 = *(long *)(lVar11 + 0x10);
      if (lVar10 == 0) {
        func_0x000107c61434(lVar11);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000107c61434(lVar11);
        puVar13 = (undefined4 *)(lVar11 + 0x30);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          uVar2 = *(undefined8 *)(puVar13 + -4);
          uVar4 = *(undefined8 *)(puVar13 + -2);
          uVar15 = *puVar13;
          func_0x000107c61434(uVar4);
          puVar5 = puVar6;
          func_0x000107c61558();
          puVar7 = puVar6;
          if (((ulong)puVar5 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x0001010bb3dc(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar3 = *(ulong *)(puVar7 + 0x10);
          puVar6 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x0001010bb3dc(puVar6,uVar3 + 1,1,puVar7);
          }
          puVar13 = puVar13 + 6;
          *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar6 + uVar3 * 0x18 + 0x20) = uVar2;
          *(undefined8 *)(puVar6 + uVar3 * 0x18 + 0x28) = uVar4;
          *(undefined4 *)(puVar6 + uVar3 * 0x18 + 0x30) = uVar15;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      func_0x000107c61434(puVar6);
      func_0x000107c6142c(lVar11);
      puVar5 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar5 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001010bb2d4(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar3 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001010bb2d4(puVar8,uVar3 + 1,1,puVar7);
      }
      lVar12 = lVar12 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      *(undefined **)(puVar8 + uVar3 * 0x10 + 0x20) = puVar6;
      *(long *)(puVar8 + uVar3 * 0x10 + 0x28) = lVar14;
      func_0x000107c6142c(puVar6);
    } while (lVar12 != lVar9);
  }
  return param_1;
}



/* Entry: 1010bb6f4; end: 1010bb727;  */

undefined8 * FUN_1010bb6f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010bb728; end: 1010bb77b;  */

undefined8 * FUN_1010bb728(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1010bb77c; end: 1010bb78f;  */

void FUN_1010bb77c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1010bb790; end: 1010bb7cb;  */

undefined8 * FUN_1010bb790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1010bb7cc; end: 1010bb86b;  */

int FUN_1010bb7cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010bb86c; end: 1010bb8bf;  */

undefined8 * FUN_1010bb86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  return param_1;
}



/* Entry: 1010bb8c0; end: 1010bb8fb;  */

undefined8 * FUN_1010bb8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1010bb8fc; end: 1010bb98f;  */

int FUN_1010bb8fc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010bb990; end: 1010bb9cb;  */

undefined8 * FUN_1010bb990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1010bb9cc; end: 1010bba27;  */

undefined8 * FUN_1010bb9cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  return param_1;
}



/* Entry: 1010bba28; end: 1010bba3b;  */

void FUN_1010bba28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1010bba3c; end: 1010bba7f;  */

undefined8 * FUN_1010bba3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  return param_1;
}



/* Entry: 1010bba80; end: 1010bbb1b;  */

int FUN_1010bba80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x15) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


