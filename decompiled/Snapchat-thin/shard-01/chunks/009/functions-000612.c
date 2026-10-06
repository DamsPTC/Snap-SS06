/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10164f2e0; end: 10164f307;  */

void FUN_10164f2e0(void)

{
  FUN_10164eed8();
  return;
}



/* Entry: 10164f308; end: 10164f30b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10164f308(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10164f30c; end: 10164f343;  */

uint FUN_10164f30c(long param_1,long param_2)

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
  func_0x000101658f04();
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



/* Entry: 10164f344; end: 10164f39b;  */

uint FUN_10164f344(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10165629c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10164f39c; end: 10164f43b;  */

/* WARNING: Possible PIC construction at 0x00010164f3e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164f3f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164f3ec) */
/* WARNING: Removing unreachable block (ram,0x00010164f3fc) */

void FUN_10164f39c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbca90 != -1) {
    func_0x000107c61568(0x112dbca90,0x10164ee90);
  }
  uVar5 = uRam0000000113802330;
  uVar4 = uRam0000000113802328;
  uVar3 = uRam0000000113802320;
  uVar2 = uRam0000000113802318;
  uVar1 = uRam0000000113802310;
  *param_1 = uRam0000000113802308;
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



/* Entry: 10164f43c; end: 10164f477;  */

void FUN_10164f43c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcdd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcdd8,&UNK_10d974f00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164f478; end: 10164f593;  */

void FUN_10164f478(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10164f594; end: 10164f633;  */

uint FUN_10164f594(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10165629c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10164f634; end: 10164f7df;  */

/* WARNING: Removing unreachable block (ram,0x00010164f7dc) */

void FUN_10164f634(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 != 1) {
            if (lVar1 == 2) {
              pcVar4 = *(code **)(param_3 + 0x198);
              FUN_101656d40();
              lVar2 = unaff_x20 + 0x68;
              puVar3 = &UNK_1103ee578;
              goto LAB_10164f7c8;
            }
            goto LAB_10164f6bc;
          }
          pcVar4 = *(code **)(param_3 + 0x160);
        }
        else if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_10164f6bc;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_10164f6ac:
        (*pcVar4)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 6) goto LAB_10164f6bc;
            pcVar4 = *(code **)(param_3 + 0x60);
          }
          goto LAB_10164f6ac;
        }
        if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_10164f6ac;
        }
        if (lVar1 == 8) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001016565e0();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_1103ee470;
        }
        else {
          if (lVar1 != 9) goto LAB_10164f6bc;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_101656c44();
          lVar2 = unaff_x20 + 0xd0;
          puVar3 = &UNK_1103ee4f0;
        }
LAB_10164f7c8:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_10164f6bc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10164f7e0; end: 10164f9ab;  */

void FUN_10164f7e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10164f9ac(), unaff_x21 == 0)) {
    uVar3 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[1],uVar3,3,param_2,param_3);
    }
    uVar3 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[3],uVar3,4,param_2,param_3);
    }
    uVar3 = unaff_x20[6];
    uVar1 = unaff_x20[5] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],uVar3,5,param_2,param_3);
    }
    if (unaff_x20[7] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[7],6,param_2,param_3);
    }
    uVar3 = unaff_x20[8];
    uVar2 = unaff_x20[9];
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(uVar3,uVar2,7,param_2,param_3);
    }
    lVar4 = unaff_x20[10];
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      func_0x0001016565e0();
      (*pcVar5)(lVar4,8,&UNK_1103ee470,uVar3,param_2,param_3);
    }
    FUN_10164fa4c();
    func_0x000100076224(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
  }
  return;
}



/* Entry: 10164f9ac; end: 10164fa4b;  */

void FUN_10164f9ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  
  lStack_a0 = *(long *)(param_1 + 0x78);
  if (lStack_a0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x70);
    uStack_b0 = *(undefined8 *)(param_1 + 0x68);
    uStack_90 = *(undefined8 *)(param_1 + 0x88);
    uStack_98 = *(undefined8 *)(param_1 + 0x80);
    uStack_80 = *(undefined8 *)(param_1 + 0x98);
    uStack_88 = *(undefined8 *)(param_1 + 0x90);
    uStack_70 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101656d40();
    (*pcVar1)(&uStack_b0,2,&UNK_1103ee578,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10164fa4c; end: 10164fad7;  */

void FUN_10164fa4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0xe8);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101656c44();
    (*pcVar1)(&uStack_60,9,&UNK_1103ee4f0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10164fad8; end: 10164fb5b;  */

void FUN_10164fad8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[10] = puVar1;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0xf000000000000000;
  return;
}



/* Entry: 10164fb5c; end: 10164fb8b;  */

undefined1  [16] FUN_10164fb5c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 10164fb8c; end: 10164fbbf;  */

void FUN_10164fb8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 10164fbc0; end: 10164fbd3;  */

undefined1  [16] FUN_10164fbc0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x10164fbd0;
  return auVar1;
}



/* Entry: 10164fbd4; end: 10164fbe7;  */

void FUN_10164fbd4(void)

{
  FUN_10164f634();
  return;
}



/* Entry: 10164fbe8; end: 10164fc4f;  */

void FUN_10164fbe8(void)

{
  FUN_10164f7e0();
  return;
}



/* Entry: 10164fc50; end: 10164fc53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10164fc50(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10164fc54; end: 10164fc8b;  */

uint FUN_10164fc54(long param_1,long param_2)

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
  func_0x000101658ec4();
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



/* Entry: 10164fc8c; end: 10164fd3b;  */

uint FUN_10164fc8c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_101655a1c(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 10164fd3c; end: 10164fddb;  */

/* WARNING: Possible PIC construction at 0x00010164fd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010164fd98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010164fd8c) */
/* WARNING: Removing unreachable block (ram,0x00010164fd9c) */

void FUN_10164fd3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcab0 != -1) {
    func_0x000107c61568(0x112dbcab0,0x10164f5ec);
  }
  uVar5 = uRam0000000113802360;
  uVar4 = uRam0000000113802358;
  uVar3 = uRam0000000113802350;
  uVar2 = uRam0000000113802348;
  uVar1 = uRam0000000113802340;
  *param_1 = uRam0000000113802338;
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



/* Entry: 10164fddc; end: 10164fe17;  */

void FUN_10164fddc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcdc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcdc8,&UNK_10d974ef8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10164fe18; end: 10164ff83;  */

