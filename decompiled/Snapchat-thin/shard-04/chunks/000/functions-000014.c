/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f6b720; end: 102f6b733;  */

void FUN_102f6b720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b0c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b0c8,&UNK_10db6a518);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6b734; end: 102f6b767;  */

void FUN_102f6b734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f6b768; end: 102f6b8c3;  */

void FUN_102f6b768(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_38 = unaff_x20[0x19];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f6b8c4; end: 102f6b90b;  */

void FUN_102f6b8c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a670,0x23,2);
  uRam0000000113805a30 = uStack_38;
  uRam0000000113805a28 = uStack_40;
  uRam0000000113805a40 = uStack_28;
  uRam0000000113805a38 = uStack_30;
  uRam0000000113805a50 = uStack_18;
  uRam0000000113805a48 = uStack_20;
  return;
}



/* Entry: 102f6b90c; end: 102f6b943;  */

undefined1  [16] FUN_102f6b90c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115d90;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 102f6b944; end: 102f6b97b;  */

uint FUN_102f6b944(long param_1,long param_2)

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
  func_0x000102f76f3c();
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



/* Entry: 102f6b97c; end: 102f6ba1b;  */

/* WARNING: Possible PIC construction at 0x000102f6b9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6b9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6b9cc) */
/* WARNING: Removing unreachable block (ram,0x000102f6b9dc) */

void FUN_102f6b97c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ad88 != -1) {
    func_0x000107c61568(0x112f2ad88,FUN_102f6b8c4);
  }
  uVar5 = uRam0000000113805a50;
  uVar4 = uRam0000000113805a48;
  uVar3 = uRam0000000113805a40;
  uVar2 = uRam0000000113805a38;
  uVar1 = uRam0000000113805a30;
  *param_1 = uRam0000000113805a28;
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



/* Entry: 102f6ba1c; end: 102f6ba2f;  */

void FUN_102f6ba1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b0b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b0b8,&UNK_10db6a510);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6ba30; end: 102f6ba67;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f6ba30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_102f729ac();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 102f6ba68; end: 102f6baaf;  */

void FUN_102f6ba68(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a670,0x23,2);
  uRam0000000113805a60 = uStack_38;
  uRam0000000113805a58 = uStack_40;
  uRam0000000113805a70 = uStack_28;
  uRam0000000113805a68 = uStack_30;
  uRam0000000113805a80 = uStack_18;
  uRam0000000113805a78 = uStack_20;
  return;
}



/* Entry: 102f6bab0; end: 102f6bbab;  */

/* WARNING: Removing unreachable block (ram,0x000102f6bb68) */
/* WARNING: Removing unreachable block (ram,0x000102f6bba8) */

void FUN_102f6bab0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        lVar2 = unaff_x20 + 0x40;
LAB_102f6bb90:
        (*pcVar4)(lVar2,&UNK_1105f04b0,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000102f64724();
          lVar2 = unaff_x20 + 0x20;
          goto LAB_102f6bb90;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f6bbac; end: 102f6bc4f;  */

void FUN_102f6bbac(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102f6bc50(), unaff_x21 == 0)) {
    FUN_102f6bcdc();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 102f6bc50; end: 102f6bcdb;  */

void FUN_102f6bc50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,2,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f6bcdc; end: 102f6bd67;  */

void FUN_102f6bcdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,3,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f6bd68; end: 102f6bd9f;  */

undefined1  [16] FUN_102f6bd68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115dc0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 102f6bda0; end: 102f6bdd7;  */

uint FUN_102f6bda0(long param_1,long param_2)

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
  func_0x000102f76efc();
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



/* Entry: 102f6bdd8; end: 102f6be77;  */

/* WARNING: Possible PIC construction at 0x000102f6be24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6be34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6be28) */
/* WARNING: Removing unreachable block (ram,0x000102f6be38) */

void FUN_102f6bdd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ad98 != -1) {
    func_0x000107c61568(0x112f2ad98,FUN_102f6ba68);
  }
  uVar5 = uRam0000000113805a80;
  uVar4 = uRam0000000113805a78;
  uVar3 = uRam0000000113805a70;
  uVar2 = uRam0000000113805a68;
  uVar1 = uRam0000000113805a60;
  *param_1 = uRam0000000113805a58;
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



/* Entry: 102f6be78; end: 102f6be8b;  */

void FUN_102f6be78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b0a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b0a8,&UNK_10db6a508);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6be8c; end: 102f6bebf;  */

void FUN_102f6be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f6bec0; end: 102f6bfdb;  */

void FUN_102f6bec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f6bfdc; end: 102f6c023;  */

void FUN_102f6bfdc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a640,0x24,2);
  uRam0000000113805a90 = uStack_38;
  uRam0000000113805a88 = uStack_40;
  uRam0000000113805aa0 = uStack_28;
  uRam0000000113805a98 = uStack_30;
  uRam0000000113805ab0 = uStack_18;
  uRam0000000113805aa8 = uStack_20;
  return;
}



/* Entry: 102f6c024; end: 102f6c10b;  */

/* WARNING: Removing unreachable block (ram,0x000102f6c108) */

void FUN_102f6c024(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x150);
LAB_102f6c0f8:
        (*pcVar3)();
      }
      else if (lVar1 == 2) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1105f04b0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_102f6c0f8;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102f6c10c; end: 102f6c1c7;  */

void FUN_102f6c10c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102f6d240(), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 102f6c1c8; end: 102f6c227;  */

void FUN_102f6c1c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 102f6c228; end: 102f6c23b;  */

void FUN_102f6c228(void)

{
  FUN_102f6c024();
  return;
}



/* Entry: 102f6c23c; end: 102f6c27b;  */

void FUN_102f6c23c(void)

{
  FUN_102f6c10c();
  return;
}



/* Entry: 102f6c27c; end: 102f6c2b3;  */

uint FUN_102f6c27c(long param_1,long param_2)

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
  func_0x000102f76ebc();
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



/* Entry: 102f6c2b4; end: 102f6c30b;  */

uint FUN_102f6c2b4(undefined8 *param_1)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_102f6fc38(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f6c30c; end: 102f6c3ab;  */

/* WARNING: Possible PIC construction at 0x000102f6c358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6c368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6c35c) */
/* WARNING: Removing unreachable block (ram,0x000102f6c36c) */

void FUN_102f6c30c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ada8 != -1) {
    func_0x000107c61568(0x112f2ada8,FUN_102f6bfdc);
  }
  uVar5 = uRam0000000113805ab0;
  uVar4 = uRam0000000113805aa8;
  uVar3 = uRam0000000113805aa0;
  uVar2 = uRam0000000113805a98;
  uVar1 = uRam0000000113805a90;
  *param_1 = uRam0000000113805a88;
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



/* Entry: 102f6c3ac; end: 102f6c3bf;  */

void FUN_102f6c3ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b098;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b098,&UNK_10db6a500);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6c3c0; end: 102f6c4d3;  */

