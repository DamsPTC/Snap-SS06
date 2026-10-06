/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d96d18; end: 103d96d4f;  */

uint FUN_103d96d18(long param_1,long param_2)

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
  func_0x000103da2324();
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



/* Entry: 103d96d50; end: 103d96d97;  */

uint FUN_103d96d50(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_103d98b34(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d96d98; end: 103d96e37;  */

/* WARNING: Possible PIC construction at 0x000103d96de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d96df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d96de8) */
/* WARNING: Removing unreachable block (ram,0x000103d96df8) */

void FUN_103d96d98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008998 != -1) {
    func_0x000107c61568(0x113008998,FUN_103d96ac0);
  }
  uVar5 = uRam0000000113811ed8;
  uVar4 = uRam0000000113811ed0;
  uVar3 = uRam0000000113811ec8;
  uVar2 = uRam0000000113811ec0;
  uVar1 = uRam0000000113811eb8;
  *param_1 = uRam0000000113811eb0;
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



/* Entry: 103d96e38; end: 103d96e4b;  */

void FUN_103d96e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130090d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130090d8,&UNK_10dc8fa18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d96e4c; end: 103d96e7f;  */

void FUN_103d96e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d96e80; end: 103d96fa3;  */

void FUN_103d96e80(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d96fa4; end: 103d97033;  */

uint FUN_103d96fa4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_103d98b34(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d97034; end: 103d970d3;  */

/* WARNING: Possible PIC construction at 0x000103d97080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d97090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d97084) */
/* WARNING: Removing unreachable block (ram,0x000103d97094) */

void FUN_103d97034(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130089b0 != -1) {
    func_0x000107c61568(0x1130089b0,0x103d96fec);
  }
  uVar5 = uRam0000000113811f08;
  uVar4 = uRam0000000113811f00;
  uVar3 = uRam0000000113811ef8;
  uVar2 = uRam0000000113811ef0;
  uVar1 = uRam0000000113811ee8;
  *param_1 = uRam0000000113811ee0;
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



/* Entry: 103d970d4; end: 103d9711b;  */

void FUN_103d970d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc8fad0,0x33,2);
  uRam0000000113811f18 = uStack_38;
  uRam0000000113811f10 = uStack_40;
  uRam0000000113811f28 = uStack_28;
  uRam0000000113811f20 = uStack_30;
  uRam0000000113811f38 = uStack_18;
  uRam0000000113811f30 = uStack_20;
  return;
}



/* Entry: 103d9711c; end: 103d971c7;  */

void FUN_103d9711c(undefined8 param_1,long param_2,long param_3)

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
      goto LAB_103d97158;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_103d97158:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103d97158;
}



/* Entry: 103d971c8; end: 103d9729b;  */