void FUN_10164fe18(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10164ff84; end: 101650033;  */

uint FUN_10164ff84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_101655a1c(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 101650034; end: 10165005f;  */

void FUN_101650034(void)

{
  func_0x000107c5fb78(0x746375646f72502e,0xeb00000000676154);
  uRam0000000113802368 = 0xd00000000000002a;
  uRam0000000113802370 = 0x800000010efb3ee0;
  return;
}



/* Entry: 101650060; end: 1016500a7;  */

void FUN_101650060(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975090,6,2);
  uRam0000000113802380 = uStack_38;
  uRam0000000113802378 = uStack_40;
  uRam0000000113802390 = uStack_28;
  uRam0000000113802388 = uStack_30;
  uRam00000001138023a0 = uStack_18;
  uRam0000000113802398 = uStack_20;
  return;
}



/* Entry: 1016500a8; end: 10165012b;  */

void FUN_1016500a8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 10165012c; end: 1016501b3;  */

void FUN_10165012c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1016501b4; end: 101650207;  */

void FUN_1016501b4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101650208; end: 10165023f;  */

void FUN_101650208(void)

{
  FUN_1016500a8();
  return;
}



/* Entry: 101650240; end: 101650277;  */

uint FUN_101650240(long param_1,long param_2)

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
  func_0x000101658e84();
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



/* Entry: 101650278; end: 10165038f;  */

/* WARNING: Possible PIC construction at 0x0001016502ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001016502b0) */
/* WARNING: Removing unreachable block (ram,0x0001016502d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101650278(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar19 < 1) goto LAB_100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar9 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101650390; end: 1016503a3;  */

void FUN_101650390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcdb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcdb8,&UNK_10d974ef0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016503a4; end: 10165051f;  */

void FUN_1016503a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101650520; end: 10165054b;  */

void FUN_101650520(void)

{
  func_0x000107c5fb78(0x497765697665522e,0xeb000000006f666e);
  uRam00000001138023a8 = 0xd00000000000002a;
  uRam00000001138023b0 = 0x800000010efb3ee0;
  return;
}



/* Entry: 10165054c; end: 1016505b3;  */

void FUN_10165054c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002a;
  *param_5 = 0x800000010efb3ee0;
  return;
}



/* Entry: 1016505b4; end: 1016505fb;  */

void FUN_1016505b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975060,0x2f,2);
  uRam00000001138023c0 = uStack_38;
  uRam00000001138023b8 = uStack_40;
  uRam00000001138023d0 = uStack_28;
  uRam00000001138023c8 = uStack_30;
  uRam00000001138023e0 = uStack_18;
  uRam00000001138023d8 = uStack_20;
  return;
}



/* Entry: 1016505fc; end: 1016506a7;  */

void FUN_1016505fc(undefined8 param_1,long param_2,long param_3)

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
      pcVar3 = *(code **)(param_3 + 0x18);
      goto LAB_101650638;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x18);
LAB_101650638:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x48);
  goto LAB_101650638;
}



/* Entry: 1016506a8; end: 101650753;  */

void FUN_1016506a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101650754; end: 10165078b;  */

void FUN_101650754(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 10165078c; end: 1016507e7;  */

undefined1  [16]
FUN_10165078c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1016507e8; end: 101650803;  */

undefined8 FUN_1016507e8(void)

{
  return 1;
}



/* Entry: 101650804; end: 10165082b;  */

void FUN_101650804(void)

{
  FUN_1016505fc();
  return;
}



/* Entry: 10165082c; end: 101650863;  */

uint FUN_10165082c(long param_1,long param_2)

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
  func_0x000101658e44();
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



/* Entry: 101650864; end: 10165089b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101650864(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  float *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  bVar8 = false;
  if ((*unaff_x20 == *param_1) && (bVar8 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar8 = unaff_x20[1] == param_1[1];
  }
  if (!bVar8 || unaff_x20[2] != param_1[2]) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(unaff_x20 + 4);
  pbVar26 = *(byte **)(unaff_x20 + 6);
  lVar25 = *(long *)(param_1 + 4);
  uVar17 = *(ulong *)(param_1 + 6);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(float **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (float *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(float **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(float **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10165089c; end: 10165093b;  */

/* WARNING: Possible PIC construction at 0x0001016508e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016508f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016508ec) */
/* WARNING: Removing unreachable block (ram,0x0001016508fc) */

void FUN_10165089c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcae8 != -1) {
    func_0x000107c61568(0x112dbcae8,FUN_1016505b4);
  }
  uVar5 = uRam00000001138023e0;
  uVar4 = uRam00000001138023d8;
  uVar3 = uRam00000001138023d0;
  uVar2 = uRam00000001138023c8;
  uVar1 = uRam00000001138023c0;
  *param_1 = uRam00000001138023b8;
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



/* Entry: 10165093c; end: 10165094f;  */

void FUN_10165093c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcda8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcda8,&UNK_10d974ee8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101650950; end: 101650983;  */

void FUN_101650950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101650984; end: 101650a97;  */

void FUN_101650984(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined4 *)(unaff_x20 + 1);
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101650a98; end: 101650acb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101650a98(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  bVar8 = false;
  if ((*param_1 == *param_2) && (bVar8 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar8 = param_1[1] == param_2[1];
  }
  if (!bVar8 || param_1[2] != param_2[2]) {
    return (byte *)0x0;
  }
  lVar25 = *(long *)(param_2 + 4);
  uVar17 = *(ulong *)(param_2 + 6);
  pbVar11 = *(byte **)(param_1 + 4);
  pbVar26 = *(byte **)(param_1 + 6);
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
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



/* Entry: 101650acc; end: 101650b13;  */

void FUN_101650acc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d974ff0,0x68,2);
  uRam00000001138023f0 = uStack_38;
  uRam00000001138023e8 = uStack_40;
  uRam0000000113802400 = uStack_28;
  uRam00000001138023f8 = uStack_30;
  uRam0000000113802410 = uStack_18;
  uRam0000000113802408 = uStack_20;
  return;
}



/* Entry: 101650b14; end: 101650c5f;  */

/* WARNING: Removing unreachable block (ram,0x000101650c44) */