void FUN_102f6c3c0(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
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



/* Entry: 102f6c4d4; end: 102f6c573;  */

uint FUN_102f6c4d4(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_102f6fc38(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f6c574; end: 102f6c627;  */

/* WARNING: Removing unreachable block (ram,0x000102f6c624) */

void FUN_102f6c574(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1105f04b0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f6c628; end: 102f6c683;  */

void FUN_102f6c628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102f6c684();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102f6c684; end: 102f6c70f;  */

void FUN_102f6c684(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x28);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,1,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f6c710; end: 102f6c74f;  */

void FUN_102f6c710(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf000000000000000;
  return;
}



/* Entry: 102f6c750; end: 102f6c77f;  */

undefined1  [16] FUN_102f6c750(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102f6c780; end: 102f6c7b3;  */

void FUN_102f6c780(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 102f6c7b4; end: 102f6c7c7;  */

undefined8 FUN_102f6c7b4(void)

{
  return 0x102f6c7c4;
}



/* Entry: 102f6c7c8; end: 102f6c7db;  */

void FUN_102f6c7c8(void)

{
  FUN_102f6c574();
  return;
}



/* Entry: 102f6c7dc; end: 102f6c813;  */

void FUN_102f6c7dc(void)

{
  FUN_102f6c628();
  return;
}



/* Entry: 102f6c814; end: 102f6c84b;  */

uint FUN_102f6c814(long param_1,long param_2)

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
  func_0x000102f76e7c();
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



/* Entry: 102f6c84c; end: 102f6c893;  */

uint FUN_102f6c84c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000102f709b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f6c894; end: 102f6c933;  */

/* WARNING: Possible PIC construction at 0x000102f6c8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6c8f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6c8e4) */
/* WARNING: Removing unreachable block (ram,0x000102f6c8f4) */

void FUN_102f6c894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2adb8 != -1) {
    func_0x000107c61568(0x112f2adb8,0x102f6c52c);
  }
  uVar5 = uRam0000000113805ae0;
  uVar4 = uRam0000000113805ad8;
  uVar3 = uRam0000000113805ad0;
  uVar2 = uRam0000000113805ac8;
  uVar1 = uRam0000000113805ac0;
  *param_1 = uRam0000000113805ab8;
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



/* Entry: 102f6c934; end: 102f6c947;  */

void FUN_102f6c934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b088;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b088,&UNK_10db6a4f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6c948; end: 102f6c97b;  */

void FUN_102f6c948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f6c97c; end: 102f6ca7f;  */

void FUN_102f6c97c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f6ca80; end: 102f6cb0b;  */

uint FUN_102f6ca80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x000102f709b4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f6cb0c; end: 102f6cbb7;  */

void FUN_102f6cb0c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_102f6cb48;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_102f6cb48:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_102f6cb48;
}



/* Entry: 102f6cbb8; end: 102f6cc8b;  */

void FUN_102f6cbb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 102f6cc8c; end: 102f6cccf;  */

void FUN_102f6cc8c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 102f6ccd0; end: 102f6ccff;  */

undefined1  [16] FUN_102f6ccd0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 102f6cd00; end: 102f6cd33;  */

void FUN_102f6cd00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 102f6cd34; end: 102f6cd47;  */

undefined1  [16] FUN_102f6cd34(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x102f6cd44;
  return auVar1;
}



/* Entry: 102f6cd48; end: 102f6cd6f;  */

void FUN_102f6cd48(void)

{
  FUN_102f6cb0c();
  return;
}



/* Entry: 102f6cd70; end: 102f6cda7;  */

uint FUN_102f6cd70(long param_1,long param_2)

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
  func_0x000102f76e3c();
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



/* Entry: 102f6cda8; end: 102f6cdef;  */

uint FUN_102f6cda8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_102f7019c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f6cdf0; end: 102f6ce8f;  */

/* WARNING: Possible PIC construction at 0x000102f6ce3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6ce4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6ce40) */
/* WARNING: Removing unreachable block (ram,0x000102f6ce50) */

void FUN_102f6cdf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2adc8 != -1) {
    func_0x000107c61568(0x112f2adc8,0x102f6cac4);
  }
  uVar5 = uRam0000000113805b10;
  uVar4 = uRam0000000113805b08;
  uVar3 = uRam0000000113805b00;
  uVar2 = uRam0000000113805af8;
  uVar1 = uRam0000000113805af0;
  *param_1 = uRam0000000113805ae8;
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



/* Entry: 102f6ce90; end: 102f6cea3;  */

void FUN_102f6ce90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b078;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b078,&UNK_10db6a4f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6cea4; end: 102f6ced7;  */

void FUN_102f6cea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f6ced8; end: 102f6cfdb;  */

void FUN_102f6ced8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f6cfdc; end: 102f6d06b;  */

uint FUN_102f6cfdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_102f7019c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f6d06c; end: 102f6d16f;  */

/* WARNING: Removing unreachable block (ram,0x000102f6d144) */

void FUN_102f6d06c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_102f6d0d4;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000102f64724();
          (*pcVar4)(unaff_x20 + 0x30,&UNK_1105f04b0,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x60);
        }
        else {
          if (lVar1 != 4) goto LAB_102f6d0e4;
          pcVar4 = *(code **)(param_3 + 0x60);
        }
LAB_102f6d0d4:
        (*pcVar4)();
      }
LAB_102f6d0e4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f6d170; end: 102f6d23f;  */

void FUN_102f6d170(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102f6d240(), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[2],3,param_2,param_3);
    }
    if (unaff_x20[3] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[3],4,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 102f6d240; end: 102f6d2cb;  */

void FUN_102f6d240(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x48);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,2,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f6d2cc; end: 102f6d327;  */

void FUN_102f6d2cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 102f6d328; end: 102f6d33b;  */

void FUN_102f6d328(void)

{
  FUN_102f6d06c();
  return;
}



/* Entry: 102f6d33c; end: 102f6d37b;  */

void FUN_102f6d33c(void)

{
  FUN_102f6d170();
  return;
}



/* Entry: 102f6d37c; end: 102f6d3b3;  */

uint FUN_102f6d37c(long param_1,long param_2)

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
  FUN_102f76dfc();
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



/* Entry: 102f6d3b4; end: 102f6d40b;  */

uint FUN_102f6d3b4(undefined8 *param_1)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000102f6feec(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f6d40c; end: 102f6d4ab;  */

/* WARNING: Possible PIC construction at 0x000102f6d458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6d468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f6d45c) */
/* WARNING: Removing unreachable block (ram,0x000102f6d46c) */

void FUN_102f6d40c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2add8 != -1) {
    func_0x000107c61568(0x112f2add8,0x102f6d024);
  }
  uVar5 = uRam0000000113805b40;
  uVar4 = uRam0000000113805b38;
  uVar3 = uRam0000000113805b30;
  uVar2 = uRam0000000113805b28;
  uVar1 = uRam0000000113805b20;
  *param_1 = uRam0000000113805b18;
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



/* Entry: 102f6d4ac; end: 102f6d4bf;  */

void FUN_102f6d4ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b068;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b068,&UNK_10db6a4e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f6d4c0; end: 102f6d4f3;  */

void FUN_102f6d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f6d4f4; end: 102f6d607;  */

void FUN_102f6d4f4(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
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



/* Entry: 102f6d608; end: 102f6d65f;  */

uint FUN_102f6d608(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000102f6feec(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f6d660; end: 102f6d973;  */

uint FUN_102f6d660(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_130 [64];
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 != 0) && (param_1 != param_2)) {
      plVar4 = (long *)(param_1 + 0x20);
      plVar5 = (long *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        lVar8 = plVar4[5];
        lVar6 = plVar4[4];
        uVar12 = plVar4[7];
        uVar10 = plVar4[6];
        lStack_e8 = plVar4[1];
        lStack_f0 = *plVar4;
        lStack_d8 = plVar4[3];
        uStack_e0 = plVar4[2];
        lVar9 = plVar5[5];
        lVar7 = plVar5[4];
        uVar13 = plVar5[7];
        lVar11 = plVar5[6];
        lStack_a8 = plVar5[1];
        lStack_b0 = *plVar5;
        lStack_98 = plVar5[3];
        lStack_a0 = plVar5[2];
        lStack_d0 = lVar6;
        lStack_c8 = lVar8;
        uStack_c0 = uVar10;
        uStack_b8 = uVar12;
        lStack_90 = lVar7;
        lStack_88 = lVar9;
        lStack_80 = lVar11;
        uStack_78 = uVar13;
        if (uVar12 >> 0x3c < 0xf) {
          if (0xe < uVar13 >> 0x3c) goto LAB_102f6d84c;
          if (lVar6 == lVar7) {
            if (lVar8 != lVar9) {
              func_0x000102f7743c(&lStack_f0,auStack_130);
              func_0x000102f7743c(&lStack_b0,auStack_130);
              lVar7 = lVar6;
              goto LAB_102f6d8e8;
            }
            func_0x000102f7743c(&lStack_f0,auStack_130);
            func_0x000102f7743c(&lStack_b0,auStack_130);
            func_0x000100d2dc74(lVar6,lVar8,uVar10,uVar12);
            func_0x000100d2dc74(lVar6,lVar8,lVar11,uVar13);
            uVar1 = uVar10;
            func_0x000100e25fcc(uVar10,uVar12,lVar11,uVar13);
            func_0x000100d2dc90(lVar6,lVar8,lVar11,uVar13);
            if ((uVar1 & 1) != 0) goto LAB_102f6d7d4;
          }
          else {
            func_0x000102f7743c(&lStack_f0,auStack_130);
            func_0x000102f7743c(&lStack_b0,auStack_130);
LAB_102f6d8e8:
            func_0x000100d2dc74(lVar6,lVar8,uVar10,uVar12);
            func_0x000100d2dc74(lVar7,lVar9,lVar11,uVar13);
            func_0x000100d2dc90(lVar7,lVar9,lVar11,uVar13);
          }
          func_0x000100d2dc90(lVar6,lVar8,uVar10,uVar12);
LAB_102f6d93c:
          func_0x000102f77470(&lStack_b0);
          func_0x000102f77470(&lStack_f0);
          goto LAB_102f6d94c;
        }
        if (uVar13 >> 0x3c < 0xf) {
LAB_102f6d84c:
          func_0x000100d2dc74(lVar6,lVar8,uVar10,uVar12);
          func_0x000100d2dc74(lVar7,lVar9,lVar11,uVar13);
          func_0x000100d2dc90(lVar6,lVar8,uVar10,uVar12);
          func_0x000100d2dc90(lVar7,lVar9,lVar11,uVar13);
          goto LAB_102f6d94c;
        }
        func_0x000102f7743c(&lStack_f0,auStack_130);
        func_0x000102f7743c(&lStack_b0,auStack_130);
        func_0x000100d2dc74(lVar6,lVar8,uVar10,uVar12);
        func_0x000100d2dc74(lVar7,lVar9,lVar11,uVar13);
LAB_102f6d7d4:
        func_0x000100d2dc90(lVar6,lVar8,uVar10,uVar12);
        if ((lStack_f0 != lStack_b0) || (lStack_e8 != lStack_a8)) goto LAB_102f6d93c;
        uVar10 = uStack_e0;
        func_0x000100e25fcc(uStack_e0,lStack_d8,lStack_a0,lStack_98);
        uVar3 = (uint)uVar10;
        func_0x000102f77470(&lStack_b0);
        func_0x000102f77470(&lStack_f0);
        if (((uVar10 & 1) == 0) || (lVar2 == 0)) goto LAB_102f6d950;
        plVar4 = plVar4 + 8;
        plVar5 = plVar5 + 8;
      } while( true );
    }
    uVar3 = 1;
  }
  else {
LAB_102f6d94c:
    uVar3 = 0;
  }
LAB_102f6d950:
  return uVar3 & 1;
}



/* Entry: 102f6d974; end: 102f6d997;  */

void FUN_102f6d974(void)

{
  return;
}



/* Entry: 102f6d998; end: 102f6d9c3;  */

undefined8 FUN_102f6d998(undefined8 param_1)

{
  FUN_102f73414(param_1,&UNK_1105ef560);
  return param_1;
}



/* Entry: 102f6d9c4; end: 102f6d9e3;  */

void FUN_102f6d9c4(undefined8 *param_1)

{
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102f6d9e4; end: 102f6e2c3;  */

uint FUN_102f6d9e4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_140 [48];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  uVar13 = param_1[0x11];
  uVar11 = param_1[0x10];
  uVar8 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  uStack_b0 = uVar5;
  uStack_a8 = uVar8;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  uStack_88 = uVar4;
  uStack_80 = uVar11;
  uStack_78 = uVar13;
  if (uVar13 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_102f6dc24;
    if (uVar3 == uVar5) {
      if (uVar4 == uVar8) {
        func_0x000102f7749c(&uStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
        uVar5 = uVar11;
        func_0x000100e25fcc(uVar11,uVar13,uVar6,uVar7);
        func_0x000100d2dc90(uVar3,uVar4,uVar6,uVar7);
        if ((uVar5 & 1) != 0) goto LAB_102f6da7c;
        goto LAB_102f6de10;
      }
      func_0x000102f7749c(&uStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      uVar5 = uVar3;
    }
    else {
      func_0x000102f7749c(&uStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    }
    func_0x000100d2dc90(uVar5,uVar8,uVar6,uVar7);
LAB_102f6de10:
    func_0x000100d2dc90(uVar3,uVar4,uVar11,uVar13);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_102f6dc24:
      func_0x000102f7749c(&uStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
      func_0x000100d2dc90(uVar3,uVar4,uVar11,uVar13);
      uVar3 = uVar5;
      uVar4 = uVar8;
      uVar11 = uVar6;
      uVar13 = uVar7;
      goto LAB_102f6de10;
    }
    func_0x000102f7749c(&uStack_90,&uStack_e0,0x112f2a448,&UNK_10db664f0);
    func_0x000102f7749c(&uStack_b0,&uStack_e0,0x112f2a448,&UNK_10db664f0);
LAB_102f6da7c:
    func_0x000100d2dc90(uVar3,uVar4,uVar11,uVar13);
    uVar3 = *param_1;
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (func_0x000107c605b8(), (uVar3 & 1) == 0)) goto LAB_102f6de14;
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    uVar13 = param_1[0x15];
    uVar11 = param_1[0x14];
    uVar8 = param_1[0x17];
    uVar5 = param_1[0x16];
    uVar9 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar14 = param_2[0x15];
    uVar12 = param_2[0x14];
    uVar10 = param_2[0x17];
    uVar7 = param_2[0x16];
    uStack_110 = uVar6;
    uStack_108 = uVar9;
    uStack_100 = uVar12;
    uStack_f8 = uVar14;
    uStack_f0 = uVar7;
    uStack_e8 = uVar10;
    uStack_e0 = uVar3;
    uStack_d8 = uVar4;
    uStack_d0 = uVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    uStack_b8 = uVar8;
    if (uVar4 == 0) {
      if (uVar9 != 0) goto LAB_102f6dd40;
      func_0x000102f7749c(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
      func_0x000102f7749c(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
LAB_102f6de80:
      FUN_102f5ce58(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
      uVar3 = (ulong)(param_1[2] != 0);
      if ((char)param_1[3] != '\x01') {
        uVar3 = param_1[2];
      }
      if ((char)param_2[3] == '\x01') {
        if (param_2[2] == 0) {
          if (uVar3 == 0) goto LAB_102f6df94;
        }
        else if (uVar3 == 1) {
LAB_102f6df94:
          uVar3 = param_1[4];
          if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
            uVar3 = param_1[6];
            uVar4 = param_2[6];
            if ((char)param_2[7] == '\x01') {
              if (uVar4 == 0) {
                if (uVar3 == 0) goto LAB_102f6e000;
              }
              else if (uVar4 == 1) {
                if (uVar3 == 1) {
LAB_102f6e000:
                  if (((param_1[8] == param_2[8]) && (param_1[9] == param_2[9])) &&
                     ((param_1[10] == param_2[10] && (param_1[0xb] == param_2[0xb])))) {
                    uVar3 = param_1[0xc];
                    func_0x000100e25fcc(uVar3,param_1[0xd],param_2[0xc],param_2[0xd]);
                    uVar1 = (uint)uVar3;
                    goto LAB_102f6de18;
                  }
                }
              }
              else if (uVar3 == 2) goto LAB_102f6e000;
            }
            else if (uVar3 == uVar4) goto LAB_102f6e000;
          }
        }
      }
      else if (uVar3 == param_2[2]) goto LAB_102f6df94;
    }
    else {
      if (uVar9 == 0) {
LAB_102f6dd40:
        func_0x000102f7749c(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
        func_0x000102f7749c(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
        FUN_102f5ce58(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
        uVar3 = uVar6;
        uVar4 = uVar9;
        uVar11 = uVar12;
        uVar13 = uVar14;
        uVar5 = uVar7;
        uVar8 = uVar10;
      }
      else {
        if (((uVar3 == uVar6) && (uVar4 == uVar9)) ||
           (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar4,uVar6,uVar9,0), (uVar2 & 1) != 0)) {
          if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
             (uVar2 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar2 & 1) != 0))
          {
            func_0x000102f7749c(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
            func_0x000102f7749c(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
            uVar2 = uVar5;
            func_0x000100e25fcc(uVar5,uVar8,uVar7,uVar10);
            FUN_102f5ce58(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
            if ((uVar2 & 1) != 0) goto LAB_102f6de80;
            goto LAB_102f6df88;
          }
          func_0x000102f7749c(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
          func_0x000102f7749c(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
        }
        else {
          func_0x000102f7749c(&uStack_e0,auStack_140,0x112f2a450,&UNK_10db664f8);
          func_0x000102f7749c(&uStack_110,auStack_140,0x112f2a450,&UNK_10db664f8);
        }
        FUN_102f5ce58(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
      }
LAB_102f6df88:
      FUN_102f5ce58(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
    }
  }
LAB_102f6de14:
  uVar1 = 0;
LAB_102f6de18:
  return uVar1 & 1;
}



/* Entry: 102f6e2c4; end: 102f6e3c3;  */

void FUN_102f6e2c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ac48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db68c28;
  func_0x000107c61520(&UNK_10db68c28,&UNK_1105ef450);
  puRam0000000112f2ac48 = puVar1;
  return;
}



/* Entry: 102f6e3c4; end: 102f6e657;  */

uint FUN_102f6e3c4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = param_1[5];
  lVar3 = param_1[4];
  uVar9 = param_1[7];
  uVar7 = param_1[6];
  lVar6 = param_2[5];
  lVar4 = param_2[4];
  uVar10 = param_2[7];
  uVar8 = param_2[6];
  lStack_a0 = lVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  lStack_80 = lVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar9 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_102f6e4ac;
    if (lVar3 == lVar4) {
      if (lVar5 == lVar6) {
        func_0x000102f7749c(&lStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&lStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
        func_0x000100d2dc90(lVar3,lVar5,uVar8,uVar10);
        if ((uVar2 & 1) != 0) goto LAB_102f6e45c;
        goto LAB_102f6e62c;
      }
      func_0x000102f7749c(&lStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&lStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      lVar4 = lVar3;
    }
    else {
      func_0x000102f7749c(&lStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&lStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
    }
    func_0x000100d2dc90(lVar4,lVar6,uVar8,uVar10);
LAB_102f6e62c:
    func_0x000100d2dc90(lVar3,lVar5,uVar7,uVar9);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_102f6e4ac:
      func_0x000102f7749c(&lStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&lStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000100d2dc90(lVar3,lVar5,uVar7,uVar9);
      lVar3 = lVar4;
      lVar5 = lVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
      goto LAB_102f6e62c;
    }
    func_0x000102f7749c(&lStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
    func_0x000102f7749c(&lStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f6e45c:
    func_0x000100d2dc90(lVar3,lVar5,uVar7,uVar9);
    if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
      lVar3 = param_1[2];
      func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar3;
      goto LAB_102f6e634;
    }
  }
  uVar1 = 0;
LAB_102f6e634:
  return uVar1 & 1;
}



/* Entry: 102f6e658; end: 102f6e697;  */

void FUN_102f6e658(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ac78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db68dd8;
  func_0x000107c61520(&UNK_10db68dd8,&UNK_1105ef608);
  puRam0000000112f2ac78 = puVar1;
  return;
}



/* Entry: 102f6e698; end: 102f6e713;  */

/* WARNING: Possible PIC construction at 0x000102f6e6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f6e6cc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f6e698(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 102f6e714; end: 102f6e753;  */

void FUN_102f6e714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ac88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db68eb0;
  func_0x000107c61520(&UNK_10db68eb0,&UNK_1105ef690);
  puRam0000000112f2ac88 = puVar1;
  return;
}



/* Entry: 102f6e754; end: 102f6e9fb;  */

uint FUN_102f6e754(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[6];
    uVar2 = param_1[5];
    uVar8 = param_1[8];
    uVar6 = param_1[7];
    uVar5 = param_2[6];
    uVar3 = param_2[5];
    uVar9 = param_2[8];
    uVar7 = param_2[7];
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar7;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_102f6e858;
      if (uVar2 == uVar3) {
        if (uVar4 == uVar5) {
          func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
          func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
          uVar3 = uVar6;
          func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
          func_0x000100d2dc90(uVar2,uVar4,uVar7,uVar9);
          if ((uVar3 & 1) != 0) goto LAB_102f6e818;
          goto LAB_102f6e9d0;
        }
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
        uVar3 = uVar2;
      }
      else {
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      }
      func_0x000100d2dc90(uVar3,uVar5,uVar7,uVar9);
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f6e818:
        func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
        if (param_1[2] == param_2[2]) {
          uVar2 = param_1[3];
          func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
          uVar1 = (uint)uVar2;
          goto LAB_102f6e9d8;
        }
        goto LAB_102f6e9d4;
      }
LAB_102f6e858:
      func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
      uVar2 = uVar3;
      uVar4 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    }
LAB_102f6e9d0:
    func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
  }
LAB_102f6e9d4:
  uVar1 = 0;
LAB_102f6e9d8:
  return uVar1 & 1;
}



/* Entry: 102f6e9fc; end: 102f6eabb;  */

void FUN_102f6e9fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ac98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db68f88;
  func_0x000107c61520(&UNK_10db68f88,&UNK_1105ef718);
  puRam0000000112f2ac98 = puVar1;
  return;
}



/* Entry: 102f6eabc; end: 102f6ef3b;  */

uint FUN_102f6eabc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_150 [4];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar4 = auStack_150;
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    uVar5 = param_1[9];
    uVar9 = param_1[8];
    uVar8 = param_2[7];
    uVar2 = param_2[6];
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uStack_b0 = uVar2;
    uStack_a8 = uVar8;
    uStack_a0 = uVar10;
    uStack_98 = uVar11;
    uStack_90 = uVar6;
    uStack_88 = uVar7;
    uStack_80 = uVar9;
    uStack_78 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar11 >> 0x3c) goto LAB_102f6ec48;
      if (uVar6 == uVar2) {
        if (uVar7 != uVar8) {
          func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_b0;
LAB_102f6eeb8:
          func_0x000102f7749c(puVar4,&uStack_130,0x112f2a448,&UNK_10db664f0);
          uVar2 = uVar6;
          goto LAB_102f6eecc;
        }
        func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_b0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar11);
        func_0x000100d2dc90(uVar6,uVar7,uVar10,uVar11);
        if ((uVar2 & 1) != 0) goto LAB_102f6eb78;
      }
      else {
        func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
        puVar4 = &uStack_b0;
LAB_102f6ee7c:
        func_0x000102f7749c(puVar4,&uStack_130,0x112f2a448,&UNK_10db664f0);
LAB_102f6eecc:
        func_0x000100d2dc90(uVar2,uVar8,uVar10,uVar11);
      }
LAB_102f6eee0:
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
    }
    else if (uVar11 >> 0x3c < 0xf) {
LAB_102f6ec48:
      uStack_130 = uVar6;
      uStack_128 = uVar7;
      uStack_120 = uVar9;
      uStack_118 = uVar5;
      uStack_110 = uVar2;
      uStack_108 = uVar8;
      uStack_100 = uVar10;
      uStack_f8 = uVar11;
      func_0x000102f7749c(&uStack_90,&uStack_d0,0x112f2a448,&UNK_10db664f0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_102f6ed4c:
      func_0x000102f7749c(puVar3,puVar4,0x112f2a448,&UNK_10db664f0);
      func_0x000102f773fc(&uStack_130,0x112f2b1e8,&UNK_10db6a668);
    }
    else {
      func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_b0,&uStack_130,0x112f2a448,&UNK_10db664f0);
LAB_102f6eb78:
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
      uVar7 = param_1[0xb];
      uVar6 = param_1[10];
      uVar5 = param_1[0xd];
      uVar9 = param_1[0xc];
      uVar8 = param_2[0xb];
      uVar2 = param_2[10];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xc];
      uStack_f0 = uVar2;
      uStack_e8 = uVar8;
      uStack_e0 = uVar10;
      uStack_d8 = uVar11;
      uStack_d0 = uVar6;
      uStack_c8 = uVar7;
      uStack_c0 = uVar9;
      uStack_b8 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar11 >> 0x3c) goto LAB_102f6ed10;
        if (uVar6 != uVar2) {
          func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_f0;
          goto LAB_102f6ee7c;
        }
        if (uVar7 != uVar8) {
          func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_f0;
          goto LAB_102f6eeb8;
        }
        func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_f0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar11);
        func_0x000100d2dc90(uVar6,uVar7,uVar10,uVar11);
        if ((uVar2 & 1) == 0) goto LAB_102f6eee0;
      }
      else {
        if (uVar11 >> 0x3c < 0xf) {
LAB_102f6ed10:
          uStack_130 = uVar6;
          uStack_128 = uVar7;
          uStack_120 = uVar9;
          uStack_118 = uVar5;
          uStack_110 = uVar2;
          uStack_108 = uVar8;
          uStack_100 = uVar10;
          uStack_f8 = uVar11;
          func_0x000102f7749c(&uStack_d0,auStack_150,0x112f2a448,&UNK_10db664f0);
          puVar3 = &uStack_f0;
          goto LAB_102f6ed4c;
        }
        func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_f0,&uStack_130,0x112f2a448,&UNK_10db664f0);
      }
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
      uVar2 = param_1[2];
      uVar5 = param_2[2];
      if ((char)param_2[3] == '\x01') {
        if (uVar5 == 0) {
          if (uVar2 == 0) goto LAB_102f6ef2c;
        }
        else if (uVar5 == 1) {
          if (uVar2 == 1) {
LAB_102f6ef2c:
            uVar2 = param_1[4];
            func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
            uVar1 = (uint)uVar2;
            goto LAB_102f6eef8;
          }
        }
        else if (uVar2 == 2) goto LAB_102f6ef2c;
      }
      else if (uVar2 == uVar5) goto LAB_102f6ef2c;
    }
  }
  uVar1 = 0;