void FUN_103d971c8(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d9729c; end: 103d972df;  */

void FUN_103d9729c(undefined8 *param_1)

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



/* Entry: 103d972e0; end: 103d9730f;  */

undefined1  [16] FUN_103d972e0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 103d97310; end: 103d97343;  */

void FUN_103d97310(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 103d97344; end: 103d97357;  */

undefined1  [16] FUN_103d97344(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x103d97354;
  return auVar1;
}



/* Entry: 103d97358; end: 103d9737f;  */

void FUN_103d97358(void)

{
  FUN_103d9711c();
  return;
}



/* Entry: 103d97380; end: 103d973b7;  */

uint FUN_103d97380(long param_1,long param_2)

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
  FUN_103da22e4();
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



/* Entry: 103d973b8; end: 103d973ff;  */

uint FUN_103d973b8(undefined8 *param_1)

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
  FUN_103d9b154(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d97400; end: 103d9749f;  */

/* WARNING: Possible PIC construction at 0x000103d9744c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d9745c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d97450) */
/* WARNING: Removing unreachable block (ram,0x000103d97460) */

void FUN_103d97400(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130089b8 != -1) {
    func_0x000107c61568(0x1130089b8,FUN_103d970d4);
  }
  uVar5 = uRam0000000113811f38;
  uVar4 = uRam0000000113811f30;
  uVar3 = uRam0000000113811f28;
  uVar2 = uRam0000000113811f20;
  uVar1 = uRam0000000113811f18;
  *param_1 = uRam0000000113811f10;
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



/* Entry: 103d974a0; end: 103d974b3;  */

void FUN_103d974a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130090c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130090c8,&UNK_10dc8fa10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d974b4; end: 103d974e7;  */

void FUN_103d974b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d974e8; end: 103d975eb;  */

void FUN_103d974e8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d975ec; end: 103d97633;  */

uint FUN_103d975ec(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d9b154(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d97634; end: 103d97d47;  */

undefined8 FUN_103d97634(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar13 != 0) && (param_1 != param_2)) {
    puVar16 = (undefined8 *)(param_2 + 0x50);
    plVar15 = (long *)(param_1 + 0x28);
    while( true ) {
      uVar10 = plVar15[-1];
      lVar4 = *plVar15;
      uVar11 = plVar15[1];
      lVar5 = plVar15[2];
      uVar1 = plVar15[3];
      uVar6 = plVar15[4];
      lVar14 = plVar15[5];
      lVar7 = puVar16[-5];
      uVar2 = puVar16[-4];
      lVar8 = puVar16[-3];
      uVar3 = puVar16[-2];
      uVar9 = puVar16[-1];
      uVar12 = *puVar16;
      if ((((uVar10 != puVar16[-6]) || (lVar4 != lVar7)) &&
          (func_0x000107c605b8(uVar10,lVar4,puVar16[-6],lVar7,0), (uVar10 & 1) == 0)) ||
         (((uVar11 != uVar2 || (lVar5 != lVar8)) &&
          (func_0x000107c605b8(uVar11,lVar5,uVar2,lVar8,0), (uVar11 & 1) == 0)))) {
        return 0;
      }
      func_0x000107c61434(lVar4);
      func_0x000107c61434(lVar5);
      func_0x000107c61434(uVar1);
      func_0x00010006c00c(uVar6,lVar14);
      func_0x000107c61434(lVar7);
      func_0x000107c61434(lVar8);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar9,uVar12);
      uVar10 = uVar1;
      func_0x000103d97868(uVar1,uVar3);
      if ((uVar10 & 1) == 0) {
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(lVar7);
        func_0x00010006c090(uVar9,uVar12);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar5);
        func_0x000107c6142c(lVar4);
        func_0x00010006c090(uVar6,lVar14);
        return 0;
      }
      uVar10 = uVar6;
      func_0x000100e25fcc(uVar6,lVar14,uVar9,uVar12);
      func_0x000107c6142c(uVar3);
      func_0x000107c6142c(lVar8);
      func_0x000107c6142c(lVar7);
      func_0x00010006c090(uVar9,uVar12);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
      func_0x00010006c090(uVar6,lVar14);
      if ((uVar10 & 1) == 0) break;
      puVar16 = puVar16 + 7;
      plVar15 = plVar15 + 7;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



/* Entry: 103d97d48; end: 103d97e77;  */

uint FUN_103d97d48(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_278 [184];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x11];
        uStack_140 = puVar4[0x10];
        uStack_128 = puVar4[0x13];
        uStack_130 = puVar4[0x12];
        uStack_118 = puVar4[0x15];
        uStack_120 = puVar4[0x14];
        uStack_110 = puVar4[0x16];
        uStack_178 = puVar4[9];
        uStack_180 = puVar4[8];
        uStack_168 = puVar4[0xb];
        uStack_170 = puVar4[10];
        uStack_158 = puVar4[0xd];
        uStack_160 = puVar4[0xc];
        uStack_148 = puVar4[0xf];
        uStack_150 = puVar4[0xe];
        uStack_1b8 = puVar4[1];
        uStack_1c0 = *puVar4;
        uStack_1a8 = puVar4[3];
        uStack_1b0 = puVar4[2];
        uStack_198 = puVar4[5];
        uStack_1a0 = puVar4[4];
        uStack_188 = puVar4[7];
        uStack_190 = puVar4[6];
        uStack_78 = puVar5[0x11];
        uStack_80 = puVar5[0x10];
        uStack_68 = puVar5[0x13];
        uStack_70 = puVar5[0x12];
        uStack_58 = puVar5[0x15];
        uStack_60 = puVar5[0x14];
        uStack_50 = puVar5[0x16];
        uStack_b8 = puVar5[9];
        uStack_c0 = puVar5[8];
        uStack_a8 = puVar5[0xb];
        uStack_b0 = puVar5[10];
        uStack_98 = puVar5[0xd];
        uStack_a0 = puVar5[0xc];
        uStack_88 = puVar5[0xf];
        uStack_90 = puVar5[0xe];
        uStack_f8 = puVar5[1];
        uStack_100 = *puVar5;
        uStack_e8 = puVar5[3];
        uStack_f0 = puVar5[2];
        uStack_d8 = puVar5[5];
        uStack_e0 = puVar5[4];
        uStack_c8 = puVar5[7];
        uStack_d0 = puVar5[6];
        func_0x000103da29d4(&uStack_1c0,auStack_278);
        func_0x000103da29d4(&uStack_100,auStack_278);
        puVar1 = &uStack_1c0;
        func_0x000103d9953c(puVar1,&uStack_100);
        uVar3 = (uint)puVar1;
        func_0x000103da2a08(&uStack_100);
        func_0x000103da2a08(&uStack_1c0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x17;
        puVar4 = puVar4 + 0x17;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103d97e78; end: 103d97f27;  */

undefined8 FUN_103d97e78(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
        if (lVar5 < 2) {
          if (lVar5 == 0) {
            if (lVar4 != 0) {
              return 0;
            }
          }
          else if (lVar4 != 1) {
            return 0;
          }
        }
        else if (lVar5 == 2) {
          if (lVar4 != 2) {
            return 0;
          }
        }
        else if (lVar5 == 3) {
          if (lVar4 != 3) {
            return 0;
          }
        }
        else if (lVar4 != 4) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 103d97f28; end: 103d985cb;  */

ulong FUN_103d97f28(ulong param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == param_2) {
    uVar17 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar17 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uStack_90 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uStack_90 = ~(-1L << (uVar17 & 0x3f));
      }
      uStack_90 = uStack_90 & *(ulong *)(param_1 + 0x40);
      func_0x000107c61438(param_1,2);
      func_0x000107c61434(param_2);
      lVar7 = 0;
LAB_103d97fd0:
      do {
        if (uStack_90 == 0) {
          do {
            lVar11 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985a8);
              (*pcVar6)();
            }
            if ((long)(uVar17 + 0x3f >> 6) <= lVar11) goto LAB_103d984b8;
            uStack_90 = ((ulong *)(param_1 + 0x40))[lVar11];
            lVar7 = lVar7 + 1;
          } while (uStack_90 == 0);
          uVar13 = (uStack_90 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_90 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
          uStack_90 = uStack_90 - 1 & uStack_90;
        }
        else {
          uVar13 = (uStack_90 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_90 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
          uStack_90 = uStack_90 - 1 & uStack_90;
          lVar11 = lVar7;
        }
        uVar14 = LZCOUNT(uVar13) | lVar11 << 6;
        plVar15 = (long *)(*(long *)(param_1 + 0x30) + uVar14 * 0x10);
        lVar7 = *plVar15;
        uVar13 = plVar15[1];
        plVar15 = (long *)(*(long *)(param_1 + 0x38) + uVar14 * 0x18);
        lVar1 = *plVar15;
        uVar14 = plVar15[1];
        uVar21 = plVar15[2];
        func_0x000107c61434(uVar13);
        func_0x00010006c00c(lVar1,uVar14);
        func_0x000107c6157c(uVar21);
        if (uVar13 == 0) {
LAB_103d984b8:
          func_0x000107c6142c(param_2);
          param_2 = 2;
          func_0x000107c61430(param_1,2);
          uVar17 = 1;
          goto LAB_103d9856c;
        }
        uVar23 = uVar13;
        func_0x000100029284();
        func_0x000107c6142c(uVar13);
        if ((uVar23 & 1) == 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c61430(param_1,2);
LAB_103d98554:
          func_0x00010006c090(lVar1,uVar14);
          param_2 = uVar14;
LAB_103d98564:
          func_0x000107c61574(uVar21);
          goto LAB_103d98568;
        }
        plVar15 = (long *)(*(long *)(param_2 + 0x38) + lVar7 * 0x18);
        lVar9 = *plVar15;
        uVar13 = plVar15[1];
        uVar23 = plVar15[2];
        func_0x00010006c00c(lVar9,uVar13);
        func_0x000107c6157c(uVar23);
        if (uVar23 != uVar21) {
          func_0x000107c6157c(uVar23);
          func_0x000107c6157c(uVar21);
          uVar19 = uVar23;
          FUN_103d94354(uVar23,uVar21);
          func_0x000107c61574(uVar21);
          func_0x000107c61574(uVar23);
          if ((uVar19 & 1) == 0) {
            func_0x000107c6142c(param_2);
            func_0x000107c61430(param_1,2);
            func_0x00010006c090(lVar9,uVar13);
            func_0x000107c61574(uVar23);
            goto LAB_103d98554;
          }
        }
        uVar4 = (uint)(uVar14 >> 0x20);
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar12 = uVar5 >> 0x1e;
        iVar22 = (int)lVar9;
        lVar7 = lVar11;
        if (uVar13 >> 0x3e == 3) {
          if ((lVar9 != 0 || uVar13 != 0xc000000000000000) || uVar14 >> 0x3e < 3) {
            uVar19 = 0;
            goto joined_r0x000103d98154;
          }
          if (lVar1 != 0 || uVar14 != 0xc000000000000000) goto LAB_103d9819c;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(uVar21);
          lVar9 = 0;
          uVar13 = 0xc000000000000000;
LAB_103d98318:
          func_0x00010006c090(lVar9,uVar13);
          func_0x000107c61574(uVar23);
          goto LAB_103d97fd0;
        }
        if (uVar5 >> 0x1e < 2) {
          if (uVar12 == 0) {
            uVar19 = uVar13 >> 0x30 & 0xff;
          }
          else {
            iVar16 = (int)((ulong)lVar9 >> 0x20);
            if (SBORROW4(iVar16,iVar22)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985b4);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar16 - iVar22);
          }
joined_r0x000103d98154:
          if (uVar4 >> 0x1e < 2) goto LAB_103d98190;
LAB_103d98124:
          if (uVar4 >> 0x1e == 2) {
            uVar18 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
            if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985b0);
              (*pcVar6)();
            }
            goto LAB_103d981c4;
          }
          if (uVar19 == 0) goto LAB_103d98284;
LAB_103d984ec:
          func_0x000107c6142c(param_2);
          func_0x000107c61430(param_1,2);
          func_0x00010006c090(lVar1,uVar14);
          func_0x000107c61574(uVar21);
          func_0x00010006c090(lVar9,uVar13);
          uVar21 = uVar23;
          param_2 = uVar13;
          goto LAB_103d98564;
        }
        if (uVar12 == 2) {
          uVar19 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
          if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985b8);
            (*pcVar6)();
          }
          goto joined_r0x000103d98154;
        }
LAB_103d9819c:
        uVar19 = 0;
        if (1 < uVar4 >> 0x1e) goto LAB_103d98124;
LAB_103d98190:
        if (uVar4 >> 0x1e == 0) {
          uVar18 = uVar14 >> 0x30 & 0xff;
        }
        else {
          iVar16 = (int)((ulong)lVar1 >> 0x20);
          if (SBORROW4(iVar16,(int)lVar1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985ac);
            (*pcVar6)();
          }
          uVar18 = (ulong)(iVar16 - (int)lVar1);
        }
LAB_103d981c4:
        if (uVar19 != uVar18) goto LAB_103d984ec;
        if ((long)uVar19 < 1) {
LAB_103d98284:
          func_0x00010006c090(lVar1,uVar14);
          func_0x000107c61574(uVar21);
          goto LAB_103d98318;
        }
        if (uVar12 < 2) {
          if (uVar12 != 0) {
            lVar20 = (long)iVar22;
            lVar3 = (lVar9 >> 0x20) - lVar20;
            if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985bc);
              (*pcVar6)();
            }
            lVar10 = lVar1;
            func_0x000107c5ec30();
            if (lVar10 == 0) {
              func_0x000107c5ec38();
              lVar10 = 0;
            }
            else {
              lVar11 = lVar10;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar20,lVar11)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985c8);
                (*pcVar6)();
              }
              lVar10 = (lVar20 - lVar11) + lVar10;
              func_0x000107c5ec38();
              if (lVar10 != 0) {
                if (lVar3 <= lVar11) {
                  lVar11 = lVar3;
                }
                lVar11 = lVar11 + lVar10;
                goto LAB_103d98458;
              }
            }
            lVar11 = 0;
            goto LAB_103d98458;
          }
          abStack_80[0] = (byte)lVar9;
          abStack_80[1] = (byte)((ulong)lVar9 >> 8);
          abStack_80[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_80[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_80[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_80[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_80[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_80[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_80[8] = (byte)uVar13;
          abStack_80[9] = (byte)(uVar13 >> 8);
          abStack_80[10] = (byte)(uVar13 >> 0x10);
          abStack_80[0xb] = (byte)(uVar13 >> 0x18);
          abStack_80[0xc] = (byte)(uVar13 >> 0x20);
          abStack_80[0xd] = (byte)(uVar13 >> 0x28);
          func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80 + (uVar13 >> 0x30 & 0xff),lVar1,
                              uVar14);
LAB_103d983c0:
          func_0x00010006c090(lVar9,uVar13);
          func_0x000107c61574(uVar23);
          func_0x00010006c090(lVar1,uVar14);
          func_0x000107c61574(uVar21);
          bVar2 = bStack_81;
        }
        else {
          if (uVar12 != 2) {
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,lVar1,uVar14);
            goto LAB_103d983c0;
          }
          lVar3 = *(long *)(lVar9 + 0x10);
          lVar20 = *(long *)(lVar9 + 0x18);
          lVar11 = lVar1;
          func_0x000107c5ec30();
          if (lVar11 == 0) {
            lVar10 = 0;
          }
          else {
            lVar8 = lVar11;
            func_0x000107c5ec3c();
            if (SBORROW8(lVar3,lVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985c4);
              (*pcVar6)();
            }
            lVar10 = (lVar3 - lVar8) + lVar11;
            lVar11 = lVar8;
          }
          lVar8 = lVar20 - lVar3;
          if (SBORROW8(lVar20,lVar3)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103d985c0);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          if (lVar10 == 0) {
            lVar11 = 0;
          }
          else {
            if (lVar8 <= lVar11) {
              lVar11 = lVar8;
            }
            lVar11 = lVar11 + lVar10;
          }
LAB_103d98458:
          func_0x000100e25bdc(abStack_80,lVar10,lVar11,lVar1,uVar14);
          func_0x00010006c090(lVar9,uVar13);
          func_0x000107c61574(uVar23);
          func_0x00010006c090(lVar1,uVar14);
          func_0x000107c61574(uVar21);
          bVar2 = abStack_80[0];
        }
      } while ((bVar2 & 1) != 0);
      func_0x000107c6142c(param_2);
      param_2 = 2;
      func_0x000107c61430(param_1,2);
    }
LAB_103d98568:
    uVar17 = 0;
  }
