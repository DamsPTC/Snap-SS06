/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103903aa8; end: 103903b63;  */

/* WARNING: Removing unreachable block (ram,0x000103903b40) */

void FUN_103903aa8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103903afc:
  do {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) {
      pcVar3 = *(code **)(param_3 + 0x150);
      lVar1 = unaff_x20 + 0x30;
    }
    else {
      if (lVar1 != 2) {
        if (lVar1 == 1) {
          FUN_103903b64();
        }
        goto LAB_103903afc;
      }
      pcVar3 = *(code **)(param_3 + 0x138);
      lVar1 = unaff_x20 + 0x28;
    }
    (*pcVar3)(lVar1,param_2,param_3);
  } while( true );
}



/* Entry: 103903b64; end: 103903d1b;  */

/* WARNING: Removing unreachable block (ram,0x000103903c98) */

void FUN_103903b64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  ulong uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 2;
  uStack_70 = 0;
  uVar13 = (ulong)*(byte *)(param_1 + 2);
  puVar6 = param_1;
  if (uVar13 != 2) {
    uVar7 = param_1[3];
    uVar10 = param_1[4];
    uVar8 = *param_1;
    uVar1 = param_1[1];
    func_0x00010006c00c(uVar7,uVar10);
    puVar6 = (undefined8 *)0x0;
    func_0x000100d62cb8(0,0,2,0,0);
    uStack_78 = uVar13 & 1;
    uStack_88 = uVar8;
    uStack_80 = uVar1;
    uStack_70 = uVar7;
    uStack_68 = uVar10;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x000101b8817c();
  (*pcVar12)(&uStack_88,&UNK_1106aaf48,puVar6,param_3,param_4);
  uVar5 = uStack_68;
  uVar4 = uStack_70;
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  uVar1 = uStack_88;
  uVar7 = uStack_88;
  uVar8 = uStack_80;
  uVar9 = uStack_78;
  uVar10 = uStack_70;
  uVar11 = uStack_68;
  if ((unaff_x21 == 0) && ((uStack_78 & 0xff) != 2)) {
    if (uVar13 == 2) {
      func_0x00010006c00c(uStack_70,uStack_68);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_70,uStack_68);
      (*pcVar12)(param_3,param_4);
    }
    func_0x000100d62cb8(uStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar7 = *param_1;
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3 & 1;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  func_0x000100d62cb8(uVar7,uVar8,uVar9,uVar10,uVar11);
  return;
}



/* Entry: 103903d1c; end: 103903dcf;  */

void FUN_103903d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long unaff_x21;
  
  FUN_103903dd0();
  if (unaff_x21 == 0) {
    if (*(char *)(unaff_x20 + 0x28) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,2,param_2,param_3);
    }
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    uVar1 = *(ulong *)(unaff_x20 + 0x30) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 0x30),uVar2,3,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103903dd0; end: 103903e83;  */

