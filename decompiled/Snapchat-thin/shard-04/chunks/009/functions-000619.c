/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a02c80; end: 103a02dff;  */

void FUN_103a02c80(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 8))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 8))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 8))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 8))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 8))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0x98))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0x98))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a02e00; end: 103a02e37;  */

undefined1  [16] FUN_103a02e00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1885b0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 103a02e38; end: 103a02e5f;  */

void FUN_103a02e38(void)

{
  FUN_103a02b54();
  return;
}



/* Entry: 103a02e60; end: 103a02e97;  */

uint FUN_103a02e60(long param_1,long param_2)

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
  func_0x000103a17bd4();
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



/* Entry: 103a02e98; end: 103a02eef;  */

uint FUN_103a02e98(undefined8 *param_1)

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
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = param_1[6];
  uStack_28 = (undefined6)param_1[7];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_1 + 0x3e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x3e) >> 0x10);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_80 = unaff_x20[6];
  uStack_78 = (undefined6)unaff_x20[7];
  uStack_72 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x3e);
  uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x3e) >> 0x10);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000103a0e02c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a02ef0; end: 103a02f8f;  */

/* WARNING: Possible PIC construction at 0x000103a02f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a02f4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a02f40) */
/* WARNING: Removing unreachable block (ram,0x000103a02f50) */

void FUN_103a02ef0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9aa0 != -1) {
    func_0x000107c61568(0x112fc9aa0,FUN_103a02b0c);
  }
  uVar5 = uRam000000011380c7c0;
  uVar4 = uRam000000011380c7b8;
  uVar3 = uRam000000011380c7b0;
  uVar2 = uRam000000011380c7a8;
  uVar1 = uRam000000011380c7a0;
  *param_1 = uRam000000011380c798;
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



/* Entry: 103a02f90; end: 103a02fa3;  */

void FUN_103a02f90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5e8,&UNK_10dc3a6d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a02fa4; end: 103a02fdb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a02fa4(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a1264c();
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



/* Entry: 103a02fdc; end: 103a0307b;  */

uint FUN_103a02fdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined6 uStack_28;
  undefined2 uStack_22;
  undefined6 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined6)param_1[7];
  uStack_72 = (undefined2)*(undefined8 *)((long)param_1 + 0x3e);
  uStack_70 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x3e) >> 0x10);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined6)param_2[7];
  uStack_22 = (undefined2)*(undefined8 *)((long)param_2 + 0x3e);
  uStack_20 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x3e) >> 0x10);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000103a0e02c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a0307c; end: 103a031a7;  */

void FUN_103a0307c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x38);
          }
          else {
            if (lVar1 != 4) goto LAB_103a03184;
            pcVar3 = *(code **)(param_3 + 0x38);
          }
          goto LAB_103a03174;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x38);
          goto LAB_103a03174;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x38);
          goto LAB_103a03174;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x38);
          }
          else {
            if (lVar1 != 6) goto LAB_103a03184;
            pcVar3 = *(code **)(param_3 + 0x40);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x40);
        }
        else {
          if (lVar1 != 8) goto LAB_103a03184;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a03174:
        (*pcVar3)();
      }
LAB_103a03184:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a031a8; end: 103a03327;  */

void FUN_103a031a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x10))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x10))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xa0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a03328; end: 103a0335f;  */

undefined1  [16] FUN_103a03328(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1885d0;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a03360; end: 103a03387;  */

void FUN_103a03360(void)

{
  FUN_103a0307c();
  return;
}



/* Entry: 103a03388; end: 103a033bf;  */

uint FUN_103a03388(long param_1,long param_2)

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
  func_0x000103a17b94();
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



/* Entry: 103a033c0; end: 103a03427;  */

uint FUN_103a033c0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined8 uStack_8e;
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
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_30 = param_1[10];
  uStack_28 = (undefined2)param_1[0xb];
  uStack_1e = *(undefined8 *)((long)param_1 + 0x62);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_1 + 0x5a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x5a) >> 0x30);
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_8e = *(undefined8 *)((long)unaff_x20 + 0x62);
  uStack_90 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x5a) >> 0x30);
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_a0 = unaff_x20[10];
  uStack_98 = (undefined2)unaff_x20[0xb];
  uStack_96 = (undefined6)((ulong)unaff_x20[0xb] >> 0x10);
  func_0x000103a0e1f8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103a03428; end: 103a034c7;  */