LAB_103d9856c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78(uVar17);
    FUN_103d9e104(param_2,uVar17,&UNK_11070cac0);
    return param_2;
  }
  return uVar17;
}



/* Entry: 103d985cc; end: 103d985ff;  */

undefined8 FUN_103d985cc(undefined8 param_1,undefined8 param_2)

{
  FUN_103d9e104(param_2,param_1,&UNK_11070cac0);
  return param_2;
}



/* Entry: 103d98600; end: 103d98937;  */

uint FUN_103d98600(undefined8 *param_1,undefined8 *param_2)

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
      func_0x000103da2a94(&uStack_a0,auStack_100,0x1130085b0,&UNK_10dc8da10);
      func_0x000103da2a94(&uStack_d0,auStack_100,0x1130085b0,&UNK_10dc8da10);
LAB_103d9883c:
      func_0x000103d9b108(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
      uVar8 = *param_1;
      func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar8;
      goto LAB_103d98914;
    }
LAB_103d98788:
    func_0x000103da2a94(&uStack_a0,auStack_100,0x1130085b0,&UNK_10dc8da10);
    func_0x000103da2a94(&uStack_d0,auStack_100,0x1130085b0,&UNK_10dc8da10);
    func_0x000103d9b108(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
    uVar3 = uVar5;
    lVar7 = lVar9;
    uVar11 = uVar12;
    lVar13 = lVar14;
    uVar4 = uVar6;
    uVar8 = uVar10;
  }
  else {
    if (lVar9 == 0) goto LAB_103d98788;
    if (((uVar3 == uVar5) && (lVar7 == lVar9)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar7,uVar5,lVar9,0), (uVar2 & 1) != 0)) {
      if (((uVar11 != uVar12) || (lVar13 != lVar14)) &&
         (uVar2 = uVar11, func_0x000107c605b8(uVar11,lVar13,uVar12,lVar14,0), (uVar2 & 1) == 0)) {
        func_0x000103da2a94(&uStack_a0,auStack_100,0x1130085b0,&UNK_10dc8da10);
        func_0x000103da2a94(&uStack_d0,auStack_100,0x1130085b0,&UNK_10dc8da10);
        goto LAB_103d988e0;
      }
      func_0x000103da2a94(&uStack_a0,auStack_100,0x1130085b0,&UNK_10dc8da10);
      func_0x000103da2a94(&uStack_d0,auStack_100,0x1130085b0,&UNK_10dc8da10);
      uVar2 = uVar4;
      func_0x000100e25fcc(uVar4,uVar8,uVar6,uVar10);
      func_0x000103d9b108(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_103d9883c;
    }
    else {
      func_0x000103da2a94(&uStack_a0,auStack_100,0x1130085b0,&UNK_10dc8da10);
      func_0x000103da2a94(&uStack_d0,auStack_100,0x1130085b0,&UNK_10dc8da10);
LAB_103d988e0:
      func_0x000103d9b108(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
    }
  }
  func_0x000103d9b108(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
  uVar1 = 0;
LAB_103d98914:
  return uVar1 & 1;
}



/* Entry: 103d98938; end: 103d98a0f;  */

uint FUN_103d98938(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_70 = *param_1;
  uStack_68 = param_1[1];
  uVar4 = param_1[2];
  uStack_58 = param_1[3];
  if ((char)param_1[8] == '\x01') {
    if ((char)param_2[8] == '\x01') {
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (((uStack_70 == *param_2 && uStack_68 == param_2[1]) ||
          (func_0x000107c605b8(uStack_70,uStack_68,*param_2,param_2[1],0), (uStack_70 & 1) != 0)) &&
         (func_0x000100e25fcc(uVar4,uStack_58,uVar1,uVar2), (uVar4 & 1) != 0)) {
        uVar3 = 1;
        goto LAB_103d989f8;
      }
    }
  }
  else {
    uStack_48 = param_1[5];
    uStack_50 = param_1[4];
    uStack_38 = param_1[7];
    uStack_40 = param_1[6];
    if ((char)param_2[8] != '\x01') {
      uStack_a8 = param_2[1];
      uStack_b0 = *param_2;
      uStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      uStack_88 = param_2[5];
      uStack_90 = param_2[4];
      uStack_78 = param_2[7];
      uStack_80 = param_2[6];
      puVar5 = &uStack_70;
      uStack_60 = uVar4;
      FUN_103d98600(puVar5,&uStack_b0);
      uVar3 = (uint)puVar5;
      goto LAB_103d989f8;
    }
  }
  uVar3 = 0;
LAB_103d989f8:
  return uVar3 & 1;
}



/* Entry: 103d98a10; end: 103d98a1b;  */

void FUN_103d98a10(void)

{
  return;
}



/* Entry: 103d98a1c; end: 103d98a57;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d98a1c(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  FUN_103d98a58();
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x3);
  return;
}



/* Entry: 103d98a58; end: 103d98a6b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d98a58(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d98a6c; end: 103d98a97;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d98a6c(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d98a98; end: 103d98ab7;  */

void FUN_103d98a98(void)

{
  func_0x000107c61168(&PTR_PTR_113008cc8);
  return;
}



/* Entry: 103d98ab8; end: 103d98af3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d98ab8(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  FUN_103d98af4();
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 103d98af4; end: 103d98b07;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d98af4(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103d98b08; end: 103d98b33;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d98b08(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103d98b34; end: 103d98bcb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d98b34(int *param_1,int *param_2)

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
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  if (*param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 2);
    lVar22 = *(long *)(param_2 + 2);
    if ((char)param_2[4] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 == 0) {
LAB_103d98b84:
            pbVar10 = *(byte **)(param_1 + 6);
            pbVar26 = *(byte **)(param_1 + 8);
            lVar19 = *(long *)(param_2 + 6);
            uVar16 = *(ulong *)(param_2 + 8);
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
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar16 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar13 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar16 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar16 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                      puVar7[-0x68] = (char)pbVar26;
                      puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                      pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                    unaff_x24 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar13 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar13) {
                          pbVar13 = unaff_x23;
                        }
                        pbVar13 = pbVar13 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar13 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar13 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar13 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar16;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
              pbVar25 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar14 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar13[0x28] == 0) {
                    lVar19 = *(long *)pbVar13;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar27 == 1) {
                  if (pbVar13[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar17 = *(byte **)(pbVar13 + 0x10);
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar13[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar10;
joined_r0x000100e266a4:
                    if (((ulong)pbVar25 & 1) == 0) {
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
                )(pbVar12,pbVar14,pbVar15,pbVar17,0);
                return pbVar12;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar13[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                     pbVar17 = *(byte **)(pbVar13 + 0x18),
                     pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar13[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)(pbVar13 + 0x20);
                if (pbVar26 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar13 + 0x20);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  bVar27 = pbVar13[8] | (byte)lVar19;
                  bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar13[0x10] | (byte)lVar22;
                  bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar13 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
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
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                lVar19 = CONCAT17(bVar34 | auVar43[7],
                                  CONCAT16(bVar33 | auVar43[6],
                                           CONCAT15(bVar32 | auVar43[5],
                                                    CONCAT14(bVar31 | auVar43[4],
                                                             CONCAT13(bVar30 | auVar43[3],
                                                                      CONCAT12(bVar29 | auVar43[2],
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar13[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar13 + 8);
              uVar16 = *(ulong *)(pbVar13 + 0x10);
              lVar22 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
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
        }
        else if (lVar19 == 1) goto LAB_103d98b84;
      }
      else if (lVar22 == 2) {
        if (lVar19 == 2) goto LAB_103d98b84;
      }
      else if (lVar22 == 3) {
        if (lVar19 == 3) goto LAB_103d98b84;
      }
      else if (lVar19 == 4) goto LAB_103d98b84;
    }
    else if (lVar19 == lVar22) goto LAB_103d98b84;
  }
  return (byte *)0x0;
}



/* Entry: 103d98bcc; end: 103d99e37;  */

uint FUN_103d98bcc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_138 [40];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uVar4 = param_2[6];
  uStack_110 = uVar6;
  uStack_108 = uVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar4;
  uStack_e0 = uVar5;
  uStack_d8 = uVar7;
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103d98c9c;
    auStack_90[0] = (undefined4)uVar6;
    uStack_80 = (undefined1)uVar10;
    auStack_b8[0] = (undefined4)uVar5;
    uStack_a8 = (undefined1)uVar9;
    uStack_b0 = uVar7;
    uStack_a0 = uVar11;
    uStack_98 = uVar3;
    uStack_88 = uVar8;
    uStack_78 = uVar12;
    uStack_70 = uVar4;
    func_0x000103da2a94(&uStack_e0,auStack_138,0x113008740,&UNK_10dc8da80);
    func_0x000103da2a94(&uStack_110,auStack_138,0x113008740,&UNK_10dc8da80);
    puVar2 = auStack_b8;
    FUN_103d98b34(puVar2,auStack_90);
    FUN_103d9af14(uVar6,uVar8,uVar10,uVar12,uVar4);
    FUN_103d9af14(uVar5,uVar7,uVar9,uVar11,uVar3);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103d98dc8;
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x000103da2a94(&uStack_e0,auStack_90,0x113008740,&UNK_10dc8da80);
      func_0x000103da2a94(&uStack_110,auStack_90,0x113008740,&UNK_10dc8da80);
      FUN_103d9af14(uVar5,uVar7,uVar9,uVar11,uVar3);
LAB_103d98dc8:
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103d98dd4;
    }