void FUN_103903dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_a0 = param_1[4];
  if ((uStack_b0 & 0xff) != 2) {
    func_0x000103906ee0(&uStack_c0,auStack_90);
    puVar1 = auStack_90;
    func_0x000103906ee0(puVar1,&uStack_68);
    uStack_e8 = uStack_60;
    uStack_f0 = uStack_68;
    uStack_d8 = uStack_50;
    uStack_e0 = uStack_58;
    uStack_d0 = uStack_48;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101b8817c();
    (*pcVar2)(&uStack_f0,1,&UNK_1106aaf48,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103903e84; end: 103903eeb;  */

void FUN_103903e84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  return;
}



/* Entry: 103903eec; end: 103903eff;  */

void FUN_103903eec(void)

{
  FUN_103903aa8();
  return;
}



/* Entry: 103903f00; end: 103903f3f;  */

void FUN_103903f00(void)

{
  FUN_103903d1c();
  return;
}



/* Entry: 103903f40; end: 103903f77;  */

uint FUN_103903f40(long param_1,long param_2)

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
  func_0x00010390adfc();
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



/* Entry: 103903f78; end: 103903fcf;  */

uint FUN_103903f78(undefined8 *param_1)

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
  FUN_103906b80(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103903fd0; end: 10390406f;  */

/* WARNING: Possible PIC construction at 0x00010390401c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010390402c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103904020) */
/* WARNING: Removing unreachable block (ram,0x000103904030) */

void FUN_103903fd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fadd28 != -1) {
    func_0x000107c61568(0x112fadd28,FUN_103903a60);
  }
  uVar5 = uRam000000011380bf38;
  uVar4 = uRam000000011380bf30;
  uVar3 = uRam000000011380bf28;
  uVar2 = uRam000000011380bf20;
  uVar1 = uRam000000011380bf18;
  *param_1 = uRam000000011380bf10;
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



/* Entry: 103904070; end: 103904083;  */

void FUN_103904070(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fadea0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fadea0,&UNK_10dc21de0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103904084; end: 1039040b7;  */

void FUN_103904084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1039040b8; end: 1039041cb;  */

void FUN_1039040b8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1039041cc; end: 103904223;  */

uint FUN_1039041cc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103906b80(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103904224; end: 10390428b;  */

void FUN_103904224(void)

{
  func_0x000107c5fb78(0x736d617261502e,0xe700000000000000);
  uRam000000011380bf40 = 0xd00000000000001a;
  uRam000000011380bf48 = 0x800000010f175780;
  return;
}



/* Entry: 10390428c; end: 1039042c3;  */

void FUN_10390428c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380bf58 = uStack_38;
  uRam000000011380bf50 = uStack_40;
  uRam000000011380bf68 = uStack_28;
  uRam000000011380bf60 = uStack_30;
  uRam000000011380bf78 = uStack_18;
  uRam000000011380bf70 = uStack_20;
  return;
}



/* Entry: 1039042c4; end: 10390430f;  */

void FUN_1039042c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103904310; end: 103904323;  */

void FUN_103904310(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 103904324; end: 10390435b;  */

void FUN_103904324(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 10390435c; end: 10390438b;  */

undefined1  [16] FUN_10390435c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10390438c; end: 1039043bf;  */

void FUN_10390438c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1039043c0; end: 1039043d3;  */

undefined8 FUN_1039043c0(void)

{
  return 0x1039043d0;
}



/* Entry: 1039043d4; end: 103904407;  */

void FUN_1039043d4(void)

{
  FUN_1039042c4();
  return;
}



/* Entry: 103904408; end: 10390440b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103904408(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10390440c; end: 103904443;  */

uint FUN_10390440c(long param_1,long param_2)

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
  func_0x00010390adbc();
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



/* Entry: 103904444; end: 10390444f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103904444(long *param_1)

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
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  undefined8 *unaff_x20;
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
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
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
        uVar22 = uVar16 >> 0x30 & 0xff;
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
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
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
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
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
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
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
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
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
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103904450; end: 1039044ef;  */

/* WARNING: Possible PIC construction at 0x00010390449c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039044ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039044a0) */
/* WARNING: Removing unreachable block (ram,0x0001039044b0) */

void FUN_103904450(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fadd40 != -1) {
    func_0x000107c61568(0x112fadd40,FUN_10390428c);
  }
  uVar5 = uRam000000011380bf78;
  uVar4 = uRam000000011380bf70;
  uVar3 = uRam000000011380bf68;
  uVar2 = uRam000000011380bf60;
  uVar1 = uRam000000011380bf58;
  *param_1 = uRam000000011380bf50;
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



/* Entry: 1039044f0; end: 10390452b;  */

void FUN_1039044f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fade90;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fade90,&UNK_10dc21dd8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10390452c; end: 10390461f;  */

void FUN_10390452c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103904620; end: 103904633;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103904620(undefined8 *param_1,long *param_2)

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
  
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
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
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
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
        uVar22 = uVar16 >> 0x30 & 0xff;
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
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
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
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
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
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
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
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
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
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
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



/* Entry: 103904634; end: 10390467b;  */

void FUN_103904634(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc21e30,0x13,2);
  uRam000000011380bf88 = uStack_38;
  uRam000000011380bf80 = uStack_40;
  uRam000000011380bf98 = uStack_28;
  uRam000000011380bf90 = uStack_30;
  uRam000000011380bfa8 = uStack_18;
  uRam000000011380bfa0 = uStack_20;
  return;
}



/* Entry: 10390467c; end: 10390474f;  */

/* WARNING: Removing unreachable block (ram,0x00010390474c) */

void FUN_10390467c(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001038fe398();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1106aa4d0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x60))();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103904750; end: 1039047cb;  */

void FUN_103904750(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_1039047cc();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x20))(*unaff_x20,2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1039047cc; end: 10390484b;  */

void FUN_1039047cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001038fe398();
    (*pcVar1)(&lStack_58,1,&UNK_1106aa4d0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10390484c; end: 103904883;  */

void FUN_10390484c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 103904884; end: 1039048b3;  */

undefined1  [16] FUN_103904884(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1039048b4; end: 1039048e7;  */

void FUN_1039048b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1039048e8; end: 1039048fb;  */

undefined1  [16] FUN_1039048e8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1039048f8;
  return auVar1;
}



/* Entry: 1039048fc; end: 10390490f;  */

void FUN_1039048fc(void)

{
  FUN_10390467c();
  return;
}



/* Entry: 103904910; end: 103904947;  */

void FUN_103904910(void)

{
  FUN_103904750();
  return;
}



/* Entry: 103904948; end: 10390494b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103904948(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10390494c; end: 103904983;  */

uint FUN_10390494c(long param_1,long param_2)

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
  FUN_10390ad7c();
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



/* Entry: 103904984; end: 1039049cb;  */

uint FUN_103904984(undefined8 *param_1)

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
  FUN_103906fb8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1039049cc; end: 103904a6b;  */

/* WARNING: Possible PIC construction at 0x000103904a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103904a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103904a1c) */
/* WARNING: Removing unreachable block (ram,0x000103904a2c) */

void FUN_1039049cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fadd50 != -1) {
    func_0x000107c61568(0x112fadd50,FUN_103904634);
  }
  uVar5 = uRam000000011380bfa8;
  uVar4 = uRam000000011380bfa0;
  uVar3 = uRam000000011380bf98;
  uVar2 = uRam000000011380bf90;
  uVar1 = uRam000000011380bf88;
  *param_1 = uRam000000011380bf80;
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



/* Entry: 103904a6c; end: 103904aa7;  */

void FUN_103904a6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fade80;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fade80,&UNK_10dc21dd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103904aa8; end: 103904bab;  */

void FUN_103904aa8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103904bac; end: 103904bef;  */

uint FUN_103904bac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103906fb8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103904bf0; end: 10390692b;  */

/* WARNING: Possible PIC construction at 0x000103904e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103904ea0) */
/* WARNING: Removing unreachable block (ram,0x000103904eb8) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_103904bf0(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar9;
  undefined1 uVar10;
  undefined *puVar11;
  code *pcVar12;
  uint uVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  int iVar32;
  byte *unaff_x19;
  ulong uVar33;
  byte *unaff_x20;
  undefined *unaff_x21;
  byte *unaff_x22;
  ulong uVar34;
  byte *unaff_x23;
  undefined *unaff_x24;
  undefined *puVar35;
  byte *unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  undefined8 uVar36;
  ulong uVar37;
  undefined8 uVar38;
  ulong uVar39;
  long lVar40;
  undefined *puVar41;
  byte *pbVar42;
  long lVar43;
  undefined1 auStack_3e8 [24];
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  byte *pbStack_390;
  byte *pbStack_388;
  byte *pbStack_380;
  byte *pbStack_378;
  undefined *puStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  undefined *puStack_358;
  byte *pbStack_350;
  byte *pbStack_348;
  undefined1 *puStack_340;
  undefined8 uStack_338;
  byte *pbStack_328;
  undefined *puStack_320;
  long lStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  long *plStack_2f8;
  undefined *puStack_2f0;
  byte abStack_2e8 [24];
  long lStack_2d0;
  byte *pbStack_2c8;
  undefined *puStack_2c0;
  long *plStack_2b8;
  byte *pbStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  byte abStack_290 [14];
  undefined2 uStack_282;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  byte abStack_210 [14];
  undefined2 uStack_202;
  byte *pbStack_200;
  byte *pbStack_1f8;
  undefined *puStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  char cStack_1d8;
  undefined7 uStack_1d7;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  byte *pbStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  long lStack_e8;
  byte bStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  long *plStack_98;
  byte *pbStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar21 = *(byte **)(param_1 + 0x10);
  if (pbVar21 == *(byte **)(param_2 + 0x10)) {
    if ((pbVar21 != (byte *)0x0) && (param_1 != param_2)) {
      puStack_2f0 = (undefined *)0x0;
      unaff_x26 = param_1 + 0x20;
      unaff_x19 = param_2 + 0x20;
      unaff_x20 = pbVar21;
      do {
        unaff_x25 = (byte *)0x112fadbb8;
        unaff_x21 = &UNK_10dc21180;
        unaff_x28 = abStack_290;
        pbVar21 = unaff_x20 + -1;
        unaff_x22 = abStack_210;
        lStack_158 = *(long *)(unaff_x26 + 0x38);
        lStack_160 = *(long *)(unaff_x26 + 0x30);
        pbStack_148 = *(byte **)(unaff_x26 + 0x48);
        lStack_150 = *(long *)(unaff_x26 + 0x40);
        pbVar16 = *(byte **)(unaff_x26 + 0x18);
        pbVar42 = *(byte **)(unaff_x26 + 0x10);
        lStack_168 = *(long *)(unaff_x26 + 0x28);
        lStack_170 = *(long *)(unaff_x26 + 0x20);
        lStack_188 = *(long *)(unaff_x26 + 8);
        lStack_190 = *(long *)unaff_x26;
        lStack_178 = *(long *)(unaff_x26 + 0x18);
        lStack_180 = *(long *)(unaff_x26 + 0x10);
        lVar43 = *(long *)(unaff_x26 + 8);
        lVar24 = *(long *)unaff_x26;
        lStack_1c8 = *(long *)(unaff_x19 + 8);
        lStack_1d0 = *(long *)unaff_x19;
        lStack_128 = *(long *)(unaff_x19 + 0x18);
        lStack_130 = *(long *)(unaff_x19 + 0x10);
        lStack_1b8 = *(long *)(unaff_x19 + 0x18);
        lStack_1c0 = *(long *)(unaff_x19 + 0x10);
        lStack_118 = *(long *)(unaff_x19 + 0x28);
        lStack_120 = *(long *)(unaff_x19 + 0x20);
        lStack_108 = *(long *)(unaff_x19 + 0x38);
        lStack_110 = *(long *)(unaff_x19 + 0x30);
        pbStack_f8 = *(byte **)(unaff_x19 + 0x48);
        puStack_100 = *(undefined **)(unaff_x19 + 0x40);
        lStack_138 = *(long *)(unaff_x19 + 8);
        lStack_140 = *(long *)unaff_x19;
        uVar36 = *(undefined8 *)(unaff_x26 + 0x31);
        uStack_1df = (undefined7)uVar36;
        cStack_1d8 = (char)((ulong)uVar36 >> 0x38);
        uStack_1e0 = (undefined1)((ulong)*(undefined8 *)(unaff_x26 + 0x29) >> 0x38);
        abStack_210[8] = (byte)lVar43;
        abStack_210[9] = (byte)((ulong)lVar43 >> 8);
        abStack_210[10] = (byte)((ulong)lVar43 >> 0x10);
        abStack_210[0xb] = (byte)((ulong)lVar43 >> 0x18);
        abStack_210[0xc] = (byte)((ulong)lVar43 >> 0x20);
        abStack_210[0xd] = (byte)((ulong)lVar43 >> 0x28);
        uStack_202 = (undefined2)((ulong)lVar43 >> 0x30);
        abStack_210[0] = (byte)lVar24;
        abStack_210[1] = (byte)((ulong)lVar24 >> 8);
        abStack_210[2] = (byte)((ulong)lVar24 >> 0x10);
        abStack_210[3] = (byte)((ulong)lVar24 >> 0x18);
        abStack_210[4] = (byte)((ulong)lVar24 >> 0x20);
        abStack_210[5] = (byte)((ulong)lVar24 >> 0x28);
        abStack_210[6] = (byte)((ulong)lVar24 >> 0x30);
        abStack_210[7] = (byte)((ulong)lVar24 >> 0x38);
        lVar23 = *(long *)(unaff_x26 + 0x28);
        puVar35 = *(undefined **)(unaff_x26 + 0x20);
        uStack_1e8 = (undefined1)lVar23;
        uStack_1e7 = (undefined7)((ulong)lVar23 >> 8);
        lStack_1b0 = *(long *)(unaff_x19 + 0x20);
        uStack_1a8 = (undefined1)*(long *)(unaff_x19 + 0x28);
        uVar38 = *(undefined8 *)(unaff_x19 + 0x31);
        uStack_1a7 = (undefined7)*(undefined8 *)(unaff_x19 + 0x29);
        uStack_1a0 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x29) >> 0x38);
        uStack_19f._7_1_ = (char)((ulong)uVar38 >> 0x38);
        pbStack_200 = pbVar42;
        pbStack_1f8 = pbVar16;
        puStack_1f0 = puVar35;
        uStack_19f = uVar38;
        if (cStack_1d8 != '\x01') {
          if (uStack_19f._7_1_ == '\x01') goto LAB_103906408;
          pbVar19 = *(byte **)(unaff_x19 + 8);
          lStack_2d0 = *(long *)unaff_x19;
          plStack_2b8 = *(long **)(unaff_x19 + 0x18);
          puVar41 = *(undefined **)(unaff_x19 + 0x10);
          uVar27 = *(ulong *)(unaff_x19 + 0x31);
          uStack_29f = (undefined7)uVar27;
          uStack_298 = (undefined1)(uVar27 >> 0x38);
          uStack_2a0 = (undefined1)((ulong)*(undefined8 *)(unaff_x19 + 0x29) >> 0x38);
          lVar40 = *(long *)(unaff_x19 + 0x28);
          pbStack_2b0 = *(byte **)(unaff_x19 + 0x20);
          uStack_2a8 = (undefined1)lVar40;
          uStack_2a7 = (undefined7)((ulong)lVar40 >> 8);
          uVar31 = (uint)((ulong)uVar36 >> 0x18) >> 0x1c & 3;
          iVar25 = (int)lVar43;
          iVar26 = (int)((ulong)lVar43 >> 0x20);
          lVar22 = lVar43 >> 0x20;
          iVar32 = (int)pbVar19;
          uVar2 = SUB81(pbVar42,0);
          iVar28 = (int)((ulong)pbVar19 >> 0x20);
          uVar3 = (undefined1)((ulong)pbVar42 >> 8);
          uVar4 = (undefined1)((ulong)pbVar42 >> 0x10);
          uVar5 = (undefined1)((ulong)pbVar42 >> 0x18);
          uVar6 = (undefined1)((ulong)pbVar42 >> 0x20);
          uVar7 = (undefined1)((ulong)lVar43 >> 0x30);
          uVar8 = (undefined1)((ulong)pbVar42 >> 0x28);
          bVar1 = (byte)((ulong)pbVar42 >> 0x30);
          uVar10 = (undefined1)((ulong)lVar43 >> 0x38);
          uVar13 = (uint)((ulong)pbVar42 >> 0x20);
          uVar20 = (uint)((ulong)puVar41 >> 0x20);
          unaff_x21 = puVar41;
          unaff_x24 = puVar35;
          pbStack_2c8 = pbVar19;
          puStack_2c0 = puVar41;
          if (uVar31 < 2) {
            if (uVar31 != 0) {
              if (((uVar27 & 0x30000000000000) != 0x10000000000000) ||
                 ((uint)lVar24 != (uint)lStack_2d0)) goto LAB_103906374;
              uVar31 = uVar13 >> 0x1e;
              if ((ulong)pbVar42 >> 0x3e == 3) {
                uVar27 = 0;
                if ((((lVar43 != 0) || (pbVar42 != (byte *)0xc000000000000000)) ||
                    ((ulong)puVar41 >> 0x3e < 3)) ||
                   ((uVar27 = 0, pbVar19 != (byte *)0x0 ||
                    (puVar41 != (undefined *)0xc000000000000000)))) goto LAB_1039052a4;
LAB_1039053fc:
                FUN_10390b140(&lStack_190,abStack_290);
                FUN_10390b140(&lStack_140,abStack_290);
                func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
LAB_103905db8:
                FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
              }
              else {
                if (uVar13 >> 0x1e < 2) {
                  if (uVar31 == 0) {
                    uVar27 = (ulong)pbVar42 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar26,iVar25)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906580);
                      (*pcVar12)();
                    }
                    uVar27 = (ulong)(iVar26 - iVar25);
                  }
                }
                else if (uVar31 == 2) {
                  uVar27 = *(long *)(lVar43 + 0x18) - *(long *)(lVar43 + 0x10);
                  if (SBORROW8(*(long *)(lVar43 + 0x18),*(long *)(lVar43 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x103906574);
                    (*pcVar12)();
                  }
                }
                else {
                  uVar27 = 0;
                }
LAB_1039052a4:
                pbVar16 = (byte *)0x112fadbb8;
                if (uVar20 >> 0x1e < 2) {
                  if (uVar20 >> 0x1e == 0) {
                    uVar30 = (ulong)puVar41 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar28,iVar32)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906554);
                      (*pcVar12)();
                    }
                    uVar30 = (ulong)(iVar28 - iVar32);
                  }
                }
                else {
                  if (uVar20 >> 0x1e != 2) {
                    if (uVar27 != 0) goto LAB_103906374;
                    goto LAB_1039053fc;
                  }
                  uVar30 = *(long *)(pbVar19 + 0x18) - *(long *)(pbVar19 + 0x10);
                  if (SBORROW8(*(long *)(pbVar19 + 0x18),*(long *)(pbVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10390655c);
                    (*pcVar12)();
                  }
                }
                if (uVar27 != uVar30) goto LAB_103906374;
                if ((long)uVar27 < 1) goto LAB_1039053fc;
                if (uVar31 < 2) {
                  if (uVar31 == 0) {
                    unaff_x20 = abStack_2e8 + bVar1;
                    abStack_2e8[0] = abStack_210[8];
                    abStack_2e8[1] = abStack_210[9];
                    abStack_2e8[2] = abStack_210[10];
                    abStack_2e8[3] = abStack_210[0xb];
                    abStack_2e8[4] = abStack_210[0xc];
                    abStack_2e8[5] = abStack_210[0xd];
                    abStack_2e8[6] = uVar7;
                    abStack_2e8[7] = uVar10;
                    abStack_2e8[8] = uVar2;
                    abStack_2e8[9] = uVar3;
                    abStack_2e8[10] = uVar4;
                    abStack_2e8[0xb] = uVar5;
                    abStack_2e8[0xc] = uVar6;
                    abStack_2e8[0xd] = uVar8;
                    FUN_10390b140(&lStack_190,abStack_290);
                    FUN_10390b140(&lStack_140,abStack_290);
                    func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    puVar11 = puStack_2f0;
                    func_0x000100e25bdc(abStack_290,abStack_2e8,unaff_x20,pbVar19,puVar41);
                    puVar35 = &UNK_10dc21180;
                    pbVar42 = pbVar19;
                    puStack_2f0 = puVar11;
                  }
                  else {
                    puVar35 = (undefined *)(long)iVar25;
                    plStack_2f8 = (long *)(lVar22 - (long)puVar35);
                    if (lVar22 < (long)puVar35) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906590);
                      pbStack_308 = pbVar19;
                      (*pcVar12)();
                    }
                    pbStack_308 = pbVar19;
                    FUN_10390b140(&lStack_190,abStack_290);
                    FUN_10390b140(&lStack_140,abStack_290);
                    func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    plVar17 = &lStack_140;
                    func_0x00010390b1a0(plVar17,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    func_0x000107c5ec30();
                    if (plVar17 == (long *)0x0) {
                      func_0x000107c5ec38();
                      lVar23 = 0;
                      lVar24 = 0;
                    }
                    else {
                      plVar14 = plVar17;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)puVar35,(long)plVar14)) {
                    /* WARNING: Does not return */
                        pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065c0);
                        (*pcVar12)();
                      }
                      lVar23 = ((long)puVar35 - (long)plVar14) + (long)plVar17;
                      func_0x000107c5ec38();
                      if (lVar23 == 0) {
                        lVar24 = 0;
                      }
                      else {
                        if ((long)plStack_2f8 <= (long)plVar14) {
                          plVar14 = plStack_2f8;
                        }
                        lVar24 = (long)plVar14 + lVar23;
                      }
                    }
                    puVar11 = puStack_2f0;
                    func_0x000100e25bdc(abStack_290,lVar23,lVar24,pbStack_308,puVar41);
                    puStack_2f0 = puVar11;
