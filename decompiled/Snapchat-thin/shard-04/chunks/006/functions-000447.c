/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10377bf98; end: 10377c11f;  */

void FUN_10377bf98(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  uVar2 = 0xff;
  func_0x000107c614b8(0xff,uVar6,uVar8,&UNK_10e77bcec,&UNK_10e77bd0c);
  uVar3 = uVar6;
  func_0x000107c614b4(uVar6,uVar8,uVar2,&UNK_10e77bcec,&UNK_10e77bd04);
  puVar1 = PTR___ss12IdentifiableTL_11034e500;
  uVar4 = 0;
  func_0x000107c614b8(0,uVar3,uVar2,PTR___ss12IdentifiableTL_11034e500,
                      PTR___s2IDs12IdentifiablePTl_11034d610);
  uVar5 = 0xff;
  func_0x000107c614b8(0xff,uVar6,uVar8,&UNK_10e77bcec,&UNK_10e77bd14);
  func_0x000107c614b4(uVar6,uVar8,uVar5,&UNK_10e77bcec,&UNK_10e77bcf4);
  uVar7 = 0;
  func_0x000107c5fa34(0,uVar5,&UNK_110692568,uVar6);
  uVar8 = 0x112f908b0;
  func_0x0001000285a8(0x112f908b0,&UNK_10dc091c8);
  func_0x000107c614b4(uVar3,uVar2,uVar4,puVar1,PTR___ss12IdentifiableP2IDAB_SHTn_11034e4f0);
  pcVar9 = FUN_10377c77c;
  func_0x000107c5fa2c(FUN_10377c77c,unaff_x22 + 0x10,uVar10,uVar4,uVar7,uVar8,uVar3);
  func_0x000107c6142c(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010377c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pcVar9);
  return;
}



/* Entry: 10377c120; end: 10377c1f3;  */

void FUN_10377c120(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = *param_2;
  uVar1 = 0;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000107c614b8(0,param_4,param_3,&UNK_10e77bcec,&UNK_10e77bd14);
  func_0x000107c614b4(param_4,param_3,uVar1,&UNK_10e77bcec,&UNK_10e77bcf4);
  uVar2 = param_4;
  FUN_10376e338();
  uVar3 = 0x10377c794;
  FUN_10376d190(0x10377c794,auStack_70,uVar4,uVar1,&UNK_110692568,&UNK_11068fd50,param_4,uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10377c1f4; end: 10377c293;  */

void FUN_10377c1f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c614b8(0,param_4,param_3,&UNK_10e77bcec,&UNK_10e77bd14);
  func_0x000107c614b4(param_4,param_3,uVar1,&UNK_10e77bcec,&UNK_10e77bcfc);
  FUN_10376e060(param_2,uVar1,param_4);
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10377c294; end: 10377c2ab;  */

undefined8 FUN_10377c294(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_88 [72];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) == 0) {
    return 1;
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c6068c(auStack_88,*(undefined8 *)(lVar5 + 0x28));
    puVar3 = auStack_88;
    func_0x000107c5fb58(puVar3,param_1,param_2);
    func_0x000107c606a8();
    uVar6 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar7 * 0x10);
        uVar4 = *puVar1;
        uVar2 = puVar1[1];
        if ((uVar4 == param_1 && uVar2 == param_2) ||
           (func_0x000107c605b8(uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
          return 1;
        }
        uVar7 = uVar7 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar5 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
    }
    return 0;
  }
  return 0;
}



/* Entry: 10377c2ac; end: 10377c453;  */

void FUN_10377c2ac(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lVar5 = *param_2;
  lVar4 = *(long *)(param_3 + 0x10);
  uVar1 = 0;
  func_0x000107c614b8(0,param_7,param_6,&UNK_10e77bcec,&UNK_10e77bd14);
  uVar2 = param_7;
  func_0x000107c614b4(param_7,param_6,uVar1,&UNK_10e77bcec,&UNK_10e77bcf4);
  func_0x000107c5fa08(lVar5,uVar1,&UNK_110692568,uVar2);
  lStack_68 = lVar5;
  if ((lVar4 != 0) && (lStack_68 = *(long *)(param_3 + 0x10), lVar5 <= *(long *)(param_3 + 0x10))) {
    lStack_68 = lVar5;
  }
  func_0x000107c5f9f4();
  uVar2 = 0xff;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x000107c614b8(0xff,param_7,param_6,&UNK_10e77bcec,&UNK_10e77bd14);
  func_0x000107c614b4(param_7,param_6,uVar2,&UNK_10e77bcec,&UNK_10e77bcf4);
  uVar1 = 0;
  func_0x000107c5fa34(0,uVar2,&UNK_110692568,param_7);
  uVar2 = 0x112f906c8;
  func_0x0001000285a8(0x112f906c8,&UNK_10dc08df8);
  puVar3 = PTR___sSDyxq_GSTsMc_11034d798;
  func_0x000107c61520(PTR___sSDyxq_GSTsMc_11034d798,uVar1);
  func_0x000107c5fc04(param_1,&lStack_68,FUN_10377c640,auStack_a0,uVar1,uVar2,puVar3);
  return;
}



/* Entry: 10377c454; end: 10377c473;  */

