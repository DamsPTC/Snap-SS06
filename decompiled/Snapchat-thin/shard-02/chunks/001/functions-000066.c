/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018894b0; end: 10188954b;  */

undefined8 FUN_1018894b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100402074(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10188954c; end: 10188954f;  */

uint FUN_10188954c(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  func_0x000107c5fab8(param_1,unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)),
                      *(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return (uint)param_1 & 1;
}



/* Entry: 101889550; end: 10188958b;  */

uint FUN_101889550(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  func_0x000107c5fab8(param_1,unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)),
                      *(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return (uint)param_1 & 1;
}



/* Entry: 10188958c; end: 101889bb7;  */

/* WARNING: Possible PIC construction at 0x000101889980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101889a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101889ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101889b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101889ad8) */
/* WARNING: Removing unreachable block (ram,0x000101889a24) */
/* WARNING: Removing unreachable block (ram,0x000101889b04) */
/* WARNING: Removing unreachable block (ram,0x000101889a6c) */
/* WARNING: Removing unreachable block (ram,0x000101889984) */
/* WARNING: Removing unreachable block (ram,0x000101889b50) */
/* WARNING: Removing unreachable block (ram,0x000101889b78) */
/* WARNING: Removing unreachable block (ram,0x000101889b98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188958c(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 *param_6,undefined8 param_7,long param_8)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uStack_110;
  uint uStack_104;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar5 = 0;
  uStack_d8 = param_3;
  lStack_d0 = param_5;
  uStack_c8 = param_7;
  puStack_b8 = param_1;
  func_0x000107c60188(0,param_8);
  lStack_c0 = *(long *)(lVar5 + -8);
  lStack_e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar5 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lVar13 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12_01;
  pcVar11 = (code *)param_6[7];
  if (pcVar11 == (code *)0x0) {
LAB_1018896f4:
    pcVar11 = (code *)param_6[0xc];
    lStack_d0 = param_2;
    if (pcVar11 != (code *)0x0) {
      uVar14 = param_6[0xd];
      uVar12 = *(ulong *)(param_2 + _DAT_113803420);
      func_0x000107c6157c(uVar14);
      (*pcVar11)();
      func_0x000100cbd774(pcVar11,uVar14);
      if ((uVar12 & 1) == 0) {
        uVar14 = *param_6;
        uVar9 = param_6[1];
        puStack_b8[6] = 0;
        puStack_b8[5] = 0;
        puStack_b8[8] = 0;
        puStack_b8[7] = 0;
        puStack_b8[10] = 0;
        puStack_b8[9] = 0;
        puStack_b8[0xc] = 0;
        puStack_b8[0xb] = 0;
        *puStack_b8 = uVar14;
        puStack_b8[1] = uVar9;
        puStack_b8[3] = 0;
        puStack_b8[2] = 2;
        goto LAB_101889804;
      }
    }
    uStack_110 = param_6[2];
    pcVar11 = (code *)auStack_a0;
    func_0x000107c61570(pcVar11,uStack_d8);
    pcStack_100 = *(code **)(lVar13 + 0x10);
    lStack_f0 = lVar13;
    (*pcStack_100)(lVar10);
    (*pcVar11)(auStack_a0,0);
    lVar13 = param_6[9];
    uVar14 = param_6[10];
    if (lVar13 == 0) {
      uVar9 = 0;
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = &UNK_11040b0a0;
      func_0x000107c613fc(&UNK_11040b0a0,0x30,7);
      *(undefined8 *)(puVar15 + 0x10) = uStack_c8;
      *(long *)(puVar15 + 0x18) = param_8;
      *(long *)(puVar15 + 0x20) = lVar13;
      *(undefined8 *)(puVar15 + 0x28) = uVar14;
      uVar9 = 0x10188af64;
    }
    uStack_90 = uStack_c8;
    lStack_88 = param_8;
    lStack_80 = lVar10;
    uStack_78 = uVar9;
    puStack_70 = puVar15;
    func_0x000100cbd6fc(lVar13,uVar14);
    puVar2 = PTR___sSbN_11034dd40;
    uVar14 = 0x4000001;
    func_0x000107c614d8(0x4000001,param_8,PTR___sSbN_11034dd40);
    uVar6 = 0;
    func_0x000107c60188(0,uVar14);
    FUN_101889bb8(auStack_b0,FUN_10188aee0,auStack_a0,uVar6,PTR___ss5NeverON_11034ee88,puVar2,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000100cbd774(uVar9,puVar15);
    uStack_104 = (uint)(byte)auStack_b0[0];
    pcVar11 = (code *)param_6[3];
    uVar14 = param_6[4];
    cVar1 = *(char *)(param_6 + 5);
    func_0x000107c6157c(uVar14);
    if (cVar1 == '\x01') {
      (*pcVar11)(lStack_d0,lVar10);
    }
    else {
      (*pcVar11)(lVar5,lStack_d0);
    }
    func_0x000100402290(pcVar11,uVar14,cVar1);
    lVar4 = lStack_c0;
    lVar3 = lStack_e0;
    lVar13 = lStack_e8;
    (**(code **)(lStack_c0 + 0x10))(lStack_e8,lVar5,lStack_e0);
    lVar10 = lStack_f0;
    lVar7 = lVar13;
    (**(code **)(lStack_f0 + 0x30))(lVar13,1,param_8);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar4 + 8))(lVar13,lVar3);
      uVar9 = param_6[1];
      puStack_b8[8] = param_8;
      func_0x0001000a9d90(puStack_b8 + 5);
      (*pcStack_100)();
    }
    else {
      lStack_d0 = lVar5;
      (**(code **)(lVar10 + 0x20))(lVar8,lVar13,param_8);
      uVar9 = param_6[6];
      uStack_90 = uStack_c8;
      uVar14 = 0xff;
      auStack_b0[0] = uVar9;
      lStack_88 = param_8;
      lStack_80 = lVar8;
      uStack_78 = uVar9;
      func_0x00010188b18c(0xff,param_8);
      func_0x000107c5fc80(0,uVar14);
    }
  }
  else {
    uVar14 = param_6[8];
    func_0x000107c6157c(uVar14);
    (*pcVar11)(param_4,lStack_d0,param_2);
    func_0x000100cbd774(pcVar11,uVar14);
    if ((param_4 & 1) != 0) goto LAB_1018896f4;
    uVar14 = *param_6;
    uVar9 = param_6[1];
    puStack_b8[6] = 0;
    puStack_b8[5] = 0;
    puStack_b8[8] = 0;
    puStack_b8[7] = 0;
    puStack_b8[10] = 0;
    puStack_b8[9] = 0;
    puStack_b8[0xc] = 0;
    puStack_b8[0xb] = 0;
    *puStack_b8 = uVar14;
    puStack_b8[1] = uVar9;
    puStack_b8[2] = 0;
    puStack_b8[3] = 0;
LAB_101889804:
    *(undefined1 *)(puStack_b8 + 4) = 0;
    *(undefined2 *)(puStack_b8 + 0xd) = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar9);
  return;
}



/* Entry: 101889bb8; end: 101889d47;  */

void FUN_101889bb8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  
  lVar4 = *(long *)(param_5 + -8);
  lStack_80 = param_5;
  uStack_78 = param_8;
  uStack_70 = param_3;
  pcStack_68 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar6 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar7 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar7);
  uVar2 = 1;
  lVar1 = lVar7;
  (**(code **)(lVar3 + 0x30))(lVar7,1,lVar8);
  if ((int)lVar1 != 1) {
    (**(code **)(lVar3 + 0x20))(lVar5,lVar7,lVar8);
    (*pcStack_68)(param_1,lVar5,lVar6);
    (**(code **)(lVar3 + 8))(lVar5,lVar8);
    if (unaff_x21 != 0) {
      (**(code **)(lVar4 + 0x20))(uStack_78,lVar6,lStack_80);
      return;
    }
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,uVar2,1);
  return;
}



/* Entry: 101889d48; end: 101889d67;  */

void FUN_101889d48(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  return;
}



/* Entry: 101889d68; end: 101889db3;  */

void FUN_101889d68(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101889db4; end: 101889dc7;  */

bool FUN_101889db4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101889dc8; end: 10188a047;  */

void FUN_101889dc8(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xd000000000000011;
  pcVar6 = "_binding_common_track_info";
  if (bVar3 == 2) {
    uVar5 = 0xd000000000000012;
    pcVar6 = "compute_returned_nil_legacy_set";
  }
  uVar1 = 0xef65736c61665f6e;
  uVar4 = 0x6f697469646e6f63;
  if (bVar3 != 0) {
    uVar1 = 0x800000010efbbfd0;
    uVar4 = 0xd000000000000014;
  }
  uVar2 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10188a048; end: 10188a0db;  */

void FUN_10188a048(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0xd000000000000011;
  pcVar6 = "_binding_common_track_info";
  if (bVar3 == 2) {
    uVar5 = 0xd000000000000012;
    pcVar6 = "compute_returned_nil_legacy_set";
  }
  uVar1 = 0xef65736c61665f6e;
  uVar4 = 0x6f697469646e6f63;
  if (bVar3 != 0) {
    uVar1 = 0x800000010efbbfd0;
    uVar4 = 0xd000000000000014;
  }
  uVar2 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10188a0dc; end: 10188a13f;  */

ulong FUN_10188a0dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10188a140; end: 10188a143;  */

void FUN_10188a140(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dccda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98fae8;
  func_0x000107c61520(&UNK_10d98fae8,&UNK_11040afe8);
  puRam0000000112dccda8 = puVar1;
  return;
}



/* Entry: 10188a144; end: 10188a183;  */

void FUN_10188a144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dccda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98fae8;
  func_0x000107c61520(&UNK_10d98fae8,&UNK_11040afe8);
  puRam0000000112dccda8 = puVar1;
  return;
}



/* Entry: 10188a184; end: 10188a343;  */

undefined8 * FUN_10188a184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar6);
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  func_0x00010040206c(uVar6,uVar1,uVar3);
  uVar7 = param_1[3];
  uVar2 = param_1[4];
  param_1[3] = uVar6;
  param_1[4] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar3;
  func_0x000100402290(uVar7,uVar2,uVar4);
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar5 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar5 == 0) goto LAB_10188a26c;
    uVar6 = param_2[8];
    param_1[7] = lVar5;
    param_1[8] = uVar6;
    func_0x000107c6157c();
  }
  else if (lVar5 == 0) {
    func_0x000107c61574(param_1[8]);
LAB_10188a26c:
    lVar5 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar5;
  }
  else {
    uVar6 = param_2[8];
    uVar7 = param_1[8];
    param_1[7] = lVar5;
    param_1[8] = uVar6;
    func_0x000107c6157c();
    func_0x000107c61574(uVar7);
  }
  lVar5 = param_2[9];
  if (param_1[9] == 0) {
    if (lVar5 != 0) {
      uVar6 = param_2[10];
      param_1[9] = lVar5;
      param_1[10] = uVar6;
      func_0x000107c6157c();
      goto LAB_10188a2cc;
    }
  }
  else {
    if (lVar5 != 0) {
      uVar6 = param_2[10];
      uVar7 = param_1[10];
      param_1[9] = lVar5;
      param_1[10] = uVar6;
      func_0x000107c6157c();
      func_0x000107c61574(uVar7);
      goto LAB_10188a2cc;
    }
    func_0x000107c61574(param_1[10]);
  }
  lVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar5;