/* WARNING: Possible PIC construction at 0x000103a03474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a03484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a03478) */
/* WARNING: Removing unreachable block (ram,0x000103a03488) */

void FUN_103a03428(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9ab0 != -1) {
    func_0x000107c61568(0x112fc9ab0,0x103a03034);
  }
  uVar5 = uRam000000011380c7f0;
  uVar4 = uRam000000011380c7e8;
  uVar3 = uRam000000011380c7e0;
  uVar2 = uRam000000011380c7d8;
  uVar1 = uRam000000011380c7d0;
  *param_1 = uRam000000011380c7c8;
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



/* Entry: 103a034c8; end: 103a034db;  */

void FUN_103a034c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5d8,&UNK_10dc3a6c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a034dc; end: 103a03513;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a034dc(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12748();
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



/* Entry: 103a03514; end: 103a035c3;  */

uint FUN_103a03514(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined8 uStack_8e;
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
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_a0 = param_1[10];
  uStack_98 = (undefined2)param_1[0xb];
  uStack_8e = *(undefined8 *)((long)param_1 + 0x62);
  uStack_96 = (undefined6)*(undefined8 *)((long)param_1 + 0x5a);
  uStack_90 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x5a) >> 0x30);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x62);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x5a) >> 0x30);
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_30 = param_2[10];
  uStack_28 = (undefined2)param_2[0xb];
  uStack_26 = (undefined6)((ulong)param_2[0xb] >> 0x10);
  func_0x000103a0e1f8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103a035c4; end: 103a036ef;  */

void FUN_103a035c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x50);
          }
          else {
            if (lVar1 != 4) goto LAB_103a036cc;
            pcVar3 = *(code **)(param_3 + 0x50);
          }
          goto LAB_103a036bc;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x50);
          goto LAB_103a036bc;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x50);
          goto LAB_103a036bc;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x50);
          }
          else {
            if (lVar1 != 6) goto LAB_103a036cc;
            pcVar3 = *(code **)(param_3 + 0x58);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x58);
        }
        else {
          if (lVar1 != 8) goto LAB_103a036cc;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a036bc:
        (*pcVar3)();
      }
LAB_103a036cc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a036f0; end: 103a0386f;  */

void FUN_103a036f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x18))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 0x18))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 0x18))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 0x18))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 0x18))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xa8))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a03870; end: 103a038a7;  */

undefined1  [16] FUN_103a03870(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1885f0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 103a038a8; end: 103a038cf;  */

void FUN_103a038a8(void)

{
  FUN_103a035c4();
  return;
}



/* Entry: 103a038d0; end: 103a03907;  */

uint FUN_103a038d0(long param_1,long param_2)

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
  func_0x000103a17b54();
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



/* Entry: 103a03908; end: 103a039a7;  */

/* WARNING: Possible PIC construction at 0x000103a03954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a03964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a03958) */
/* WARNING: Removing unreachable block (ram,0x000103a03968) */

void FUN_103a03908(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9ac0 != -1) {
    func_0x000107c61568(0x112fc9ac0,0x103a0357c);
  }
  uVar5 = uRam000000011380c820;
  uVar4 = uRam000000011380c818;
  uVar3 = uRam000000011380c810;
  uVar2 = uRam000000011380c808;
  uVar1 = uRam000000011380c800;
  *param_1 = uRam000000011380c7f8;
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



/* Entry: 103a039a8; end: 103a039bb;  */

void FUN_103a039a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5c8,&UNK_10dc3a6c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a039bc; end: 103a039f3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a039bc(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12844();
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



/* Entry: 103a039f4; end: 103a03a3b;  */

void FUN_103a039f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c830 = uStack_38;
  uRam000000011380c828 = uStack_40;
  uRam000000011380c840 = uStack_28;
  uRam000000011380c838 = uStack_30;
  uRam000000011380c850 = uStack_18;
  uRam000000011380c848 = uStack_20;
  return;
}



/* Entry: 103a03a3c; end: 103a03b67;  */

void FUN_103a03a3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x68);
          }
          else {
            if (lVar1 != 4) goto LAB_103a03b44;
            pcVar3 = *(code **)(param_3 + 0x68);
          }
          goto LAB_103a03b34;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x68);
          goto LAB_103a03b34;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x68);
          goto LAB_103a03b34;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x68);
          }
          else {
            if (lVar1 != 6) goto LAB_103a03b44;
            pcVar3 = *(code **)(param_3 + 0x70);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x70);
        }
        else {
          if (lVar1 != 8) goto LAB_103a03b44;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a03b34:
        (*pcVar3)();
      }
