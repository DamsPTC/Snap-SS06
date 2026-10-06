/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102103188; end: 1021031db;  */

void FUN_102103188(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  func_0x000107c6068c(auStack_78);
  FUN_102103068(auStack_78,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021031dc; end: 10210330f;  */

undefined1  [16]
FUN_1021031dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  code **ppcVar7;
  undefined1 auVar8 [16];
  code *apcStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = param_1;
  FUN_102103310();
  uVar1 = param_1;
  func_0x000102103640(param_1,param_2,param_3,param_4);
  uVar2 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = uVar6;
  uStack_58 = uVar1;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_1021051b8(0,param_3);
  uVar3 = 0;
  func_0x0001021051c4(0,param_3);
  puVar4 = &UNK_10da5d0a8;
  func_0x000107c61520(&UNK_10da5d0a8,uVar2);
  pcVar5 = FUN_1021051e0;
  func_0x0001000ca88c(FUN_1021051e0,apcStack_80,uVar2,uVar3,PTR___ss5NeverON_11034ee88,puVar4,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar6);
  uVar6 = 0;
  apcStack_80[0] = pcVar5;
  func_0x000107c5fc80(0,uVar3);
  puVar4 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar6);
  ppcVar7 = apcStack_80;
  FUN_102104ec4(ppcVar7,param_3,uVar6,puVar4);
  func_0x000107c6142c(pcVar5);
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = ppcVar7;
  return auVar8;
}



/* Entry: 102103310; end: 102103953;  */

code * FUN_102103310(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  undefined1 auStack_110 [8];
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c0;
  undefined2 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_e0 = *(long *)(param_3 + -8);
  lVar11 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar6 = 0;
  func_0x0001021051c4(0,lVar11);
  lStack_108 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_e8 = lVar11 - extraout_x12_00;
  lVar11 = param_2;
  func_0x000107c5fc74(param_2,lVar6);
  func_0x000107c5fc74(param_1,lVar6);
  if (lVar11 <= param_1) {
    param_1 = lVar11;
  }
  uVar7 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  uStack_d8 = uVar7;
  func_0x000107c5f9f4(param_1,param_3,uVar7,param_4);
  lVar12 = param_2;
  lStack_70 = param_1;
  func_0x000107c5fc7c(param_2,lVar6);
  lVar3 = lStack_d0;
  lVar11 = lStack_108;
  if (lVar12 != 0) {
    lVar12 = 0;
    lVar8 = lStack_e0;
    puStack_100 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_f8 = param_2;
    uStack_f0 = param_4;
    do {
      uVar7 = uStack_d8;
      lVar10 = lStack_e8;
      func_0x000107c5fc98(lStack_e8,lVar12,param_2,lVar6);
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102103640);
        (*pcVar5)();
      }
      lStack_d0 = lVar12 + 1;
      (**(code **)(lVar11 + 0x20))(lVar3,lVar10,lVar6);
      func_0x0001021012d4(lVar13,lVar6);
      uVar2 = uStack_f0;
      func_0x000107c5fa40(&lStack_c0,lVar13,lStack_70,param_3,uVar7,uStack_f0);
      puVar1 = puStack_100;
      cVar4 = uStack_b8._1_1_;
      (**(code **)(lVar8 + 0x10))(puStack_100,lVar13,param_3);
      if (cVar4 == '\x01') {
        lVar8 = lVar6;
        func_0x000102101210();
        lStack_c0 = lVar8;
      }
      else {
        lStack_c0 = 0;
      }
      uStack_b8 = (ushort)(cVar4 != '\x01');
      uVar9 = 0;
      func_0x000107c5fa34(0,param_3,uVar7,uVar2);
      func_0x000107c5fa44(&lStack_c0,puVar1,uVar9);
      lVar8 = lStack_e0;
      (**(code **)(lStack_e0 + 8))(lVar13,param_3);
      (**(code **)(lVar11 + 8))(lVar3,lVar6);
      param_2 = lStack_f8;
      lVar10 = lStack_f8;
      func_0x000107c5fc7c(lStack_f8,lVar6);
      lVar12 = lVar12 + 1;
      param_1 = lStack_70;
      param_4 = uStack_f0;
    } while (lStack_d0 != lVar10);
  }
  uVar7 = uStack_d8;
  puStack_98 = auStack_90;
  uStack_a0 = 0x102106240;
  lStack_b0 = param_3;
  uStack_a8 = param_4;
  lStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c61434(param_1);
  pcVar5 = FUN_102106260;
  func_0x000107c5fa10(FUN_102106260,&lStack_c0,param_1,param_3,uVar7,param_4);
  func_0x000107c6142c(param_1);
  return pcVar5;
}



/* Entry: 102103954; end: 102103c3b;  */

void FUN_102103954(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  code *apcStack_b0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  char cStack_67;
  
  lVar11 = *(long *)(param_5 + -8);
  lVar6 = param_5;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_6;
  puStack_78 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)apcStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar7 - extraout_x12;
  uVar4 = 0;
  func_0x0001021051c4(0,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)(lVar10 - extraout_x12_00);
  apcStack_b0[2] = *(code **)(extraout_x8_00 + 0x10);
  apcStack_b0[3] = (code *)param_2;
  (*apcStack_b0[2])(puVar12,param_2,uVar4);
  puVar5 = puVar12;
  func_0x000107c614c4(puVar12,uVar4);
  apcStack_b0[1] = (code *)*puVar12;
  uVar8 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar6 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar8,"offset element associatedWith ",0);
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  pcVar9 = *(code **)(lVar11 + 0x20);
  if ((int)puVar5 == 1) {
    (*pcVar9)(lVar10,(long)puVar12 + (long)*(int *)(lVar6 + 0x30),param_5);
    uVar2 = uStack_80;
    func_0x000107c5fa40(&uStack_70,lVar10,uStack_90,param_5,uVar8,uStack_80);
    if ((cStack_67 != '\x01') &&
       (func_0x000107c5fa40(&uStack_70,lVar10,uVar3,param_5,uVar8,uVar2), puVar5 = puStack_78,
       cStack_67 != '\x01')) {
      iVar1 = *(int *)(lVar6 + 0x30);
      puVar12 = (undefined8 *)((long)puStack_78 + (long)*(int *)(lVar6 + 0x40));
      *puStack_78 = apcStack_b0[1];
      (*pcVar9)((long)puStack_78 + (long)iVar1,lVar10,param_5);
      *puVar12 = uStack_70;
      *(undefined1 *)(puVar12 + 1) = uStack_68;
      uVar8 = 1;
LAB_102103c14:
      func_0x000107c6159c(puVar5,uVar4,uVar8);
      return;
    }
    pcVar9 = *(code **)(lVar11 + 8);
    lVar7 = lVar10;
  }
  else {
    (*pcVar9)(lVar7,(long)puVar12 + (long)*(int *)(lVar6 + 0x30),param_5);
    uVar3 = uStack_80;
    func_0x000107c5fa40(&uStack_70,lVar7,uStack_88,param_5,uVar8,uStack_80);
    if ((cStack_67 != '\x01') &&
       (func_0x000107c5fa40(&uStack_70,lVar7,uVar2,param_5,uVar8,uVar3), puVar5 = puStack_78,
       cStack_67 != '\x01')) {
      iVar1 = *(int *)(lVar6 + 0x30);
      puVar12 = (undefined8 *)((long)puStack_78 + (long)*(int *)(lVar6 + 0x40));
      *puStack_78 = apcStack_b0[1];
      (*pcVar9)((long)puStack_78 + (long)iVar1,lVar7,param_5);
      *puVar12 = uStack_70;
      *(undefined1 *)(puVar12 + 1) = uStack_68;
      uVar8 = 0;
      goto LAB_102103c14;
    }
    pcVar9 = *(code **)(lVar11 + 8);
  }
  (*pcVar9)(lVar7,param_5);
  (*apcStack_b0[2])(puStack_78,apcStack_b0[3],uVar4);
  return;
}



/* Entry: 102103c3c; end: 102103c9f;  */

ulong FUN_102103c3c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102103ca0; end: 102103cb7;  */

ulong FUN_102103ca0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102103cb8; end: 102103da3;  */