LAB_102f6eef8:
  return uVar1 & 1;
}



/* Entry: 102f6ef3c; end: 102f6ef7b;  */

void FUN_102f6ef3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2acc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db69138;
  func_0x000107c61520(&UNK_10db69138,&UNK_1105ef820);
  puRam0000000112f2acc0 = puVar1;
  return;
}



/* Entry: 102f6ef7c; end: 102f6f34b;  */

uint FUN_102f6ef7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_7c0 [192];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uVar4;
  
  uStack_378 = param_1[0x13];
  uStack_380 = param_1[0x12];
  uStack_128 = param_1[0x15];
  uStack_130 = param_1[0x14];
  uStack_388 = param_1[0x11];
  uStack_390 = param_1[0x10];
  uStack_138 = param_1[0x13];
  uStack_140 = param_1[0x12];
  uStack_368 = param_1[0x15];
  uStack_370 = param_1[0x14];
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  uStack_358 = param_1[0x17];
  uStack_360 = param_1[0x16];
  uStack_108 = param_1[0x19];
  uStack_110 = param_1[0x18];
  uStack_3b8 = param_1[0xb];
  uStack_3c0 = param_1[10];
  uStack_168 = param_1[0xd];
  uStack_170 = param_1[0xc];
  uStack_3c8 = param_1[9];
  uStack_3d0 = param_1[8];
  uStack_178 = param_1[0xb];
  uStack_180 = param_1[10];
  uStack_3a8 = param_1[0xd];
  uStack_3b0 = param_1[0xc];
  uStack_158 = param_1[0xf];
  uStack_160 = param_1[0xe];
  uStack_398 = param_1[0xf];
  uStack_3a0 = param_1[0xe];
  uStack_148 = param_1[0x11];
  uStack_150 = param_1[0x10];
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_3f8 = param_1[3];
  uStack_400 = param_1[2];
  uStack_3e8 = param_1[5];
  uStack_3f0 = param_1[4];
  uStack_3d8 = param_1[7];
  uStack_3e0 = param_1[6];
  uStack_2b8 = param_2[0x13];
  uStack_2c0 = param_2[0x12];
  uStack_1e8 = param_2[0x15];
  uStack_1f0 = param_2[0x14];
  uStack_2c8 = param_2[0x11];
  uStack_2d0 = param_2[0x10];
  uStack_1f8 = param_2[0x13];
  uStack_200 = param_2[0x12];
  uStack_2a8 = param_2[0x15];
  uStack_2b0 = param_2[0x14];
  uStack_1d8 = param_2[0x17];
  uStack_1e0 = param_2[0x16];
  uStack_298 = param_2[0x17];
  uStack_2a0 = param_2[0x16];
  uStack_1c8 = param_2[0x19];
  uStack_1d0 = param_2[0x18];
  uStack_2f8 = param_2[0xb];
  uStack_300 = param_2[10];
  uStack_228 = param_2[0xd];
  uStack_230 = param_2[0xc];
  uStack_308 = param_2[9];
  uStack_310 = param_2[8];
  uStack_238 = param_2[0xb];
  uStack_240 = param_2[10];
  uStack_2e8 = param_2[0xd];
  uStack_2f0 = param_2[0xc];
  uStack_218 = param_2[0xf];
  uStack_220 = param_2[0xe];
  uStack_2d8 = param_2[0xf];
  uStack_2e0 = param_2[0xe];
  uStack_208 = param_2[0x11];
  uStack_210 = param_2[0x10];
  uStack_278 = param_2[3];
  uStack_280 = param_2[2];
  uStack_268 = param_2[5];
  uStack_270 = param_2[4];
  uStack_258 = param_2[7];
  uStack_260 = param_2[6];
  uStack_248 = param_2[9];
  uStack_250 = param_2[8];
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_320 = param_2[6];
  uStack_318 = param_2[7];
  uStack_348 = param_1[0x19];
  uStack_350 = param_1[0x18];
  uStack_288 = param_2[0x19];
  uStack_290 = param_2[0x18];
  iVar1 = (int)&uStack_400;
  func_0x000102f6d980();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_340;
    func_0x000102f6d980();
    if (iVar1 == 1) {
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_538 = uStack_3b8;
      uStack_540 = uStack_3c0;
      uStack_528 = uStack_3a8;
      uStack_530 = uStack_3b0;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_578 = uStack_3f8;
      uStack_580 = uStack_400;
      uStack_568 = uStack_3e8;
      uStack_570 = uStack_3f0;
      uStack_558 = uStack_3d8;
      uStack_560 = uStack_3e0;
      uStack_548 = uStack_3c8;
      uStack_550 = uStack_3d0;
      func_0x000102f7749c(&uStack_1c0,&uStack_100,0x112f2ac20,&UNK_10db68960);
      func_0x000102f7749c(&uStack_280,&uStack_100,0x112f2ac20,&UNK_10db68960);
      func_0x000102f773fc(&uStack_580,0x112f2ac20,&UNK_10db68960);
LAB_102f6f324:
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_102f6f330;
    }