LAB_103d98c9c:
    func_0x000103da2a94(&uStack_e0,auStack_90,0x113008740,&UNK_10dc8da80);
    func_0x000103da2a94(&uStack_110,auStack_90,0x113008740,&UNK_10dc8da80);
    FUN_103d9af14(uVar5,uVar7,uVar9,uVar11,uVar3);
    FUN_103d9af14(uVar6,uVar8,uVar10,uVar12,uVar4);
  }
  uVar1 = 0;
LAB_103d98dd4:
  return uVar1 & 1;
}



/* Entry: 103d99e38; end: 103d99e6f;  */

int FUN_103d99e38(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d99e70; end: 103d99f7f;  */

/* WARNING: Possible PIC construction at 0x000103d99ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d99f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d99f1c) */
/* WARNING: Removing unreachable block (ram,0x000103d99ea4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d99e70(undefined8 *param_1,undefined8 *param_2)

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
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  if (((((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) == 0) && (param_1[3] == param_2[3]))
     && (param_1[4] == param_2[4])) {
    uVar14 = param_1[5];
    if (((uVar14 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar13 = (byte *)param_1[7];
      pbVar16 = (byte *)param_1[8];
      pbVar17 = (byte *)param_2[7];
      pbVar12 = (byte *)param_2[8];
      if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
      uVar14 = param_1[9];
      if (((uVar14 == param_2[9]) && (param_1[10] == param_2[10])) ||
         (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
        uVar14 = param_1[0xb];
        func_0x000103d8a494(uVar14,*(undefined1 *)(param_1 + 0xc),param_2[0xb],
                            *(undefined1 *)(param_2 + 0xc));
        if ((uVar14 & 1) != 0) {
          pbVar10 = (byte *)param_1[0xd];
          pbVar25 = (byte *)param_1[0xe];
          lVar24 = param_2[0xd];
          uVar14 = param_2[0xe];
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
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
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
              goto code_r0x000107c605b8;
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
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
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
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) goto code_r0x000107c605b8;
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
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
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d99f80; end: 103d9a33b;  */

uint FUN_103d99f80(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auStack_498 [120];
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uStack_f8 = param_1[0x12];
    uStack_100 = param_1[0x11];
    uStack_e8 = param_1[0x14];
    uStack_f0 = param_1[0x13];
    uStack_d8 = param_1[0x16];
    uStack_e0 = param_1[0x15];
    uStack_d0 = param_1[0x17];
    uStack_138 = param_1[10];
    uStack_140 = param_1[9];
    uStack_128 = param_1[0xc];
    uStack_130 = param_1[0xb];
    uStack_118 = param_1[0xe];
    uStack_120 = param_1[0xd];
    uStack_108 = param_1[0x10];
    uStack_110 = param_1[0xf];
    uStack_1b8 = param_2[10];
    uStack_1c0 = param_2[9];
    uStack_1a8 = param_2[0xc];
    uStack_1b0 = param_2[0xb];
    uStack_198 = param_2[0xe];
    uStack_1a0 = param_2[0xd];
    uStack_188 = param_2[0x10];
    uStack_190 = param_2[0xf];
    uStack_178 = param_2[0x12];
    uStack_180 = param_2[0x11];
    uStack_168 = param_2[0x14];
    uStack_170 = param_2[0x13];
    uStack_158 = param_2[0x16];
    uStack_160 = param_2[0x15];
    uStack_150 = param_2[0x17];
    uStack_268 = param_1[0x12];
    uStack_270 = param_1[0x11];
    uStack_258 = param_1[0x14];
    uStack_260 = param_1[0x13];
    uStack_248 = param_1[0x16];
    uStack_250 = param_1[0x15];
    uStack_240 = param_1[0x17];
    uStack_2a8 = param_1[10];
    uStack_2b0 = param_1[9];
    uStack_298 = param_1[0xc];
    uStack_2a0 = param_1[0xb];
    uStack_288 = param_1[0xe];
    uStack_290 = param_1[0xd];
    uStack_278 = param_1[0x10];
    uStack_280 = param_1[0xf];
    uStack_320 = param_2[10];
    uStack_328 = param_2[9];
    uStack_310 = param_2[0xc];
    uStack_318 = param_2[0xb];
    uStack_300 = param_2[0xe];
    uStack_308 = param_2[0xd];
    uStack_2f0 = param_2[0x10];
    uStack_2f8 = param_2[0xf];
    uStack_2e0 = param_2[0x12];
    uStack_2e8 = param_2[0x11];
    uStack_2d0 = param_2[0x14];
    uStack_2d8 = param_2[0x13];
    uStack_2c0 = param_2[0x16];
    uStack_2c8 = param_2[0x15];
    uStack_2b8 = param_2[0x17];
    uStack_238 = uStack_328;
    uStack_230 = uStack_320;
    uStack_228 = uStack_318;
    uStack_220 = uStack_310;
    uStack_218 = uStack_308;
    uStack_210 = uStack_300;
    uStack_208 = uStack_2f8;
    uStack_200 = uStack_2f0;
    uStack_1f8 = uStack_2e8;
    uStack_1f0 = uStack_2e0;
    uStack_1e8 = uStack_2d8;
    uStack_1e0 = uStack_2d0;
    uStack_1d8 = uStack_2c8;
    uStack_1d0 = uStack_2c0;
    uStack_1c8 = uStack_2b8;
    if (uStack_2a8 == 0) {
      if (uStack_320 != 0) goto LAB_103d9a1c8;
      uStack_358 = param_1[0x12];
      uStack_360 = param_1[0x11];
      uStack_348 = param_1[0x14];
      uStack_350 = param_1[0x13];
      uStack_338 = param_1[0x16];
      uStack_340 = param_1[0x15];
      uStack_330 = param_1[0x17];
      uStack_398 = param_1[10];
      uStack_3a0 = param_1[9];
      uStack_388 = param_1[0xc];
      uStack_390 = param_1[0xb];
      uStack_378 = param_1[0xe];
      uStack_380 = param_1[0xd];
      uStack_368 = param_1[0x10];
      uStack_370 = param_1[0xf];
      func_0x000103da2a94(&uStack_140,&uStack_c0,0x113008600,&UNK_10dc8da50);
      func_0x000103da2a94(&uStack_1c0,&uStack_c0,0x113008600,&UNK_10dc8da50);
      func_0x000103da2994(&uStack_3a0,0x113008600,&UNK_10dc8da50);
LAB_103d9a2d8:
      uVar2 = param_1[4];
      if ((((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && ((int)param_1[6] == (int)param_2[6])) {
        uVar2 = param_1[7];
        func_0x000100e25fcc(uVar2,param_1[8],param_2[7],param_2[8]);
        uVar1 = (uint)uVar2;
        goto LAB_103d9a320;
      }
    }
    else if (uStack_320 == 0) {
LAB_103d9a1c8:
      uStack_3a0 = uStack_2b0;
      uStack_398 = uStack_2a8;
      uStack_390 = uStack_2a0;
      uStack_388 = uStack_298;
      uStack_380 = uStack_290;
      uStack_378 = uStack_288;
      uStack_370 = uStack_280;
      uStack_368 = uStack_278;
      uStack_360 = uStack_270;
      uStack_358 = uStack_268;
      uStack_350 = uStack_260;
      uStack_348 = uStack_258;
      uStack_340 = uStack_250;
      uStack_338 = uStack_248;
      uStack_330 = uStack_240;
      func_0x000103da2a94(&uStack_140,&uStack_c0,0x113008600,&UNK_10dc8da50);
      func_0x000103da2a94(&uStack_1c0,&uStack_c0,0x113008600,&UNK_10dc8da50);
      func_0x000103da2994(&uStack_3a0,0x113008608,&UNK_10dc8da58);
    }
    else {
      uStack_3d8 = param_2[0x12];
      uStack_3e0 = param_2[0x11];
      uStack_3c8 = param_2[0x14];
      uStack_3d0 = param_2[0x13];
      uStack_3b8 = param_2[0x16];
      uStack_3c0 = param_2[0x15];
      uStack_3b0 = param_2[0x17];
      uStack_418 = param_2[10];
      uStack_420 = param_2[9];
      uStack_408 = param_2[0xc];
      uStack_410 = param_2[0xb];
      uStack_3f8 = param_2[0xe];
      uStack_400 = param_2[0xd];
      uStack_3e8 = param_2[0x10];
      uStack_3f0 = param_2[0xf];
      uStack_78 = param_1[0x12];
      uStack_80 = param_1[0x11];
      uStack_68 = param_1[0x14];
      uStack_70 = param_1[0x13];
      uStack_58 = param_1[0x16];
      uStack_60 = param_1[0x15];
      uStack_50 = param_1[0x17];
      uStack_b8 = param_1[10];
      uStack_c0 = param_1[9];
      uStack_a8 = param_1[0xc];
      uStack_b0 = param_1[0xb];
      uStack_98 = param_1[0xe];
      uStack_a0 = param_1[0xd];
      uStack_88 = param_1[0x10];
      uStack_90 = param_1[0xf];
      uStack_3a0 = uStack_420;
      uStack_398 = uStack_418;
      uStack_390 = uStack_410;
      uStack_388 = uStack_408;
      uStack_380 = uStack_400;
      uStack_378 = uStack_3f8;
      uStack_370 = uStack_3f0;
      uStack_368 = uStack_3e8;
      uStack_360 = uStack_3e0;
      uStack_358 = uStack_3d8;
      uStack_350 = uStack_3d0;
      uStack_348 = uStack_3c8;
      uStack_340 = uStack_3c0;
      uStack_338 = uStack_3b8;
      uStack_330 = uStack_3b0;
      func_0x000103da2a94(&uStack_140,auStack_498,0x113008600,&UNK_10dc8da50);
      func_0x000103da2a94(&uStack_1c0,auStack_498,0x113008600,&UNK_10dc8da50);
      puVar3 = &uStack_c0;
      FUN_103d99e70(puVar3,&uStack_3a0);
      func_0x000103da2994(&uStack_420,0x113008600,&UNK_10dc8da50);
      func_0x000103da2994(&uStack_2b0,0x113008600,&UNK_10dc8da50);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103d9a2d8;
    }
  }
  uVar1 = 0;
LAB_103d9a320:
  return uVar1 & 1;
}



/* Entry: 103d9a33c; end: 103d9aa1f;  */

uint FUN_103d9a33c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lStack_1e8;
  ulong uStack_1c8;
  ulong auStack_1c0 [6];
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else if (lVar6 == 1) {
      if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar5 != 2) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  lVar5 = param_1[7];
  uVar7 = param_1[6];
  lVar6 = param_1[9];
  uStack_1c8 = param_1[8];
  lVar11 = param_1[0xb];
  uVar8 = param_1[10];
  lVar12 = param_2[7];
  uVar9 = param_2[6];
  lVar14 = param_2[9];
  uVar13 = param_2[8];
  lStack_1e8 = param_2[0xb];
  lVar10 = param_2[10];
  uStack_d0 = uVar9;
  lStack_c8 = lVar12;
  uStack_c0 = uVar13;
  lStack_b8 = lVar14;
  lStack_b0 = lVar10;
  lStack_a8 = lStack_1e8;
  uStack_a0 = uVar7;
  lStack_98 = lVar5;
  uStack_90 = uStack_1c8;
  lStack_88 = lVar6;
  uStack_80 = uVar8;
  lStack_78 = lVar11;
  if (lVar5 == 0) {
    if (lVar12 != 0) goto LAB_103d9a4c0;
    func_0x000103da2a94(&uStack_a0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
    func_0x000103da2a94(&uStack_d0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
LAB_103d9a560:
    func_0x000103d9b108(uVar7,lVar5,uStack_1c8,lVar6,uVar8,lVar11);
    lVar5 = param_1[0xd];
    uVar7 = param_1[0xc];
    lVar6 = param_1[0xf];
    uStack_1c8 = param_1[0xe];
    lVar11 = param_1[0x11];
    uVar8 = param_1[0x10];
    lVar12 = param_2[0xd];
    uVar9 = param_2[0xc];
    lVar14 = param_2[0xf];
    uVar13 = param_2[0xe];
    lStack_1e8 = param_2[0x11];
    lVar10 = param_2[0x10];
    uStack_130 = uVar9;
    lStack_128 = lVar12;
    uStack_120 = uVar13;
    lStack_118 = lVar14;
    lStack_110 = lVar10;
    lStack_108 = lStack_1e8;
    uStack_100 = uVar7;
    lStack_f8 = lVar5;
    uStack_f0 = uStack_1c8;
    lStack_e8 = lVar6;
    uStack_e0 = uVar8;
    lStack_d8 = lVar11;
    if (lVar5 != 0) {
      if (lVar12 != 0) {
        if (((uVar7 == uVar9) && (lVar5 == lVar12)) ||
           (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar5,uVar9,lVar12,0), (uVar2 & 1) != 0)) {
          if (((uStack_1c8 == uVar13) && (lVar6 == lVar14)) ||
             (uVar2 = uStack_1c8, func_0x000107c605b8(uStack_1c8,lVar6,uVar13,lVar14,0),
             (uVar2 & 1) != 0)) {
            func_0x000103da2a94(&uStack_100,&uStack_190,0x1130086d8,&UNK_10dc8da70);
            func_0x000103da2a94(&uStack_130,&uStack_190,0x1130086d8,&UNK_10dc8da70);
            uVar2 = uVar8;
            func_0x000100e25fcc(uVar8,lVar11,lVar10,lStack_1e8);
            func_0x000103d9b108(uVar9,lVar12,uVar13,lVar14,lVar10,lStack_1e8);
            if ((uVar2 & 1) == 0) goto LAB_103d9a8cc;
            goto LAB_103d9a7c0;
          }
          func_0x000103da2a94(&uStack_100,&uStack_190,0x1130086d8,&UNK_10dc8da70);
          puVar3 = &uStack_130;
        }
        else {
          func_0x000103da2a94(&uStack_100,&uStack_190,0x1130086d8,&UNK_10dc8da70);
          puVar3 = &uStack_130;
        }
        goto LAB_103d9a894;
      }
LAB_103d9a6e4:
      uStack_190 = uVar7;
      lStack_188 = lVar5;
      uStack_180 = uStack_1c8;
      lStack_178 = lVar6;
      uStack_170 = uVar8;
      lStack_168 = lVar11;
      uStack_160 = uVar9;
      lStack_158 = lVar12;
      uStack_150 = uVar13;
      lStack_148 = lVar14;
      lStack_140 = lVar10;
      lStack_138 = lStack_1e8;
      func_0x000103da2a94(&uStack_100,auStack_1c0,0x1130086d8,&UNK_10dc8da70);
      puVar3 = &uStack_130;
      puVar4 = auStack_1c0;
      goto LAB_103d9a728;
    }
    if (lVar12 != 0) goto LAB_103d9a6e4;
    func_0x000103da2a94(&uStack_100,&uStack_190,0x1130086d8,&UNK_10dc8da70);
    func_0x000103da2a94(&uStack_130,&uStack_190,0x1130086d8,&UNK_10dc8da70);
LAB_103d9a7c0:
    func_0x000103d9b108(uVar7,lVar5,uStack_1c8,lVar6,uVar8,lVar11);
    uVar7 = param_1[2];
    if (((uVar7 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(), (uVar7 & 1) != 0)) {
      lVar5 = param_1[4];
      func_0x000100e25fcc(lVar5,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)lVar5;
      goto LAB_103d9a8dc;
    }
  }
  else if (lVar12 == 0) {
LAB_103d9a4c0:
    uStack_190 = uVar7;
    lStack_188 = lVar5;
    uStack_180 = uStack_1c8;
    lStack_178 = lVar6;
    uStack_170 = uVar8;
    lStack_168 = lVar11;
    uStack_160 = uVar9;
    lStack_158 = lVar12;
    uStack_150 = uVar13;
    lStack_148 = lVar14;
    lStack_140 = lVar10;
    lStack_138 = lStack_1e8;
    func_0x000103da2a94(&uStack_a0,&uStack_100,0x1130086d8,&UNK_10dc8da70);
    puVar3 = &uStack_d0;
    puVar4 = &uStack_100;
LAB_103d9a728:
    func_0x000103da2a94(puVar3,puVar4,0x1130086d8,&UNK_10dc8da70);
    func_0x000103da2994(&uStack_190,0x113009268,&UNK_10dc904c0);
  }
  else {
    if (((uVar7 == uVar9) && (lVar5 == lVar12)) ||
       (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar5,uVar9,lVar12,0), (uVar2 & 1) != 0)) {
      if (((uStack_1c8 != uVar13) || (lVar6 != lVar14)) &&
         (uVar2 = uStack_1c8, func_0x000107c605b8(uStack_1c8,lVar6,uVar13,lVar14,0),
         (uVar2 & 1) == 0)) {
        func_0x000103da2a94(&uStack_a0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
        puVar3 = &uStack_d0;
        goto LAB_103d9a894;
      }
      func_0x000103da2a94(&uStack_a0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
      func_0x000103da2a94(&uStack_d0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
      uVar2 = uVar8;
      func_0x000100e25fcc(uVar8,lVar11,lVar10,lStack_1e8);
      func_0x000103d9b108(uVar9,lVar12,uVar13,lVar14,lVar10,lStack_1e8);
      if ((uVar2 & 1) != 0) goto LAB_103d9a560;
    }
    else {
      func_0x000103da2a94(&uStack_a0,&uStack_190,0x1130086d8,&UNK_10dc8da70);
      puVar3 = &uStack_d0;
LAB_103d9a894:
      func_0x000103da2a94(puVar3,&uStack_190,0x1130086d8,&UNK_10dc8da70);
      func_0x000103d9b108(uVar9,lVar12,uVar13,lVar14,lVar10,lStack_1e8);
    }
LAB_103d9a8cc:
    func_0x000103d9b108(uVar7,lVar5,uStack_1c8,lVar6,uVar8,lVar11);
  }
  uVar1 = 0;
LAB_103d9a8dc:
  return uVar1 & 1;
}



/* Entry: 103d9aa20; end: 103d9aac7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d9aa20(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 103d9aac8; end: 103d9aafb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d9aac8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103d9aafc; end: 103d9aeaf;  */

undefined8
FUN_103d9aafc(long param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,ulong param_6
             )

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_298 [184];
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
  
  if ((param_3 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3d & 1) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != *(long *)(param_4 + 0x10)) {
      return 0;
    }
    if ((lVar2 != 0) && (param_1 != param_4)) {
      puVar3 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_1d8 = puVar3[1];
        uStack_1e0 = *puVar3;
        uStack_1c8 = puVar3[3];
        uStack_1d0 = puVar3[2];
        uStack_1b8 = puVar3[5];
        uStack_1c0 = puVar3[4];
        uStack_1a8 = puVar3[7];
        uStack_1b0 = puVar3[6];
        uStack_198 = puVar3[9];
        uStack_1a0 = puVar3[8];
        uStack_188 = puVar3[0xb];
        uStack_190 = puVar3[10];
        uStack_178 = puVar3[0xd];
        uStack_180 = puVar3[0xc];
        uStack_168 = puVar3[0xf];
        uStack_170 = puVar3[0xe];
        uStack_158 = puVar3[0x11];
        uStack_160 = puVar3[0x10];
        uStack_148 = puVar3[0x13];
        uStack_150 = puVar3[0x12];
        uStack_140 = puVar3[0x14];
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_c8 = puVar4[0xb];
        uStack_d0 = puVar4[10];
        uStack_b8 = puVar4[0xd];
        uStack_c0 = puVar4[0xc];
        uStack_a8 = puVar4[0xf];
        uStack_b0 = puVar4[0xe];
        uStack_98 = puVar4[0x11];
        uStack_a0 = puVar4[0x10];
        uStack_88 = puVar4[0x13];
        uStack_90 = puVar4[0x12];
        uStack_80 = puVar4[0x14];
        func_0x000103da2a34(&uStack_1e0,auStack_298);
        func_0x000103da2a34(&uStack_120,auStack_298);
        puVar1 = &uStack_1e0;
        func_0x000103d98df8(puVar1,&uStack_120);
        func_0x000103da2a68(&uStack_120);
        func_0x000103da2a68(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 0x15;
        puVar3 = puVar3 + 0x15;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
  }
  else {
    if ((param_6 >> 0x3d & 1) == 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != *(long *)(param_4 + 0x10)) {
      return 0;
    }
    if ((lVar2 != 0) && (param_1 != param_4)) {
      puVar3 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_1d8 = puVar3[1];
        uStack_1e0 = *puVar3;
        uStack_1c8 = puVar3[3];
        uStack_1d0 = puVar3[2];
        uStack_1b8 = puVar3[5];
        uStack_1c0 = puVar3[4];
        uStack_1a8 = puVar3[7];
        uStack_1b0 = puVar3[6];
        uStack_198 = puVar3[9];
        uStack_1a0 = puVar3[8];
        uStack_188 = puVar3[0xb];
        uStack_190 = puVar3[10];
        uStack_178 = puVar3[0xd];
        uStack_180 = puVar3[0xc];
        uStack_168 = puVar3[0xf];
        uStack_170 = puVar3[0xe];
        uStack_158 = puVar3[0x11];
        uStack_160 = puVar3[0x10];
        uStack_148 = puVar3[0x13];
        uStack_150 = puVar3[0x12];
        uStack_138 = puVar3[0x15];
        uStack_140 = puVar3[0x14];
        uStack_130 = puVar3[0x16];
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_c8 = puVar4[0xb];
        uStack_d0 = puVar4[10];
        uStack_b8 = puVar4[0xd];
        uStack_c0 = puVar4[0xc];
        uStack_a8 = puVar4[0xf];
        uStack_b0 = puVar4[0xe];
        uStack_98 = puVar4[0x11];
        uStack_a0 = puVar4[0x10];
        uStack_88 = puVar4[0x13];
        uStack_90 = puVar4[0x12];
        uStack_78 = puVar4[0x15];
        uStack_80 = puVar4[0x14];
        uStack_70 = puVar4[0x16];
        func_0x000103da29d4(&uStack_1e0,auStack_298);
        func_0x000103da29d4(&uStack_120,auStack_298);
        puVar1 = &uStack_1e0;
        func_0x000103d9953c(puVar1,&uStack_120);
        func_0x000103da2a08(&uStack_120);
        func_0x000103da2a08(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 0x17;
        puVar3 = puVar3 + 0x17;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    func_0x000100e25fcc(param_2,param_3 & 0xdfffffffffffffff,param_5,param_6 & 0xdfffffffffffffff);
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 103d9aeb0; end: 103d9af13;  */

/* WARNING: Possible PIC construction at 0x000103d9aee8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d9aeec) */
/* WARNING: Removing unreachable block (ram,0x000103d9af14) */
/* WARNING: Removing unreachable block (ram,0x000103d9af24) */
/* WARNING: Removing unreachable block (ram,0x000103d9af20) */

void FUN_103d9aeb0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103d9af14; end: 103d9af2f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d9af14(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 103d9af30; end: 103d9af5b;  */

undefined8 FUN_103d9af30(undefined8 param_1)

{
  FUN_103da0414(param_1,&UNK_11070d1a8);
  return param_1;
}



/* Entry: 103d9af5c; end: 103d9af67;  */

void FUN_103d9af5c(void)

{
  return;
}



/* Entry: 103d9af68; end: 103d9af87;  */

void FUN_103d9af68(void)

{
  func_0x000107c61168(&PTR_PTR_113008e68);
  return;
}



/* Entry: 103d9af88; end: 103d9afef;  */

void FUN_103d9af88(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 103d9aff0; end: 103d9b023;  */

undefined8 FUN_103d9aff0(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6f370(param_2,param_1,&UNK_11070d610);
  return param_2;
}



/* Entry: 103d9b024; end: 103d9b02b;  */

void FUN_103d9b024(void)

{
  return;
}



/* Entry: 103d9b02c; end: 103d9b05f;  */

undefined8 FUN_103d9b02c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6f370(param_2,param_1,&UNK_11070d688);
  return param_2;
}



/* Entry: 103d9b060; end: 103d9b0bb;  */

long FUN_103d9b060(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 103d9b0bc; end: 103d9b153;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d9b0bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 103d9b154; end: 103d9b2fb;  */

/* WARNING: Possible PIC construction at 0x000103d9b184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d9b1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d9b1cc) */
/* WARNING: Removing unreachable block (ram,0x000103d9b188) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d9b154(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d9b2fc; end: 103d9b7df;  */

uint FUN_103d9b2fc(long *param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_2e8 [72];
  ulong uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  char cStack_1d0;
  undefined7 uStack_1cf;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  char cStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = *param_1;
  lVar7 = *param_2;
  if ((char)param_2[1] != '\x01') {
    if (lVar6 == lVar7) goto LAB_103d9b354;
    goto LAB_103d9b7b8;
  }
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      if (lVar6 == 0) {
LAB_103d9b354:
        lVar7 = param_1[2];
        lVar8 = param_2[2];
        lVar6 = *(long *)(lVar7 + 0x10);
        if (lVar6 == *(long *)(lVar8 + 0x10)) {
          if (lVar6 != 0 && lVar7 != lVar8) {
            plVar9 = (long *)(lVar8 + 0x28);
            plVar10 = (long *)(lVar7 + 0x28);
            do {
              uVar13 = plVar10[-1];
              if ((uVar13 != plVar9[-1] || *plVar10 != *plVar9) &&
                 (func_0x000107c605b8(), (uVar13 & 1) == 0)) goto LAB_103d9b7b8;
              plVar9 = plVar9 + 2;
              plVar10 = plVar10 + 2;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          uVar13 = param_1[3];
          if (((uVar13 == param_2[3] && param_1[4] == param_2[4]) ||
              (func_0x000107c605b8(), (uVar13 & 1) != 0)) &&
             (((*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1) == 0)) {
            lVar6 = param_1[9];
            uVar11 = param_1[8];
            lStack_108 = param_1[0xb];
            lStack_110 = param_1[10];
            lStack_1e8 = param_1[0xb];
            lStack_1f0 = param_1[10];
            lStack_f8 = param_1[0xd];
            lStack_100 = param_1[0xc];
            lStack_128 = param_1[7];
            lStack_130 = param_1[6];
            lStack_118 = param_1[9];
            lStack_120 = param_1[8];
            lStack_208 = param_1[7];
            uVar13 = param_1[6];
            lStack_1b0 = param_2[9];
            lStack_1b8 = param_2[8];
            lStack_158 = param_2[0xb];
            lStack_160 = param_2[10];
            lStack_1a0 = param_2[0xb];
            lStack_1a8 = param_2[10];
            lStack_148 = param_2[0xd];
            lStack_150 = param_2[0xc];
            lStack_178 = param_2[7];
            lStack_180 = param_2[6];
            lStack_168 = param_2[9];
            lStack_170 = param_2[8];
            lStack_1c0 = param_2[7];
            lStack_1c8 = param_2[6];
            lStack_1d8 = param_1[0xd];
            lStack_1e0 = param_1[0xc];
            uStack_190 = (undefined1)param_2[0xd];
            uStack_18f = (undefined7)((ulong)param_2[0xd] >> 8);
            uStack_198 = (undefined1)param_2[0xc];
            uStack_197 = (undefined7)((ulong)param_2[0xc] >> 8);
            uStack_f0 = (undefined1)param_1[0xe];
            uStack_140 = (undefined1)param_2[0xe];
            cStack_1d0 = (char)param_1[0xe];
            cStack_188 = (char)param_2[0xe];
            uStack_210 = uVar13;
            uStack_200 = uVar11;
            lStack_1f8 = lVar6;
            if (cStack_1d0 == -1) {
              if (cStack_188 == -1) {
                lStack_278 = param_1[0xb];
                lStack_280 = param_1[10];
                lStack_268 = param_1[0xd];
                lStack_270 = param_1[0xc];
                uStack_260 = CONCAT71(uStack_260._1_7_,(char)param_1[0xe]);
                lStack_298 = param_1[7];
                uStack_2a0 = param_1[6];
                lStack_288 = param_1[9];
                uStack_290 = param_1[8];
                func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
                func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
                puVar3 = &uStack_2a0;
LAB_103d9b494:
                func_0x000103da2994(puVar3,0x113008538,&UNK_10dc8da00);
LAB_103d9b498:
                lVar6 = param_1[0xf];
                func_0x000100e25fcc(lVar6,param_1[0x10],param_2[0xf],param_2[0x10]);
                uVar2 = (uint)lVar6;
                goto LAB_103d9b7bc;
              }
LAB_103d9b5f0:
              uStack_21f = CONCAT17(cStack_188,uStack_18f);
              uStack_227 = uStack_197;
              uStack_220 = uStack_190;
              uStack_260 = CONCAT71(uStack_1cf,cStack_1d0);
              uStack_2a0 = uVar13;
              lStack_298 = lStack_208;
              uStack_290 = uVar11;
              lStack_288 = lVar6;
              lStack_280 = lStack_1f0;
              lStack_278 = lStack_1e8;
              lStack_270 = lStack_1e0;
              lStack_268 = lStack_1d8;
              lStack_258 = lStack_1c8;
              lStack_250 = lStack_1c0;
              lStack_248 = lStack_1b8;
              lStack_240 = lStack_1b0;
              lStack_238 = lStack_1a8;
              lStack_230 = lStack_1a0;
              uStack_228 = uStack_198;
              func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
              func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
              uVar4 = 0x113009260;
              puVar5 = &UNK_10dc90368;
              puVar3 = &uStack_2a0;
            }
            else {
              if (cStack_188 == -1) goto LAB_103d9b5f0;
              lStack_298 = param_2[7];
              uStack_2a0 = param_2[6];
              lVar7 = param_2[9];
              uVar12 = param_2[8];
              lStack_278 = param_2[0xb];
              lStack_280 = param_2[10];
              lStack_268 = param_2[0xd];
              lStack_270 = param_2[0xc];
              cVar1 = (char)param_2[0xe];
              uStack_260 = CONCAT71(uStack_260._1_7_,cVar1);
              uStack_290 = uVar12;
              lStack_288 = lVar7;
              if (cStack_1d0 == '\x01') {
                if (cVar1 != '\x01') goto LAB_103d9b680;
                if (((uVar13 == uStack_2a0) && (lStack_208 == lStack_298)) ||
                   (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
                  func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  func_0x000100e25fcc(uVar11,lVar6,uVar12,lVar7);
                  func_0x000103da2994(&uStack_2a0,0x113008538,&UNK_10dc8da00);
                  if ((uVar11 & 1) != 0) {
                    puVar3 = &uStack_210;
                    goto LAB_103d9b494;
                  }
                }
                else {
                  func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  func_0x000103da2994(&uStack_2a0,0x113008538,&UNK_10dc8da00);
                }
                uVar4 = 0x113008538;
                puVar5 = &UNK_10dc8da00;
                puVar3 = &uStack_210;
              }
              else {
                lStack_b8 = param_1[0xb];
                lStack_c0 = param_1[10];
                lStack_a8 = param_1[0xd];
                lStack_b0 = param_1[0xc];
                uStack_e0 = uVar13;
                lStack_d8 = lStack_208;
                uStack_d0 = uVar11;
                lStack_c8 = lVar6;
                if (cVar1 != '\x01') {
                  lStack_78 = param_2[0xb];
                  lStack_80 = param_2[10];
                  lStack_68 = param_2[0xd];
                  lStack_70 = param_2[0xc];
                  uStack_a0 = uStack_2a0;
                  lStack_98 = lStack_298;
                  uStack_90 = uVar12;
                  lStack_88 = lVar7;
                  func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
                  puVar3 = &uStack_e0;
                  FUN_103d98600(puVar3,&uStack_a0);
                  func_0x000103da2994(&uStack_2a0,0x113008538,&UNK_10dc8da00);
                  func_0x000103da2994(&uStack_210,0x113008538,&UNK_10dc8da00);
                  if (((ulong)puVar3 & 1) != 0) goto LAB_103d9b498;
                  goto LAB_103d9b7b8;
                }
LAB_103d9b680:
                func_0x000103da2a94(&lStack_130,auStack_2e8,0x113008538,&UNK_10dc8da00);
                func_0x000103da2a94(&lStack_180,auStack_2e8,0x113008538,&UNK_10dc8da00);
                func_0x000103da2994(&uStack_2a0,0x113008538,&UNK_10dc8da00);
                puVar3 = &uStack_210;
                uVar4 = 0x113008538;
                puVar5 = &UNK_10dc8da00;
              }
            }
            func_0x000103da2994(puVar3,uVar4,puVar5);
          }
        }
      }
    }
    else if (lVar6 == 1) goto LAB_103d9b354;
  }
  else if (lVar7 == 2) {
    if (lVar6 == 2) goto LAB_103d9b354;
  }
  else if (lVar6 == 3) goto LAB_103d9b354;
LAB_103d9b7b8:
  uVar2 = 0;
LAB_103d9b7bc:
  return uVar2 & 1;
}



/* Entry: 103d9b7e0; end: 103d9bf9f;  */

void FUN_103d9b7e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130087d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e0b0;
  func_0x000107c61520(&UNK_10dc8e0b0,&UNK_11070ca18);
  puRam00000001130087d8 = puVar1;
  return;
}



/* Entry: 103d9bfa0; end: 103d9bfb3;  */

void FUN_103d9bfa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9bfb4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d9bff4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9bfb4; end: 103d9c05f;  */

void FUN_103d9bfb4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130089c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8db28;
  func_0x000107c61520(&UNK_10dc8db28,&UNK_11070c9a0);
  puRam00000001130089c8 = puVar1;
  return;
}



/* Entry: 103d9c060; end: 103d9c063;  */

void FUN_103d9c060(void)

{
  undefined *puVar1;
  
  if (puRam00000001130089e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8db68;
  func_0x000107c61520(&UNK_10dc8db68,&UNK_11070c9a0);
  puRam00000001130089e8 = puVar1;
  return;
}



/* Entry: 103d9c064; end: 103d9c0a3;  */

void FUN_103d9c064(void)

{
  undefined *puVar1;
  
  if (puRam00000001130089e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8db68;
  func_0x000107c61520(&UNK_10dc8db68,&UNK_11070c9a0);
  puRam00000001130089e8 = puVar1;
  return;
}



/* Entry: 103d9c0a4; end: 103d9c0b7;  */

void FUN_103d9c0a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c0b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d9c0f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c0b8; end: 103d9c163;  */

void FUN_103d9c0b8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130089f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dc50;
  func_0x000107c61520(&UNK_10dc8dc50,&UNK_11070cb50);
  puRam00000001130089f0 = puVar1;
  return;
}



/* Entry: 103d9c164; end: 103d9c167;  */

void FUN_103d9c164(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dc90;
  func_0x000107c61520(&UNK_10dc8dc90,&UNK_11070cb50);
  puRam0000000113008a10 = puVar1;
  return;
}



/* Entry: 103d9c168; end: 103d9c1a7;  */

void FUN_103d9c168(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dc90;
  func_0x000107c61520(&UNK_10dc8dc90,&UNK_11070cb50);
  puRam0000000113008a10 = puVar1;
  return;
}



/* Entry: 103d9c1a8; end: 103d9c1bb;  */

void FUN_103d9c1a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c1bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d9c1fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c1bc; end: 103d9c267;  */

void FUN_103d9c1bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dd78;
  func_0x000107c61520(&UNK_10dc8dd78,&UNK_11070d260);
  puRam0000000113008a18 = puVar1;
  return;
}



/* Entry: 103d9c268; end: 103d9c26b;  */

void FUN_103d9c268(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8ddb8;
  func_0x000107c61520(&UNK_10dc8ddb8,&UNK_11070d260);
  puRam0000000113008a38 = puVar1;
  return;
}



/* Entry: 103d9c26c; end: 103d9c2ab;  */

void FUN_103d9c26c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8ddb8;
  func_0x000107c61520(&UNK_10dc8ddb8,&UNK_11070d260);
  puRam0000000113008a38 = puVar1;
  return;
}



/* Entry: 103d9c2ac; end: 103d9c2bf;  */

void FUN_103d9c2ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c2c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d9c300)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c2c0; end: 103d9c36b;  */

void FUN_103d9c2c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dec8;
  func_0x000107c61520(&UNK_10dc8dec8,&UNK_11070d730);
  puRam0000000113008a40 = puVar1;
  return;
}



/* Entry: 103d9c36c; end: 103d9c36f;  */

void FUN_103d9c36c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8df08;
  func_0x000107c61520(&UNK_10dc8df08,&UNK_11070d730);
  puRam0000000113008a60 = puVar1;
  return;
}



/* Entry: 103d9c370; end: 103d9c3af;  */

void FUN_103d9c370(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8df08;
  func_0x000107c61520(&UNK_10dc8df08,&UNK_11070d730);
  puRam0000000113008a60 = puVar1;
  return;
}



/* Entry: 103d9c3b0; end: 103d9c3c3;  */

void FUN_103d9c3b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c3c4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d9c404)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c3c4; end: 103d9c46f;  */

void FUN_103d9c3c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8dfc8;
  func_0x000107c61520(&UNK_10dc8dfc8,&UNK_11070da50);
  puRam0000000113008a68 = puVar1;
  return;
}



/* Entry: 103d9c470; end: 103d9c4b3;  */

void FUN_103d9c470(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103d9c4b4; end: 103d9c4b7;  */

void FUN_103d9c4b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e008;
  func_0x000107c61520(&UNK_10dc8e008,&UNK_11070da50);
  puRam0000000113008a88 = puVar1;
  return;
}



/* Entry: 103d9c4b8; end: 103d9c4f7;  */

void FUN_103d9c4b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e008;
  func_0x000107c61520(&UNK_10dc8e008,&UNK_11070da50);
  puRam0000000113008a88 = puVar1;
  return;
}



/* Entry: 103d9c4f8; end: 103d9c51b;  */

void FUN_103d9c4f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c51c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d9c51c; end: 103d9c55b;  */

void FUN_103d9c51c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e088;
  func_0x000107c61520(&UNK_10dc8e088,&UNK_11070ca18);
  puRam0000000113008a90 = puVar1;
  return;
}



/* Entry: 103d9c55c; end: 103d9c573;  */

void FUN_103d9c55c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9b7e0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd1938)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c574; end: 103d9c5b3;  */

void FUN_103d9c574(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e0f0;
  func_0x000107c61520(&UNK_10dc8e0f0,&UNK_11070ca18);
  puRam0000000113008a98 = puVar1;
  return;
}



/* Entry: 103d9c5b4; end: 103d9c5d7;  */

void FUN_103d9c5b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c5d8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d9c5d8; end: 103d9c617;  */

void FUN_103d9c5d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e170;
  func_0x000107c61520(&UNK_10dc8e170,&UNK_11070cbc8);
  puRam0000000113008aa0 = puVar1;
  return;
}



/* Entry: 103d9c618; end: 103d9c62f;  */

void FUN_103d9c618(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d9b820)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103ccc74c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c630; end: 103d9c66f;  */

void FUN_103d9c630(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e1d8;
  func_0x000107c61520(&UNK_10dc8e1d8,&UNK_11070cbc8);
  puRam0000000113008aa8 = puVar1;
  return;
}



/* Entry: 103d9c670; end: 103d9c693;  */

void FUN_103d9c670(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c694();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d9c694; end: 103d9c6d3;  */

void FUN_103d9c694(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e248;
  func_0x000107c61520(&UNK_10dc8e248,&UNK_11070cc48);
  puRam0000000113008ab0 = puVar1;
  return;
}



/* Entry: 103d9c6d4; end: 103d9c6e7;  */

void FUN_103d9c6d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d9b860)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d9c6e8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c6e8; end: 103d9c727;  */

void FUN_103d9c6e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8e200;
  func_0x000107c61520(&DAT_10dc8e200,&UNK_11070cc48);
  puRam0000000113008ab8 = puVar1;
  return;
}



/* Entry: 103d9c728; end: 103d9c72b;  */

void FUN_103d9c728(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e2b0;
  func_0x000107c61520(&UNK_10dc8e2b0,&UNK_11070cc48);
  puRam0000000113008ac0 = puVar1;
  return;
}



/* Entry: 103d9c72c; end: 103d9c76b;  */

void FUN_103d9c72c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e2b0;
  func_0x000107c61520(&UNK_10dc8e2b0,&UNK_11070cc48);
  puRam0000000113008ac0 = puVar1;
  return;
}



/* Entry: 103d9c76c; end: 103d9c78f;  */

void FUN_103d9c76c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d9c790();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d9c790; end: 103d9c7cf;  */

void FUN_103d9c790(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc8e320;
  func_0x000107c61520(&UNK_10dc8e320,&UNK_11070ccc8);
  puRam0000000113008ac8 = puVar1;
  return;
}



/* Entry: 103d9c7d0; end: 103d9c7e3;  */

void FUN_103d9c7d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d9b8a0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d9c7e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d9c7e4; end: 103d9c823;  */

void FUN_103d9c7e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113008ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc8e2d8;
  func_0x000107c61520(&DAT_10dc8e2d8,&UNK_11070ccc8);
  puRam0000000113008ad0 = puVar1;
  return;
}