LAB_10188a2cc:
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  lVar5 = param_2[0xc];
  if (param_1[0xc] == 0) {
    if (lVar5 != 0) {
      uVar6 = param_2[0xd];
      param_1[0xc] = lVar5;
      param_1[0xd] = uVar6;
      func_0x000107c6157c();
      return param_1;
    }
  }
  else {
    if (lVar5 != 0) {
      uVar6 = param_2[0xd];
      uVar7 = param_1[0xd];
      param_1[0xc] = lVar5;
      param_1[0xd] = uVar6;
      func_0x000107c6157c();
      func_0x000107c61574(uVar7);
      return param_1;
    }
    func_0x000107c61574(param_1[0xd]);
  }
  lVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar5;
  return param_1;
}



/* Entry: 10188a344; end: 10188a4a7;  */

undefined8 * FUN_10188a344(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar3 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  func_0x000107c61574(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x000100402290(uVar3,uVar5,uVar2);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar3);
  lVar4 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar4 == 0) goto LAB_10188a3ec;
    uVar3 = param_2[8];
    param_1[7] = lVar4;
    param_1[8] = uVar3;
  }
  else if (lVar4 == 0) {
    func_0x000107c61574(param_1[8]);
LAB_10188a3ec:
    lVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar4;
  }
  else {
    uVar5 = param_2[8];
    uVar3 = param_1[8];
    param_1[7] = lVar4;
    param_1[8] = uVar5;
    func_0x000107c61574(uVar3);
  }
  lVar4 = param_2[9];
  if (param_1[9] == 0) {
    if (lVar4 != 0) {
      uVar3 = param_2[10];
      param_1[9] = lVar4;
      param_1[10] = uVar3;
      goto LAB_10188a440;
    }
  }
  else {
    if (lVar4 != 0) {
      uVar5 = param_2[10];
      uVar3 = param_1[10];
      param_1[9] = lVar4;
      param_1[10] = uVar5;
      func_0x000107c61574(uVar3);
      goto LAB_10188a440;
    }
    func_0x000107c61574(param_1[10]);
  }
  lVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar4;
LAB_10188a440:
  lVar4 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  if (param_1[0xc] == 0) {
    if (lVar4 != 0) {
      uVar3 = param_2[0xd];
      param_1[0xc] = lVar4;
      param_1[0xd] = uVar3;
      return param_1;
    }
  }
  else {
    if (lVar4 != 0) {
      uVar5 = param_2[0xd];
      uVar3 = param_1[0xd];
      param_1[0xc] = lVar4;
      param_1[0xd] = uVar5;
      func_0x000107c61574(uVar3);
      return param_1;
    }
    func_0x000107c61574(param_1[0xd]);
  }
  lVar4 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar4;
  return param_1;
}



/* Entry: 10188a4a8; end: 10188a54b;  */

int FUN_10188a4a8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10188a54c; end: 10188a5a3;  */

/* WARNING: Possible PIC construction at 0x00010188a57c: Changing call to branch */

void FUN_10188a54c(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  FUN_10188a5a4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined1 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x40) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x28);
  }
  if ((*(byte *)(*(long *)(puVar1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*puVar1);
  return;
}



/* Entry: 10188a5a4; end: 10188a5bb;  */

void FUN_10188a5a4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 10188a5bc; end: 10188a7c7;  */

undefined8 * FUN_10188a5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  FUN_101874c80(uVar4,uVar1,uVar2);
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  lVar3 = param_2[8];
  if (lVar3 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    lVar3 = param_2[0xc];
  }
  else {
    param_1[8] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 5,param_2 + 5);
    lVar3 = param_2[0xc];
  }
  if (lVar3 == 0) {
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
  }
  else {
    param_1[0xc] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 9,param_2 + 9);
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  return param_1;
}



/* Entry: 10188a7c8; end: 10188a91f;  */

/* WARNING: Possible PIC construction at 0x00010188a8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010188a8b0) */

void FUN_10188a7c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 == param_2) {
    return;
  }
  lVar3 = param_1[3];
  lVar5 = param_2[3];
  if (lVar3 == lVar5) {
    if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010188a878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
      return;
    }
    uVar4 = *param_1;
    func_0x000107c6157c(*param_2);
  }
  else {
    param_1[3] = lVar5;
    lVar6 = *(long *)(lVar3 + -8);
    lVar7 = *(long *)(lVar5 + -8);
    uVar1 = *(uint *)(lVar7 + 0x50);
    if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) == 0) {
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        func_0x000107c6157c();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
      return;
    }
    uVar4 = *param_1;
    if ((uVar1 >> 0x11 & 1) == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    }
    else {
      uVar2 = *param_2;
      *param_1 = uVar2;
      func_0x000107c6157c(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 10188a920; end: 10188a94b;  */

void FUN_10188a920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x5a);
  *(undefined8 *)((long)param_1 + 0x62) = *(undefined8 *)((long)param_2 + 0x62);
  *(undefined8 *)((long)param_1 + 0x5a) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 10188a94c; end: 10188a9eb;  */

undefined8 * FUN_10188a94c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  func_0x000107c6142c(uVar3);
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar5 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar1;
  FUN_10188a5a4(uVar5,uVar3,uVar2);
  if (param_1[8] != 0) {
    func_0x000100183ab8(param_1 + 5);
  }
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  if (param_1[0xc] != 0) {
    func_0x000100183ab8(param_1 + 9);
  }
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  return param_1;
}



/* Entry: 10188a9ec; end: 10188ad1b;  */

int FUN_10188a9ec(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x6a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10188ad1c; end: 10188ad63;  */

undefined8 * FUN_10188ad1c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10188ad64; end: 10188ad77;  */

undefined8 * FUN_10188ad64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*(code *)&SUB_10040206c)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*(code *)&SUB_100402290)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10188ad78; end: 10188add7;  */

undefined8 *
FUN_10188ad78(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10188add8; end: 10188ade3;  */

undefined8 * FUN_10188add8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*(code *)&SUB_100402290)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10188ade4; end: 10188ae27;  */

undefined8 * FUN_10188ade4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10188ae28; end: 10188aedf;  */

int FUN_10188ae28(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10188aee0; end: 10188af2f;  */

void FUN_10188aee0(byte *param_1,undefined8 *param_2)

{
  long unaff_x20;
  byte bStack_21;
  
  (*(code *)*param_2)(&bStack_21,*(undefined8 *)(unaff_x20 + 0x20));
  *param_1 = (bStack_21 ^ 0xff) & 1;
  return;
}



/* Entry: 10188af30; end: 10188af8f;  */

uint FUN_10188af30(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(param_1 + 0x10))(uVar1);
  return (uint)uVar1 & 1;
}



/* Entry: 10188af90; end: 10188afb3;  */

long FUN_10188af90(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10188afb4; end: 10188b04f;  */

long FUN_10188afb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10188b050; end: 10188b0b7;  */

undefined8 * FUN_10188b050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 10188b0b8; end: 10188b103;  */

undefined8 * FUN_10188b0b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10188b104; end: 10188b197;  */

int FUN_10188b104(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10188b198; end: 10188b1e3;  */

undefined8 FUN_10188b198(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010040328c(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10188b1e4; end: 10188b57b;  */

void FUN_10188b1e4(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 *param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_7 + -8);
  lVar4 = param_7;
  lStack_88 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_90 = lVar9;
  func_0x00010188c084(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  pcVar8 = (code *)param_6[6];
  if (pcVar8 != (code *)0x0) {
    uVar6 = param_6[7];
    func_0x000107c6157c(uVar6);
    (*pcVar8)(param_4,param_5);
    lVar4 = lStack_88;
    if ((param_4 & 1) == 0) {
      uStack_68 = param_6[1];
      uStack_70 = *param_6;
      if (lStack_88 == 0) {
        func_0x000100402194(&uStack_70,auStack_80);
        func_0x00010188ca40(pcVar8,uVar6);
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
      }
      else {
        lVar3 = lStack_88;
        func_0x000107c614f0();
        param_1[8] = lVar3;
        func_0x000100402194(&uStack_70,auStack_80);
        func_0x000107c615f0(lVar4);
        func_0x00010188ca40(pcVar8,uVar6);
      }
      param_1[5] = lVar4;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[0xc] = 0;
      param_1[0xb] = 0;
      param_1[1] = uStack_68;
      *param_1 = uStack_70;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined2 *)(param_1 + 0xd) = 2;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0xe] = 0;
      *(undefined1 *)(param_1 + 0x11) = 0xff;
      return;
    }
    func_0x00010188ca40(pcVar8,uVar6);
  }
  (*(code *)param_6[4])(lVar9,param_2);
  lVar5 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,2,param_7);
  lVar3 = lStack_88;
  lVar4 = lStack_90;
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))(lStack_90,lVar9,param_7);
    lVar3 = lStack_88;
    if (lStack_88 == 0) {
      lVar5 = 0;
      lVar9 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      lVar9 = lStack_88;
      func_0x000107c614f0();
      lVar5 = lVar3;
    }
    param_1[5] = lVar5;
    param_1[8] = lVar9;
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    param_1[0xc] = param_7;
    func_0x0001000a9d90(param_1 + 9);
    (**(code **)(lVar7 + 0x10))();
    uVar6 = *param_6;
    param_1[1] = param_6[1];
    *param_1 = uVar6;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined2 *)(param_1 + 0xd) = 2;
    uVar6 = param_6[2];
    uVar1 = param_6[3];
    func_0x000107c615f0(lVar3);
    func_0x000100402194(&uStack_70,auStack_80);
    func_0x000107c61434(uVar1);
    lVar3 = lVar4;
    func_0x000107c605b0(lVar4,param_7);
    (**(code **)(lVar7 + 8))(lVar4,param_7);
    param_1[0xe] = uVar6;
    param_1[0xf] = uVar1;
    param_1[0x10] = lVar3;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else if ((int)lVar5 == 1) {
    if (lStack_88 == 0) {
      lVar9 = 0;
      lVar4 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      lVar4 = lStack_88;
      func_0x000107c614f0();
      lVar9 = lVar3;
    }
    param_1[5] = lVar9;
    param_1[8] = lVar4;
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined2 *)(param_1 + 0xd) = 2;
    uVar6 = param_6[3];
    param_1[0xe] = param_6[2];
    param_1[0xf] = uVar6;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0x11) = 1;
    func_0x000107c615f0(lVar3);
    func_0x000100402194(&uStack_70,auStack_80);
    func_0x000107c61434(uVar6);
  }
  else {
    if (lStack_88 == 0) {
      lVar9 = 0;
      lVar4 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      lVar4 = lStack_88;
      func_0x000107c614f0();
      lVar9 = lVar3;
    }
    param_1[5] = lVar9;
    param_1[8] = lVar4;
    uStack_68 = param_6[1];
    uStack_70 = *param_6;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    uVar2 = *(undefined1 *)(param_6 + 8);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = 0;
    param_1[2] = 1;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)((long)param_1 + 0x69) = uVar2;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0xff;
    func_0x000107c615f0(lVar3);
    func_0x000100402194(&uStack_70,auStack_80);
  }
  return;
}