void FUN_10377c454(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10377c2ac(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10377c474; end: 10377c63f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10377c474(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long extraout_x8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puStack_80;
  ulong auStack_78 [3];
  
  lVar5 = 0xff;
  puStack_80 = param_1;
  auStack_78[0] = param_4;
  func_0x000107c614b8(0xff,param_6,param_5,&UNK_10e77bcec,&UNK_10e77bd14);
  lVar6 = 0;
  func_0x000107c61510(0,lVar5,&UNK_110692568,"key value ",0);
  lVar9 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_80 - extraout_x8;
  func_0x000107c614b4(param_6,param_5,lVar5,&UNK_10e77bcec,&UNK_10e77bcfc);
  func_0x000107c5fc24(auStack_78 + 1,lVar5,param_6);
  uVar4 = auStack_78[1];
  (*param_3)(auStack_78[1],auStack_78[2]);
  if ((auStack_78[1] & 1) == 0) {
    func_0x000107c6142c(auStack_78[2]);
  }
  else {
    (**(code **)(lVar9 + 0x10))(lVar11,param_2,lVar6);
    puVar3 = puStack_80;
    puVar1 = (ulong *)(lVar11 + *(int *)(lVar6 + 0x30));
    uVar10 = *puVar1;
    cVar2 = (char)puVar1[2];
    if (cVar2 == '\0') {
      uVar8 = 0;
      uVar12 = puVar1[1];
    }
    else {
      if (cVar2 != '\x01') {
        uVar10 = uVar10 & 1;
      }
      uVar12 = 0;
      uVar8 = 2;
      if (cVar2 != '\x01') {
        uVar8 = 1;
      }
    }
    uVar7 = *puStack_80;
    func_0x000107c61558(uVar7);
    auStack_78[1] = *puVar3;
    func_0x000101ede9ac(uVar10,uVar12,uVar8,uVar4,auStack_78[2],uVar7);
    func_0x000107c6142c(auStack_78[2]);
    *puVar3 = auStack_78[1];
    (**(code **)(*(long *)(lVar5 + -8) + 8))(lVar11,lVar5);
  }
  return;
}



/* Entry: 10377c640; end: 10377c65b;  */

void FUN_10377c640(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10377c474(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10377c65c; end: 10377c77b;  */

ulong FUN_10377c65c(ulong param_1,ulong param_2,undefined1 param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_4;
  uVar3 = param_2;
  FUN_10378df40();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10377c73c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_5 = param_5 & 1;
    func_0x00010378fe84(lVar4);
    uVar2 = param_4;
    FUN_10378df40();
    if (((uint)uVar3 & 1) != (param_5 & 1)) {
      func_0x000107c60624(&UNK_110690130);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10377c6f8);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    func_0x00010378ee28();
    lVar4 = *unaff_x20;
    goto joined_r0x00010377c750;
  }
  lVar4 = *unaff_x20;
joined_r0x00010377c750:
  if ((uVar3 & 1) == 0) {
    lVar5 = lVar4 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(char *)(*(long *)(lVar4 + 0x30) + uVar2) = (char)param_4;
    puVar6 = (ulong *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x18);
    *puVar6 = param_1;
    puVar6[1] = param_2;
    *(undefined1 *)(puVar6 + 2) = param_3;
    if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10379653c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return uVar2;
  }
  puVar6 = (ulong *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x18);
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  *puVar6 = param_1;
  puVar6[1] = param_2;
  uVar7 = puVar6[2];
  *(undefined1 *)(puVar6 + 2) = param_3;
  if ((char)uVar7 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return uVar3;
  }
  return uVar2;
}



/* Entry: 10377c77c; end: 10377c7ab;  */

void FUN_10377c77c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10377c120(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10377c7ac; end: 10377cbf7;  */

/* WARNING: Possible PIC construction at 0x00010377c9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377cb40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377c9f4) */

void FUN_10377c7ac(ulong *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_58;
  
  uVar13 = *param_1;
  uVar5 = param_1[1];
  uVar14 = param_1[2];
  bVar7 = (byte)param_1[5];
  if (bVar7 < 3) {
    if (bVar7 == 0) {
      if (param_3 == 0) {
        param_2 = 0;
      }
      else {
        func_0x000107c5fadc(param_2,param_3);
      }
      uVar1 = (uint)uVar13 & 0xff;
      uVar12 = 0x800000010f164110;
      uVar11 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar12 = 0xe700000000000000;
        uVar11 = 0x6e776f6e6b6e75;
      }
      uVar3 = 0xec000000646e6573;
      uVar8 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        uVar3 = uVar12;
        uVar8 = uVar11;
      }
      uVar12 = 0xec0000006f745f64;
      uVar11 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar12 = 0xeb00000000657261;
        uVar11 = 0x68735f6b63697571;
      }
      bVar10 = (uVar13 & 0xff) != 0;
      uVar2 = 0x6f745f646e6573;
      if (bVar10) {
        uVar2 = uVar11;
      }
      uVar11 = 0xe700000000000000;
      if (bVar10) {
        uVar11 = uVar12;
      }
      if (uVar1 < 3) {
        uVar3 = uVar11;
        uVar8 = uVar2;
      }
      func_0x000107c5fadc(uVar8,uVar3);
      func_0x000107c6142c(uVar3);
      func_0x000107c5fadc(uVar5,uVar14);
      func_0x000106c85264();
      uVar13 = param_2;
    }
    else {
      if (bVar7 == 1) {
        return;
      }
      FUN_103770f40(uVar13);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      func_0x000106c868c0();
    }
  }
  else if (bVar7 == 3) {
    if (param_3 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c5fadc(param_2,param_3);
    }
    uVar12 = 0xe900000000000067;
    if (uVar13 == 0) {
      uVar13 = 0x6e697265746c6966;
    }
    else if (uVar13 == 2) {
      uVar13 = 0x6e696b6e61726572;
    }
    else {
      if (uVar13 != 1) {
LAB_10377cbd4:
        uStack_58 = uVar13;
        func_0x000107c60614(&UNK_1106c9200,&uStack_58,&UNK_1106c9200,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10377cbf8);
        (*pcVar9)();
      }
      uVar12 = 0xe700000000000000;
      uVar13 = 0x676e69726f6373;
    }
    func_0x000107c5fadc(uVar13,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000106c85ea4();
    func_0x000107c61170(param_2);
  }
  else if (bVar7 == 4) {
    if (param_3 == 0) {
      param_2 = 0;
    }
    else {
      func_0x000107c5fadc(param_2,param_3);
    }
    uVar12 = 0xe900000000000067;
    func_0x000107c5fadc(uVar5,uVar14);
    if (uVar13 == 0) {
      uVar11 = 0x6e697265746c6966;
    }
    else if (uVar13 == 2) {
      uVar11 = 0x6e696b6e61726572;
    }
    else {
      if (uVar13 != 1) goto LAB_10377cbd4;
      uVar12 = 0xe700000000000000;
      uVar11 = 0x676e69726f6373;
    }
    func_0x000107c5fadc(uVar11,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000106c86328();
    uVar13 = param_2;
  }
  else {
    uVar4 = param_1[3];
    uVar6 = param_1[4];
    if (((uVar14 == 0 && uVar5 == 0) && (uVar13 == 0 && uVar6 == 0)) && uVar4 == 0) {
      if (param_3 == 0) {
        uVar13 = 0;
      }
      else {
        func_0x000107c5fadc(param_2,param_3);
        uVar13 = param_2;
      }
      func_0x000106c8588c();
    }
    else {
      if ((uVar13 != 1) || (((uVar14 != 0 || uVar5 != 0) || uVar6 != 0) || uVar4 != 0)) {
        if (uVar13 != 2) {
          return;
        }
        if (((uVar14 != 0 || uVar5 != 0) || uVar6 != 0) || uVar4 != 0) {
          return;
        }
        if (unaff_x20 != 0) {
          (**(code **)(**(long **)(unaff_x20 + 8) + 0x18))
                    (*(long **)(unaff_x20 + 8),&UNK_11096d2d0,&stack0xffffffffffffffc0,1);
          func_0x00010007e5dc(&stack0xffffffffffffffd8);
        }
        return;
      }
      if (param_3 == 0) {
        uVar13 = 0;
      }
      else {
        func_0x000107c5fadc(param_2,param_3);
        uVar13 = param_2;
      }
      func_0x000106c85b98();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 10377cbf8; end: 10377cc23;  */

void FUN_10377cbf8(undefined8 param_1)

{
  FUN_10377c7ac(param_1,0,0,1);
  return;
}



/* Entry: 10377cc24; end: 10377cc9b;  */

void FUN_10377cc24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c614cc(param_2,auStack_38,auStack_50);
  uVar1 = uStack_40;
  FUN_10377dcb8(uStack_48,uStack_40);
  FUN_10377c7ac(param_1,uStack_48,uVar1,0);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10377cc9c; end: 10377cd3b;  */

void FUN_10377cc9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [48];
  
  uVar4 = param_2[4];
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = *unaff_x20;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar5 = param_2[2];
  uVar6 = uVar5;
  FUN_10377d2e0(param_2,auStack_70);
  func_0x000100b6a110();
  param_1[3] = &UNK_1106909d8;
  param_1[4] = &PTR_DAT_1106909f8;
  puVar2 = &UNK_110690958;
  func_0x000107c613fc(&UNK_110690958,0x50,7);
  *param_1 = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  puVar2[0x38] = uVar1;
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  *(undefined8 *)(puVar2 + 0x48) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 10377cd3c; end: 10377d2df;  */

/* WARNING: Possible PIC construction at 0x00010377cea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377d080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377d01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377d1c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377d178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377d1cc) */
/* WARNING: Removing unreachable block (ram,0x00010377d020) */
/* WARNING: Removing unreachable block (ram,0x00010377d084) */
/* WARNING: Removing unreachable block (ram,0x00010377cea8) */
/* WARNING: Removing unreachable block (ram,0x00010377d17c) */
/* WARNING: Removing unreachable block (ram,0x00010377d1d4) */
/* WARNING: Removing unreachable block (ram,0x00010377d1d8) */
/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_10377cd3c(double param_1,ulong *param_2,undefined8 param_3,char *param_4,ulong *param_5,
                  ulong *param_6,ulong *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  char *pcVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  bool bVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong *unaff_x19;
  ulong *puVar24;
  long *plVar25;
  ulong *unaff_x20;
  ulong uVar26;
  ulong *puVar27;
  ulong *unaff_x21;
  ulong *puVar28;
  long lVar29;
  ulong *puVar30;
  ulong *unaff_x22;
  char *unaff_x23;
  ulong *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar31;
  double dVar32;
  double unaff_d8;
  undefined8 unaff_d9;
  char acStack_549 [1089];
  ulong auStack_108 [3];
  ulong *puStack_f0;
  ulong auStack_e8 [3];
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long alStack_b8 [5];
  ulong *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  
  puVar9 = &uStack_70;
  puVar10 = &uStack_70;
  puVar11 = &uStack_70;
  puVar16 = &stack0xfffffffffffffff0;
  func_0x000100b6a110();
  param_1 = param_1 - (double)unaff_x20[7];
  puVar30 = (ulong *)*unaff_x20;
  puVar28 = (ulong *)unaff_x20[1];
  uVar5 = unaff_x20[2];
  puVar14 = (ulong *)unaff_x20[3];
  puVar18 = (ulong *)unaff_x20[4];
  bVar6 = (byte)unaff_x20[5];
  uVar23 = (uint)param_2;
  dVar32 = param_1;
  if (bVar6 < 3) {
    if (bVar6 == 0) {
      func_0x000107c5fadc();
      uVar1 = (uint)puVar30 & 0xff;
      uVar22 = 0x800000010f164110;
      uVar2 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar22 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      uVar4 = 0xec000000646e6573;
      uVar13 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        uVar4 = uVar22;
        uVar13 = uVar2;
      }
      uVar22 = 0xec0000006f745f64;
      uVar2 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar22 = 0xeb00000000657261;
        uVar2 = 0x68735f6b63697571;
      }
      bVar12 = ((ulong)puVar30 & 0xff) != 0;
      uVar3 = 0x6f745f646e6573;
      if (bVar12) {
        uVar3 = uVar2;
      }
      uVar2 = 0xe700000000000000;
      if (bVar12) {
        uVar2 = uVar22;
      }
      if (uVar1 < 3) {
        uVar4 = uVar2;
        uVar13 = uVar3;
      }
      uVar26 = unaff_x20[6];
      func_0x000107c5fadc(uVar13,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c5fadc(puVar28,uVar5);
      func_0x000106c8554c(param_1,uVar26,puVar14,uVar13,puVar28,uVar23 & 1);
      goto code_r0x00010bdbf3e4;
    }
    if (bVar6 == 1) {
      uVar23 = (uint)puVar30 & 0xff;
      uVar22 = 0x800000010f164110;
      puVar18 = (ulong *)0xd000000000000010;
      if (uVar23 != 4) {
        uVar22 = 0xe700000000000000;
        puVar18 = (ulong *)0x6e776f6e6b6e75;
      }
      uVar2 = 0xec000000646e6573;
      puVar14 = (ulong *)0x5f7061745f656e6f;
      if (uVar23 != 3) {
        uVar2 = uVar22;
        puVar14 = puVar18;
      }
      uVar22 = 0xec0000006f745f64;
      puVar18 = (ulong *)0x6e65735f696e696d;
      if (uVar23 != 1) {
        uVar22 = 0xeb00000000657261;
        puVar18 = (ulong *)0x68735f6b63697571;
      }
      bVar12 = ((ulong)puVar30 & 0xff) != 0;
      puVar30 = (ulong *)0x6f745f646e6573;
      if (bVar12) {
        puVar30 = puVar18;
      }
      uVar4 = 0xe700000000000000;
      if (bVar12) {
        uVar4 = uVar22;
      }
      if (uVar23 < 3) {
        uVar2 = uVar4;
        puVar14 = puVar30;
      }
      uVar26 = unaff_x20[6];
      func_0x000107c5fadc(puVar14,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c5fadc(puVar28,uVar5);
      func_0x000106c86cc4(param_1,uVar26,puVar14,puVar28);
      goto code_r0x00010bdbf3e4;
    }
    puVar24 = (ulong *)unaff_x20[6];
    FUN_103770f40();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar18);
    puVar31 = (undefined *)0x10377d084;
    puVar14 = puVar30;
    puVar21 = puVar24;
  }
  else {
    if (bVar6 == 3) {
      puVar28 = (ulong *)0xe900000000000067;
      if (puVar30 == (ulong *)0x0) {
        puVar14 = (ulong *)0x6e697265746c6966;
      }
      else if (puVar30 == (ulong *)0x2) {
        puVar14 = (ulong *)0x6e696b6e61726572;
      }
      else {
        if (puVar30 != (ulong *)0x1) {
LAB_10377d2bc:
          puStack_68 = puVar30;
          func_0x000107c60614(&UNK_1106c9200,&puStack_68,&UNK_1106c9200,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10377d2e0);
          (*pcVar7)();
        }
        puVar28 = (ulong *)0xe700000000000000;
        puVar14 = (ulong *)0x676e69726f6373;
      }
      puVar27 = (ulong *)unaff_x20[6];
      func_0x000107c5fadc(puVar14,puVar28);
      func_0x000107c6142c(puVar28);
      puVar18 = (ulong *)(ulong)(uVar23 & 1);
      puVar31 = (undefined *)0x10377d17c;
      puVar21 = puVar27;
      puVar24 = puVar14;
      unaff_d8 = param_1;
code_r0x000106c8611c:
      *(undefined8 *)((long)puVar9 + -0x40) = unaff_d9;
      *(double *)((long)puVar9 + -0x38) = unaff_d8;
      *(ulong **)((long)puVar9 + -0x30) = puVar24;
      *(ulong **)((long)puVar9 + -0x28) = puVar28;
      *(ulong **)((long)puVar9 + -0x20) = puVar21;
      *(ulong **)((long)puVar9 + -0x18) = param_2;
      *(undefined1 **)((long)puVar9 + -0x10) = puVar16;
      *(undefined **)((long)puVar9 + -8) = puVar31;
      *(undefined8 *)((long)puVar9 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar28 = puVar14;
      param_2 = puVar18;
      puVar21 = puVar14;
      dVar32 = param_1;
      _objc_retain();
      if (puVar27 != (ulong *)0x0) {
        _objc_retain(puVar14);
        plVar25 = (long *)puVar27[1];
        pcVar8 = "true";
        if ((int)puVar18 == 0) {
          pcVar8 = "false";
        }
        puVar24 = (ulong *)((long)puVar9 + -0x78);
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x78),pcVar8);
        _objc_retain(puVar14);
        if (puVar14 == (ulong *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(puVar14);
          pcVar8 = (char *)puVar14;
          func_0x00010bdc3520(puVar14);
        }
        _objc_release(puVar14);
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x60),pcVar8);
        *(undefined8 *)((long)puVar9 + -0x98) = 0;
        *(undefined8 *)((long)puVar9 + -0x90) = 0;
        *(undefined8 *)((long)puVar9 + -0x88) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar9 + -0x98),
                            (undefined1 *)((long)puVar9 + -0x78),
                            (undefined1 *)((long)puVar9 + -0x48),2);
        dVar32 = param_1 * 1000.0;
        param_5 = (ulong *)(long)dVar32;
        param_2 = (ulong *)&UNK_11096d140;
        puVar21 = (ulong *)((long)puVar9 + -0x98);
        (**(code **)(*plVar25 + 0x18))(plVar25);
        *(undefined1 **)((long)puVar9 + -0x80) = (undefined1 *)((long)puVar9 + -0x98);
        func_0x00010007e5dc((undefined1 *)((long)puVar9 + -0x80));
        lVar29 = 0;
        puVar18 = (ulong *)((long)puVar9 + -0x78);
        do {
          if (*(char *)((long)puVar18 + lVar29 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)puVar18 + lVar29 + 0x18));
          }
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != -0x30);
        puVar28 = puVar14;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar9 + -0x48))
      goto code_r0x00010bdbf3e4;
      ___stack_chk_fail();
      _objc_release(puVar14);
      if (*(char *)((long)puVar9 + -0x61) < '\0') {
        __ZdlPv(*(undefined8 *)((long)puVar9 + -0x78));
      }
      _objc_release(puVar14);
      _objc_release(puVar14);
      puVar27 = puVar28;
      __Unwind_Resume();
      puVar10 = (ulong *)((long)puVar9 + -0x180);
      *(undefined1 **)((long)puVar9 + -0xf0) = unaff_x26;
      *(undefined1 **)((long)puVar9 + -0xe8) = unaff_x25;
      *(ulong **)((long)puVar9 + -0xe0) = unaff_x24;
      *(ulong **)((long)puVar9 + -0xd8) = puVar30;
      *(ulong **)((long)puVar9 + -0xd0) = puVar24;
      *(ulong **)((long)puVar9 + -200) = puVar18;
      *(ulong **)((long)puVar9 + -0xc0) = puVar28;
      *(ulong **)((long)puVar9 + -0xb8) = puVar14;
      *(undefined1 **)((long)puVar9 + -0xb0) = (undefined1 *)((long)puVar9 + -0x10);
      *(undefined **)((long)puVar9 + -0xa8) = &SUB_106c86328;
      puVar16 = (undefined1 *)((long)puVar9 + -0xb0);
      *(undefined8 *)((long)puVar9 + -0xf8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar14 = param_2;
      puVar18 = puVar21;
      puVar24 = param_5;
      _objc_retain(param_2);
      _objc_retain(puVar21);
      _objc_retain(param_6);
      if (puVar27 != (ulong *)0x0) {
        plVar25 = (long *)puVar27[1];
        _objc_retain(param_2);
        if (param_2 == (ulong *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)param_2;
          _objc_retainAutorelease(param_2);
          func_0x00010bdc3520();
        }
        _objc_release(param_2);
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x158),pcVar8);
        _objc_retain(puVar21);
        if (puVar21 == (ulong *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(puVar21);
          pcVar8 = (char *)puVar21;
          func_0x00010bdc3520(puVar21);
        }
        _objc_release(puVar21);
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x140),pcVar8);
        pcVar8 = "true";
        if ((int)param_5 == 0) {
          pcVar8 = "false";
        }
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x128),pcVar8);
        _objc_retain(param_6);
        if (param_6 == (ulong *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(param_6);
          pcVar8 = (char *)param_6;
          func_0x00010bdc3520(param_6);
        }
        _objc_release(param_6);
        func_0x00010002b838((undefined1 *)((long)puVar9 + -0x110),pcVar8);
        *(undefined8 *)((long)puVar9 + -0x178) = 0;
        *(undefined8 *)((long)puVar9 + -0x170) = 0;
        *(undefined8 *)((long)puVar9 + -0x168) = 0;
        func_0x00010007e1e8((undefined1 *)((long)puVar9 + -0x178),
                            (undefined1 *)((long)puVar9 + -0x158),
                            (undefined1 *)((long)puVar9 + -0xf8),4);
        puVar14 = (ulong *)&UNK_11096d190;
        unaff_x24 = (ulong *)((long)puVar9 + -0x178);
        puVar18 = (ulong *)((long)puVar9 + -0x178);
        (**(code **)(*plVar25 + 0x18))(plVar25);
        *(ulong **)((long)puVar9 + -0x160) = unaff_x24;
        func_0x00010007e5dc((undefined1 *)((long)puVar9 + -0x160));
        lVar29 = 0;
        puVar24 = param_7;
        do {
          if (*(char *)((long)puVar9 + lVar29 + -0xf9) < '\0') {
            __ZdlPv(*(undefined8 *)((long)puVar9 + lVar29 + -0x110));
          }
          lVar29 = lVar29 + -0x18;
        } while (lVar29 != -0x60);
      }
      _objc_release(param_6);
      _objc_release(puVar21);
      puVar28 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar9 + -0xf8)) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(param_6);
      puVar30 = (ulong *)((long)puVar9 + -0x158);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != puVar30);
      _objc_release(param_6);
      _objc_release(puVar21);
      _objc_release(param_2);
      puVar31 = &SUB_106c86610;
      puVar27 = puVar28;
      __Unwind_Resume();
    }
    else {
      if (bVar6 != 4) {
        if (((uVar5 == 0 && puVar28 == (ulong *)0x0) &&
            (puVar30 == (ulong *)0x0 && puVar14 == (ulong *)0x0)) && puVar18 == (ulong *)0x0) {
          unaff_x19 = (ulong *)(ulong)(uVar23 & 1);
          puVar30 = &uStack_70;
          lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar16 = (undefined1 *)0x0;
          unaff_x22 = (ulong *)param_4;
          puVar14 = param_5;
          if (unaff_x20[6] != 0) {
            plVar25 = *(long **)(unaff_x20[6] + 8);
            pcVar8 = "true";
            if (((ulong)param_2 & 1) == 0) {
              pcVar8 = "false";
            }
            func_0x00010002b838(&stack0xffffffffffffffb0,pcVar8);
            uStack_70 = 0;
            puStack_68 = (ulong *)0x0;
            func_0x00010007e1e8(&uStack_70,&stack0xffffffffffffffb0,&stack0xffffffffffffffc8,1);
            dVar32 = param_1 * 1000.0;
            puVar14 = (ulong *)(long)dVar32;
            unaff_x19 = (ulong *)&UNK_11096d000;
            (**(code **)(*plVar25 + 0x18))(plVar25);
            puVar16 = &stack0xffffffffffffffa8;
            func_0x00010007e5dc();
            unaff_x22 = puVar30;
            unaff_x20 = &uStack_70;
            unaff_d8 = param_1;
            if ((long)unaff_x24 < 0) {
              puVar16 = unaff_x26;
              __ZdlPv();
              unaff_x22 = puVar30;
              unaff_x20 = &uStack_70;
            }
          }
          param_1 = dVar32;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010007e5dc(&stack0xffffffffffffffa8);
          if ((long)unaff_x24 < 0) {
            __ZdlPv(unaff_x26);
          }
          puVar15 = puVar16;
          __Unwind_Resume();
          pcVar8 = acStack_549 + 0x439;
          puStack_78 = &SUB_106c85b98;
          unaff_x29 = &puStack_80;
          alStack_b8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
          param_2 = unaff_x19;
          param_4 = (char *)unaff_x22;
          param_5 = puVar14;
          puStack_90 = unaff_x20;
          puStack_88 = puVar16;
          puStack_80 = &stack0xfffffffffffffff0;
          _objc_retain(unaff_x19);
          unaff_x21 = (ulong *)0x0;
          if (puVar15 != (undefined1 *)0x0) {
            plVar25 = *(long **)(puVar15 + 8);
            _objc_retain(unaff_x19);
            if (unaff_x19 == (ulong *)0x0) {
              unaff_x23 = "";
            }
            else {
              unaff_x23 = (char *)unaff_x19;
              _objc_retainAutorelease();
              func_0x00010bdc3520();
            }
            _objc_release(unaff_x19);
            unaff_x24 = auStack_e8;
            func_0x00010002b838(auStack_e8,unaff_x23);
            pcVar17 = "true";
            if ((int)unaff_x22 == 0) {
              pcVar17 = "false";
            }
            func_0x00010002b838(auStack_d0,pcVar17);
            auStack_108[0] = 0;
            auStack_108[1] = 0;
            auStack_108[2] = 0;
            func_0x00010007e1e8(auStack_108,auStack_e8,alStack_b8,2);
            param_2 = (ulong *)&UNK_11096d050;
            unaff_x22 = auStack_108;
            param_4 = (char *)auStack_108;
            (**(code **)(*plVar25 + 0x18))(plVar25);
            puStack_f0 = unaff_x22;
            func_0x00010007e5dc(&puStack_f0);
            lVar29 = 0;
            unaff_x21 = auStack_e8;
            param_5 = puVar14;
            do {
              if ((&cStack_b9)[lVar29] < '\0') {
                __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar29));
              }
              lVar29 = lVar29 + -0x18;
            } while (lVar29 != -0x30);
          }
          unaff_x20 = unaff_x19;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_b8[0]) {
            return;
          }
          ___stack_chk_fail();
          _objc_release(unaff_x19);
          _objc_release(unaff_x19);
          unaff_x30 = &LAB_106c85d80;
          puVar14 = unaff_x20;
          __Unwind_Resume();
        }
        else {
          if ((puVar30 != (ulong *)0x1) ||
             (((uVar5 != 0 || puVar28 != (ulong *)0x0) || puVar14 != (ulong *)0x0) ||
              puVar18 != (ulong *)0x0)) {
            if ((puVar30 == (ulong *)0x2) &&
               (((uVar5 == 0 && puVar28 == (ulong *)0x0) && puVar14 == (ulong *)0x0) &&
                puVar18 == (ulong *)0x0)) {
              if (unaff_x20[6] != 0) {
                plVar25 = *(long **)(unaff_x20[6] + 8);
                (**(code **)(*plVar25 + 0x18))
                          (plVar25,&UNK_11096d320,&stack0xffffffffffffffc0,(long)(param_1 * 1000.0))
                ;
                func_0x00010007e5dc(&stack0xffffffffffffffd8);
              }
              return;
            }
            if ((puVar30 == (ulong *)0x3) &&
               (((uVar5 == 0 && puVar28 == (ulong *)0x0) && puVar14 == (ulong *)0x0) &&
                puVar18 == (ulong *)0x0)) {
              if (unaff_x20[6] != 0) {
                plVar25 = *(long **)(unaff_x20[6] + 8);
                (**(code **)(*plVar25 + 0x18))
                          (plVar25,&UNK_11096d3c0,&stack0xffffffffffffffc0,(long)(param_1 * 1000.0))
                ;
                func_0x00010007e5dc(&stack0xffffffffffffffd8);
              }
              return;
            }
            if ((puVar30 == (ulong *)0x4) &&
               (((uVar5 == 0 && puVar28 == (ulong *)0x0) && puVar14 == (ulong *)0x0) &&
                puVar18 == (ulong *)0x0)) {
              if (unaff_x20[6] != 0) {
                plVar25 = *(long **)(unaff_x20[6] + 8);
                (**(code **)(*plVar25 + 0x18))
                          (plVar25,&UNK_11096d410,&stack0xffffffffffffffc0,(long)(param_1 * 1000.0))
                ;
                func_0x00010007e5dc(&stack0xffffffffffffffd8);
              }
              return;
            }
            if (unaff_x20[6] != 0) {
              plVar25 = *(long **)(unaff_x20[6] + 8);
              (**(code **)(*plVar25 + 0x18))
                        (plVar25,&UNK_11096d460,&stack0xffffffffffffffc0,(long)(param_1 * 1000.0));
              func_0x00010007e5dc(&stack0xffffffffffffffd8);
            }
            return;
          }
          puVar14 = (ulong *)unaff_x20[6];
          param_2 = (ulong *)(ulong)(uVar23 & 1);
          pcVar8 = (char *)register0x00000008;
        }
        puVar30 = (ulong *)(pcVar8 + -0x70);
        *(undefined8 *)(pcVar8 + -0x30) = unaff_d9;
        *(double *)(pcVar8 + -0x28) = unaff_d8;
        *(ulong **)(pcVar8 + -0x20) = unaff_x20;
        *(ulong **)(pcVar8 + -0x18) = unaff_x19;
        *(undefined1 ***)(pcVar8 + -0x10) = unaff_x29;
        *(undefined **)(pcVar8 + -8) = unaff_x30;
        *(undefined8 *)(pcVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        puVar16 = (undefined1 *)0x0;
        puVar21 = param_5;
        puVar28 = param_6;
        dVar32 = param_1;
        if (puVar14 != (ulong *)0x0) {
          plVar25 = (long *)puVar14[1];
          pcVar17 = "true";
          if ((int)param_2 == 0) {
            pcVar17 = "false";
          }
          func_0x00010002b838(pcVar8 + -0x50,pcVar17);
          *(undefined8 *)(pcVar8 + -0x70) = 0;
          *(undefined8 *)(pcVar8 + -0x68) = 0;
          *(undefined8 *)(pcVar8 + -0x60) = 0;
          func_0x00010007e1e8(pcVar8 + -0x70,pcVar8 + -0x50,pcVar8 + -0x38,1);
          dVar32 = param_1 * 1000.0;
          puVar21 = (ulong *)(long)dVar32;
          param_2 = (ulong *)&UNK_11096d0a0;
          (**(code **)(*plVar25 + 0x18))(plVar25);
          *(char **)(pcVar8 + -0x58) = pcVar8 + -0x70;
          puVar16 = pcVar8 + -0x58;
          func_0x00010007e5dc();
          param_4 = (char *)puVar30;
          puVar28 = param_6;
          unaff_x20 = (ulong *)(pcVar8 + -0x70);
          unaff_d8 = param_1;
          if (pcVar8[-0x39] < '\0') {
            puVar16 = *(undefined1 **)(pcVar8 + -0x50);
            __ZdlPv();
            param_4 = (char *)puVar30;
            puVar28 = param_6;
            unaff_x20 = (ulong *)(pcVar8 + -0x70);
          }
        }
        param_1 = dVar32;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pcVar8 + -0x38)) {
          return;
        }
        ___stack_chk_fail();
        *(ulong **)(pcVar8 + -0x58) = unaff_x20;
        func_0x00010007e5dc(pcVar8 + -0x58);
        if (pcVar8[-0x39] < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar8 + -0x50));
        }
        puVar15 = puVar16;
        __Unwind_Resume();
        puVar9 = (ulong *)(pcVar8 + -0x130);
        puVar24 = (ulong *)(pcVar8 + -0x130);
        *(undefined1 **)(pcVar8 + -0xc0) = unaff_x26;
        *(undefined1 **)(pcVar8 + -0xb8) = unaff_x25;
        *(ulong **)(pcVar8 + -0xb0) = unaff_x24;
        *(char **)(pcVar8 + -0xa8) = unaff_x23;
        *(ulong **)(pcVar8 + -0xa0) = unaff_x22;
        *(ulong **)(pcVar8 + -0x98) = unaff_x21;
        *(ulong **)(pcVar8 + -0x90) = unaff_x20;
        *(undefined1 **)(pcVar8 + -0x88) = puVar16;
        *(char **)(pcVar8 + -0x80) = pcVar8 + -0x10;
        *(undefined **)(pcVar8 + -0x78) = &SUB_106c85ea4;
        puVar16 = pcVar8 + -0x80;
        *(undefined8 *)(pcVar8 + -200) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        puVar18 = param_2;
        puVar14 = (ulong *)param_4;
        param_5 = puVar21;
        param_6 = puVar28;
        _objc_retain(param_2);
        _objc_retain(puVar21);
        puVar30 = (ulong *)unaff_x23;
        if (puVar15 != (undefined1 *)0x0) {
          plVar25 = *(long **)(puVar15 + 8);
          _objc_retain(param_2);
          if (param_2 == (ulong *)0x0) {
            pcVar17 = "";
          }
          else {
            pcVar17 = (char *)param_2;
            _objc_retainAutorelease(param_2);
            func_0x00010bdc3520();
          }
          _objc_release(param_2);
          unaff_x25 = pcVar8 + -0x110;
          func_0x00010002b838(pcVar8 + -0x110,pcVar17);
          pcVar17 = "true";
          if ((int)param_4 == 0) {
            pcVar17 = "false";
          }
          func_0x00010002b838(pcVar8 + -0xf8,pcVar17);
          _objc_retain(puVar21);
          if (puVar21 == (ulong *)0x0) {
            param_4 = "";
          }
          else {
            _objc_retainAutorelease(puVar21);
            param_4 = (char *)puVar21;
            func_0x00010bdc3520();
          }
          _objc_release(puVar21);
          func_0x00010002b838(pcVar8 + -0xe0,param_4);
          *(undefined8 *)(pcVar8 + -0x130) = 0;
          *(undefined8 *)(pcVar8 + -0x128) = 0;
          *(undefined8 *)(pcVar8 + -0x120) = 0;
          func_0x00010007e1e8(pcVar8 + -0x130,pcVar8 + -0x110,pcVar8 + -200,3);
          puVar18 = (ulong *)&UNK_11096d0f0;
          (**(code **)(*plVar25 + 0x18))(plVar25);
          *(char **)(pcVar8 + -0x118) = pcVar8 + -0x130;
          func_0x00010007e5dc(pcVar8 + -0x118);
          lVar29 = 0;
          puVar14 = puVar24;
          param_5 = puVar28;
          do {
            if (pcVar8[lVar29 + -0xc9] < '\0') {
              __ZdlPv(*(undefined8 *)(pcVar8 + lVar29 + -0xe0));
            }
            lVar29 = lVar29 + -0x18;
            puVar30 = (ulong *)(pcVar8 + -0x130);
          } while (lVar29 != -0x48);
        }
        _objc_release(puVar21);
        puVar28 = param_2;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(pcVar8 + -200)) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(puVar21);
        do {
          puVar30 = puVar30 + -3;
        } while (puVar30 != (ulong *)(pcVar8 + -0x110));
        _objc_release(puVar21);
        _objc_release(param_2);
        puVar31 = &SUB_106c8611c;
        puVar27 = puVar28;
        __Unwind_Resume();
        puVar24 = (ulong *)(pcVar8 + -0x110);
        unaff_x24 = (ulong *)param_4;
        goto code_r0x000106c8611c;
      }
      unaff_x24 = (ulong *)0xe900000000000067;
      func_0x000107c5fadc(puVar28,uVar5);
      if (puVar30 == (ulong *)0x0) {
        puVar24 = (ulong *)0x6e697265746c6966;
      }
      else if (puVar30 == (ulong *)0x2) {
        puVar24 = (ulong *)0x6e696b6e61726572;
      }
      else {
        if (puVar30 != (ulong *)0x1) goto LAB_10377d2bc;
        unaff_x24 = (ulong *)0xe700000000000000;
        puVar24 = (ulong *)0x676e69726f6373;
      }
      puVar27 = (ulong *)unaff_x20[6];
      func_0x000107c5fadc(puVar24,unaff_x24);
      func_0x000107c6142c(unaff_x24);
      puVar18 = (ulong *)(ulong)(uVar23 & 1);
      puVar31 = (undefined *)0x10377d1cc;
      puVar14 = puVar28;
      puVar21 = puVar27;
      param_6 = puVar28;
      puVar28 = puVar24;
    }
    puVar20 = (ulong *)((long)puVar10 + -0xc0);
    *(undefined8 *)((long)puVar10 + -0x50) = unaff_d9;
    *(double *)((long)puVar10 + -0x48) = param_1;
    *(ulong **)((long)puVar10 + -0x40) = unaff_x24;
    *(ulong **)((long)puVar10 + -0x38) = puVar30;
    *(ulong **)((long)puVar10 + -0x30) = puVar28;
    *(ulong **)((long)puVar10 + -0x28) = param_6;
    *(ulong **)((long)puVar10 + -0x20) = puVar21;
    *(ulong **)((long)puVar10 + -0x18) = param_2;
    *(undefined1 **)((long)puVar10 + -0x10) = puVar16;
    *(undefined **)((long)puVar10 + -8) = puVar31;
    *(undefined8 *)((long)puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar21 = puVar14;
    puVar19 = puVar18;
    param_1 = dVar32;
    _objc_retain(puVar14);
    _objc_retain(puVar24);
    if (puVar27 != (ulong *)0x0) {
      _objc_retain(puVar14);
      _objc_retain(puVar24);
      plVar25 = (long *)puVar27[1];
      _objc_retain(puVar14);
      if (puVar14 == (ulong *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)puVar14;
        _objc_retainAutorelease(puVar14);
        func_0x00010bdc3520();
      }
      _objc_release(puVar14);
      unaff_x24 = (ulong *)((long)puVar10 + -0xa0);
      func_0x00010002b838((undefined1 *)((long)puVar10 + -0xa0),pcVar8);
      pcVar8 = "true";
      if ((int)puVar18 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838((undefined1 *)((long)puVar10 + -0x88),pcVar8);
      _objc_retain(puVar24);
      if (puVar24 == (ulong *)0x0) {
        pcVar8 = "";
      }
      else {
        _objc_retainAutorelease(puVar24);
        pcVar8 = (char *)puVar24;
        func_0x00010bdc3520(puVar24);
      }
      _objc_release(puVar24);
      func_0x00010002b838((undefined1 *)((long)puVar10 + -0x70),pcVar8);
      *(undefined8 *)((long)puVar10 + -0xc0) = 0;
      *(undefined8 *)((long)puVar10 + -0xb8) = 0;
      *(undefined8 *)((long)puVar10 + -0xb0) = 0;
      func_0x00010007e1e8((undefined1 *)((long)puVar10 + -0xc0),
                          (undefined1 *)((long)puVar10 + -0xa0),
                          (undefined1 *)((long)puVar10 + -0x58),3);
      param_1 = dVar32 * 1000.0;
      puVar21 = (ulong *)&UNK_11096d1e0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,&UNK_11096d1e0,(undefined1 *)((long)puVar10 + -0xc0),(long)param_1);
      *(undefined1 **)((long)puVar10 + -0xa8) = (undefined1 *)((long)puVar10 + -0xc0);
      func_0x00010007e5dc((undefined1 *)((long)puVar10 + -0xa8));
      lVar29 = 0;
      puVar28 = (ulong *)((long)puVar10 + -0xa0);
      puVar19 = puVar20;
      do {
        if (*(char *)((long)puVar28 + lVar29 + 0x47) < '\0') {
          __ZdlPv(*(undefined8 *)((long)puVar28 + lVar29 + 0x30));
        }
        lVar29 = lVar29 + -0x18;
      } while (lVar29 != -0x48);
      _objc_release(puVar24);
      _objc_release(puVar14);
    }
    puVar30 = puVar24;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar10 + -0x58))
    goto code_r0x00010bdbf3e4;
    ___stack_chk_fail();
    _objc_release(puVar24);
    do {
      puVar28 = puVar28 + -3;
    } while (puVar28 != (ulong *)((long)puVar10 + -0xa0));
    _objc_release(puVar24);
    _objc_release(puVar14);
    _objc_release(puVar24);
    _objc_release(puVar14);
    puVar18 = puVar30;
    __Unwind_Resume();
    puVar11 = (ulong *)((long)puVar10 + -0x140);
    *(ulong **)((long)puVar10 + -0x100) = unaff_x24;
    *(ulong **)((long)puVar10 + -0xf8) = (ulong *)((long)puVar10 + -0xa0);
    *(ulong **)((long)puVar10 + -0xf0) = puVar28;
    *(ulong **)((long)puVar10 + -0xe8) = puVar30;
    *(ulong **)((long)puVar10 + -0xe0) = puVar24;
    *(ulong **)((long)puVar10 + -0xd8) = puVar14;
    *(undefined1 **)((long)puVar10 + -0xd0) = (undefined1 *)((long)puVar10 + -0x10);
    *(undefined **)((long)puVar10 + -200) = &SUB_106c868c0;
    puVar16 = (undefined1 *)((long)puVar10 + -0xd0);
    *(undefined8 *)((long)puVar10 + -0x108) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar14 = puVar21;
    _objc_retain(puVar21);
    puVar30 = (ulong *)0x0;
    if (puVar18 != (ulong *)0x0) {
      puVar30 = (ulong *)puVar18[1];
      _objc_retain(puVar21);
      if (puVar21 == (ulong *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)puVar21;
        _objc_retainAutorelease(puVar21);
        func_0x00010bdc3520();
      }
      _objc_release(puVar21);
      func_0x00010002b838((undefined1 *)((long)puVar10 + -0x120),pcVar8);
      *(undefined8 *)((long)puVar10 + -0x140) = 0;
      *(undefined8 *)((long)puVar10 + -0x138) = 0;
      *(undefined8 *)((long)puVar10 + -0x130) = 0;
      func_0x00010007e1e8((undefined1 *)((long)puVar10 + -0x140),
                          (undefined1 *)((long)puVar10 + -0x120),
                          (undefined1 *)((long)puVar10 + -0x108),1);
      puVar14 = (ulong *)&UNK_11096d230;
      (**(code **)(*puVar30 + 0x18))
                (puVar30,&UNK_11096d230,(undefined1 *)((long)puVar10 + -0x140),puVar19);
      *(undefined1 **)((long)puVar10 + -0x128) = (undefined1 *)((long)puVar10 + -0x140);
      func_0x00010007e5dc((undefined1 *)((long)puVar10 + -0x128));
      puVar28 = (ulong *)((long)puVar10 + -0x140);
      if (*(char *)((long)puVar10 + -0x109) < '\0') {
        __ZdlPv(*(undefined8 *)((long)puVar10 + -0x120));
        puVar28 = (ulong *)((long)puVar10 + -0x140);
      }
    }
    puVar18 = puVar21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar10 + -0x108)) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar21);
    _objc_release(puVar21);
    puVar31 = &SUB_106c86a34;
    puVar24 = puVar18;
    __Unwind_Resume();
  }
  *(undefined8 *)((long)puVar11 + -0x40) = unaff_d9;
  *(double *)((long)puVar11 + -0x38) = dVar32;
  *(ulong **)((long)puVar11 + -0x30) = puVar28;
  *(ulong **)((long)puVar11 + -0x28) = puVar30;
  *(ulong **)((long)puVar11 + -0x20) = puVar18;
  *(ulong **)((long)puVar11 + -0x18) = puVar21;
  *(undefined1 **)((long)puVar11 + -0x10) = puVar16;
  *(undefined **)((long)puVar11 + -8) = puVar31;
  *(undefined8 *)((long)puVar11 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar28 = puVar14;
  puVar30 = puVar14;
  _objc_retain();
  if (puVar24 != (ulong *)0x0) {
    _objc_retain(puVar14);
    plVar25 = (long *)puVar24[1];
    _objc_retain(puVar14);
    if (puVar14 == (ulong *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)puVar14;
      _objc_retainAutorelease(puVar14);
      func_0x00010bdc3520();
    }
    _objc_release(puVar14);
    func_0x00010002b838((undefined1 *)((long)puVar11 + -0x60),pcVar8);
    *(undefined8 *)((long)puVar11 + -0x80) = 0;
    *(undefined8 *)((long)puVar11 + -0x78) = 0;
    *(undefined8 *)((long)puVar11 + -0x70) = 0;
    func_0x00010007e1e8((undefined1 *)((long)puVar11 + -0x80),(undefined1 *)((long)puVar11 + -0x60),
                        (undefined1 *)((long)puVar11 + -0x48),1);
    puVar30 = (ulong *)&UNK_11096d280;
    (**(code **)(*plVar25 + 0x18))
              (plVar25,&UNK_11096d280,(undefined1 *)((long)puVar11 + -0x80),(long)(param_1 * 1000.0)
              );
    *(undefined1 **)((long)puVar11 + -0x68) = (undefined1 *)((long)puVar11 + -0x80);
    func_0x00010007e5dc((undefined1 *)((long)puVar11 + -0x68));
    if (*(char *)((long)puVar11 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar11 + -0x60));
    }
    puVar28 = puVar14;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar11 + -0x48)) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    _objc_release(puVar14);
    _objc_release(puVar14);
    puVar18 = puVar28;
    __Unwind_Resume();
    *(ulong **)((long)puVar11 + -0xa0) = puVar28;
    *(ulong **)((long)puVar11 + -0x98) = puVar14;
    *(undefined1 **)((long)puVar11 + -0x90) = (undefined1 *)((long)puVar11 + -0x10);
    *(undefined **)((long)puVar11 + -0x88) = &LAB_106c86bc8;
    if (puVar18 != (ulong *)0x0) {
      plVar25 = (long *)puVar18[1];
      *(undefined8 *)((long)puVar11 + -0xc0) = 0;
      *(undefined8 *)((long)puVar11 + -0xb8) = 0;
      *(undefined8 *)((long)puVar11 + -0xb0) = 0;
      (**(code **)(*plVar25 + 0x18))
                (plVar25,&UNK_11096d2d0,(undefined1 *)((long)puVar11 + -0xc0),puVar30);
      *(undefined1 **)((long)puVar11 + -0xa8) = (undefined1 *)((long)puVar11 + -0xc0);
      func_0x00010007e5dc((undefined1 *)((long)puVar11 + -0xa8));
    }
    return;
  }
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10377d2e0; end: 10377d40b;  */

