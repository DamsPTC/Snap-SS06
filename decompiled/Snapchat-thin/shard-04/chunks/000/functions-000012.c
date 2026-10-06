/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f6626c; end: 102f6630b;  */

/* WARNING: Possible PIC construction at 0x000102f662b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f662c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f662bc) */
/* WARNING: Removing unreachable block (ram,0x000102f662cc) */

void FUN_102f6626c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac30 != -1) {
    func_0x000107c61568(0x112f2ac30,FUN_102f66224);
  }
  uVar5 = uRam0000000113805690;
  uVar4 = uRam0000000113805688;
  uVar3 = uRam0000000113805680;
  uVar2 = uRam0000000113805678;
  uVar1 = uRam0000000113805670;
  *param_1 = uRam0000000113805668;
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



/* Entry: 102f6630c; end: 102f66353;  */

void FUN_102f6630c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a8e0,0x81,2);
  uRam00000001138056a0 = uStack_38;
  uRam0000000113805698 = uStack_40;
  uRam00000001138056b0 = uStack_28;
  uRam00000001138056a8 = uStack_30;
  uRam00000001138056c0 = uStack_18;
  uRam00000001138056b8 = uStack_20;
  return;
}



/* Entry: 102f66354; end: 102f663f3;  */

/* WARNING: Possible PIC construction at 0x000102f663a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f663b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f663a4) */
/* WARNING: Removing unreachable block (ram,0x000102f663b4) */

void FUN_102f66354(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac38 != -1) {
    func_0x000107c61568(0x112f2ac38,FUN_102f6630c);
  }
  uVar5 = uRam00000001138056c0;
  uVar4 = uRam00000001138056b8;
  uVar3 = uRam00000001138056b0;
  uVar2 = uRam00000001138056a8;
  uVar1 = uRam00000001138056a0;
  *param_1 = uRam0000000113805698;
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



/* Entry: 102f663f4; end: 102f6643b;  */

void FUN_102f663f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a62d,0xe,2);
  uRam00000001138056d0 = uStack_38;
  uRam00000001138056c8 = uStack_40;
  uRam00000001138056e0 = uStack_28;
  uRam00000001138056d8 = uStack_30;
  uRam00000001138056f0 = uStack_18;
  uRam00000001138056e8 = uStack_20;
  return;
}



/* Entry: 102f6643c; end: 102f664bf;  */

void FUN_102f6643c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_102f664c0();
    }
  }
  return;
}



/* Entry: 102f664c0; end: 102f6664f;  */

/* WARNING: Removing unreachable block (ram,0x000102f665d4) */

void FUN_102f664c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0xf000000000000000;
  uVar11 = param_1[3];
  puVar5 = param_1;
  if (uVar11 >> 0x3c < 0xf) {
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar9 = *param_1;
    func_0x00010006c00c(uVar7,uVar11);
    puVar5 = (undefined8 *)0x0;
    func_0x000100d2dc90(0,0,0,0xf000000000000000);
    uStack_80 = uVar9;
    uStack_78 = uVar6;
    uStack_70 = uVar7;
    uStack_68 = uVar11;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000102f64724();
  (*pcVar10)(&uStack_80,&UNK_1105f04b0,puVar5,param_3,param_4);
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  uVar6 = uStack_80;
  uVar9 = uStack_78;
  uVar7 = uStack_70;
  uVar8 = uStack_68;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    if (uVar11 >> 0x3c < 0xf) {
      pcVar10 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_70,uStack_68);
      (*pcVar10)(param_3,param_4);
    }
    else {
      func_0x00010006c00c(uStack_70,uStack_68);
    }
    func_0x000100d2dc90(uStack_80,uStack_78,uStack_70,uStack_68);
    uVar6 = *param_1;
    uVar9 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  func_0x000100d2dc90(uVar6,uVar9,uVar7,uVar8);
  return;
}



/* Entry: 102f66650; end: 102f666ab;  */

void FUN_102f66650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_102f666ac();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                        param_2,param_3);
  }
  return;
}



