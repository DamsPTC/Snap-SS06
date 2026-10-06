/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100406360; end: 100406653;  */

long FUN_100406360(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [112];
  undefined1 auStack_1b0 [112];
  undefined1 auStack_140 [112];
  undefined8 auStack_d0 [14];
  
  puVar2 = &UNK_10d98f2b0;
  func_0x000107c614e0();
  auStack_d0[0] = 0;
  puVar3 = puVar2;
  FUN_100406664();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10040288c(auStack_290,0x6874654d74697865,0xea0000000000646f,puVar2,0,0,&UNK_10187ec28,0,
                auStack_d0,PTR___swiftEmptyArrayStorage_11034f1c8,0,0,puVar3);
  puVar2 = &UNK_10d98f2d0;
  func_0x000107c614e0(&UNK_10d98f2d0);
  FUN_100402814(auStack_220,0xd000000000000010,0x800000010efbc5d0,puVar2,0,0,&UNK_10187ed18,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f2f0;
  func_0x000107c614e0(&UNK_10d98f2f0);
  FUN_100402814(auStack_1b0,0xd000000000000014,0x800000010efbc5f0,puVar2,0,0,&UNK_101880510,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f310;
  func_0x000107c614e0(&UNK_10d98f310);
  FUN_100402814(auStack_140,0xd000000000000013,0x800000010efbc610,puVar2,0,0,&UNK_10188052c,0,puVar1
                ,0,0);
  puVar2 = &UNK_10d98f330;
  func_0x000107c614e0(&UNK_10d98f330);
  lVar4 = -0x2fffffffffffffdf;
  FUN_100402814(auStack_d0,0xd000000000000021,0x800000010efbc630,puVar2,0,0,&UNK_101880548,0,puVar1,
                0,0);
  func_0x000100405ac8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xb;
  *(undefined8 *)(lVar4 + 0x10) = 5;
  uVar5 = 0x112dcc788;
  FUN_1000285a8(0x112dcc788,&UNK_10d98f350);
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = 0x112dcc768;
  FUN_1000285a8(0x112dcc768,&UNK_10d98f298);
  uVar6 = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  uVar6 = uVar5;
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  FUN_100401efc();
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  uVar5 = 0x112dcc790;
  FUN_1000285a8(0x112dcc790,&UNK_10d98f358);
  FUN_100401efc();
  FUN_100405aec(auStack_d0,0x112dcc790,&UNK_10d98f358);
  FUN_100405aec(auStack_140,0x112dcc768,&UNK_10d98f298);
  FUN_100405aec(auStack_1b0,0x112dcc768,&UNK_10d98f298);
  FUN_100405aec(auStack_220,0x112dcc768,&UNK_10d98f298);
  FUN_100405aec(auStack_290,0x112dcc788,&UNK_10d98f350);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  return lVar4;
}



/* Entry: 100406654; end: 100406663;  */

undefined1  [16] FUN_100406654(void)

{
  return ZEXT816(0x110798b90);
}



/* Entry: 100406664; end: 1004066a3;  */

void FUN_100406664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2a1b0;
  func_0x000107c61520(&UNK_10dd2a1b0,&UNK_110798b90);
  puRam0000000112dcc780 = puVar1;
  return;
}



/* Entry: 1004066a4; end: 10040695b;  */

long FUN_1004066a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [112];
  undefined1 auStack_140 [112];
  undefined8 auStack_d0 [14];
  
  puVar2 = &UNK_10d98f238;
  func_0x000107c614e0(&UNK_10d98f238);
  puVar3 = &UNK_11040a378;
  func_0x000107c613fc(&UNK_11040a378,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100402814(auStack_1b0,0xd000000000000014,0x800000010efbc5b0,puVar2,0,0,&UNK_1018804a0,puVar3,
                PTR___swiftEmptyArrayStorage_11034f1c8,0,0);
  puVar2 = &UNK_10d98f258;
  func_0x000107c614e0(&UNK_10d98f258);
  puVar3 = &UNK_11040a3a0;
  func_0x000107c613fc(&UNK_11040a3a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  auStack_d0[0] = 0;
  puVar4 = puVar3;
  FUN_100406998();
  func_0x000107c61580(param_2,2);
  FUN_10040288c(auStack_140,0x50746e6174736e69,0xef65707954656761,puVar2,0,0,&UNK_101880500,puVar3,
                auStack_d0,puVar1,0,0,puVar4);
  puVar2 = &UNK_10d98f278;
  func_0x000107c614e0(&UNK_10d98f278);
  puVar3 = &UNK_11040a3c8;
  func_0x000107c613fc(&UNK_11040a3c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  uStack_1b8 = 0;
  puVar4 = puVar3;
  FUN_1004069e8();
  func_0x000107c6157c(param_2);
  lVar5 = 0x54726573776f7262;
  FUN_100406a28(auStack_d0,0x54726573776f7262,0xeb00000000657079,puVar2,0,0,&UNK_101880508,puVar3,
                &uStack_1b8,1,puVar1,0,0,puVar4);
  func_0x000100405ac8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 7;
  *(undefined8 *)(lVar5 + 0x10) = 3;
  uVar6 = 0x112dcc768;
  FUN_1000285a8(0x112dcc768,&UNK_10d98f298);
  FUN_100401efc();
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  uVar6 = 0x112dcc770;
  FUN_1000285a8(0x112dcc770,&UNK_10d98f2a0);
  FUN_100401efc();
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  uVar6 = 0x112dcc778;
  FUN_1000285a8(0x112dcc778,&UNK_10d98f2a8);
  FUN_100401efc();
  FUN_100405aec(auStack_d0,0x112dcc778,&UNK_10d98f2a8);
  FUN_100405aec(auStack_140,0x112dcc770,&UNK_10d98f2a0);
  FUN_100405aec(auStack_1b0,0x112dcc768,&UNK_10d98f298);
  *(undefined8 *)(lVar5 + 0x30) = uVar6;
  return lVar5;
}



/* Entry: 10040695c; end: 10040697f;  */

void FUN_10040695c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100406980; end: 100406997;  */

void FUN_100406980(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100406998; end: 1004069d7;  */

void FUN_100406998(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd31b00;
  func_0x000107c61520(&UNK_10dd31b00,&UNK_11079dbc0);
  puRam0000000112dcc758 = puVar1;
  return;
}



/* Entry: 1004069d8; end: 1004069e7;  */

undefined1  [16] FUN_1004069d8(void)

{
  return ZEXT816(0x110798950);
}



/* Entry: 1004069e8; end: 100406a27;  */

void FUN_1004069e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd29db8;
  func_0x000107c61520(&UNK_10dd29db8,&UNK_110798950);
  puRam0000000112dcc760 = puVar1;
  return;
}



/* Entry: 100406a28; end: 100406b83;  */

void FUN_100406a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long extraout_x8;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_74 = (uint)param_10;
  uStack_98 = param_13;
  uStack_a0 = param_12;
  uStack_90 = param_14;
  lVar4 = *param_4;
  lVar7 = *(long *)(lVar4 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720 + 8);
  lVar5 = *(long *)(lVar7 + -8);
  lVar8 = *(long *)(lVar5 + 0x40);
  uStack_a8 = param_3;
  uStack_88 = param_7;
  uStack_80 = param_8;
  uStack_70 = param_5;
  uStack_68 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar8 + 0xfU & 0xfffffffffffffff0);
  pcVar3 = *(code **)(lVar5 + 0x20);
  (*pcVar3)(auStack_b0 + -extraout_x8,param_9,lVar7);
  uVar2 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_11040acf8;
  func_0x000107c613fc(&UNK_11040acf8,uVar6 + lVar8,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) =
       *(undefined8 *)(lVar4 + *(long *)PTR___ss15WritableKeyPathCMo_11034e720);
  *(long *)(puVar1 + 0x18) = lVar7;
  *(undefined8 *)(puVar1 + 0x20) = param_15;
  (*pcVar3)(puVar1 + uVar6,auStack_b0 + -extraout_x8,lVar7);
  *param_1 = param_2;
  param_1[1] = uStack_a8;
  param_1[2] = param_4;
  param_1[3] = uStack_88;
  param_1[4] = uStack_80;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[9] = &UNK_10188954c;
  param_1[10] = puVar1;
  *(char *)(param_1 + 0xb) = (char)uStack_74;
  param_1[0xc] = uStack_70;
  param_1[0xd] = uStack_68;
  return;
}



/* Entry: 100406b84; end: 100406bcb;  */

void FUN_100406b84(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100406bcc; end: 100406c3b;  */

void FUN_100406bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112dcc738 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dcc740;
  FUN_10002969c(0x112dcc740,&UNK_10d9907d0);
  uVar2 = uVar1;
  FUN_100406c3c();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112dcc738 = puVar3;
  return;
}



/* Entry: 100406c3c; end: 100406c7b;  */

void FUN_100406c3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce51f8;
  func_0x000107c61520(&UNK_10dce51f8,&UNK_110754ac0);
  puRam0000000112dcc748 = puVar1;
  return;
}