void FUN_102103cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10da5d5e8;
  func_0x000107c61520(&UNK_10da5d5e8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSYsSHRzSH8RawValueSYRpzrlE04hashB0Sivg_11034dc08)
            (param_1,param_2,puVar1,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 102103da4; end: 102103e0b;  */

void FUN_102103da4(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102103c3c(uVar1,param_2[1],*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102103e0c; end: 102103e1b;  */

undefined8 FUN_102103e0c(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar2 = 0xd000000000000010;
  if (bVar1 != 2) {
    uVar2 = 0x65766f6d65527369;
  }
  uVar3 = 0x74657366666f;
  if (bVar1 != 0) {
    uVar3 = 0x746e656d656c65;
  }
  if (bVar1 < 2) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 102103e1c; end: 102103e4b;  */

void FUN_102103e1c(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_102103ca0(param_2,param_3,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  *param_1 = (char)param_2;
  return;
}



/* Entry: 102103e4c; end: 102103e57;  */

undefined1  [16] FUN_102103e4c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102103e58; end: 102103eef;  */

void FUN_102103e58(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1021061b8(uVar1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102103ef0; end: 102104233;  */

/* WARNING: Removing unreachable block (ram,0x000102104140) */
/* WARNING: Removing unreachable block (ram,0x000102104104) */
/* WARNING: Removing unreachable block (ram,0x000102104150) */
/* WARNING: Removing unreachable block (ram,0x000102104154) */

void FUN_102103ef0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar13;
  long lVar14;
  undefined8 *apuStack_d0 [2];
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lStack_b0 = *(long *)(param_3 + -8);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar13 = (long)apuStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0xff;
  lStack_a0 = lVar13;
  uStack_98 = param_4;
  FUN_102105200(0xff);
  puVar6 = &UNK_10da5d790;
  func_0x000107c61520(&UNK_10da5d790,uVar5);
  lVar7 = 0;
  func_0x000107c60518(0,uVar5,puVar6);
  lStack_a8 = *(long *)(lVar7 + -8);
  lStack_80 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_00;
  lVar8 = 0;
  lStack_90 = param_3;
  func_0x0001021051c4(0,param_3);
  lVar14 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar10);
  lStack_88 = lVar13;
  func_0x000107c606e0(lVar13,uVar5,uVar5,puVar6,uVar10,uVar11);
  lVar4 = lStack_90;
  uVar10 = uStack_98;
  lVar3 = lStack_a0;
  lVar7 = lStack_a8;
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar9 = (undefined8 *)&uStack_51;
    apuStack_d0[1] = (undefined8 *)(lVar13 - extraout_x8_01);
    lStack_c0 = lVar14;
    func_0x000107c60500(puVar9,lStack_80);
    uStack_52 = 1;
    apuStack_d0[0] = puVar9;
    func_0x000107c60508(lVar3,lVar4,&uStack_52,lStack_80,lVar4,uVar10);
    uVar10 = 0x112d4f4d0;
    func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
    uStack_53 = 2;
    uVar11 = 0x112e58c88;
    FUN_10210520c(0x112e58c88,PTR___sSiSesWP_11034dee0,PTR___sxSgSesSeRzlMc_11034f198);
    func_0x000107c60508(&uStack_70,uVar10,&uStack_53,lStack_80,uVar10,uVar11);
    uStack_54 = 3;
    puVar12 = &uStack_54;
    func_0x000107c604f8(puVar12,lStack_80);
    (**(code **)(lVar7 + 8))(lStack_88,lStack_80);
    lVar7 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar4,uVar10,"offset element associatedWith ",0);
    puVar2 = apuStack_d0[1];
    iVar1 = *(int *)(lVar7 + 0x30);
    puVar9 = (undefined8 *)((long)apuStack_d0[1] + (long)*(int *)(lVar7 + 0x40));
    *apuStack_d0[1] = apuStack_d0[0];
    (**(code **)(lStack_b0 + 0x20))((long)puVar2 + (long)iVar1,lVar3,lVar4);
    *puVar9 = uStack_70;
    *(undefined1 *)(puVar9 + 1) = uStack_68;
    func_0x000107c6159c(puVar2,lVar8,(uint)puVar12 & 1);
    (**(code **)(lStack_c0 + 0x20))(uStack_b8,puVar2,lVar8);
  }
  func_0x0001000834e4(param_2);
  return;
}



/* Entry: 102104234; end: 102104577;  */

void FUN_102104234(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  code *pcVar13;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar14;
  long lVar15;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar15 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar15 + -8);
  lVar5 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0xff;
  uStack_a8 = param_4;
  FUN_102105200(0xff,lVar15);
  puVar4 = &UNK_10da5d790;
  func_0x000107c61520(&UNK_10da5d790,uVar3);
  lVar5 = 0;
  func_0x000107c60564(0,uVar3,puVar4);
  lVar12 = *(long *)(lVar5 + -8);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar14 - extraout_x8_01;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar7);
  func_0x000107c606ec(lVar5,uVar3,uVar3,puVar4,uVar7,uVar9);
  (**(code **)(lStack_a0 + 0x10))(lVar14,unaff_x20,param_2);
  lVar6 = lVar14;
  lStack_a0 = param_2;
  func_0x000107c614c4(lVar14,param_2);
  uVar7 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar8 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar15,uVar7,"offset element associatedWith ",0);
  lVar10 = lStack_98;
  iVar1 = *(int *)(lVar8 + 0x30);
  bVar2 = (int)lVar6 != 1;
  if (bVar2) {
    uStack_51 = 3;
    lVar6 = -0x41;
  }
  else {
    lVar6 = -0x45;
  }
  func_0x000107c60540(!bVar2,&stack0xfffffffffffffff0 + lVar6,lStack_98);
  if (unaff_x21 == 0) {
    pcVar13 = *(code **)(lVar11 + 8);
    (*pcVar13)(lVar14 + iVar1,lVar15);
    lVar8 = lStack_a0;
    FUN_102101210(lStack_a0);
    uStack_52 = 0;
    func_0x000107c6054c();
    lVar6 = lStack_b0;
    func_0x0001021012d4(lStack_b0,lVar8);
    uStack_53 = 1;
    func_0x000107c60554(lVar6,&uStack_53,lVar10,lVar15,uStack_a8);
    (*pcVar13)(lVar6);
    uStack_68 = (undefined1)lVar15;
    func_0x000102101398();
    uStack_54 = 2;
    uVar7 = 0x112d4f4d0;
    lStack_70 = lVar8;
    func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
    uVar9 = 0x112e58c90;
    FUN_10210520c(0x112e58c90,PTR___sSiSEsWP_11034deb8,PTR___sxSgSEsSERzlMc_11034f180);
    func_0x000107c60554(&lStack_70,&uStack_54,lVar10,uVar7,uVar9);
    pcVar13 = *(code **)(lVar12 + 8);
  }
  else {
    (**(code **)(lVar12 + 8))(lVar5,lVar10);
    pcVar13 = *(code **)(lVar11 + 8);
    lVar5 = lVar14 + iVar1;
    lVar10 = lVar15;
  }
  (*pcVar13)(lVar5,lVar10);
  return;
}



/* Entry: 102104578; end: 1021045b3;  */

void FUN_102104578(undefined8 param_1,long param_2,long param_3)

{
  FUN_102103ef0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + -8),
                *(undefined8 *)(param_3 + -0x10));
  return;
}



/* Entry: 1021045b4; end: 102104787;  */

void FUN_1021045b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_58;
  
  uVar1 = 0xff;
  uStack_a8 = param_3;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  FUN_102105274(0xff,param_4);
  puVar2 = &UNK_10da5d740;
  func_0x000107c61520(&UNK_10da5d740,uVar1);
  lVar3 = 0;
  func_0x000107c60564(0,uVar1,puVar2);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar4);
  func_0x000107c606ec(puVar8,uVar1,uVar1,puVar2,uVar4,uVar5);
  uStack_61 = 0;
  uVar4 = 0xff;
  uStack_58 = param_2;
  func_0x0001021051c4(0xff,param_4);
  uVar5 = 0;
  func_0x000107c5fc80(0,uVar4);
  uStack_78 = uStack_a0;
  uStack_70 = uStack_98;
  puVar2 = &UNK_10da5d3e0;
  func_0x000107c61520(&UNK_10da5d3e0,uVar4,&uStack_78);
  puVar6 = PTR___sSayxGSEsSERzlMc_11034dce0;
  puStack_80 = puVar2;
  func_0x000107c61520(PTR___sSayxGSEsSERzlMc_11034dce0,uVar5,&puStack_80);
  func_0x000107c60554(&uStack_58,&uStack_61,lVar3,uVar5,puVar6);
  if (unaff_x21 == 0) {
    uStack_58 = uStack_a8;
    uStack_61 = 1;
    func_0x000107c60554(&uStack_58,&uStack_61,lVar3,uVar5,puVar6);
    (**(code **)(lVar7 + 8))(puVar8,lVar3);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar8,lVar3);
  }
  return;
}



/* Entry: 102104788; end: 102104993;  */

/* WARNING: Removing unreachable block (ram,0x000102104970) */
/* WARNING: Removing unreachable block (ram,0x0001021048e4) */

undefined1  [16]
FUN_102104788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  long lStack_58;
  
  uVar1 = 0xff;
  uStack_98 = param_3;
  uStack_90 = param_4;
  FUN_102105274(0xff);
  puVar2 = &UNK_10da5d740;
  func_0x000107c61520(&UNK_10da5d740,uVar1);
  lVar3 = 0;
  func_0x000107c60518(0,uVar1,puVar2);
  lVar7 = *(long *)(lVar3 + -8);
  lStack_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,lVar3);
  func_0x000107c606e0(auStack_a0 + -extraout_x8,uVar1,uVar1,puVar2,lVar3,uVar5);
  if (unaff_x21 == 0) {
    uVar5 = 0xff;
    func_0x0001021051c4(0xff,param_2);
    uVar1 = 0;
    func_0x000107c5fc80(0,uVar5);
    uStack_61 = 0;
    uStack_78 = uStack_98;
    uStack_70 = uStack_90;
    puVar2 = &UNK_10da5d3a0;
    func_0x000107c61520(&UNK_10da5d3a0,uVar5,&uStack_78);
    puVar6 = PTR___sSayxGSesSeRzlMc_11034dd10;
    puStack_80 = puVar2;
    func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&puStack_80);
    lVar4 = lStack_88;
    func_0x000107c60508(&lStack_58,uVar1,&uStack_61,lStack_88,uVar1,puVar6);
    lVar3 = lStack_58;
    uStack_61 = 1;
    func_0x000107c60508(&lStack_58,uVar1,&uStack_61,lVar4,uVar1,puVar6);
    (**(code **)(lVar7 + 8))(auStack_a0 + -extraout_x8,lVar4);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
    lStack_58 = lVar4;
  }
  auVar8._8_8_ = lStack_58;
  auVar8._0_8_ = lVar3;
  return auVar8;
}



/* Entry: 102104994; end: 1021049c7;  */

void FUN_102104994(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_102104788(param_2,uVar1,*(undefined8 *)(param_4 + -8),*(undefined8 *)(param_4 + -0x10));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
  }
  return;
}



/* Entry: 1021049c8; end: 1021049eb;  */

void FUN_1021049c8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1021045b4(param_1,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_3 + -8),*(undefined8 *)(param_3 + -0x10));
  return;
}



/* Entry: 1021049ec; end: 102104b03;  */

void FUN_1021049ec(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar6;
  if (SCARRY8(lVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102104a98);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_102104c50(lVar5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102104a7c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102104b04();
    lVar5 = *unaff_x20;
    goto joined_r0x000102104aac;
  }
  lVar5 = *unaff_x20;
joined_r0x000102104aac:
  if ((uVar3 & 1) == 0) {
    lVar4 = lVar5 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102104b04);
      (*pcVar1)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 102104b04; end: 102104c4f;  */

void FUN_102104b04(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112e58fa0,&UNK_10db3db60);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_102104bdc;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_102104bdc:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102104c50);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102104c30;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_102104c30:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102104c50; end: 102104eab;  */

void FUN_102104c50(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112e58fa0;
  func_0x0001000285a8(0x112e58fa0,&UNK_10db3db60);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar13);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_102104e78:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar14;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102104ea8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_102104e78;
        }
        uVar11 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar16 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar16 << 6;
    uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar15);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102104eac);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 102104eac; end: 102104ec3;  */

undefined8 FUN_102104eac(void)

{
  return 0;
}



/* Entry: 102104ec4; end: 10210515f;  */

void FUN_102104ec4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  long extraout_x8;
  code *pcVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 auStack_a0 [16];
  code *pcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  func_0x0001021051c4();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  pcVar1 = FUN_102106208;
  pcStack_80 = (code *)param_2;
  lStack_78 = param_3;
  lStack_70 = param_4;
  func_0x000107c5fc0c(FUN_102106208,&pcStack_90,param_3,*(undefined8 *)(param_4 + 8));
  uVar3 = 0;
  pcStack_90 = pcVar1;
  func_0x000107c5fc80(0,lVar2);
  puVar4 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar3);
  func_0x000107c5feb0(uVar3,puVar4);
  if ((uVar3 & 1) == 0) {
    pcVar10 = pcVar1;
    func_0x000107c5fc74(pcVar1,lVar2);
    puVar4 = PTR___sSiN_11034deb0;
    if ((long)pcVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102105160);
      (*pcVar1)();
    }
    if (pcVar10 != (code *)0x0) {
      pcVar12 = (code *)0x0;
      pcVar9 = pcVar10;
      do {
        if (SCARRY8((long)pcVar12,(long)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10210514c);
          (*pcVar1)();
        }
        pcVar10 = (code *)((long)(pcVar12 + (long)pcVar9) / 2);
        func_0x000107c5fc98(puVar11,pcVar10,pcVar1,lVar2);
        puVar6 = puVar11;
        func_0x000107c614c4(puVar11,lVar2);
        if ((int)puVar6 == 1) {
          if ((long)pcVar9 <= (long)pcVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102105150);
            (*pcVar1)();
          }
          pcVar12 = pcVar10 + 1;
          pcVar10 = pcVar9;
        }
        else if ((long)pcVar10 < (long)pcVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102105154);
          (*pcVar1)();
        }
        uVar8 = 0x112d4f4d0;
        func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
        lVar5 = 0;
        func_0x000107c61514(0,puVar4,param_2,uVar8,"offset element associatedWith ",0);
        (**(code **)(*(long *)(param_2 + -8) + 8))(puVar11 + *(int *)(lVar5 + 0x30),param_2);
        pcVar9 = pcVar10;
      } while (pcVar12 != pcVar10);
      if ((long)pcVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102105158);
        (*pcVar1)();
      }
    }
  }
  else {
    pcVar10 = (code *)0x0;
  }
  pcVar7 = (code *)0x0;
  pcVar12 = pcVar10;
  pcVar9 = pcVar1;
  lVar5 = lVar2;
  func_0x000107c5fc94();
  uVar8 = 0;
  pcStack_90 = pcVar7;
  pcStack_88 = pcVar12;
  pcStack_80 = pcVar9;
  lStack_78 = lVar5;
  func_0x000107c60244(0,lVar2);
  puVar4 = PTR___ss10ArraySliceVyxGSTsMc_11034e2e8;
  func_0x000107c61520(PTR___ss10ArraySliceVyxGSTsMc_11034e2e8,uVar8);
  func_0x000107c5fc90(&pcStack_90,lVar2,uVar8,puVar4);
  pcVar12 = pcVar1;
  func_0x000107c5fc74(pcVar1,lVar2);
  if ((long)pcVar10 <= (long)pcVar12) {
    pcVar9 = pcVar1;
    lVar5 = lVar2;
    func_0x000107c5fc94();
    func_0x000107c6142c(pcVar1);
    pcStack_90 = pcVar10;
    pcStack_88 = pcVar12;
    pcStack_80 = pcVar9;
    lStack_78 = lVar5;
    func_0x000107c5fc90(&pcStack_90,lVar2,uVar8,puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210515c);
  (*pcVar1)();
}