/* Entry: 102f666ac; end: 102f6674f;  */

void FUN_102f666ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  if (uStack_88 >> 0x3c < 0xf) {
    FUN_102f774e4(&uStack_a0,auStack_80);
    puVar1 = auStack_80;
    FUN_102f774e4(puVar1,&uStack_60);
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_a8 = uStack_48;
    uStack_b0 = uStack_50;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar2)(&uStack_c0,1,&UNK_1105f04b0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 102f66750; end: 102f667a7;  */

void FUN_102f66750(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0xf000000000000000;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 102f667a8; end: 102f667bb;  */

void FUN_102f667a8(void)

{
  FUN_102f6643c();
  return;
}



/* Entry: 102f667bc; end: 102f667f3;  */

void FUN_102f667bc(void)

{
  FUN_102f66650();
  return;
}



/* Entry: 102f667f4; end: 102f6682b;  */

uint FUN_102f667f4(long param_1,long param_2)

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
  func_0x000102f773bc();
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



/* Entry: 102f6682c; end: 102f66873;  */

uint FUN_102f6682c(undefined8 *param_1)

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
  func_0x000102f6e050(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f66874; end: 102f66913;  */

/* WARNING: Possible PIC construction at 0x000102f668c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f668d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f668c4) */
/* WARNING: Removing unreachable block (ram,0x000102f668d4) */

void FUN_102f66874(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac40 != -1) {
    func_0x000107c61568(0x112f2ac40,FUN_102f663f4);
  }
  uVar5 = uRam00000001138056f0;
  uVar4 = uRam00000001138056e8;
  uVar3 = uRam00000001138056e0;
  uVar2 = uRam00000001138056d8;
  uVar1 = uRam00000001138056d0;
  *param_1 = uRam00000001138056c8;
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



/* Entry: 102f66914; end: 102f66927;  */

void FUN_102f66914(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b1d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b1d8,&UNK_10db6a5a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f66928; end: 102f66a2b;  */

void FUN_102f66928(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f66a2c; end: 102f66ab7;  */

uint FUN_102f66a2c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000102f6e050(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f66ab8; end: 102f66c43;  */

/* WARNING: Removing unreachable block (ram,0x000102f66c28) */

void FUN_102f66ab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_1105f04b0;
        goto code_r0x000102f66c14;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_102f64824();
        lVar2 = unaff_x20 + 0x90;
        puVar3 = &UNK_1105ef690;
        goto code_r0x000102f66c14;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102f6e344();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1105f03a8;
        goto code_r0x000102f66c14;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102f6e304();
        lVar2 = unaff_x20 + 0x30;
        puVar3 = &UNK_1105f0438;
code_r0x000102f66c14:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_102f66b40;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      default:
        goto LAB_102f66b40;
      }
      (*pcVar4)();
LAB_102f66b40:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 102f66c44; end: 102f66e3b;  */

void FUN_102f66c44(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  ulong uStack_50;
  undefined1 uStack_48;
  
  FUN_102f66e3c();
  if (unaff_x21 == 0) {
    uVar4 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar4,2,param_2,param_3);
    }
    puVar3 = unaff_x20;
    FUN_102f66ec8();
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000102f6e344();
      (*pcVar5)(&uStack_50,4,&UNK_1105f03a8,puVar3,param_2,param_3);
    }
    uVar4 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(uVar4,uVar2,5,param_2,param_3);
    }
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000102f6e304();
      (*pcVar5)(&uStack_50,6,&UNK_1105f0438,uVar4,param_2,param_3);
    }
    if (unaff_x20[8] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[8],7,param_2,param_3);
    }
    if (unaff_x20[9] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[9],8,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[10],9,param_2,param_3);
    }
    if (unaff_x20[0xb] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[0xb],10,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}



/* Entry: 102f66e3c; end: 102f66ec7;  */

void FUN_102f66e3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x88);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,1,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f66ec8; end: 102f66f4b;  */