void FUN_101650b14(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x60);
        }
        else {
          if (lVar1 != 2) {
            if (lVar1 == 3) {
              pcVar5 = *(code **)(param_3 + 0x198);
              func_0x0001015c5cfc();
              lVar2 = unaff_x20 + 0x38;
              puVar3 = &UNK_110790a00;
              goto LAB_101650c30;
            }
            goto LAB_101650b9c;
          }
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_101650b8c:
        (*pcVar5)();
      }
      else {
        if (lVar1 != 4) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x60);
          }
          else {
            if (lVar1 != 6) goto LAB_101650b9c;
            pcVar5 = *(code **)(param_3 + 0x60);
          }
          goto LAB_101650b8c;
        }
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x50;
        puVar3 = &UNK_110790980;
LAB_101650c30:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101650b9c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101650c60; end: 101650d67;  */

void FUN_101650c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_101650d68(), unaff_x21 == 0)) {
      FUN_101650df0();
      if (unaff_x20[3] != 0) {
        (**(code **)(param_3 + 0x20))(unaff_x20[3],5,param_2,param_3);
      }
      if (unaff_x20[4] != 0) {
        (**(code **)(param_3 + 0x20))(unaff_x20[4],6,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101650d68; end: 101650def;  */

void FUN_101650d68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101650df0; end: 101650e77;  */

void FUN_101650df0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101650e78; end: 101650ec7;  */

void FUN_101650e78(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xc000000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf000000000000000;
  return;
}



/* Entry: 101650ec8; end: 101650ef7;  */

undefined1  [16] FUN_101650ec8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101650ef8; end: 101650f2b;  */

void FUN_101650ef8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 101650f2c; end: 101650f3f;  */

undefined1  [16] FUN_101650f2c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x101650f3c;
  return auVar1;
}



/* Entry: 101650f40; end: 101650f53;  */

void FUN_101650f40(void)

{
  FUN_101650b14();
  return;
}



/* Entry: 101650f54; end: 101650f9b;  */

void FUN_101650f54(void)

{
  FUN_101650c60();
  return;
}



/* Entry: 101650f9c; end: 101650f9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101650f9c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101650fa0; end: 101650fd7;  */

uint FUN_101650fa0(long param_1,long param_2)

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
  func_0x000101658e04();
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



/* Entry: 101650fd8; end: 10165103f;  */

uint FUN_101650fd8(undefined8 *param_1)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
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
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  func_0x00010165553c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 101651040; end: 1016510df;  */

/* WARNING: Possible PIC construction at 0x00010165108c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165109c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101651090) */
/* WARNING: Removing unreachable block (ram,0x0001016510a0) */

void FUN_101651040(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcaf8 != -1) {
    func_0x000107c61568(0x112dbcaf8,FUN_101650acc);
  }
  uVar5 = uRam0000000113802410;
  uVar4 = uRam0000000113802408;
  uVar3 = uRam0000000113802400;
  uVar2 = uRam00000001138023f8;
  uVar1 = uRam00000001138023f0;
  *param_1 = uRam00000001138023e8;
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



/* Entry: 1016510e0; end: 10165111b;  */

void FUN_1016510e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcd98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcd98,&UNK_10d974ee0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165111c; end: 101651247;  */

void FUN_10165111c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101651248; end: 1016512f7;  */

uint FUN_101651248(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
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
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  func_0x00010165553c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1016512f8; end: 1016513a7;  */

void FUN_1016512f8(void)

{
  undefined *puVar1;
  long lVar2;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = 0;
  FUN_101655934();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xe000000000000000;
  FUN_1016559b4(&uStack_120);
  *(undefined8 *)(lVar2 + 0x108) = uStack_58;
  *(undefined8 *)(lVar2 + 0x100) = uStack_60;
  *(undefined8 *)(lVar2 + 0x118) = uStack_48;
  *(undefined8 *)(lVar2 + 0x110) = uStack_50;
  *(undefined8 *)(lVar2 + 0x128) = uStack_38;
  *(undefined8 *)(lVar2 + 0x120) = uStack_40;
  *(undefined8 *)(lVar2 + 200) = uStack_98;
  *(undefined8 *)(lVar2 + 0xc0) = uStack_a0;
  *(undefined8 *)(lVar2 + 0xd8) = uStack_88;
  *(undefined8 *)(lVar2 + 0xd0) = uStack_90;
  *(undefined8 *)(lVar2 + 0xe8) = uStack_78;
  *(undefined8 *)(lVar2 + 0xe0) = uStack_80;
  *(undefined8 *)(lVar2 + 0xf8) = uStack_68;
  *(undefined8 *)(lVar2 + 0xf0) = uStack_70;
  *(undefined8 *)(lVar2 + 0x88) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x80) = uStack_e0;
  *(undefined8 *)(lVar2 + 0x98) = uStack_c8;
  *(undefined8 *)(lVar2 + 0x90) = uStack_d0;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_b8;
  *(undefined8 *)(lVar2 + 0xa0) = uStack_c0;
  *(undefined8 *)(lVar2 + 0xb8) = uStack_a8;
  *(undefined8 *)(lVar2 + 0xb0) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x48) = uStack_118;
  *(undefined8 *)(lVar2 + 0x40) = uStack_120;
  *(undefined8 *)(lVar2 + 0x58) = uStack_108;
  *(undefined8 *)(lVar2 + 0x50) = uStack_110;
  *(undefined8 *)(lVar2 + 0x68) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x60) = uStack_100;
  *(undefined8 *)(lVar2 + 0x78) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_f0;
  *(undefined8 *)(lVar2 + 0x130) = 0;
  *(undefined8 *)(lVar2 + 0x138) = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar2 + 0x140) = 0;
  *(undefined **)(lVar2 + 0x148) = puVar1;
  lRam0000000112dbca60 = lVar2;
  return;
}



/* Entry: 1016513a8; end: 101651703;  */