LAB_103a03b44:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a03b68; end: 103a03ce7;  */

void FUN_103a03b68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x20))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x20))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xb0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xb0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a03ce8; end: 103a03d1f;  */

undefined1  [16] FUN_103a03ce8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188610;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 103a03d20; end: 103a03d47;  */

void FUN_103a03d20(void)

{
  FUN_103a03a3c();
  return;
}



/* Entry: 103a03d48; end: 103a03d7f;  */

uint FUN_103a03d48(long param_1,long param_2)

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
  func_0x000103a17b14();
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



/* Entry: 103a03d80; end: 103a03e1f;  */

/* WARNING: Possible PIC construction at 0x000103a03dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a03ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a03dd0) */
/* WARNING: Removing unreachable block (ram,0x000103a03de0) */

void FUN_103a03d80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9ad0 != -1) {
    func_0x000107c61568(0x112fc9ad0,FUN_103a039f4);
  }
  uVar5 = uRam000000011380c850;
  uVar4 = uRam000000011380c848;
  uVar3 = uRam000000011380c840;
  uVar2 = uRam000000011380c838;
  uVar1 = uRam000000011380c830;
  *param_1 = uRam000000011380c828;
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



/* Entry: 103a03e20; end: 103a03e33;  */

void FUN_103a03e20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5b8,&UNK_10dc3a6b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a03e34; end: 103a03e6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a03e34(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12940();
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



/* Entry: 103a03e6c; end: 103a03eb3;  */

void FUN_103a03e6c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c860 = uStack_38;
  uRam000000011380c858 = uStack_40;
  uRam000000011380c870 = uStack_28;
  uRam000000011380c868 = uStack_30;
  uRam000000011380c880 = uStack_18;
  uRam000000011380c878 = uStack_20;
  return;
}



/* Entry: 103a03eb4; end: 103a03fdf;  */

void FUN_103a03eb4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x80);
          }
          else {
            if (lVar1 != 4) goto LAB_103a03fbc;
            pcVar3 = *(code **)(param_3 + 0x80);
          }
          goto LAB_103a03fac;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x80);
          goto LAB_103a03fac;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x80);
          goto LAB_103a03fac;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x80);
          }
          else {
            if (lVar1 != 6) goto LAB_103a03fbc;
            pcVar3 = *(code **)(param_3 + 0x88);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x88);
        }
        else {
          if (lVar1 != 8) goto LAB_103a03fbc;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a03fac:
        (*pcVar3)();
      }
LAB_103a03fbc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a03fe0; end: 103a0415f;  */

void FUN_103a03fe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x28))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 0x28))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 0x28))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 0x28))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 0x28))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xb8))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xb8))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a04160; end: 103a04197;  */

undefined1  [16] FUN_103a04160(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188630;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a04198; end: 103a041bf;  */

void FUN_103a04198(void)

{
  FUN_103a03eb4();
  return;
}



/* Entry: 103a041c0; end: 103a041f7;  */

uint FUN_103a041c0(long param_1,long param_2)

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
  func_0x000103a17ad4();
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



/* Entry: 103a041f8; end: 103a04297;  */

/* WARNING: Possible PIC construction at 0x000103a04244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a04254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a04248) */
/* WARNING: Removing unreachable block (ram,0x000103a04258) */

void FUN_103a041f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9ae0 != -1) {
    func_0x000107c61568(0x112fc9ae0,FUN_103a03e6c);
  }
  uVar5 = uRam000000011380c880;
  uVar4 = uRam000000011380c878;
  uVar3 = uRam000000011380c870;
  uVar2 = uRam000000011380c868;
  uVar1 = uRam000000011380c860;
  *param_1 = uRam000000011380c858;
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



/* Entry: 103a04298; end: 103a042ab;  */