void FUN_102f66ec8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x98);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_48 = *(undefined8 *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102f64824();
    (*pcVar1)(&uStack_70,3,&UNK_1105ef690,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f66f4c; end: 102f66fb7;  */

void FUN_102f66f4c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 102f66fb8; end: 102f66fe7;  */

undefined1  [16] FUN_102f66fb8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 102f66fe8; end: 102f6701b;  */

void FUN_102f66fe8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 102f6701c; end: 102f6702f;  */

undefined1  [16] FUN_102f6701c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x102f6702c;
  return auVar1;
}



/* Entry: 102f67030; end: 102f67043;  */

void FUN_102f67030(void)

{
  FUN_102f66ab8();
  return;
}



/* Entry: 102f67044; end: 102f6709b;  */

void FUN_102f67044(void)

{
  FUN_102f66c44();
  return;
}



/* Entry: 102f6709c; end: 102f6709f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f6709c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f670a0; end: 102f670d7;  */

uint FUN_102f670a0(long param_1,long param_2)

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
  func_0x000102f7737c();
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



/* Entry: 102f670d8; end: 102f67167;  */

uint FUN_102f670d8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_28 = param_1[0x17];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_e8 = unaff_x20[0x17];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_102f6d9e4(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 102f67168; end: 102f67207;  */

/* WARNING: Possible PIC construction at 0x000102f671b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f671c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f671b8) */
/* WARNING: Removing unreachable block (ram,0x000102f671c8) */

void FUN_102f67168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac50 != -1) {
    func_0x000107c61568(0x112f2ac50,0x102f66a70);
  }
  uVar5 = uRam0000000113805720;
  uVar4 = uRam0000000113805718;
  uVar3 = uRam0000000113805710;
  uVar2 = uRam0000000113805708;
  uVar1 = uRam0000000113805700;
  *param_1 = uRam00000001138056f8;
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



/* Entry: 102f67208; end: 102f67243;  */

void FUN_102f67208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b1c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b1c8,&UNK_10db6a598);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f67244; end: 102f6738f;  */

void FUN_102f67244(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_38 = unaff_x20[0x17];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f67390; end: 102f6741f;  */

uint FUN_102f67390(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_102f6d9e4(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 102f67420; end: 102f67467;  */

void FUN_102f67420(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a820,0x27,2);
  uRam0000000113805730 = uStack_38;
  uRam0000000113805728 = uStack_40;
  uRam0000000113805740 = uStack_28;
  uRam0000000113805738 = uStack_30;
  uRam0000000113805750 = uStack_18;
  uRam0000000113805748 = uStack_20;
  return;
}



/* Entry: 102f67468; end: 102f6754f;  */

/* WARNING: Removing unreachable block (ram,0x000102f67540) */

void FUN_102f67468(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x60);
LAB_102f674d0:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x60);
          goto LAB_102f674d0;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000102f64724();
          (*pcVar4)(unaff_x20 + 0x20,&UNK_1105f04b0,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f67550; end: 102f675ef;  */

void FUN_102f67550(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_102f6955c();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x20))(*unaff_x20,2,param_2,param_3);
    }
    if (unaff_x20[1] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[1],3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 102f675f0; end: 102f67643;  */

void FUN_102f675f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 102f67644; end: 102f67657;  */

void FUN_102f67644(void)

{
  FUN_102f67468();
  return;
}



/* Entry: 102f67658; end: 102f6768f;  */

void FUN_102f67658(void)

{
  FUN_102f67550();
  return;
}



/* Entry: 102f67690; end: 102f676c7;  */

uint FUN_102f67690(long param_1,long param_2)

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
  func_0x000102f7733c();
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



/* Entry: 102f676c8; end: 102f6770f;  */

uint FUN_102f676c8(undefined8 *param_1)

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
  FUN_102f6e3c4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f67710; end: 102f677af;  */

/* WARNING: Possible PIC construction at 0x000102f6775c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f6776c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f67760) */
/* WARNING: Removing unreachable block (ram,0x000102f67770) */

void FUN_102f67710(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac70 != -1) {
    func_0x000107c61568(0x112f2ac70,FUN_102f67420);
  }
  uVar5 = uRam0000000113805750;
  uVar4 = uRam0000000113805748;
  uVar3 = uRam0000000113805740;
  uVar2 = uRam0000000113805738;
  uVar1 = uRam0000000113805730;
  *param_1 = uRam0000000113805728;
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



/* Entry: 102f677b0; end: 102f677c3;  */

void FUN_102f677b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b1b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b1b8,&UNK_10db6a590);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f677c4; end: 102f678c7;  */