undefined8 FUN_10377d2e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10377e110(param_2,param_1);
  return param_2;
}



/* Entry: 10377d40c; end: 10377d53b;  */

undefined8 * FUN_10377d40c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  func_0x00010377d390(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10377d53c; end: 10377d5a3;  */

undefined8 * FUN_10377d53c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar5 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar4;
  func_0x00010377d31c(uVar6,uVar7,uVar2,uVar1,uVar3,uVar5);
  uVar7 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar7);
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 10377d5a4; end: 10377d64b;  */

int FUN_10377d5a4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10377d64c; end: 10377d707;  */

void FUN_10377d64c(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  lStack_60 = param_3;
  lStack_58 = param_4;
  func_0x0001000c5db4(auStack_78);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))();
  FUN_10377d708(auStack_78,param_1);
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar2 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)(param_1 + 0x41) = uVar2;
  pcVar1 = *(code **)(param_4 + 0x18);
  FUN_10377d2e0(param_2,auStack_a8);
  (*pcVar1)(param_1 + 0x58,param_2,param_3,param_4);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 10377d708; end: 10377d7af;  */

long FUN_10377d708(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10377d7b0; end: 10377d8fb;  */

long FUN_10377d7b0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar7;
  (*(code *)**(undefined8 **)(lVar7 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined1 *)(param_2 + 0x50);
  func_0x00010377d390(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined1 *)(param_1 + 0x50) = uVar5;
  lVar7 = *(long *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(long *)(param_1 + 0x70) = lVar7;
  (*(code *)**(undefined8 **)(lVar7 + -8))(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



/* Entry: 10377d8fc; end: 10377d987;  */

undefined8 * FUN_10377d8fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x0001000834e4();
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = param_2[4];
  uVar5 = param_2[9];
  uVar2 = *(undefined1 *)(param_2 + 10);
  uVar6 = param_1[5];
  uVar9 = param_1[6];
  uVar8 = param_1[7];
  uVar1 = param_1[8];
  uVar4 = param_1[9];
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar7;
  param_1[9] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar2;
  func_0x00010377d31c(uVar6,uVar9,uVar8,uVar1,uVar4,uVar3);
  func_0x0001000834e4(param_1 + 0xb);
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  uVar6 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar6;
  param_1[0xf] = param_2[0xf];
  return param_1;
}



/* Entry: 10377d988; end: 10377da3f;  */

int FUN_10377d988(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10377da40; end: 10377db9f;  */

void FUN_10377da40(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x21;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f7;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10377d64c(auStack_140,param_2,param_5,param_7);
  (*param_3)(param_1);
  if (unaff_x21 == 0) {
    puVar1 = auStack_e8;
    func_0x0001000a8868(puVar1,uStack_d0);
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
    uStack_78 = puVar1[3];
    uStack_80 = puVar1[2];
    uStack_68 = puVar1[5];
    uStack_70 = puVar1[4];
    uStack_58 = puVar1[7];
    uStack_60 = puVar1[6];
    FUN_10377cd3c(1);
    func_0x0001000a8868(auStack_140,uStack_128);
    uStack_b8 = uStack_110;
    uStack_c0 = uStack_118;
    uStack_b0 = uStack_108;
    uStack_9f = uStack_f7;
    (**(code **)(lStack_120 + 8))(&uStack_c0,uStack_128,lStack_120);
  }
  else {
    puVar1 = auStack_e8;
    func_0x0001000a8868(puVar1,uStack_d0);
    uStack_88 = puVar1[1];
    uStack_90 = *puVar1;
    uStack_78 = puVar1[3];
    uStack_80 = puVar1[2];
    uStack_68 = puVar1[5];
    uStack_70 = puVar1[4];
    uStack_58 = puVar1[7];
    uStack_60 = puVar1[6];
    FUN_10377cd3c(0);
    func_0x0001000a8868(auStack_140,uStack_128);
    uStack_b8 = uStack_110;
    uStack_c0 = uStack_118;
    uStack_b0 = uStack_108;
    uStack_9f = uStack_f7;
    (**(code **)(lStack_120 + 0x10))(&uStack_c0);
    func_0x000107c61654();
  }
  FUN_103765578(auStack_140);
  return;
}



/* Entry: 10377dba0; end: 10377dcb7;  */

undefined1  [16] FUN_10377dba0(void)

{
  return ZEXT816(0);
}



/* Entry: 10377dcb8; end: 10377e02b;  */

undefined1  [16] FUN_10377dcb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  
  lVar10 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar11 = *(code **)(lVar10 + 0x10);
  (*pcVar11)(lVar6 - extraout_x12);
  uVar1 = 0x112f91478;
  func_0x0001000285a8(0x112f91478,&UNK_10dc09a78);
  plVar2 = &lStack_a0;
  func_0x000107c6147c(plVar2,lVar6 - extraout_x12,param_1,uVar1,0xe);
  if ((int)plVar2 == 0) {
    uStack_80 = 0;
    lStack_98 = 0;
    lStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_10377e02c(&lStack_a0);
    (*pcVar11)(lVar6);
    lVar3 = lVar6;
    func_0x000107c605a0(lVar6,param_1,param_2);
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x000107c613f8(param_1,param_2,0,0);
      (**(code **)(lVar10 + 0x20))(param_2,lVar6,param_1);
    }
    else {
      (**(code **)(lVar10 + 8))(lVar6,param_1);
      lVar6 = param_1;
    }
    lVar10 = lVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(lVar3);
    lVar3 = lVar10;
    func_0x000107c42210(lVar10);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uVar5 = 0x70616e732e6d6f63;
    lVar7 = -0x12ffffd18b9e979d;
    lVar9 = lVar6;
    func_0x000107c5fbb4(0x70616e732e6d6f63,0xed00002e74616863,lVar4,lVar6);
    func_0x000107c6142c(lVar6);
    lVar6 = lVar10;
    func_0x000107c42210();
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
    lStack_70 = lVar7;
    lStack_78 = lVar3;
    if ((uVar5 & 1) != 0) {
      lStack_78 = 0xd;
      lVar6 = lVar7;
      func_0x0001011a7878(0xd,lVar3,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c5fb2c(lStack_78,lVar3,lVar6,lVar9);
      func_0x000107c6142c(lVar9);
      lStack_70 = lVar3;
    }
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    lVar6 = lVar10;
    func_0x000107c3fcb0();
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_a0 = lVar6;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c61170(lVar10);
    func_0x000107c6142c(puVar8);
  }
  else {
    func_0x00010377e0a4(&lStack_a0,&lStack_78);
    lVar10 = lStack_58;
    lVar6 = lStack_60;
    func_0x0001000a8868(&lStack_78,lStack_60);
    (**(code **)(lVar10 + 0x10))();
    if (lVar10 == 0) {
      func_0x0001000a8868(&lStack_78,lStack_60);
      (**(code **)(lStack_58 + 0x18))(lStack_60,lStack_58);
      lVar6 = lStack_60;
      lVar10 = lStack_58;
    }
    else {
      lStack_a0 = lVar6;
      lStack_98 = lVar10;
      func_0x000107c61438(lVar10,2);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x0001000a8868(&lStack_78,lStack_60);
      lVar6 = lStack_58;
      (**(code **)(lStack_58 + 0x18))(lStack_60,lStack_58);
      func_0x000107c5fb78();
      func_0x000107c61430(lVar10,2);
      func_0x000107c6142c(lVar6);
      lVar6 = lStack_a0;
      lVar10 = lStack_98;
    }
    func_0x0001000834e4(&lStack_78);
    lStack_78 = lVar6;
    lStack_70 = lVar10;
  }
  auVar12._8_8_ = lStack_70;
  auVar12._0_8_ = lStack_78;
  return auVar12;
}



/* Entry: 10377e02c; end: 10377e073;  */

undefined8 FUN_10377e02c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f91480;
  func_0x0001000285a8(0x112f91480,&UNK_10dc09a80);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10377e074; end: 10377e0cb;  */

undefined1  [16] FUN_10377e074(void)

{
  return ZEXT816(0);
}



/* Entry: 10377e0cc; end: 10377e0f7;  */

long FUN_10377e0cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10377e0f8; end: 10377e10f;  */

/* WARNING: Possible PIC construction at 0x00010377d34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377d350) */

undefined8 FUN_10377e0f8(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[2];
  cVar1 = *(char *)(param_1 + 5);
  if ((cVar1 != '\x04' && cVar1 != '\x01') && (cVar1 != '\0')) {
    return *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,param_1[1],uVar2,param_1[3],param_1[4]);
  return uVar2;
}



/* Entry: 10377e110; end: 10377e20b;  */

undefined8 * FUN_10377e110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  func_0x00010377d390(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 10377e20c; end: 10377e25b;  */

undefined8 * FUN_10377e20c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  func_0x00010377d31c(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10377e25c; end: 10377e343;  */

int FUN_10377e25c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10377e344; end: 10377e6cb;  */

/* WARNING: Possible PIC construction at 0x00010377e46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377e59c) */
/* WARNING: Removing unreachable block (ram,0x00010377e618) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010377e470) */
/* WARNING: Removing unreachable block (ram,0x00010377e5b4) */

void FUN_10377e344(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  bVar3 = (byte)unaff_x20[5];
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      func_0x000107c60690(0);
      uVar1 = (uint)uVar5 & 0xff;
      uVar7 = 0x800000010f164110;
      uVar2 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar7 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      param_2 = 0xec000000646e6573;
      uVar6 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        param_2 = uVar7;
        uVar6 = uVar2;
      }
      uVar7 = 0xec0000006f745f64;
      uVar2 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar7 = 0xeb00000000657261;
        uVar2 = 0x68735f6b63697571;
      }
      bVar4 = (uVar5 & 0xff) != 0;
      uVar5 = 0x6f745f646e6573;
      if (bVar4) {
        uVar5 = uVar2;
      }
      uVar2 = 0xe700000000000000;
      if (bVar4) {
        uVar2 = uVar7;
      }
      if (uVar1 < 3) {
        uVar6 = uVar5;
        param_2 = uVar2;
      }
    }
    else if (bVar3 == 1) {
      func_0x000107c60690(1);
      uVar1 = (uint)uVar5 & 0xff;
      uVar7 = 0x800000010f164110;
      uVar2 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar7 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      param_2 = 0xec000000646e6573;
      uVar6 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        param_2 = uVar7;
        uVar6 = uVar2;
      }
      uVar7 = 0xec0000006f745f64;
      uVar2 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar7 = 0xeb00000000657261;
        uVar2 = 0x68735f6b63697571;
      }
      bVar4 = (uVar5 & 0xff) != 0;
      uVar5 = 0x6f745f646e6573;
      if (bVar4) {
        uVar5 = uVar2;
      }
      uVar2 = 0xe700000000000000;
      if (bVar4) {
        uVar2 = uVar7;
      }
      if (uVar1 < 3) {
        uVar6 = uVar5;
        param_2 = uVar2;
      }
    }
    else {
      func_0x000107c60690(4);
      FUN_103770f40(uVar5);
      uVar6 = uVar5;
    }
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar6,param_2);
    return;
  }
  if (bVar3 == 3) {
    func_0x000107c60690(6);
  }
  else {
    if (bVar3 == 4) {
      func_0x000107c60690(7);
      func_0x000107c60690(uVar5);
      param_2 = uVar7;
      goto code_r0x000107c5fb58;
    }
    if (((uVar7 == 0 && uVar6 == 0) && (uVar5 == 0 && uVar2 == 0)) && uVar8 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 == 1) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 3;
    }
    else if ((uVar5 == 2) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 5;
    }
    else if ((uVar5 == 3) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 8;
    }
    else if ((uVar5 == 4) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 9;
    }
    else {
      uVar5 = 10;
    }
  }
  func_0x000107c60690(uVar5);
  return;
}



