/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10142c8fc; end: 10142ca0b;  */

/* WARNING: Removing unreachable block (ram,0x00010142ca08) */

void FUN_10142c8fc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x14) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 10) goto LAB_10142c988;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        (*pcVar3)();
      }
      else {
        if (lVar1 == 0x14) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_10142d45c();
          lVar2 = unaff_x20 + 0x18;
        }
        else {
          if (lVar1 != 0x15) goto LAB_10142c988;
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_10142d45c();
          lVar2 = unaff_x20 + 0x30;
        }
        (*pcVar3)(lVar2,&UNK_1103b61a8,lVar1,param_2,param_3);
      }
LAB_10142c988:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10142ca0c; end: 10142cacf;  */

void FUN_10142ca0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 != '\x01') ||
       ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] != '\x01' ||
       ((**(code **)(param_3 + 0x68))(1,10,param_2,param_3), unaff_x21 == 0)))) &&
     (FUN_10142cad0(), unaff_x21 == 0)) {
    FUN_10142cb50();
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10142cad0; end: 10142cb4f;  */

void FUN_10142cad0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x18);
  if (lStack_58 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10142d45c();
    (*pcVar1)(&lStack_58,0x14,&UNK_1103b61a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10142cb50; end: 10142cbcf;  */

void FUN_10142cb50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10142d45c();
    (*pcVar1)(&lStack_58,0x15,&UNK_1103b61a8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10142cbd0; end: 10142cc1b;  */

uint FUN_10142cbd0(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong auStack_f8 [3];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((((*param_1 ^ *param_2) & 1) != 0) || (((param_1[1] ^ param_2[1]) & 1) != 0)) {
    return 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = *(long *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  lStack_a0 = lVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if (uVar7 == 0) {
    if (lVar8 != 0) goto LAB_10142d230;
    FUN_10142c528(&uStack_80,&uStack_c0);
    FUN_10142c528(&lStack_a0,&uStack_c0);
    func_0x000101429598(0,uVar9,uVar5);
LAB_10142d278:
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(ulong *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    lStack_e0 = lVar8;
    uStack_d8 = uVar10;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar9;
    uStack_b0 = uVar5;
    if (uVar7 == 0) {
      if (lVar8 != 0) goto LAB_10142d30c;
      FUN_10142c528(&uStack_c0,auStack_f8);
      FUN_10142c528(&lStack_e0,auStack_f8);
      func_0x000101429598(0,uVar9,uVar5);
    }
    else {
      if (lVar8 == 0) {
LAB_10142d30c:
        FUN_10142c528(&uStack_c0,auStack_f8);
        plVar3 = &lStack_e0;
        puVar4 = auStack_f8;
        goto LAB_10142d320;
      }
      FUN_10142c528(&uStack_c0,auStack_f8);
      FUN_10142c528(&lStack_e0,auStack_f8);
      uVar2 = uVar7;
      FUN_10142d048(uVar7,uVar9,uVar5,lVar8,uVar10,uVar6);
      func_0x000101429598(lVar8,uVar10,uVar6);
      func_0x000101429598(uVar7,uVar9,uVar5);
      if ((uVar2 & 1) == 0) goto LAB_10142d344;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                  *(undefined8 *)(param_2 + 0x10));
    uVar1 = (uint)uVar5;
  }
  else {
    if (lVar8 == 0) {
LAB_10142d230:
      FUN_10142c528(&uStack_80,&uStack_c0);
      plVar3 = &lStack_a0;
      puVar4 = &uStack_c0;
LAB_10142d320:
      FUN_10142c528(plVar3,puVar4);
      func_0x000101429598(uVar7,uVar9,uVar5);
      func_0x000101429598(lVar8,uVar10,uVar6);
    }
    else {
      FUN_10142c528(&uStack_80,&uStack_c0);
      FUN_10142c528(&lStack_a0,&uStack_c0);
      uVar2 = uVar7;
      FUN_10142d048(uVar7,uVar9,uVar5,lVar8,uVar10,uVar6);
      func_0x000101429598(lVar8,uVar10,uVar6);
      func_0x000101429598(uVar7,uVar9,uVar5);
      if ((uVar2 & 1) != 0) goto LAB_10142d278;
    }
LAB_10142d344:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10142cc1c; end: 10142cc4b;  */

undefined1  [16] FUN_10142cc1c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10142cc4c; end: 10142cc7f;  */

void FUN_10142cc4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10142cc80; end: 10142cc93;  */

undefined1  [16] FUN_10142cc80(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10142cc90;
  return auVar1;
}



/* Entry: 10142cc94; end: 10142cca7;  */

void FUN_10142cc94(void)

{
  FUN_10142c8fc();
  return;
}



/* Entry: 10142cca8; end: 10142cce7;  */

void FUN_10142cca8(void)

{
  FUN_10142ca0c();
  return;
}



/* Entry: 10142cce8; end: 10142cceb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10142cce8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10142ccec; end: 10142cd23;  */

uint FUN_10142ccec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_10142dbfc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10142cd24; end: 10142cd7b;  */

uint FUN_10142cd24(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_10142d14c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10142cd7c; end: 10142ce1b;  */

/* WARNING: Possible PIC construction at 0x00010142cdc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142cdd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142cdcc) */
/* WARNING: Removing unreachable block (ram,0x00010142cddc) */

void FUN_10142cd7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d7ef88 != -1) {
    func_0x000107c61568(0x112d7ef88,FUN_10142c8b4);
  }
  uVar5 = uRam00000001137ff4c8;
  uVar4 = uRam00000001137ff4c0;
  uVar3 = uRam00000001137ff4b8;
  uVar2 = uRam00000001137ff4b0;
  uVar1 = uRam00000001137ff4a8;
  *param_1 = uRam00000001137ff4a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10142ce1c; end: 10142ce57;  */

void FUN_10142ce1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d7efc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d7efc0,&UNK_10d93d198);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10142ce58; end: 10142cf6b;  */

void FUN_10142ce58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10142cf6c; end: 10142cfc3;  */

uint FUN_10142cf6c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10142d14c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10142cfc4; end: 10142d047;  */

undefined8 FUN_10142cfc4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_2 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        uVar1 = plVar5[-1];
        if ((uVar1 != plVar4[-1] || *plVar5 != *plVar4) && (func_0x000107c605b8(), (uVar1 & 1) == 0)
           ) goto LAB_10142d02c;
        plVar4 = plVar4 + 2;
        plVar5 = plVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_10142d02c:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10142d048; end: 10142d10b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142d0e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010142d0ec) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10142d048(long param_1,byte *param_2,byte *param_3,long param_4,long param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar21;
  byte *unaff_x23;
  long lVar22;
  byte *unaff_x24;
  undefined8 *puVar23;
  byte *unaff_x25;
  undefined8 *puVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 != *(long *)(param_4 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar22 != 0 && param_1 != param_4) {
    puVar23 = (undefined8 *)(param_4 + 0x28);
    puVar24 = (undefined8 *)(param_1 + 0x28);
    do {
      pbVar10 = (byte *)puVar24[-1];
      pbVar12 = (byte *)*puVar24;
      pbVar13 = (byte *)puVar23[-1];
      pbVar14 = (byte *)*puVar23;
      if ((byte *)puVar24[-1] != (byte *)puVar23[-1] || (byte *)*puVar24 != (byte *)*puVar23)
      goto code_r0x000107c605b8;
      puVar23 = puVar23 + 2;
      puVar24 = puVar24 + 2;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_3 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_6 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_2;
    pbVar11 = param_3;
    if ((ulong)param_3 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_2 != (byte *)0x0) || (param_3 != (byte *)0xc000000000000000)) ||
          (param_6 >> 0x3e < 3)) || ((uVar17 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_2 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_6 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar16,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_5)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_2 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_2 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_2 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_3 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_3 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_2 >> 0x20) - (long)unaff_x25);
          if ((long)param_2 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_3;
          if (param_2 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_2 = (byte *)0x0;
          }
          else {
            pbVar11 = param_2;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_2 = param_2 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_2;
            if (param_2 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_2;
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar22 = *(long *)(param_2 + 0x10);
          unaff_x24 = *(byte **)(param_2 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_2;
          if (param_2 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_2 = param_2 + (lVar22 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_2;
          unaff_x25 = param_3;
          if (param_2 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_2;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)param_3 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_2,pbVar11,param_5,
                      param_6);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_6;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_2 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar25 = pbVar8[0x28];
    param_3 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_2;
    if (bVar25 < 3) {
      if (bVar25 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar22 = *(long *)pbVar11;
          uVar9 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar22,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar25 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar22 = *(long *)pbVar11;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar22,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 == pbVar13) && (param_3 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar22 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_2 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 != (byte *)0x0) {
            if (lVar22 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar22);
            func_0x000107c61174();
            pbVar10 = pbVar20;
            func_0x000107c60118();
            func_0x000107c61170(pbVar20);
            func_0x000107c61170(lVar22);
            pbVar20 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar21 = *(long *)(pbVar8 + 0x20);
    if (bVar25 < 5) {
      if (bVar25 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_2 == pbVar14)) &&
           (pbVar10 = param_3, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_3 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar22 = *(long *)(pbVar11 + 0x20);
      if (param_3 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 != pbVar13) || (param_3 != pbVar14)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar10,pbVar12,pbVar13,pbVar14,0);
          return pbVar10;
        }
      }
      if (lVar21 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar21 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar21,*(byte **)(pbVar11 + 0x18),lVar22,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar20 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar25 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar21 == 0) && param_3 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar21 = *(long *)(pbVar11 + 0x20);
        lVar22 = *(long *)(pbVar11 + 0x18);
        bVar25 = pbVar11[8] | (byte)lVar22;
        bVar26 = pbVar11[9] | (byte)((ulong)lVar22 >> 8);
        bVar27 = pbVar11[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar28 = pbVar11[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar29 = pbVar11[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar30 = pbVar11[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar31 = pbVar11[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar32 = pbVar11[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar33 = pbVar11[0x10] | (byte)lVar21;
        bVar34 = pbVar11[0x11] | (byte)((ulong)lVar21 >> 8);
        bVar35 = pbVar11[0x12] | (byte)((ulong)lVar21 >> 0x10);
        bVar36 = pbVar11[0x13] | (byte)((ulong)lVar21 >> 0x18);
        bVar37 = pbVar11[0x14] | (byte)((ulong)lVar21 >> 0x20);
        bVar38 = pbVar11[0x15] | (byte)((ulong)lVar21 >> 0x28);
        bVar39 = pbVar11[0x16] | (byte)((ulong)lVar21 >> 0x30);
        bVar40 = pbVar11[0x17] | (byte)((ulong)lVar21 >> 0x38);
        auVar41[1] = bVar26;
        auVar41[0] = bVar25;
        auVar41[2] = bVar27;
        auVar41[3] = bVar28;
        auVar41[4] = bVar29;
        auVar41[5] = bVar30;
        auVar41[6] = bVar31;
        auVar41[7] = bVar32;
        auVar41[8] = bVar33;
        auVar41[9] = bVar34;
        auVar41[10] = bVar35;
        auVar41[0xb] = bVar36;
        auVar41[0xc] = bVar37;
        auVar41[0xd] = bVar38;
        auVar41[0xe] = bVar39;
        auVar41[0xf] = bVar40;
        auVar3[1] = bVar26;
        auVar3[0] = bVar25;
        auVar3[2] = bVar27;
        auVar3[3] = bVar28;
        auVar3[4] = bVar29;
        auVar3[5] = bVar30;
        auVar3[6] = bVar31;
        auVar3[7] = bVar32;
        auVar3[8] = bVar33;
        auVar3[9] = bVar34;
        auVar3[10] = bVar35;
        auVar3[0xb] = bVar36;
        auVar3[0xc] = bVar37;
        auVar3[0xd] = bVar38;
        auVar3[0xe] = bVar39;
        auVar3[0xf] = bVar40;
        auVar41 = NEON_ext(auVar41,auVar3,8,1);
        if (CONCAT17(bVar32 | auVar41[7],
                     CONCAT16(bVar31 | auVar41[6],
                              CONCAT15(bVar30 | auVar41[5],
                                       CONCAT14(bVar29 | auVar41[4],
                                                CONCAT13(bVar28 | auVar41[3],
                                                         CONCAT12(bVar27 | auVar41[2],
                                                                  CONCAT11(bVar26 | auVar41[1],
                                                                           bVar25 | auVar41[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && param_3 == (byte *)0x0) &&
          lVar21 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar21 = *(long *)(pbVar11 + 0x20);
      lVar22 = *(long *)(pbVar11 + 0x18);
      bVar25 = pbVar11[8] | (byte)lVar22;
      bVar26 = pbVar11[9] | (byte)((ulong)lVar22 >> 8);
      bVar27 = pbVar11[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar28 = pbVar11[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar29 = pbVar11[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar30 = pbVar11[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar31 = pbVar11[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar32 = pbVar11[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar33 = pbVar11[0x10] | (byte)lVar21;
      bVar34 = pbVar11[0x11] | (byte)((ulong)lVar21 >> 8);
      bVar35 = pbVar11[0x12] | (byte)((ulong)lVar21 >> 0x10);
      bVar36 = pbVar11[0x13] | (byte)((ulong)lVar21 >> 0x18);
      bVar37 = pbVar11[0x14] | (byte)((ulong)lVar21 >> 0x20);
      bVar38 = pbVar11[0x15] | (byte)((ulong)lVar21 >> 0x28);
      bVar39 = pbVar11[0x16] | (byte)((ulong)lVar21 >> 0x30);
      bVar40 = pbVar11[0x17] | (byte)((ulong)lVar21 >> 0x38);
      auVar1[1] = bVar26;
      auVar1[0] = bVar25;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33;
      auVar1[9] = bVar34;
      auVar1[10] = bVar35;
      auVar1[0xb] = bVar36;
      auVar1[0xc] = bVar37;
      auVar1[0xd] = bVar38;
      auVar1[0xe] = bVar39;
      auVar1[0xf] = bVar40;
      auVar2[1] = bVar26;
      auVar2[0] = bVar25;
      auVar2[2] = bVar27;
      auVar2[3] = bVar28;
      auVar2[4] = bVar29;
      auVar2[5] = bVar30;
      auVar2[6] = bVar31;
      auVar2[7] = bVar32;
      auVar2[8] = bVar33;
      auVar2[9] = bVar34;
      auVar2[10] = bVar35;
      auVar2[0xb] = bVar36;
      auVar2[0xc] = bVar37;
      auVar2[0xd] = bVar38;
      auVar2[0xe] = bVar39;
      auVar2[0xf] = bVar40;
      auVar41 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar32 | auVar41[7],
                        CONCAT16(bVar31 | auVar41[6],
                                 CONCAT15(bVar30 | auVar41[5],
                                          CONCAT14(bVar29 | auVar41[4],
                                                   CONCAT13(bVar28 | auVar41[3],
                                                            CONCAT12(bVar27 | auVar41[2],
                                                                     CONCAT11(bVar26 | auVar41[1],
                                                                              bVar25 | auVar41[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_5 = *(long *)(pbVar11 + 8);
    param_6 = *(ulong *)(pbVar11 + 0x10);
    lVar22 = *(long *)pbVar11;
    uVar9 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar22,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10142d10c; end: 10142d14b;  */

void FUN_10142d10c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93cfd8;
  func_0x000107c61520(&UNK_10d93cfd8,&UNK_1103b61a8);
  puRam0000000112d7ef80 = puVar1;
  return;
}



/* Entry: 10142d14c; end: 10142d3a3;  */

uint FUN_10142d14c(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong auStack_f8 [3];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((((*param_1 ^ *param_2) & 1) != 0) || (((param_1[1] ^ param_2[1]) & 1) != 0)) {
    return 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(ulong *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = *(long *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  lStack_a0 = lVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if (uVar7 == 0) {
    if (lVar8 != 0) goto LAB_10142d230;
    FUN_10142c528(&uStack_80,&uStack_c0);
    FUN_10142c528(&lStack_a0,&uStack_c0);
    func_0x000101429598(0,uVar9,uVar5);
LAB_10142d278:
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(ulong *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(long *)(param_2 + 0x30);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    lStack_e0 = lVar8;
    uStack_d8 = uVar10;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar9;
    uStack_b0 = uVar5;
    if (uVar7 == 0) {
      if (lVar8 != 0) goto LAB_10142d30c;
      FUN_10142c528(&uStack_c0,auStack_f8);
      FUN_10142c528(&lStack_e0,auStack_f8);
      func_0x000101429598(0,uVar9,uVar5);
    }
    else {
      if (lVar8 == 0) {
LAB_10142d30c:
        FUN_10142c528(&uStack_c0,auStack_f8);
        plVar3 = &lStack_e0;
        puVar4 = auStack_f8;
        goto LAB_10142d320;
      }
      FUN_10142c528(&uStack_c0,auStack_f8);
      FUN_10142c528(&lStack_e0,auStack_f8);
      uVar2 = uVar7;
      FUN_10142d048(uVar7,uVar9,uVar5,lVar8,uVar10,uVar6);
      func_0x000101429598(lVar8,uVar10,uVar6);
      func_0x000101429598(uVar7,uVar9,uVar5);
      if ((uVar2 & 1) == 0) goto LAB_10142d344;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                  *(undefined8 *)(param_2 + 0x10));
    uVar1 = (uint)uVar5;
  }
  else {
    if (lVar8 == 0) {
LAB_10142d230:
      FUN_10142c528(&uStack_80,&uStack_c0);
      plVar3 = &lStack_a0;
      puVar4 = &uStack_c0;
LAB_10142d320:
      FUN_10142c528(plVar3,puVar4);
      func_0x000101429598(uVar7,uVar9,uVar5);
      func_0x000101429598(lVar8,uVar10,uVar6);
    }
    else {
      FUN_10142c528(&uStack_80,&uStack_c0);
      FUN_10142c528(&lStack_a0,&uStack_c0);
      uVar2 = uVar7;
      FUN_10142d048(uVar7,uVar9,uVar5,lVar8,uVar10,uVar6);
      func_0x000101429598(lVar8,uVar10,uVar6);
      func_0x000101429598(uVar7,uVar9,uVar5);
      if ((uVar2 & 1) != 0) goto LAB_10142d278;
    }
LAB_10142d344:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 10142d3a4; end: 10142d3e3;  */

void FUN_10142d3a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d0b0;
  func_0x000107c61520(&UNK_10d93d0b0,&UNK_1103b6228);
  puRam0000000112d7ef90 = puVar1;
  return;
}



/* Entry: 10142d3e4; end: 10142d407;  */

void FUN_10142d3e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142d408();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10142d408; end: 10142d447;  */

void FUN_10142d408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7ef98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93cfb0;
  func_0x000107c61520(&UNK_10d93cfb0,&UNK_1103b61a8);
  puRam0000000112d7ef98 = puVar1;
  return;
}



/* Entry: 10142d448; end: 10142d45b;  */

void FUN_10142d448(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142d10c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10142d45c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10142d45c; end: 10142d49b;  */

void FUN_10142d45c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d93cf68;
  func_0x000107c61520(&DAT_10d93cf68,&UNK_1103b61a8);
  puRam0000000112d7efa0 = puVar1;
  return;
}



/* Entry: 10142d49c; end: 10142d49f;  */

void FUN_10142d49c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d018;
  func_0x000107c61520(&UNK_10d93d018,&UNK_1103b61a8);
  puRam0000000112d7efa8 = puVar1;
  return;
}



/* Entry: 10142d4a0; end: 10142d4df;  */

void FUN_10142d4a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d018;
  func_0x000107c61520(&UNK_10d93d018,&UNK_1103b61a8);
  puRam0000000112d7efa8 = puVar1;
  return;
}



/* Entry: 10142d4e0; end: 10142d503;  */

void FUN_10142d4e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142d504();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10142d504; end: 10142d543;  */

void FUN_10142d504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d088;
  func_0x000107c61520(&UNK_10d93d088,&UNK_1103b6228);
  puRam0000000112d7efb0 = puVar1;
  return;
}



/* Entry: 10142d544; end: 10142d557;  */

void FUN_10142d544(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10142d3a4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10142c294)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10142d558; end: 10142d587;  */

void FUN_10142d558(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10142d588; end: 10142d58b;  */

void FUN_10142d588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d0f0;
  func_0x000107c61520(&UNK_10d93d0f0,&UNK_1103b6228);
  puRam0000000112d7efb8 = puVar1;
  return;
}



/* Entry: 10142d58c; end: 10142d5cb;  */

void FUN_10142d58c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93d0f0;
  func_0x000107c61520(&UNK_10d93d0f0,&UNK_1103b6228);
  puRam0000000112d7efb8 = puVar1;
  return;
}



/* Entry: 10142d5cc; end: 10142d5f3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10142d5cc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10142d5f4; end: 10142d69b;  */

undefined8 * FUN_10142d5f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10142d69c; end: 10142d6df;  */

undefined8 * FUN_10142d69c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10142d6e0; end: 10142d777;  */

int FUN_10142d6e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10142d778; end: 10142d7fb;  */

long FUN_10142d778(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10142d7fc; end: 10142d8bb;  */

undefined2 * FUN_10142d7fc(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  lVar3 = *(long *)(param_2 + 0xc);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 0xc) = lVar3;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  else {
    *(long *)(param_1 + 0xc) = lVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    func_0x000107c61434();
    func_0x00010006c00c(uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(long *)(param_1 + 0x18) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x1c);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c61434();
    func_0x00010006c00c(uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return param_1;
}



/* Entry: 10142d8bc; end: 10142da4b;  */

undefined1 * FUN_10142d8bc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar5,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  plVar6 = (long *)(param_1 + 0x18);
  lVar7 = *plVar6;
  plVar8 = (long *)(param_2 + 0x18);
  lVar4 = *plVar8;
  if (lVar7 == 0) {
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      lVar4 = *plVar8;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *plVar6 = lVar4;
    }
    else {
      *(long *)(param_1 + 0x18) = lVar4;
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      func_0x000107c61434();
      func_0x00010006c00c(uVar5,uVar1);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar1;
    }
  }
  else if (lVar4 == 0) {
    FUN_10142c000(plVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    lVar4 = *plVar8;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *plVar6 = lVar4;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  else {
    *(long *)(param_1 + 0x18) = lVar4;
    func_0x000107c61434();
    func_0x000107c6142c(lVar7);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010006c00c(uVar5,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    func_0x00010006c090(uVar1,uVar3);
  }
  plVar6 = (long *)(param_1 + 0x30);
  lVar7 = *plVar6;
  plVar8 = (long *)(param_2 + 0x30);
  lVar4 = *plVar8;
  if (lVar7 == 0) {
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      lVar4 = *plVar8;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *plVar6 = lVar4;
    }
    else {
      *(long *)(param_1 + 0x30) = lVar4;
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      func_0x000107c61434();
      func_0x00010006c00c(uVar5,uVar1);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *(undefined8 *)(param_1 + 0x40) = uVar1;
    }
  }
  else if (lVar4 == 0) {
    FUN_10142c000(plVar6);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    lVar4 = *plVar8;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *plVar6 = lVar4;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  else {
    *(long *)(param_1 + 0x30) = lVar4;
    func_0x000107c61434();
    func_0x000107c6142c(lVar7);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010006c00c(uVar5,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    func_0x00010006c090(uVar1,uVar3);
  }
  return param_1;
}



/* Entry: 10142da4c; end: 10142db2b;  */

undefined1 * FUN_10142da4c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  plVar3 = (long *)(param_1 + 0x18);
  if (*plVar3 != 0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      goto LAB_10142dad0;
    }
    FUN_10142c000(plVar3);
  }
  lVar5 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *plVar3 = lVar5;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
LAB_10142dad0:
  plVar3 = (long *)(param_1 + 0x30);
  if (*plVar3 != 0) {
    if (*(long *)(param_2 + 0x30) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_10142c000(plVar3);
  }
  lVar5 = *(long *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *plVar3 = lVar5;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



/* Entry: 10142db2c; end: 10142dbfb;  */

int FUN_10142db2c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10142dbfc; end: 10142dc7b;  */

void FUN_10142dbfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7efc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d93d05c;
  func_0x000107c61520(&DAT_10d93d05c,&UNK_1103b6228);
  puRam0000000112d7efc8 = puVar1;
  return;
}



/* Entry: 10142dc7c; end: 10142dc97;  */

undefined8 * FUN_10142dc7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10142dc98; end: 10142dd07;  */

void FUN_10142dc98(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  
  (*param_1)();
  func_0x0001048d9980();
  func_0x000107c60450("Fatal error",0xb,2,param_1,param_2,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10142dd08);
  (*pcVar1)();
}



/* Entry: 10142dd08; end: 10142de4f;  */

void FUN_10142dd08(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  
  (*param_1)();
  if (((ulong)param_1 & 1) != 0) {
    return;
  }
  (*param_3)();
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c61434(0x800000010ef3ecc0);
  func_0x0001048d9980(0xd000000000000016,0x800000010ef3ecc0);
  func_0x000107c6142c(0x800000010ef3ecc0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10142ddc0);
  (*pcVar1)();
}



/* Entry: 10142de50; end: 10142de77;  */

void FUN_10142de50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10142de78; end: 10142e027;  */

undefined1  [16]
FUN_10142de78(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong param_6,
             ulong param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_4 == 0) {
    uVar2 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_7,param_8);
    uVar3 = uVar2;
    uVar4 = param_7;
    func_0x000107c312f4();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_7);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10142e028);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_7,param_8);
    uVar3 = uVar2;
    uVar4 = param_3;
    func_0x0001000f6108(uVar2,param_3,param_7);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_7);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10142df24);
      (*pcVar1)();
    }
  }
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61434(uVar4);
  if ((uVar2 == param_1) && (uVar4 == param_2)) {
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar3 = uVar2;
    func_0x000107c605b8(uVar2,uVar4,param_1,param_2,0);
    func_0x000107c6142c(uVar4);
    if ((uVar3 & 1) == 0) goto LAB_10142e000;
  }
  uVar3 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar3 = param_6 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    func_0x000107c6142c(uVar4);
    func_0x000107c61434(param_6);
    uVar4 = param_6;
    uVar2 = param_5;
  }
LAB_10142e000:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10142e028; end: 10142e0e3; -[SCSystemServicesProviderImplementation setApplicationLifeCycleListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7f110;
  func_0x000107c61428(param_1 + _DAT_112d7f110,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10142e0e4; end: 10142e143; -[SCSystemServicesProviderImplementation init] */

void FUN_10142e0e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SystemServicesProviderImplementation.SystemServicesProviderImplementation",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10142e110);
  (*pcVar1)();
}



/* Entry: 10142e144; end: 10142e1cb; -[SCSystemServicesProviderImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010142e160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142e1a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e164) */
/* WARNING: Removing unreachable block (ram,0x00010142e1a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7f110));
  return;
}



/* Entry: 10142e1cc; end: 10142e1cf;  */

void FUN_10142e1cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  long lStack_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar5 = 0;
  func_0x000100082288(0,lVar7);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar12 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12;
  lStack_108 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar6 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12_00;
  lVar13 = unaff_x20[3];
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 != 0) {
    lVar10 = *(long *)(*unaff_x20 + 0x68);
    func_0x000107c61428((long)unaff_x20 + lVar10,auStack_100,0,0);
    (**(code **)(lVar9 + 0x10))(lVar8,(long)unaff_x20 + lVar10,lVar5);
    lVar10 = lVar8;
    func_0x000107c614c4(lVar8,lVar5);
    if ((int)lVar10 == 1) {
      pcVar11 = *(code **)(lStack_108 + 0x20);
      (*pcVar11)(lVar6,lVar8,lVar7);
      (*pcVar11)(param_1,lVar6,lVar7);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  func_0x000107c61428(puVar1,auStack_80,0,0);
  if (*(char *)((long)puVar1 + 0x11) == '\x01') {
    func_0x000107c6157c();
  }
  else {
    uStack_120 = *puVar1;
    uVar2 = puVar1[1];
    uVar3 = *(undefined1 *)(puVar1 + 2);
    uStack_118 = param_1;
    func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
    func_0x00010008a8e8(0x1138153c0,auStack_e8);
    if (lStack_d0 != 0) {
      func_0x000104857124(auStack_e8,auStack_a8);
      lStack_128 = lVar9;
      func_0x0001000a8868(auStack_a8,uStack_90);
      pcStack_130 = *(code **)(lStack_88 + 8);
      func_0x000107c61580();
      lVar9 = lStack_128;
      (*pcStack_130)(uStack_120,uVar2,uVar3,&UNK_104857794);
      func_0x000107c61574();
      func_0x0001000834e4(auStack_a8);
      param_1 = uStack_118;
      goto code_r0x000100083dec;
    }
    func_0x000107c6157c();
    func_0x00010008a938(auStack_e8);
    param_1 = uStack_118;
  }
  func_0x000100083ec8();
code_r0x000100083dec:
  func_0x000107c61428(lVar13 + 0x10,auStack_a8,0x21,0);
  iVar4 = 1;
  func_0x000107c60b20(1,lVar13 + 0x10);
  func_0x000107c614a8(auStack_a8);
  if (iVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100083eb4);
    (*pcVar11)();
  }
  lVar6 = *(long *)(*unaff_x20 + 0x68);
  func_0x000107c61428((long)unaff_x20 + lVar6,auStack_a8,0,0);
  (**(code **)(lVar9 + 0x10))(lVar12,(long)unaff_x20 + lVar6,lVar5);
  lVar8 = lVar12;
  func_0x000107c614c4(lVar12,lVar5);
  lVar6 = lStack_110;
  if ((int)lVar8 == 1) {
    pcVar11 = *(code **)(lStack_108 + 0x20);
    (*pcVar11)(lStack_110,lVar12,lVar7);
    (*pcVar11)(param_1,lVar6,lVar7);
    func_0x000107c61574();
    return;
  }
  (**(code **)(lVar9 + 8))(lVar12,lVar5);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100083ec8);
  (*pcVar11)();
}



/* Entry: 10142e1d0; end: 10142e1ef;  */

void FUN_10142e1d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d5700);
  return;
}



/* Entry: 10142e1f0; end: 10142e24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e1f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7f1a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10142e24c; end: 10142e2db; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationWillResignActive:] */

/* WARNING: Possible PIC construction at 0x00010142e2bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e2c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e24c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e2dc; end: 10142e36b; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationDidEnterBackground:] */

/* WARNING: Possible PIC construction at 0x00010142e34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x20);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e36c; end: 10142e3fb; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener sceneDidDisconnect:] */

/* WARNING: Possible PIC construction at 0x00010142e3dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e3e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x28);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e3fc; end: 10142e48b; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationWillEnterForeground:] */

/* WARNING: Possible PIC construction at 0x00010142e46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x30);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e48c; end: 10142e51b; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationWillTerminate:] */

/* WARNING: Possible PIC construction at 0x00010142e4fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x38);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e51c; end: 10142e5ab; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener applicationDidReceiveMemoryWarning:] */

/* WARNING: Possible PIC construction at 0x00010142e58c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142e590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7f1a8);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d7f1a8))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x40);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142e5ac; end: 10142e5df;  */

void FUN_10142e5ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10142e5e0; end: 10142e5f7; -[_TtC30SCApplicationLifeCycleListener30SCApplicationLifeCycleListener .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142e5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d7f1a8));
  return;
}



/* Entry: 10142e5f8; end: 10142e727;  */

void FUN_10142e5f8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 10142e728; end: 10142e79f;  */

undefined8 FUN_10142e728(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10142e7a0; end: 10142e8d7;  */

undefined1 * FUN_10142e7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 10142e8d8; end: 10142e8ff;  */

void FUN_10142e8d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10142e900; end: 10142e96b;  */

void FUN_10142e900(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d7f1d8;
  func_0x000100a14bd4(0x112d7f1d8,&UNK_10d93d430);
  uVar2 = 0x112d7f200;
  func_0x000100a14bd4(0x112d7f200,&UNK_10d93d3c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 10142e96c; end: 10142e9b3;  */

void FUN_10142e96c(void)

{
  func_0x000100a14bd4(0x112d7f1e8,&UNK_10d93d388);
  return;
}



/* Entry: 10142e9b4; end: 10142e9e3;  */

void FUN_10142e9b4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10142e9e4; end: 10142ea1f;  */

/* WARNING: Possible PIC construction at 0x00010142eaa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142eaa8) */

void FUN_10142e9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_6,param_7);
  (*(code *)&UNK_10b0b0b98)(param_1,uVar1,param_4,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142ea20; end: 10142eacf;  */

/* WARNING: Possible PIC construction at 0x00010142eaa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142eaa8) */

void FUN_10142ea20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_6,param_7);
  (*param_8)(param_1,uVar1,param_4,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142ead0; end: 10142eadb;  */

/* WARNING: Possible PIC construction at 0x00010142eb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142eb44) */

void FUN_10142ead0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*(code *)&UNK_10b0b1ae8)(param_1,uVar1,param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142eadc; end: 10142eb5f;  */

/* WARNING: Possible PIC construction at 0x00010142eb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142eb44) */

void FUN_10142eadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*param_6)(param_1,uVar1,param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142eb60; end: 10142eba3;  */

void FUN_10142eb60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c2bdc8(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10142eba4; end: 10142ec13;  */

/* WARNING: Possible PIC construction at 0x00010142ebf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142ebfc) */

void FUN_10142eba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c2bdcc(param_1,uVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10142ec14; end: 10142ec87;  */

void FUN_10142ec14(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10142ec88; end: 10142ec93;  */

/* WARNING: Possible PIC construction at 0x00010142ee0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142ee10) */

void FUN_10142ec88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*(code *)&UNK_10b0b1858)(param_1,uVar1,param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142ec94; end: 10142ece3;  */

void FUN_10142ec94(void)

{
  FUN_10142ece4();
  return;
}



/* Entry: 10142ece4; end: 10142ed97;  */

/* WARNING: Possible PIC construction at 0x00010142ed6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142ed70) */

void FUN_10142ece4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5fadc(param_6,param_7);
  (*param_10)(param_1,uVar1,param_4,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142ed98; end: 10142eda3;  */

/* WARNING: Possible PIC construction at 0x00010142ee0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142ee10) */

void FUN_10142ed98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*(code *)&UNK_10b0b1ae8)(param_1,uVar1,param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142eda4; end: 10142ee2b;  */

/* WARNING: Possible PIC construction at 0x00010142ee0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142ee10) */

void FUN_10142eda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_2,param_3);
  (*param_8)(param_1,uVar1,param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10142ee2c; end: 10142ee73;  */

void FUN_10142ee2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c2bdc8(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10142ee74; end: 10142eee7;  */

/* WARNING: Possible PIC construction at 0x00010142eecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142eed0) */

void FUN_10142ee74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c2bdcc(param_1,uVar1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10142eee8; end: 10142ef07;  */

void FUN_10142eee8(void)

{
  func_0x000107c61168(&PTR_PTR_112d7f248);
  return;
}



/* Entry: 10142ef08; end: 10142ef2f;  */

void FUN_10142ef08(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103b6610;
  if (lRam0000000112d7f2e8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d7f2e8 = param_1;
  }
  return;
}



/* Entry: 10142ef30; end: 10142ef73;  */

void FUN_10142ef30(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10142ef74; end: 10142efcf;  */

void FUN_10142ef74(void)

{
  return;
}



/* Entry: 10142efd0; end: 10142efff;  */

void FUN_10142efd0(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x0001000774fc(param_1);
  return;
}



/* Entry: 10142f000; end: 10142f17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142f000(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d7f3e8);
    puVar1 = &UNK_1103b6810;
    func_0x000107c613fc(&UNK_1103b6810,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = 0x10142f0e0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(long *)(puVar1 + 0x20) = lVar3;
    uStack_40 = 0x10142fc08;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1103b6828;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    puVar1 = puStack_38;
    func_0x000107c61580(lVar3,2);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar4);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 10142f17c; end: 10142f1a3; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor setStartupAborted] */

void FUN_10142f17c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10142f000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10142f1a4; end: 10142f3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142f1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_a0 = param_3;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)&uStack_a0 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - extraout_x12;
  func_0x000107c5eea0(lVar10);
  (**(code **)(lVar13 + 0x10))(lVar11,lVar10,lVar2);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar9 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1103b69c8;
  func_0x000107c613fc(&UNK_1103b69c8,uVar8 + 0x10,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_98 = param_1;
  (**(code **)(lVar13 + 0x20))(puVar3 + uVar12,lVar11,lVar2);
  uVar1 = uStack_a0;
  *(undefined8 *)(puVar3 + uVar8) = param_2;
  *(undefined8 *)((long)(puVar3 + uVar8) + 8) = uStack_a0;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar9 == 0) {
    func_0x000107c61434(uStack_a0);
    func_0x000107c61174(uStack_98);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7f3e8);
    puVar4 = &UNK_1103b69f0;
    func_0x000107c613fc(&UNK_1103b69f0,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x10142fac4;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(long *)(puVar4 + 0x20) = lVar9;
    uStack_70 = 0x10142fc0c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103b6a08;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_68;
    func_0x000107c61434(uVar1);
    func_0x000107c6157c(puVar3);
    func_0x000107c61580(lVar9,2);
    func_0x000107c61174(uStack_98);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar9);
  }
  func_0x000107c61574(puVar3);
  (**(code **)(lVar13 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 10142f3b4; end: 10142f437; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor beginStartedForLifecycleWithLifecycle:scopeName:] */

void FUN_10142f3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10142f1a4(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10142f438; end: 10142f65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142f438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_b8 = param_3;
  uStack_b0 = param_4;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = auStack_c0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12;
  func_0x000107c5eea0(lVar10);
  (**(code **)(lVar13 + 0x10))(puVar11,lVar10,lVar2);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar9 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1103b6a40;
  func_0x000107c613fc(&UNK_1103b6a40,uVar8 + 0x18,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  uStack_a8 = param_2;
  (**(code **)(lVar13 + 0x20))(puVar3 + uVar12,puVar11,lVar2);
  uVar1 = uStack_b0;
  *(undefined8 *)(puVar3 + uVar8) = uStack_b8;
  *(undefined8 *)((long)(puVar3 + uVar8) + 8) = uStack_b0;
  *(undefined8 *)(puVar3 + uVar8 + 0x10) = param_1;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar9 == 0) {
    func_0x000107c61434(uStack_b0);
    func_0x000107c61174(uStack_a8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7f3e8);
    puVar4 = &UNK_1103b6a68;
    func_0x000107c613fc(&UNK_1103b6a68,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x10142fb20;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(long *)(puVar4 + 0x20) = lVar9;
    uStack_80 = 0x10142fc10;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1103b6a80;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_78;
    func_0x000107c61434(uVar1);
    func_0x000107c6157c(puVar3);
    func_0x000107c61580(lVar9,2);
    func_0x000107c61174(uStack_a8);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar9);
  }
  func_0x000107c61574(puVar3);
  (**(code **)(lVar13 + 8))(lVar10,lVar2);
  return;
}



/* Entry: 10142f65c; end: 10142f6ef; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor beginEndedForLifecycleWithLifecycle:scopeName:duration:] */

void FUN_10142f65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_10142f438(param_1,param_4,param_5,param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10142f6f0; end: 10142f84b;  */

/* WARNING: Possible PIC construction at 0x00010142f7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142f7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142f804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142f7f8) */
/* WARNING: Removing unreachable block (ram,0x00010142f7e4) */
/* WARNING: Removing unreachable block (ram,0x00010142f808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142f6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_1103b6ab8;
  func_0x000107c613fc(&UNK_1103b6ab8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 == 0) {
    func_0x000107c61434(param_3);
  }
  else {
    puVar2 = &UNK_1103b6ae0;
    func_0x000107c613fc(&UNK_1103b6ae0,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x10142fb88;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = lVar3;
    uStack_60 = 0x10142fc14;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103b6af8;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61580(lVar3,2);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10142f84c; end: 10142f857; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor beginEndedForEntryPointWithEntryPoint:duration:] */

void FUN_10142f84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10142f6f0(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10142f858; end: 10142f9b3;  */

/* WARNING: Possible PIC construction at 0x00010142f948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142f95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142f96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010142f960) */
/* WARNING: Removing unreachable block (ram,0x00010142f94c) */
/* WARNING: Removing unreachable block (ram,0x00010142f970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10142f858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_1103b6b30;
  func_0x000107c613fc(&UNK_1103b6b30,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 == 0) {
    func_0x000107c61434(param_3);
  }
  else {
    puVar2 = &UNK_1103b6b58;
    func_0x000107c613fc(&UNK_1103b6b58,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x10142fbb4;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = lVar3;
    uStack_60 = 0x10142fc18;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103b6b70;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61580(lVar3,2);
    func_0x000107c61434(param_3);
    func_0x000107c6157c(puVar1);
    puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10142f9b4; end: 10142f9bf; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor provideEndedForServiceProviderWithServiceProvider:duration:] */

void FUN_10142f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10142f858(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10142f9c0; end: 10142fa2b;  */

void FUN_10142f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  (*param_5)(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}