LAB_103905f8c:
                    unaff_x20 = (byte *)((ulong)pbVar42 & 0x3fffffffffffffff);
                  }
                }
                else {
                  if (uVar31 == 2) {
                    puVar35 = *(undefined **)(lVar43 + 0x10);
                    lVar23 = *(long *)(lVar43 + 0x18);
                    pbStack_308 = pbVar19;
                    FUN_10390b140(&lStack_190,abStack_290);
                    FUN_10390b140(&lStack_140,abStack_290);
                    func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    plVar17 = &lStack_140;
                    func_0x00010390b1a0(plVar17,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    func_0x000107c5ec30();
                    plVar14 = plVar17;
                    if (plVar17 != (long *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)puVar35,(long)plVar14)) {
                    /* WARNING: Does not return */
                        pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065b8);
                        (*pcVar12)();
                      }
                      plVar17 = (long *)(((long)puVar35 - (long)plVar14) + (long)plVar17);
                    }
                    plVar9 = (long *)(lVar23 - (long)puVar35);
                    if (SBORROW8(lVar23,(long)puVar35)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065a4);
                      (*pcVar12)();
                    }
                    func_0x000107c5ec38();
                    puVar11 = puStack_2f0;
                    if (plVar17 == (long *)0x0) {
                      lVar23 = 0;
                    }
                    else {
                      if ((long)plVar9 <= (long)plVar14) {
                        plVar14 = plVar9;
                      }
                      lVar23 = (long)plVar14 + (long)plVar17;
                    }
                    func_0x000100e25bdc(abStack_290,plVar17,lVar23,pbStack_308,puVar41);
                    puStack_2f0 = puVar11;
                    goto LAB_103905f8c;
                  }
                  abStack_2e8[8] = 0;
                  abStack_2e8[9] = 0;
                  abStack_2e8[10] = 0;
                  abStack_2e8[0xb] = 0;
                  abStack_2e8[0xc] = 0;
                  abStack_2e8[0xd] = 0;
                  abStack_2e8[0] = 0;
                  abStack_2e8[1] = 0;
                  abStack_2e8[2] = 0;
                  abStack_2e8[3] = 0;
                  abStack_2e8[4] = 0;
                  abStack_2e8[5] = 0;
                  abStack_2e8[6] = 0;
                  abStack_2e8[7] = 0;
                  pbStack_308 = pbVar19;
                  FUN_10390b140(&lStack_190,abStack_290);
                  FUN_10390b140(&lStack_140,abStack_290);
                  unaff_x20 = &UNK_10dc21180;
                  func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  puVar11 = puStack_2f0;
                  func_0x000100e25bdc(abStack_290,abStack_2e8,abStack_2e8,pbStack_308,puVar41);
                  puStack_2f0 = puVar11;
                }
                unaff_x25 = (byte *)0x112fadbb8;
                unaff_x21 = &UNK_10dc21180;
                FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
                unaff_x23 = pbVar21;
                unaff_x24 = puVar35;
                if ((abStack_290[0] & 1) == 0) goto LAB_1039063f0;
              }
              param_2 = (byte *)0x112fadbb8;
              pbVar16 = abStack_210;
              FUN_10390b03c(pbVar16,0x112fadbb8,&UNK_10dc21180);
              goto LAB_103905fbc;
            }
            if (((uVar27 & 0x30000000000000) != 0) || (lVar24 != lStack_2d0)) {
LAB_103906374:
              FUN_10390b140(&lStack_190,abStack_290);
              FUN_10390b140(&lStack_140,abStack_290);
              unaff_x19 = (byte *)0x112fadbb8;
              pbVar21 = &UNK_10dc21180;
              func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
              func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
LAB_1039063c4:
              FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
              unaff_x20 = pbVar21;
              unaff_x25 = pbVar16;
              goto LAB_1039063f0;
            }
            uVar31 = uVar13 >> 0x1e;
            pbStack_300 = pbStack_2b0;
            plStack_2f8 = plStack_2b8;
            if ((ulong)pbVar42 >> 0x3e == 3) {
              uVar27 = 0;
              if ((((lVar43 != 0) || (pbVar42 != (byte *)0xc000000000000000)) ||
                  ((ulong)puVar41 >> 0x3e < 3)) ||
                 ((uVar27 = 0, pbVar19 != (byte *)0x0 ||
                  (puVar41 != (undefined *)0xc000000000000000)))) goto LAB_103905050;
LAB_1039051b4:
              FUN_10390b140(&lStack_190,abStack_290);
              FUN_10390b140(&lStack_140,abStack_290);
              func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
              pbVar15 = (byte *)&lStack_140;
              func_0x00010390b1a0(pbVar15,abStack_290,0x112fadbb8,&UNK_10dc21180);
              pbVar19 = pbVar21;
              unaff_x27 = pbStack_300;
            }
            else {
              if (uVar13 >> 0x1e < 2) {
                if (uVar31 == 0) {
                  uVar27 = (ulong)pbVar42 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar26,iVar25)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x103906578);
                    (*pcVar12)();
                  }
                  uVar27 = (ulong)(iVar26 - iVar25);
                }
              }
              else if (uVar31 == 2) {
                uVar27 = *(long *)(lVar43 + 0x18) - *(long *)(lVar43 + 0x10);
                if (SBORROW8(*(long *)(lVar43 + 0x18),*(long *)(lVar43 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x103906584);
                  (*pcVar12)();
                }
              }
              else {
                uVar27 = 0;
              }
LAB_103905050:
              if (uVar20 >> 0x1e < 2) {
                if (uVar20 >> 0x1e == 0) {
                  uVar30 = (ulong)puVar41 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar28,iVar32)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x103906560);
                    (*pcVar12)();
                  }
                  uVar30 = (ulong)(iVar28 - iVar32);
                }
              }
              else {
                if (uVar20 >> 0x1e != 2) {
                  if (uVar27 != 0) goto LAB_103906374;
                  goto LAB_1039051b4;
                }
                uVar30 = *(long *)(pbVar19 + 0x18) - *(long *)(pbVar19 + 0x10);
                if (SBORROW8(*(long *)(pbVar19 + 0x18),*(long *)(pbVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x103906564);
                  (*pcVar12)();
                }
              }
              if (uVar27 != uVar30) goto LAB_103906374;
              if ((long)uVar27 < 1) goto LAB_1039051b4;
              if (uVar31 < 2) {
                if (uVar31 != 0) {
                  lStack_318 = (long)iVar25;
                  pbStack_328 = (byte *)(lVar22 - lStack_318);
                  if (lVar22 < lStack_318) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x103906598);
                    pbStack_310 = pbVar21;
                    pbStack_308 = pbVar19;
                    (*pcVar12)();
                  }
                  pbStack_310 = pbVar21;
                  pbStack_308 = pbVar19;
                  FUN_10390b140(&lStack_190,abStack_290);
                  FUN_10390b140(&lStack_140,abStack_290);
                  func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  unaff_x23 = (byte *)&lStack_140;
                  func_0x00010390b1a0(unaff_x23,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  func_0x000107c5ec30();
                  if (unaff_x23 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar15 = (byte *)0x0;
                    pbVar21 = (byte *)0x0;
                    unaff_x23 = &UNK_10dc21180;
                  }
                  else {
                    pbVar21 = unaff_x23;
                    func_0x000107c5ec3c();
                    if (SBORROW8(lStack_318,(long)pbVar21)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065c4);
                      (*pcVar12)();
                    }
                    pbVar15 = unaff_x23 + (lStack_318 - (long)pbVar21);
                    func_0x000107c5ec38();
                    if (pbVar15 == (byte *)0x0) {
                      pbVar21 = (byte *)0x0;
                    }
                    else {
                      if ((long)pbStack_328 <= (long)pbVar21) {
                        pbVar21 = pbStack_328;
                      }
                      pbVar21 = pbVar21 + (long)pbVar15;
                    }
                  }
                  goto LAB_103905bf8;
                }
                pbStack_308 = abStack_2e8 + bVar1;
                pbStack_310 = pbVar21;
                abStack_2e8[0] = abStack_210[8];
                abStack_2e8[1] = abStack_210[9];
                abStack_2e8[2] = abStack_210[10];
                abStack_2e8[3] = abStack_210[0xb];
                abStack_2e8[4] = abStack_210[0xc];
                abStack_2e8[5] = abStack_210[0xd];
                abStack_2e8[6] = uVar7;
                abStack_2e8[7] = uVar10;
                abStack_2e8[8] = uVar2;
                abStack_2e8[9] = uVar3;
                abStack_2e8[10] = uVar4;
                abStack_2e8[0xb] = uVar5;
                abStack_2e8[0xc] = uVar6;
                abStack_2e8[0xd] = uVar8;
                FUN_10390b140(&lStack_190,abStack_290);
                FUN_10390b140(&lStack_140,abStack_290);
                unaff_x23 = &UNK_10dc21180;
                func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                unaff_x21 = puStack_2f0;
                pbVar15 = abStack_2e8;
                func_0x000100e25bdc(abStack_290,pbVar15,pbStack_308,pbVar19,puVar41);
                pbVar21 = pbVar19;
                unaff_x27 = pbStack_300;
                puVar11 = unaff_x21;
              }
              else {
                if (uVar31 != 2) {
                  abStack_2e8[8] = 0;
                  abStack_2e8[9] = 0;
                  abStack_2e8[10] = 0;
                  abStack_2e8[0xb] = 0;
                  abStack_2e8[0xc] = 0;
                  abStack_2e8[0xd] = 0;
                  abStack_2e8[0] = 0;
                  abStack_2e8[1] = 0;
                  abStack_2e8[2] = 0;
                  abStack_2e8[3] = 0;
                  abStack_2e8[4] = 0;
                  abStack_2e8[5] = 0;
                  abStack_2e8[6] = 0;
                  abStack_2e8[7] = 0;
                  pbStack_310 = pbVar21;
                  pbStack_308 = pbVar19;
                  FUN_10390b140(&lStack_190,abStack_290);
                  FUN_10390b140(&lStack_140,abStack_290);
                  pbVar21 = (byte *)0x112fadbb8;
                  unaff_x21 = &UNK_10dc21180;
                  func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  puVar11 = puStack_2f0;
                  pbVar15 = abStack_2e8;
                  func_0x000100e25bdc(abStack_290,pbVar15,abStack_2e8,pbStack_308,puVar41);
                  pbVar19 = pbStack_310;
                  pbVar42 = pbStack_300;
                  unaff_x27 = pbStack_300;
                  puStack_2f0 = puVar11;
                  if ((abStack_290[0] & 1) != 0) goto LAB_103905c1c;
                  goto LAB_1039063c4;
                }
                unaff_x23 = *(byte **)(lVar43 + 0x10);
                lStack_318 = *(long *)(lVar43 + 0x18);
                pbStack_310 = pbVar21;
                pbStack_308 = pbVar19;
                FUN_10390b140(&lStack_190,abStack_290);
                FUN_10390b140(&lStack_140,abStack_290);
                func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                plVar17 = &lStack_140;
                func_0x00010390b1a0(plVar17,abStack_290,0x112fadbb8,&UNK_10dc21180);
                func_0x000107c5ec30();
                puStack_320 = puVar41;
                if (plVar17 == (long *)0x0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  plVar14 = plVar17;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x23,(long)plVar14)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065b4);
                    (*pcVar12)();
                  }
                  pbVar15 = (byte *)(((long)unaff_x23 - (long)plVar14) + (long)plVar17);
                  plVar17 = plVar14;
                }
                plVar14 = (long *)(lStack_318 - (long)unaff_x23);
                if (SBORROW8(lStack_318,(long)unaff_x23)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065a0);
                  (*pcVar12)();
                }
                func_0x000107c5ec38();
                puVar41 = puStack_320;
                if (pbVar15 == (byte *)0x0) {
                  pbVar21 = (byte *)0x0;
                }
                else {
                  if ((long)plVar14 <= (long)plVar17) {
                    plVar17 = plVar14;
                  }
                  pbVar21 = (byte *)((long)plVar17 + (long)pbVar15);
                }
LAB_103905bf8:
                puVar11 = puStack_2f0;
                unaff_x27 = pbStack_300;
                func_0x000100e25bdc(abStack_290,pbVar15,pbVar21,pbStack_308,puVar41);
                unaff_x21 = &UNK_10dc21180;
                pbVar21 = (byte *)((ulong)pbVar42 & 0x3fffffffffffffff);
              }
              pbVar19 = pbStack_310;
              pbVar42 = unaff_x27;
              puStack_2f0 = puVar11;
              if ((abStack_290[0] & 1) == 0) goto LAB_1039063c4;
            }