/* Entry: 10377e6cc; end: 10377e707;  */

void FUN_10377e6cc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  FUN_10377e344(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377e708; end: 10377e70b;  */

/* WARNING: Possible PIC construction at 0x00010377e46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010377e5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377e59c) */
/* WARNING: Removing unreachable block (ram,0x00010377e618) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010377e470) */
/* WARNING: Removing unreachable block (ram,0x00010377e5b4) */

void FUN_10377e708(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  bVar3 = (byte)unaff_x20[5];
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      func_0x000107c60690(0);
      uVar1 = (uint)uVar5 & 0xff;
      uVar7 = 0x800000010f164110;
      uVar2 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar7 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      param_2 = 0xec000000646e6573;
      uVar6 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        param_2 = uVar7;
        uVar6 = uVar2;
      }
      uVar7 = 0xec0000006f745f64;
      uVar2 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar7 = 0xeb00000000657261;
        uVar2 = 0x68735f6b63697571;
      }
      bVar4 = (uVar5 & 0xff) != 0;
      uVar5 = 0x6f745f646e6573;
      if (bVar4) {
        uVar5 = uVar2;
      }
      uVar2 = 0xe700000000000000;
      if (bVar4) {
        uVar2 = uVar7;
      }
      if (uVar1 < 3) {
        uVar6 = uVar5;
        param_2 = uVar2;
      }
    }
    else if (bVar3 == 1) {
      func_0x000107c60690(1);
      uVar1 = (uint)uVar5 & 0xff;
      uVar7 = 0x800000010f164110;
      uVar2 = 0xd000000000000010;
      if (uVar1 != 4) {
        uVar7 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      param_2 = 0xec000000646e6573;
      uVar6 = 0x5f7061745f656e6f;
      if (uVar1 != 3) {
        param_2 = uVar7;
        uVar6 = uVar2;
      }
      uVar7 = 0xec0000006f745f64;
      uVar2 = 0x6e65735f696e696d;
      if (uVar1 != 1) {
        uVar7 = 0xeb00000000657261;
        uVar2 = 0x68735f6b63697571;
      }
      bVar4 = (uVar5 & 0xff) != 0;
      uVar5 = 0x6f745f646e6573;
      if (bVar4) {
        uVar5 = uVar2;
      }
      uVar2 = 0xe700000000000000;
      if (bVar4) {
        uVar2 = uVar7;
      }
      if (uVar1 < 3) {
        uVar6 = uVar5;
        param_2 = uVar2;
      }
    }
    else {
      func_0x000107c60690(4);
      FUN_103770f40(uVar5);
      uVar6 = uVar5;
    }
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar6,param_2);
    return;
  }
  if (bVar3 == 3) {
    func_0x000107c60690(6);
  }
  else {
    if (bVar3 == 4) {
      func_0x000107c60690(7);
      func_0x000107c60690(uVar5);
      param_2 = uVar7;
      goto code_r0x000107c5fb58;
    }
    if (((uVar7 == 0 && uVar6 == 0) && (uVar5 == 0 && uVar2 == 0)) && uVar8 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 == 1) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 3;
    }
    else if ((uVar5 == 2) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 5;
    }
    else if ((uVar5 == 3) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 8;
    }
    else if ((uVar5 == 4) && (((uVar7 == 0 && uVar6 == 0) && uVar2 == 0) && uVar8 == 0)) {
      uVar5 = 9;
    }
    else {
      uVar5 = 10;
    }
  }
  func_0x000107c60690(uVar5);
  return;
}