/* Entry: 100406c7c; end: 1004070cb;  */

ulong FUN_100406c7c(undefined *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar5 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar5 <= (long)puVar12) {
    puVar5 = puVar12;
  }
  uVar6 = 0;
  FUN_1004044f8(0,puVar5,0,PTR___swiftEmptyArrayStorage_11034f1c8,0x112dcbe78,&UNK_10d98ec40,
                0x112dcbe80,&UNK_10d98e4c0);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar12 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar14 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar5 == puVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004070a4);
          (*pcVar3)();
        }
        lVar15 = *(long *)(param_1 + (long)puVar5 * 8 + 0x20);
        if (*(long *)(param_2 + 0x10) == 0) {
          func_0x000107c6157c(lVar15);
        }
        else {
          uVar7 = *(ulong *)(lVar15 + 0x10);
          uVar10 = *(ulong *)(lVar15 + 0x18);
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
          func_0x000107c6157c(lVar15);
          puVar8 = auStack_a8;
          func_0x000107c5fb58(puVar8,uVar7,uVar10);
          func_0x000107c606a8();
          uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar13 = (ulong)puVar8 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar13 * 0x10);
              uVar9 = *puVar1;
              uVar2 = puVar1[1];
              if ((uVar9 == uVar7 && uVar2 == uVar10) ||
                 (func_0x000107c605b8(uVar9,uVar2,uVar7,uVar10,0), (uVar9 & 1) != 0))
              goto LAB_100406ef0;
              uVar13 = uVar13 + 1 & ~uVar11;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6157c(lVar15);
        uVar7 = uVar6;
        if (uVar6 >> 0x3e != 0) {
          uVar10 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar10 = uVar6;
          }
          func_0x000107c60480(uVar10);
          uVar7 = 0;
          FUN_1004044f8(0,uVar10 + 1,1,uVar6,0x112dcbe78,&UNK_10d98ec40,0x112dcbe80,&UNK_10d98e4c0);
        }
        uVar11 = uVar7 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar11 + 0x10);
        uVar6 = uVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar10) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1004044f8(uVar6,uVar10 + 1,1,uVar7,0x112dcbe78,&UNK_10d98ec40,0x112dcbe80,
                        &UNK_10d98e4c0);
          uVar11 = uVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
        *(long *)(uVar11 + uVar10 * 8 + 0x20) = lVar15;
LAB_100406ef0:
        puVar5 = puVar5 + 1;
        func_0x000107c61574(lVar15);
      } while (puVar5 != puVar12);
    }
    else {
      do {
        puVar14 = puVar5;
        func_0x00010178fd68(puVar5,param_1);
        bVar4 = SCARRY8((long)puVar5,1);
        puVar5 = puVar5 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1004070a0);
          (*pcVar3)();
        }
        if (*(long *)(param_2 + 0x10) != 0) {
          uVar7 = *(ulong *)(puVar14 + 0x10);
          uVar10 = *(ulong *)(puVar14 + 0x18);
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
          puVar8 = auStack_a8;
          func_0x000107c5fb58(puVar8,uVar7,uVar10);
          func_0x000107c606a8();
          uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar13 = (ulong)puVar8 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar13 * 0x10);
              uVar9 = *puVar1;
              uVar2 = puVar1[1];
              if ((uVar9 == uVar7 && uVar2 == uVar10) ||
                 (func_0x000107c605b8(uVar9,uVar2,uVar7,uVar10,0), (uVar9 & 1) != 0))
              goto LAB_100406d54;
              uVar13 = uVar13 + 1 & ~uVar11;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c615f0(puVar14);
        uVar7 = uVar6;
        if (uVar6 >> 0x3e != 0) {
          uVar10 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar10 = uVar6;
          }
          func_0x000107c60480(uVar10);
          uVar7 = 0;
          FUN_1004044f8(0,uVar10 + 1,1,uVar6,0x112dcbe78,&UNK_10d98ec40,0x112dcbe80,&UNK_10d98e4c0);
        }
        uVar11 = uVar7 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar11 + 0x10);
        uVar6 = uVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar10) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1004044f8(uVar6,uVar10 + 1,1,uVar7,0x112dcbe78,&UNK_10d98ec40,0x112dcbe80,
                        &UNK_10d98e4c0);
          uVar11 = uVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
        *(undefined **)(uVar11 + uVar10 * 8 + 0x20) = puVar14;