/* Entry: 10188b57c; end: 10188b59b;  */

void FUN_10188b57c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  return;
}



/* Entry: 10188b59c; end: 10188b5cf;  */

void FUN_10188b59c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10188b5d0; end: 10188b5d7;  */

void FUN_10188b5d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10188b5d8; end: 10188b62f;  */

void FUN_10188b5d8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    func_0x000107c61530(param_1,0,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 10188b630; end: 10188b7cb;  */

long * FUN_10188b630(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  uVar6 = (uint)uVar7;
  uVar4 = uVar7;
  if (uVar1 < 2) {
    if (uVar6 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
      uVar4 = 2;
      if (0xfffe < uVar2) {
        uVar4 = 4;
      }
      if (uVar2 < 0xff) {
        uVar4 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar4 = 1;
    }
    uVar4 = uVar4 + uVar7;
  }
  uVar5 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && uVar4 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,2,lVar8);
    if ((int)plVar3 != 0) {
      if (uVar1 < 2) {
        if (uVar6 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
          uVar4 = 2;
          if (0xfffe < uVar1) {
            uVar4 = 4;
          }
          if (uVar1 < 0xff) {
            uVar4 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar4 = 1;
        }
        uVar7 = uVar4 + uVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
      return param_1;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10188b7cc; end: 10188b91b;  */

void FUN_10188b7cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010188b824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Entry: 10188b91c; end: 10188ba73;  */

undefined8 FUN_10188b91c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar2 = param_1;
  (*pcVar8)(param_1,2,lVar6);
  uVar3 = param_2;
  (*pcVar8)(param_2,2,lVar6);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar6);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar6);
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_10188b9fc;
    if (3 < (uint)lVar6) goto LAB_10188b984;
LAB_10188b9b8:
    uVar1 = (int)lVar6 << 3;
    uVar4 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar4) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar5 = 2;
    if (0xfffe < uVar4) {
      uVar5 = 4;
    }
    if (uVar4 < 0xff) {
      uVar5 = (ulong)(uVar4 != 0);
    }
  }
  else {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar6);
      return param_1;
    }
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_10188b9fc;
    if ((uint)lVar6 < 4) goto LAB_10188b9b8;
LAB_10188b984:
    uVar5 = 1;
  }
  lVar6 = uVar5 + lVar6;
LAB_10188b9fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
  return param_1;
}



/* Entry: 10188ba74; end: 10188bb67;  */

undefined8 FUN_10188ba74(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,2,lVar4);
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(lVar5 + 0x40);
    if (*(uint *)(lVar5 + 0x54) < 2) {
      if ((uint)lVar4 < 4) {
        uVar1 = (uint)lVar4 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar5 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar3 = 2;
        if (0xfffe < uVar1) {
          uVar3 = 4;
        }
        if (uVar1 < 0xff) {
          uVar3 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar3 = 1;
      }
      lVar4 = uVar3 + lVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar4);
    return param_1;
  }
  (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar4);
  (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar4);
  return param_1;
}



/* Entry: 10188bb68; end: 10188bcbf;  */

undefined8 FUN_10188bb68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar2 = param_1;
  (*pcVar8)(param_1,2,lVar6);
  uVar3 = param_2;
  (*pcVar8)(param_2,2,lVar6);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar6);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar6);
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_10188bc48;
    if (3 < (uint)lVar6) goto LAB_10188bbd0;
LAB_10188bc04:
    uVar1 = (int)lVar6 << 3;
    uVar4 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar4) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar5 = 2;
    if (0xfffe < uVar4) {
      uVar5 = 4;
    }
    if (uVar4 < 0xff) {
      uVar5 = (ulong)(uVar4 != 0);
    }
  }
  else {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar6);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar6);
      return param_1;
    }
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_10188bc48;
    if ((uint)lVar6 < 4) goto LAB_10188bc04;
LAB_10188bbd0:
    uVar5 = 1;
  }
  lVar6 = uVar5 + lVar6;
LAB_10188bc48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
  return param_1;
}



/* Entry: 10188bcc0; end: 10188be3b;  */

int FUN_10188bcc0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar3) {
    uVar1 = uVar3 - 2;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar7 < 4) {
      uVar4 = (uint)lVar7 << 3;
      uVar4 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar4 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar4) {
        uVar9 = 4;
      }
      if (uVar4 < 0xff) {
        uVar9 = (ulong)(uVar4 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar7 = uVar9 + lVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10188bdb8;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10188bdb8;
      goto LAB_10188bd50;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_10188bd50:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_10188bdb8:
  if (uVar3 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if (1 < (uint)param_1) {
    iVar2 = (uint)param_1 - 2;
  }
  return iVar2;
}



/* Entry: 10188be3c; end: 10188c057;  */

void FUN_10188be3c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar3 - 2;
  }
  lVar10 = *(long *)(lVar6 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar10 < 4) {
      uVar9 = (uint)lVar10 << 3;
      uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar9) {
        uVar7 = 4;
      }
      if (uVar9 < 0xff) {
        uVar7 = (ulong)(uVar9 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    lVar10 = uVar7 + lVar10;
  }
  uVar9 = (uint)lVar10;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar9 < 4) {
      bVar5 = bVar8;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar10);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar10);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar10) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar10) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar10) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar10) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar10) = 0;
    }
    if ((param_2 != 0) && (2 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010188bfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 2);
      return;
    }
  }
  return;
}



/* Entry: 10188c058; end: 10188c0a3;  */

void FUN_10188c058(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010188c068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,2);
  return;
}



/* Entry: 10188c0a4; end: 10188c16b;  */

undefined8 * FUN_10188c0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x00010178e0e0(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10188c16c; end: 10188c1b7;  */

undefined8 * FUN_10188c16c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_10178e0a0(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10188c1b8; end: 10188c26b;  */

int FUN_10188c1b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10188c26c; end: 10188c40b;  */

undefined8 * FUN_10188c26c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[5];
  uVar2 = param_2[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  lVar1 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[7];
      param_1[6] = lVar1;
      param_1[7] = uVar2;
      func_0x000107c6157c();
      goto LAB_10188c338;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[7];
      uVar3 = param_1[7];
      param_1[6] = lVar1;
      param_1[7] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      goto LAB_10188c338;
    }
    func_0x000107c61574(param_1[7]);
  }
  lVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar1;
LAB_10188c338:
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 10188c40c; end: 10188c4a7;  */

int FUN_10188c40c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10188c4a8; end: 10188c517;  */

void FUN_10188c4a8(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  FUN_10188a5a4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined1 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000100183ab8(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000100183ab8(param_1 + 0x48);
  }
  cVar1 = *(char *)(param_1 + 0x88);
  if (cVar1 != -1) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x000107c6142c(*(undefined8 *)(param_1 + 0x78));
    if (cVar1 == '\x01') {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 10188c518; end: 10188c81f;  */

undefined8 * FUN_10188c518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  FUN_101874c80(uVar6,uVar1,uVar2);
  param_1[2] = uVar6;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar2;
  lVar4 = param_2[8];
  if (lVar4 == 0) {
    uVar6 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    lVar4 = param_2[0xc];
  }
  else {
    param_1[8] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 5,param_2 + 5);
    lVar4 = param_2[0xc];
  }
  if (lVar4 == 0) {
    uVar6 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar6;
    uVar6 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar6;
  }
  else {
    param_1[0xc] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1 + 9,param_2 + 9);
  }
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  cVar3 = *(char *)(param_2 + 0x11);
  if (cVar3 == -1) {
    uVar6 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + 0x79);
    *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)param_2 + 0x81);
    *(undefined8 *)((long)param_1 + 0x79) = uVar6;
  }
  else {
    uVar6 = param_2[0xe];
    uVar1 = param_2[0xf];
    uVar5 = param_2[0x10];
    func_0x00010178e0e0(uVar6,uVar1,uVar5,cVar3);
    param_1[0xe] = uVar6;
    param_1[0xf] = uVar1;
    param_1[0x10] = uVar5;
    *(char *)(param_1 + 0x11) = cVar3;
  }
  return param_1;
}



/* Entry: 10188c820; end: 10188c84f;  */

undefined8 * FUN_10188c820(undefined8 *param_1)

{
  FUN_10178e0a0(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return param_1;
}



/* Entry: 10188c850; end: 10188c883;  */

void FUN_10188c850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)((long)param_1 + 0x79) = uVar7;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Entry: 10188c884; end: 10188c977;  */

undefined8 * FUN_10188c884(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  func_0x000107c6142c(uVar4);
  uVar1 = *(undefined1 *)(param_2 + 4);
  uVar7 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar1;
  FUN_10188a5a4(uVar7,uVar4,uVar2);
  if (param_1[8] != 0) {
    func_0x000100183ab8(param_1 + 5);
  }
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar7;
  if (param_1[0xc] != 0) {
    func_0x000100183ab8(param_1 + 9);
  }
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar7;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  if (*(char *)(param_1 + 0x11) != -1) {
    cVar3 = *(char *)(param_2 + 0x11);
    if (cVar3 != -1) {
      uVar6 = param_2[0x10];
      uVar7 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar5 = param_1[0x10];
      uVar8 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar8;
      param_1[0x10] = uVar6;
      *(char *)(param_1 + 0x11) = cVar3;
      FUN_10178e0a0(uVar7,uVar4,uVar5);
      return param_1;
    }
    FUN_10188c820(param_1 + 0xe);
  }
  uVar7 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar7;
  uVar7 = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)((long)param_1 + 0x81) = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)((long)param_1 + 0x79) = uVar7;
  return param_1;
}



/* Entry: 10188c978; end: 10188ca5b;  */

int FUN_10188c978(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x89) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10188ca5c; end: 10188caf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10188ca5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcd1f0);
  puVar1[1] = 0;
  *puVar1 = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001016855d8(param_5,unaff_x20 + _DAT_113803448);
  *(undefined8 *)(unaff_x20 + _DAT_112dcd1f8) = param_6;
  return unaff_x20;
}