/* Entry: 10377e70c; end: 10377e743;  */

void FUN_10377e70c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_10377e344(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377e744; end: 10377e78b;  */

uint FUN_10377e744(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_10377e7d0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10377e78c; end: 10377e78f;  */

void FUN_10377e78c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09acc;
  func_0x000107c61520(&UNK_10dc09acc,&UNK_110690b28);
  puRam0000000112f91488 = puVar1;
  return;
}



/* Entry: 10377e790; end: 10377e7cf;  */

void FUN_10377e790(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09acc;
  func_0x000107c61520(&UNK_10dc09acc,&UNK_110690b28);
  puRam0000000112f91488 = puVar1;
  return;
}



/* Entry: 10377e7d0; end: 10377ea63;  */

/* WARNING: Possible PIC construction at 0x00010377e8b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377e8b4) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_10377e7d0(long *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  
  lVar12 = *param_1;
  uVar9 = param_1[1];
  lVar10 = param_1[2];
  uVar2 = param_1[3];
  lVar14 = param_1[4];
  bVar15 = *(byte *)(param_1 + 5);
  uVar13 = (uint)lVar12;
  if (bVar15 < 3) {
    if (bVar15 == 0) {
      if ((byte)param_2[10] != 0) {
        return 0;
      }
      if ((uint)(byte)*param_2 != (uVar13 & 0xff)) {
        return 0;
      }
      uVar11 = *(ulong *)(param_2 + 2);
      lVar12 = *(long *)(param_2 + 4);
      uVar1 = *(ulong *)(param_2 + 6);
      lVar3 = *(long *)(param_2 + 8);
      if ((((uVar9 == uVar11) && (lVar10 == lVar12)) &&
          (uVar9 = uVar2, lVar10 = lVar14, uVar11 = uVar1, lVar12 = lVar3, uVar2 == uVar1)) &&
         (lVar14 == lVar3)) {
        return 1;
      }
      goto code_r0x000107c605b8;
    }
    if (bVar15 != 1) {
      if ((byte)param_2[10] != 2) {
        return 0;
      }
      return (ulong)((uint)(byte)*param_2 == (uVar13 & 0xff));
    }
    if ((byte)param_2[10] != 1) {
      return 0;
    }
    if ((uint)(byte)*param_2 != (uVar13 & 0xff)) {
      return 0;
    }
    uVar11 = *(ulong *)(param_2 + 2);
    lVar12 = *(long *)(param_2 + 4);
  }
  else {
    if (bVar15 == 3) {
      if ((byte)param_2[10] != 3) {
        return 0;
      }
      return (ulong)(uVar13 == *param_2);
    }
    if (bVar15 != 4) {
      if (((lVar10 == 0 && uVar9 == 0) && (lVar12 == 0 && uVar2 == 0)) && lVar14 == 0) {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)(param_2 + 6);
        bVar15 = (byte)param_2[2] | (byte)uVar7;
        bVar16 = *(byte *)((long)param_2 + 9) | (byte)((ulong)uVar7 >> 8);
        bVar17 = *(byte *)((long)param_2 + 10) | (byte)((ulong)uVar7 >> 0x10);
        bVar18 = *(byte *)((long)param_2 + 0xb) | (byte)((ulong)uVar7 >> 0x18);
        bVar19 = (byte)param_2[3] | (byte)((ulong)uVar7 >> 0x20);
        bVar20 = *(byte *)((long)param_2 + 0xd) | (byte)((ulong)uVar7 >> 0x28);
        bVar21 = *(byte *)((long)param_2 + 0xe) | (byte)((ulong)uVar7 >> 0x30);
        bVar22 = *(byte *)((long)param_2 + 0xf) | (byte)((ulong)uVar7 >> 0x38);
        bVar23 = (byte)param_2[4] | (byte)uVar8;
        bVar24 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)uVar8 >> 8);
        bVar25 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)uVar8 >> 0x10);
        bVar26 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)uVar8 >> 0x18);
        bVar27 = (byte)param_2[5] | (byte)((ulong)uVar8 >> 0x20);
        bVar28 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)uVar8 >> 0x28);
        bVar29 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)uVar8 >> 0x30);
        bVar30 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)uVar8 >> 0x38);
        auVar31[1] = bVar16;
        auVar31[0] = bVar15;
        auVar31[2] = bVar17;
        auVar31[3] = bVar18;
        auVar31[4] = bVar19;
        auVar31[5] = bVar20;
        auVar31[6] = bVar21;
        auVar31[7] = bVar22;
        auVar31[8] = bVar23;
        auVar31[9] = bVar24;
        auVar31[10] = bVar25;
        auVar31[0xb] = bVar26;
        auVar31[0xc] = bVar27;
        auVar31[0xd] = bVar28;
        auVar31[0xe] = bVar29;
        auVar31[0xf] = bVar30;
        auVar6[1] = bVar16;
        auVar6[0] = bVar15;
        auVar6[2] = bVar17;
        auVar6[3] = bVar18;
        auVar6[4] = bVar19;
        auVar6[5] = bVar20;
        auVar6[6] = bVar21;
        auVar6[7] = bVar22;
        auVar6[8] = bVar23;
        auVar6[9] = bVar24;
        auVar6[10] = bVar25;
        auVar6[0xb] = bVar26;
        auVar6[0xc] = bVar27;
        auVar6[0xd] = bVar28;
        auVar6[0xe] = bVar29;
        auVar6[0xf] = bVar30;
        auVar31 = NEON_ext(auVar31,auVar6,8,1);
        if (CONCAT17(bVar22 | auVar31[7],
                     CONCAT16(bVar21 | auVar31[6],
                              CONCAT15(bVar20 | auVar31[5],
                                       CONCAT14(bVar19 | auVar31[4],
                                                CONCAT13(bVar18 | auVar31[3],
                                                         CONCAT12(bVar17 | auVar31[2],
                                                                  CONCAT11(bVar16 | auVar31[1],
                                                                           bVar15 | auVar31[0]))))))
                    ) != 0 || *(long *)param_2 != 0) {
          return 0;
        }
        return 1;
      }
      if ((lVar12 == 1) && (((lVar10 == 0 && uVar9 == 0) && uVar2 == 0) && lVar14 == 0)) {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        if (*(long *)param_2 != 1) {
          return 0;
        }
      }
      else if ((lVar12 == 2) && (((lVar10 == 0 && uVar9 == 0) && uVar2 == 0) && lVar14 == 0)) {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        if (*(long *)param_2 != 2) {
          return 0;
        }
      }
      else if ((lVar12 == 3) && (((lVar10 == 0 && uVar9 == 0) && uVar2 == 0) && lVar14 == 0)) {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        if (*(long *)param_2 != 3) {
          return 0;
        }
      }
      else if ((lVar12 == 4) && (((lVar10 == 0 && uVar9 == 0) && uVar2 == 0) && lVar14 == 0)) {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        if (*(long *)param_2 != 4) {
          return 0;
        }
      }
      else {
        if ((byte)param_2[10] != 5) {
          return 0;
        }
        if (*(long *)param_2 != 5) {
          return 0;
        }
      }
      uVar8 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 6);
      bVar15 = (byte)param_2[2] | (byte)uVar7;
      bVar16 = *(byte *)((long)param_2 + 9) | (byte)((ulong)uVar7 >> 8);
      bVar17 = *(byte *)((long)param_2 + 10) | (byte)((ulong)uVar7 >> 0x10);
      bVar18 = *(byte *)((long)param_2 + 0xb) | (byte)((ulong)uVar7 >> 0x18);
      bVar19 = (byte)param_2[3] | (byte)((ulong)uVar7 >> 0x20);
      bVar20 = *(byte *)((long)param_2 + 0xd) | (byte)((ulong)uVar7 >> 0x28);
      bVar21 = *(byte *)((long)param_2 + 0xe) | (byte)((ulong)uVar7 >> 0x30);
      bVar22 = *(byte *)((long)param_2 + 0xf) | (byte)((ulong)uVar7 >> 0x38);
      bVar23 = (byte)param_2[4] | (byte)uVar8;
      bVar24 = *(byte *)((long)param_2 + 0x11) | (byte)((ulong)uVar8 >> 8);
      bVar25 = *(byte *)((long)param_2 + 0x12) | (byte)((ulong)uVar8 >> 0x10);
      bVar26 = *(byte *)((long)param_2 + 0x13) | (byte)((ulong)uVar8 >> 0x18);
      bVar27 = (byte)param_2[5] | (byte)((ulong)uVar8 >> 0x20);
      bVar28 = *(byte *)((long)param_2 + 0x15) | (byte)((ulong)uVar8 >> 0x28);
      bVar29 = *(byte *)((long)param_2 + 0x16) | (byte)((ulong)uVar8 >> 0x30);
      bVar30 = *(byte *)((long)param_2 + 0x17) | (byte)((ulong)uVar8 >> 0x38);
      auVar4[1] = bVar16;
      auVar4[0] = bVar15;
      auVar4[2] = bVar17;
      auVar4[3] = bVar18;
      auVar4[4] = bVar19;
      auVar4[5] = bVar20;
      auVar4[6] = bVar21;
      auVar4[7] = bVar22;
      auVar4[8] = bVar23;
      auVar4[9] = bVar24;
      auVar4[10] = bVar25;
      auVar4[0xb] = bVar26;
      auVar4[0xc] = bVar27;
      auVar4[0xd] = bVar28;
      auVar4[0xe] = bVar29;
      auVar4[0xf] = bVar30;
      auVar5[1] = bVar16;
      auVar5[0] = bVar15;
      auVar5[2] = bVar17;
      auVar5[3] = bVar18;
      auVar5[4] = bVar19;
      auVar5[5] = bVar20;
      auVar5[6] = bVar21;
      auVar5[7] = bVar22;
      auVar5[8] = bVar23;
      auVar5[9] = bVar24;
      auVar5[10] = bVar25;
      auVar5[0xb] = bVar26;
      auVar5[0xc] = bVar27;
      auVar5[0xd] = bVar28;
      auVar5[0xe] = bVar29;
      auVar5[0xf] = bVar30;
      auVar31 = NEON_ext(auVar4,auVar5,8,1);
      if (CONCAT17(bVar22 | auVar31[7],
                   CONCAT16(bVar21 | auVar31[6],
                            CONCAT15(bVar20 | auVar31[5],
                                     CONCAT14(bVar19 | auVar31[4],
                                              CONCAT13(bVar18 | auVar31[3],
                                                       CONCAT12(bVar17 | auVar31[2],
                                                                CONCAT11(bVar16 | auVar31[1],
                                                                         bVar15 | auVar31[0])))))))
          != 0) {
        return 0;
      }
      return 1;
    }
    if ((byte)param_2[10] != 4) {
      return 0;
    }
    if (uVar13 != *param_2) {
      return 0;
    }
    uVar11 = *(ulong *)(param_2 + 2);
    lVar12 = *(long *)(param_2 + 4);
  }
  if ((uVar9 == uVar11) && (lVar10 == lVar12)) {
    return 1;
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(uVar9,lVar10,uVar11,lVar12,0);
  return uVar9;
}



/* Entry: 10377ea64; end: 10377ebc7;  */

int FUN_10377ea64(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10377eae0;
        goto LAB_10377eac4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10377eac4:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_10377eae0:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10377ebc8; end: 10377ee03;  */

void FUN_10377ebc8(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x800000010f164110;
  uVar2 = 0xd000000000000010;
  if (param_1 != 4) {
    uVar5 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar3 = 0xec000000646e6573;
  uVar4 = 0x5f7061745f656e6f;
  if (param_1 != 3) {
    uVar3 = uVar5;
    uVar4 = uVar2;
  }
  uVar5 = 0xec0000006f745f64;
  uVar2 = 0x6e65735f696e696d;
  if (param_1 != 1) {
    uVar5 = 0xeb00000000657261;
    uVar2 = 0x68735f6b63697571;
  }
  uVar1 = 0x6f745f646e6573;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar2 = uVar5;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377ee04; end: 10377ee1f;  */

bool FUN_10377ee04(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10377ee20; end: 10377ef17;  */

void FUN_10377ee20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0x800000010f164110;
  uVar2 = 0xd000000000000010;
  if (bVar4 != 4) {
    uVar6 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar3 = 0xec000000646e6573;
  uVar5 = 0x5f7061745f656e6f;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  uVar6 = 0xec0000006f745f64;
  uVar2 = 0x6e65735f696e696d;
  if (bVar4 != 1) {
    uVar6 = 0xeb00000000657261;
    uVar2 = 0x68735f6b63697571;
  }
  uVar1 = 0x6f745f646e6573;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10377ef18; end: 10377ef1f;  */

void FUN_10377ef18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar6 = 0x800000010f164110;
  uVar2 = 0xd000000000000010;
  if (bVar4 != 4) {
    uVar6 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar3 = 0xec000000646e6573;
  uVar5 = 0x5f7061745f656e6f;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  uVar6 = 0xec0000006f745f64;
  uVar2 = 0x6e65735f696e696d;
  if (bVar4 != 1) {
    uVar6 = 0xeb00000000657261;
    uVar2 = 0x68735f6b63697571;
  }
  uVar1 = 0x6f745f646e6573;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377ef20; end: 10377ef4b;  */

void FUN_10377ef20(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10377f06c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10377ef4c; end: 10377f02b;  */

void FUN_10377ef4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0x800000010f164110;
  uVar2 = 0xd000000000000010;
  if (bVar4 != 4) {
    uVar6 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar3 = 0xec000000646e6573;
  uVar5 = 0x5f7061745f656e6f;
  if (bVar4 != 3) {
    uVar3 = uVar6;
    uVar5 = uVar2;
  }
  uVar6 = 0xec0000006f745f64;
  uVar2 = 0x6e65735f696e696d;
  if (bVar4 != 1) {
    uVar6 = 0xeb00000000657261;
    uVar2 = 0x68735f6b63697571;
  }
  uVar1 = 0x6f745f646e6573;
  if (bVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar2 = uVar6;
  }
  if (bVar4 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10377f02c; end: 10377f06b;  */

void FUN_10377f02c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09bcc;
  func_0x000107c61520(&UNK_10dc09bcc,&UNK_110690bf0);
  puRam0000000112f91490 = puVar1;
  return;
}



/* Entry: 10377f06c; end: 10377f0cf;  */

ulong FUN_10377f06c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 10377f0d0; end: 10377f2a7;  */

long FUN_10377f0d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10377f2a8; end: 10377f30f;  */

long FUN_10377f2a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10377f310; end: 10377f44b;  */

undefined8 * FUN_10377f310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = *(undefined1 *)(param_2 + 3);
  func_0x000107c61174();
  FUN_103765724(uVar1,uVar3,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 10377f44c; end: 10377f4cb;  */

undefined8 * FUN_10377f44c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 3);
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar2;
  func_0x00010376573c(uVar4,uVar1,uVar3);
  uVar2 = *(undefined1 *)(param_2 + 5);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = uVar2;
  func_0x000107c61170(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar4);
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 10377f4cc; end: 10377f5c3;  */

int FUN_10377f4cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10377f5c4; end: 10377f64b;  */

uint FUN_10377f5c4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar2 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_80 = param_1[2];
  uStack_78 = (undefined1)param_1[3];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uVar3 = param_1[6];
  dVar5 = (double)param_1[7];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  uStack_48 = (undefined1)param_2[3];
  uStack_3f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_47 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  uVar4 = param_2[6];
  dVar6 = (double)param_2[7];
  func_0x000103aa6d20(&uStack_90,&uStack_60);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10377f690(uVar3,uVar4);
    uVar1 = (uint)uVar3 & (uint)(dVar5 == dVar6);
  }
  return uVar1;
}



/* Entry: 10377f64c; end: 10377f64f;  */

void FUN_10377f64c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09c28;
  func_0x000107c61520(&UNK_10dc09c28,&UNK_110690d48);
  puRam0000000112f91550 = puVar1;
  return;
}



/* Entry: 10377f650; end: 10377f68f;  */

void FUN_10377f650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09c28;
  func_0x000107c61520(&UNK_10dc09c28,&UNK_110690d48);
  puRam0000000112f91550 = puVar1;
  return;
}



/* Entry: 10377f690; end: 10377f8c7;  */

undefined8 FUN_10377f690(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uStack_68;
  
  if (param_1 == param_2) {
    uVar9 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uStack_68 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uStack_68 = ~(-1L << (uVar13 & 0x3f));
      }
      uStack_68 = uStack_68 & *(ulong *)(param_1 + 0x40);
      func_0x000107c61438(param_1,2);
      func_0x000107c61434(param_2);
      lVar7 = 0;
      do {
        if (uStack_68 == 0) {
          do {
            lVar14 = lVar7 + 1;
            if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10377f8c8);
              (*pcVar6)();
            }
            if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
              func_0x000107c6142c(param_2);
              func_0x000107c61430(param_1,2);
              return 1;
            }
            uStack_68 = ((ulong *)(param_1 + 0x40))[lVar14];
            lVar7 = lVar7 + 1;
          } while (uStack_68 == 0);
          uVar10 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_68 = uStack_68 - 1 & uStack_68;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar14 * 0x40;
        }
        else {
          uVar10 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uStack_68 = uStack_68 - 1 & uStack_68;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
          lVar14 = lVar7;
        }
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
        lVar7 = *plVar1;
        uVar2 = plVar1[1];
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar10 * 0x18);
        uVar9 = *puVar11;
        uVar3 = puVar11[1];
        uVar4 = *(undefined1 *)(puVar11 + 2);
        func_0x000107c61434(uVar2);
        func_0x000101edf31c(uVar9,uVar3,uVar4);
        uVar10 = uVar2;
        func_0x000100029284();
        func_0x000107c6142c(uVar2);
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c61430(param_1,2);
          func_0x000101edeb30(uVar9,uVar3,uVar4);
          goto LAB_10377f8a0;
        }
        puVar12 = (ulong *)(*(long *)(param_2 + 0x38) + lVar7 * 0x18);
        uVar10 = *puVar12;
        uVar2 = puVar12[1];
        uVar5 = (undefined1)puVar12[2];
        func_0x000101edf31c(uVar10,uVar2,uVar5);
        uVar8 = uVar10;
        func_0x000103aa849c(uVar10,uVar2,uVar5,uVar9,uVar3,uVar4);
        func_0x000101edeb30(uVar10,uVar2,uVar5);
        func_0x000101edeb30(uVar9,uVar3,uVar4);
        lVar7 = lVar14;
      } while ((uVar8 & 1) != 0);
      func_0x000107c6142c(param_2);
      func_0x000107c61430(param_1,2);
    }