LAB_100406d54:
        func_0x000107c615e8(puVar14);
      } while (puVar5 != puVar12);
    }
  }
  return uVar6;
}



/* Entry: 1004070cc; end: 1004070db;  */

void FUN_1004070cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e654d60);
  return;
}



/* Entry: 1004070dc; end: 100407127;  */

void FUN_1004070dc(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = &UNK_10d98e908;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 100407128; end: 100407e9b;  */

long * FUN_100407128(undefined1 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar6 = 0;
  FUN_100401e7c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar7 = 0;
  func_0x000107c5fc6c(0,uVar6);
  lVar17 = param_2;
  lStack_78 = lVar7;
  func_0x000107c5fc7c(param_2,uVar6);
  if (lVar17 == 0) {
    func_0x000107c6142c(param_2);
    puVar11 = PTR___swiftEmptySetSingleton_11034f1d8;
    puVar16 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    lVar17 = 0;
    do {
      func_0x000107c5fc98(&uStack_c0,lVar17,param_2,uVar6);
      puVar11 = puStack_68;
      uVar3 = uStack_c0;
      bVar5 = SCARRY8(lVar17,1);
      lVar17 = lVar17 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100407438);
        (*pcVar4)();
      }
      if (*(long *)(puStack_68 + 0x10) != 0) {
        uVar14 = *(ulong *)(uStack_c0 + 0x10);
        uVar13 = *(ulong *)(uStack_c0 + 0x18);
        func_0x000107c6068c(&uStack_c0,*(undefined8 *)(puStack_68 + 0x28));
        puVar8 = &uStack_c0;
        func_0x000107c5fb58(puVar8,uVar14,uVar13);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
        uVar18 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar11 + (uVar18 >> 6) * 8 + 0x38) >> (uVar18 & 0x3f) & 1) != 0) {
          do {
            puVar8 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar18 * 0x10);
            uVar9 = *puVar8;
            uVar1 = puVar8[1];
            if ((uVar9 == uVar14 && uVar1 == uVar13) ||
               (func_0x000107c605b8(uVar9,uVar1,uVar14,uVar13,0), (uVar9 & 1) != 0))
            goto LAB_1004071a4;
            uVar18 = uVar18 + 1 & ~uVar12;
          } while ((*(ulong *)(puVar11 + (uVar18 >> 6) * 8 + 0x38) >> (uVar18 & 0x3f) & 1) != 0);
        }
      }
      puVar11 = puStack_70;
      uVar14 = *(ulong *)(uVar3 + 0x20);
      uStack_c0 = uVar14;
      if (((ulong)puStack_70 & 0xc000000000000001) == 0) {
        if (*(long *)(puStack_70 + 0x10) != 0) {
          uVar15 = 0;
          func_0x000107c60238(0);
          uVar14 = *(ulong *)(puVar11 + 0x28);
          func_0x000107c5fa4c(uVar14,uVar15,PTR___ss10AnyKeyPathCSHsWP_11034e2a8);
          uVar13 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
          uVar14 = uVar14 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              uStack_c8 = *(undefined8 *)(*(long *)(puVar11 + 0x30) + uVar14 * 8);
              puVar10 = &uStack_c8;
              func_0x000107c5fab8(puVar10,&uStack_c0,uVar15,PTR___ss10AnyKeyPathCSQsWP_11034e2b0);
              if (((ulong)puVar10 & 1) != 0) goto LAB_1004071a4;
              uVar14 = uVar14 + 1 & ~uVar13;
            } while ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
          }
        }
LAB_10040735c:
        uVar15 = *(undefined8 *)(uVar3 + 0x10);
        uVar2 = *(undefined8 *)(uVar3 + 0x18);
        func_0x000107c61434(uVar2);
        FUN_100403b00(&uStack_c0,uVar15,uVar2);
        func_0x000107c6142c(uStack_b8);
        uVar15 = *(undefined8 *)(uVar3 + 0x20);
        func_0x000107c6157c(uVar15);
        func_0x000100407660(&uStack_c0,uVar15);
        func_0x000107c61574(uStack_c0);
        uVar15 = 0;
        uStack_c0 = uVar3;
        func_0x000107c5fc80(0,uVar6);
        func_0x000107c5fc78(&uStack_c0,uVar15);
      }
      else {
        uVar13 = uVar14;
        func_0x000107c6157c();
        func_0x000107c602b0();
        func_0x000107c61574(uVar14);
        if ((uVar13 & 1) == 0) goto LAB_10040735c;
LAB_1004071a4:
        func_0x000107c61574(uVar3);
      }
      lVar7 = param_2;
      func_0x000107c5fc7c(param_2,uVar6);
    } while (lVar17 != lVar7);
    func_0x000107c6142c(param_2);
    puVar11 = puStack_68;
    lVar7 = lStack_78;
    puVar16 = puStack_70;
  }
  func_0x000107c6142c(puVar11);
  func_0x000107c6142c(puVar16);
  unaff_x20[2] = lVar7;
  *(undefined1 *)(unaff_x20 + 3) = param_1;
  return unaff_x20;
}



/* Entry: 100407e9c; end: 100407ebb;  */

void FUN_100407e9c(void)

{
  func_0x000107c61168(&PTR_PTR_112dcc8a8);
  return;
}



/* Entry: 100407ebc; end: 100408473;  */