/* Entry: 10188caf8; end: 10188cb53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dcd1f0);
  puVar1[1] = 0;
  *puVar1 = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001016855d8(param_5,unaff_x20 + _DAT_113803448);
  *(undefined8 *)(unaff_x20 + _DAT_112dcd1f8) = param_6;
  return;
}



/* Entry: 10188cb54; end: 10188cbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10188cb54(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112dcd1f0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  lVar4 = lVar2;
  lVar5 = lVar3;
  if (lVar2 == 1) {
    FUN_10188cbe0();
    lVar4 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = param_2;
    FUN_10188cd8c();
    FUN_101885a1c(lVar4,lVar5);
    lVar4 = unaff_x20;
    lVar5 = param_2;
  }
  func_0x000101885a24(lVar2,lVar3);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 10188cbe0; end: 10188cd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10188cbe0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  uVar4 = *(ulong *)(param_1 + _DAT_112dcd1f8);
  if (uVar4 == 0) {
    puVar5 = (undefined *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4;
      if (-1 < (long)uVar4) {
        uVar6 = uVar4 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar6 != 0) {
      func_0x0001018740dc(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10188cd8c);
        (*pcVar1)();
      }
      uVar7 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar2 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar2 = uVar7;
          FUN_101887b4c(uVar7,uVar4);
        }
        uVar9 = *(undefined8 *)(uVar2 + _DAT_11308c0c0);
        uVar10 = *(undefined8 *)(uVar2 + _DAT_11308c0c8);
        uVar8 = *(undefined8 *)(uVar2 + _DAT_11308c0d0);
        func_0x000107c61174(uVar8);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar2);
        uVar2 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
          func_0x0001018740dc(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x20) = uVar9;
        *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x28) = uVar10;
        *(undefined8 *)(puVar5 + uVar2 * 0x18 + 0x30) = uVar8;
      } while (uVar6 != uVar7);
    }
    puVar3 = puVar5;
    func_0x000107c61434(puVar5);
    FUN_101888eb4();
    func_0x000107c6142c(puVar5);
  }
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = puVar3;
  return auVar11;
}



/* Entry: 10188cd8c; end: 10188cdb7;  */

/* WARNING: Possible PIC construction at 0x00010188cda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010188cda4) */

void FUN_10188cd8c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 10188cdb8; end: 10188ce13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188cdb8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010168561c(unaff_x20 + _DAT_113803448);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcd1f8));
  FUN_101885a1c(*(undefined8 *)(unaff_x20 + _DAT_112dcd1f0),
                ((undefined8 *)(unaff_x20 + _DAT_112dcd1f0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10188ce14; end: 10188ce1b;  */

void FUN_10188ce14(void)

{
  if (lRam0000000112dcd228 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6554b0);
  return;
}



/* Entry: 10188ce1c; end: 10188ce53;  */

void FUN_10188ce1c(undefined8 param_1)

{
  if (lRam0000000112dcd228 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6554b0);
  return;
}



/* Entry: 10188ce54; end: 10188ceef;  */

void FUN_10188ce54(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_48 = &UNK_10d98fde0;
  lVar1 = 0x13f;
  puStack_40 = puStack_50;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d98fdf8;
    puStack_28 = &UNK_10d98fe10;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 10188cef0; end: 10188cf2f; -[_TtC25AdTrackParserServicesImpl23AdCaptionCtaTrackParser adEventSymbols] */

void FUN_10188cef0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10188cf30; end: 10188cf67; -[_TtC25AdTrackParserServicesImpl23AdCaptionCtaTrackParser setAdEventSymbols:] */

void FUN_10188cf30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10188cf68; end: 10188d2af;  */

/* WARNING: Possible PIC construction at 0x00010188d0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188d178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188d278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188d0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010188d17c) */
/* WARNING: Removing unreachable block (ram,0x00010188d0f0) */
/* WARNING: Removing unreachable block (ram,0x00010188d138) */
/* WARNING: Removing unreachable block (ram,0x00010188d11c) */
/* WARNING: Removing unreachable block (ram,0x00010188d134) */
/* WARNING: Removing unreachable block (ram,0x00010188d158) */
/* WARNING: Removing unreachable block (ram,0x00010188d27c) */
/* WARNING: Removing unreachable block (ram,0x00010188d28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10188cf68(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&puStack_68);
  puVar5 = puStack_68;
  if (puStack_68 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11306b4e8);
    func_0x000107c5fadc(uVar3,((undefined8 *)(param_1 + _DAT_11306b4e8))[1]);
    func_0x000107c3f544();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x00010467eb74(0);
    puVar4 = puVar5;
    func_0x000107c5fc54(puVar5,uVar3);
    func_0x000107c61170(puVar5);
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        puVar5 = puVar4;
      }
      func_0x000107c60480();
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c6142c(puVar4);
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
        func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
      }
    }
    else {
      puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001018acd3c(0,(ulong)puVar5 & ((long)puVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10188d2b0);
        (*pcVar1)();
      }
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        param_1 = *(long *)(puVar4 + 0x20);
      }
      else {
        lVar2 = 0;
        func_0x0001018abc48(0,puVar4);
        param_1 = *(long *)(lVar2 + _DAT_11308bd40);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10188d2b0; end: 10188d5bb;  */

void FUN_10188d2b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 auStack_5788 [2744];
  undefined1 auStack_4cd0 [1448];
  undefined1 auStack_4728 [2744];
  undefined1 auStack_3c70 [2744];
  undefined1 auStack_31b8 [2744];
  undefined8 uStack_2700;
  undefined8 uStack_26f8;
  undefined8 uStack_26f0;
  undefined1 auStack_26e8 [1208];
  undefined8 uStack_2230;
  undefined8 uStack_2228;
  undefined8 uStack_2220;
  undefined8 uStack_2218;
  undefined8 uStack_2210;
  undefined8 uStack_2208;
  undefined8 uStack_2200;
  undefined8 uStack_21f8;
  undefined2 uStack_21f0;
  undefined1 auStack_2158 [16];
  undefined8 uStack_2148;
  undefined1 auStack_1bb0 [1424];
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined1 auStack_1608 [8];
  undefined1 auStack_1600 [2736];
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined2 uStack_b10;
  undefined1 auStack_b08 [2744];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_b08,param_1 + 0x38,0xab2);
  iVar1 = (int)auStack_b08;
  FUN_10178e478();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_1608,param_1 + 0x38,0xab2);
    func_0x000107c610b4(auStack_2158,param_1 + 0x40,0x5a8);
    uStack_1618 = *(undefined8 *)(param_1 + 0x48);
    uStack_1620 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c610b4(auStack_1bb0,param_1 + 0x58,0x590);
    iVar1 = (int)auStack_2158;
    func_0x000100cbd7b0();
    if (iVar1 == 1) {
      func_0x000107c610b4(auStack_3c70,auStack_1608,0xab2);
      func_0x000107c610b4(auStack_31b8,auStack_b08,0xab2);
      FUN_101795250(auStack_31b8,auStack_4728);
      puVar2 = auStack_3c70;
    }
    else {
      uStack_26f8 = uStack_1618;
      uStack_2700 = uStack_1620;
      uStack_26f0 = uStack_2148;
      func_0x000107c610b4(auStack_26e8,auStack_1bb0,0x590);
      FUN_10188dff0(auStack_b08,auStack_31b8,0x112dcbc88,&UNK_10d98e360);
      FUN_10188dff0(auStack_2158,auStack_31b8,0x112dcbd00,&UNK_10d98e550);
      FUN_10188de4c(&uStack_b50,param_2,uStack_2148);
      if (uStack_b10._1_1_ != '\x01') {
        uStack_2218 = uStack_b38;
        uStack_2220 = uStack_b40;
        uStack_2208 = uStack_b28;
        uStack_2210 = uStack_b30;
        uStack_21f8 = uStack_b18;
        uStack_2200 = uStack_b20;
        uStack_21f0 = uStack_b10;
        uStack_2228 = uStack_b48;
        uStack_2230 = uStack_b50;
        func_0x000107c610b4(auStack_4cd0,&uStack_2700,0x5a8);
        func_0x00010178e49c(auStack_4cd0);
        func_0x00010188e038(auStack_1600,0x112dcbd00,&UNK_10d98e550);
        func_0x000107c610b4(auStack_1600,auStack_4cd0,0x5a8);
        func_0x00010188dcdc(param_1,extraout_x8);
        func_0x000107c610b4(auStack_4728,auStack_1608,0xab2);
        func_0x000107c610b4(auStack_3c70,auStack_1608,0xab2);
        func_0x00010178e4a0(auStack_3c70);
        func_0x000107c610b4(auStack_31b8,extraout_x8 + 0x38,0xab2);
        FUN_101795250(auStack_4728,auStack_5788);
        func_0x00010188e038(auStack_31b8,0x112dcbc88,&UNK_10d98e360);
        func_0x000107c610b4(extraout_x8 + 0x38,auStack_3c70,0xab2);
        func_0x00010179528c(auStack_1608);
        return;
      }
      func_0x00010178e3b8(&uStack_2700);
      puVar2 = auStack_1608;
    }
    func_0x00010179528c(puVar2);
  }
  func_0x00010188dcdc(param_1,extraout_x8);
  return;
}



/* Entry: 10188d5bc; end: 10188dbaf;  */