void FUN_1016513a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [240];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
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
  
  puVar5 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar10 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  FUN_1016559b4(&uStack_340);
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_260;
  *(undefined8 *)(unaff_x20 + 200) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0xe000000000000000;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined **)(unaff_x20 + 0x148) = puVar4;
  func_0x000107c61428(param_1 + 0x10,auStack_358,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61428(puVar10,auStack_370,1,0);
  uVar7 = *puVar10;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *puVar10 = uVar8;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  FUN_101597350(uVar8,uVar1,uVar9,uVar2);
  FUN_101597ae4(uVar7,uVar11,uVar3,uVar6);
  func_0x000107c61428(param_1 + 0x30,auStack_388,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar5,auStack_3a0,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar5 = uVar8;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar11);
  func_0x000107c61428(param_1 + 0x40,auStack_3b8,0,0);
  uStack_188 = *(undefined8 *)(param_1 + 0x108);
  uStack_190 = *(undefined8 *)(param_1 + 0x100);
  uStack_178 = *(undefined8 *)(param_1 + 0x118);
  uStack_180 = *(undefined8 *)(param_1 + 0x110);
  uStack_168 = *(undefined8 *)(param_1 + 0x128);
  uStack_170 = *(undefined8 *)(param_1 + 0x120);
  uStack_1c8 = *(undefined8 *)(param_1 + 200);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_198 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_208 = *(undefined8 *)(param_1 + 0x88);
  uStack_210 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_200 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_248 = *(undefined8 *)(param_1 + 0x48);
  uStack_250 = *(undefined8 *)(param_1 + 0x40);
  uStack_238 = *(undefined8 *)(param_1 + 0x58);
  uStack_240 = *(undefined8 *)(param_1 + 0x50);
  uStack_228 = *(undefined8 *)(param_1 + 0x68);
  uStack_230 = *(undefined8 *)(param_1 + 0x60);
  uStack_218 = *(undefined8 *)(param_1 + 0x78);
  uStack_220 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(unaff_x20 + 0x40,auStack_3d0,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_170;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_220;
  FUN_10165596c(&uStack_250,auStack_4c0,0x112dbca48,&UNK_10d974438);
  FUN_1016559dc(&uStack_160,0x112dbca48,&UNK_10d974438);
  func_0x000107c61428(param_1 + 0x130,auStack_4c0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x130);
  uVar9 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_4d8,1,0);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar11);
  func_0x000107c61428(param_1 + 0x140,auStack_4f0,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x140);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_508,1,0);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar8;
  func_0x000107c61428(param_1 + 0x148,auStack_520,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  func_0x000107c61434(uVar9);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x148,auStack_538,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x20 + 0x148) = uVar9;
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 101651704; end: 10165175b;  */

void FUN_101651704(void)

{
  long unaff_x20;
  
  FUN_101597ae4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1016559dc(unaff_x20 + 0x40,0x112dbca48,&UNK_10d974438);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10165175c; end: 1016517eb;  */

void FUN_10165175c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_101655934(0);
    func_0x000107c613fc();
    FUN_1016513a8(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1016517ec();
  return;
}



/* Entry: 1016517ec; end: 10165196f;  */

/* WARNING: Removing unreachable block (ram,0x00010165190c) */
/* WARNING: Removing unreachable block (ram,0x0001016518bc) */
/* WARNING: Removing unreachable block (ram,0x0001016518f0) */

void FUN_1016517ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  do {
    while( true ) {
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
      if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
        return;
      }
      if (4 < lVar1) break;
      if (lVar1 == 1) {
        FUN_101651970(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 3) {
        func_0x000107c61428(param_1 + 0x30,auStack_58,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar1 = param_1 + 0x30;
LAB_101651844:
        (*pcVar3)(lVar1,param_3,param_4);
        func_0x000107c614a8(auStack_58);
      }
      else if (lVar1 == 4) {
        FUN_101651a04(param_2,param_1,param_3,param_4);
      }
    }
    if (lVar1 == 5) {
      func_0x000107c61428(param_1 + 0x130,auStack_58,0x21,0);
      pcVar3 = *(code **)(param_4 + 0x150);
      lVar1 = param_1 + 0x130;
      goto LAB_101651844;
    }
    if (lVar1 == 6) {
      func_0x000107c61428(param_1 + 0x140,auStack_58,0x21,0);
      pcVar3 = *(code **)(param_4 + 0x60);
      lVar1 = param_1 + 0x140;
      goto LAB_101651844;
    }
    if (lVar1 == 7) {
      FUN_101651a98(param_2,param_1,param_3,param_4);
    }
  } while( true );
}



/* Entry: 101651970; end: 101651a03;  */

void FUN_101651970(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x10,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101651a04; end: 101651a97;  */

void FUN_101651a04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101656030();
  (*pcVar2)(param_2 + 0x40,&UNK_1103ee3d0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101651a98; end: 101651b2b;  */

void FUN_101651a98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x148;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_101656ef8();
  (*pcVar2)(param_2 + 0x148,&UNK_1103ee690,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101651b2c; end: 101651b97;  */

void FUN_101651b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_101651b98(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 101651b98; end: 101651d8f;  */

void FUN_101651b98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_101651d90();
  if (unaff_x21 == 0) {
    func_0x000107c61428(param_1 + 0x30,auStack_68,0,0);
    uVar2 = *(ulong *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x38);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar5)(uVar2,uVar3,3,param_3,param_4);
      func_0x000107c6142c(uVar3);
    }
    FUN_101651e34(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x130,auStack_80,0,0);
    uVar2 = *(ulong *)(param_1 + 0x130);
    uVar3 = *(ulong *)(param_1 + 0x138);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar5)(uVar2,uVar3,5,param_3,param_4);
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c61428(param_1 + 0x140,auStack_98,0,0);
    if (*(long *)(param_1 + 0x140) != 0) {
      (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x140),6,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x148,auStack_b0,0,0);
    lVar4 = *(long *)(param_1 + 0x148);
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_4 + 0x118);
      FUN_101656ef8();
      func_0x000107c61434(lVar4);
      (*pcVar5)();
      func_0x000107c6142c(lVar4);
    }
  }
  return;
}



/* Entry: 101651d90; end: 101651e33;  */

void FUN_101651d90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x18);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,1,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101651e34; end: 101651f8f;  */