LAB_10377f8a0:
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 10377f8c8; end: 10377f8cf;  */

undefined8 FUN_10377f8c8(void)

{
  return 1;
}



/* Entry: 10377f8d0; end: 10377f923;  */

void FUN_10377f8d0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,0xd000000000000013,0x800000010f164130);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377f924; end: 10377f93f;  */

void FUN_10377f924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000013,0x800000010f164130);
  return;
}



/* Entry: 10377f940; end: 10377f98f;  */

void FUN_10377f940(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,0xd000000000000013,0x800000010f164130);
  func_0x000107c606a8();
  return;
}



/* Entry: 10377f990; end: 10377f9fb;  */

void FUN_10377f990(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 10377f9fc; end: 10377fa47;  */

void FUN_10377f9fc(undefined8 *param_1)

{
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x800000010f164130;
  return;
}



/* Entry: 10377fa48; end: 10377fbbf;  */

void FUN_10377fa48(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar1 = **(long **)(unaff_x22 + 0x3e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 1000) = lVar1;
  if (lVar1 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x380);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
    lVar2 = unaff_x22 + 0x380;
    func_0x0001000a8868(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x298) = 0;
    *(undefined8 *)(unaff_x22 + 0x290) = 0;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2b0) = 0;
    *(undefined1 *)(unaff_x22 + 0x2b8) = 5;
    FUN_10377d64c(unaff_x22 + 0x90,(undefined8 *)(unaff_x22 + 0x290),uVar3,uVar4,lVar2);
    FUN_1037807b0(unaff_x22 + 0x380);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x3d0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10377fbc0;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar3 = 0x112f91468;
    func_0x0001000285a8(0x112f91468,&UNK_10dc099b8);
    *(undefined8 *)(unaff_x22 + 0x248) = uVar3;
    *(long *)(unaff_x22 + 0x230) = lVar2;
    *(undefined **)(unaff_x22 + 0x210) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x218) = 0x42000000;
    *(code **)(unaff_x22 + 0x220) = FUN_103793450;
    *(undefined **)(unaff_x22 + 0x228) = &UNK_110690da8;
    func_0x000107c507a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_103780748();
  func_0x000107c613f8(&UNK_110690e78,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010377fbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10377fbc0; end: 10377fc17;  */

void FUN_10377fbc0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x3f0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10377fc18;
  }
  else {
    pcVar1 = FUN_1037801e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377fc18; end: 10377fcd7;  */

void FUN_10377fc18(void)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x3d0);
  *(long *)(unaff_x22 + 0x3f8) = lVar7;
  FUN_1037807d0(*(long *)(unaff_x22 + 0x3e0) + 8,unaff_x22 + 0x3a8);
  lVar6 = *(long *)(unaff_x22 + 0x3c0);
  lVar2 = unaff_x22 + 0x3a8;
  func_0x0001000a8868();
  if (lVar7 != 0) {
    func_0x000107c42a7c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar4 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      lVar7 = lVar4;
      goto FUN_10376011c;
    }
    lVar7 = 0;
  }
  lVar6 = 0;