/* Entry: 102105160; end: 1021051b7;  */

void FUN_102105160(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10210146c();
  if ((uVar1 & 1) != 0) {
    FUN_102104ec4(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1021051b8; end: 1021051df;  */

void FUN_1021051b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6afe40);
  return;
}



/* Entry: 1021051e0; end: 1021051ff;  */

void FUN_1021051e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102103954(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2);
  return;
}



/* Entry: 102105200; end: 10210520b;  */

void FUN_102105200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6aff70);
  return;
}



/* Entry: 10210520c; end: 102105273;  */

void FUN_10210520c(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    uStack_38 = param_2;
    func_0x000107c61520(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102105274; end: 1021052cf;  */

void FUN_102105274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6afee4);
  return;
}



/* Entry: 1021052d0; end: 10210533f;  */

void FUN_1021052d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  func_0x000107c61520(&UNK_10da5d2a0,param_1,&uStack_18);
  return;
}



/* Entry: 102105340; end: 10210539b;  */

/* WARNING: Possible PIC construction at 0x000102105354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102105358) */

void FUN_102105340(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10210539c; end: 1021053f7;  */

undefined8 * FUN_10210539c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1021053f8; end: 102105433;  */

undefined8 * FUN_1021053f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102105434; end: 1021054b7;  */

int FUN_102105434(ulong *param_1,int param_2)

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



/* Entry: 1021054b8; end: 10210569f;  */

void FUN_1021054b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  func_0x000107c6143c();
  puVar1 = PTR___sBi64_WV_11034d670;
  if (uVar3 < 0x40) {
    lVar2 = *(long *)(lVar2 + -8);
    func_0x000107c61508(auStack_70,PTR___sBi64_WV_11034d670 + 0x40,lVar2 + 0x40,&UNK_10da5d508);
    puStack_50 = auStack_70;
    func_0x000107c61508(auStack_90,puVar1 + 0x40,lVar2 + 0x40,&UNK_10da5d508);
    puStack_48 = auStack_90;
    func_0x000107c61528(param_1,0,2,&puStack_50);
  }
  return;
}



/* Entry: 1021056a0; end: 1021056bf;  */

void FUN_1021056a0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001021056bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 1021056c0; end: 1021057a3;  */

undefined8 * FUN_1021056c0(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9;
  bVar4 = *(byte *)((long)param_2 + uVar2);
  uVar9 = (uint)bVar4;
  if (1 < bVar4) {
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar9 = CONCAT11(bVar4,(char)*param_2) - 0x1fe;
    }
    else {
      uVar9 = *param_2 + 2;
    }
  }
  *param_1 = *(undefined8 *)param_2;
  uVar10 = (long)param_1 + uVar8 + 8 & ~uVar8;
  uVar8 = (long)param_2 + uVar8 + 8 & ~uVar8;
  (**(code **)(lVar5 + 0x10))(uVar10,uVar8);
  puVar7 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
  uVar3 = *(undefined1 *)(puVar7 + 1);
  puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xfffffffffffffff8);
  *puVar6 = *puVar7;
  *(undefined1 *)(puVar6 + 1) = uVar3;
  *(bool *)((long)param_1 + uVar2) = uVar9 == 1;
  return param_1;
}



/* Entry: 1021057a4; end: 1021058b3;  */

int * FUN_1021057a4(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1 != param_2) {
    lVar8 = *(long *)(param_3 + 0x10);
    lVar10 = *(long *)(lVar8 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9;
    uVar9 = uVar11 + 8 + (long)param_1 & (uVar11 ^ 0xffffffffffffffff);
    (**(code **)(lVar10 + 8))(uVar9,lVar8);
    bVar4 = *(byte *)((long)param_2 + uVar2);
    uVar5 = (uint)bVar4;
    if (1 < bVar4) {
      if ((uVar2 & 0xfffffff8) == 0) {
        uVar5 = CONCAT11(bVar4,(char)*param_2) - 0x1fe;
      }
      else {
        uVar5 = *param_2 + 2;
      }
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar11 = (long)param_2 + uVar11 + 8 & ~uVar11;
    (**(code **)(lVar10 + 0x10))(uVar9,uVar11,lVar8);
    puVar7 = (undefined8 *)(lVar1 + uVar11 & 0xfffffffffffffff8);
    uVar3 = *(undefined1 *)(puVar7 + 1);
    puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
    *puVar6 = *puVar7;
    *(undefined1 *)(puVar6 + 1) = uVar3;
    *(bool *)((long)param_1 + uVar2) = uVar5 == 1;
  }
  return param_1;
}



/* Entry: 1021058b4; end: 102105997;  */

undefined8 * FUN_1021058b4(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar8 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  uVar2 = (lVar1 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9;
  bVar4 = *(byte *)((long)param_2 + uVar2);
  uVar9 = (uint)bVar4;
  if (1 < bVar4) {
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar9 = CONCAT11(bVar4,(char)*param_2) - 0x1fe;
    }
    else {
      uVar9 = *param_2 + 2;
    }
  }
  *param_1 = *(undefined8 *)param_2;
  uVar10 = (long)param_1 + uVar8 + 8 & ~uVar8;
  uVar8 = (long)param_2 + uVar8 + 8 & ~uVar8;
  (**(code **)(lVar5 + 0x20))(uVar10,uVar8);
  puVar7 = (undefined8 *)(lVar1 + uVar8 & 0xfffffffffffffff8);
  uVar3 = *(undefined1 *)(puVar7 + 1);
  puVar6 = (undefined8 *)(lVar1 + uVar10 & 0xfffffffffffffff8);
  *puVar6 = *puVar7;
  *(undefined1 *)(puVar6 + 1) = uVar3;
  *(bool *)((long)param_1 + uVar2) = uVar9 == 1;
  return param_1;
}



/* Entry: 102105998; end: 102105aa7;  */

int * FUN_102105998(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_1 != param_2) {
    lVar8 = *(long *)(param_3 + 0x10);
    lVar10 = *(long *)(lVar8 + -8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x40) + 7;
    uVar2 = (lVar1 + (uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9;
    uVar9 = uVar11 + 8 + (long)param_1 & (uVar11 ^ 0xffffffffffffffff);
    (**(code **)(lVar10 + 8))(uVar9,lVar8);
    bVar4 = *(byte *)((long)param_2 + uVar2);
    uVar5 = (uint)bVar4;
    if (1 < bVar4) {
      if ((uVar2 & 0xfffffff8) == 0) {
        uVar5 = CONCAT11(bVar4,(char)*param_2) - 0x1fe;
      }
      else {
        uVar5 = *param_2 + 2;
      }
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar11 = (long)param_2 + uVar11 + 8 & ~uVar11;
    (**(code **)(lVar10 + 0x20))(uVar9,uVar11,lVar8);
    puVar7 = (undefined8 *)(lVar1 + uVar11 & 0xfffffffffffffff8);
    uVar3 = *(undefined1 *)(puVar7 + 1);
    puVar6 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
    *puVar6 = *puVar7;
    *(undefined1 *)(puVar6 + 1) = uVar3;
    *(bool *)((long)param_1 + uVar2) = uVar5 == 1;
  }
  return param_1;
}



/* Entry: 102105aa8; end: 102105b8f;  */

int FUN_102105aa8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar7 = *(long *)(lVar4 + 0x40) + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8;
  if (0xfe < param_2) {
    lVar4 = uVar7 + 10;
    uVar5 = (uint)lVar4;
    uVar3 = 2;
    uVar6 = uVar3;
    if (uVar5 < 4) {
      uVar6 = (param_2 + 0xff01 >> 0x10) + 1;
    }
    if (0xffff < uVar6) {
      uVar3 = 4;
    }
    if (uVar6 < 0x100) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (1 < uVar6) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) &&
         (uVar3 = (uint)*(byte *)((long)param_1 + lVar4), *(byte *)((long)param_1 + lVar4) != 0))
      goto LAB_102105b40;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)((long)param_1 + lVar4);
      if (*(ushort *)((long)param_1 + lVar4) != 0) {
LAB_102105b40:
        uVar3 = uVar3 - 1 << (ulong)((uVar5 & 3) << 3);
        if (uVar5 < 4) {
          uVar6 = (uint)(ushort)*param_1;
        }
        else {
          uVar6 = *param_1;
          uVar3 = 0;
        }
        return (uVar6 | uVar3) + 0xff;
      }
    }
    else {
      uVar3 = *(uint *)((long)param_1 + lVar4);
      if (uVar3 != 0) goto LAB_102105b40;
    }
  }
  uVar3 = (uint)*(byte *)((long)param_1 + uVar7 + 9);
  iVar2 = 0;
  if (1 < uVar3) {
    iVar2 = (uVar3 ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 102105b90; end: 102105cd3;  */

void FUN_102105b90(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = *(long *)(lVar4 + 0x40) + (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8;
  lVar4 = uVar5 + 10;
  if (param_3 < 0xff) {
    uVar2 = 0;
  }
  else {
    uVar6 = 2;
    uVar1 = uVar6;
    if ((uint)lVar4 < 4) {
      uVar1 = (param_3 + 0xff01 >> 0x10) + 1;
    }
    if (0xffff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 < 0x100) {
      uVar6 = 1;
    }
    uVar2 = 0;
    if (1 < uVar1) {
      uVar2 = uVar6;
    }
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)((long)param_1 + lVar4) = 0;
      }
    }
    else if (uVar2 == 2) {
      *(undefined2 *)((long)param_1 + lVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar4) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar5 + 9) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    func_0x000107c60ee4(param_1,lVar4);
    iVar3 = 1;
    if ((uint)lVar4 < 4) {
      iVar3 = (param_2 >> 0x10) + 1;
      *(short *)param_1 = (short)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)((long)param_1 + lVar4) = (char)iVar3;
      }
    }
    else if (uVar2 == 2) {
      *(short *)((long)param_1 + lVar4) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + lVar4) = iVar3;
    }
  }
  return;
}



/* Entry: 102105cd4; end: 102105d33;  */