void FUN_100407ebc(ulong param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (uVar17 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar18 = 0;
      do {
        puVar8 = puStack_68;
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100408408);
          (*pcVar5)();
        }
        lVar19 = *(long *)(param_1 + 0x20 + uVar18 * 8);
        if (*(long *)(puStack_68 + 0x10) == 0) {
          func_0x000107c6157c(lVar19);
        }
        else {
          uVar9 = *(ulong *)(lVar19 + 0x10);
          uVar15 = *(ulong *)(lVar19 + 0x18);
          func_0x000107c6068c(auStack_b8,*(undefined8 *)(puStack_68 + 0x28));
          func_0x000107c6157c(lVar19);
          puVar12 = auStack_b8;
          func_0x000107c5fb58(puVar12,uVar9,uVar15);
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar14 = (ulong)puVar12 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar14 * 0x10);
              uVar16 = *puVar1;
              uVar10 = puVar1[1];
              if ((uVar16 == uVar9 && uVar10 == uVar15) ||
                 (func_0x000107c605b8(uVar16,uVar10,uVar9,uVar15,0), (uVar16 & 1) != 0))
              goto LAB_1004081d8;
              uVar14 = uVar14 + 1 & ~uVar13;
            } while ((*(ulong *)(puVar8 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
          }
        }
        puVar8 = puStack_70;
        if (*(long *)(puStack_70 + 0x10) != 0) {
          uVar9 = *(ulong *)(lVar19 + 0x20);
          uVar15 = *(ulong *)(lVar19 + 0x28);
          func_0x000107c6068c(auStack_b8,*(undefined8 *)(puStack_70 + 0x28));
          puVar12 = auStack_b8;
          func_0x000107c5fb58(puVar12,uVar9,uVar15);
          func_0x000107c606a8();
          uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar14 = (ulong)puVar12 & (uVar13 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar14 * 0x10);
              uVar16 = *puVar1;
              uVar10 = puVar1[1];
              if ((uVar16 == uVar9 && uVar10 == uVar15) ||
                 (func_0x000107c605b8(uVar16,uVar10,uVar9,uVar15,0), (uVar16 & 1) != 0))
              goto LAB_1004081d8;
              uVar14 = uVar14 + 1 & ~uVar13;
            } while ((*(ulong *)(puVar8 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
          }
        }
        uVar2 = *(undefined8 *)(lVar19 + 0x10);
        uVar4 = *(undefined8 *)(lVar19 + 0x18);
        func_0x000107c61434(uVar4);
        FUN_100403b00(auStack_b8,uVar2,uVar4);
        func_0x000107c6142c(uStack_b0);
        uVar2 = *(undefined8 *)(lVar19 + 0x20);
        uVar4 = *(undefined8 *)(lVar19 + 0x28);
        func_0x000107c61434(uVar4);
        FUN_100403b00(auStack_b8,uVar2,uVar4);
        func_0x000107c6142c(uStack_b0);
        func_0x000107c6157c(lVar19);
        puVar8 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puVar11 < 0)) ||
           (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar7 = puVar11;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_100403da8(0,puVar7 + 1,1,puVar11);
        }
        uVar15 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar9 = *(ulong *)(uVar15 + 0x10);
        puVar11 = puVar8;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar9) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          FUN_100403da8(puVar11,uVar9 + 1,1,puVar8);
          uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar9 + 1;
        *(long *)(uVar15 + uVar9 * 8 + 0x20) = lVar19;
LAB_1004081d8:
        uVar18 = uVar18 + 1;
        func_0x000107c61574(lVar19);
      } while (uVar18 != uVar17);
    }
    else {
      uVar18 = 0;
      do {
        uVar9 = uVar18;
        func_0x00010178f6b0(uVar18,param_1);
        puVar8 = puStack_68;
        bVar6 = SCARRY8(uVar18,1);
        uVar18 = uVar18 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100408404);
          (*pcVar5)();
        }
        if (*(long *)(puStack_68 + 0x10) != 0) {
          uVar15 = *(ulong *)(uVar9 + 0x10);
          uVar13 = *(ulong *)(uVar9 + 0x18);
          func_0x000107c6068c(auStack_b8,*(undefined8 *)(puStack_68 + 0x28));
          puVar12 = auStack_b8;
          func_0x000107c5fb58(puVar12,uVar15,uVar13);
          func_0x000107c606a8();
          uVar14 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar16 = (ulong)puVar12 & (uVar14 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar16 * 0x10);
              uVar10 = *puVar1;
              uVar3 = puVar1[1];
              if ((uVar10 == uVar15 && uVar3 == uVar13) ||
                 (func_0x000107c605b8(uVar10,uVar3,uVar15,uVar13,0), (uVar10 & 1) != 0))
              goto LAB_100407f64;
              uVar16 = uVar16 + 1 & ~uVar14;
            } while ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
          }
        }
        puVar8 = puStack_70;
        if (*(long *)(puStack_70 + 0x10) != 0) {
          uVar15 = *(ulong *)(uVar9 + 0x20);
          uVar13 = *(ulong *)(uVar9 + 0x28);
          func_0x000107c6068c(auStack_b8,*(undefined8 *)(puStack_70 + 0x28));
          puVar12 = auStack_b8;
          func_0x000107c5fb58(puVar12,uVar15,uVar13);
          func_0x000107c606a8();
          uVar14 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar16 = (ulong)puVar12 & (uVar14 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar16 * 0x10);
              uVar10 = *puVar1;
              uVar3 = puVar1[1];
              if ((uVar10 == uVar15 && uVar3 == uVar13) ||
                 (func_0x000107c605b8(uVar10,uVar3,uVar15,uVar13,0), (uVar10 & 1) != 0))
              goto LAB_100407f64;
              uVar16 = uVar16 + 1 & ~uVar14;
            } while ((*(ulong *)(puVar8 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
          }
        }
        uVar2 = *(undefined8 *)(uVar9 + 0x10);
        uVar4 = *(undefined8 *)(uVar9 + 0x18);
        func_0x000107c61434(uVar4);
        FUN_100403b00(auStack_b8,uVar2,uVar4);
        func_0x000107c6142c(uStack_b0);
        uVar2 = *(undefined8 *)(uVar9 + 0x20);
        uVar4 = *(undefined8 *)(uVar9 + 0x28);
        func_0x000107c61434(uVar4);
        FUN_100403b00(auStack_b8,uVar2,uVar4);
        func_0x000107c6142c(uStack_b0);
        func_0x000107c6157c(uVar9);
        puVar8 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puVar11 < 0)) ||
           (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar7 = puVar11;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_100403da8(0,puVar7 + 1,1,puVar11);
        }
        uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar13 + 0x10);
        puVar11 = puVar8;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar15) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_100403da8(puVar11,uVar15 + 1,1,puVar8);
          uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar15 + 1;
        *(ulong *)(uVar13 + uVar15 * 8 + 0x20) = uVar9;