LAB_103905c1c:
            pbVar21 = pbVar19;
            puVar41 = puStack_2f0;
            uVar13 = (uint)((ulong)puVar35 >> 0x20);
            uVar20 = uVar13 >> 0x1e;
            iVar26 = (int)pbVar16;
            iVar25 = (int)((ulong)pbVar16 >> 0x20);
            if ((ulong)puVar35 >> 0x3e == 3) {
              uVar27 = 0;
              if (((pbVar16 == (byte *)0x0) && (puVar35 == (undefined *)0xc000000000000000)) &&
                 ((2 < (ulong)unaff_x27 >> 0x3e &&
                  ((uVar27 = 0, plStack_2f8 == (long *)0x0 &&
                   (unaff_x27 == (byte *)0xc000000000000000)))))) goto LAB_103905db8;
            }
            else if (uVar13 >> 0x1e < 2) {
              if (uVar20 == 0) {
                uVar27 = (ulong)puVar35 >> 0x30 & 0xff;
              }
              else {
                if (SBORROW4(iVar25,iVar26)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10390658c);
                  (*pcVar12)();
                }
                uVar27 = (ulong)(iVar25 - iVar26);
              }
            }
            else if (uVar20 == 2) {
              uVar27 = *(long *)(pbVar16 + 0x18) - *(long *)(pbVar16 + 0x10);
              if (SBORROW8(*(long *)(pbVar16 + 0x18),*(long *)(pbVar16 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906588);
                (*pcVar12)();
              }
            }
            else {
              uVar27 = 0;
            }
            uVar13 = (uint)((ulong)unaff_x27 >> 0x20);
            uVar31 = uVar13 >> 0x1e;
            unaff_x21 = &UNK_10dc21180;
            unaff_x23 = pbVar21;
            pbVar42 = unaff_x27;
            if (uVar13 >> 0x1e < 2) {
              if (uVar31 == 0) {
                uVar30 = (ulong)unaff_x27 >> 0x30 & 0xff;
              }
              else {
                iVar25 = (int)((ulong)plStack_2f8 >> 0x20);
                if (SBORROW4(iVar25,(int)plStack_2f8)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10390656c);
                  (*pcVar12)();
                }
                uVar30 = (ulong)(iVar25 - (int)plStack_2f8);
              }
            }
            else {
              if (uVar31 != 2) {
                if (uVar27 == 0) goto LAB_103905db8;
                goto LAB_1039063c4;
              }
              uVar30 = plStack_2f8[3] - plStack_2f8[2];
              if (SBORROW8(plStack_2f8[3],plStack_2f8[2])) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906568);
                (*pcVar12)();
              }
            }
            if (uVar27 != uVar30) goto LAB_1039063c4;
            if ((long)uVar27 < 1) goto LAB_103905db8;
            if (uVar20 < 2) {
              if (uVar20 != 0) {
                lVar23 = (long)iVar26;
                pbVar42 = (byte *)(((long)pbVar16 >> 0x20) - lVar23);
                if ((long)pbVar16 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065a8);
                  (*pcVar12)();
                }
                func_0x000107c5ec30();
                if (pbVar15 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar15 = (byte *)0x0;
LAB_103905ee0:
                  pbVar16 = (byte *)0x0;
                }
                else {
                  pbVar16 = pbVar15;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,(long)pbVar16)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065cc);
                    (*pcVar12)();
                  }
                  pbVar15 = pbVar15 + (lVar23 - (long)pbVar16);
                  func_0x000107c5ec38();
                  if (pbVar15 == (byte *)0x0) goto LAB_103905ee0;
                  if ((long)pbVar42 <= (long)pbVar16) {
                    pbVar16 = pbVar42;
                  }
                  pbVar16 = pbVar16 + (long)pbVar15;
                }
                puVar35 = puStack_2f0;
                func_0x000100e25bdc(abStack_290,pbVar15,pbVar16,plStack_2f8,unaff_x27);
                puStack_2f0 = puVar35;
                goto LAB_103905f30;
              }
              abStack_290[0] = (byte)pbVar16;
              abStack_290[1] = (byte)((ulong)pbVar16 >> 8);
              abStack_290[2] = (byte)((ulong)pbVar16 >> 0x10);
              abStack_290[3] = (byte)((ulong)pbVar16 >> 0x18);
              abStack_290[4] = (byte)((ulong)pbVar16 >> 0x20);
              abStack_290[5] = (byte)((ulong)pbVar16 >> 0x28);
              abStack_290[6] = (byte)((ulong)pbVar16 >> 0x30);
              abStack_290[7] = (byte)((ulong)pbVar16 >> 0x38);
              abStack_290[8] = (byte)puVar35;
              abStack_290[9] = (byte)((ulong)puVar35 >> 8);
              abStack_290[10] = (byte)((ulong)puVar35 >> 0x10);
              abStack_290[0xb] = (byte)((ulong)puVar35 >> 0x18);
              abStack_290[0xc] = (byte)((ulong)puVar35 >> 0x20);
              abStack_290[0xd] = (byte)((ulong)puVar35 >> 0x28);
              func_0x000100e25bdc(abStack_2e8,abStack_290,
                                  abStack_290 + ((ulong)puVar35 >> 0x30 & 0xff),plStack_2f8,
                                  unaff_x27);
LAB_103905ec4:
              puStack_2f0 = puVar41;
              FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
              bVar1 = abStack_2e8[0];
            }
            else {
              if (uVar20 != 2) {
                abStack_290[8] = 0;
                abStack_290[9] = 0;
                abStack_290[10] = 0;
                abStack_290[0xb] = 0;
                abStack_290[0xc] = 0;
                abStack_290[0xd] = 0;
                abStack_290[0] = 0;
                abStack_290[1] = 0;
                abStack_290[2] = 0;
                abStack_290[3] = 0;
                abStack_290[4] = 0;
                abStack_290[5] = 0;
                abStack_290[6] = 0;
                abStack_290[7] = 0;
                func_0x000100e25bdc(abStack_2e8,abStack_290,abStack_290,plStack_2f8,unaff_x27);
                goto LAB_103905ec4;
              }
              lVar23 = *(long *)(pbVar16 + 0x10);
              lVar24 = *(long *)(pbVar16 + 0x18);
              func_0x000107c5ec30();
              pbVar16 = pbVar15;
              if (pbVar15 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)pbVar16)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065c8);
                  (*pcVar12)();
                }
                pbVar15 = pbVar15 + (lVar23 - (long)pbVar16);
              }
              pbVar42 = (byte *)(lVar24 - lVar23);
              if (SBORROW8(lVar24,lVar23)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065ac);
                (*pcVar12)();
              }
              func_0x000107c5ec38();
              puVar35 = puStack_2f0;
              if (pbVar15 == (byte *)0x0) {
                pbVar16 = (byte *)0x0;
              }
              else {
                if ((long)pbVar42 <= (long)pbVar16) {
                  pbVar16 = pbVar42;
                }
                pbVar16 = pbVar16 + (long)pbVar15;
              }
              func_0x000100e25bdc(abStack_290,pbVar15,pbVar16,plStack_2f8,unaff_x27);
              puStack_2f0 = puVar35;
LAB_103905f30:
              FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
              bVar1 = abStack_290[0];
            }
            unaff_x25 = (byte *)0x112fadbb8;
            unaff_x21 = &UNK_10dc21180;
            unaff_x20 = (byte *)(ulong)bVar1;
            pbVar16 = abStack_210;
            param_2 = unaff_x25;
            FUN_10390b03c(pbVar16,0x112fadbb8,&UNK_10dc21180);
            if ((bVar1 & 1) != 0) goto LAB_103905fbc;
          }
          else {
            if (uVar31 == 2) {
              uStack_b8 = CONCAT71(uStack_1df,uStack_1e0) & 0xcfffffffffffffff;
              lStack_e8 = lVar24;
              bStack_e0 = abStack_210[8];
              pbStack_d8 = pbVar42;
              pbStack_d0 = pbVar16;
              puStack_c8 = puVar35;
              lStack_c0 = lVar23;
              if ((uVar27 & 0x30000000000000) != 0x20000000000000) goto LAB_103906374;
              uStack_80 = CONCAT71(uStack_29f,uStack_2a0) & 0xcfffffffffffffff;
              uStack_a8 = SUB81(pbVar19,0);
              lStack_b0 = lStack_2d0;
              puStack_a0 = puVar41;
              plStack_98 = plStack_2b8;
              pbStack_90 = pbStack_2b0;
              lStack_88 = lVar40;
              FUN_10390b140(&lStack_190,abStack_290);
              FUN_10390b140(&lStack_140,abStack_290);
              unaff_x25 = (byte *)0x112fadbb8;
              unaff_x21 = &UNK_10dc21180;
              func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
              func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
              plVar17 = &lStack_e8;
              param_2 = (byte *)&lStack_b0;
              uVar36 = 0x103904ea0;
              pbStack_368 = pbVar21;
              goto SUB_1039065d0;
            }
            if (((CONCAT71(uStack_29f,uStack_2a0) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)
            {
              if ((((uint)lStack_2d0 ^ (uint)lVar24) & 1) != 0) goto LAB_103906374;
              uVar31 = uVar13 >> 0x1e;
              if ((ulong)pbVar42 >> 0x3e == 3) {
                uVar27 = 0;
                if ((((lVar43 != 0) || (pbVar42 != (byte *)0xc000000000000000)) ||
                    ((ulong)puVar41 >> 0x3e < 3)) ||
                   ((uVar27 = 0, pbVar19 != (byte *)0x0 ||
                    (puVar41 != (undefined *)0xc000000000000000)))) goto LAB_1039054f4;
LAB_10390564c:
                FUN_10390b140(&lStack_190,abStack_290);
                FUN_10390b140(&lStack_140,abStack_290);
                func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
              }
              else {
                if (uVar13 >> 0x1e < 2) {
                  if (uVar31 == 0) {
                    uVar27 = (ulong)pbVar42 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar26,iVar25)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906570);
                      (*pcVar12)();
                    }
                    uVar27 = (ulong)(iVar26 - iVar25);
                  }
                }
                else if (uVar31 == 2) {
                  uVar27 = *(long *)(lVar43 + 0x18) - *(long *)(lVar43 + 0x10);
                  if (SBORROW8(*(long *)(lVar43 + 0x18),*(long *)(lVar43 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10390657c);
                    (*pcVar12)();
                  }
                }
                else {
                  uVar27 = 0;
                }
LAB_1039054f4:
                pbVar16 = (byte *)0x112fadbb8;
                if (uVar20 >> 0x1e < 2) {
                  if (uVar20 >> 0x1e == 0) {
                    uVar30 = (ulong)puVar41 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar28,iVar32)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906550);
                      (*pcVar12)();
                    }
                    uVar30 = (ulong)(iVar28 - iVar32);
                  }
                }
                else {
                  if (uVar20 >> 0x1e != 2) {
                    if (uVar27 != 0) goto LAB_103906374;
                    goto LAB_10390564c;
                  }
                  uVar30 = *(long *)(pbVar19 + 0x18) - *(long *)(pbVar19 + 0x10);
                  if (SBORROW8(*(long *)(pbVar19 + 0x18),*(long *)(pbVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x103906558);
                    (*pcVar12)();
                  }
                }
                if (uVar27 != uVar30) goto LAB_103906374;
                if ((long)uVar27 < 1) goto LAB_10390564c;
                if (uVar31 < 2) {
                  if (uVar31 == 0) {
                    abStack_2e8[0] = abStack_210[8];
                    abStack_2e8[1] = abStack_210[9];
                    abStack_2e8[2] = abStack_210[10];
                    abStack_2e8[3] = abStack_210[0xb];
                    abStack_2e8[4] = abStack_210[0xc];
                    abStack_2e8[5] = abStack_210[0xd];
                    abStack_2e8[6] = uVar7;
                    abStack_2e8[7] = uVar10;
                    abStack_2e8[8] = uVar2;
                    abStack_2e8[9] = uVar3;
                    abStack_2e8[10] = uVar4;
                    abStack_2e8[0xb] = uVar5;
                    abStack_2e8[0xc] = uVar6;
                    abStack_2e8[0xd] = uVar8;
                    FUN_10390b140(&lStack_190,abStack_290);
                    FUN_10390b140(&lStack_140,abStack_290);
                    func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    puVar35 = puStack_2f0;
                    func_0x000100e25bdc(abStack_290,abStack_2e8,abStack_2e8 + bVar1,pbVar19,puVar41)
                    ;
                    unaff_x23 = pbVar21;
                    unaff_x24 = &UNK_10dc21180;
                    pbVar42 = pbVar19;
                    puStack_2f0 = puVar35;
                  }
                  else {
                    unaff_x24 = (undefined *)(long)iVar25;
                    unaff_x23 = (byte *)(lVar22 - (long)unaff_x24);
                    if (lVar22 < (long)unaff_x24) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x103906594);
                      pbStack_310 = pbVar21;
                      pbStack_308 = pbVar19;
                      (*pcVar12)();
                    }
                    pbStack_310 = pbVar21;
                    pbStack_308 = pbVar19;
                    FUN_10390b140(&lStack_190,abStack_290);
                    FUN_10390b140(&lStack_140,abStack_290);
                    func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    pbVar16 = (byte *)&lStack_140;
                    func_0x00010390b1a0(pbVar16,abStack_290,0x112fadbb8,&UNK_10dc21180);
                    func_0x000107c5ec30();
                    if (pbVar16 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar16 = (byte *)0x0;
                      pbVar19 = (byte *)0x0;
                    }
                    else {
                      pbVar19 = pbVar16;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x24,(long)pbVar19)) {
                    /* WARNING: Does not return */
                        pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065bc);
                        (*pcVar12)();
                      }
                      pbVar16 = pbVar16 + ((long)unaff_x24 - (long)pbVar19);
                      func_0x000107c5ec38();
                      if (pbVar16 == (byte *)0x0) {
                        pbVar19 = (byte *)0x0;
                      }
                      else {
                        if ((long)unaff_x23 <= (long)pbVar19) {
                          pbVar19 = unaff_x23;
                        }
                        pbVar19 = pbVar19 + (long)pbVar16;
                      }
                    }
                    puVar35 = puStack_2f0;
                    pbVar21 = pbStack_310;
                    func_0x000100e25bdc(abStack_290,pbVar16,pbVar19,pbStack_308,puVar41);
                    puStack_2f0 = puVar35;
                  }
                }
                else if (uVar31 == 2) {
                  unaff_x24 = *(undefined **)(lVar43 + 0x10);
                  lVar23 = *(long *)(lVar43 + 0x18);
                  pbStack_308 = pbVar19;
                  FUN_10390b140(&lStack_190,abStack_290);
                  FUN_10390b140(&lStack_140,abStack_290);
                  func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  plVar17 = &lStack_140;
                  func_0x00010390b1a0(plVar17,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  func_0x000107c5ec30();
                  plVar14 = plVar17;
                  if (plVar17 != (long *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x24,(long)plVar14)) {
                    /* WARNING: Does not return */
                      pcVar12 = (code *)SoftwareBreakpoint(1,0x1039065b0);
                      (*pcVar12)();
                    }
                    plVar17 = (long *)(((long)unaff_x24 - (long)plVar14) + (long)plVar17);
                  }
                  plVar9 = (long *)(lVar23 - (long)unaff_x24);
                  if (SBORROW8(lVar23,(long)unaff_x24)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10390659c);
                    (*pcVar12)();
                  }
                  func_0x000107c5ec38();
                  puVar35 = puStack_2f0;
                  if (plVar17 == (long *)0x0) {
                    lVar23 = 0;
                  }
                  else {
                    if ((long)plVar9 <= (long)plVar14) {
                      plVar14 = plVar9;
                    }
                    lVar23 = (long)plVar14 + (long)plVar17;
                  }
                  func_0x000100e25bdc(abStack_290,plVar17,lVar23,pbStack_308,puVar41);
                  unaff_x23 = pbVar21;
                  puStack_2f0 = puVar35;
                }
                else {
                  abStack_2e8[8] = 0;
                  abStack_2e8[9] = 0;
                  abStack_2e8[10] = 0;
                  abStack_2e8[0xb] = 0;
                  abStack_2e8[0xc] = 0;
                  abStack_2e8[0xd] = 0;
                  abStack_2e8[0] = 0;
                  abStack_2e8[1] = 0;
                  abStack_2e8[2] = 0;
                  abStack_2e8[3] = 0;
                  abStack_2e8[4] = 0;
                  abStack_2e8[5] = 0;
                  abStack_2e8[6] = 0;
                  abStack_2e8[7] = 0;
                  pbStack_308 = pbVar19;
                  FUN_10390b140(&lStack_190,abStack_290);
                  FUN_10390b140(&lStack_140,abStack_290);
                  func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
                  puVar35 = puStack_2f0;
                  func_0x000100e25bdc(abStack_290,abStack_2e8,abStack_2e8,pbStack_308,puVar41);
                  unaff_x23 = &UNK_10dc21180;
                  puStack_2f0 = puVar35;
                }
                unaff_x25 = (byte *)0x112fadbb8;
                unaff_x21 = &UNK_10dc21180;
                FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
                unaff_x20 = pbVar21;
                if ((abStack_290[0] & 1) == 0) goto LAB_1039063f0;
              }
              pbVar16 = abStack_210;
              goto LAB_103904d34;
            }
            FUN_10390b140(&lStack_190,abStack_290);
            FUN_10390b140(&lStack_140,abStack_290);
            unaff_x19 = (byte *)0x112fadbb8;
            func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
            func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
            FUN_10390b03c(&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
            unaff_x20 = &UNK_10dc21180;
            unaff_x25 = pbVar16;
LAB_1039063f0:
            param_2 = (byte *)0x112fadbb8;
            FUN_10390b03c(abStack_210,0x112fadbb8,&UNK_10dc21180);
            unaff_x27 = pbVar42;
          }