LAB_102f6f1bc:
    func_0x000107c610b4(&uStack_580,&uStack_400,0x180);
    func_0x000102f7749c(&uStack_1c0,&uStack_100,0x112f2ac20,&UNK_10db68960);
    func_0x000102f7749c(&uStack_280,&uStack_100,0x112f2ac20,&UNK_10db68960);
    func_0x000102f773fc(&uStack_580,0x112f2ac28,&UNK_10db68968);
  }
  else {
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_588 = uStack_348;
    uStack_590 = uStack_350;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_638 = uStack_3f8;
    uStack_640 = uStack_400;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    iVar1 = (int)&uStack_340;
    func_0x000102f6d980();
    if (iVar1 == 1) goto LAB_102f6f1bc;
    uStack_678 = uStack_2b8;
    uStack_680 = uStack_2c0;
    uStack_668 = uStack_2a8;
    uStack_670 = uStack_2b0;
    uStack_658 = uStack_298;
    uStack_660 = uStack_2a0;
    uStack_648 = uStack_288;
    uStack_650 = uStack_290;
    uStack_6b8 = uStack_2f8;
    uStack_6c0 = uStack_300;
    uStack_6a8 = uStack_2e8;
    uStack_6b0 = uStack_2f0;
    uStack_698 = uStack_2d8;
    uStack_6a0 = uStack_2e0;
    uStack_688 = uStack_2c8;
    uStack_690 = uStack_2d0;
    uStack_6f8 = uStack_338;
    uStack_700 = uStack_340;
    uStack_6e8 = uStack_328;
    uStack_6f0 = uStack_330;
    uStack_6d8 = uStack_318;
    uStack_6e0 = uStack_320;
    uStack_6c8 = uStack_308;
    uStack_6d0 = uStack_310;
    uStack_4f8 = uStack_2b8;
    uStack_500 = uStack_2c0;
    uStack_4e8 = uStack_2a8;
    uStack_4f0 = uStack_2b0;
    uStack_4d8 = uStack_298;
    uStack_4e0 = uStack_2a0;
    uStack_4c8 = uStack_288;
    uStack_4d0 = uStack_290;
    uStack_538 = uStack_2f8;
    uStack_540 = uStack_300;
    uStack_528 = uStack_2e8;
    uStack_530 = uStack_2f0;
    uStack_518 = uStack_2d8;
    uStack_520 = uStack_2e0;
    uStack_508 = uStack_2c8;
    uStack_510 = uStack_2d0;
    uStack_578 = uStack_338;
    uStack_580 = uStack_340;
    uStack_568 = uStack_328;
    uStack_570 = uStack_330;
    uStack_558 = uStack_318;
    uStack_560 = uStack_320;
    uStack_548 = uStack_308;
    uStack_550 = uStack_310;
    uStack_78 = uStack_5b8;
    uStack_80 = uStack_5c0;
    uStack_68 = uStack_5a8;
    uStack_70 = uStack_5b0;
    uStack_58 = uStack_598;
    uStack_60 = uStack_5a0;
    uStack_48 = uStack_588;
    uStack_50 = uStack_590;
    uStack_b8 = uStack_5f8;
    uStack_c0 = uStack_600;
    uStack_a8 = uStack_5e8;
    uStack_b0 = uStack_5f0;
    uStack_98 = uStack_5d8;
    uStack_a0 = uStack_5e0;
    uStack_88 = uStack_5c8;
    uStack_90 = uStack_5d0;
    uStack_f8 = uStack_638;
    uStack_100 = uStack_640;
    uStack_e8 = uStack_628;
    uStack_f0 = uStack_630;
    uStack_d8 = uStack_618;
    uStack_e0 = uStack_620;
    uStack_c8 = uStack_608;
    uStack_d0 = uStack_610;
    func_0x000102f7749c(&uStack_1c0,auStack_7c0,0x112f2ac20,&UNK_10db68960);
    func_0x000102f7749c(&uStack_280,auStack_7c0,0x112f2ac20,&UNK_10db68960);
    puVar3 = &uStack_100;
    FUN_102f6d9e4(puVar3,&uStack_580);
    func_0x000102f773fc(&uStack_700,0x112f2ac20,&UNK_10db68960);
    func_0x000102f773fc(&uStack_400,0x112f2ac20,&UNK_10db68960);
    if (((ulong)puVar3 & 1) != 0) goto LAB_102f6f324;
  }
  uVar2 = 0;