LAB_100407f64:
        func_0x000107c615e8(uVar9);
      } while (uVar18 != uVar17);
    }
  }
  func_0x000107c6142c(param_1);
  func_0x000107c6142c(puStack_70);
  func_0x000107c6142c(puStack_68);
  *(undefined **)(unaff_x20 + 0x10) = puVar11;
  return;
}



/* Entry: 100408474; end: 1004085b7;  */

void FUN_100408474(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    if (lRam00000001137f9018 != -1) {
      FUN_10002a2fc(0x1137f9018,&PTR___NSConcreteGlobalBlock_110d5b290);
    }
    if (cRam00000001137f9010 == '\x01') {
      puVar2 = PTR_PTR_1126bdbc0;
      func_0x000107c4d9f0();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) goto LAB_100408584;
      puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
      func_0x000107c45424();
      func_0x000107c57e2c();
      puVar2 = puVar1;
      func_0x000107c41478(puVar1);
      func_0x000107c61180();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      func_0x000107c610f4();
      func_0x000107c45424();
      func_0x000107c57e2c();
      puVar2 = puVar1;
      func_0x000107c41478();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR_PTR_1126bdbc0;
        func_0x000107c4d9f0(PTR_PTR_1126bdbc0);
        func_0x000107c61180();
      }
    }
    func_0x000107c61170(puVar1);
  }
LAB_100408584:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004085b8; end: 1004086b3; -[SCFideliusIdentityArchiveManager archiveIdentityV2] */