void FUN_10188d5bc(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_4b38;
  undefined8 uStack_4b30;
  undefined8 uStack_4b28;
  undefined8 uStack_4b20;
  undefined1 uStack_4b18;
  undefined8 uStack_4b10;
  undefined8 uStack_4b08;
  long lStack_4b00;
  undefined1 auStack_4af8 [1208];
  undefined8 uStack_4640;
  undefined8 uStack_4638;
  undefined8 uStack_4630;
  undefined8 uStack_4628;
  undefined8 uStack_4620;
  undefined8 uStack_4618;
  undefined8 uStack_4610;
  undefined8 uStack_4608;
  undefined1 uStack_4600;
  undefined1 uStack_45ff;
  undefined1 auStack_3f90 [1424];
  undefined8 uStack_3a00;
  undefined8 uStack_39f8;
  undefined *puStack_39f0;
  undefined1 auStack_39e8 [2936];
  undefined1 auStack_2e70 [8];
  undefined1 auStack_2e68 [2928];
  undefined1 auStack_22f8 [8];
  undefined1 auStack_22f0 [16];
  long lStack_22e0;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 uStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined8 uStack_1738;
  undefined8 uStack_1730;
  undefined8 uStack_1728;
  undefined *puStack_1720;
  undefined1 auStack_1718 [2832];
  undefined1 auStack_c08 [96];
  undefined *puStack_ba8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c610b4(auStack_c08,(undefined8 *)(param_1 + 0xaf0),0xb78);
  iVar2 = (int)auStack_c08;
  func_0x000100cbd7b0();
  if (iVar2 != 1) {
    uStack_1758 = *(undefined8 *)(param_1 + 0xb18);
    uStack_1760 = *(undefined8 *)(param_1 + 0xb10);
    uStack_1748 = *(undefined8 *)(param_1 + 0xb28);
    uStack_1750 = *(undefined8 *)(param_1 + 0xb20);
    uStack_1738 = *(undefined8 *)(param_1 + 0xb38);
    uStack_1740 = *(undefined8 *)(param_1 + 0xb30);
    uStack_1728 = *(undefined8 *)(param_1 + 0xb48);
    uStack_1730 = *(undefined8 *)(param_1 + 0xb40);
    uStack_1778 = *(undefined8 *)(param_1 + 0xaf8);
    uStack_1780 = *(undefined8 *)(param_1 + 0xaf0);
    uStack_1768 = *(undefined8 *)(param_1 + 0xb08);
    uStack_1770 = *(undefined8 *)(param_1 + 0xb00);
    puStack_1720 = puStack_ba8;
    func_0x000107c610b4(auStack_1718,param_1 + 0xb58,0xb10);
    if (puStack_ba8 != (undefined *)0x0) {
      lVar13 = *(long *)(puStack_ba8 + 0x10);
      if (lVar13 == 0) {
        FUN_10188dff0(auStack_c08,auStack_22f8,0x112dcbc78,&UNK_10d98e350);
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        FUN_10188dff0(auStack_c08,auStack_22f8,0x112dcbc78,&UNK_10d98e350);
        puStack_39f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c61434(puStack_ba8);
        FUN_1018acd20(0,lVar13,0);
        lVar14 = 0;
        puVar11 = puStack_39f0;
        do {
          puVar8 = puStack_ba8 + lVar14 * 0xab8 + 0x20;
          func_0x000107c610b4(auStack_22f8,puVar8,0xab2);
          lVar3 = lStack_22e0;
          uStack_39f8 = *(undefined8 *)(puVar8 + 0x10);
          uStack_3a00 = *(undefined8 *)(puVar8 + 8);
          func_0x000107c610b4(auStack_3f90,puVar8 + 0x20,0x590);
          iVar2 = (int)auStack_22f0;
          func_0x000100cbd7b0();
          if (iVar2 == 1) {
            FUN_101795250(auStack_22f8,auStack_39e8);
LAB_10188d988:
            puVar4 = auStack_2e70;
            puVar5 = auStack_22f8;
            uVar6 = 0xab2;
          }
          else {
            uStack_4b08 = uStack_39f8;
            uStack_4b10 = uStack_3a00;
            lStack_4b00 = lVar3;
            uVar6 = uStack_3a00;
            func_0x000107c610b4(auStack_4af8,auStack_3f90,0x590);
            lVar9 = *(long *)(param_2 + 0x10);
            FUN_101795250(auStack_22f8,auStack_39e8);
            FUN_10188dff0(auStack_22f0,auStack_39e8,0x112dcbd00,&UNK_10d98e550);
            lVar10 = lVar9 + 1;
            plVar7 = (long *)(param_2 + 0x28 + lVar9 * 0x10);
            do {
              lVar10 = lVar10 + -1;
              if (lVar10 == 0) {
                func_0x00010178e3b8(&uStack_4b10);
                goto LAB_10188d988;
              }
              plVar12 = plVar7 + -2;
              lVar15 = plVar7[-3];
              lVar9 = lVar15;
              func_0x000107c30afc();
              plVar7 = plVar12;
            } while (lVar9 != lVar3);
            lVar10 = *plVar12;
            func_0x000107c61174(lVar15);
            func_0x000107c61174();
            lVar3 = lVar10;
            func_0x000107c30bc8();
            func_0x000107c61180();
            uVar16 = uVar6;
            uVar18 = 0;
            if (lVar3 != 0) {
              func_0x000107c4223c();
              uVar16 = uVar6;
              func_0x000107c61170(lVar3);
              uVar18 = uVar6;
            }
            lVar3 = lVar10;
            func_0x000107c30bcc();
            func_0x000107c61180();
            uVar6 = uVar16;
            uVar17 = 0;
            if (lVar3 != 0) {
              func_0x000107c4223c();
              uVar6 = uVar16;
              func_0x000107c61170(lVar3);
              uVar17 = uVar16;
            }
            lVar3 = lVar10;
            func_0x000107c30bd0();
            func_0x000107c61180();
            uVar16 = uVar6;
            uVar19 = 0;
            if (lVar3 != 0) {
              func_0x000107c4223c();
              uVar16 = uVar6;
              func_0x000107c61170(lVar3);
              uVar19 = uVar6;
            }
            lVar3 = lVar10;
            func_0x000107c30bd4();
            func_0x000107c61180();
            uVar6 = 0;
            if (lVar3 != 0) {
              func_0x000107c4223c();
              func_0x000107c61170(lVar3);
              uVar6 = uVar16;
            }
            FUN_10188dd20(&uStack_4b38,lVar10);
            func_0x000107c61170(lVar10);
            func_0x000107c61170(lVar15);
            uStack_4618 = uStack_4b30;
            uStack_4620 = uStack_4b38;
            uStack_4608 = uStack_4b20;
            uStack_4610 = uStack_4b28;
            uStack_4600 = uStack_4b18;
            uStack_45ff = 0;
            uStack_4640 = uVar18;
            uStack_4638 = uVar17;
            uStack_4630 = uVar19;
            uStack_4628 = uVar6;
            func_0x000107c610b4(auStack_2e70,auStack_22f8,0xab2);
            func_0x000107c610b4(auStack_39e8,&uStack_4b10,0x5a8);
            func_0x00010178e49c(auStack_39e8);
            func_0x00010188e038(auStack_2e68,0x112dcbd00,&UNK_10d98e550);
            puVar4 = auStack_2e68;
            puVar5 = auStack_39e8;
            uVar6 = 0x5a8;
          }
          func_0x000107c610b4(puVar4,puVar5,uVar6);
          func_0x000107c610b4(auStack_39e8,auStack_2e70,0xab2);
          uVar1 = *(ulong *)(puVar11 + 0x10);
          puStack_39f0 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
            FUN_1018acd20(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
          }
          puVar11 = puStack_39f0;
          lVar14 = lVar14 + 1;
          *(ulong *)(puStack_39f0 + 0x10) = uVar1 + 1;
          func_0x000107c610b4(puStack_39f0 + uVar1 * 0xab8 + 0x20,auStack_39e8,0xab2);
        } while (lVar14 != lVar13);
        func_0x000107c6142c(puStack_ba8);
      }
      func_0x00010188dcdc(param_1,extraout_x8);
      if (*(long *)(puVar11 + 0x10) == 0) {
        func_0x000107c6142c(puVar11);
      }
      else {
        func_0x000107c6142c(puStack_ba8);
        puStack_1720 = puVar11;
        func_0x000107c610b4(auStack_39e8,&uStack_1780,0xb78);
        func_0x000107c610b4(auStack_2e70,&uStack_1780,0xb78);
        func_0x00010178e4a8(auStack_2e70);
        func_0x000107c610b4(auStack_22f8,extraout_x8 + 0xaf0,0xb78);
        FUN_10178e408(auStack_39e8,&uStack_4b10);
        func_0x00010188e038(auStack_22f8,0x112dcbc78,&UNK_10d98e350);
        func_0x000107c610b4(extraout_x8 + 0xaf0,auStack_2e70,0xb78);
      }
      func_0x00010178e444(&uStack_1780);
      return;
    }
    func_0x000107c610b4(auStack_2e70,&uStack_1780,0xb78);
    func_0x000107c610b4(auStack_22f8,auStack_c08,0xb78);
    FUN_10178e408(auStack_22f8,auStack_39e8);
    func_0x00010178e444(auStack_2e70);
  }
  func_0x00010188dcdc(param_1,extraout_x8);
  return;
}



/* Entry: 10188dbb0; end: 10188dc0f; -[_TtC25AdTrackParserServicesImpl23AdCaptionCtaTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10188dbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10188cf68(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10188dc10; end: 10188dc5b;  */