void FUN_103a04298(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5a8,&UNK_10dc3a6b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a042ac; end: 103a042e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a042ac(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12a3c();
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



/* Entry: 103a042e4; end: 103a0432b;  */

void FUN_103a042e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c890 = uStack_38;
  uRam000000011380c888 = uStack_40;
  uRam000000011380c8a0 = uStack_28;
  uRam000000011380c898 = uStack_30;
  uRam000000011380c8b0 = uStack_18;
  uRam000000011380c8a8 = uStack_20;
  return;
}



/* Entry: 103a0432c; end: 103a04457;  */

void FUN_103a0432c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x98);
          }
          else {
            if (lVar1 != 4) goto LAB_103a04434;
            pcVar3 = *(code **)(param_3 + 0x98);
          }
          goto LAB_103a04424;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x98);
          goto LAB_103a04424;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x98);
          goto LAB_103a04424;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x98);
          }
          else {
            if (lVar1 != 6) goto LAB_103a04434;
            pcVar3 = *(code **)(param_3 + 0xa0);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0xa0);
        }
        else {
          if (lVar1 != 8) goto LAB_103a04434;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a04424:
        (*pcVar3)();
      }
LAB_103a04434:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a04458; end: 103a045d7;  */

void FUN_103a04458(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x30))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x30))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xc0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xc0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a045d8; end: 103a0460f;  */

undefined1  [16] FUN_103a045d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188650;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a04610; end: 103a04637;  */

void FUN_103a04610(void)

{
  FUN_103a0432c();
  return;
}



/* Entry: 103a04638; end: 103a0466f;  */

uint FUN_103a04638(long param_1,long param_2)

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
  func_0x000103a17a94();
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



/* Entry: 103a04670; end: 103a0470f;  */

/* WARNING: Possible PIC construction at 0x000103a046bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a046cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a046c0) */
/* WARNING: Removing unreachable block (ram,0x000103a046d0) */

void FUN_103a04670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9af0 != -1) {
    func_0x000107c61568(0x112fc9af0,FUN_103a042e4);
  }
  uVar5 = uRam000000011380c8b0;
  uVar4 = uRam000000011380c8a8;
  uVar3 = uRam000000011380c8a0;
  uVar2 = uRam000000011380c898;
  uVar1 = uRam000000011380c890;
  *param_1 = uRam000000011380c888;
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



/* Entry: 103a04710; end: 103a04723;  */

void FUN_103a04710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca598;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca598,&UNK_10dc3a6a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a04724; end: 103a0475b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a04724(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12b38();
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



/* Entry: 103a0475c; end: 103a047a3;  */

void FUN_103a0475c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c8c0 = uStack_38;
  uRam000000011380c8b8 = uStack_40;
  uRam000000011380c8d0 = uStack_28;
  uRam000000011380c8c8 = uStack_30;
  uRam000000011380c8e0 = uStack_18;
  uRam000000011380c8d8 = uStack_20;
  return;
}



/* Entry: 103a047a4; end: 103a048cf;  */

void FUN_103a047a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0xb0);
          }
          else {
            if (lVar1 != 4) goto LAB_103a048ac;
            pcVar3 = *(code **)(param_3 + 0xb0);
          }
          goto LAB_103a0489c;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0xb0);
          goto LAB_103a0489c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0xb0);
          goto LAB_103a0489c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0xb0);
          }
          else {
            if (lVar1 != 6) goto LAB_103a048ac;
            pcVar3 = *(code **)(param_3 + 0xb8);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0xb8);
        }
        else {
          if (lVar1 != 8) goto LAB_103a048ac;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a0489c:
        (*pcVar3)();
      }
LAB_103a048ac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a048d0; end: 103a04a4f;  */

void FUN_103a048d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x38))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 0x38))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 0x38))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 0x38))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 0x38))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 200))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 200))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a04a50; end: 103a04a87;  */

undefined1  [16] FUN_103a04a50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188670;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a04a88; end: 103a04aaf;  */

void FUN_103a04a88(void)

{
  FUN_103a047a4();
  return;
}



/* Entry: 103a04ab0; end: 103a04ae7;  */

uint FUN_103a04ab0(long param_1,long param_2)

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
  func_0x000103a17a54();
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