LAB_1039063f4:
          unaff_x22 = abStack_210;
          func_0x00010390b174(&lStack_140);
          func_0x00010390b174(&lStack_190);
          goto LAB_103906480;
        }
        if (uStack_19f._7_1_ != '\x01') {
LAB_103906408:
          uStack_228 = uStack_1a8;
          uStack_258 = CONCAT71(uStack_1d7,cStack_1d8);
          uStack_260 = CONCAT71(uStack_1df,uStack_1e0);
          unaff_x19 = (byte *)0x112fadbb8;
          unaff_x20 = &UNK_10dc21180;
          abStack_290[0] = abStack_210[0];
          abStack_290[1] = abStack_210[1];
          abStack_290[2] = abStack_210[2];
          abStack_290[3] = abStack_210[3];
          abStack_290[4] = abStack_210[4];
          abStack_290[5] = abStack_210[5];
          abStack_290[6] = abStack_210[6];
          abStack_290[7] = abStack_210[7];
          abStack_290[8] = abStack_210[8];
          abStack_290[9] = abStack_210[9];
          abStack_290[10] = abStack_210[10];
          abStack_290[0xb] = abStack_210[0xb];
          abStack_290[0xc] = abStack_210[0xc];
          abStack_290[0xd] = abStack_210[0xd];
          uStack_282 = uStack_202;
          pbStack_280 = pbVar42;
          pbStack_278 = pbVar16;
          puStack_270 = puVar35;
          lStack_268 = lVar23;
          lStack_250 = lStack_1d0;
          lStack_248 = lStack_1c8;
          lStack_240 = lStack_1c0;
          lStack_238 = lStack_1b8;
          lStack_230 = lStack_1b0;
          uStack_227 = uStack_1a7;
          uStack_220 = uStack_1a0;
          uStack_21f = uVar38;
          func_0x00010390b1a0(&lStack_190,&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
          func_0x00010390b1a0(&lStack_140,&lStack_2d0,0x112fadbb8,&UNK_10dc21180);
          param_2 = (byte *)0x112fadf30;
          FUN_10390b03c(abStack_290,0x112fadf30,&UNK_10dc21f98);
          goto LAB_103906480;
        }
        pbStack_2c8 = *(byte **)(unaff_x26 + 8);
        lStack_2d0 = *(long *)unaff_x26;
        plStack_2b8 = *(long **)(unaff_x26 + 0x18);
        puStack_2c0 = *(undefined **)(unaff_x26 + 0x10);
        pbStack_2b0 = *(byte **)(unaff_x26 + 0x20);
        uStack_2a8 = (undefined1)*(long *)(unaff_x26 + 0x28);
        uStack_29f = (undefined7)*(undefined8 *)(unaff_x26 + 0x31);
        uStack_298 = (undefined1)((ulong)*(undefined8 *)(unaff_x26 + 0x31) >> 0x38);
        uStack_2a7 = (undefined7)*(undefined8 *)(unaff_x26 + 0x29);
        uStack_2a0 = (undefined1)((ulong)*(undefined8 *)(unaff_x26 + 0x29) >> 0x38);
        FUN_10390b140(&lStack_190,abStack_290);
        FUN_10390b140(&lStack_140,abStack_290);
        func_0x00010390b1a0(&lStack_190,abStack_290,0x112fadbb8,&UNK_10dc21180);
        func_0x00010390b1a0(&lStack_140,abStack_290,0x112fadbb8,&UNK_10dc21180);
        pbVar16 = (byte *)&lStack_2d0;
LAB_103904d34:
        param_2 = (byte *)0x112fadbb8;
        FUN_10390b03c(pbVar16,0x112fadbb8,&UNK_10dc21180);
LAB_103905fbc:
        unaff_x20 = pbVar21;
        unaff_x23 = pbStack_f8;
        unaff_x24 = puStack_100;
        unaff_x27 = pbStack_148;
        puVar35 = puStack_2f0;
        unaff_x25 = (byte *)0x112fadbb8;
        unaff_x21 = &UNK_10dc21180;
        uVar13 = (uint)((ulong)pbStack_148 >> 0x20);
        uVar31 = uVar13 >> 0x1e;
        uVar20 = (uint)((ulong)pbStack_f8 >> 0x20);
        uVar29 = uVar20 >> 0x1e;
        iVar25 = (int)lStack_150;
        if ((ulong)pbStack_148 >> 0x3e == 3) {
          uVar27 = 0;
          if ((((lStack_150 != 0) || (pbStack_148 != (byte *)0xc000000000000000)) ||
              ((ulong)pbStack_f8 >> 0x3e < 3)) ||
             ((uVar27 = 0, puStack_100 != (undefined *)0x0 ||
              (pbStack_f8 != (byte *)0xc000000000000000)))) goto joined_r0x000103906198;
LAB_103906110:
          func_0x00010390b174(&lStack_140);
          func_0x00010390b174(&lStack_190);
          puVar41 = puStack_2f0;
        }
        else {
          if (uVar13 >> 0x1e < 2) {
            if (uVar31 == 0) {
              uVar27 = (ulong)pbStack_148 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)((ulong)lStack_150 >> 0x20);
              if (SBORROW4(iVar26,iVar25)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906538);
                (*pcVar12)();
              }
              uVar27 = (ulong)(iVar26 - iVar25);
            }
joined_r0x000103906198:
            if (uVar20 >> 0x1e < 2) goto LAB_103906054;
LAB_103906020:
            if (uVar29 != 2) {
              if (uVar27 != 0) goto LAB_1039063f4;
              goto LAB_103906110;
            }
            uVar30 = *(long *)(puStack_100 + 0x18) - *(long *)(puStack_100 + 0x10);
            if (SBORROW8(*(long *)(puStack_100 + 0x18),*(long *)(puStack_100 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x103906530);
              (*pcVar12)();
            }
          }
          else {
            if (uVar31 == 2) {
              uVar27 = *(long *)(lStack_150 + 0x18) - *(long *)(lStack_150 + 0x10);
              if (SBORROW8(*(long *)(lStack_150 + 0x18),*(long *)(lStack_150 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x10390653c);
                (*pcVar12)();
              }
              goto joined_r0x000103906198;
            }
            uVar27 = 0;
            if (1 < uVar29) goto LAB_103906020;
LAB_103906054:
            if (uVar29 == 0) {
              uVar30 = (ulong)pbStack_f8 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)((ulong)puStack_100 >> 0x20);
              if (SBORROW4(iVar26,(int)puStack_100)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906534);
                (*pcVar12)();
              }
              uVar30 = (ulong)(iVar26 - (int)puStack_100);
            }
          }
          if (uVar27 != uVar30) goto LAB_1039063f4;
          if ((long)uVar27 < 1) goto LAB_103906110;
          if (uVar31 < 2) {
            if (uVar31 == 0) {
              abStack_210[0] = (byte)lStack_150;
              abStack_210[1] = (byte)((ulong)lStack_150 >> 8);
              abStack_210[2] = (byte)((ulong)lStack_150 >> 0x10);
              abStack_210[3] = (byte)((ulong)lStack_150 >> 0x18);
              abStack_210[4] = (byte)((ulong)lStack_150 >> 0x20);
              abStack_210[5] = (byte)((ulong)lStack_150 >> 0x28);
              abStack_210[6] = (byte)((ulong)lStack_150 >> 0x30);
              abStack_210[7] = (byte)((ulong)lStack_150 >> 0x38);
              abStack_210[8] = (byte)pbStack_148;
              abStack_210[9] = (byte)((ulong)pbStack_148 >> 8);
              abStack_210[10] = (byte)((ulong)pbStack_148 >> 0x10);
              abStack_210[0xb] = (byte)((ulong)pbStack_148 >> 0x18);
              abStack_210[0xc] = (byte)((ulong)pbStack_148 >> 0x20);
              abStack_210[0xd] = (byte)((ulong)pbStack_148 >> 0x28);
              param_2 = abStack_210 + ((ulong)pbStack_148 >> 0x30 & 0xff);
LAB_103906224:
              func_0x000100e25bdc(abStack_290,abStack_210,param_2,puStack_100,pbStack_f8);
              puStack_2f0 = puVar35;
              func_0x00010390b174(&lStack_140);
              func_0x00010390b174(&lStack_190);
              puVar41 = puStack_2f0;
              unaff_x21 = puVar35;
              bVar1 = abStack_290[0];
            }
            else {
              lVar23 = (long)iVar25;
              pbVar21 = (byte *)((lStack_150 >> 0x20) - lVar23);
              if (lStack_150 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906540);
                (*pcVar12)();
              }
              func_0x000107c5ec30();
              if (pbVar16 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar16 = (byte *)0x0;
                param_2 = (byte *)0x0;
              }
              else {
                param_2 = pbVar16;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,(long)param_2)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x10390654c);
                  (*pcVar12)();
                }
                pbVar16 = pbVar16 + (lVar23 - (long)param_2);
                func_0x000107c5ec38();
                if (pbVar16 == (byte *)0x0) {
                  param_2 = (byte *)0x0;
                }
                else {
                  if ((long)pbVar21 <= (long)param_2) {
                    param_2 = pbVar21;
                  }
                  param_2 = param_2 + (long)pbVar16;
                }
              }
              unaff_x21 = puStack_2f0;
              func_0x000100e25bdc(abStack_210,pbVar16,param_2,unaff_x24,unaff_x23);
              puStack_2f0 = unaff_x21;
              func_0x00010390b174(&lStack_140);
              func_0x00010390b174(&lStack_190);
              unaff_x25 = (byte *)0x112fadbb8;
              puVar41 = puStack_2f0;
              bVar1 = abStack_210[0];
            }
          }
          else {
            if (uVar31 != 2) {
              abStack_210[8] = 0;
              abStack_210[9] = 0;
              abStack_210[10] = 0;
              abStack_210[0xb] = 0;
              abStack_210[0xc] = 0;
              abStack_210[0xd] = 0;
              abStack_210[0] = 0;
              abStack_210[1] = 0;
              abStack_210[2] = 0;
              abStack_210[3] = 0;
              abStack_210[4] = 0;
              abStack_210[5] = 0;
              abStack_210[6] = 0;
              abStack_210[7] = 0;
              param_2 = abStack_210;
              goto LAB_103906224;
            }
            lVar23 = *(long *)(lStack_150 + 0x10);
            lVar24 = *(long *)(lStack_150 + 0x18);
            func_0x000107c5ec30();
            param_2 = pbVar16;
            if (pbVar16 != (byte *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar23,(long)param_2)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x103906548);
                (*pcVar12)();
              }
              pbVar16 = pbVar16 + (lVar23 - (long)param_2);
            }
            pbVar21 = (byte *)(lVar24 - lVar23);
            if (SBORROW8(lVar24,lVar23)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x103906544);
              (*pcVar12)();
            }
            func_0x000107c5ec38();
            puVar41 = puStack_2f0;
            if (pbVar16 == (byte *)0x0) {
              param_2 = (byte *)0x0;
            }
            else {
              if ((long)pbVar21 <= (long)param_2) {
                param_2 = pbVar21;
              }
              param_2 = param_2 + (long)pbVar16;
            }
            func_0x000100e25bdc(abStack_210,pbVar16,param_2,unaff_x24,unaff_x23);
            func_0x00010390b174(&lStack_140);
            func_0x00010390b174(&lStack_190);
            unaff_x25 = pbVar16;
            unaff_x21 = puVar41;
            bVar1 = abStack_210[0];
          }
          unaff_x28 = abStack_290;
          unaff_x22 = abStack_210;
          if ((bVar1 & 1) == 0) goto LAB_103906480;
        }
        puStack_2f0 = puVar41;
        unaff_x28 = abStack_290;
        unaff_x25 = (byte *)0x112fadbb8;
        unaff_x22 = abStack_210;
        unaff_x21 = &UNK_10dc21180;
        if (unaff_x20 == (byte *)0x0) break;
        unaff_x26 = unaff_x26 + 0x50;
        unaff_x19 = unaff_x19 + 0x50;
      } while( true );
    }
    plVar17 = (long *)0x1;
    pbVar21 = unaff_x20;
    puVar35 = unaff_x24;
    pbVar42 = unaff_x27;
  }
  else {
LAB_103906480:
    plVar17 = (long *)0x0;
    pbVar21 = unaff_x20;
    puVar35 = unaff_x24;
    pbVar42 = unaff_x27;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar17;
  }
  uVar36 = 0x1039065d0;
  func_0x000107c60e78();
  pbStack_368 = unaff_x23;