void FUN_101651e34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_238 [24];
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
  
  func_0x000107c61428(param_1 + 0x40,auStack_238,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined8 *)(param_1 + 0xf0);
  uStack_158 = *(undefined8 *)(param_1 + 0x108);
  uStack_160 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_148 = *(undefined8 *)(param_1 + 0x118);
  uStack_150 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_138 = *(undefined8 *)(param_1 + 0x128);
  uStack_140 = *(undefined8 *)(param_1 + 0x120);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_198 = *(undefined8 *)(param_1 + 200);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 200);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_188 = *(undefined8 *)(param_1 + 0xd8);
  uStack_190 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_178 = *(undefined8 *)(param_1 + 0xe8);
  uStack_180 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = *(undefined8 *)(param_1 + 0xe0);
  uStack_168 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x88);
  uStack_f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_218 = *(undefined8 *)(param_1 + 0x48);
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  uStack_208 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_128 = *(undefined8 *)(param_1 + 0x48);
  uStack_130 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x68);
  uStack_110 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = *(undefined8 *)(param_1 + 0x128);
  uStack_50 = *(undefined8 *)(param_1 + 0x120);
  puVar1 = &uStack_220;
  FUN_101655954();
  if ((int)puVar1 != 1) {
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_248 = uStack_48;
    uStack_250 = uStack_50;
    uStack_2a8 = uStack_a8;
    uStack_2b0 = uStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    uStack_288 = uStack_88;
    uStack_290 = uStack_90;
    uStack_278 = uStack_78;
    uStack_280 = uStack_80;
    uStack_2e8 = uStack_e8;
    uStack_2f0 = uStack_f0;
    uStack_2d8 = uStack_d8;
    uStack_2e0 = uStack_e0;
    uStack_2c8 = uStack_c8;
    uStack_2d0 = uStack_d0;
    uStack_2b8 = uStack_b8;
    uStack_2c0 = uStack_c0;
    uStack_328 = uStack_128;
    uStack_330 = uStack_130;
    uStack_318 = uStack_118;
    uStack_320 = uStack_120;
    uStack_308 = uStack_108;
    uStack_310 = uStack_110;
    uStack_2f8 = uStack_f8;
    uStack_300 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_101656030();
    (*pcVar2)(&uStack_330,4,&UNK_1103ee3d0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101651f90; end: 10165276f;  */

uint FUN_101651f90(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 auStack_a70 [240];
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_798 [24];
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
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
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
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
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_178,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_190,0,0);
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x18);
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  if (lVar10 == 0) {
    if (lVar3 != 0) goto LAB_101652084;
    FUN_101597350(uVar6,0,uVar9,uVar8);
    FUN_101597350(uVar1,0,uVar2,uVar11);
LAB_1016520fc:
    FUN_101597ae4(uVar6,lVar10,uVar9,uVar8);
    func_0x000107c61428(param_1 + 0x30,auStack_1a8,0,0);
    func_0x000107c61428(param_2 + 0x30,&uStack_5a0,0x20,0);
    uVar6 = *(ulong *)(param_1 + 0x30);
    if ((uVar6 == *(ulong *)(param_2 + 0x30)) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38))) {
      func_0x000107c614a8(&uStack_5a0);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c614a8(&uStack_5a0);
      uVar13 = 0;
      if ((uVar6 & 1) == 0) goto LAB_101652504;
    }
    func_0x000107c61428(param_1 + 0x40,auStack_3a8,0,0);
    func_0x000107c61428(param_2 + 0x40,auStack_3c0,0,0);
    uStack_4e8 = *(undefined8 *)(param_1 + 0xf8);
    uStack_4f0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_2c8 = *(undefined8 *)(param_1 + 0x108);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x100);
    uStack_4d8 = *(undefined8 *)(param_1 + 0x108);
    uStack_4e0 = *(undefined8 *)(param_1 + 0x100);
    uStack_2b8 = *(undefined8 *)(param_1 + 0x118);
    uStack_2c0 = *(undefined8 *)(param_1 + 0x110);
    uStack_4c8 = *(undefined8 *)(param_1 + 0x118);
    uStack_4d0 = *(undefined8 *)(param_1 + 0x110);
    uStack_2a8 = *(undefined8 *)(param_1 + 0x128);
    uStack_2b0 = *(undefined8 *)(param_1 + 0x120);
    uStack_528 = *(undefined8 *)(param_1 + 0xb8);
    uStack_530 = *(undefined8 *)(param_1 + 0xb0);
    uStack_308 = *(undefined8 *)(param_1 + 200);
    uStack_310 = *(undefined8 *)(param_1 + 0xc0);
    uStack_518 = *(undefined8 *)(param_1 + 200);
    uStack_520 = *(undefined8 *)(param_1 + 0xc0);
    uStack_2f8 = *(undefined8 *)(param_1 + 0xd8);
    uStack_300 = *(undefined8 *)(param_1 + 0xd0);
    uStack_508 = *(undefined8 *)(param_1 + 0xd8);
    uStack_510 = *(undefined8 *)(param_1 + 0xd0);
    uStack_2e8 = *(undefined8 *)(param_1 + 0xe8);
    uStack_2f0 = *(undefined8 *)(param_1 + 0xe0);
    uStack_4f8 = *(undefined8 *)(param_1 + 0xe8);
    uStack_500 = *(undefined8 *)(param_1 + 0xe0);
    uStack_2d8 = *(undefined8 *)(param_1 + 0xf8);
    uStack_2e0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_568 = *(undefined8 *)(param_1 + 0x78);
    uStack_570 = *(undefined8 *)(param_1 + 0x70);
    uStack_348 = *(undefined8 *)(param_1 + 0x88);
    uStack_350 = *(undefined8 *)(param_1 + 0x80);
    uStack_558 = *(undefined8 *)(param_1 + 0x88);
    uStack_560 = *(undefined8 *)(param_1 + 0x80);
    uStack_338 = *(undefined8 *)(param_1 + 0x98);
    uStack_340 = *(undefined8 *)(param_1 + 0x90);
    uStack_548 = *(undefined8 *)(param_1 + 0x98);
    uStack_550 = *(undefined8 *)(param_1 + 0x90);
    uStack_328 = *(undefined8 *)(param_1 + 0xa8);
    uStack_330 = *(undefined8 *)(param_1 + 0xa0);
    uStack_538 = *(undefined8 *)(param_1 + 0xa8);
    uStack_540 = *(undefined8 *)(param_1 + 0xa0);
    uStack_318 = *(undefined8 *)(param_1 + 0xb8);
    uStack_320 = *(undefined8 *)(param_1 + 0xb0);
    uStack_388 = *(undefined8 *)(param_1 + 0x48);
    uStack_390 = *(undefined8 *)(param_1 + 0x40);
    uStack_378 = *(undefined8 *)(param_1 + 0x58);
    uStack_380 = *(undefined8 *)(param_1 + 0x50);
    uStack_368 = *(undefined8 *)(param_1 + 0x68);
    uStack_370 = *(undefined8 *)(param_1 + 0x60);
    uStack_358 = *(undefined8 *)(param_1 + 0x78);
    uStack_360 = *(undefined8 *)(param_1 + 0x70);
    uStack_598 = *(undefined8 *)(param_1 + 0x48);
    uStack_5a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_588 = *(undefined8 *)(param_1 + 0x58);
    uStack_590 = *(undefined8 *)(param_1 + 0x50);
    uStack_578 = *(undefined8 *)(param_1 + 0x68);
    uStack_580 = *(undefined8 *)(param_1 + 0x60);
    uStack_3f8 = *(undefined8 *)(param_2 + 0xf8);
    uStack_400 = *(undefined8 *)(param_2 + 0xf0);
    uStack_1d8 = *(undefined8 *)(param_2 + 0x108);
    uStack_1e0 = *(undefined8 *)(param_2 + 0x100);
    uStack_3e8 = *(undefined8 *)(param_2 + 0x108);
    uStack_3f0 = *(undefined8 *)(param_2 + 0x100);
    uStack_1c8 = *(undefined8 *)(param_2 + 0x118);
    uStack_1d0 = *(undefined8 *)(param_2 + 0x110);
    uStack_3d8 = *(undefined8 *)(param_2 + 0x118);
    uStack_3e0 = *(undefined8 *)(param_2 + 0x110);
    uStack_1b8 = *(undefined8 *)(param_2 + 0x128);
    uStack_1c0 = *(undefined8 *)(param_2 + 0x120);
    uStack_438 = *(undefined8 *)(param_2 + 0xb8);
    uStack_440 = *(undefined8 *)(param_2 + 0xb0);
    uStack_218 = *(undefined8 *)(param_2 + 200);
    uStack_220 = *(undefined8 *)(param_2 + 0xc0);
    uStack_428 = *(undefined8 *)(param_2 + 200);
    uStack_430 = *(undefined8 *)(param_2 + 0xc0);
    uStack_208 = *(undefined8 *)(param_2 + 0xd8);
    uStack_210 = *(undefined8 *)(param_2 + 0xd0);
    uStack_418 = *(undefined8 *)(param_2 + 0xd8);
    uStack_420 = *(undefined8 *)(param_2 + 0xd0);
    uStack_1f8 = *(undefined8 *)(param_2 + 0xe8);
    uStack_200 = *(undefined8 *)(param_2 + 0xe0);
    uStack_408 = *(undefined8 *)(param_2 + 0xe8);
    uStack_410 = *(undefined8 *)(param_2 + 0xe0);
    uStack_1e8 = *(undefined8 *)(param_2 + 0xf8);
    uStack_1f0 = *(undefined8 *)(param_2 + 0xf0);
    uStack_478 = *(undefined8 *)(param_2 + 0x78);
    uStack_480 = *(undefined8 *)(param_2 + 0x70);
    uStack_258 = *(undefined8 *)(param_2 + 0x88);
    uStack_260 = *(undefined8 *)(param_2 + 0x80);
    uStack_468 = *(undefined8 *)(param_2 + 0x88);
    uStack_470 = *(undefined8 *)(param_2 + 0x80);
    uStack_248 = *(undefined8 *)(param_2 + 0x98);
    uStack_250 = *(undefined8 *)(param_2 + 0x90);
    uStack_458 = *(undefined8 *)(param_2 + 0x98);
    uStack_460 = *(undefined8 *)(param_2 + 0x90);
    uStack_238 = *(undefined8 *)(param_2 + 0xa8);
    uStack_240 = *(undefined8 *)(param_2 + 0xa0);
    uStack_448 = *(undefined8 *)(param_2 + 0xa8);
    uStack_450 = *(undefined8 *)(param_2 + 0xa0);
    uStack_228 = *(undefined8 *)(param_2 + 0xb8);
    uStack_230 = *(undefined8 *)(param_2 + 0xb0);
    uStack_298 = *(undefined8 *)(param_2 + 0x48);
    uStack_2a0 = *(undefined8 *)(param_2 + 0x40);
    uStack_288 = *(undefined8 *)(param_2 + 0x58);
    uStack_290 = *(undefined8 *)(param_2 + 0x50);
    uStack_278 = *(undefined8 *)(param_2 + 0x68);
    uStack_280 = *(undefined8 *)(param_2 + 0x60);
    uStack_268 = *(undefined8 *)(param_2 + 0x78);
    uStack_270 = *(undefined8 *)(param_2 + 0x70);
    uStack_4a8 = *(undefined8 *)(param_2 + 0x48);
    uStack_4b0 = *(undefined8 *)(param_2 + 0x40);
    uStack_498 = *(undefined8 *)(param_2 + 0x58);
    uStack_4a0 = *(undefined8 *)(param_2 + 0x50);
    uStack_488 = *(undefined8 *)(param_2 + 0x68);
    uStack_490 = *(undefined8 *)(param_2 + 0x60);
    uStack_3c8 = *(undefined8 *)(param_2 + 0x128);
    uStack_3d0 = *(undefined8 *)(param_2 + 0x120);
    uStack_4b8 = *(undefined8 *)(param_1 + 0x128);
    uStack_4c0 = *(undefined8 *)(param_1 + 0x120);
    iVar4 = (int)&uStack_5a0;
    FUN_101655954();
    if (iVar4 == 1) {
      iVar4 = (int)&uStack_4b0;
      FUN_101655954();
      if (iVar4 == 1) {
        uStack_6b8 = uStack_4d8;
        uStack_6c0 = uStack_4e0;
        uStack_6a8 = uStack_4c8;
        uStack_6b0 = uStack_4d0;
        uStack_698 = uStack_4b8;
        uStack_6a0 = uStack_4c0;
        uStack_6f8 = uStack_518;
        uStack_700 = uStack_520;
        uStack_6e8 = uStack_508;
        uStack_6f0 = uStack_510;
        uStack_6d8 = uStack_4f8;
        uStack_6e0 = uStack_500;
        uStack_6c8 = uStack_4e8;
        uStack_6d0 = uStack_4f0;
        uStack_738 = uStack_558;
        uStack_740 = uStack_560;
        uStack_728 = uStack_548;
        uStack_730 = uStack_550;
        uStack_718 = uStack_538;
        uStack_720 = uStack_540;
        uStack_708 = uStack_528;
        uStack_710 = uStack_530;
        uStack_778 = uStack_598;
        uStack_780 = uStack_5a0;
        uStack_768 = uStack_588;
        uStack_770 = uStack_590;
        uStack_758 = uStack_578;
        uStack_760 = uStack_580;
        uStack_748 = uStack_568;
        uStack_750 = uStack_570;
        FUN_10165596c(&uStack_390,&uStack_160,0x112dbca48,&UNK_10d974438);
        FUN_10165596c(&uStack_2a0,&uStack_160,0x112dbca48,&UNK_10d974438);
        FUN_1016559dc(&uStack_780,0x112dbca48,&UNK_10d974438);
LAB_101652670:
        func_0x000107c61428(param_1 + 0x130,&uStack_5a0,0,0);
        func_0x000107c61428(param_2 + 0x130,&uStack_890,0x20,0);
        uVar6 = *(ulong *)(param_1 + 0x130);
        if ((uVar6 == *(ulong *)(param_2 + 0x130)) &&
           (*(long *)(param_1 + 0x138) == *(long *)(param_2 + 0x138))) {
          func_0x000107c614a8(&uStack_890);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(&uStack_890);
          if ((uVar6 & 1) == 0) goto LAB_101652500;
        }
        func_0x000107c61428(param_1 + 0x140,&uStack_890,0,0);
        lVar10 = *(long *)(param_1 + 0x140);
        func_0x000107c61428(param_2 + 0x140,&uStack_980,0,0);
        if (lVar10 == *(long *)(param_2 + 0x140)) {
          func_0x000107c61428(param_1 + 0x148,auStack_a70,0,0);
          uVar11 = *(undefined8 *)(param_1 + 0x148);
          func_0x000107c61428(param_2 + 0x148,auStack_798,0,0);
          uVar12 = *(undefined8 *)(param_2 + 0x148);
          func_0x000107c61434(uVar11);
          func_0x000107c61434(uVar12);
          uVar8 = uVar11;
          func_0x000101654f68(uVar11,uVar12);
          uVar13 = (uint)uVar8;
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar12);
          goto LAB_101652504;
        }
      }
      else {
LAB_10165244c:
        func_0x000107c610b4(&uStack_780,&uStack_5a0,0x1e0);
        FUN_10165596c(&uStack_390,&uStack_160,0x112dbca48,&UNK_10d974438);
        FUN_10165596c(&uStack_2a0,&uStack_160,0x112dbca48,&UNK_10d974438);
        FUN_1016559dc(&uStack_780,0x112dbca50,&UNK_10d974440);
      }
    }
    else {
      uStack_7c8 = uStack_4d8;
      uStack_7d0 = uStack_4e0;
      uStack_7b8 = uStack_4c8;
      uStack_7c0 = uStack_4d0;
      uStack_7a8 = uStack_4b8;
      uStack_7b0 = uStack_4c0;
      uStack_808 = uStack_518;
      uStack_810 = uStack_520;
      uStack_7f8 = uStack_508;
      uStack_800 = uStack_510;
      uStack_7e8 = uStack_4f8;
      uStack_7f0 = uStack_500;
      uStack_7d8 = uStack_4e8;
      uStack_7e0 = uStack_4f0;
      uStack_848 = uStack_558;
      uStack_850 = uStack_560;
      uStack_838 = uStack_548;
      uStack_840 = uStack_550;
      uStack_828 = uStack_538;
      uStack_830 = uStack_540;
      uStack_818 = uStack_528;
      uStack_820 = uStack_530;
      uStack_888 = uStack_598;
      uStack_890 = uStack_5a0;
      uStack_878 = uStack_588;
      uStack_880 = uStack_590;
      uStack_868 = uStack_578;
      uStack_870 = uStack_580;
      uStack_858 = uStack_568;
      uStack_860 = uStack_570;
      iVar4 = (int)&uStack_4b0;
      FUN_101655954();
      if (iVar4 == 1) goto LAB_10165244c;
      uStack_8b8 = uStack_3e8;
      uStack_8c0 = uStack_3f0;
      uStack_8a8 = uStack_3d8;
      uStack_8b0 = uStack_3e0;
      uStack_898 = uStack_3c8;
      uStack_8a0 = uStack_3d0;
      uStack_8f8 = uStack_428;
      uStack_900 = uStack_430;
      uStack_8e8 = uStack_418;
      uStack_8f0 = uStack_420;
      uStack_8d8 = uStack_408;
      uStack_8e0 = uStack_410;
      uStack_8c8 = uStack_3f8;
      uStack_8d0 = uStack_400;
      uStack_938 = uStack_468;
      uStack_940 = uStack_470;
      uStack_928 = uStack_458;
      uStack_930 = uStack_460;
      uStack_918 = uStack_448;
      uStack_920 = uStack_450;
      uStack_908 = uStack_438;
      uStack_910 = uStack_440;
      uStack_978 = uStack_4a8;
      uStack_980 = uStack_4b0;
      uStack_968 = uStack_498;
      uStack_970 = uStack_4a0;
      uStack_958 = uStack_488;
      uStack_960 = uStack_490;
      uStack_948 = uStack_478;
      uStack_950 = uStack_480;
      uStack_6b8 = uStack_3e8;
      uStack_6c0 = uStack_3f0;
      uStack_6a8 = uStack_3d8;
      uStack_6b0 = uStack_3e0;
      uStack_698 = uStack_3c8;
      uStack_6a0 = uStack_3d0;
      uStack_6f8 = uStack_428;
      uStack_700 = uStack_430;
      uStack_6e8 = uStack_418;
      uStack_6f0 = uStack_420;
      uStack_6d8 = uStack_408;
      uStack_6e0 = uStack_410;
      uStack_6c8 = uStack_3f8;
      uStack_6d0 = uStack_400;
      uStack_738 = uStack_468;
      uStack_740 = uStack_470;
      uStack_728 = uStack_458;
      uStack_730 = uStack_460;
      uStack_718 = uStack_448;
      uStack_720 = uStack_450;
      uStack_708 = uStack_438;
      uStack_710 = uStack_440;
      uStack_778 = uStack_4a8;
      uStack_780 = uStack_4b0;
      uStack_768 = uStack_498;
      uStack_770 = uStack_4a0;
      uStack_758 = uStack_488;
      uStack_760 = uStack_490;
      uStack_748 = uStack_478;
      uStack_750 = uStack_480;
      uStack_98 = uStack_7c8;
      uStack_a0 = uStack_7d0;
      uStack_88 = uStack_7b8;
      uStack_90 = uStack_7c0;
      uStack_78 = uStack_7a8;
      uStack_80 = uStack_7b0;
      uStack_d8 = uStack_808;
      uStack_e0 = uStack_810;
      uStack_c8 = uStack_7f8;
      uStack_d0 = uStack_800;
      uStack_a8 = uStack_7d8;
      uStack_b0 = uStack_7e0;
      uStack_b8 = uStack_7e8;
      uStack_c0 = uStack_7f0;
      uStack_118 = uStack_848;
      uStack_120 = uStack_850;
      uStack_108 = uStack_838;
      uStack_110 = uStack_840;
      uStack_e8 = uStack_818;
      uStack_f0 = uStack_820;
      uStack_f8 = uStack_828;
      uStack_100 = uStack_830;
      uStack_158 = uStack_888;
      uStack_160 = uStack_890;
      uStack_148 = uStack_878;
      uStack_150 = uStack_880;
      uStack_128 = uStack_858;
      uStack_130 = uStack_860;
      uStack_138 = uStack_868;
      uStack_140 = uStack_870;
      FUN_10165596c(&uStack_390,auStack_a70,0x112dbca48,&UNK_10d974438);
      FUN_10165596c(&uStack_2a0,auStack_a70,0x112dbca48,&UNK_10d974438);
      puVar7 = &uStack_160;
      FUN_101655a1c(puVar7,&uStack_780);
      FUN_1016559dc(&uStack_980,0x112dbca48,&UNK_10d974438);
      FUN_1016559dc(&uStack_5a0,0x112dbca48,&UNK_10d974438);
      if (((ulong)puVar7 & 1) != 0) goto LAB_101652670;
    }
  }
  else {
    if (lVar3 == 0) {
LAB_101652084:
      FUN_101597350(uVar6,lVar10,uVar9,uVar8);
      FUN_101597350(uVar1,lVar3,uVar2,uVar11);
      FUN_101597ae4(uVar6,lVar10,uVar9,uVar8);
      uVar6 = uVar1;
      lVar10 = lVar3;
      uVar9 = uVar2;
      uVar8 = uVar11;
    }
    else if ((uVar6 == uVar1 && lVar10 == lVar3) ||
            (uVar5 = uVar6, func_0x000107c605b8(uVar6,lVar10,uVar1,lVar3,0), (uVar5 & 1) != 0)) {
      FUN_101597350(uVar6,lVar10,uVar9,uVar8);
      FUN_101597350(uVar1,lVar3,uVar2,uVar11);
      uVar5 = uVar9;
      FUN_100e25fcc(uVar9,uVar8,uVar2,uVar11);
      FUN_101597ae4(uVar1,lVar3,uVar2,uVar11);
      if ((uVar5 & 1) != 0) goto LAB_1016520fc;
    }
    else {
      FUN_101597350(uVar6,lVar10,uVar9,uVar8);
      FUN_101597350(uVar1,lVar3,uVar2,uVar11);
      FUN_101597ae4(uVar1,lVar3,uVar2,uVar11);
    }
    FUN_101597ae4(uVar6,lVar10,uVar9,uVar8);
  }