/* Entry: 103a04ae8; end: 103a04b87;  */

/* WARNING: Possible PIC construction at 0x000103a04b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a04b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a04b38) */
/* WARNING: Removing unreachable block (ram,0x000103a04b48) */

void FUN_103a04ae8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b00 != -1) {
    func_0x000107c61568(0x112fc9b00,FUN_103a0475c);
  }
  uVar5 = uRam000000011380c8e0;
  uVar4 = uRam000000011380c8d8;
  uVar3 = uRam000000011380c8d0;
  uVar2 = uRam000000011380c8c8;
  uVar1 = uRam000000011380c8c0;
  *param_1 = uRam000000011380c8b8;
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



/* Entry: 103a04b88; end: 103a04b9b;  */

void FUN_103a04b88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca588;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca588,&UNK_10dc3a6a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a04b9c; end: 103a04bd3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a04b9c(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12c34();
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



/* Entry: 103a04bd4; end: 103a04c1b;  */

void FUN_103a04bd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c8f0 = uStack_38;
  uRam000000011380c8e8 = uStack_40;
  uRam000000011380c900 = uStack_28;
  uRam000000011380c8f8 = uStack_30;
  uRam000000011380c910 = uStack_18;
  uRam000000011380c908 = uStack_20;
  return;
}



/* Entry: 103a04c1c; end: 103a04d47;  */

void FUN_103a04c1c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 200);
          }
          else {
            if (lVar1 != 4) goto LAB_103a04d24;
            pcVar3 = *(code **)(param_3 + 200);
          }
          goto LAB_103a04d14;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 200);
          goto LAB_103a04d14;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 200);
          goto LAB_103a04d14;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 200);
          }
          else {
            if (lVar1 != 6) goto LAB_103a04d24;
            pcVar3 = *(code **)(param_3 + 0xd0);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0xd0);
        }
        else {
          if (lVar1 != 8) goto LAB_103a04d24;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a04d14:
        (*pcVar3)();
      }
LAB_103a04d24:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a04d48; end: 103a04ec7;  */

void FUN_103a04d48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x40))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x40))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x40))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x40))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x40))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xd0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xd0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a04ec8; end: 103a04eff;  */

undefined1  [16] FUN_103a04ec8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f188690;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 103a04f00; end: 103a04f27;  */

void FUN_103a04f00(void)

{
  FUN_103a04c1c();
  return;
}



/* Entry: 103a04f28; end: 103a04f5f;  */

uint FUN_103a04f28(long param_1,long param_2)

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
  func_0x000103a17a14();
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



/* Entry: 103a04f60; end: 103a04fff;  */

/* WARNING: Possible PIC construction at 0x000103a04fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a04fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a04fb0) */
/* WARNING: Removing unreachable block (ram,0x000103a04fc0) */

void FUN_103a04f60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b10 != -1) {
    func_0x000107c61568(0x112fc9b10,FUN_103a04bd4);
  }
  uVar5 = uRam000000011380c910;
  uVar4 = uRam000000011380c908;
  uVar3 = uRam000000011380c900;
  uVar2 = uRam000000011380c8f8;
  uVar1 = uRam000000011380c8f0;
  *param_1 = uRam000000011380c8e8;
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



/* Entry: 103a05000; end: 103a05013;  */

void FUN_103a05000(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca578;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca578,&UNK_10dc3a698);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a05014; end: 103a0504b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a05014(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12d30();
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



/* Entry: 103a0504c; end: 103a05093;  */

void FUN_103a0504c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c920 = uStack_38;
  uRam000000011380c918 = uStack_40;
  uRam000000011380c930 = uStack_28;
  uRam000000011380c928 = uStack_30;
  uRam000000011380c940 = uStack_18;
  uRam000000011380c938 = uStack_20;
  return;
}



/* Entry: 103a05094; end: 103a051bf;  */

void FUN_103a05094(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0xe0);
          }
          else {
            if (lVar1 != 4) goto LAB_103a0519c;
            pcVar3 = *(code **)(param_3 + 0xe0);
          }
          goto LAB_103a0518c;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0xe0);
          goto LAB_103a0518c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0xe0);
          goto LAB_103a0518c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0xe0);
          }
          else {
            if (lVar1 != 6) goto LAB_103a0519c;
            pcVar3 = *(code **)(param_3 + 0xe8);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0xe8);
        }
        else {
          if (lVar1 != 8) goto LAB_103a0519c;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a0518c:
        (*pcVar3)();
      }