FUN_10376011c:
  *(long *)(unaff_x22 + 0x400) = lVar6;
  plVar5 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x408) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10377fcd8;
  uVar1 = *(undefined1 *)(unaff_x22 + 0x2ba);
  plVar5[0x18] = lVar6;
  plVar5[0x19] = lVar2;
  *(undefined1 *)(plVar5 + 0x26) = uVar1;
  plVar5[0x17] = lVar7;
  lVar2 = 0;
  func_0x000107c5f804();
  plVar5[0x1a] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[0x1b] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x1c] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103760184,0,0);
  return;
}



/* Entry: 10377fcd8; end: 10377fd47;  */

void FUN_10377fcd8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x400);
  *(undefined8 *)(lVar2 + 0x410) = param_1;
  *(long *)(lVar2 + 0x418) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x408));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10377fd48;
  }
  else {
    pcVar1 = FUN_10377fe58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377fd48; end: 10377fdff;  */

void FUN_10377fd48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 1000);
  FUN_1037807b0(unaff_x22 + 0x3a8);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_10377fe00;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar2;
  *(long *)(unaff_x22 + 0x270) = lVar1;
  *(undefined **)(unaff_x22 + 0x250) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 600) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x260) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x268) = &UNK_110690dd0;
  func_0x000107c4e644(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 10377fe00; end: 10377fe57;  */

void FUN_10377fe00(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x420) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103780108;
  }
  else {
    pcVar1 = FUN_103780488;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377fe58; end: 103780107;  */

void FUN_10377fe58(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x3f8));
  FUN_1037807b0(unaff_x22 + 0x3a8);
  pcVar8 = *(char **)(unaff_x22 + 0x418);
  *(char **)(unaff_x22 + 0x3d8) = pcVar8;
  func_0x000107c614b0(pcVar8);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x2b9;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x3d8,uVar6,&UNK_11068f370,0);
  if ((int)lVar2 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 1000);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar6 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x138) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
    FUN_10377cd3c(0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar6);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x2e1) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x2d9) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2c0),pcVar8,uVar6,lVar2);
    func_0x000107c61654();
    func_0x000107c615e8(uVar7);
    FUN_103765578(unaff_x22 + 0x90);
  }
  else {
    func_0x000107c614ac();
    cVar1 = *(char *)(unaff_x22 + 0x2b9);
    uVar6 = *(undefined8 *)(unaff_x22 + 1000);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
      func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
      uVar7 = puVar4[4];
      uVar10 = puVar4[7];
      uVar9 = puVar4[6];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      uVar12 = puVar4[3];
      uVar11 = puVar4[2];
      *(undefined8 *)(unaff_x22 + 0x1b8) = puVar4[5];
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
      *(undefined8 *)(unaff_x22 + 400) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar11;
      FUN_10377cd3c(1);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0xb0);
      func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
      *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0x341) = *(undefined8 *)(unaff_x22 + 0xd9);
      *(undefined8 *)(unaff_x22 + 0x339) = *(undefined8 *)(unaff_x22 + 0xd1);
      (**(code **)(lVar2 + 8))((undefined8 *)(unaff_x22 + 800),uVar7,lVar2);
      func_0x000107c615e8(uVar6);
      FUN_103765578(unaff_x22 + 0x90);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10378005c;
    }
    FUN_103761768();
    puVar3 = &UNK_11068f370;
    pcVar5 = pcVar8;
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar5 = cVar1;
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar7 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x178) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar11;
    FUN_10377cd3c(0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x311) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x309) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2f0),puVar3,uVar7,lVar2);
    func_0x000107c614ac(puVar3);
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar8 = cVar1;
    func_0x000107c61654();
    func_0x000107c615e8(uVar6);
    FUN_103765578(unaff_x22 + 0x90);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10378005c:
                    /* WARNING: Could not recover jumptable at 0x000103780078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103780108; end: 1037801df;  */