uint FUN_102105cd4(int *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = (*(long *)(lVar3 + 0x40) + (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 9;
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    if ((uVar4 & 0xfffffff8) != 0) {
      return *param_1 + 2;
    }
    uVar2 = CONCAT11(bVar1,(char)*param_1) - 0x1fe;
  }
  return uVar2;
}



/* Entry: 102105d34; end: 102105dd3;  */

void FUN_102105d34(int *param_1,uint param_2,long param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar3 = *(long *)(lVar4 + 0x40) + 7 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff));
  if (param_2 < 2) {
    *(char *)((long)param_1 + (uVar3 & 0xffffffffffffff8) + 9) = (char)param_2;
  }
  else {
    lVar4 = (uVar3 & 0xfffffffffffffff8) + 9;
    iVar2 = param_2 - 2;
    cVar1 = '\x02';
    if ((uint)lVar4 < 4) {
      cVar1 = (char)((uint)iVar2 >> 8) + '\x02';
    }
    *(char *)((long)param_1 + lVar4) = cVar1;
    func_0x000107c60ee4(param_1,lVar4);
    if ((uint)lVar4 < 4) {
      *(char *)param_1 = (char)iVar2;
    }
    else {
      *param_1 = iVar2;
    }
  }
  return;
}



/* Entry: 102105dd4; end: 1021060df;  */

void FUN_102105dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6afea0);
  return;
}



/* Entry: 1021060e0; end: 1021061b7;  */

void FUN_1021060e0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1021061b4);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar3,param_4);
  (*param_6)(param_1,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021061b8);
  (*pcVar2)();
}



/* Entry: 1021061b8; end: 1021061cf;  */

undefined8 FUN_1021061b8(void)

{
  return 4;
}



/* Entry: 1021061d0; end: 102106207;  */

uint FUN_1021061d0(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(param_1,*param_2,*(undefined1 *)(param_2 + 1));
  return (uint)param_1 & 1;
}



/* Entry: 102106208; end: 102106227;  */

uint FUN_102106208(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102101d24(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return (uint)param_1 & 1;
}



/* Entry: 102106228; end: 10210625f;  */

undefined1 FUN_102106228(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 102106260; end: 102106277;  */

uint FUN_102106260(uint param_1)

{
  FUN_1021061d0();
  return param_1 & 1;
}



/* Entry: 102106278; end: 10210654f;  */

void FUN_102106278(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x21;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  pcStack_80 = param_1;
  uStack_78 = param_2;
  func_0x0001021051c4(0,param_5);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = (long)puVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = ((long)puVar13 - extraout_x12) - extraout_x12_00;
  lVar11 = param_4;
  func_0x000107c5fc74(param_4,lVar2);
  lStack_88 = param_3;
  lStack_68 = lVar11;
  func_0x000107c5fc74(param_3,lVar2);
  lVar11 = 0;
  lVar12 = 0;
  puStack_a8 = puVar13;
  lStack_a0 = param_5;
  lStack_70 = param_3;
  do {
    lVar4 = lStack_98;
    if (lVar12 < lStack_68) {
      lVar5 = lVar12;
      lVar7 = param_4;
      if (lStack_70 <= lVar11) goto LAB_102106494;
      func_0x000107c5fc98(lStack_98,lVar12,param_4,lVar2);
      lVar5 = lVar2;
      FUN_102101210();
      pcVar9 = *(code **)(lVar8 + 8);
      lStack_90 = lVar5;
      (*pcVar9)(lVar4,lVar2);
      func_0x000107c5fc98(lVar4,lVar11,lStack_88,lVar2);
      lVar5 = lVar2;
      FUN_102101210();
      (*pcVar9)(lVar4,lVar2);
      if (SBORROW8(lStack_90,lVar12)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10210654c);
        (*pcVar9)();
      }
      if (SBORROW8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102106550);
        (*pcVar9)();
      }
      if (lVar5 - lVar11 < lStack_90 - lVar12) {
        func_0x000107c5fc98(lVar10,lVar11,lStack_88,lVar2);
        param_5 = lStack_a0;
        puVar13 = puStack_a8;
      }
      else {
        func_0x000107c5fc98(lVar10,lVar12,param_4,lVar2);
        param_5 = lStack_a0;
        puVar13 = puStack_a8;
      }
    }
    else {
      lVar5 = lVar11;
      lVar7 = lStack_88;
      if (lStack_70 <= lVar11) {
        return;
      }
LAB_102106494:
      func_0x000107c5fc98(lVar10,lVar5,lVar7,lVar2);
    }
    (*pcStack_80)(lVar10);
    if (unaff_x21 != 0) {
      (**(code **)(lVar8 + 8))(lVar10,lVar2);
      return;
    }
    (**(code **)(lVar8 + 0x20))(puVar13,lVar10,lVar2);
    puVar6 = puVar13;
    func_0x000107c614c4(puVar13,lVar2);
    if ((int)puVar6 == 1) {
      bVar1 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10210650c);
        (*pcVar9)();
      }
    }
    else {
      bVar1 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102106548);
        (*pcVar9)();
      }
    }
    uVar3 = 0x112d4f4d0;
    func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
    lVar4 = 0;
    func_0x000107c61514(0,PTR___sSiN_11034deb0,param_5,uVar3,"offset element associatedWith ",0);
    (**(code **)(*(long *)(param_5 + -8) + 8))(puVar13 + *(int *)(lVar4 + 0x30),param_5);
  } while( true );
}



/* Entry: 102106550; end: 102106557;  */

undefined8 FUN_102106550(void)

{
  return 1;
}



/* Entry: 102106558; end: 1021065f7;  */

void FUN_102106558(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021065f8; end: 102106607;  */

void FUN_1021065f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102106608; end: 1021069f3;  */

/* WARNING: Removing unreachable block (ram,0x000102106830) */

void FUN_102106608(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  long extraout_x12;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar6 = PTR___sSlTL_11034dfe8;
  lVar11 = *(long *)(param_5 + 8);
  lVar1 = 0;
  func_0x000107c614b8(0,lVar11,param_4,PTR___sSlTL_11034dfe8,PTR___s11SubSequenceSlTl_11034d5d8);
  lStack_118 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xff;
  lStack_120 = (long)&lStack_130 - extraout_x8;
  func_0x000107c614b8(0xff,lVar11,param_4,puVar6,PTR___s5IndexSlTl_11034d620);
  lVar3 = lVar11;
  func_0x000107c614b4(lVar11,param_4,lVar2,puVar6,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar1 = 0;
  func_0x000107c603d8(0,lVar2);
  lStack_130 = *(long *)(lVar1 + -8);
  lStack_128 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = ((long)&lStack_130 - extraout_x8) - extraout_x8_00;
  lVar13 = *(long *)(lVar2 + -8);
  lStack_110 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar7 - extraout_x12;
  lVar8 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = uVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ff10(lVar10,param_4,param_5);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  func_0x000107c5fe7c(uVar12,param_4,lVar11);
  puStack_b0 = &uStack_80;
  uVar4 = 0;
  lStack_c0 = param_4;
  lStack_b8 = param_5;
  lStack_a8 = lVar10;
  func_0x000107c614b8(0,*(undefined8 *)(lVar11 + 8),param_4,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  FUN_102106278(FUN_102107284,auStack_d0,param_2,param_3,uVar4);
  lVar1 = lStack_110;
  func_0x000107c5fe94(lVar7,param_4,lVar11);
  uVar5 = uVar12;
  func_0x000107c5fa88(uVar12,lVar7,lVar2,lVar3);
  pcVar9 = *(code **)(lVar13 + 8);
  (*pcVar9)(lVar7,lVar2);
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar12;
    func_0x000107c5fab8(uVar12,uVar12,lVar2,*(undefined8 *)(lVar3 + 8));
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1021069f4);
      (*pcVar9)();
    }
    (**(code **)(lVar13 + 0x10))(lVar7,uVar12,lVar2);
    func_0x000107c603dc(lVar1,lVar7,lVar2,lVar3);
    lVar3 = lStack_128;
    puVar6 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
    func_0x000107c61520(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,lStack_128);
    lVar7 = lStack_120;
    func_0x000107c5febc(lStack_120,lVar1,param_4,lVar3,lVar11,puVar6);
    lVar13 = lStack_118;
    func_0x000107c614b4(lVar11,param_4,lStack_118,PTR___sSlTL_11034dfe8,
                        PTR___sSl11SubSequenceSl_SlTn_11034df90);
    func_0x000107c5fed4(lVar7,lVar13,*(undefined8 *)(lVar11 + 8),param_4,param_5);
    (**(code **)(lStack_130 + 8))(lVar1,lVar3);
  }
  (*pcVar9)(uVar12,lVar2);
  (**(code **)(lVar8 + 0x10))(param_1,lVar10,param_4);
  (**(code **)(lVar8 + 0x38))(param_1,0,1,param_4);
  (**(code **)(lVar8 + 8))(lVar10,param_4);
  return;
}



/* Entry: 1021069f4; end: 102106dcf;  */

void FUN_1021069f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar2 = PTR___sSlTL_11034dfe8;
  lVar16 = *(long *)(param_6 + 8);
  lVar8 = 0;
  uStack_80 = param_1;
  lStack_78 = param_6;
  func_0x000107c614b8(0,lVar16,param_5,PTR___sSlTL_11034dfe8,PTR___s11SubSequenceSlTl_11034d5d8);
  lStack_88 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0xff;
  puStack_90 = auStack_e0 + -extraout_x8;
  func_0x000107c614b8(0xff,lVar16,param_5,puVar2,PTR___s5IndexSlTl_11034d620);
  lVar8 = 0;
  func_0x000107c61510(0,lVar9,lVar9,"lower upper ",0);
  lStack_b8 = *(long *)(lVar8 + -8);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar14 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar8 = lVar16;
  lStack_d0 = lVar14;
  func_0x000107c614b4(lVar16,param_5,lVar9,puVar2,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar10 = 0;
  func_0x000107c5ff1c(0,lVar9);
  lStack_a0 = *(long *)(lVar10 + -8);
  lStack_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = lVar14 - extraout_x8_01;
  lVar10 = *(long *)(lVar9 + -8);
  lStack_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar14 - extraout_x12_00;
  pcVar15 = *(code **)(lVar10 + 0x10);
  (*pcVar15)(uVar11,param_3,lVar9);
  func_0x000107c5fe94(lVar14,param_5,lVar16);
  uVar12 = param_3;
  uStack_c8 = param_5;
  func_0x000107c5feb8(param_3,param_4,lVar14,param_5,lVar16);
  pcVar13 = *(code **)(lVar10 + 8);
  (*pcVar13)(lVar14,lVar9);
  if ((uVar12 & 1) == 0) {
    FUN_10210851c();
    func_0x000107c613f8(&UNK_1104cbb38,lVar14,0,0);
    func_0x000107c61654();
    (*pcVar13)(uVar11,lVar9);
  }
  else {
    uVar12 = uVar11;
    pcStack_d8 = pcVar13;
    func_0x000107c5fa90(uVar11,param_3,lVar9,lVar8);
    lVar8 = lStack_d0;
    if ((uVar12 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x102106dd0);
      (*pcVar13)();
    }
    (*pcVar15)(lStack_d0,uVar11,lVar9);
    lVar6 = lStack_a8;
    (*pcVar15)(lVar8 + *(int *)(lStack_a8 + 0x30),param_3,lVar9);
    lVar4 = lStack_b8;
    lVar14 = lStack_c0;
    (**(code **)(lStack_b8 + 0x10))(lStack_c0,lVar8,lVar6);
    lVar5 = lStack_b0;
    iVar1 = *(int *)(lVar6 + 0x30);
    pcVar15 = *(code **)(lVar10 + 0x20);
    (*pcVar15)(lStack_b0,lVar14,lVar9);
    pcVar13 = pcStack_d8;
    (*pcStack_d8)(lVar14 + iVar1,lVar9);
    (**(code **)(lVar4 + 0x20))(lVar14,lVar8,lVar6);
    lVar8 = lStack_98;
    (*pcVar15)(lVar5 + *(int *)(lStack_98 + 0x24),lVar14 + *(int *)(lVar6 + 0x30),lVar9);
    (*pcVar13)(lVar14,lVar9);
    puVar7 = puStack_90;
    uVar3 = uStack_c8;
    func_0x000107c5fecc(puStack_90,lVar5,uStack_c8,lVar16);
    lVar10 = lStack_88;
    func_0x000107c614b4(lVar16,uVar3,lStack_88,PTR___sSlTL_11034dfe8,
                        PTR___sSl11SubSequenceSl_SlTn_11034df90);
    func_0x000107c5fed4(puVar7,lVar10,*(undefined8 *)(lVar16 + 8),uVar3,lStack_78);
    (**(code **)(lStack_a0 + 8))(lVar5,lVar8);
    (*pcVar13)(uVar11,lVar9);
  }
  return;
}