void FUN_1004085b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  puVar1 = &UNK_10f30ec75;
  FUN_1000ba800(&UNK_10f30ec75);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10040876c;
  pcStack_30 = FUN_100414d24;
  uStack_28 = 0;
  func_0x000107c4e530(*(undefined8 *)(param_1 + 8));
  uVar2 = puStack_48[5];
  func_0x000107c61174(uVar2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004086b4; end: 10040876b; -[SCQueuePerformer performAndWait:] */

/* WARNING: Possible PIC construction at 0x000100408754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010040874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100408758) */

void FUN_1004086b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c49be8();
  if (((int)lVar1 == 0) || (*(char *)(param_1 + 0x42) != '\x01')) {
    lVar1 = param_1;
    func_0x000107c4f7c0(param_1);
    func_0x000107c61180();
    func_0x000107c3becc(param_1);
    func_0x000107c61180();
    FUN_10006eaa4(lVar1,param_1);
  }
  else {
    func_0x000107c3becc();
    func_0x000107c61180();
    (**(code **)(param_1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10040876c; end: 10040877b;  */

void FUN_10040876c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10040877c; end: 1004087bb;  */

void FUN_10040877c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c3c514(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c61174(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004087bc; end: 10040889b; -[SCFideliusIdentityArchiveManager _setArchiveIdentityV2] */

/* WARNING: Possible PIC construction at 0x000100408818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100408844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010040881c) */
/* WARNING: Removing unreachable block (ram,0x000100408848) */
/* WARNING: Removing unreachable block (ram,0x000100408850) */
/* WARNING: Removing unreachable block (ram,0x00010040885c) */
/* WARNING: Removing unreachable block (ram,0x000100408864) */

void FUN_1004087bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_1000ba800(&UNK_10f30ed6c);
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    lVar1 = param_1;
    func_0x000107c3bd84();
    func_0x000107c61180();
    puVar2 = *(undefined **)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
  }
  else {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10040889c; end: 1004088d7; -[SCFideliusIdentityArchiveManager _loadIdentityV2] */

void FUN_10040889c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3bd78();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c3bd80(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004088d8; end: 10040897b; -[SCFideliusIdentityArchiveManager _loadIdentityFromArchiveV2] */

void FUN_1004088d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c0498;
  func_0x000107c61158(PTR_PTR_1126c0498);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bd040;
  func_0x000107c3b720(PTR_PTR_1126bd040);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754(puVar1,param_2,puVar2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10040897c; end: 1004089cf; +[SCFideliusIdentityArchiveManager _fideliusIdentityPathV2] */

void FUN_10040897c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004089d0; end: 100408a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004089d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dcef90) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112dcef98) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100408a54; end: 100408a9f;  */

void FUN_100408a54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100408aa0; end: 100408aa7;  */

void FUN_100408aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100408aa8; end: 100408afb;  */

void FUN_100408aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100408afc; end: 100408b03;  */

void FUN_100408afc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10021e828();
  func_0x000107c613fc();
  FUN_100408b78(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100408b04; end: 100408b77;  */

void FUN_100408b04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10021e828();
  func_0x000107c613fc();
  FUN_100408b78(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100408b78; end: 100408cd7;  */

void FUN_100408b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7c20;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100408cd8; end: 100408dbb; -[SCAdsCanOpenURLServiceProvider provide] */

void FUN_100408cd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b8e10;
  func_0x000107c610f4(PTR_PTR_1126b8e10);
  func_0x000107c45ccc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100408dbc; end: 100408e13; -[AdCanOpenURLServices initWithCanOpenURLProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100408dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11308cfc8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100408e14; end: 100408e3f;  */

void FUN_100408e14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100408e40; end: 100408e47;  */

void FUN_100408e40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100408e48; end: 100408e9b;  */

void FUN_100408e48(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100408e9c; end: 100408eaf;  */

void FUN_100408e9c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10022f71c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a7c18;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  uVar11 = uVar12;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar11 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb8b0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb9f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar11 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined8 *)(lVar1 + 0x50) = uVar11;
  *param_1 = lVar1;
  return;
}



/* Entry: 100408eb0; end: 1004093af;  */

void FUN_100408eb0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10022f71c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a7c18;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  uVar10 = uVar11;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar10 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb8b0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbb9f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar12;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(param_2 + 0x50) = uVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 1004093b0; end: 1004093b7;  */

void FUN_1004093b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004093b8; end: 10040940b;  */

void FUN_1004093b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040940c; end: 10040941f;  */

void FUN_10040940c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10022eec4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a7c28;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar11 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efbba30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  uVar10 = uVar11;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 100409420; end: 10040988f;  */

void FUN_100409420(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_10022eec4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a7c28;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar10 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efbba30);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 100409890; end: 100409897;  */

void FUN_100409890(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100409898; end: 1004098eb;  */

void FUN_100409898(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004098ec; end: 1004098fb;  */

void FUN_1004098ec(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022e2cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a7c38;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar9 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efbba50);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  uVar8 = uVar9;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 1004098fc; end: 100409c4b;  */

void FUN_1004098fc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022e2cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a7c38;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar8 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efbba50);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100409c4c; end: 100409ebf; -[SCSKOverlayServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100409c4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112723d1c;
    func_0x000107c61148();
  }
  lVar1 = lVar9;
  func_0x000107c3d28c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar9;
  func_0x000107c5b0cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = param_1;
  func_0x000107c5c634();
  func_0x000107c61180();
  lVar3 = lVar9;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar4 = PTR_PTR_1126b94c0;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112723d20;
    func_0x000107c61148(lVar9);
  }
  lVar5 = lVar9;
  func_0x000107c3d28c(lVar9);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c45568(puVar4,param_2,lVar6);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar9);
  puVar7 = PTR_PTR_1126b94c8;
  func_0x000107c610f4();
  func_0x000107c3ddbc(param_1);
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x000107c3ddc0();
  func_0x000107c61180();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10547cbbc;
  puStack_88 = &UNK_11088bc38;
  puVar8 = PTR_PTR_1126ae720;
  lStack_80 = lVar3;
  puStack_78 = puVar4;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a0);
  func_0x000107c61180();
  func_0x000107c45fbc(puVar7,param_2,puVar4,lVar9,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(param_1);
  puVar8 = PTR_PTR_1126b94d8;
  func_0x000107c610f4(PTR_PTR_1126b94d8);
  func_0x000107c4802c();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100409ec0; end: 100409f13;  */

undefined8 FUN_100409ec0(void)

{
  long *unaff_x20;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  FUN_100075034(auStack_60,FUN_1000ca6b0,auStack_50);
  return auStack_60[0];
}



/* Entry: 100409f14; end: 100409f9b; -[SCAdConfigProviderImpl skOverlayPreloadingConfig] */

void FUN_100409f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000107c3b7f4(param_1,param_2,&PTR____CFConstantStringClassReference_110ddc958,0);
  puVar2 = PTR_PTR_1126b8cb0;
  func_0x000107c610f4(PTR_PTR_1126b8cb0);
  func_0x000107c5b0c0(param_1);
  func_0x000107c61180();
  func_0x000107c48024(0x41300000,0,puVar2,param_2,2,uVar1,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100409f9c; end: 10040a00f; -[SCAdConfigProviderImpl _getBoolWithKey:defaultValue:] */

undefined8 FUN_100409f9c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(param_3);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  if (param_4 == 0) {
    func_0x000107c3ebdc();
  }
  else {
    func_0x000107c4dfc0();
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 10040a010; end: 10040a08f; -[SCAdConfigProviderImpl skOverlayBottomMargin] */

void FUN_10040a010(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x000107c5b108(PTR_PTR_1126b8ca8);
  if (ABS(param_1) <= 2.220446049250313e-16) {
    dVar1 = 0.0;
    func_0x000107c3b830(param_2,param_3,&PTR____CFConstantStringClassReference_110ddc998);
    if (ABS(dVar1) <= 2.220446049250313e-16) goto LAB_10040a084;
  }
  func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
LAB_10040a084:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10040a090; end: 10040a0cf; +[_TtC8AdTweaks16SCAdFormatTweaks skoBottomMargin] */

undefined8 FUN_10040a090(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x11304b550,auStack_38,0,0);
  return uRam000000011304b550;
}



/* Entry: 10040a0d0; end: 10040a13f; -[SCAdConfigProviderImpl _getDoubleWithKey:defaultValue:] */

double FUN_10040a0d0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(param_4);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  fVar2 = (float)param_1;
  func_0x000107c436f0(fVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  return (double)fVar2;
}



/* Entry: 10040a140; end: 10040a1b7; -[_TtC20AdConfigProviderImpl16AdConfigProvider floatValueForKey:defaultValue:] */

undefined8
FUN_10040a140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10040a1b8(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 10040a1b8; end: 10040a363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10040a1b8(ulong param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  uint auStack_68 [6];
  
  FUN_10006c804();
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar7 + 0x10) == 0) {
    ppuStack_70 = (undefined **)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    func_0x000107c61434(param_3);
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000107c61434(lVar7);
    lVar3 = param_2;
    uVar6 = param_3;
    func_0x000100029284(param_2);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      ppuStack_70 = (undefined **)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      puStack_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      FUN_10048eeb8(*(long *)(lVar7 + 0x38) + lVar3 * 0x28,&uStack_90);
      func_0x000107c6142c(lVar7);
    }
  }
  func_0x000107c614a8(auStack_68);
  uVar4 = 0x112dbe728;
  FUN_1000285a8(0x112dbe728,&UNK_10d979918);
  puVar1 = PTR___sSfN_11034ddf8;
  puVar5 = auStack_68;
  func_0x000107c6147c(puVar5,&uStack_90,uVar4,PTR___sSfN_11034ddf8,6);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10040a364(*(undefined8 *)(unaff_x20 + _DAT_112dbe730),param_2,param_3);
    puStack_78 = puVar1;
    ppuStack_70 = &PTR_DAT_110738340;
    uStack_90 = CONCAT44(uStack_90._4_4_,(int)param_1);
    func_0x000107c61428(unaff_x20 + lVar2,auStack_68,0x21,0);
    FUN_1003ff25c(&uStack_90,param_2,param_3);
    func_0x000107c614a8(auStack_68);
  }
  else {
    func_0x000107c6142c(param_3);
    param_1 = (ulong)auStack_68[0];
  }
  FUN_100070bfc();
  return param_1;
}



/* Entry: 10040a364; end: 10040a3bf;  */

undefined8
FUN_10040a364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c436e4(param_1,param_2);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10040a3c0; end: 10040a467; -[SCAdSKOverlayPreloadingConfig initWithPreloadWindowLevel:displayWindowLevel:maxNumberPreloadedOverlays:userDismissible:bottomMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a3c0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  *(undefined4 *)(param_3 + _DAT_113043ef0) = param_1;
  *(undefined4 *)(param_3 + _DAT_113043ef8) = param_2;
  *(undefined8 *)(param_3 + _DAT_113043f00) = param_5;
  *(undefined1 *)(param_3 + _DAT_113043f08) = param_6;
  *(undefined8 *)(param_3 + _DAT_113043f10) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_7);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10040a468; end: 10040a487; -[SCSKOverlayServiceProvider systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a468(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112723d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10040a488; end: 10040a4cf; -[_TtC13SCSystemScope13SCSystemScope window] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a488(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c61174();
  FUN_100083b20(&uStack_28);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 10040a4d0; end: 10040a543; -[SCSKOverlayConfigProvider initWithAdConfigProvider:] */

undefined1 * FUN_10040a4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8600;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10040a544; end: 10040a563; -[SCSKOverlayServiceProvider appImpressionService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a544(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112723d24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10040a564; end: 10040a583; -[_TtC21AppImpressionServices22SCAppImpressionService appImpressionTrackerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a564(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113068c28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10040a584; end: 10040a64f; -[SCSKOverlayFactory initWithConfigProvider:appImpressionTracker:backgroundWindow:] */

undefined1 *
FUN_10040a584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e8608;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10040a650; end: 10040a6bb; -[_TtC17SKOverlayServices17SKOverlayServices initWithPreloaderBuilder:] */

undefined * FUN_10040a650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110750210;
  func_0x000107c613fc(&UNK_110750210,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1041e0ffc;
  FUN_10040a6e0(&UNK_1041e0ffc,puVar1);
  func_0x000107c61574(puVar1);
  return puVar2;
}



/* Entry: 10040a6bc; end: 10040a6df;  */

void FUN_10040a6bc(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040a6e0; end: 10040a807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040a6e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113068630) = 0;
  lVar1 = _DAT_113068638;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  FUN_10040a830();
  func_0x000107c613fc();
  puVar3 = puVar2;
  FUN_10040a934();
  func_0x000107c61170(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar2 = &UNK_110750238;
  func_0x000107c613fc(&UNK_110750238,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  FUN_1000285a8(0x113068640,&UNK_10dce0e70);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  puVar3 = &UNK_1041e101c;
  FUN_1000bdd8c(&UNK_1041e101c,puVar2);
  *(undefined **)(unaff_x20 + _DAT_113068628) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040a808; end: 10040a82b;  */

void FUN_10040a808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040a82c; end: 10040a82f;  */

void FUN_10040a82c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040a830; end: 10040a84f;  */

void FUN_10040a830(void)

{
  func_0x000107c61168(&PTR_PTR_1130686a8);
  return;
}



/* Entry: 10040a850; end: 10040a933;  */

undefined * FUN_10040a850(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    FUN_1000285a8(0x113068508);
    puVar3 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar8 + -1);
      uVar7 = (ulong)bVar1;
      uVar9 = *puVar8;
      func_0x0001041e0630();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10040a930);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10040a934);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar8 = puVar8 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 10040a934; end: 10040ac23;  */

long FUN_10040a934(long param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10040a850();
  puVar15 = (ulong *)(unaff_x20 + 0x18);
  *puVar15 = (ulong)puVar4;
  *(long *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  lVar12 = 0;
  bVar11 = false;
  do {
    bVar1 = *(byte *)(lVar12 + 0x113068790);
    uVar16 = (ulong)bVar1;
    uVar6 = 0x736961725f6e6f6e;
    if (bVar1 != 1) {
      uVar6 = 0xd000000000000010;
    }
    uVar17 = 0xea00000000006465;
    if (bVar1 != 1) {
      uVar17 = 0x800000010f1ef0b0;
    }
    uStack_b0 = 0xd000000000000030;
    uStack_a8 = 0x800000010f1ef0d0;
    func_0x000107c5fb78(uVar6,uVar17);
    func_0x000107c6142c(uVar17);
    uVar6 = uStack_a8;
    uVar5 = uStack_b0;
    func_0x000107c5fadc(uStack_b0,uStack_a8);
    func_0x000107c6142c(uVar6);
    lVar12 = param_1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    if (lVar12 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      func_0x000107c60234(&uStack_b0,lVar12);
      func_0x000107c615e8(lVar12);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      FUN_10006e7f4(&uStack_90);
    }
    else {
      uVar6 = 0;
      uVar17 = uStack_a0;
      FUN_1002ed07c(0);
      puVar7 = &uStack_b8;
      func_0x000107c6147c(puVar7,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar6,6);
      uVar6 = uStack_b8;
      if (((ulong)puVar7 & 1) != 0) {
        func_0x000107c4223c(uStack_b8);
        func_0x000107c61170(uVar6);
        puVar10 = &uStack_90;
        func_0x000107c61428(puVar15,puVar10,0x21,0);
        uVar8 = *puVar15;
        func_0x000107c61558();
        uVar9 = (uint)uVar8;
        uVar14 = *puVar15;
        *puVar15 = 0x8000000000000000;
        uVar5 = uVar16;
        uStack_b0 = uVar14;
        func_0x0001041e0630();
        uVar13 = (ulong)~(uint)puVar10 & 1;
        lVar12 = *(long *)(uVar14 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(uVar14 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040ac10);
          (*pcVar3)();
        }
        if (*(long *)(uVar14 + 0x18) < lVar12) {
          func_0x0001041e0938(lVar12);
          func_0x0001041e0630();
          uVar5 = uVar16;
          if (((uint)puVar10 & 1) != (uVar9 & 1)) {
            func_0x000107c60624(&UNK_1107501f0);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040ac24);
            (*pcVar3)();
          }
        }
        else if ((uVar8 & 1) == 0) {
          func_0x0001041e07ec();
        }
        if (((ulong)puVar10 & 1) == 0) {
          lVar12 = uStack_b0 + (uVar5 >> 6) * 8;
          *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar5 & 0x3f);
          *(byte *)(*(long *)(uStack_b0 + 0x30) + uVar5) = bVar1;
          *(undefined8 *)(*(long *)(uStack_b0 + 0x38) + uVar5 * 8) = uVar17;
          if (SCARRY8(*(long *)(uStack_b0 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040ac14);
            (*pcVar3)();
          }
          *(long *)(uStack_b0 + 0x10) = *(long *)(uStack_b0 + 0x10) + 1;
        }
        else {
          *(undefined8 *)(*(long *)(uStack_b0 + 0x38) + uVar5 * 8) = uVar17;
        }
        *puVar15 = uStack_b0;
        func_0x000107c614a8(&uStack_90);
      }
    }
    lVar12 = 1;
    bVar2 = !bVar11;
    bVar11 = true;
  } while (bVar2);
  return unaff_x20;
}



/* Entry: 10040ac24; end: 10040ac67;  */

void FUN_10040ac24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040ac68; end: 10040ae6b; -[SCAdsInteractionServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040ac68(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112723b14;
    func_0x000107c61148();
  }
  lVar1 = lVar7;
  func_0x000107c3d28c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  func_0x000107c61144(auStack_68,param_1);
  puVar4 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10546fd88;
  puStack_80 = &UNK_11088b608;
  func_0x000107c6111c(auStack_70,auStack_68);
  lStack_78 = lVar1;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126b9408;
  func_0x000107c610f4(PTR_PTR_1126b9408);
  func_0x000107c455f0();
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10040ae6c; end: 10040af1b; -[_TtC21AdInteractionServices21AdInteractionServices initWithAdReportingInteractionHistoryTracker:adHidingInteractionHistoryTracker:adLifecycleTimestampsTracker:skOverlayLifecycleTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040ae6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113011668) = param_3;
  *(undefined8 *)(param_1 + _DAT_113011670) = param_4;
  *(undefined8 *)(param_1 + _DAT_113011678) = param_5;
  *(undefined8 *)(param_1 + _DAT_113011680) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 10040af1c; end: 10040af6f;  */

void FUN_10040af1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040af70; end: 10040b053; -[SCAdWebviewMetricsValidationServiceProvider provide] */

void FUN_10040af70(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b9428;
  func_0x000107c610f4(PTR_PTR_1126b9428);
  func_0x000107c477fc();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10040b054; end: 10040b0ab; -[_TtC36SCAdWebviewMetricsValidationServices36SCAdWebviewMetricsValidationServices initWithMetricsValidator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040b054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130116b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10040b0ac; end: 10040b107;  */

void FUN_10040b0ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040b108; end: 10040b10f;  */

void FUN_10040b108(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040b110; end: 10040b163;  */

void FUN_10040b110(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040b164; end: 10040b173;  */

void FUN_10040b164(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1001df080();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_10040b31c(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10040b39c();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10040b3e4();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10040b174; end: 10040b31b;  */

void FUN_10040b174(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1001df080();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_10040b31c(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10040b39c();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10040b3e4();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10040b31c; end: 10040b39b;  */

void FUN_10040b31c(undefined8 param_1)

{
  if (lRam0000000112dcfae8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6565b0);
  return;
}



/* Entry: 10040b39c; end: 10040b3e3;  */

void FUN_10040b39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 10040b3e4; end: 10040b51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10040b3e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113010a90);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  FUN_1000d224c(&uStack_38);
  func_0x000107c61574(uVar4);
  puVar1 = &UNK_11040d6f8;
  func_0x000107c613fc(&UNK_11040d6f8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11040d720;
  func_0x000107c613fc(&UNK_11040d720,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_38;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  FUN_1000285a8(0x112dcfab8,&UNK_10d991460);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c615f0(uStack_38);
  puVar1 = &UNK_1018d5050;
  FUN_1000bdd8c(&UNK_1018d5050,puVar2);
  uVar4 = 0;
  FUN_1001e01fc(0);
  func_0x000107c610f8();
  FUN_10040b754(puVar1,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(uStack_38);
  return puVar1;
}



/* Entry: 10040b51c; end: 10040b573;  */

void FUN_10040b51c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040b574; end: 10040b583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040b574(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [168];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  FUN_10040b584();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dd0648) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dd0650) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112dd0658) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dd0660) = uVar5;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112dd0668);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar1 = uVar13;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[5] = uVar10;
  puVar1[4] = uVar9;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar1[0xb] = *(undefined8 *)(unaff_x20 + 0x88);
  puVar1[10] = uVar9;
  puVar1[0xd] = uVar11;
  puVar1[0xc] = uVar10;
  puVar1[7] = uVar15;
  puVar1[6] = uVar14;
  puVar1[9] = uVar13;
  puVar1[8] = uVar12;
  uVar10 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x20 + 200);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  puVar1[0x14] = *(undefined8 *)(unaff_x20 + 0xd0);
  puVar1[0x11] = uVar12;
  puVar1[0x10] = uVar11;
  puVar1[0x13] = uVar14;
  puVar1[0x12] = uVar13;
  puVar1[0xf] = uVar10;
  puVar1[0xe] = uVar9;
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  FUN_1003cfac4((undefined8 *)(unaff_x20 + 0x30),auStack_108);
  plVar8 = &lStack_118;
  lStack_118 = lVar7;
  lStack_110 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10040b584; end: 10040b5a3;  */

void FUN_10040b584(void)

{
  func_0x000107c61168(&PTR_PTR_1127eb470);
  return;
}



/* Entry: 10040b5a4; end: 10040b6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040b5a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_118;
  long lStack_110;
  undefined1 auStack_108 [168];
  
  lVar2 = 0;
  FUN_10040b584();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dd0648) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dd0650) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dd0658) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dd0660) = param_5;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112dd0668);
  uVar8 = param_6[3];
  uVar7 = param_6[2];
  uVar6 = param_6[5];
  uVar5 = param_6[4];
  uVar9 = *param_6;
  puVar1[1] = param_6[1];
  *puVar1 = uVar9;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  uVar5 = param_6[10];
  uVar7 = param_6[0xd];
  uVar6 = param_6[0xc];
  uVar11 = param_6[7];
  uVar10 = param_6[6];
  uVar9 = param_6[9];
  uVar8 = param_6[8];
  puVar1[0xb] = param_6[0xb];
  puVar1[10] = uVar5;
  puVar1[0xd] = uVar7;
  puVar1[0xc] = uVar6;
  puVar1[7] = uVar11;
  puVar1[6] = uVar10;
  puVar1[9] = uVar9;
  puVar1[8] = uVar8;
  uVar6 = param_6[0xf];
  uVar5 = param_6[0xe];
  uVar8 = param_6[0x11];
  uVar7 = param_6[0x10];
  uVar10 = param_6[0x13];
  uVar9 = param_6[0x12];
  puVar1[0x14] = param_6[0x14];
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0x13] = uVar10;
  puVar1[0x12] = uVar9;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1003cfac4(param_6,auStack_108);
  plVar4 = &lStack_118;
  lStack_118 = lVar3;
  lStack_110 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10040b6c8; end: 10040b753;  */

void FUN_10040b6c8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040b754; end: 10040b79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040b754(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dd0140) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040b7a0; end: 10040b7e3;  */

void FUN_10040b7a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040b7e4; end: 10040b7eb;  */

void FUN_10040b7e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040b7ec; end: 10040b83f;  */

void FUN_10040b7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040b840; end: 10040b84b;  */

void FUN_10040b840(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10020d9b0();
  func_0x000107c613fc();
  FUN_10040b918(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040b84c; end: 10040b8df;  */

void FUN_10040b84c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10020d9b0();
  func_0x000107c613fc();
  FUN_10040b918(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}