void FUN_103780108(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar5 = *(undefined8 *)(unaff_x22 + 1000);
  puVar2 = (undefined8 *)(unaff_x22 + 0xe8);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x22 + 0x100));
  uVar6 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined8 *)(unaff_x22 + 0x1f8) = puVar2[5];
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x200) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar9;
  FUN_10377cd3c(1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  func_0x0001000a8868(unaff_x22 + 0x90,uVar6);
  *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x371) = *(undefined8 *)(unaff_x22 + 0xd9);
  *(undefined8 *)(unaff_x22 + 0x369) = *(undefined8 *)(unaff_x22 + 0xd1);
  (**(code **)(lVar1 + 8))(unaff_x22 + 0x350,uVar6,lVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar4);
  FUN_103765578(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0001037801dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037801e0; end: 103780487;  */

void FUN_1037801e0(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c61654();
  pcVar8 = *(char **)(unaff_x22 + 0x3f0);
  *(char **)(unaff_x22 + 0x3d8) = pcVar8;
  func_0x000107c614b0(pcVar8);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x2b9;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x3d8,uVar6,&UNK_11068f370,0);
  if ((int)lVar2 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 1000);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar6 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x138) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
    FUN_10377cd3c(0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar6);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x2e1) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x2d9) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2c0),pcVar8,uVar6,lVar2);
    func_0x000107c61654();
    func_0x000107c615e8(uVar7);
    FUN_103765578(unaff_x22 + 0x90);
  }
  else {
    func_0x000107c614ac();
    cVar1 = *(char *)(unaff_x22 + 0x2b9);
    uVar6 = *(undefined8 *)(unaff_x22 + 1000);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
      func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
      uVar7 = puVar4[4];
      uVar10 = puVar4[7];
      uVar9 = puVar4[6];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      uVar12 = puVar4[3];
      uVar11 = puVar4[2];
      *(undefined8 *)(unaff_x22 + 0x1b8) = puVar4[5];
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
      *(undefined8 *)(unaff_x22 + 400) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar11;
      FUN_10377cd3c(1);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0xb0);
      func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
      *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0x341) = *(undefined8 *)(unaff_x22 + 0xd9);
      *(undefined8 *)(unaff_x22 + 0x339) = *(undefined8 *)(unaff_x22 + 0xd1);
      (**(code **)(lVar2 + 8))((undefined8 *)(unaff_x22 + 800),uVar7,lVar2);
      func_0x000107c615e8(uVar6);
      FUN_103765578(unaff_x22 + 0x90);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1037803dc;
    }
    FUN_103761768();
    puVar3 = &UNK_11068f370;
    pcVar5 = pcVar8;
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar5 = cVar1;
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar7 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x178) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar11;
    FUN_10377cd3c(0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x311) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x309) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2f0),puVar3,uVar7,lVar2);
    func_0x000107c614ac(puVar3);
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar8 = cVar1;
    func_0x000107c61654();
    func_0x000107c615e8(uVar6);
    FUN_103765578(unaff_x22 + 0x90);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1037803dc:
                    /* WARNING: Could not recover jumptable at 0x0001037803f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103780488; end: 103780747;  */

void FUN_103780488(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3f8);
  func_0x000107c61654();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  pcVar8 = *(char **)(unaff_x22 + 0x420);
  *(char **)(unaff_x22 + 0x3d8) = pcVar8;
  func_0x000107c614b0(pcVar8);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x2b9;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x3d8,uVar6,&UNK_11068f370,0);
  if ((int)lVar2 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 1000);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar6 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x138) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar11;
    FUN_10377cd3c(0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar6);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x2e1) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x2d9) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2c0),pcVar8,uVar6,lVar2);
    func_0x000107c61654();
    func_0x000107c615e8(uVar7);
    FUN_103765578(unaff_x22 + 0x90);
  }
  else {
    func_0x000107c614ac();
    cVar1 = *(char *)(unaff_x22 + 0x2b9);
    uVar6 = *(undefined8 *)(unaff_x22 + 1000);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
      func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
      uVar7 = puVar4[4];
      uVar10 = puVar4[7];
      uVar9 = puVar4[6];
      uVar14 = puVar4[1];
      uVar13 = *puVar4;
      uVar12 = puVar4[3];
      uVar11 = puVar4[2];
      *(undefined8 *)(unaff_x22 + 0x1b8) = puVar4[5];
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x1c8) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x1c0) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
      *(undefined8 *)(unaff_x22 + 400) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar11;
      FUN_10377cd3c(1);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0xb0);
      func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
      *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0x341) = *(undefined8 *)(unaff_x22 + 0xd9);
      *(undefined8 *)(unaff_x22 + 0x339) = *(undefined8 *)(unaff_x22 + 0xd1);
      (**(code **)(lVar2 + 8))((undefined8 *)(unaff_x22 + 800),uVar7,lVar2);
      func_0x000107c615e8(uVar6);
      FUN_103765578(unaff_x22 + 0x90);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10378069c;
    }
    FUN_103761768();
    puVar3 = &UNK_11068f370;
    pcVar5 = pcVar8;
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar5 = cVar1;
    puVar4 = (undefined8 *)(unaff_x22 + 0xe8);
    func_0x0001000a8868(puVar4,*(undefined8 *)(unaff_x22 + 0x100));
    uVar7 = puVar4[4];
    uVar10 = puVar4[7];
    uVar9 = puVar4[6];
    uVar14 = puVar4[1];
    uVar13 = *puVar4;
    uVar12 = puVar4[3];
    uVar11 = puVar4[2];
    *(undefined8 *)(unaff_x22 + 0x178) = puVar4[5];
    *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x158) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x150) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar11;
    FUN_10377cd3c(0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    func_0x0001000a8868(unaff_x22 + 0x90,uVar7);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x311) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x309) = *(undefined8 *)(unaff_x22 + 0xd1);
    (**(code **)(lVar2 + 0x10))((undefined8 *)(unaff_x22 + 0x2f0),puVar3,uVar7,lVar2);
    func_0x000107c614ac(puVar3);
    func_0x000107c613f8(&UNK_11068f370,pcVar8,0,0);
    *pcVar8 = cVar1;
    func_0x000107c61654();
    func_0x000107c615e8(uVar6);
    FUN_103765578(unaff_x22 + 0x90);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x3d8));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10378069c:
                    /* WARNING: Could not recover jumptable at 0x0001037806b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103780748; end: 103780787;  */

void FUN_103780748(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09d90;
  func_0x000107c61520(&UNK_10dc09d90,&UNK_110690e78);
  puRam0000000112f91558 = puVar1;
  return;
}



/* Entry: 103780788; end: 103780797;  */

long FUN_103780788(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103780798; end: 1037807af;  */

void FUN_103780798(long param_1)

{
  FUN_1037807b0(param_1 + 0x20);
  return;
}



/* Entry: 1037807b0; end: 1037807cf;  */

void FUN_1037807b0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001037807c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1037807d0; end: 103780813;  */

long FUN_1037807d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103780814; end: 1037808ff;  */

uint FUN_103780814(uint *param_1,int param_2)

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



/* Entry: 103780900; end: 10378095b;  */

long FUN_103780900(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10378095c; end: 103780a2b;  */

undefined8 * FUN_10378095c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c61174();
  (*pcVar1)(param_1 + 1,param_2 + 1,lVar2);
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103780a2c; end: 103780a87;  */

undefined8 * FUN_103780a2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  FUN_1037807b0(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 103780a88; end: 103780b2b;  */

int FUN_103780a88(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103780b2c; end: 103780b4f;  */

void FUN_103780b2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103780748();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103780b50; end: 103780b53;  */

void FUN_103780b50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09d68;
  func_0x000107c61520(&UNK_10dc09d68,&UNK_110690e78);
  puRam0000000112f91560 = puVar1;
  return;
}



/* Entry: 103780b54; end: 103780b93;  */

void FUN_103780b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09d68;
  func_0x000107c61520(&UNK_10dc09d68,&UNK_110690e78);
  puRam0000000112f91560 = puVar1;
  return;
}



/* Entry: 103780b94; end: 103780b9b;  */

void FUN_103780b94(long param_1)

{
  FUN_1037807b0(param_1 + 0x20);
  return;
}



/* Entry: 103780b9c; end: 103780def;  */

void FUN_103780b9c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar7 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    puVar3 = &UNK_110691030;
    func_0x000107c613fc(&UNK_110691030,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    func_0x000107c615bc(uVar7,puVar4,&UNK_11068f778,&UNK_10dc09e68,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = &UNK_110691058;
    func_0x000107c613fc(&UNK_110691058,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    func_0x000107c6157c(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar7,&uStack_b8,&UNK_11068f778,&UNK_10dc09e70,puVar3);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 103780df0; end: 103780e37;  */

void FUN_103780df0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ad6f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_103781d14();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110690928;
  *param_1 = puVar1;
  return;
}



/* Entry: 103780e38; end: 1037811ab;  */

long FUN_103780e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
  func_0x000107c613fc();
  pcVar1 = FUN_103780df0;
  func_0x0001000bdd8c(FUN_103780df0,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(code **)(unaff_x20 + 0x38) = pcVar1;
  func_0x0001000285a8(0x112de76c8,&UNK_10d9b24a0);
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = param_6;
  func_0x000107c3fb68();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112de76c0,&UNK_10d9b2490);
  uVar2 = param_7;
  func_0x000107c50958();
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x58) = &UNK_11068f4b8;
  *(undefined ***)(unaff_x20 + 0x60) = &PTR_DAT_11068f4d0;
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 1037811ac; end: 1037811c3;  */

undefined8 * FUN_1037811ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1037811c4; end: 1037813b7;  */

void FUN_1037811c4(void)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long alStack_80 [2];
  undefined1 auStack_70 [48];
  
  puVar1 = (ulong *)0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puVar1[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174();
  uVar3 = 0xd00000000000001e;
  func_0x0001000a9a18(0xd00000000000001e,0x800000010f164190);
  func_0x000107c61170();
  func_0x000107c30abc();
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar4);
    puVar5 = &UNK_110690fc8;
    func_0x000107c613fc(&UNK_110690fc8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar6 = &UNK_110690ff0;
    func_0x000107c613fc(&UNK_110690ff0,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    func_0x0001000abba4(0,0,auStack_70 + -extraout_x8,&UNK_10dc09dd8,puVar6);
  }
  else {
    puVar5 = &UNK_110690fc8;
    func_0x000107c613fc(&UNK_110690fc8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    *(undefined **)((long)alStack_80 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(3,0,100,4,0,0,&UNK_10dc09de8,puVar5);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c61574();
  func_0x000107c61428(puVar1,auStack_70,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1037813b8; end: 1037813cf;  */

void FUN_1037813b8(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037813d0,0,0);
  return;
}



/* Entry: 1037813d0; end: 103781593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037813d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x98) = lVar4;
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103781548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + _DAT_112fe20e0);
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  func_0x000107c61174();
  func_0x000107c44580();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + _DAT_112fe2098);
  *(undefined **)(unaff_x22 + 0x30) = &UNK_11068f240;
  *(undefined ***)(unaff_x22 + 0x38) = &PTR_DAT_11068f3a0;
  puVar1 = &UNK_110691080;
  func_0x000107c613fc(&UNK_110691080,0x48,7);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  FUN_1037617a8(lVar4 + 0x40,puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  uVar3 = *(ulong *)(*(long *)(lVar4 + 0x10) + _DAT_112fec058);
  if (uVar3 < 3) {
    plVar7 = (long *)0x430;
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_103781594;
    plVar7[0x7c] = unaff_x22 + 0x10;
    *(char *)((long)plVar7 + 0x2ba) = (char)(0x30200 >> (ulong)((uint)(uVar3 << 3) & 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10377fa48,0,0);
    return;
  }
  uVar2 = 0x112f91678;
  func_0x0001000285a8(0x112f91678,&UNK_10dc09e78);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdb99d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss27_diagnoseUnexpectedEnumCase4types5NeverOxm_tlF_11034ec80)(uVar2,uVar2);
  return;
}



/* Entry: 103781594; end: 1037815f7;  */

void FUN_103781594(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    FUN_103781ce0(lVar2 + 0x10);
    pcVar1 = FUN_103781d58;
  }
  else {
    pcVar1 = FUN_103781d58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1037815f8; end: 103781663;  */

void FUN_1037815f8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103781d64;
  plVar1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037813d0,0,0);
  return;
}



/* Entry: 103781664; end: 10378167b;  */

void FUN_103781664(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10378167c,0,0);
  return;
}