SUB_1039065d0:
  lVar23 = *plVar17;
  lVar24 = *(long *)param_2;
  if (param_2[8] == 1) {
    if (lVar24 < 2) {
      if (lVar24 == 0) {
        if (lVar23 != 0) {
          return (long *)0x0;
        }
      }
      else if (lVar23 != 1) {
        return (long *)0x0;
      }
    }
    else if (lVar24 == 2) {
      if (lVar23 != 2) {
        return (long *)0x0;
      }
    }
    else if (lVar24 == 3) {
      if (lVar23 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar23 != 4) {
      return (long *)0x0;
    }
  }
  else if (lVar23 != lVar24) {
    return (long *)0x0;
  }
  uVar30 = plVar17[3];
  uVar27 = plVar17[2];
  uVar33 = plVar17[4];
  uVar39 = *(ulong *)(param_2 + 0x18);
  uVar37 = *(ulong *)(param_2 + 0x10);
  uVar34 = *(ulong *)(param_2 + 0x20);
  uStack_3d0 = uVar37;
  uStack_3c8 = uVar39;
  uStack_3c0 = uVar34;
  uStack_3b0 = uVar27;
  uStack_3a8 = uVar30;
  uStack_3a0 = uVar33;
  pbStack_390 = unaff_x28;
  pbStack_388 = pbVar42;
  pbStack_380 = unaff_x26;
  pbStack_378 = unaff_x25;
  puStack_370 = puVar35;
  pbStack_360 = unaff_x22;
  puStack_358 = unaff_x21;
  pbStack_350 = pbVar21;
  pbStack_348 = unaff_x19;
  puStack_340 = &stack0xfffffffffffffff0;
  uStack_338 = uVar36;
  if (((uVar33 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar34 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
      func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
LAB_1039066b0:
      FUN_1038ffe2c(uVar27,uVar30,uVar33);
      lVar23 = plVar17[5];
      func_0x000100e25fcc(lVar23,plVar17[6],*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x30));
      uVar13 = (uint)lVar23;
      goto LAB_103906830;
    }
LAB_1039066d8:
    func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
    func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
    FUN_1038ffe2c(uVar27,uVar30,uVar33);
    uVar27 = uVar37;
    uVar30 = uVar39;
    uVar33 = uVar34;
  }
  else {
    if ((uVar34 & 0x3000000000000000) == 0x3000000000000000) goto LAB_1039066d8;
    if ((uVar33 >> 0x3d & 1) == 0) {
      if ((uVar34 >> 0x3d & 1) != 0) {
LAB_1039067d4:
        func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
        func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
        goto LAB_10390680c;
      }
      if ((uVar27 == uVar37) && (uVar30 == uVar39)) {
        func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
        func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
        FUN_1038ffe2c(uVar27,uVar30,uVar34);
        goto LAB_1039066b0;
      }
      uVar18 = uVar27;
      func_0x000107c605b8(uVar27,uVar30,uVar37,uVar39,0);
      func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
      func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
LAB_103906914:
      FUN_1038ffe2c(uVar37,uVar39,uVar34);
      if ((uVar18 & 1) != 0) goto LAB_1039066b0;
    }
    else {
      if ((uVar34 >> 0x3d & 1) == 0) goto LAB_1039067d4;
      func_0x00010390b1a0(&uStack_3b0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
      func_0x00010390b1a0(&uStack_3d0,auStack_3e8,0x112fadf38,&UNK_10dc21fe0);
      uVar18 = uVar27;
      FUN_103904bf0(uVar27,uVar37);
      if ((uVar18 & 1) != 0) {
        uVar18 = uVar30;
        func_0x000100e25fcc(uVar30,uVar33 & 0xdfffffffffffffff,uVar39,uVar34 & 0xdfffffffffffffff);
        goto LAB_103906914;
      }
LAB_10390680c:
      FUN_1038ffe2c(uVar37,uVar39,uVar34);
    }
  }
  FUN_1038ffe2c(uVar27,uVar30,uVar33);
  uVar13 = 0;
LAB_103906830:
  return (long *)(ulong)(uVar13 & 1);
}



/* Entry: 10390692c; end: 103906b13;  */

uint FUN_10390692c(long *param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  ulong uStack_38;
  
  lStack_68 = *param_1;
  uVar5 = param_1[1];
  lStack_58 = param_1[2];
  uVar3 = param_1[3];
  lVar7 = param_1[4];
  uVar6 = (uint)((ulong)param_1[6] >> 0x3c) & 3;
  if (uVar6 < 2) {
    if (uVar6 == 0) {
      if (((*(byte *)((long)param_2 + 0x37) & 0x30) == 0) && (lStack_68 == *(long *)param_2)) {
        uVar1 = *(undefined8 *)(param_2 + 6);
        uVar2 = *(undefined8 *)(param_2 + 8);
        func_0x000100e25fcc(uVar5,lStack_58,*(undefined8 *)(param_2 + 2),
                            *(undefined8 *)(param_2 + 4));
        if ((uVar5 & 1) != 0) {
          func_0x000100e25fcc(uVar3,lVar7,uVar1,uVar2);
          goto joined_r0x000103906a54;
        }
      }
    }
    else if (((*(ulong *)(param_2 + 0xc) & 0x3000000000000000) == 0x1000000000000000) &&
            ((uint)lStack_68 == *param_2)) {
LAB_103906a48:
      func_0x000100e25fcc(uVar5,lStack_58,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
      ;
      uVar3 = uVar5;
joined_r0x000103906a54:
      if ((uVar3 & 1) != 0) {
        uVar6 = 1;
        goto LAB_103906a64;
      }
    }
  }
  else if (uVar6 == 2) {
    lStack_40 = param_1[5];
    uStack_38 = param_1[6] & 0xcfffffffffffffff;
    if ((*(ulong *)(param_2 + 0xc) & 0x3000000000000000) == 0x2000000000000000) {
      uStack_70 = *(ulong *)(param_2 + 0xc) & 0xcfffffffffffffff;
      uStack_98 = *(undefined8 *)(param_2 + 2);
      uStack_a0 = *(undefined8 *)param_2;
      uStack_88 = *(undefined8 *)(param_2 + 6);
      uStack_90 = *(undefined8 *)(param_2 + 4);
      uStack_78 = *(undefined8 *)(param_2 + 10);
      uStack_80 = *(undefined8 *)(param_2 + 8);
      plVar4 = &lStack_68;
      uStack_60 = uVar5;
      uStack_50 = uVar3;
      lStack_48 = lVar7;
      func_0x0001039065d0(plVar4,&uStack_a0);
      uVar6 = (uint)plVar4;
      goto LAB_103906a64;
    }
  }
  else if ((((*(ulong *)(param_2 + 0xc) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
          ((((uint)lStack_68 ^ *param_2) & 1) == 0)) goto LAB_103906a48;
  uVar6 = 0;
LAB_103906a64:
  return uVar6 & 1;
}



/* Entry: 103906b14; end: 103906b1f;  */

void FUN_103906b14(void)

{
  return;
}



/* Entry: 103906b20; end: 103906b7f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103906b20(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 103906b80; end: 103906ecb;  */

uint FUN_103906b80(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_e8 [40];
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lVar7 = param_1[1];
  lVar5 = *param_1;
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  lVar3 = param_1[4];
  lVar8 = param_2[1];
  lVar6 = *param_2;
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  lVar4 = param_2[4];
  lStack_c0 = lVar6;
  lStack_b8 = lVar8;
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  lStack_a0 = lVar4;
  lStack_90 = lVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  lStack_70 = lVar3;
  if ((uVar9 & 0xff) == 2) {
    if ((uVar10 & 0xff) != 2) {
LAB_103906c94:
      func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
      func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
      func_0x000100d62cb8(lVar5,lVar7,uVar9,uVar11,lVar3);
      lVar5 = lVar6;
      lVar7 = lVar8;
      uVar9 = uVar10;
      uVar11 = uVar12;
      lVar3 = lVar4;
      goto LAB_103906dfc;
    }
    func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
    func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
LAB_103906c30:
    func_0x000100d62cb8(lVar5,lVar7,uVar9,uVar11,lVar3);
    if (((*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1) == 0) {
      uVar9 = param_1[6];
      if (((uVar9 == param_2[6]) && (param_1[7] == param_2[7])) ||
         (func_0x000107c605b8(), (uVar9 & 1) != 0)) {
        lVar6 = param_1[8];
        func_0x000100e25fcc(lVar6,param_1[9],param_2[8],param_2[9]);
        uVar1 = (uint)lVar6;
        goto LAB_103906e04;
      }
    }
  }
  else {
    if ((uVar10 & 0xff) == 2) goto LAB_103906c94;
    if (lVar5 == lVar6) {
      if (lVar7 == lVar8) {
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) == 0) {
          func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
          func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
          uVar2 = uVar11;
          func_0x000100e25fcc(uVar11,lVar3,uVar12,lVar4);
          func_0x000100d62cb8(lVar5,lVar7,uVar10,uVar12,lVar4);
          if ((uVar2 & 1) != 0) goto LAB_103906c30;
          goto LAB_103906dfc;
        }
        func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
        func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
        lVar6 = lVar5;
        lVar8 = lVar7;
      }
      else {
        func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
        func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
        lVar6 = lVar5;
      }
    }
    else {
      func_0x00010390b1a0(&lStack_90,auStack_e8,0x112fadc60,&UNK_10dc211b0);
      func_0x00010390b1a0(&lStack_c0,auStack_e8,0x112fadc60,&UNK_10dc211b0);
    }
    func_0x000100d62cb8(lVar6,lVar8,uVar10,uVar12,lVar4);
LAB_103906dfc:
    func_0x000100d62cb8(lVar5,lVar7,uVar9,uVar11,lVar3);
  }
  uVar1 = 0;
LAB_103906e04:
  return uVar1 & 1;
}



/* Entry: 103906ecc; end: 103906ef7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103906ecc(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103906ef8; end: 103906fb7;  */

void FUN_103906ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc214e0;
  func_0x000107c61520(&DAT_10dc214e0,&UNK_1106aa5d0);
  puRam0000000112fadc70 = puVar1;
  return;
}



/* Entry: 103906fb8; end: 103907193;  */

uint FUN_103906fb8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar7 = param_1[4];
  uVar5 = param_1[3];
  lVar3 = param_1[5];
  uVar8 = param_2[4];
  uVar6 = param_2[3];
  lVar4 = param_2[5];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  lStack_90 = lVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  lStack_70 = lVar3;
  if (uVar5 == 0) {
    if (uVar6 != 0) goto LAB_10390708c;
    func_0x00010390b1a0(&uStack_80,auStack_b8,0x112fadc40,&UNK_10dc21190);
    func_0x00010390b1a0(&uStack_a0,auStack_b8,0x112fadc40,&UNK_10dc21190);
LAB_103907164:
    FUN_103906b20(uVar5,uVar7,lVar3);
    if (*param_1 == *param_2) {
      lVar3 = param_1[1];
      func_0x000100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)lVar3;
      goto LAB_103907108;
    }
  }
  else {
    if (uVar6 == 0) {
LAB_10390708c:
      func_0x00010390b1a0(&uStack_80,auStack_b8,0x112fadc40,&UNK_10dc21190);
      func_0x00010390b1a0(&uStack_a0,auStack_b8,0x112fadc40,&UNK_10dc21190);
      FUN_103906b20(uVar5,uVar7,lVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      lVar3 = lVar4;
    }
    else {
      func_0x00010390b1a0(&uStack_80,auStack_b8,0x112fadc40,&UNK_10dc21190);
      func_0x00010390b1a0(&uStack_a0,auStack_b8,0x112fadc40,&UNK_10dc21190);
      uVar2 = uVar5;
      FUN_103904bf0(uVar5,uVar6);
      if ((uVar2 & 1) == 0) {
        FUN_103906b20(uVar6,uVar8,lVar4);
      }
      else {
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,lVar3,uVar8,lVar4);
        FUN_103906b20(uVar6,uVar8,lVar4);
        if ((uVar2 & 1) != 0) goto LAB_103907164;
      }
    }
    FUN_103906b20(uVar5,uVar7,lVar3);
  }
  uVar1 = 0;
LAB_103907108:
  return uVar1 & 1;
}



/* Entry: 103907194; end: 1039073fb;  */

uint FUN_103907194(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_280 [64];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  char cStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
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
  
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_e0 = param_1[4];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_d8 = (undefined1)param_1[5];
  uStack_cf = *(undefined8 *)((long)param_1 + 0x31);
  uStack_d7 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_120 = param_2[4];
  uStack_1f8 = param_2[1];
  uStack_200 = *param_2;
  uStack_1e8 = param_2[3];
  uStack_1f0 = param_2[2];
  uStack_118 = (undefined1)param_2[5];
  uStack_10f = *(undefined8 *)((long)param_2 + 0x31);
  uStack_117 = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_110 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  uStack_18f = (undefined7)*(undefined8 *)((long)param_1 + 0x31);
  cStack_188 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x31) >> 0x38);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  uStack_1cf = *(undefined8 *)((long)param_2 + 0x31);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  uVar3 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_198 = (undefined1)uVar3;
  uStack_197 = (undefined7)((ulong)uVar3 >> 8);
  uStack_1e0 = param_2[4];
  uStack_158 = (undefined1)param_2[5];
  uStack_157 = (undefined7)((ulong)param_2[5] >> 8);
  uStack_14f._7_1_ = (char)((ulong)uStack_1cf >> 0x38);
  uStack_180 = uStack_200;
  uStack_178 = uStack_1f8;
  uStack_170 = uStack_1f0;
  uStack_168 = uStack_1e8;
  uStack_160 = uStack_1e0;
  uStack_14f = uStack_1cf;
  if (cStack_188 == '\x01') {
    if (uStack_14f._7_1_ == '\x01') {
      uStack_238 = param_1[1];
      uStack_240 = *param_1;
      uStack_228 = param_1[3];
      uStack_230 = param_1[2];
      uStack_220 = param_1[4];
      uStack_218 = (undefined1)param_1[5];
      uStack_20f = (undefined7)*(undefined8 *)((long)param_1 + 0x31);
      cStack_208 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x31) >> 0x38);
      uStack_217 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
      uStack_210 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
      func_0x00010390b1a0(&uStack_100,auStack_280,0x112fadbb8,&UNK_10dc21180);
      func_0x00010390b1a0(&uStack_140,auStack_280,0x112fadbb8,&UNK_10dc21180);
      FUN_10390b03c(&uStack_240,0x112fadbb8,&UNK_10dc21180);