void FUN_102f677c4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f678c8; end: 102f67957;  */

uint FUN_102f678c8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102f6e3c4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f67958; end: 102f679ef;  */

void FUN_102f67958(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_102f679ac:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000102f679c8;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_102f67994;
code_r0x000102f679c8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_102f67994:
    (*pcVar3)();
  }
  goto LAB_102f679ac;
}



/* Entry: 102f679f0; end: 102f67a93;  */

void FUN_102f679f0(undefined8 param_1,undefined8 param_2,long param_3)

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
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 102f67a94; end: 102f67ae7;  */

void FUN_102f67a94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 102f67ae8; end: 102f67b0f;  */

void FUN_102f67ae8(void)

{
  FUN_102f67958();
  return;
}



/* Entry: 102f67b10; end: 102f67b47;  */

uint FUN_102f67b10(long param_1,long param_2)

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
  func_0x000102f772fc();
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



/* Entry: 102f67b48; end: 102f67b8f;  */

uint FUN_102f67b48(undefined8 *param_1)

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
  FUN_102f6e698(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f67b90; end: 102f67c2f;  */

/* WARNING: Possible PIC construction at 0x000102f67bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f67bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f67be0) */
/* WARNING: Removing unreachable block (ram,0x000102f67bf0) */

void FUN_102f67b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac80 != -1) {
    func_0x000107c61568(0x112f2ac80,0x102f67910);
  }
  uVar5 = uRam0000000113805780;
  uVar4 = uRam0000000113805778;
  uVar3 = uRam0000000113805770;
  uVar2 = uRam0000000113805768;
  uVar1 = uRam0000000113805760;
  *param_1 = uRam0000000113805758;
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



/* Entry: 102f67c30; end: 102f67c43;  */

void FUN_102f67c30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b1a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b1a8,&UNK_10db6a588);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f67c44; end: 102f67d57;  */

void FUN_102f67c44(undefined8 param_1,undefined8 param_2)

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
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f67d58; end: 102f67de3;  */

uint FUN_102f67d58(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102f6e698(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102f67de4; end: 102f67ecb;  */

/* WARNING: Removing unreachable block (ram,0x000102f67ec8) */

void FUN_102f67de4(undefined8 param_1,long param_2,long param_3)

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
        pcVar3 = *(code **)(param_3 + 0x60);
LAB_102f67eb8:
        (*pcVar3)();
      }
      else if (lVar1 == 2) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        (*pcVar3)(unaff_x20 + 0x28,&UNK_1105f04b0,lVar1,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_102f67eb8;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 102f67ecc; end: 102f67f77;  */

void FUN_102f67ecc(undefined8 param_1,undefined8 param_2,long param_3)

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
     (FUN_102f67f78(), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[2],3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 102f67f78; end: 102f68003;  */

void FUN_102f67f78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x40);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,2,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f68004; end: 102f6804b;  */

void FUN_102f68004(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf000000000000000;
  return;
}



/* Entry: 102f6804c; end: 102f6807b;  */

undefined1  [16] FUN_102f6804c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 102f6807c; end: 102f680af;  */

void FUN_102f6807c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 102f680b0; end: 102f680c3;  */

undefined1  [16] FUN_102f680b0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x102f680c0;
  return auVar1;
}



/* Entry: 102f680c4; end: 102f680d7;  */

void FUN_102f680c4(void)

{
  FUN_102f67de4();
  return;
}



/* Entry: 102f680d8; end: 102f68117;  */

void FUN_102f680d8(void)

{
  FUN_102f67ecc();
  return;
}



/* Entry: 102f68118; end: 102f6811b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f68118(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f6811c; end: 102f68153;  */

uint FUN_102f6811c(long param_1,long param_2)

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
  func_0x000102f772bc();
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



/* Entry: 102f68154; end: 102f681ab;  */

uint FUN_102f68154(undefined8 *param_1)

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
  FUN_102f6e754(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f681ac; end: 102f6824b;  */

/* WARNING: Possible PIC construction at 0x000102f681f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f68208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f681fc) */
/* WARNING: Removing unreachable block (ram,0x000102f6820c) */

void FUN_102f681ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2ac90 != -1) {
    func_0x000107c61568(0x112f2ac90,0x102f67d9c);
  }
  uVar5 = uRam00000001138057b0;
  uVar4 = uRam00000001138057a8;
  uVar3 = uRam00000001138057a0;
  uVar2 = uRam0000000113805798;
  uVar1 = uRam0000000113805790;
  *param_1 = uRam0000000113805788;
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



/* Entry: 102f6824c; end: 102f68287;  */

void FUN_102f6824c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b198;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b198,&UNK_10db6a580);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f68288; end: 102f6839b;  */