LAB_102f6f330:
  return uVar2 & 1;
}



/* Entry: 102f6f34c; end: 102f6f3cb;  */

void FUN_102f6f34c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2acd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db69210;
  func_0x000107c61520(&UNK_10db69210,&UNK_1105ef8b0);
  puRam0000000112f2acd0 = puVar1;
  return;
}



/* Entry: 102f6f3cc; end: 102f6f85f;  */

uint FUN_102f6f3cc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_150 [4];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar4 = auStack_150;
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    uVar5 = param_1[9];
    uVar9 = param_1[8];
    uVar8 = param_2[7];
    uVar2 = param_2[6];
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uStack_b0 = uVar2;
    uStack_a8 = uVar8;
    uStack_a0 = uVar10;
    uStack_98 = uVar11;
    uStack_90 = uVar6;
    uStack_88 = uVar7;
    uStack_80 = uVar9;
    uStack_78 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar11 >> 0x3c) goto LAB_102f6f554;
      if (uVar6 == uVar2) {
        if (uVar7 != uVar8) {
          func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_b0;
LAB_102f6f7e4:
          func_0x000102f7749c(puVar4,&uStack_130,0x112f2a448,&UNK_10db664f0);
          uVar2 = uVar6;
          goto LAB_102f6f7f8;
        }
        func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_b0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar11);
        func_0x000100d2dc90(uVar6,uVar7,uVar10,uVar11);
        if ((uVar2 & 1) != 0) goto LAB_102f6f488;
      }
      else {
        func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
        puVar4 = &uStack_b0;
LAB_102f6f794:
        func_0x000102f7749c(puVar4,&uStack_130,0x112f2a448,&UNK_10db664f0);
LAB_102f6f7f8:
        func_0x000100d2dc90(uVar2,uVar8,uVar10,uVar11);
      }