void FUN_10188dc10(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10188dc5c; end: 10188dd1f;  */

undefined8 FUN_10188dc5c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x00010423cab0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10188dd20; end: 10188de4b;  */

void FUN_10188dd20(double *param_1,double param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = param_3;
  func_0x000107c30bd8();
  func_0x000107c61180();
  dVar8 = 0.0;
  dVar9 = 0.0;
  if (lVar1 == 0) {
    uVar2 = 1;
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    func_0x000107c4223c();
    dVar3 = param_2;
    func_0x000107c61170(lVar1);
    lVar1 = param_3;
    func_0x000107c30bdc();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4223c();
      dVar4 = dVar3;
      func_0x000107c61170(lVar1);
      lVar1 = param_3;
      func_0x000107c30be0();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c4223c();
        dVar5 = dVar4;
        func_0x000107c61170(lVar1);
        func_0x000107c30be4();
        func_0x000107c61180();
        if (param_3 != 0) {
          func_0x000107c4223c();
          func_0x000107c61170(param_3);
          uVar2 = 1;
          if (0.0 < dVar4) {
            dVar6 = 0.0;
            dVar7 = 0.0;
            dVar8 = 0.0;
            dVar9 = 0.0;
            if (0.0 < dVar5) {
              uVar2 = 0;
              dVar6 = dVar4;
              dVar7 = dVar5;
              dVar8 = param_2;
              dVar9 = dVar3;
            }
            goto LAB_10188de30;
          }
        }
      }
    }
    uVar2 = 1;
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
LAB_10188de30:
  param_1[1] = dVar9;
  *param_1 = dVar8;
  param_1[3] = dVar7;
  param_1[2] = dVar6;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 10188de4c; end: 10188dfef;  */

void FUN_10188de4c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar1 = *(long *)(param_3 + 0x10) + 1;
  plVar3 = (long *)(param_3 + *(long *)(param_3 + 0x10) * 0x10 + 0x28);
  do {
    lVar1 = lVar1 + -1;
    if (lVar1 == 0) {
      uStack_70 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uVar2 = 1;
      uVar9 = 0;
      uVar10 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      goto LAB_10188dfbc;
    }
    plVar6 = plVar3 + -2;
    lVar4 = plVar3[-3];
    lVar5 = lVar4;
    func_0x000107c30afc();
    plVar3 = plVar6;
  } while (lVar5 != param_4);
  lVar5 = *plVar6;
  func_0x000107c61174(lVar4);
  func_0x000107c61174();
  lVar1 = lVar5;
  func_0x000107c30bc8();
  func_0x000107c61180();
  uVar11 = param_2;
  uVar9 = 0;
  if (lVar1 != 0) {
    func_0x000107c4223c();
    uVar11 = param_2;
    func_0x000107c61170(lVar1);
    uVar9 = param_2;
  }
  lVar1 = lVar5;
  func_0x000107c30bcc();
  func_0x000107c61180();
  uVar7 = uVar11;
  uVar10 = 0;
  if (lVar1 != 0) {
    func_0x000107c4223c();
    uVar7 = uVar11;
    func_0x000107c61170(lVar1);
    uVar10 = uVar11;
  }
  lVar1 = lVar5;
  func_0x000107c30bd0();
  func_0x000107c61180();
  uVar8 = uVar7;
  uVar12 = 0;
  if (lVar1 != 0) {
    func_0x000107c4223c();
    uVar8 = uVar7;
    func_0x000107c61170(lVar1);
    uVar12 = uVar7;
  }
  lVar1 = lVar5;
  func_0x000107c30bd4();
  func_0x000107c61180();
  uVar11 = 0;
  if (lVar1 != 0) {
    func_0x000107c4223c();
    func_0x000107c61170(lVar1);
    uVar11 = uVar8;
  }
  FUN_10188dd20(&uStack_90,lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  uVar2 = 0;
LAB_10188dfbc:
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar12;
  param_1[3] = uVar11;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  *(undefined1 *)(param_1 + 8) = uStack_70;
  *(undefined1 *)((long)param_1 + 0x41) = uVar2;
  return;
}



/* Entry: 10188dff0; end: 10188e077;  */

undefined8 FUN_10188dff0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10188e078; end: 10188e0b7; -[_TtC25AdTrackParserServicesImpl20AdEndCardTrackParser adEventSymbols] */

void FUN_10188e078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10188e0b8; end: 10188e0ef; -[_TtC25AdTrackParserServicesImpl20AdEndCardTrackParser setAdEventSymbols:] */

void FUN_10188e0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10188e0f0; end: 10188f6fb;  */

/* WARNING: Possible PIC construction at 0x00010188e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188e380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188e45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188edcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188ef08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010188e358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010188ef0c) */
/* WARNING: Removing unreachable block (ram,0x00010188ed94) */
/* WARNING: Removing unreachable block (ram,0x00010188ef2c) */
/* WARNING: Removing unreachable block (ram,0x00010188ef90) */
/* WARNING: Removing unreachable block (ram,0x00010188efdc) */
/* WARNING: Removing unreachable block (ram,0x00010188f020) */
/* WARNING: Removing unreachable block (ram,0x00010188efe8) */
/* WARNING: Removing unreachable block (ram,0x00010188eff0) */
/* WARNING: Removing unreachable block (ram,0x00010188ef98) */
/* WARNING: Removing unreachable block (ram,0x00010188f010) */
/* WARNING: Removing unreachable block (ram,0x00010188efa4) */
/* WARNING: Removing unreachable block (ram,0x00010188f000) */
/* WARNING: Removing unreachable block (ram,0x00010188efac) */
/* WARNING: Removing unreachable block (ram,0x00010188ef3c) */
/* WARNING: Removing unreachable block (ram,0x00010188ef8c) */
/* WARNING: Removing unreachable block (ram,0x00010188edd0) */
/* WARNING: Removing unreachable block (ram,0x00010188edf0) */
/* WARNING: Removing unreachable block (ram,0x00010188ee28) */
/* WARNING: Removing unreachable block (ram,0x00010188ee5c) */
/* WARNING: Removing unreachable block (ram,0x00010188ee64) */
/* WARNING: Removing unreachable block (ram,0x00010188f66c) */
/* WARNING: Removing unreachable block (ram,0x00010188ee80) */
/* WARNING: Removing unreachable block (ram,0x00010188ee84) */
/* WARNING: Removing unreachable block (ram,0x00010188f670) */
/* WARNING: Removing unreachable block (ram,0x00010188ee88) */
/* WARNING: Removing unreachable block (ram,0x00010188ee90) */
/* WARNING: Removing unreachable block (ram,0x00010188ee94) */
/* WARNING: Removing unreachable block (ram,0x00010188f674) */
/* WARNING: Removing unreachable block (ram,0x00010188ee98) */
/* WARNING: Removing unreachable block (ram,0x00010188eea0) */
/* WARNING: Removing unreachable block (ram,0x00010188f4a8) */
/* WARNING: Removing unreachable block (ram,0x00010188eee8) */
/* WARNING: Removing unreachable block (ram,0x00010188ef04) */
/* WARNING: Removing unreachable block (ram,0x00010188ee30) */
/* WARNING: Removing unreachable block (ram,0x00010188ee38) */
/* WARNING: Removing unreachable block (ram,0x00010188ee00) */
/* WARNING: Removing unreachable block (ram,0x00010188efb8) */
/* WARNING: Removing unreachable block (ram,0x00010188f668) */
/* WARNING: Removing unreachable block (ram,0x00010188efd4) */
/* WARNING: Removing unreachable block (ram,0x00010188ee08) */
/* WARNING: Removing unreachable block (ram,0x00010188f02c) */
/* WARNING: Removing unreachable block (ram,0x00010188f0d4) */
/* WARNING: Removing unreachable block (ram,0x00010188f040) */
/* WARNING: Removing unreachable block (ram,0x00010188f0f0) */
/* WARNING: Removing unreachable block (ram,0x00010188f1a0) */
/* WARNING: Removing unreachable block (ram,0x00010188f150) */
/* WARNING: Removing unreachable block (ram,0x00010188f0b8) */
/* WARNING: Removing unreachable block (ram,0x00010188f0e4) */
/* WARNING: Removing unreachable block (ram,0x00010188f18c) */
/* WARNING: Removing unreachable block (ram,0x00010188f194) */
/* WARNING: Removing unreachable block (ram,0x00010188ee10) */
/* WARNING: Removing unreachable block (ram,0x00010188ee18) */
/* WARNING: Removing unreachable block (ram,0x00010188eda4) */
/* WARNING: Removing unreachable block (ram,0x00010188edb4) */
/* WARNING: Removing unreachable block (ram,0x00010188f1dc) */
/* WARNING: Removing unreachable block (ram,0x00010188f210) */
/* WARNING: Removing unreachable block (ram,0x00010188f218) */
/* WARNING: Removing unreachable block (ram,0x00010188f1e4) */
/* WARNING: Removing unreachable block (ram,0x00010188e460) */
/* WARNING: Removing unreachable block (ram,0x00010188e4ac) */
/* WARNING: Removing unreachable block (ram,0x00010188e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010188e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010188e538) */
/* WARNING: Removing unreachable block (ram,0x00010188e6fc) */
/* WARNING: Removing unreachable block (ram,0x00010188e778) */
/* WARNING: Removing unreachable block (ram,0x00010188f594) */
/* WARNING: Removing unreachable block (ram,0x00010188e7c0) */
/* WARNING: Removing unreachable block (ram,0x00010188f5c8) */
/* WARNING: Removing unreachable block (ram,0x00010188e7cc) */
/* WARNING: Removing unreachable block (ram,0x00010188e894) */
/* WARNING: Removing unreachable block (ram,0x00010188e914) */
/* WARNING: Removing unreachable block (ram,0x00010188e9a4) */
/* WARNING: Removing unreachable block (ram,0x00010188e9b8) */
/* WARNING: Removing unreachable block (ram,0x00010188eaec) */
/* WARNING: Removing unreachable block (ram,0x00010188f4b0) */
/* WARNING: Removing unreachable block (ram,0x00010188eb04) */
/* WARNING: Removing unreachable block (ram,0x00010188f4d4) */
/* WARNING: Removing unreachable block (ram,0x00010188f60c) */
/* WARNING: Removing unreachable block (ram,0x00010188f610) */
/* WARNING: Removing unreachable block (ram,0x00010188f4f0) */
/* WARNING: Removing unreachable block (ram,0x00010188f614) */
/* WARNING: Removing unreachable block (ram,0x00010188ed8c) */
/* WARNING: Removing unreachable block (ram,0x00010188e920) */
/* WARNING: Removing unreachable block (ram,0x00010188edc0) */
/* WARNING: Removing unreachable block (ram,0x00010188e76c) */
/* WARNING: Removing unreachable block (ram,0x00010188f620) */
/* WARNING: Removing unreachable block (ram,0x00010188e384) */
/* WARNING: Removing unreachable block (ram,0x00010188e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010188e3b8) */
/* WARNING: Removing unreachable block (ram,0x00010188e3d0) */
/* WARNING: Removing unreachable block (ram,0x00010188e420) */
/* WARNING: Removing unreachable block (ram,0x00010188e278) */
/* WARNING: Removing unreachable block (ram,0x00010188f678) */
/* WARNING: Removing unreachable block (ram,0x00010188f680) */
/* WARNING: Removing unreachable block (ram,0x00010188e2f4) */
/* WARNING: Removing unreachable block (ram,0x00010188f690) */
/* WARNING: Removing unreachable block (ram,0x00010188e440) */
/* WARNING: Removing unreachable block (ram,0x00010188f6a8) */
/* WARNING: Removing unreachable block (ram,0x00010188e300) */
/* WARNING: Removing unreachable block (ram,0x00010188f6f8) */
/* WARNING: Removing unreachable block (ram,0x00010188e32c) */
/* WARNING: Removing unreachable block (ram,0x00010188e338) */
/* WARNING: Removing unreachable block (ram,0x00010188e350) */
/* WARNING: Removing unreachable block (ram,0x00010188e340) */
/* WARNING: Removing unreachable block (ram,0x00010188e35c) */
/* WARNING: Removing unreachable block (ram,0x00010188f6bc) */
/* WARNING: Removing unreachable block (ram,0x00010188f6c0) */

void FUN_10188e0f0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 auStack_99e0 [136];
  long lStack_9958;
  long lStack_9940;
  undefined1 *puStack_9938;
  long lStack_9930;
  long lStack_9928;
  long lStack_9920;
  long lStack_2d28;
  undefined8 uStack_2d20;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x000107c5fb10();
  lStack_9930 = *(long *)(lVar1 + -8);
  lStack_9928 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_9930 + 0x40));
  lVar1 = 0;
  puStack_9938 = auStack_99e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)(auStack_99e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_9940 = lVar3;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = lVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_9958 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_9920 = lVar3 - extraout_x12;
  func_0x0001000d224c(&lStack_2d28);
  lVar1 = lStack_2d28;
  func_0x000107c614f0(lStack_2d28);
  uVar2 = 0xd00000000000001d;
  func_0x00010403c628(0xd00000000000001d,0x800000010efbc8b0,lVar1,uStack_2d20);
  func_0x000107c615e8(lStack_2d28);
  if ((uVar2 & 1) != 0) {
    func_0x0001000d224c(&lStack_2d28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 10188f6fc; end: 10188f75b; -[_TtC25AdTrackParserServicesImpl20AdEndCardTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_10188f6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_10188e0f0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10188f75c; end: 10188f7a7;  */

void FUN_10188f75c(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10188f7a8; end: 10188fe1b;  */

void FUN_10188f7a8(long *param_1,double param_2,undefined8 param_3,ulong param_4,char param_5,
                  long param_6)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long extraout_x8;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  int iStack_d0;
  int iStack_cc;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_88;
  ulong uStack_80;
  
  uVar4 = 0;
  uStack_98 = param_4;
  func_0x000107c5fb10();
  lStack_f8 = *(long *)(uVar4 - 8);
  uStack_f0 = uVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  lStack_100 = (long)&uStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(param_6 + 0x10);
  plStack_128 = param_1;
  if (lVar19 == 0) {
    lStack_110 = 0;
    puStack_e0 = (undefined *)0x0;
    puStack_b8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    lStack_c8 = 0;
    puStack_d8 = (undefined *)0x0;
    puStack_c0 = (undefined *)0x0;
    uStack_e8 = 0;
    goto LAB_10188fdc8;
  }
  puStack_e0 = (undefined *)0x0;
  puStack_d8 = (undefined *)0x0;
  lStack_c8 = 0;
  puStack_a8 = (undefined *)0x0;
  puStack_a0 = (undefined *)0x0;
  puStack_b8 = (undefined *)0x0;
  puStack_b0 = (undefined *)0x0;
  lStack_110 = 0;
  lVar17 = 0;
  lStack_130 = 0;
  lVar16 = param_6 + 0x20;
  lStack_118 = lVar19 + -1;
  lStack_120 = param_6 + 0x38;
  uStack_e8 = 1;
  iStack_d0 = 1;
  iStack_cc = 1;
  puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = uStack_98;
  lStack_108 = lVar16;
LAB_10188f8e8:
  puVar1 = (ulong *)(lVar16 + lVar17 * 0x10);
  uVar5 = *puVar1;
  puVar6 = (undefined *)puVar1[1];
  lVar15 = lVar17 + 1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = uVar5;
  func_0x000107c30afc();
  if ((param_5 != '\x01') && (uVar14 == uVar4)) {
    puVar7 = puVar6;
    func_0x000107c30d48();
    if (2 < (long)puVar7) {
      if (puVar7 == (undefined *)0x3) {
LAB_10188faf4:
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar5);
        bVar3 = SCARRY8(lStack_c8,1);
        lStack_c8 = lStack_c8 + 1;
        uVar14 = param_4;
        lVar17 = lVar15;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10188fe10);
          (*pcVar2)();
        }
      }
      else {
        if (puVar7 != (undefined *)0x4) {
          if (puVar7 == (undefined *)0x5) {
LAB_10188f948:
            puVar7 = puVar6;
            func_0x000107c30d64();
            puStack_d8 = puVar7;
          }
          goto LAB_10188f8cc;
        }
LAB_10188fb54:
        puVar7 = puVar6;
        func_0x000107c30d60();
        func_0x000107c61180();
        lVar17 = lVar15;
        if (puVar7 == (undefined *)0x0) {
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(puStack_c0);
          puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar14 = param_4;
          lVar16 = lStack_108;
        }
        else {
          puVar8 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          lVar16 = lStack_100;
          puStack_88 = puVar8;
          uStack_80 = param_4;
          func_0x000107c5fb04(lStack_100);
          func_0x000100e8b654();
          uVar14 = 0;
          lVar15 = lVar16;
          func_0x000107c60214(lVar16,0,PTR___sSSN_11034da80,puVar7);
          uVar4 = uStack_f0;
          (**(code **)(lStack_f8 + 8))(lVar16);
          if (uVar14 >> 0x3c < 0xf) {
            uVar11 = 0;
            uStack_138 = param_4;
            func_0x000107c5eb24();
            func_0x000107c613fc();
            func_0x000107c5eb20();
            uVar12 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            uVar13 = uVar12;
            FUN_10188fe58();
            lVar16 = lStack_130;
            uStack_140 = uVar11;
            func_0x000107c5eb1c(&puStack_88,uVar12,lVar15,uVar14,uVar12,uVar13);
            if (lVar16 == 0) {
              lStack_130 = lVar16;
              func_0x000107c61170(puVar6);
              func_0x000107c61170(uVar5);
              func_0x000107c6142c(uStack_138);
              func_0x000107c6142c(puStack_c0);
              func_0x000107c61574(uStack_140);
              func_0x0001000b44c0(lVar15);
              uVar4 = uStack_98;
              lVar16 = lStack_108;
              puStack_c0 = puStack_88;
            }
            else {
              func_0x000107c614ac(lVar16);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(uVar5);
              func_0x000107c6142c(uStack_138);
              func_0x000107c6142c(puStack_c0);
              func_0x000107c61574(uStack_140);
              func_0x0001000b44c0(lVar15);
              lStack_130 = 0;
              uVar4 = uStack_98;
              lVar16 = lStack_108;
              puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
          }
          else {
            func_0x000107c61170(puVar6);
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(param_4);
            func_0x000107c6142c(puStack_c0);
            uVar14 = uVar4;
            uVar4 = uStack_98;
            lVar16 = lStack_108;
            puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
        }
      }
      goto LAB_10188f8dc;
    }
    if (puVar7 != (undefined *)0x1) {
      if (puVar7 == (undefined *)0x2) {
LAB_10188f968:
        puVar7 = puVar6;
        func_0x000107c30d4c();
        puStack_e0 = puVar7;
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar5);
        uStack_e8 = 0;
        uVar14 = param_4;
        lVar17 = lVar15;
        goto LAB_10188f8dc;
      }
      goto LAB_10188f8cc;
    }
    if (iStack_cc != 0) {
      func_0x000107c30b10(uVar5);
      if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10188fe14);
        (*pcVar2)();
      }
      if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10188fe18);
        (*pcVar2)();
      }
      if (1.8446744073709552e+19 <= param_2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10188fe1c);
        (*pcVar2)();
      }
      lStack_110 = (long)param_2;
    }
    puVar7 = puVar6;
    func_0x000107c30d50();
    puVar8 = puVar6;
    func_0x000107c30d54();
    puVar9 = puVar6;
    func_0x000107c30d58();
    puVar10 = puVar6;
    puStack_a0 = puVar9;
    func_0x000107c30d5c();
    puStack_a8 = puVar10;
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    puStack_b8 = puVar7;
    puStack_b0 = puVar8;
    if (lVar15 == lVar19) goto LAB_10188fdb0;
    lVar15 = -2 - lVar17;
    lVar20 = lStack_118 - lVar17;
    puVar18 = (undefined8 *)(lStack_120 + lVar17 * 0x10);
    while( true ) {
      uVar5 = puVar18[-1];
      puVar6 = (undefined *)*puVar18;
      puStack_b8 = puVar7;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar4 = uVar5;
      func_0x000107c30afc();
      if (uVar4 != uStack_98) break;
      puVar7 = puVar6;
      func_0x000107c30d48();
      if (puVar7 != (undefined *)0x1) {
        uVar4 = uStack_98;
        if ((long)puVar7 < 4) {
          if (puVar7 == (undefined *)0x2) {
            iStack_d0 = 0;
            iStack_cc = 0;
            lVar15 = -lVar15;
            goto LAB_10188f968;
          }
          if (puVar7 == (undefined *)0x3) {
            iStack_d0 = 0;
            iStack_cc = 0;
            lVar15 = -lVar15;
            goto LAB_10188faf4;
          }
        }
        else {
          if (puVar7 == (undefined *)0x4) {
            iStack_d0 = 0;
            iStack_cc = 0;
            lVar15 = -lVar15;
            goto LAB_10188fb54;
          }
          if (puVar7 == (undefined *)0x5) {
            iStack_d0 = 0;
            iStack_cc = 0;
            lVar15 = -lVar15;
            goto LAB_10188f948;
          }
        }
        break;
      }
      puVar18 = puVar18 + 2;
      puVar7 = puVar6;
      func_0x000107c30d50();
      puVar8 = puVar6;
      func_0x000107c30d54();
      puVar9 = puVar6;
      puStack_b0 = puVar8;
      func_0x000107c30d58();
      puVar8 = puVar6;
      puStack_a0 = puVar9;
      func_0x000107c30d5c();
      puStack_a8 = puVar8;
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar5);
      lVar15 = lVar15 + -1;
      lVar20 = lVar20 + -1;
      puStack_b8 = puVar7;
      if (lVar20 == 0) goto LAB_10188fdb0;
    }
    iStack_d0 = 0;
    iStack_cc = 0;
    lVar15 = -lVar15;
    uVar4 = uStack_98;
  }