/* Entry: 102106dd0; end: 102107283;  */

void FUN_102106dd0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long *param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x8_01;
  code *pcVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  long *plVar14;
  long alStack_c0 [4];
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  
  lVar9 = *(long *)(param_9 + 8);
  lVar2 = 0;
  plStack_90 = param_6;
  plStack_88 = param_7;
  func_0x000107c614b8(0,*(undefined8 *)(lVar9 + 8),param_8,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  plVar14 = *(long **)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(plVar14[8]);
  lVar10 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_c0[1] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lVar3 = 0;
  lStack_a0 = lVar9;
  func_0x000107c614b8(0,lVar9,param_8,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lStack_98 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_c0[3] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = lVar9 - extraout_x12_00;
  uVar4 = 0;
  alStack_c0[2] = uVar7;
  func_0x0001021051c4(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar12 = (long *)(uVar7 - extraout_x12_01);
  (**(code **)(extraout_x8_01 + 0x10))(plVar12,param_1,uVar4);
  plVar5 = plVar12;
  func_0x000107c614c4(plVar12,uVar4);
  lVar11 = *plVar12;
  uVar4 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  lVar9 = 0;
  func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar2,uVar4,"offset element associatedWith ",0);
  lVar9 = (long)plVar12 + (long)*(int *)(lVar9 + 0x30);
  if ((int)plVar5 == 1) {
    lVar1 = lVar11 - *param_2;
    plStack_88 = plVar14;
    if (SBORROW8(lVar11,*param_2)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102107264);
      (*pcVar8)();
    }
    alStack_c0[1] = lVar9;
    FUN_1021069f4(param_3,param_4,param_5,lVar1,param_8,param_9);
    uVar7 = alStack_c0[2];
    lVar10 = alStack_c0[1];
    plVar14 = plStack_88;
    if (unaff_x21 == 0) {
      pcVar8 = *(code **)(lStack_98 + 0x10);
      (*pcVar8)(alStack_c0[2],param_5,lVar3);
      lVar10 = lStack_a0;
      lVar9 = alStack_c0[3];
      func_0x000107c5fe94(alStack_c0[3],param_8,lStack_a0);
      func_0x000107c614b4(lVar10,param_8,lVar3,PTR___sSlTL_11034dfe8,
                          PTR___sSl5IndexSl_SLTn_11034dfa0);
      uVar6 = uVar7;
      func_0x000107c5fab8(uVar7,lVar9,lVar3,*(undefined8 *)(lVar10 + 8));
      pcVar13 = *(code **)(lStack_98 + 8);
      (*pcVar13)(lVar9,lVar3);
      (*pcVar13)(uVar7,lVar3);
      lVar9 = alStack_c0[3];
      if ((uVar6 & 1) == 0) {
        if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10210727c);
          (*pcVar8)();
        }
        if (SCARRY8(*param_2,lVar1 + 1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102107280);
          (*pcVar8)();
        }
        *param_2 = *param_2 + lVar1 + 1;
        (*pcVar8)(alStack_c0[3],param_5,lVar3);
        lVar10 = alStack_c0[2];
        func_0x000107c5fe88(alStack_c0[2],lVar9,param_8,lStack_a0);
        (*pcVar13)(lVar9,lVar3);
        (**(code **)(lStack_98 + 0x28))(param_5,lVar10,lVar3);
        if (SCARRY8(*plStack_90,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102107284);
          (*pcVar8)();
        }
        *plStack_90 = *plStack_90 + 1;
        pcVar8 = (code *)plStack_88[1];
        lVar10 = alStack_c0[1];
        goto LAB_102107130;
      }
      FUN_10210851c();
      func_0x000107c613f8(&UNK_1104cbb38,uVar7,0,0);
      func_0x000107c61654();
      lVar10 = alStack_c0[1];
      plVar14 = plStack_88;
    }
  }
  else {
    (*(code *)plVar14[4])(lVar10,lVar9,lVar2);
    lVar9 = lVar11 + *plStack_90;
    if (SCARRY8(lVar11,*plStack_90)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102107268);
      (*pcVar8)();
    }
    lVar3 = lVar9 - *plStack_88;
    if (SBORROW8(lVar9,*plStack_88)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10210726c);
      (*pcVar8)();
    }
    lVar9 = lVar3 - *param_2;
    if (SBORROW8(lVar3,*param_2)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102107270);
      (*pcVar8)();
    }
    FUN_1021069f4(param_3,param_4,param_5,lVar9,param_8,param_9);
    lVar3 = alStack_c0[1];
    if (unaff_x21 == 0) {
      (*(code *)plVar14[2])(alStack_c0[1],lVar10,lVar2);
      func_0x000107c5fed8(lVar3,param_8,param_9);
      (*(code *)plVar14[1])(lVar10,lVar2);
      if (SCARRY8(*param_2,lVar9)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102107274);
        (*pcVar8)();
      }
      *param_2 = *param_2 + lVar9;
      if (!SCARRY8(*plStack_88,1)) {
        *plStack_88 = *plStack_88 + 1;
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x102107278);
      (*pcVar8)();
    }
  }
  pcVar8 = (code *)plVar14[1];
LAB_102107130:
  (*pcVar8)(lVar10,lVar2);
  return;
}



/* Entry: 102107284; end: 1021072b3;  */

void FUN_102107284(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102106dd0(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1021072b4; end: 10210736f;  */

undefined1  [16]
FUN_1021072b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  
  lVar3 = *(long *)(param_7 + 8);
  uVar1 = 0xff;
  uStack_90 = param_5;
  uStack_88 = param_6;
  lStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c614b8(0xff,*(undefined8 *)(lVar3 + 8),param_5,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  uVar2 = 0;
  FUN_1021051b8(0,uVar1);
  FUN_102107cec(auStack_50,param_1,FUN_102108288,auStack_a0,param_5,param_6,param_5,uVar2,param_7,
                param_8,lVar3);
  return auStack_50;
}



/* Entry: 102107370; end: 102107417;  */

void FUN_102107370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(param_4 + 8) + 8),param_2,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  FUN_1021072b4(param_1);
  return;
}



/* Entry: 102107418; end: 10210796f;  */

undefined *
FUN_102107418(long param_1,long param_2,long param_3,long param_4,code *param_5,undefined8 param_6,
             undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_170 [8];
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_148;
  ulong uStack_140;
  uint uStack_134;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  lVar3 = 0;
  lStack_128 = param_1;
  lStack_120 = param_3;
  pcStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(param_9 + 8) + 8),param_7,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  puStack_d8 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_e0 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_b0 = param_4;
  lStack_a8 = param_2;
  if (SCARRY8(param_2,param_4)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10210796c);
    (*pcVar13)();
  }
  uVar4 = 2;
  func_0x000107c5fc70(2,PTR___sSiN_11034deb0);
  puVar1 = puStack_d8;
  *(undefined8 *)(uVar4 + 0x10) = 2;
  *(undefined8 *)(uVar4 + 0x20) = 0;
  *(undefined8 *)(uVar4 + 0x28) = 0;
  if (param_2 + param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x102107970);
    (*pcVar13)();
  }
  lVar10 = 0;
  lVar3 = 0;
  puStack_130 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_158 = 0;
  uStack_160 = 2;
  uVar7 = 0;
  uStack_168 = param_2 + param_4;
  do {
    func_0x000107c61438(uVar4,3);
    puVar8 = puStack_130;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_102108414(0,*(long *)(puStack_130 + 0x10) + 1,1);
      puStack_130 = puVar8;
    }
    uVar6 = *(ulong *)(puStack_130 + 0x10);
    if (*(ulong *)(puStack_130 + 0x18) >> 1 <= uVar6) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_130 + 0x18));
      FUN_102108414(puVar8,uVar6 + 1,1,puStack_130);
      puStack_130 = puVar8;
    }
    *(ulong *)(puStack_130 + 0x10) = uVar6 + 1;
    *(ulong *)(puStack_130 + uVar6 * 8 + 0x20) = uVar4;
    if (uVar7 == 0x7fffffffffffffff) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x102107964);
      (*pcVar13)();
    }
    uVar6 = uVar7 + 1;
    uVar5 = uVar6;
    func_0x000107c5fc70(uVar6,PTR___sSiN_11034deb0);
    *(ulong *)(uVar5 + 0x10) = uVar6;
    lVar9 = uVar7 * 8 + 8;
    uStack_148 = uVar6;
    func_0x000107c60ee4(uVar5 + 0x20);
    uVar6 = uVar4;
    func_0x000107c6142c();
    uVar14 = -uVar7;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_a0 = uVar14;
    uStack_98 = uVar7;
    uStack_78 = uVar14;
    FUN_102107970();
    if (((uint)lVar9 & 0xff) != 1) {
      lVar15 = uVar4 + 0x20;
      uStack_140 = -(1 - uVar7);
      uStack_134 = (uint)SBORROW8(0,1 - uVar7);
      lStack_118 = lVar15;
      uStack_110 = uVar14;
      uStack_108 = uVar4;
      uStack_100 = uVar7;
      do {
        if (uVar6 == uVar14) {
          uVar11 = uVar14;
          if (0x7ffffffffffffffe < uVar14) {
            if ((uStack_134 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102107958);
              (*pcVar13)();
            }
            uVar11 = uStack_140;
            if ((long)uStack_140 < 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102107948);
              (*pcVar13)();
            }
          }
          if (*(ulong *)(uVar4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x102107950);
            (*pcVar13)();
          }
          lVar3 = *(long *)(lVar15 + uVar11 * 8);
        }
        else {
          lVar3 = uVar6 - 1;
          if (lVar3 < 1) {
            uVar11 = -lVar3;
            if (SBORROW8(0,lVar3)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102107960);
              (*pcVar13)();
            }
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102107944);
              (*pcVar13)();
            }
          }
          else {
            uVar11 = uVar6 - 2;
          }
          if (*(ulong *)(uVar4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10210794c);
            (*pcVar13)();
          }
          lVar10 = *(long *)(lVar15 + uVar11 * 8);
          if (uVar6 == uVar7) {
            lVar3 = lVar10 + 1;
          }
          else {
            uVar11 = uVar6;
            if ((0x7ffffffffffffffe < uVar6) && (uVar11 = -(uVar6 + 1), SBORROW8(0,uVar6 + 1))) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102107968);
              (*pcVar13)();
            }
            if (*(ulong *)(uVar4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x10210795c);
              (*pcVar13)();
            }
            lVar3 = *(long *)(lVar15 + uVar11 * 8);
            if (lVar3 <= lVar10) {
              lVar3 = lVar10 + 1;
            }
          }
        }
        lVar10 = lVar3 - uVar6;
        if (lVar3 < lStack_a8 && lVar10 < lStack_b0) {
          lVar12 = *(long *)(lStack_b8 + 0x48);
          pcVar13 = *(code **)(lStack_b8 + 0x10);
          lVar15 = lStack_128 + lVar3 * lVar12;
          lVar10 = lStack_120 + lVar12 * lVar10;
          lStack_c0 = -uVar6;
          uStack_f8 = uVar6;
          uStack_f0 = uVar5;
          do {
            uVar4 = uStack_e0;
            lVar9 = lStack_e8;
            (*pcVar13)(uStack_e0,lVar15,lStack_e8);
            (*pcVar13)(puVar1,lVar10,lVar9);
            uVar7 = uVar4;
            (*pcStack_d0)(uVar4,puVar1);
            pcVar16 = *(code **)(lStack_b8 + 8);
            (*pcVar16)(puVar1,lVar9);
            (*pcVar16)(uVar4);
            if (((uVar7 & 1) == 0) || (lVar3 = lVar3 + 1, lStack_a8 <= lVar3)) break;
            lVar15 = lVar15 + lVar12;
            lVar10 = lVar10 + lVar12;
          } while (lVar3 + lStack_c0 < lStack_b0);
          lVar10 = lVar3 - uStack_f8;
          uVar6 = uStack_f8;
          uVar5 = uStack_f0;
          uVar7 = uStack_100;
          uVar4 = uStack_108;
          uVar14 = uStack_110;
          lVar15 = lStack_118;
        }
        if ((long)uVar6 < 1) {
          uVar11 = -uVar6;
          if (SBORROW8(0,uVar6)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x102107954);
            (*pcVar13)();
          }
        }
        else {
          uVar11 = uVar6 - 1;
        }
        uVar6 = uVar5;
        func_0x000107c61558();
        if ((uVar6 & 1) == 0) {
          FUN_102108400();
          uVar6 = uVar5;
        }
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10210793c);
          (*pcVar13)();
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x102107940);
          (*pcVar13)();
        }
        *(long *)(uVar5 + uVar11 * 8 + 0x20) = lVar3;
        if ((lStack_a8 <= lVar3) && (lStack_b0 <= lVar10)) {
          func_0x000107c6142c(uVar5);
          func_0x000107c61430(uVar4,2);
          return puStack_130;
        }
        FUN_102107970();
      } while (((uint)lVar9 & 0xff) != 1);
    }
    func_0x000107c61430(uVar4,2);
    if (((lStack_a8 <= lVar3) && (lStack_b0 <= lVar10)) ||
       (bVar2 = uVar7 == uStack_168, uVar4 = uVar5, uVar7 = uStack_148, bVar2)) {
      func_0x000107c6142c(uVar5);
      return puStack_130;
    }
  } while( true );
}