LAB_102f6f80c:
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
    }
    else if (uVar11 >> 0x3c < 0xf) {
LAB_102f6f554:
      uStack_130 = uVar6;
      uStack_128 = uVar7;
      uStack_120 = uVar9;
      uStack_118 = uVar5;
      uStack_110 = uVar2;
      uStack_108 = uVar8;
      uStack_100 = uVar10;
      uStack_f8 = uVar11;
      func_0x000102f7749c(&uStack_90,&uStack_d0,0x112f2a448,&UNK_10db664f0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_102f6f658:
      func_0x000102f7749c(puVar3,puVar4,0x112f2a448,&UNK_10db664f0);
      func_0x000102f773fc(&uStack_130,0x112f2b1e8,&UNK_10db6a668);
    }
    else {
      func_0x000102f7749c(&uStack_90,&uStack_130,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_b0,&uStack_130,0x112f2a448,&UNK_10db664f0);
LAB_102f6f488:
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
      uVar7 = param_1[0xb];
      uVar6 = param_1[10];
      uVar5 = param_1[0xd];
      uVar9 = param_1[0xc];
      uVar8 = param_2[0xb];
      uVar2 = param_2[10];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xc];
      uStack_f0 = uVar2;
      uStack_e8 = uVar8;
      uStack_e0 = uVar10;
      uStack_d8 = uVar11;
      uStack_d0 = uVar6;
      uStack_c8 = uVar7;
      uStack_c0 = uVar9;
      uStack_b8 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar11 >> 0x3c) goto LAB_102f6f61c;
        if (uVar6 != uVar2) {
          func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_f0;
          goto LAB_102f6f794;
        }
        if (uVar7 != uVar8) {
          func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
          puVar4 = &uStack_f0;
          goto LAB_102f6f7e4;
        }
        func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_f0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        uVar2 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar11);
        func_0x000100d2dc90(uVar6,uVar7,uVar10,uVar11);
        if ((uVar2 & 1) == 0) goto LAB_102f6f80c;
      }
      else {
        if (uVar11 >> 0x3c < 0xf) {
LAB_102f6f61c:
          uStack_130 = uVar6;
          uStack_128 = uVar7;
          uStack_120 = uVar9;
          uStack_118 = uVar5;
          uStack_110 = uVar2;
          uStack_108 = uVar8;
          uStack_100 = uVar10;
          uStack_f8 = uVar11;
          func_0x000102f7749c(&uStack_d0,auStack_150,0x112f2a448,&UNK_10db664f0);
          puVar3 = &uStack_f0;
          goto LAB_102f6f658;
        }
        func_0x000102f7749c(&uStack_d0,&uStack_130,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_f0,&uStack_130,0x112f2a448,&UNK_10db664f0);
      }
      func_0x000100d2dc90(uVar6,uVar7,uVar9,uVar5);
      uVar2 = param_1[2];
      uVar5 = param_2[2];
      if ((char)param_2[3] == '\x01') {
        if ((long)uVar5 < 2) {
          if (uVar5 == 0) {
            if (uVar2 == 0) {
LAB_102f6f75c:
              uVar2 = param_1[4];
              func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
              uVar1 = (uint)uVar2;
              goto LAB_102f6f824;
            }
          }
          else if (uVar2 == 1) goto LAB_102f6f75c;
        }
        else if (uVar5 == 2) {
          if (uVar2 == 2) goto LAB_102f6f75c;
        }
        else if (uVar2 == 3) goto LAB_102f6f75c;
      }
      else if (uVar2 == uVar5) goto LAB_102f6f75c;
    }
  }
  uVar1 = 0;