LAB_10188f8cc:
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  uVar14 = param_4;
  lVar17 = lVar15;
LAB_10188f8dc:
  param_4 = uVar14;
  if (lVar17 == lVar19) goto LAB_10188fd50;
  goto LAB_10188f8e8;
LAB_10188fd50:
  if (iStack_d0 == 0) {
LAB_10188fdb0:
    uStack_e8 = uStack_e8 & 0xff;
  }
  else {
    func_0x000107c6142c(puStack_c0);
    lStack_110 = 0;
    puStack_e0 = (undefined *)0x0;
    puStack_b8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
    puStack_a0 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    lStack_c8 = 0;
    puStack_d8 = (undefined *)0x0;
    puStack_c0 = (undefined *)0x0;
    uStack_e8 = 0;
  }
LAB_10188fdc8:
  *plStack_128 = lStack_110;
  plStack_128[1] = (long)puStack_e0;
  plStack_128[2] = uStack_e8;
  plStack_128[3] = (long)puStack_b8;
  plStack_128[4] = (long)puStack_b0;
  plStack_128[5] = (long)puStack_a0;
  plStack_128[6] = (long)puStack_a8;
  plStack_128[7] = lStack_c8;
  plStack_128[8] = (long)puStack_d8;
  plStack_128[9] = (long)puStack_c0;
  return;
}



/* Entry: 10188fe1c; end: 10188fe57;  */

undefined8 FUN_10188fe1c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10188fe58; end: 10188febf;  */

void FUN_10188fe58(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112d5ad70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38270;
  func_0x00010002969c(0x112d38270,&UNK_10d905a20);
  puStack_18 = PTR___sSSSesWP_11034daa8;
  puVar2 = PTR___sSayxGSesSeRzlMc_11034dd10;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&puStack_18);
  puRam0000000112d5ad70 = puVar2;
  return;
}



/* Entry: 10188fec0; end: 10188ff97;  */

undefined8 FUN_10188fec0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10188ff98; end: 10188ffd7; -[_TtC25AdTrackParserServicesImpl23AdLiveReviewTrackParser adEventSymbols] */

void FUN_10188ff98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10188ffd8; end: 10189000f; -[_TtC25AdTrackParserServicesImpl23AdLiveReviewTrackParser setAdEventSymbols:] */

void FUN_10188ffd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101890010; end: 101891343;  */

/* WARNING: Possible PIC construction at 0x0001018900c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018901cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101890894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101891308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018901a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101890898) */
/* WARNING: Removing unreachable block (ram,0x0001018908b8) */
/* WARNING: Removing unreachable block (ram,0x00010189094c) */
/* WARNING: Removing unreachable block (ram,0x000101890960) */
/* WARNING: Removing unreachable block (ram,0x0001018908c8) */
/* WARNING: Removing unreachable block (ram,0x0001018908d0) */
/* WARNING: Removing unreachable block (ram,0x0001018908e4) */
/* WARNING: Removing unreachable block (ram,0x00010189086c) */
/* WARNING: Removing unreachable block (ram,0x000101890918) */
/* WARNING: Removing unreachable block (ram,0x000101890984) */
/* WARNING: Removing unreachable block (ram,0x000101890924) */
/* WARNING: Removing unreachable block (ram,0x0001018909a4) */
/* WARNING: Removing unreachable block (ram,0x000101890938) */
/* WARNING: Removing unreachable block (ram,0x000101890874) */
/* WARNING: Removing unreachable block (ram,0x0001018901d0) */
/* WARNING: Removing unreachable block (ram,0x000101890220) */
/* WARNING: Removing unreachable block (ram,0x000101890204) */
/* WARNING: Removing unreachable block (ram,0x00010189021c) */
/* WARNING: Removing unreachable block (ram,0x000101890244) */
/* WARNING: Removing unreachable block (ram,0x0001018900c4) */
/* WARNING: Removing unreachable block (ram,0x0001018912c4) */
/* WARNING: Removing unreachable block (ram,0x0001018912cc) */
/* WARNING: Removing unreachable block (ram,0x000101890140) */
/* WARNING: Removing unreachable block (ram,0x0001018912dc) */
/* WARNING: Removing unreachable block (ram,0x000101890264) */
/* WARNING: Removing unreachable block (ram,0x0001018902ac) */
/* WARNING: Removing unreachable block (ram,0x000101890300) */
/* WARNING: Removing unreachable block (ram,0x00010189054c) */
/* WARNING: Removing unreachable block (ram,0x000101890358) */
/* WARNING: Removing unreachable block (ram,0x000101890580) */
/* WARNING: Removing unreachable block (ram,0x000101890584) */
/* WARNING: Removing unreachable block (ram,0x000101890600) */
/* WARNING: Removing unreachable block (ram,0x0001018911f4) */
/* WARNING: Removing unreachable block (ram,0x000101890654) */
/* WARNING: Removing unreachable block (ram,0x000101891228) */
/* WARNING: Removing unreachable block (ram,0x00010189065c) */
/* WARNING: Removing unreachable block (ram,0x0001018906bc) */
/* WARNING: Removing unreachable block (ram,0x000101890744) */
/* WARNING: Removing unreachable block (ram,0x000101890808) */
/* WARNING: Removing unreachable block (ram,0x0001018909c0) */
/* WARNING: Removing unreachable block (ram,0x000101890a0c) */
/* WARNING: Removing unreachable block (ram,0x000101890a18) */
/* WARNING: Removing unreachable block (ram,0x000101890b98) */
/* WARNING: Removing unreachable block (ram,0x000101890a20) */
/* WARNING: Removing unreachable block (ram,0x000101890818) */
/* WARNING: Removing unreachable block (ram,0x000101890890) */
/* WARNING: Removing unreachable block (ram,0x0001018907f0) */
/* WARNING: Removing unreachable block (ram,0x000101890a48) */
/* WARNING: Removing unreachable block (ram,0x000101890e44) */
/* WARNING: Removing unreachable block (ram,0x000101891108) */
/* WARNING: Removing unreachable block (ram,0x000101890e5c) */
/* WARNING: Removing unreachable block (ram,0x00010189112c) */
/* WARNING: Removing unreachable block (ram,0x00010189126c) */
/* WARNING: Removing unreachable block (ram,0x000101891270) */
/* WARNING: Removing unreachable block (ram,0x000101891150) */
/* WARNING: Removing unreachable block (ram,0x000101891274) */
/* WARNING: Removing unreachable block (ram,0x0001018910f0) */
/* WARNING: Removing unreachable block (ram,0x000101891104) */
/* WARNING: Removing unreachable block (ram,0x0001018912c0) */
/* WARNING: Removing unreachable block (ram,0x0001018905f4) */
/* WARNING: Removing unreachable block (ram,0x000101891280) */
/* WARNING: Removing unreachable block (ram,0x0001018912f8) */
/* WARNING: Removing unreachable block (ram,0x00010189014c) */
/* WARNING: Removing unreachable block (ram,0x000101891340) */
/* WARNING: Removing unreachable block (ram,0x000101890174) */
/* WARNING: Removing unreachable block (ram,0x000101890184) */
/* WARNING: Removing unreachable block (ram,0x00010189019c) */
/* WARNING: Removing unreachable block (ram,0x00010189018c) */
/* WARNING: Removing unreachable block (ram,0x0001018901a8) */
/* WARNING: Removing unreachable block (ram,0x00010189130c) */
/* WARNING: Removing unreachable block (ram,0x000101891318) */