/* Entry: 102107970; end: 102107a0f;  */

undefined1  [16] FUN_102107970(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5._0_8_ = *(ulong *)(unaff_x20 + 0x28);
  uVar2 = *(ulong *)(unaff_x20 + 8);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 < 1) {
    if ((long)auVar5._0_8_ <= (long)uVar2) goto LAB_1021079c0;
  }
  else if ((long)uVar2 <= (long)auVar5._0_8_) {
LAB_1021079c0:
    if ((auVar5._0_8_ != uVar2) || ((*(byte *)(unaff_x20 + 0x30) & 1) != 0)) {
      return ZEXT816(1) << 0x40;
    }
    if ((*(char *)(unaff_x20 + 0x20) != '\x01') &&
       (*(long *)(unaff_x20 + 0x18) == -0x8000000000000000)) {
      return ZEXT816(1) << 0x40;
    }
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar5._0_8_;
    return auVar6;
  }
  bVar4 = SCARRY8(auVar5._0_8_,lVar3);
  uVar2 = (long)(auVar5._0_8_ + lVar3) >> 0x3f ^ 0x8000000000000000;
  if (!bVar4) {
    uVar2 = auVar5._0_8_ + lVar3;
  }
  *(ulong *)(unaff_x20 + 0x28) = uVar2;
  uVar1 = 0x8000000000000000;
  if (!bVar4) {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(bool *)(unaff_x20 + 0x20) = !bVar4;
  auVar5._8_8_ = 0;
  return auVar5;
}



/* Entry: 102107a10; end: 102107ceb;  */

long FUN_102107a10(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong auStack_90 [5];
  long lStack_68;
  
  lVar6 = 0xff;
  auStack_90[3] = param_1;
  auStack_90[4] = param_3;
  func_0x000107c614b8(0xff,*(undefined8 *)(*(long *)(param_8 + 8) + 8),param_6,PTR___sSTTL_11034db40
                      ,PTR___s7ElementSTTl_11034d628);
  lVar7 = 0;
  func_0x0001021051c4(0,lVar6);
  lVar10 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (ulong *)((long)auStack_90 - extraout_x8);
  func_0x000107c5f9d0();
  uVar15 = *(ulong *)(param_5 + 0x10);
  uVar8 = 0;
  auStack_90[2] = lVar7;
  lStack_68 = lVar10;
  func_0x000107c5fc80(0,lVar7);
  auStack_90[1] = uVar8;
  func_0x000107c5fc64(uVar15);
  if (1 < uVar15) {
    uVar13 = -uVar15;
    auStack_90[0] = param_5 + 0x18;
    uVar9 = uVar15;
    do {
      uVar13 = uVar13 + 1;
      if (uVar15 < uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102107ccc);
        (*pcVar5)();
      }
      lVar10 = *(long *)(auStack_90[0] + uVar9 * 8);
      uVar11 = param_2 - param_4;
      if (uVar13 == uVar11) {
LAB_102107b0c:
        lVar7 = uVar11 + 1;
      }
      else {
        lVar7 = uVar11 - 1;
        if (uVar9 - 1 != uVar11) {
          if (lVar7 < 1) {
            uVar12 = -lVar7;
            if (SBORROW8(0,lVar7)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102107cec);
              (*pcVar5)();
            }
            if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102107cdc);
              (*pcVar5)();
            }
          }
          else {
            uVar12 = uVar11 - 2;
          }
          if (*(ulong *)(lVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102107ce0);
            (*pcVar5)();
          }
          uVar16 = uVar11;
          if ((0x7ffffffffffffffe < uVar11) && (uVar16 = -(uVar11 + 1), SBORROW8(0,uVar11 + 1))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102107ce8);
            (*pcVar5)();
          }
          if (*(ulong *)(lVar10 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102107ce4);
            (*pcVar5)();
          }
          if (*(long *)(lVar10 + 0x20 + uVar12 * 8) < *(long *)(lVar10 + 0x20 + uVar16 * 8))
          goto LAB_102107b0c;
        }
      }
      if (lVar7 < 1) {
        uVar11 = -lVar7;
        if (SBORROW8(0,lVar7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102107cd8);
          (*pcVar5)();
        }
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102107cd0);
          (*pcVar5)();
        }
      }
      else {
        uVar11 = lVar7 - 1;
      }
      if (*(ulong *)(lVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102107cd4);
        (*pcVar5)();
      }
      uVar17 = *(ulong *)(lVar10 + uVar11 * 8 + 0x20);
      uVar16 = uVar17 - lVar7;
      uVar11 = ~uVar17 + lVar7 + param_4;
      uVar12 = param_2 + ~uVar17;
      if (uVar12 <= uVar11) {
        uVar11 = uVar12;
      }
      if ((long)uVar17 < (long)param_2 && (long)uVar16 < (long)param_4) {
        param_4 = param_4 + ~uVar11;
      }
      uVar8 = 0x112d4f4d0;
      func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
      lVar10 = 0;
      func_0x000107c61514(0,PTR___sSiN_11034deb0,lVar6,uVar8,"offset element associatedWith ",0);
      iVar3 = *(int *)(lVar10 + 0x30);
      puVar2 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar10 + 0x40));
      puVar4 = auStack_90 + 3;
      uVar11 = uVar17;
      if (param_4 != uVar16) {
        puVar4 = auStack_90 + 4;
        uVar11 = uVar16;
      }
      uVar12 = *puVar4;
      *puVar14 = uVar11;
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)puVar14 + (long)iVar3,
                 uVar12 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar11,lVar6);
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      func_0x000107c6159c(puVar14,auStack_90[2],param_4 == uVar16);
      func_0x000107c5fc78(puVar14,auStack_90[1]);
      bVar1 = 2 < uVar9;
      uVar9 = uVar9 - 1;
      param_4 = uVar16;
      param_2 = uVar17;
    } while (bVar1);
  }
  return lStack_68;
}



/* Entry: 102107cec; end: 102107f97;  */

/* WARNING: Removing unreachable block (ram,0x000102107f40) */

void FUN_102107cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  code *pcVar8;
  long unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_58 [8];
  
  lStack_128 = *(long *)(param_7 + -8);
  lVar6 = param_8;
  uStack_120 = param_9;
  uStack_118 = param_5;
  uStack_108 = param_6;
  uStack_d0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_128 + 0x40));
  lVar11 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e0 = lVar11;
  func_0x000107c60188(0,lVar6);
  lStack_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = lVar11 - extraout_x8_00;
  lVar7 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = param_11;
  uVar9 = *(undefined8 *)(param_11 + 8);
  uStack_100 = param_3;
  uStack_f8 = param_4;
  lStack_d8 = param_8;
  func_0x000107c5fbe8(lVar11,param_3,param_4,param_8,param_7,uVar9);
  lVar1 = lStack_d8;
  lVar5 = lStack_e0;
  lVar2 = lStack_e8;
  lVar6 = lStack_f0;
  if (unaff_x21 == 0) {
    lVar3 = lVar11;
    uStack_130 = uVar9;
    (**(code **)(lVar7 + 0x30))(lVar11,1,lStack_d8);
    if ((int)lVar3 == 1) {
      (**(code **)(lVar6 + 8))(lVar11,lVar2);
      (**(code **)(lStack_128 + 0x10))(lVar5,param_2,param_7);
      uVar9 = uStack_130;
      uVar4 = 0;
      func_0x000107c614b8(0,uStack_130,param_7,PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
      func_0x000107c6039c(lVar5,uVar4,param_7,uVar9);
      uStack_b0 = uStack_118;
      uStack_a8 = uStack_108;
      lStack_98 = lVar1;
      uStack_90 = uStack_120;
      uStack_88 = param_10;
      lStack_80 = lStack_110;
      uStack_78 = uStack_100;
      uStack_70 = uStack_f8;
      uVar9 = 0x112d393f0;
      lStack_a0 = param_7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      FUN_102107f98(uStack_d0,FUN_1021082b8,auStack_c0,lVar5,uVar4,lVar1,uVar9,
                    PTR___ss5ErrorWS_11034ee10,auStack_58);
      func_0x000107c61574(lVar5);
    }
    else {
      pcVar8 = *(code **)(lVar7 + 0x20);
      (*pcVar8)(lVar10,lVar11,lVar1);
      (*pcVar8)(uStack_d0,lVar10,lVar1);
    }
  }
  return;
}



/* Entry: 102107f98; end: 102108013;  */

void FUN_102107f98(void)