LAB_102f6f824:
  return uVar1 & 1;
}



/* Entry: 102f6f860; end: 102f6f8df;  */

void FUN_102f6f860(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ace8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db692e8;
  func_0x000107c61520(&UNK_10db692e8,&UNK_1105ef930);
  puRam0000000112f2ace8 = puVar1;
  return;
}



/* Entry: 102f6f8e0; end: 102f6fb77;  */

uint FUN_102f6f8e0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar4 = param_1[5];
  uVar2 = param_1[4];
  uVar8 = param_1[7];
  uVar6 = param_1[6];
  uVar5 = param_2[5];
  uVar3 = param_2[4];
  uVar9 = param_2[7];
  uVar7 = param_2[6];
  uStack_a0 = uVar3;
  uStack_98 = uVar5;
  uStack_90 = uVar7;
  uStack_88 = uVar9;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  uStack_70 = uVar6;
  uStack_68 = uVar8;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_102f6f9d4;
    if (uVar2 == uVar3) {
      if (uVar4 != uVar5) {
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
        uVar3 = uVar2;
        goto LAB_102f6fb28;
      }
      func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      uVar3 = uVar6;
      func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
      func_0x000100d2dc90(uVar2,uVar4,uVar7,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_102f6f978;
    }
    else {
      func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f6fb28:
      func_0x000100d2dc90(uVar3,uVar5,uVar7,uVar9);
    }
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f6f978:
      func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
      uVar2 = *param_1;
      if ((uVar2 != *param_2) || (param_1[1] != param_2[1])) {
        func_0x000107c605b8();
        uVar1 = 0;
        if ((uVar2 & 1) == 0) goto LAB_102f6fb54;
      }
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_102f6fb54;
    }
LAB_102f6f9d4:
    func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
    func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
    func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
    uVar2 = uVar3;
    uVar4 = uVar5;
    uVar6 = uVar7;
    uVar8 = uVar9;
  }
  func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
  uVar1 = 0;
LAB_102f6fb54:
  return uVar1 & 1;
}