LAB_101652500:
  uVar13 = 0;
LAB_101652504:
  return uVar13 & 1;
}



/* Entry: 101652770; end: 1016527cf;  */

void FUN_101652770(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112dbca58 != -1) {
    func_0x000107c61568(0x112dbca58,FUN_1016512f8);
  }
  uVar1 = uRam0000000112dbca60;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016527d0; end: 1016527f3;  */

undefined1  [16] FUN_1016527d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb3f40;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 1016527f4; end: 101652823;  */

undefined1  [16] FUN_1016527f4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101652824; end: 101652857;  */

void FUN_101652824(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101652858; end: 10165286b;  */

undefined8 FUN_101652858(void)

{
  return 0x101652868;
}



/* Entry: 10165286c; end: 1016528a3;  */

void FUN_10165286c(void)

{
  FUN_10165175c();
  return;
}



/* Entry: 1016528a4; end: 1016528a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016528a4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016528a8; end: 1016528df;  */

uint FUN_1016528a8(long param_1,long param_2)

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
  func_0x000101658dc4();
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



/* Entry: 1016528e0; end: 101652987;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016528e0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_101651f90(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101652988; end: 101652a27;  */

/* WARNING: Possible PIC construction at 0x0001016529d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016529e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016529d8) */
/* WARNING: Removing unreachable block (ram,0x0001016529e8) */

void FUN_101652988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcb08 != -1) {
    func_0x000107c61568(0x112dbcb08,0x1016512b0);
  }
  uVar5 = uRam0000000113802440;
  uVar4 = uRam0000000113802438;
  uVar3 = uRam0000000113802430;
  uVar2 = uRam0000000113802428;
  uVar1 = uRam0000000113802420;
  *param_1 = uRam0000000113802418;
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