{
  long in_x5;
  undefined8 in_x7;
  long extraout_x12;
  long unaff_x21;
  long lVar1;
  
  lVar1 = *(long *)(in_x5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1021082e8();
  if (unaff_x21 != 0) {
    (**(code **)(lVar1 + 0x20))
              (in_x7,&stack0xffffffffffffffd0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0),in_x5);
  }
  return;
}



/* Entry: 102108014; end: 1021080df;  */

void FUN_102108014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lStack_78 = param_10;
  uVar1 = 0xff;
  uStack_90 = param_7;
  uStack_88 = param_8;
  lStack_80 = param_9;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  func_0x000107c614b8(0xff,*(undefined8 *)(*(long *)(param_9 + 8) + 8),param_7,PTR___sSTTL_11034db40
                      ,PTR___s7ElementSTTl_11034d628);
  uVar2 = 0;
  FUN_1021051b8(0,uVar1);
  FUN_102107cec(param_1,param_4,FUN_1021083d0,auStack_a0,param_7,param_8,param_8,uVar2,param_9,
                param_10,*(undefined8 *)(param_10 + 8));
  return;
}



/* Entry: 1021080e0; end: 10210821b;  */

void FUN_1021080e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  
  uVar2 = param_4;
  uVar3 = param_11;
  FUN_102107418(param_4,param_5,param_2,param_3);
  FUN_102107a10(param_4,param_5,param_2,param_3,uVar2,param_8,param_9,param_10,param_11,uVar3);
  func_0x000107c6142c(uVar2);
  uVar2 = 0;
  uStack_58 = param_4;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(param_10 + 8) + 8),param_8,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  uVar3 = 0xff;
  func_0x0001021051c4(0xff,uVar2);
  uVar4 = 0;
  func_0x000107c5fc80(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar4);
  puVar6 = &uStack_58;
  FUN_102105160(puVar6,uVar2,uVar4,puVar5);
  func_0x000107c6142c(param_4);
  if (puVar6 != (undefined8 *)0x0) {
    *param_1 = puVar6;
    param_1[1] = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210821c);
  (*pcVar1)();
}



/* Entry: 10210821c; end: 102108287;  */

uint FUN_10210821c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 8) + 8),
                      *(undefined8 *)(unaff_x20 + 0x10),PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  func_0x000107c5fab8(param_1,param_2,uVar2,uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 102108288; end: 1021082b7;  */

void FUN_102108288(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102108014(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1021082b8; end: 1021082e7;  */

void FUN_1021082b8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x48))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Entry: 1021082e8; end: 1021083cf;  */

void FUN_1021082e8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_7 + -8);
  uVar1 = param_4;
  uVar2 = param_5;
  uStack_68 = param_9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c60568(uVar1,uVar2);
  func_0x000107c6056c(param_4,param_5);
  func_0x000107c5fabc(uVar1,param_4,param_5);
  (*param_2)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))
              (uStack_68,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Entry: 1021083d0; end: 1021083ff;  */

void FUN_1021083d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1021080e0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102108400; end: 102108413;  */

/* WARNING: Removing unreachable block (ram,0x000101755b70) */
/* WARNING: Removing unreachable block (ram,0x000101755b80) */
/* WARNING: Removing unreachable block (ram,0x000101755c50) */
/* WARNING: Removing unreachable block (ram,0x000101755b8c) */
/* WARNING: Removing unreachable block (ram,0x000101755b94) */
/* WARNING: Removing unreachable block (ram,0x000101755c0c) */
/* WARNING: Removing unreachable block (ram,0x000101755c14) */
/* WARNING: Removing unreachable block (ram,0x000101755c18) */
/* WARNING: Removing unreachable block (ram,0x000101755c1c) */
/* WARNING: Removing unreachable block (ram,0x000101755c24) */

undefined * FUN_102108400(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d36020;
    func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  func_0x000107c610b4(puVar3 + 0x20,param_1 + 0x20,lVar5 << 3);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 102108414; end: 10210851b;  */

undefined * FUN_102108414(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10210851c);
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
    puVar3 = (undefined *)0x112e58fa8;
    func_0x0001000285a8(0x112e58fa8,&UNK_10da5d7e8);
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
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1104cbb58);
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



/* Entry: 10210851c; end: 10210855b;  */

void FUN_10210851c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5d870;
  func_0x000107c61520(&UNK_10da5d870,&UNK_1104cbb38);
  puRam0000000112e58fb0 = puVar1;
  return;
}



/* Entry: 10210855c; end: 10210865b;  */

uint FUN_10210855c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10210865c; end: 10210869b;  */

void FUN_10210865c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5d848;
  func_0x000107c61520(&UNK_10da5d848,&UNK_1104cbb38);
  puRam0000000112e58fb8 = puVar1;
  return;
}



/* Entry: 10210869c; end: 102108717;  */

uint FUN_10210869c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434(uVar3);
  func_0x0001000f66f0(uVar2,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  return ((uint)uVar2 ^ 0xffffffff) & 1;
}



/* Entry: 102108718; end: 102108c7b;  */

undefined8 FUN_102108718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x0001000285a8(0x112e59078,&UNK_10da5d968);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10210eb48();
    puStack_80 = puVar6;
    func_0x000100087c34(&puStack_80);
    func_0x000107c6142c(puVar6);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c4b940(uVar7);
    func_0x000107c61428(unaff_x20 + 0x10,&puStack_80,0x21,0);
    func_0x000107c61434(param_1);
    func_0x00010105ba6c();
    func_0x000107c614a8(&puStack_80);
    func_0x000107c5d278(uVar7);
    func_0x0001000a8868(unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x40));
    FUN_102109d0c(param_2,*(undefined8 *)(param_1 + 0x10));
    lVar3 = param_1;
    func_0x000107c5fe08(param_1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar6 = &UNK_1104cbca0;
    func_0x000107c613fc(&UNK_1104cbca0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar4 = &UNK_1104cbcc8;
    func_0x000107c613fc(&UNK_1104cbcc8,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(long *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = uVar1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    pcStack_60 = FUN_1021092f0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_102108d0c;
    puStack_68 = &UNK_1104cbce0;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61434(param_1);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar6);
    func_0x000107c431a0(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
  }
  return uVar1;
}



/* Entry: 102108c7c; end: 102108d0b;  */

bool FUN_102108c7c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c4399c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102108d0c; end: 102108d9f;  */

void FUN_102108d0c(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_102109318(0);
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102108da0; end: 102108dfb;  */

void FUN_102108da0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102108dfc; end: 10210900f;  */

undefined * FUN_102108dfc(undefined *param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *unaff_x21;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_c8;
  undefined *puStack_70;
  undefined *apuStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar12 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    func_0x000107c6157c(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x000107c6157c(param_1);
    if ((iVar4 == 0) || (uVar9 = uVar14, func_0x000107c61594(uVar14,8), (uVar9 & 1) == 0)) {
      func_0x000107c6158c(uVar14,0xffffffffffffffff);
      func_0x000107c6157c(param_1);
      func_0x000102110b6c(apuStack_68,uVar14,uVar12,param_1,param_3,0,&puStack_70);
      puVar5 = apuStack_68[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_70;
      }
      uVar12 = 0xffffffffffffffff;
      puVar7 = (undefined *)0xffffffffffffffff;
      func_0x000107c61590(uVar14);
      puVar1 = puVar5;
      goto joined_r0x000102108fc4;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined *)((long)apuStack_68 + (-8 - (uVar14 + 0xf & 0x3ffffffffffffff0)));
  func_0x000107c60ee4(puVar5,uVar14);
  puVar7 = param_1;
  (*param_2)();
  puVar1 = unaff_x21;
joined_r0x000102108fc4:
  if (unaff_x21 == (undefined *)0x0) {
    func_0x000107c61574();
  }
  else {
    iVar4 = 2;
    uVar12 = 0x12;
    puVar7 = (undefined *)0x0;
    func_0x000100029b9c();
    if (iVar4 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      func_0x000107c61658(&puStack_70);
    }
    func_0x000107c61574();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  func_0x000107c60e78();
  lStack_c8 = 0;
  uVar9 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar7 + 0x40);
  lVar11 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102109180);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar10) {
          FUN_10210fe48(param_1,uVar12,lStack_c8,puVar7);
          return param_1;
        }
        uVar14 = *(ulong *)((long)(puVar7 + 0x40) + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar10 = lVar11;
    }
    uVar8 = LZCOUNT(uVar8);
    uVar13 = uVar8 | lVar10 << 6;
    uVar15 = *(undefined8 *)(*(long *)(puVar7 + 0x30) + uVar13 * 0x10 + 8);
    lVar11 = *(long *)(*(long *)(puVar7 + 0x38) + uVar13 * 8);
    func_0x000107c61434(uVar15);
    func_0x000107c61174();
    lVar6 = lVar11;
    func_0x000107c3d004();
    func_0x000107c61180();
    func_0x000107c6142c(uVar15);
    func_0x000107c61170(lVar11);
    lVar11 = lVar10;
    if (lVar6 != 0) {
      func_0x000107c61170(lVar6);
      uVar13 = (uVar8 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar13) = *(ulong *)(param_1 + uVar13) | 1L << (uVar8 & 0x3f);
      bVar3 = SCARRY8(lStack_c8,1);
      lStack_c8 = lStack_c8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102109144);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 102109010; end: 10210917f;  */

void FUN_102109010(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lStack_58;
  
  lStack_58 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar6 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102109180);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar6) {
          FUN_10210fe48(param_1,param_2,lStack_58,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x40))[lVar6];
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar6 = lVar7;
    }
    uVar4 = LZCOUNT(uVar4);
    uVar8 = uVar4 | lVar6 << 6;
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10 + 8);
    lVar7 = *(long *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    func_0x000107c61434(uVar10);
    func_0x000107c61174();
    lVar3 = lVar7;
    func_0x000107c3d004();
    func_0x000107c61180();
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(lVar7);
    lVar7 = lVar6;
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      uVar8 = (uVar4 & 0xffffffffffffffc0 | lVar6 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar4 & 0x3f);
      bVar2 = SCARRY8(lStack_58,1);
      lStack_58 = lStack_58 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102109144);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 102109180; end: 1021092ef;  */

void FUN_102109180(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lStack_58;
  
  lStack_58 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar6 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1021092f0);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar6) {
          FUN_10210fe48(param_1,param_2,lStack_58,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x40))[lVar6];
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar6 = lVar7;
    }
    uVar4 = LZCOUNT(uVar4);
    uVar8 = uVar4 | lVar6 << 6;
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 0x10 + 8);
    lVar7 = *(long *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    func_0x000107c61434(uVar10);
    func_0x000107c61174();
    lVar3 = lVar7;
    func_0x000107c4399c();
    func_0x000107c61180();
    func_0x000107c6142c(uVar10);
    func_0x000107c61170(lVar7);
    lVar7 = lVar6;
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      uVar8 = (uVar4 & 0xffffffffffffffc0 | lVar6 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar4 & 0x3f);
      bVar2 = SCARRY8(lStack_58,1);
      lStack_58 = lStack_58 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021092b4);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 1021092f0; end: 102109317;  */