/* Entry: 102f6fb78; end: 102f6fc37;  */

void FUN_102f6fb78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ad08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db69498;
  func_0x000107c61520(&UNK_10db69498,&UNK_1105efa40);
  puRam0000000112f2ad08 = puVar1;
  return;
}



/* Entry: 102f6fc38; end: 102f7019b;  */

uint FUN_102f6fc38(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[7];
    uVar2 = param_1[6];
    uVar8 = param_1[9];
    uVar6 = param_1[8];
    uVar5 = param_2[7];
    uVar3 = param_2[6];
    uVar9 = param_2[9];
    uVar7 = param_2[8];
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar7;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_102f6fd48;
      if (uVar2 == uVar3) {
        if (uVar4 == uVar5) {
          func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
          func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
          uVar3 = uVar6;
          func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
          func_0x000100d2dc90(uVar2,uVar4,uVar7,uVar9);
          if ((uVar3 & 1) != 0) goto LAB_102f6fcf4;
          goto LAB_102f6fec0;
        }
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
        uVar3 = uVar2;
      }
      else {
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      }
      func_0x000100d2dc90(uVar3,uVar5,uVar7,uVar9);
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
        func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
LAB_102f6fcf4:
        func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
        uVar2 = param_1[2];
        if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[4];
          func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
          uVar1 = (uint)uVar2;
          goto LAB_102f6fec8;
        }
        goto LAB_102f6fec4;
      }
LAB_102f6fd48:
      func_0x000102f7749c(&uStack_80,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000102f7749c(&uStack_a0,auStack_c0,0x112f2a448,&UNK_10db664f0);
      func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
      uVar2 = uVar3;
      uVar4 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    }
LAB_102f6fec0:
    func_0x000100d2dc90(uVar2,uVar4,uVar6,uVar8);
  }
LAB_102f6fec4:
  uVar1 = 0;
LAB_102f6fec8:
  return uVar1 & 1;
}



/* Entry: 102f7019c; end: 102f7023b;  */

/* WARNING: Possible PIC construction at 0x000102f701cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f70210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f70214) */
/* WARNING: Removing unreachable block (ram,0x000102f701d0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f7019c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 102f7023c; end: 102f70eb3;  */

uint FUN_102f7023c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar3 = param_1[2];
  lVar13 = param_1[5];
  uVar11 = param_1[4];
  uVar8 = param_1[7];
  uVar4 = param_1[6];
  lVar9 = param_2[3];
  uVar5 = param_2[2];
  lVar14 = param_2[5];
  uVar12 = param_2[4];
  uVar10 = param_2[7];
  uVar6 = param_2[6];
  uStack_d0 = uVar5;
  lStack_c8 = lVar9;
  uStack_c0 = uVar12;
  lStack_b8 = lVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  lStack_98 = lVar7;
  uStack_90 = uVar11;
  lStack_88 = lVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (lVar7 == 0) {
    if (lVar9 == 0) {
      func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
      func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
LAB_102f70478:
      FUN_102f5ce58(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
      uVar8 = *param_1;
      func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar8;
      goto LAB_102f70550;
    }
LAB_102f703c4:
    func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
    func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
    FUN_102f5ce58(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
    uVar3 = uVar5;
    lVar7 = lVar9;
    uVar11 = uVar12;
    lVar13 = lVar14;
    uVar4 = uVar6;
    uVar8 = uVar10;
  }
  else {
    if (lVar9 == 0) goto LAB_102f703c4;
    if (((uVar3 == uVar5) && (lVar7 == lVar9)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar7,uVar5,lVar9,0), (uVar2 & 1) != 0)) {
      if (((uVar11 != uVar12) || (lVar13 != lVar14)) &&
         (uVar2 = uVar11, func_0x000107c605b8(uVar11,lVar13,uVar12,lVar14,0), (uVar2 & 1) == 0)) {
        func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
        func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
        goto LAB_102f7051c;
      }
      func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
      func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
      uVar2 = uVar4;
      func_0x000100e25fcc(uVar4,uVar8,uVar6,uVar10);
      FUN_102f5ce58(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_102f70478;
    }
    else {
      func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
      func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
LAB_102f7051c:
      FUN_102f5ce58(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
    }
  }
  FUN_102f5ce58(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
  uVar1 = 0;
LAB_102f70550:
  return uVar1 & 1;
}



/* Entry: 102f70eb4; end: 102f70fb3;  */

void FUN_102f70eb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ad30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db69648;
  func_0x000107c61520(&UNK_10db69648,&UNK_1105efb50);
  puRam0000000112f2ad30 = puVar1;
  return;
}



/* Entry: 102f70fb4; end: 102f713af;  */

uint FUN_102f70fb4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if ((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
  goto LAB_102f71350;
  uVar7 = param_1[0xb];
  uVar2 = param_1[10];
  uVar13 = param_1[0xd];
  uVar11 = param_1[0xc];
  uVar8 = param_1[0xf];
  uVar4 = param_1[0xe];
  uVar9 = param_2[0xb];
  uVar5 = param_2[10];
  uVar14 = param_2[0xd];
  uVar12 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar6 = param_2[0xe];
  uStack_d0 = uVar5;
  uStack_c8 = uVar9;
  uStack_c0 = uVar12;
  uStack_b8 = uVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar2;
  uStack_98 = uVar7;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_102f7116c;
    func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
    func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
LAB_102f71220:
    FUN_102f5ce58(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
    uVar2 = param_1[2];
    if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = (ulong)(param_1[4] != 0);
      if ((char)param_1[5] != '\x01') {
        uVar2 = param_1[4];
      }
      if ((char)param_2[5] == '\x01') {
        if (param_2[4] == 0) {
          if (uVar2 == 0) goto LAB_102f7137c;
        }
        else if (uVar2 == 1) {
LAB_102f7137c:
          uVar2 = param_1[6];
          if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[8];
            func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
            uVar1 = (uint)uVar2;
            goto LAB_102f71354;
          }
        }
      }
      else if (uVar2 == param_2[4]) goto LAB_102f7137c;
    }
  }
  else {
    if (uVar9 == 0) {
LAB_102f7116c:
      func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
      func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
      FUN_102f5ce58(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar2 = uVar5;
      uVar7 = uVar9;
      uVar11 = uVar12;
      uVar13 = uVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (((uVar2 == uVar5) && (uVar7 == uVar9)) ||
         (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,uVar5,uVar9,0), (uVar3 & 1) != 0)) {
        if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
           (uVar3 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar3 & 1) != 0)) {
          func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
          func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
          uVar3 = uVar4;
          func_0x000100e25fcc(uVar4,uVar8,uVar6,uVar10);
          FUN_102f5ce58(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
          if ((uVar3 & 1) != 0) goto LAB_102f71220;
          goto LAB_102f7134c;
        }
        func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
        func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
      }
      else {
        func_0x000102f7749c(&uStack_a0,auStack_100,0x112f2a450,&UNK_10db664f8);
        func_0x000102f7749c(&uStack_d0,auStack_100,0x112f2a450,&UNK_10db664f8);
      }
      FUN_102f5ce58(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
LAB_102f7134c:
    FUN_102f5ce58(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
  }
LAB_102f71350:
  uVar1 = 0;
LAB_102f71354:
  return uVar1 & 1;
}