LAB_1039073d4:
      uVar3 = param_1[8];
      func_0x000100e25fcc(uVar3,param_1[9],param_2[8],param_2[9]);
      uVar1 = (uint)uVar3;
      goto LAB_1039073e0;
    }
LAB_1039072a0:
    uStack_1d7 = uStack_157;
    uStack_1d0 = uStack_150;
    cStack_208 = cStack_188;
    uStack_210 = uStack_190;
    uStack_20f = uStack_18f;
    uStack_240 = uStack_1c0;
    uStack_238 = uStack_1b8;
    uStack_230 = uStack_1b0;
    uStack_228 = uStack_1a8;
    uStack_220 = uStack_1a0;
    uStack_218 = uStack_198;
    uStack_217 = uStack_197;
    uStack_1d8 = uStack_158;
    func_0x00010390b1a0(&uStack_100,auStack_280,0x112fadbb8,&UNK_10dc21180);
    func_0x00010390b1a0(&uStack_140,auStack_280,0x112fadbb8,&UNK_10dc21180);
    FUN_10390b03c(&uStack_240,0x112fadf30,&UNK_10dc21f98);
  }
  else {
    if (uStack_14f._7_1_ == '\x01') goto LAB_1039072a0;
    uStack_90 = CONCAT71(uStack_18f,uStack_190);
    uStack_20f = (undefined7)*(undefined8 *)((long)param_2 + 0x31);
    cStack_208 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x31) >> 0x38);
    uStack_210 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
    uStack_238 = param_2[1];
    uStack_240 = *param_2;
    uStack_228 = param_2[3];
    uStack_230 = param_2[2];
    uStack_58 = param_2[5];
    uStack_220 = param_2[4];
    uStack_218 = (undefined1)uStack_58;
    uStack_217 = (undefined7)((ulong)uStack_58 >> 8);
    uStack_50 = CONCAT71(uStack_20f,uStack_210);
    uStack_c0 = uStack_1c0;
    uStack_b8 = uStack_1b8;
    uStack_b0 = uStack_1b0;
    uStack_a8 = uStack_1a8;
    uStack_a0 = uStack_1a0;
    uStack_98 = uVar3;
    uStack_80 = uStack_240;
    uStack_78 = uStack_238;
    uStack_70 = uStack_230;
    uStack_68 = uStack_228;
    uStack_60 = uStack_220;
    func_0x00010390b1a0(&uStack_100,auStack_280,0x112fadbb8,&UNK_10dc21180);
    func_0x00010390b1a0(&uStack_140,auStack_280,0x112fadbb8,&UNK_10dc21180);
    puVar2 = &uStack_c0;
    FUN_10390692c(puVar2,&uStack_80);
    FUN_10390b03c(&uStack_240,0x112fadbb8,&UNK_10dc21180);
    FUN_10390b03c(&uStack_1c0,0x112fadbb8,&UNK_10dc21180);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1039073d4;
  }
  uVar1 = 0;
LAB_1039073e0:
  return uVar1 & 1;
}



/* Entry: 1039073fc; end: 10390757b;  */

void FUN_1039073fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadc98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21550;
  func_0x000107c61520(&UNK_10dc21550,&UNK_1106aa5d0);
  puRam0000000112fadc98 = puVar1;
  return;
}



/* Entry: 10390757c; end: 103907acb;  */