void FUN_1021092f0(undefined *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar7 = *(undefined **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x20));
    func_0x000107c61428(lVar2 + 0x10,apuStack_90,0x21,0);
    func_0x0001012eef50(uVar8);
    func_0x000107c614a8(apuStack_90);
    func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x20));
    if ((param_1 == (undefined *)0x0) || (param_2 != 0)) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10210eb48();
      apuStack_90[0] = puVar4;
      func_0x000100087c34(apuStack_90);
      func_0x000107c6142c(puVar4);
      FUN_10210935c(lVar2 + 0x28,apuStack_90);
      func_0x0001000a8868(apuStack_90,uStack_78);
      func_0x000102109eac(puVar7,param_2 != 0,0);
      func_0x0001000834e4(apuStack_90);
      FUN_10210935c(lVar2 + 0x28,apuStack_90);
      ppuVar3 = apuStack_90;
      func_0x0001000a8868(ppuVar3,uStack_78);
      if (param_2 != 0) {
        func_0x000105bdfc9c(*(undefined8 *)(*ppuVar3 + 0x10),0);
      }
      func_0x000107c61574(lVar2);
      func_0x0001000834e4(apuStack_90);
    }
    else {
      apuStack_90[0] = param_1;
      func_0x000107c61434(param_1);
      func_0x000100087c34(apuStack_90);
      puVar4 = param_1;
      func_0x000107c61434();
      FUN_102108dfc();
      func_0x000107c6142c(param_1);
      plVar5 = (long *)(lVar2 + 0x28);
      func_0x0001000a8868(plVar5,*(undefined8 *)(lVar2 + 0x40));
      uVar8 = *(undefined8 *)(puVar4 + 0x10);
      func_0x000107c61574(puVar4);
      lVar11 = *plVar5;
      if ((long)puVar7 < 3) {
        if (puVar7 == (undefined *)0x0) {
          uVar9 = 0xef68736572666572;
          uVar6 = 0x5f6f745f6c6c7570;
        }
        else if (puVar7 == (undefined *)0x1) {
          uVar9 = 0xef6574616470755f;
          uVar6 = 0x6369646f69726570;
        }
        else {
          if (puVar7 != (undefined *)0x2) {
LAB_102108c58:
            apuStack_90[0] = puVar7;
            func_0x000107c60614(&UNK_1104cc1f0,apuStack_90,&UNK_1104cc1f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102108c7c);
            (*pcVar1)();
          }
          uVar9 = 0xe90000000000006e;
          uVar6 = 0x65706f5f74616863;
        }
      }
      else if (puVar7 == (undefined *)0x3) {
        uVar9 = 0x800000010f062750;
        uVar6 = 0xd00000000000001c;
      }
      else if (puVar7 == (undefined *)0x4) {
        uVar9 = 0x800000010f062720;
        uVar6 = 0xd000000000000021;
      }
      else {
        if (puVar7 != (undefined *)0x5) goto LAB_102108c58;
        uVar6 = 0xd000000000000010;
        uVar9 = 0x800000010f062700;
      }
      uVar10 = *(undefined8 *)(lVar11 + 0x10);
      func_0x000107c5fadc(uVar6,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000105bdfa3c(uVar10,uVar6,1,1);
      func_0x000107c61170(uVar6);
      func_0x000105bdfc24(*(undefined8 *)(lVar11 + 0x10),uVar8);
      puVar7 = param_1;
      FUN_102108dfc(param_1,FUN_102109010,0x102108cc4);
      func_0x000107c6142c(param_1);
      plVar5 = (long *)(lVar2 + 0x28);
      func_0x0001000a8868(plVar5,*(undefined8 *)(lVar2 + 0x40));
      uVar8 = *(undefined8 *)(puVar7 + 0x10);
      func_0x000107c61574(puVar7);
      func_0x000105bdfc9c(*(undefined8 *)(*plVar5 + 0x10),uVar8);
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 102109318; end: 10210935b;  */

void FUN_102109318(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5ecc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cd678;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5ecc8 = puVar1;
  return;
}



/* Entry: 10210935c; end: 10210939f;  */

long FUN_10210935c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1021093a0; end: 102109423; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker numChatsWithMapIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021093a0(long param_1)

{
  undefined8 uVar1;
  
  func_0x0001000a8868(param_1 + _DAT_112e59098,*(undefined8 *)(param_1 + _DAT_112e59098 + 0x18));
  uVar1 = 0;
  func_0x00010210f668(0);
  func_0x000107c61174(param_1);
  (*(code *)(undefined *)0x10210f7a8)(uVar1,&PTR_DAT_1104cc138);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102109424; end: 10210942f; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker numChatsImpressionsWithMapIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102109424(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = _DAT_112e59080;
  func_0x000107c61428(param_1 + _DAT_112e59080,auStack_58,0,0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + lVar1) + 0x10);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 102109430; end: 10210943b; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker numChatsImpressionsWithActionmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102109430(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = _DAT_112e59088;
  func_0x000107c61428(param_1 + _DAT_112e59088,auStack_58,0,0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + lVar1) + 0x10);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10210943c; end: 1021095e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10210943c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61174();
  func_0x00010006c804();
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_58,0,0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + lVar1) + 0x10);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1021095e4; end: 102109823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021095e4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  lVar3 = _DAT_112e59080;
  func_0x000107c61428(unaff_x20 + _DAT_112e59080,auStack_78,1,0);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar6);
  lVar4 = _DAT_112e59088;
  puVar11 = auStack_90;
  func_0x000107c61428(unaff_x20 + _DAT_112e59088,puVar11,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = puVar2;
  func_0x000107c6142c(uVar6);
  func_0x000100070bfc();
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < param_1) {
      puVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar12 != (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021097ec);
          (*pcVar5)();
        }
        puVar8 = *(undefined1 **)(param_1 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
        puVar7 = puVar11;
      }
      else {
        puVar8 = puVar13;
        puVar7 = param_1;
        func_0x00010210c758(puVar13,param_1);
      }
      puVar1 = puVar13 + 1;
      if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1021097e8);
        (*pcVar5)();
      }
      puVar9 = puVar8;
      func_0x000107c3f734();
      func_0x000107c61180();
      puVar11 = puVar7;
      if (puVar9 != (undefined1 *)0x0) {
        puVar10 = puVar9;
        func_0x000107c5faec();
        puVar11 = puVar7;
        func_0x000107c61170(puVar9);
        func_0x00010006c804();
        puVar9 = puVar8;
        func_0x000107c4496c();
        if (((ulong)puVar9 & 1) != 0) {
          func_0x000107c61428(unaff_x20 + lVar3,auStack_b8,0x21,0);
          func_0x000107c61434(puVar7);
          puVar11 = puVar10;
          func_0x000100403b00(auStack_a0,puVar10,puVar7);
          func_0x000107c614a8(auStack_b8);
          func_0x000107c6142c(puStack_98);
        }
        puVar9 = puVar8;
        func_0x000107c446cc();
        if ((int)puVar9 != 0) {
          func_0x000107c61428(unaff_x20 + lVar4,auStack_b8,0x21,0);
          func_0x000100403b00(auStack_a0,puVar10,puVar7);
          func_0x000107c614a8(auStack_b8);
          puVar7 = puStack_98;
          puVar11 = puVar10;
        }
        func_0x000107c6142c(puVar7);
        func_0x000100070bfc();
      }
      func_0x000107c61170(puVar8);
      puVar13 = puVar13 + 1;
    } while (puVar1 != puVar12);
  }
  return;
}



/* Entry: 102109824; end: 1021098ef; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Possible PIC construction at 0x0001021098bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021098c0) */

void FUN_102109824(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c61174(param_1);
  FUN_1021099c8(param_3,uVar1,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1021098f0; end: 10210994f; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker init] */

void FUN_1021098f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapContextInFriendsFeedServicesImplementation.MapContextInFriendsFeedImpressionTracker"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10210991c);
  (*pcVar1)();
}



/* Entry: 102109950; end: 1021099a7; -[_TtC45MapContextInFriendsFeedServicesImplementation40MapContextInFriendsFeedImpressionTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010210998c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102109990) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102109950(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e59080));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e59088));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e59090));
  return;
}



/* Entry: 1021099a8; end: 1021099c7;  */

void FUN_1021099a8(void)

{
  func_0x000107c61168(&PTR_PTR_11281e520);
  return;
}



/* Entry: 1021099c8; end: 102109cc7;  */

void FUN_1021099c8(undefined **param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_2 == 0) {
    return;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb8178;
  lVar7 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar2 && param_2 == lVar7) {
    func_0x000107c6142c(lVar7);
  }
  else {
    ppuVar3 = param_1;
    lVar8 = param_2;
    func_0x000107c605b8(param_1,param_2,ppuVar2,lVar7,0);
    func_0x000107c6142c(lVar7);
    lVar7 = lVar8;
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eb81f8;
      func_0x000107c5faec();
      if (param_1 == ppuVar2 && param_2 == lVar8) {
        func_0x000107c6142c(lVar8);
      }
      else {
        func_0x000107c605b8(param_1,param_2,ppuVar2,lVar8,0);
        func_0x000107c6142c(lVar8);
        lVar8 = param_2;
        if (((ulong)param_1 & 1) == 0) {
          return;
        }
      }
      if (param_3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102109cc8);
        (*pcVar1)();
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110eb82b8;
      func_0x000107c5faec();
      ppuStack_98 = ppuVar2;
      lStack_90 = lVar8;
      func_0x000107c61434(lVar8);
      puVar9 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      if (*(long *)(param_3 + 0x10) == 0) {
        uStack_58 = 0;
        uStack_60 = 0;
        lStack_48 = 0;
        uStack_50 = 0;
      }
      else {
        func_0x000107c61434(param_3);
        puVar4 = auStack_88;
        func_0x000100df95d0(puVar4);
        if (((ulong)puVar9 & 1) == 0) {
          func_0x000107c6142c(param_3);
          uStack_58 = 0;
          uStack_60 = 0;
          lStack_48 = 0;
          uStack_50 = 0;
        }
        else {
          func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar4 * 0x20,&uStack_60);
          func_0x000107c6142c(lVar8);
          lVar8 = param_3;
        }
      }
      func_0x000107c6142c(lVar8);
      func_0x0001007bbff0(auStack_88);
      if (lStack_48 != 0) {
        uVar5 = 0x112e590c8;
        func_0x0001000285a8(0x112e590c8,&UNK_10da5e650);
        pppuVar6 = &ppuStack_98;
        func_0x000107c6147c(pppuVar6,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
        ppuVar2 = ppuStack_98;
        if (((ulong)pppuVar6 & 1) == 0) {
          return;
        }
        FUN_1021095e4(ppuStack_98);
        func_0x000107c6142c(ppuVar2);
        return;
      }
      goto LAB_102109ca0;
    }
  }
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102109cc4);
    (*pcVar1)();
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb82d8;
  func_0x000107c5faec();
  ppuStack_98 = ppuVar2;
  lStack_90 = lVar7;
  func_0x000107c61434(lVar7);
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_88,&ppuStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar4 = auStack_88;
    func_0x000100df95d0(puVar4);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar4 * 0x20,&uStack_60);
      func_0x000107c6142c(lVar7);
      lVar7 = param_3;
    }
  }
  func_0x000107c6142c(lVar7);
  func_0x0001007bbff0(auStack_88);
  if (lStack_48 != 0) {
    uVar5 = 0;
    FUN_102109cc8(0);
    pppuVar6 = &ppuStack_98;
    func_0x000107c6147c(pppuVar6,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar5,6);
    ppuVar2 = ppuStack_98;
    if (((ulong)pppuVar6 & 1) == 0) {
      return;
    }
    func_0x0001021094c0(ppuStack_98);
    func_0x000107c61170(ppuVar2);
    return;
  }
LAB_102109ca0:
  func_0x00010006e7f4(&uStack_60);
  return;
}