void FUN_102f68288(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f6839c; end: 102f6843b;  */

uint FUN_102f6839c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_102f6e754(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 102f6843c; end: 102f68473;  */

undefined1  [16] FUN_102f6843c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115b20;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 102f68474; end: 102f684ab;  */

uint FUN_102f68474(long param_1,long param_2)

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
  func_0x000102f7727c();
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



/* Entry: 102f684ac; end: 102f6854b;  */

/* WARNING: Possible PIC construction at 0x000102f684f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f68508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f684fc) */
/* WARNING: Removing unreachable block (ram,0x000102f6850c) */

void FUN_102f684ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2aca0 != -1) {
    func_0x000107c61568(0x112f2aca0,0x102f683f4);
  }
  uVar5 = uRam00000001138057e0;
  uVar4 = uRam00000001138057d8;
  uVar3 = uRam00000001138057d0;
  uVar2 = uRam00000001138057c8;
  uVar1 = uRam00000001138057c0;
  *param_1 = uRam00000001138057b8;
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



/* Entry: 102f6854c; end: 102f6855f;  */

void FUN_102f6854c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b188;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b188,&UNK_10db6a578);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f68560; end: 102f68597;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f68560(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f71ce0();
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



/* Entry: 102f68598; end: 102f685df;  */

void FUN_102f68598(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a780,0x31,2);
  uRam00000001138057f0 = uStack_38;
  uRam00000001138057e8 = uStack_40;
  uRam0000000113805800 = uStack_28;
  uRam00000001138057f8 = uStack_30;
  uRam0000000113805810 = uStack_18;
  uRam0000000113805808 = uStack_20;
  return;
}



/* Entry: 102f685e0; end: 102f68617;  */

undefined1  [16] FUN_102f685e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115b50;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 102f68618; end: 102f6863b;  */

void FUN_102f68618(void)

{
  FUN_102f68acc();
  return;
}



/* Entry: 102f6863c; end: 102f68693;  */

void FUN_102f6863c(void)

{
  FUN_102f68bec();
  return;
}



/* Entry: 102f68694; end: 102f686cb;  */

uint FUN_102f68694(long param_1,long param_2)

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
  func_0x000102f7723c();
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



/* Entry: 102f686cc; end: 102f68733;  */

uint FUN_102f686cc(undefined8 *param_1)

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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
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
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_102f6eabc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 102f68734; end: 102f687d3;  */

/* WARNING: Possible PIC construction at 0x000102f68780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f68790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f68784) */
/* WARNING: Removing unreachable block (ram,0x000102f68794) */