uint FUN_10390757c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_380 [80];
  ulong uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
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
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
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
  
  uVar8 = param_1[3];
  uVar6 = param_1[2];
  uVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar7 = param_2[2];
  uVar5 = param_2[4];
  uStack_100 = uVar7;
  uStack_f8 = uVar9;
  uStack_f0 = uVar5;
  uStack_e0 = uVar6;
  uStack_d8 = uVar8;
  uStack_d0 = uVar4;
  if (uVar6 == 0) {
    if (uVar7 != 0) goto LAB_103907660;
    func_0x00010390b1a0(&uStack_e0,&uStack_240,0x112fadc40,&UNK_10dc21190);
    func_0x00010390b1a0(&uStack_100,&uStack_240,0x112fadc40,&UNK_10dc21190);
    FUN_103906b20(0,uVar8,uVar4);
LAB_103907748:
    uStack_138 = param_1[8];
    uStack_140 = param_1[7];
    uStack_128 = param_1[10];
    uStack_130 = param_1[9];
    uStack_118 = param_1[0xc];
    uStack_120 = param_1[0xb];
    uStack_108 = param_1[0xe];
    uStack_110 = param_1[0xd];
    uStack_148 = param_1[6];
    uStack_150 = param_1[5];
    uStack_188 = param_2[8];
    uStack_190 = param_2[7];
    uStack_178 = param_2[10];
    uStack_180 = param_2[9];
    uStack_168 = param_2[0xc];
    uStack_170 = param_2[0xb];
    uStack_158 = param_2[0xe];
    uStack_160 = param_2[0xd];
    uStack_198 = param_2[6];
    uStack_1a0 = param_2[5];
    uStack_228 = param_1[8];
    uStack_230 = param_1[7];
    uStack_218 = param_1[10];
    uStack_220 = param_1[9];
    lStack_208 = param_1[0xc];
    uStack_210 = param_1[0xb];
    uStack_1f8 = param_1[0xe];
    uStack_200 = param_1[0xd];
    uStack_238 = param_1[6];
    uStack_240 = param_1[5];
    uStack_278 = param_2[8];
    uStack_280 = param_2[7];
    uStack_268 = param_2[10];
    uStack_270 = param_2[9];
    lStack_258 = param_2[0xc];
    uStack_260 = param_2[0xb];
    uStack_248 = param_2[0xe];
    uStack_250 = param_2[0xd];
    uStack_288 = param_2[6];
    uStack_290 = param_2[5];
    uStack_1f0 = uStack_290;
    uStack_1e8 = uStack_288;
    uStack_1e0 = uStack_280;
    uStack_1d8 = uStack_278;
    uStack_1d0 = uStack_270;
    uStack_1c8 = uStack_268;
    uStack_1c0 = uStack_260;
    lStack_1b8 = lStack_258;
    uStack_1b0 = uStack_250;
    uStack_1a8 = uStack_248;
    if (lStack_208 == 0) {
      if (lStack_258 != 0) goto LAB_103907894;
      uStack_2c8 = param_1[8];
      uStack_2d0 = param_1[7];
      uStack_2b8 = param_1[10];
      uStack_2c0 = param_1[9];
      lStack_2a8 = param_1[0xc];
      uStack_2b0 = param_1[0xb];
      uStack_298 = param_1[0xe];
      uStack_2a0 = param_1[0xd];
      uStack_2d8 = param_1[6];
      uStack_2e0 = param_1[5];
      func_0x00010390b1a0(&uStack_150,&uStack_c0,0x112fadc48,&UNK_10dc21198);
      func_0x00010390b1a0(&uStack_1a0,&uStack_c0,0x112fadc48,&UNK_10dc21198);
      FUN_10390b03c(&uStack_2e0,0x112fadc48,&UNK_10dc21198);
    }
    else {
      if (lStack_258 == 0) {
LAB_103907894:
        uStack_2e0 = uStack_240;
        uStack_2d8 = uStack_238;
        uStack_2d0 = uStack_230;
        uStack_2c8 = uStack_228;
        uStack_2c0 = uStack_220;
        uStack_2b8 = uStack_218;
        uStack_2b0 = uStack_210;
        lStack_2a8 = lStack_208;
        uStack_2a0 = uStack_200;
        uStack_298 = uStack_1f8;
        func_0x00010390b1a0(&uStack_150,&uStack_c0,0x112fadc48,&UNK_10dc21198);
        func_0x00010390b1a0(&uStack_1a0,&uStack_c0,0x112fadc48,&UNK_10dc21198);
        FUN_10390b03c(&uStack_2e0,0x112fadc50,&UNK_10dc211a0);
        goto LAB_1039076d8;
      }
      uStack_318 = param_2[8];
      uStack_320 = param_2[7];
      uStack_308 = param_2[10];
      uStack_310 = param_2[9];
      uStack_2f8 = param_2[0xc];
      uStack_300 = param_2[0xb];
      uStack_2e8 = param_2[0xe];
      uStack_2f0 = param_2[0xd];
      uStack_328 = param_2[6];
      uStack_330 = param_2[5];
      uStack_b8 = param_1[6];
      uStack_c0 = param_1[5];
      uStack_a8 = param_1[8];
      uStack_b0 = param_1[7];
      uStack_98 = param_1[10];
      uStack_a0 = param_1[9];
      uStack_88 = param_1[0xc];
      uStack_90 = param_1[0xb];
      uStack_78 = param_1[0xe];
      uStack_80 = param_1[0xd];
      uStack_2e0 = uStack_330;
      uStack_2d8 = uStack_328;
      uStack_2d0 = uStack_320;
      uStack_2c8 = uStack_318;
      uStack_2c0 = uStack_310;
      uStack_2b8 = uStack_308;
      uStack_2b0 = uStack_300;
      lStack_2a8 = uStack_2f8;
      uStack_2a0 = uStack_2f0;
      uStack_298 = uStack_2e8;
      func_0x00010390b1a0(&uStack_150,auStack_380,0x112fadc48,&UNK_10dc21198);
      func_0x00010390b1a0(&uStack_1a0,auStack_380,0x112fadc48,&UNK_10dc21198);
      puVar3 = &uStack_c0;
      FUN_103906b80(puVar3,&uStack_2e0);
      FUN_10390b03c(&uStack_330,0x112fadc48,&UNK_10dc21198);
      FUN_10390b03c(&uStack_240,0x112fadc48,&UNK_10dc21198);
      if (((ulong)puVar3 & 1) == 0) goto LAB_1039076d8;
    }
    uVar9 = param_1[0x10];
    uVar7 = param_1[0xf];
    uVar8 = param_2[0x10];
    uVar6 = param_2[0xf];
    uStack_330 = uVar6;
    uStack_328 = uVar8;
    uStack_240 = uVar7;
    uStack_238 = uVar9;
    if (uVar9 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1039079f0;
      func_0x00010390b1a0(&uStack_240,auStack_380,0x112fadc58,&UNK_10dc211a8);
      func_0x00010390b1a0(&uStack_330,auStack_380,0x112fadc58,&UNK_10dc211a8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar6,uVar8);
      FUN_103906ecc(uVar6,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103907aa4;
    }
    else {
      if (0xe < uVar8 >> 0x3c) {
        func_0x00010390b1a0(&uStack_240,auStack_380,0x112fadc58,&UNK_10dc211a8);
        func_0x00010390b1a0(&uStack_330,auStack_380,0x112fadc58,&UNK_10dc211a8);
LAB_103907aa4:
        FUN_103906ecc(uVar7,uVar9);
        uVar5 = *param_1;
        func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar5;
        goto LAB_1039076dc;
      }
LAB_1039079f0:
      func_0x00010390b1a0(&uStack_240,auStack_380,0x112fadc58,&UNK_10dc211a8);
      func_0x00010390b1a0(&uStack_330,auStack_380,0x112fadc58,&UNK_10dc211a8);
      FUN_103906ecc(uVar7,uVar9);
      uVar7 = uVar6;
      uVar9 = uVar8;
    }
    FUN_103906ecc(uVar7,uVar9);
  }
  else {
    if (uVar7 == 0) {
LAB_103907660:
      func_0x00010390b1a0(&uStack_e0,&uStack_240,0x112fadc40,&UNK_10dc21190);
      func_0x00010390b1a0(&uStack_100,&uStack_240,0x112fadc40,&UNK_10dc21190);
      FUN_103906b20(uVar6,uVar8,uVar4);
    }
    else {
      func_0x00010390b1a0(&uStack_e0,&uStack_240,0x112fadc40,&UNK_10dc21190);
      func_0x00010390b1a0(&uStack_100,&uStack_240,0x112fadc40,&UNK_10dc21190);
      uVar2 = uVar6;
      FUN_103904bf0(uVar6,uVar7);
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar8;
        func_0x000100e25fcc(uVar8,uVar4,uVar9,uVar5);
        FUN_103906b20(uVar7,uVar9,uVar5);
        FUN_103906b20(uVar6,uVar8,uVar4);
        if ((uVar2 & 1) != 0) goto LAB_103907748;
        goto LAB_1039076d8;
      }
      FUN_103906b20(uVar7,uVar9,uVar5);
      uVar7 = uVar6;
      uVar9 = uVar8;
      uVar5 = uVar4;
    }
    FUN_103906b20(uVar7,uVar9,uVar5);
  }
LAB_1039076d8:
  uVar1 = 0;
LAB_1039076dc:
  return uVar1 & 1;
}



/* Entry: 103907acc; end: 103907bcb;  */

void FUN_103907acc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21998;
  func_0x000107c61520(&UNK_10dc21998,&UNK_1106aaa10);
  puRam0000000112fadd18 = puVar1;
  return;
}



/* Entry: 103907bcc; end: 103907bdf;  */

void FUN_103907bcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103907be0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103907c20)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103907be0; end: 103907c5f;  */

void FUN_103907be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc212a0;
  func_0x000107c61520(&UNK_10dc212a0,&UNK_1106aa998);
  puRam0000000112fadd60 = puVar1;
  return;
}



/* Entry: 103907c60; end: 103907c63;  */

void FUN_103907c60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fadd70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fadd78;
  func_0x00010002969c(0x112fadd78,&UNK_10dc21228);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fadd70 = puVar2;
  return;
}



/* Entry: 103907c64; end: 103907cb3;  */

void FUN_103907c64(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fadd70 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fadd78;
  func_0x00010002969c(0x112fadd78,&UNK_10dc21228);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112fadd70 = puVar2;
  return;
}



/* Entry: 103907cb4; end: 103907cb7;  */

void FUN_103907cb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc212e0;
  func_0x000107c61520(&UNK_10dc212e0,&UNK_1106aa998);
  puRam0000000112fadd80 = puVar1;
  return;
}



/* Entry: 103907cb8; end: 103907cf7;  */

void FUN_103907cb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc212e0;
  func_0x000107c61520(&UNK_10dc212e0,&UNK_1106aa998);
  puRam0000000112fadd80 = puVar1;
  return;
}



/* Entry: 103907cf8; end: 103907d1b;  */

void FUN_103907cf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103907d1c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103907d1c; end: 103907d5b;  */

void FUN_103907d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21378;
  func_0x000107c61520(&UNK_10dc21378,&UNK_1106aa4d0);
  puRam0000000112fadd88 = puVar1;
  return;
}



/* Entry: 103907d5c; end: 103907d73;  */

void FUN_103907d5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103906f38)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1038fe398)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103907d74; end: 103907db3;  */

void FUN_103907d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc213e0;
  func_0x000107c61520(&UNK_10dc213e0,&UNK_1106aa4d0);
  puRam0000000112fadd90 = puVar1;
  return;
}



/* Entry: 103907db4; end: 103907dd7;  */

void FUN_103907db4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103907dd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103907dd8; end: 103907e17;  */

void FUN_103907dd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21450;
  func_0x000107c61520(&UNK_10dc21450,&UNK_1106aa550);
  puRam0000000112fadd98 = puVar1;
  return;
}



/* Entry: 103907e18; end: 103907e2b;  */

void FUN_103907e18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103906f78)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103907e2c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103907e2c; end: 103907e6b;  */

void FUN_103907e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc21408;
  func_0x000107c61520(&DAT_10dc21408,&UNK_1106aa550);
  puRam0000000112fadda0 = puVar1;
  return;
}



/* Entry: 103907e6c; end: 103907e6f;  */

void FUN_103907e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc214b8;
  func_0x000107c61520(&UNK_10dc214b8,&UNK_1106aa550);
  puRam0000000112fadda8 = puVar1;
  return;
}



/* Entry: 103907e70; end: 103907eaf;  */

void FUN_103907e70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc214b8;
  func_0x000107c61520(&UNK_10dc214b8,&UNK_1106aa550);
  puRam0000000112fadda8 = puVar1;
  return;
}



/* Entry: 103907eb0; end: 103907ed3;  */

void FUN_103907eb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103907ed4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103907ed4; end: 103907f13;  */

void FUN_103907ed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21528;
  func_0x000107c61520(&UNK_10dc21528,&UNK_1106aa5d0);
  puRam0000000112faddb0 = puVar1;
  return;
}



/* Entry: 103907f14; end: 103907f2b;  */

void FUN_103907f14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039073fc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103906ef8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103907f2c; end: 103907f6b;  */

void FUN_103907f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21590;
  func_0x000107c61520(&UNK_10dc21590,&UNK_1106aa5d0);
  puRam0000000112faddb8 = puVar1;
  return;
}



/* Entry: 103907f6c; end: 103907f8f;  */

void FUN_103907f6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103907f90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103907f90; end: 103907fcf;  */

void FUN_103907f90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21600;
  func_0x000107c61520(&UNK_10dc21600,&UNK_1106aa6e0);
  puRam0000000112faddc0 = puVar1;
  return;
}



/* Entry: 103907fd0; end: 103907fe3;  */

void FUN_103907fd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10390743c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103907fe4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103907fe4; end: 103908023;  */

void FUN_103907fe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc215b8;
  func_0x000107c61520(&DAT_10dc215b8,&UNK_1106aa6e0);
  puRam0000000112faddc8 = puVar1;
  return;
}



/* Entry: 103908024; end: 103908027;  */

void FUN_103908024(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21668;
  func_0x000107c61520(&UNK_10dc21668,&UNK_1106aa6e0);
  puRam0000000112faddd0 = puVar1;
  return;
}



/* Entry: 103908028; end: 103908067;  */

void FUN_103908028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21668;
  func_0x000107c61520(&UNK_10dc21668,&UNK_1106aa6e0);
  puRam0000000112faddd0 = puVar1;
  return;
}



/* Entry: 103908068; end: 10390808b;  */

void FUN_103908068(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390808c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10390808c; end: 1039080cb;  */

void FUN_10390808c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc216d8;
  func_0x000107c61520(&UNK_10dc216d8,&UNK_1106aa768);
  puRam0000000112faddd8 = puVar1;
  return;
}



/* Entry: 1039080cc; end: 1039080df;  */

void FUN_1039080cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10390747c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039080e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039080e0; end: 10390811f;  */

void FUN_1039080e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadde0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc21690;
  func_0x000107c61520(&DAT_10dc21690,&UNK_1106aa768);
  puRam0000000112fadde0 = puVar1;
  return;
}



/* Entry: 103908120; end: 103908123;  */

void FUN_103908120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadde8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21740;
  func_0x000107c61520(&UNK_10dc21740,&UNK_1106aa768);
  puRam0000000112fadde8 = puVar1;
  return;
}



/* Entry: 103908124; end: 103908163;  */

void FUN_103908124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadde8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21740;
  func_0x000107c61520(&UNK_10dc21740,&UNK_1106aa768);
  puRam0000000112fadde8 = puVar1;
  return;
}



/* Entry: 103908164; end: 103908187;  */

void FUN_103908164(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103908188();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103908188; end: 1039081c7;  */

void FUN_103908188(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc217b0;
  func_0x000107c61520(&UNK_10dc217b0,&UNK_1106aa7e8);
  puRam0000000112faddf0 = puVar1;
  return;
}



/* Entry: 1039081c8; end: 1039081db;  */

void FUN_1039081c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039074bc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039081dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039081dc; end: 10390821b;  */

void FUN_1039081dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112faddf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc21768;
  func_0x000107c61520(&DAT_10dc21768,&UNK_1106aa7e8);
  puRam0000000112faddf8 = puVar1;
  return;
}



/* Entry: 10390821c; end: 10390821f;  */

void FUN_10390821c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fade00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21818;
  func_0x000107c61520(&UNK_10dc21818,&UNK_1106aa7e8);
  puRam0000000112fade00 = puVar1;
  return;
}



/* Entry: 103908220; end: 10390825f;  */

void FUN_103908220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fade00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21818;
  func_0x000107c61520(&UNK_10dc21818,&UNK_1106aa7e8);
  puRam0000000112fade00 = puVar1;
  return;
}



/* Entry: 103908260; end: 103908283;  */

void FUN_103908260(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103908284();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103908284; end: 1039082c3;  */

void FUN_103908284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fade08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc21888;
  func_0x000107c61520(&UNK_10dc21888,&UNK_1106aa868);
  puRam0000000112fade08 = puVar1;
  return;
}



/* Entry: 1039082c4; end: 1039082d7;  */

void FUN_1039082c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10390753c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039082d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