/* Entry: 101652a28; end: 101652a63;  */

void FUN_101652a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcd88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcd88,&UNK_10d974ed8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101652a64; end: 101652b67;  */

void FUN_101652a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101652b68; end: 101652c0f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101652b68(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_101651f90(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 101652c10; end: 101652c83;  */

void FUN_101652c10(void)

{
  func_0x000107c5fb78(0x746375646f72502e,0xee006e6f6974704f);
  uRam0000000113802448 = 0xd000000000000029;
  uRam0000000113802450 = 0x800000010efb3f40;
  return;
}



/* Entry: 101652c84; end: 101652ccb;  */

void FUN_101652c84(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d974f50,0x1e,2);
  uRam0000000113802460 = uStack_38;
  uRam0000000113802458 = uStack_40;
  uRam0000000113802470 = uStack_28;
  uRam0000000113802468 = uStack_30;
  uRam0000000113802480 = uStack_18;
  uRam0000000113802478 = uStack_20;
  return;
}



/* Entry: 101652ccc; end: 101652d9b;  */

void FUN_101652ccc(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
    else if (lVar1 == 2) {
      pcVar4 = *(code **)(param_3 + 0x1a0);
      (*param_4)();
      (*pcVar4)(unaff_x20 + 0x10,param_5,lVar1,param_2,param_3);
    }
  }
  return;
}



/* Entry: 101652d9c; end: 101652e6b;  */

void FUN_101652d9c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      (*param_4)();
      (*pcVar4)(uVar3,2,param_5,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 101652e6c; end: 101652ea7;  */

undefined1  [16] FUN_101652e6c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112dbcb18 != -1) {
    func_0x000107c61568(0x112dbcb18,FUN_101652c10);
  }
  auVar1._8_8_ = uRam0000000113802450;
  auVar1._0_8_ = uRam0000000113802448;
  func_0x000107c61434(uRam0000000113802450);
  return auVar1;
}