void FUN_102f68734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2acb0 != -1) {
    func_0x000107c61568(0x112f2acb0,FUN_102f68598);
  }
  uVar5 = uRam0000000113805810;
  uVar4 = uRam0000000113805808;
  uVar3 = uRam0000000113805800;
  uVar2 = uRam00000001138057f8;
  uVar1 = uRam00000001138057f0;
  *param_1 = uRam00000001138057e8;
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



/* Entry: 102f687d4; end: 102f687e7;  */

void FUN_102f687d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b178;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b178,&UNK_10db6a570);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f687e8; end: 102f6881f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f687e8(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f71ddc();
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



/* Entry: 102f68820; end: 102f688cb;  */

uint FUN_102f68820(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
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
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_102f6eabc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 102f688cc; end: 102f68927;  */

void FUN_102f688cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_102f6b52c();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 102f68928; end: 102f6895f;  */

undefined1  [16] FUN_102f68928(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f115b80;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 102f68960; end: 102f68997;  */

uint FUN_102f68960(long param_1,long param_2)

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
  func_0x000102f771fc();
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



/* Entry: 102f68998; end: 102f68a37;  */

/* WARNING: Possible PIC construction at 0x000102f689e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f689f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f689e8) */
/* WARNING: Removing unreachable block (ram,0x000102f689f8) */

void FUN_102f68998(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2acc8 != -1) {
    func_0x000107c61568(0x112f2acc8,0x102f68884);
  }
  uVar5 = uRam0000000113805840;
  uVar4 = uRam0000000113805838;
  uVar3 = uRam0000000113805830;
  uVar2 = uRam0000000113805828;
  uVar1 = uRam0000000113805820;
  *param_1 = uRam0000000113805818;
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



/* Entry: 102f68a38; end: 102f68a4b;  */

void FUN_102f68a38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2b168;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2b168,&UNK_10db6a568);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f68a4c; end: 102f68a83;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_102f68a4c(undefined8 *param_1,undefined8 param_2)

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
  FUN_102f71ed8();
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



/* Entry: 102f68a84; end: 102f68acb;  */

void FUN_102f68a84(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6a740,0x3e,2);
  uRam0000000113805850 = uStack_38;
  uRam0000000113805848 = uStack_40;
  uRam0000000113805860 = uStack_28;
  uRam0000000113805858 = uStack_30;
  uRam0000000113805870 = uStack_18;
  uRam0000000113805868 = uStack_20;
  return;
}



/* Entry: 102f68acc; end: 102f68beb;  */

void FUN_102f68acc(undefined8 param_1,long param_2,long param_3,code *param_4,undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
LAB_102f68b30:
  do {
    while( true ) {
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
      if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
        return;
      }
      if (lVar1 < 3) break;
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        lVar2 = unaff_x20 + 0x50;
        goto LAB_102f68bb4;
      }
      if (lVar1 == 4) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_4)();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = param_5;
LAB_102f68bbc:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
    }
    if (lVar1 != 1) {
      if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000102f64724();
        lVar2 = unaff_x20 + 0x30;
LAB_102f68bb4:
        puVar3 = &UNK_1105f04b0;
        goto LAB_102f68bbc;
      }
      goto LAB_102f68b30;
    }
    (**(code **)(param_3 + 0x150))();
  } while( true );
}



/* Entry: 102f68bec; end: 102f68cf3;  */

void FUN_102f68bec(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_102f68cf4(), unaff_x21 == 0)) {
    puVar3 = unaff_x20;
    FUN_102f68d80();
    if (unaff_x20[2] != 0) {
      uStack_58 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[2];
      (*param_4)();
      (*pcVar4)(&uStack_60,4,param_5,puVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 102f68cf4; end: 102f68d7f;  */

void FUN_102f68cf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 102f68d80; end: 102f68e0b;  */

void FUN_102f68d80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x68);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102f64724();
    (*pcVar1)(&uStack_60,3,&UNK_1105f04b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 102f68e0c; end: 102f68e7b;  */

void FUN_102f68e0c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf000000000000000;
  return;
}



/* Entry: 102f68e7c; end: 102f68e9f;  */

void FUN_102f68e7c(void)

{
  FUN_102f68acc();
  return;
}