void FUN_101890010(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_9380 [64];
  undefined1 *puStack_9340;
  undefined8 auStack_2cc8 [1421];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puStack_9340 = auStack_9380 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(auStack_2cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 101891344; end: 1018913a3; -[_TtC25AdTrackParserServicesImpl23AdLiveReviewTrackParser parseWithTrackRequest:viewSeqNum:] */

void FUN_101891344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_101890010(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018913a4; end: 1018913ef;  */

void FUN_1018913a4(void)

{
  long unaff_x20;
  
  func_0x000100400450(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018913f0; end: 10189161b;  */

undefined * FUN_1018913f0(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_3 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 == 0) {
    bVar2 = true;
  }
  else {
    puVar9 = (ulong *)(param_3 + 0x28);
    bVar2 = true;
    uVar7 = (uint)param_2;
    do {
      uVar3 = puVar9[-1];
      uVar4 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar3;
      func_0x000107c30afc();
      uVar10 = uVar3;
      if (((uVar7 & 0xff) != 1) && (uVar5 == param_1)) {
        uVar5 = uVar4;
        func_0x000107c30da8();
        if (uVar5 == 2) {
          uVar5 = uVar4;
          func_0x000107c30db0();
          func_0x000107c61180();
          if (uVar5 != 0) {
            func_0x000107c49820();
            func_0x000107c61170(uVar4);
            bVar2 = false;
            uVar10 = uVar5;
            uVar4 = uVar3;
          }
        }
        else if (uVar5 == 1) {
          uVar3 = uVar4;
          func_0x000107c30dac();
          func_0x000107c61180();
          if (uVar3 != 0) {
            uVar5 = uVar3;
            func_0x000107c5faec();
            func_0x000107c61170(uVar3);
            uVar3 = uVar5;
            lVar8 = param_2;
            func_0x000100077018(uVar5,param_2,puVar11);
            if ((uVar3 & 1) == 0) {
              puVar6 = puVar11;
              func_0x000107c61558();
              if (((ulong)puVar6 & 1) == 0) {
                lVar8 = *(long *)(puVar11 + 0x10) + 1;
                puVar6 = (undefined *)0x0;
                func_0x0001000d182c(0,lVar8,1,puVar11);
                puVar11 = puVar6;
              }
              uVar3 = *(ulong *)(puVar11 + 0x10);
              lVar1 = uVar3 + 1;
              if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar3) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                lVar8 = lVar1;
                func_0x0001000d182c(puVar11,lVar1,1);
              }
              *(long *)(puVar11 + 0x10) = lVar1;
              *(ulong *)(puVar11 + uVar3 * 0x10 + 0x20) = uVar5;
              *(long *)(puVar11 + uVar3 * 0x10 + 0x28) = param_2;
              param_2 = lVar8;
            }
            else {
              func_0x000107c6142c(param_2);
              param_2 = lVar8;
            }
          }
        }
      }
      puVar9 = puVar9 + 2;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar10);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(puVar11 + 0x10) == 0 && bVar2) {
    func_0x000107c6142c(puVar11);
    puVar11 = (undefined *)0x0;
  }
  return puVar11;
}



/* Entry: 10189161c; end: 1018916a3;  */

undefined8 FUN_10189161c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018916a4; end: 1018916e3; -[_TtC25AdTrackParserServicesImpl21AdPlayableTrackParser adEventSymbols] */

void FUN_1018916a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1018916e4; end: 10189171b; -[_TtC25AdTrackParserServicesImpl21AdPlayableTrackParser setAdEventSymbols:] */

void FUN_1018916e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10189171c; end: 101892a83;  */

/* WARNING: Possible PIC construction at 0x0001018918a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001018919ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101891aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101891984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018919b0) */
/* WARNING: Removing unreachable block (ram,0x000101891a00) */
/* WARNING: Removing unreachable block (ram,0x0001018919e4) */
/* WARNING: Removing unreachable block (ram,0x0001018919fc) */
/* WARNING: Removing unreachable block (ram,0x000101891a48) */
/* WARNING: Removing unreachable block (ram,0x0001018918a4) */
/* WARNING: Removing unreachable block (ram,0x000101891a64) */
/* WARNING: Removing unreachable block (ram,0x000101891a6c) */
/* WARNING: Removing unreachable block (ram,0x00010189191c) */
/* WARNING: Removing unreachable block (ram,0x000101891a80) */
/* WARNING: Removing unreachable block (ram,0x000101891a94) */
/* WARNING: Removing unreachable block (ram,0x00010189192c) */
/* WARNING: Removing unreachable block (ram,0x000101892a80) */
/* WARNING: Removing unreachable block (ram,0x000101891958) */
/* WARNING: Removing unreachable block (ram,0x000101891964) */
/* WARNING: Removing unreachable block (ram,0x00010189197c) */
/* WARNING: Removing unreachable block (ram,0x00010189196c) */
/* WARNING: Removing unreachable block (ram,0x000101891988) */
/* WARNING: Removing unreachable block (ram,0x000101891ab0) */
/* WARNING: Removing unreachable block (ram,0x000101891afc) */
/* WARNING: Removing unreachable block (ram,0x000101891b10) */
/* WARNING: Removing unreachable block (ram,0x000101891bb4) */
/* WARNING: Removing unreachable block (ram,0x000101891b94) */
/* WARNING: Removing unreachable block (ram,0x000101891d18) */
/* WARNING: Removing unreachable block (ram,0x000101891d24) */
/* WARNING: Removing unreachable block (ram,0x000101891de0) */
/* WARNING: Removing unreachable block (ram,0x0001018926fc) */
/* WARNING: Removing unreachable block (ram,0x000101891e34) */
/* WARNING: Removing unreachable block (ram,0x00010189272c) */
/* WARNING: Removing unreachable block (ram,0x000101891e3c) */
/* WARNING: Removing unreachable block (ram,0x000101891efc) */
/* WARNING: Removing unreachable block (ram,0x000101891ff4) */
/* WARNING: Removing unreachable block (ram,0x0001018921a0) */
/* WARNING: Removing unreachable block (ram,0x00010189206c) */
/* WARNING: Removing unreachable block (ram,0x000101891f74) */
/* WARNING: Removing unreachable block (ram,0x0001018920d4) */
/* WARNING: Removing unreachable block (ram,0x0001018923c8) */
/* WARNING: Removing unreachable block (ram,0x0001018926a4) */
/* WARNING: Removing unreachable block (ram,0x000101892400) */
/* WARNING: Removing unreachable block (ram,0x0001018926c8) */
/* WARNING: Removing unreachable block (ram,0x000101892764) */
/* WARNING: Removing unreachable block (ram,0x0001018926ec) */
/* WARNING: Removing unreachable block (ram,0x00010189276c) */
/* WARNING: Removing unreachable block (ram,0x0001018927b0) */
/* WARNING: Removing unreachable block (ram,0x0001018927e4) */
/* WARNING: Removing unreachable block (ram,0x0001018927d8) */
/* WARNING: Removing unreachable block (ram,0x0001018928cc) */
/* WARNING: Removing unreachable block (ram,0x0001018928e0) */
/* WARNING: Removing unreachable block (ram,0x0001018928e8) */
/* WARNING: Removing unreachable block (ram,0x000101892958) */
/* WARNING: Removing unreachable block (ram,0x000101892948) */
/* WARNING: Removing unreachable block (ram,0x00010189295c) */
/* WARNING: Removing unreachable block (ram,0x00010189268c) */
/* WARNING: Removing unreachable block (ram,0x000101891d94) */
/* WARNING: Removing unreachable block (ram,0x000101892a40) */

void FUN_10189171c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x12;
  undefined1 auStack_a930 [16];
  undefined1 *puStack_a920;
  long lStack_a8f0;
  long lStack_a8e8;
  long lStack_a8e0;
  long lStack_a8c8;
  long lStack_a8b8;
  long lStack_3878;
  undefined8 uStack_3870;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = 0;
  func_0x0001046d90b0();
  lStack_a8e8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8e8 + 0x40));
  lVar1 = 0;
  func_0x000100b91d00();
  lStack_a8e0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = (long)(auStack_a930 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_a8b8 = lVar4;
  func_0x00010423cab0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar4 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a8c8 = lVar4 - extraout_x12;
  func_0x0001000d224c(&lStack_3878);
  lVar1 = lStack_3878;
  lVar2 = lStack_3878;
  func_0x000107c614f0(lStack_3878);
  uVar3 = 0xd00000000000001d;
  func_0x00010403c628(0xd00000000000001d,0x800000010efbc8d0,lVar2,uStack_3870);
  func_0x000107c615e8(lVar1);
  if (((uVar3 & 1) != 0) && (func_0x0001000d224c(&lStack_3878), lStack_3878 != 0)) {
    puStack_a920 = auStack_a930 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_a8f0 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}