LAB_103a0519c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a051c0; end: 103a0533f;  */

void FUN_103a051c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x48))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 0x48))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 0x48))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 0x48))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 0x48))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xd8))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xd8))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a05340; end: 103a05377;  */

undefined1  [16] FUN_103a05340(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1886b0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 103a05378; end: 103a0539f;  */

void FUN_103a05378(void)

{
  FUN_103a05094();
  return;
}



/* Entry: 103a053a0; end: 103a053d7;  */

uint FUN_103a053a0(long param_1,long param_2)

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
  func_0x000103a179d4();
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



/* Entry: 103a053d8; end: 103a05477;  */

/* WARNING: Possible PIC construction at 0x000103a05424: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a05434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a05428) */
/* WARNING: Removing unreachable block (ram,0x000103a05438) */

void FUN_103a053d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b20 != -1) {
    func_0x000107c61568(0x112fc9b20,FUN_103a0504c);
  }
  uVar5 = uRam000000011380c940;
  uVar4 = uRam000000011380c938;
  uVar3 = uRam000000011380c930;
  uVar2 = uRam000000011380c928;
  uVar1 = uRam000000011380c920;
  *param_1 = uRam000000011380c918;
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



/* Entry: 103a05478; end: 103a0548b;  */

void FUN_103a05478(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca568;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca568,&UNK_10dc3a690);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a0548c; end: 103a054c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a0548c(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12e2c();
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



/* Entry: 103a054c4; end: 103a0550b;  */

void FUN_103a054c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c950 = uStack_38;
  uRam000000011380c948 = uStack_40;
  uRam000000011380c960 = uStack_28;
  uRam000000011380c958 = uStack_30;
  uRam000000011380c970 = uStack_18;
  uRam000000011380c968 = uStack_20;
  return;
}



/* Entry: 103a0550c; end: 103a05637;  */

void FUN_103a0550c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0xf8);
          }
          else {
            if (lVar1 != 4) goto LAB_103a05614;
            pcVar3 = *(code **)(param_3 + 0xf8);
          }
          goto LAB_103a05604;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0xf8);
          goto LAB_103a05604;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0xf8);
          goto LAB_103a05604;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0xf8);
          }
          else {
            if (lVar1 != 6) goto LAB_103a05614;
            pcVar3 = *(code **)(param_3 + 0x100);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x100);
        }
        else {
          if (lVar1 != 8) goto LAB_103a05614;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a05604:
        (*pcVar3)();
      }
LAB_103a05614:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a05638; end: 103a057b7;  */

void FUN_103a05638(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((char)unaff_x20[5] != '\x01') {
    (**(code **)(param_3 + 0x50))(unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[7] != '\x01') {
      (**(code **)(param_3 + 0x50))(unaff_x20[6],2,param_2,param_3);
    }
    if ((char)unaff_x20[9] != '\x01') {
      (**(code **)(param_3 + 0x50))(unaff_x20[8],3,param_2,param_3);
    }
    if ((char)unaff_x20[0xb] != '\x01') {
      (**(code **)(param_3 + 0x50))(unaff_x20[10],4,param_2,param_3);
    }
    if ((char)unaff_x20[0xd] != '\x01') {
      (**(code **)(param_3 + 0x50))(unaff_x20[0xc],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xe0))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xe0))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x69) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x69) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a057b8; end: 103a057ef;  */

undefined1  [16] FUN_103a057b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1886d0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 103a057f0; end: 103a05817;  */

void FUN_103a057f0(void)

{
  FUN_103a0550c();
  return;
}



/* Entry: 103a05818; end: 103a0584f;  */

uint FUN_103a05818(long param_1,long param_2)

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
  func_0x000103a17994();
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



/* Entry: 103a05850; end: 103a058ef;  */

/* WARNING: Possible PIC construction at 0x000103a0589c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a058ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a058a0) */
/* WARNING: Removing unreachable block (ram,0x000103a058b0) */

void FUN_103a05850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b30 != -1) {
    func_0x000107c61568(0x112fc9b30,FUN_103a054c4);
  }
  uVar5 = uRam000000011380c970;
  uVar4 = uRam000000011380c968;
  uVar3 = uRam000000011380c960;
  uVar2 = uRam000000011380c958;
  uVar1 = uRam000000011380c950;
  *param_1 = uRam000000011380c948;
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



/* Entry: 103a058f0; end: 103a05903;  */

void FUN_103a058f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca558;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca558,&UNK_10dc3a688);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a05904; end: 103a0593b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a05904(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12f28();
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



/* Entry: 103a0593c; end: 103a05983;  */

void FUN_103a0593c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c980 = uStack_38;
  uRam000000011380c978 = uStack_40;
  uRam000000011380c990 = uStack_28;
  uRam000000011380c988 = uStack_30;
  uRam000000011380c9a0 = uStack_18;
  uRam000000011380c998 = uStack_20;
  return;
}



/* Entry: 103a05984; end: 103a05aaf;  */

void FUN_103a05984(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x110);
          }
          else {
            if (lVar1 != 4) goto LAB_103a05a8c;
            pcVar3 = *(code **)(param_3 + 0x110);
          }
          goto LAB_103a05a7c;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x110);
          goto LAB_103a05a7c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x110);
          goto LAB_103a05a7c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x110);
          }
          else {
            if (lVar1 != 6) goto LAB_103a05a8c;
            pcVar3 = *(code **)(param_3 + 0x118);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x118);
        }
        else {
          if (lVar1 != 8) goto LAB_103a05a8c;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a05a7c:
        (*pcVar3)();
      }
LAB_103a05a8c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a05ab0; end: 103a05c2f;  */

void FUN_103a05ab0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    (**(code **)(param_3 + 0x58))((int)unaff_x20[4],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)((long)unaff_x20 + 0x2c) != '\x01') {
      (**(code **)(param_3 + 0x58))((int)unaff_x20[5],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x34) != '\x01') {
      (**(code **)(param_3 + 0x58))((int)unaff_x20[6],3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x3c) != '\x01') {
      (**(code **)(param_3 + 0x58))((int)unaff_x20[7],4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x44) != '\x01') {
      (**(code **)(param_3 + 0x58))((int)unaff_x20[8],5,param_2,param_3);
    }
    if (*(long *)(*unaff_x20 + 0x10) != 0) {
      (**(code **)(param_3 + 0xe8))(*unaff_x20,6,param_2,param_3);
    }
    if (*(long *)(unaff_x20[1] + 0x10) != 0) {
      (**(code **)(param_3 + 0xe8))(unaff_x20[1],7,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x45) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x45) & 1,8,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103a05c30; end: 103a05cb3;  */

void FUN_103a05c30(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 0x201;
  return;
}



/* Entry: 103a05cb4; end: 103a05cdb;  */

void FUN_103a05cb4(void)

{
  FUN_103a05984();
  return;
}



/* Entry: 103a05cdc; end: 103a05d13;  */

uint FUN_103a05cdc(long param_1,long param_2)

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
  func_0x000103a17954();
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



/* Entry: 103a05d14; end: 103a05db3;  */

/* WARNING: Possible PIC construction at 0x000103a05d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a05d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a05d64) */
/* WARNING: Removing unreachable block (ram,0x000103a05d74) */

void FUN_103a05d14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9b40 != -1) {
    func_0x000107c61568(0x112fc9b40,FUN_103a0593c);
  }
  uVar5 = uRam000000011380c9a0;
  uVar4 = uRam000000011380c998;
  uVar3 = uRam000000011380c990;
  uVar2 = uRam000000011380c988;
  uVar1 = uRam000000011380c980;
  *param_1 = uRam000000011380c978;
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



/* Entry: 103a05db4; end: 103a05dc7;  */

void FUN_103a05db4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca548;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca548,&UNK_10dc3a680);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a05dc8; end: 103a05dfb;  */

void FUN_103a05dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103a05dfc; end: 103a05f0f;  */

void FUN_103a05dfc(undefined8 param_1,undefined8 param_2)

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
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined6)unaff_x20[7];
  uStack_42 = (undefined2)*(undefined8 *)((long)unaff_x20 + 0x3e);
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 0x3e) >> 0x10);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}


