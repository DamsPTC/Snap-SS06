/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bfd974; end: 103bfd9ab; +[_TtC21AdDataModelExtensions18SCAdTypeExtensions stringForAdType:] */

void FUN_103bfd974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103bfd6b4(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bfd9ac; end: 103bfd9f7; +[_TtC21AdDataModelExtensions18SCAdTypeExtensions adTypeFromString:] */

long FUN_103bfd9ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  FUN_103bfdac0();
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 103bfd9f8; end: 103bfda03; +[_TtC21AdDataModelExtensions18SCAdTypeExtensions allAdTypes] */

void FUN_103bfd9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103bfe084();
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfda04; end: 103bfda0f; +[_TtC21AdDataModelExtensions18SCAdTypeExtensions allChatFeedAdTypes] */

void FUN_103bfda04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (*(code *)0x103bfe168)();
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfda10; end: 103bfda53;  */

void FUN_103bfda10(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (*param_3)();
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bfda54; end: 103bfda8f; -[_TtC21AdDataModelExtensions18SCAdTypeExtensions init] */

void FUN_103bfda54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103bfe300();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfda90; end: 103bfdabf;  */

void FUN_103bfda90(void)

{
  FUN_103bfe300();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfdac0; end: 103bfe083;  */

undefined8 FUN_103bfdac0(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0x17;
  }
  uVar2 = 0;
  if (((param_1 == 0x565f4545524854) && (param_2 == -0x1900000000000000)) ||
     (func_0x000107c605b8(0x565f4545524854,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
  {
    uVar1 = 0;
  }
  else {
    uVar2 = 0x54534e495f505041;
    if (((param_1 == 0x54534e495f505041) && (param_2 == -0x14ffffffffb3b3bf)) ||
       (func_0x000107c605b8(0x54534e495f505041,0xeb000000004c4c41,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x575f45544f4d4552) && (param_2 == -0x11ffbab8beafbdbb)) ||
         (func_0x000107c605b8(0x575f45544f4d4552,0xee00454741504245,param_1,param_2,0),
         (uVar2 & 1) != 0)) {
        uVar1 = 3;
      }
      else {
        uVar2 = 0x454352454d4d4f43;
        if (((param_1 == 0x454352454d4d4f43) && (param_2 == -0x13ffffffafbbafa1)) ||
           (func_0x000107c605b8(0x454352454d4d4f43,0xec0000005044505f,param_1,param_2,0),
           (uVar2 & 1) != 0)) {
          uVar1 = 0x15;
        }
        else {
          if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0e51fb0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010f1ae050,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0x59524f5453;
              if (((param_1 == 0x59524f5453) && (param_2 == -0x1b00000000000000)) ||
                 (func_0x000107c605b8(0x59524f5453,0xe500000000000000,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 5;
              }
              uVar2 = 0;
              if (((param_1 == 0x4c4c49465f4f4e) && (param_2 == -0x1900000000000000)) ||
                 (func_0x000107c605b8(0x4c4c49465f4f4e,0xe700000000000000,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 7;
              }
              uVar2 = 0x454c5f4f545f4441;
              if (((param_1 == 0x454c5f4f545f4441) && (param_2 == -0x15ffffffffffacb2)) ||
                 (func_0x000107c605b8(0x454c5f4f545f4441,0xea0000000000534e,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 9;
              }
              uVar2 = 0x495443454c4c4f43;
              if (((param_1 == 0x495443454c4c4f43) && (param_2 == -0x15ffffffffffb1b1)) ||
                 (func_0x000107c605b8(0x495443454c4c4f43,0xea00000000004e4f,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 10;
              }
              uVar2 = 0;
              if (((param_1 == 0x5241435f534e454c) && (param_2 == -0x12ffffb3baacaab1)) ||
                 (func_0x000107c605b8(0x5241435f534e454c,0xed00004c4553554f,param_1,param_2,0),
                 (uVar2 & 1) != 0)) {
                return 0xb;
              }
              uVar2 = 0;
              if (((param_1 != 0x435f5245544c4946) || (param_2 != -0x10b3baacaab0adbf)) &&
                 (func_0x000107c605b8(0x435f5245544c4946,0xef4c4553554f5241,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                uVar2 = 0x41435f4f545f4441;
                if (((param_1 == 0x41435f4f545f4441) && (param_2 == -0x15ffffffffffb3b4)) ||
                   (func_0x000107c605b8(0x41435f4f545f4441,0xea00000000004c4c,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 0xd;
                }
                uVar2 = 0x454d5f4f545f4441;
                if (((param_1 == 0x454d5f4f545f4441) && (param_2 == -0x12ffffbab8beacad)) ||
                   (func_0x000107c605b8(0x454d5f4f545f4441,0xed00004547415353,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 0xe;
                }
                uVar2 = 0x4c505f4f545f4441;
                if (((param_1 != 0x4c505f4f545f4441) || (param_2 != -0x14ffffffffbabcbf)) &&
                   (func_0x000107c605b8(0x4c505f4f545f4441,0xeb00000000454341,param_1,param_2,0),
                   (uVar2 & 1) == 0)) {
                  uVar2 = 0;
                  if (((param_1 == 0x4e45475f4441454c) && (param_2 == -0x10b1b0b6abbeadbb)) ||
                     (func_0x000107c605b8(0x4e45475f4441454c,0xef4e4f4954415245,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    return 0x10;
                  }
                  uVar2 = 0x45534143574f4853;
                  if (((param_1 == 0x45534143574f4853) && (param_2 == -0x1800000000000000)) ||
                     (func_0x000107c605b8(0x45534143574f4853,0xe800000000000000,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    return 0x11;
                  }
                  uVar2 = 0;
                  if (((param_1 != -0x2fffffffffffffe8) || (param_2 != -0x7ffffffef0e51fd0)) &&
                     (func_0x000107c605b8(0xd000000000000018,0x800000010f1ae030,param_1,param_2,0),
                     (uVar2 & 1) == 0)) {
                    uVar2 = 0x594556525553;
                    if (((param_1 != 0x594556525553) || (param_2 != -0x1a00000000000000)) &&
                       (func_0x000107c605b8(0x594556525553,0xe600000000000000,param_1,param_2,0),
                       (uVar2 & 1) == 0)) {
                      uVar2 = 0;
                      if (((param_1 != 0x5245444e494d4552) || (param_2 != -0x1800000000000000)) &&
                         (func_0x000107c605b8(0x5245444e494d4552,0xe800000000000000,param_1,param_2,
                                              0), (uVar2 & 1) == 0)) {
                        uVar2 = 0x5f44455845444e49;
                        if ((param_1 == 0x5f44455845444e49) && (param_2 == -0x12ffffa6adb0abad)) {
                          return 0x16;
                        }
                        func_0x000107c605b8(0x5f44455845444e49,0xed000059524f5453,param_1,param_2,0)
                        ;
                        if ((uVar2 & 1) != 0) {
                          return 0x16;
                        }
                        return 0x17;
                      }
                      return 0x14;
                    }
                    return 0x13;
                  }
                  return 0x12;
                }
                return 0xf;
              }
              return 0xc;
            }
          }
          uVar1 = 6;
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 103bfe084; end: 103bfe2ff;  */

undefined * FUN_103bfe084(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001002ecff4(0,0x10,0);
  lVar4 = 0;
  do {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    uVar1 = *(ulong *)(puVar2 + 0x10);
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      func_0x0001002ecff4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar3;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x80);
  return puVar2;
}



/* Entry: 103bfe300; end: 103bfe31f;  */

void FUN_103bfe300(void)

{
  func_0x000107c61168(&PTR_PTR_112945218);
  return;
}



/* Entry: 103bfe320; end: 103bfe367; +[_TtC21AdDataModelExtensions28SCAdWebBrowserTypeExtensions adWebBrowserTypeFromWebBrowserType:] */

undefined8 FUN_103bfe320(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_3 < 6) {
    return *(undefined8 *)(&UNK_10dc64b90 + param_3 * 8);
  }
  uStack_18 = param_3;
  func_0x000107c60614(&UNK_110792be8,&uStack_18,&UNK_110792be8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfe368);
  (*pcVar1)();
}



/* Entry: 103bfe368; end: 103bfe3a3; -[_TtC21AdDataModelExtensions28SCAdWebBrowserTypeExtensions init] */

void FUN_103bfe368(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103bfe3d4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfe3a4; end: 103bfe3f3;  */

void FUN_103bfe3a4(void)

{
  func_0x000103bfe3d4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfe3f4; end: 103bfe3f7;  */

undefined8 FUN_103bfe3f4(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 6) {
    return 2;
  }
  if ((param_3 - 0x56U < 0x10) && ((1 << (ulong)(param_3 - 0x56U & 0x1f) & 0x9001U) != 0)) {
    return 2;
  }
  uVar2 = 3;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_3 != 0x17) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 103bfe3f8; end: 103bfe40b; +[SCCtaTypeExtensions ngsCtaType:adProductType:viewLocation:] */

undefined8 FUN_103bfe3f8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 6) {
    return 2;
  }
  if ((param_5 - 0x56U < 0x10) && ((1 << (ulong)(param_5 - 0x56U & 0x1f) & 0x9001U) != 0)) {
    return 2;
  }
  uVar2 = 3;
  if (param_3 == 0) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_5 != 0x17) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 103bfe40c; end: 103bfe42b; +[SCCtaTypeExtensions isSpotlightVerticalSwipeUXWithCtaType:navigationStyle:] */

uint FUN_103bfe40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000103bfe800(param_3,param_4);
  return (uint)param_3 & 1;
}



/* Entry: 103bfe42c; end: 103bfe43b;  */

void FUN_103bfe42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar10 = 0x112dcbf08;
  uStack_80 = param_6;
  lStack_78 = param_7;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  lVar10 = 0x112db3cd8;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar7 + -extraout_x8_00;
  lVar10 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = (long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined1 *)(lVar10 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar14 - extraout_x12_00;
  lVar10 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar13 - extraout_x8_02;
  lVar10 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar11 - extraout_x8_03;
  lVar10 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar12 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    return;
  }
  uStack_9c = param_8;
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_68 = param_1;
  func_0x0001047c15e8(lVar12);
  lStack_90 = (long)*(int *)(lVar10 + 0x28);
  func_0x000103bffdd4(lVar12 + lStack_90,lVar13,0x112db3a00,&UNK_10d95dff0);
  lVar4 = 0;
  func_0x00010477ea9c();
  pcStack_98 = *(code **)(*(long *)(lVar4 + -8) + 0x30);
  lVar5 = lVar13;
  (*pcStack_98)(lVar13,1,lVar4);
  if ((int)lVar5 == 1) {
    uVar8 = 0x112db3a00;
    puVar9 = &UNK_10d95dff0;
    lVar11 = lVar13;
LAB_103bff7fc:
    func_0x000103bffe1c(lVar11,uVar8,puVar9);
    lVar11 = 0;
    func_0x0001047425ec();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar16,1,1,lVar11);
  }
  else {
    func_0x000103bffdd4(lVar13,lVar11,0x112db3ee8,&UNK_10d95e470);
    func_0x000103bffe5c(lVar13,&SUB_10477ea9c);
    lVar5 = 0;
    func_0x00010474425c();
    lVar13 = lVar11;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar11,1,lVar5);
    if ((int)lVar13 == 1) {
      uVar8 = 0x112db3ee8;
      puVar9 = &UNK_10d95e470;
      goto LAB_103bff7fc;
    }
    func_0x000103bffdd4(lVar11 + *(int *)(lVar5 + 0x24),lVar16,0x112db3fe8,&UNK_10d95e580);
    func_0x000103bffe5c(lVar11,&SUB_10474425c);
    lVar13 = 0;
    func_0x0001047425ec();
    lVar11 = lVar16;
    (**(code **)(*(long *)(lVar13 + -8) + 0x30))(lVar16,1,lVar13);
    if ((int)lVar11 != 1) {
      func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
      func_0x000107c61170(lStack_68);
      func_0x000103bffe1c(lVar16,0x112db3fe8,&UNK_10d95e580);
      return;
    }
  }
  func_0x000103bffe1c(lVar16,0x112db3fe8,&UNK_10d95e580);
  uVar15 = (uint)param_2;
  if (uVar15 == 1) {
    func_0x000103bffdd4(lVar12 + lStack_90,puVar14,0x112db3a00,&UNK_10d95dff0);
    puVar6 = puVar14;
    (*pcStack_98)(puVar14,1,lVar4);
    if ((int)puVar6 == 1) {
      uVar8 = 0x112db3a00;
      puVar9 = &UNK_10d95dff0;
      puVar17 = puVar14;
    }
    else {
      func_0x000103bffdd4(puVar14 + *(int *)(lVar4 + 0x14),puVar7,0x112dcbf08,&UNK_10d98e580);
      func_0x000103bffe5c(puVar14,&SUB_10477ea9c);
      lVar11 = 0;
      func_0x000104760f24();
      puVar14 = puVar7;
      (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar7,1,lVar11);
      if ((int)puVar14 == 1) {
        uVar8 = 0x112dcbf08;
        puVar9 = &UNK_10d98e580;
        puVar17 = puVar7;
      }
      else {
        func_0x000103bffdd4(puVar7 + *(int *)(lVar11 + 0x18),puVar17,0x112db3cd8,&UNK_10dd317d0);
        func_0x000103bffe5c(puVar7,&SUB_104760f24);
        lVar11 = 0;
        func_0x00010470fbcc();
        puVar7 = puVar17;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar17,1,lVar11);
        if ((int)puVar7 != 1) {
          cVar1 = puVar17[0x88];
          func_0x000103bffe5c(puVar17,&SUB_10470fbcc);
          if (cVar1 == '\x01') {
            func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
            func_0x000107c61170(lStack_68);
            return;
          }
          goto LAB_103bffa10;
        }
        uVar8 = 0x112db3cd8;
        puVar9 = &UNK_10dd317d0;
      }
    }
    func_0x000103bffe1c(puVar17,uVar8,puVar9);
  }
LAB_103bffa10:
  lVar10 = lVar12 + *(int *)(lVar10 + 0x70);
  if ((*(int *)(lVar10 + 0x18) == 5) ||
     ((*(uint *)(lVar10 + 0x48) < 5 &&
      ((1 << (ulong)(*(uint *)(lVar10 + 0x48) & 0x1f) & 0x1aU) != 0)))) {
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
    func_0x000107c61170(lStack_68);
  }
  else if ((*(int *)(lVar10 + 0x18) == 6) || (*(int *)(lVar10 + 0x78) == 1)) {
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
    func_0x000107c61170(lStack_68);
  }
  else {
    lVar10 = lVar12;
    FUN_103bfe43c();
    bVar3 = true;
    if ((int)uStack_70 != 6) {
      uVar2 = (int)uStack_80 - 0x56;
      if (((0xf < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x9001U) == 0)) &&
         ((int)uStack_80 != 0x17)) {
        bVar3 = false;
      }
    }
    if (((uVar15 < 0xb) && ((1 << (ulong)(uVar15 & 0x1f) & 0x44aU) != 0)) && (lVar10 != 0)) {
      lVar11 = lVar10;
      func_0x000107c61174();
      lVar13 = lVar11;
      func_0x000107c5c7e4();
      if (((int)lVar13 == 0x11) && (lStack_78 != 0)) {
        lVar16 = lStack_78;
        func_0x000107c49e98();
        func_0x000107c61170(lVar11);
        lVar13 = lStack_88;
        if ((int)lVar16 != 0) {
          func_0x000103bffdd4(lVar12 + lStack_90,lStack_88,0x112db3a00,&UNK_10d95dff0);
          lVar10 = lVar13;
          (*pcStack_98)(lVar13,1,lVar4);
          if ((int)lVar10 == 1) {
            func_0x000103bffe1c(lVar13,0x112db3a00,&UNK_10d95dff0);
          }
          else {
            func_0x000103bffe5c(lVar13,&SUB_10477ea9c);
          }
          func_0x000107c61174();
          lVar10 = lVar11;
          func_0x000107c5c7e4();
          if ((int)lVar10 == 0x11) {
            func_0x000107c49ad0();
          }
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lStack_68);
          func_0x000107c61170(lVar11);
          func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
          return;
        }
      }
      else {
        func_0x000107c61170(lVar11);
      }
    }
    lVar11 = lStack_68;
    if (bVar3) {
      func_0x000103bfeab4(lStack_68);
    }
    else {
      FUN_103bff374(lStack_68,param_2);
    }
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
  }
  return;
}



/* Entry: 103bfe43c; end: 103bfe643;  */

/* WARNING: Removing unreachable block (ram,0x000103bfe618) */

undefined8 FUN_103bfe43c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  ulong auStack_50 [2];
  
  lVar4 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)auStack_50 - extraout_x8;
  lVar4 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar8 - extraout_x8_00;
  lVar4 = 0;
  func_0x0001046d90b0();
  func_0x000103bffdd4(param_1 + *(int *)(lVar4 + 0x28),lVar8,0x112db3a00,&UNK_10d95dff0);
  lVar5 = 0;
  func_0x00010477ea9c();
  lVar4 = lVar8;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar8,1,lVar5);
  if ((int)lVar4 == 1) {
    func_0x000103bffe1c(lVar8,0x112db3a00,&UNK_10d95dff0);
  }
  else {
    func_0x000103bffdd4(lVar8,lVar7,0x112db3ee8,&UNK_10d95e470);
    func_0x000103bffe5c(lVar8,&SUB_10477ea9c);
    lVar5 = 0;
    func_0x00010474425c();
    lVar4 = lVar7;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar7,1,lVar5);
    if ((int)lVar4 == 1) {
      func_0x000103bffe1c(lVar7,0x112db3ee8,&UNK_10d95e470);
    }
    else {
      puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar5 + 0x34));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000100de78a0(uVar2,uVar3);
      func_0x000103bffe5c(lVar7,&SUB_10474425c);
      if (uVar3 >> 0x3c < 0xf) {
        func_0x000107c610f8(PTR_PTR_1126bdd18);
        uVar6 = uVar2;
        func_0x0001034baf6c(uVar2,uVar3);
        func_0x0001000b44c0(uVar2,uVar3);
        return uVar6;
      }
    }
  }
  return 0;
}



/* Entry: 103bfe644; end: 103bfe703; +[SCCtaTypeExtensions composerCtaType:adType:adProductType:adConfigProvider:adConfigProviderV2:viewLocation:dpaConfigProvider:isARExperience:] */

undefined8
FUN_103bfe644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_9);
  FUN_103bff52c(param_3,param_4,param_5,param_8,param_9,param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_9);
  return param_3;
}



/* Entry: 103bfe704; end: 103bfe73b; +[SCCtaTypeExtensions ctaSpotlightTypeFromAdSnap:] */

undefined8 FUN_103bfe704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103bfe810();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103bfe73c; end: 103bfe777; -[SCCtaTypeExtensions init] */

void FUN_103bfe73c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bfe778; end: 103bfe7ab;  */

void FUN_103bfe778(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bfe7ac; end: 103bfe80f;  */

undefined8 FUN_103bfe7ac(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 6) {
    return 2;
  }
  if ((param_3 - 0x56U < 0x10) && ((1 << (ulong)(param_3 - 0x56U & 0x1f) & 0x9001U) != 0)) {
    return 2;
  }
  uVar2 = 3;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if (param_3 != 0x17) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 103bfe810; end: 103bff373;  */

undefined8 FUN_103bfe810(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auStack_1a0 [8];
  long alStack_198 [39];
  
  lVar3 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_1a0 + -extraout_x8;
  lVar3 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar9 + -extraout_x8_00;
  lVar3 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_1);
  func_0x0001047c15e8(lVar6);
  func_0x000103bffdd4(lVar6 + *(int *)(lVar3 + 0x28),puVar9,0x112db3a00,&UNK_10d95dff0);
  lVar3 = 0;
  func_0x00010477ea9c();
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
    uVar8 = 0x112db3a00;
    puVar5 = &UNK_10d95dff0;
    puVar7 = puVar9;
LAB_103bfe9c4:
    func_0x000103bffe1c(puVar7,uVar8,puVar5);
  }
  else {
    func_0x000103bffdd4(puVar9,puVar7,0x112db3ee8,&UNK_10d95e470);
    func_0x000103bffe5c(puVar9,&SUB_10477ea9c);
    lVar3 = 0;
    func_0x00010474425c();
    puVar4 = puVar7;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar7,1,lVar3);
    if ((int)puVar4 == 1) {
      uVar8 = 0x112db3ee8;
      puVar5 = &UNK_10d95e470;
      goto LAB_103bfe9c4;
    }
    func_0x000107c610b4(alStack_198,puVar7 + *(int *)(lVar3 + 0x68),0x133);
    func_0x000103bffe5c(puVar7,&SUB_10474425c);
    iVar2 = (int)alStack_198;
    FUN_103bffd74();
    if (iVar2 != 1) {
      if (2 < alStack_198[0]) {
        if (alStack_198[0] == 3) {
          uVar8 = 4;
        }
        else if (alStack_198[0] == 4) {
          uVar8 = 5;
        }
        else {
          if (alStack_198[0] != 5) goto LAB_103bfea94;
          uVar8 = 6;
        }
        goto LAB_103bfe9cc;
      }
      if (alStack_198[0] != 0) {
        if (alStack_198[0] == 1) {
          uVar8 = 2;
        }
        else {
          if (alStack_198[0] != 2) {
LAB_103bfea94:
            func_0x0001000285a8(0x112ff71e8,&UNK_10dc64bf8);
            func_0x000107c605b4();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103bfeab4);
            (*pcVar1)();
          }
          uVar8 = 3;
        }
        goto LAB_103bfe9cc;
      }
    }
  }
  uVar8 = 1;
LAB_103bfe9cc:
  func_0x000103bffe5c(lVar6,&SUB_1046d90b0);
  return uVar8;
}



/* Entry: 103bff374; end: 103bff52b;  */

undefined4 FUN_103bff374(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined1 *puVar5;
  
  lVar2 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174(param_1);
  func_0x0001047c15e8(lVar4);
  if ((param_2 < 0x16) && ((1 << (ulong)(param_2 & 0x1f) & 0x31004aU) != 0)) {
    func_0x000103bffdd4(lVar4 + *(int *)(lVar2 + 0x28),puVar5,0x112db3a00,&UNK_10d95dff0);
    lVar2 = 0;
    func_0x00010477ea9c();
    puVar3 = puVar5;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar5,1,lVar2);
    if ((int)puVar3 == 1) {
      func_0x000103bffe1c(puVar5,0x112db3a00,&UNK_10d95dff0);
    }
    else {
      iVar1 = *(int *)(puVar5 + *(int *)(lVar2 + 0x1c));
      func_0x000103bffe5c(puVar5,&SUB_10477ea9c);
      if (iVar1 == 2) {
        iVar1 = *(int *)(lVar4 + 0x18);
        func_0x000103bffe5c(lVar4,&SUB_1046d90b0);
        if (iVar1 == 6) {
          return 2;
        }
        return 0;
      }
    }
    func_0x000103bffe5c(lVar4,&SUB_1046d90b0);
    return 2;
  }
  func_0x000103bffe5c(lVar4,&SUB_1046d90b0);
  if (param_2 != 10) {
    return 0;
  }
  return 3;
}



/* Entry: 103bff52c; end: 103bffd53;  */

void FUN_103bff52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar10 = 0x112dcbf08;
  uStack_80 = param_4;
  lStack_78 = param_5;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112dcbf08,&UNK_10d98e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  lVar10 = 0x112db3cd8;
  func_0x0001000285a8(0x112db3cd8,&UNK_10dd317d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar7 + -extraout_x8_00;
  lVar10 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = (long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_88 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined1 *)(lVar10 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar14 - extraout_x12_00;
  lVar10 = 0x112db3ee8;
  func_0x0001000285a8(0x112db3ee8,&UNK_10d95e470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar13 - extraout_x8_02;
  lVar10 = 0x112db3fe8;
  func_0x0001000285a8(0x112db3fe8,&UNK_10d95e580);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar11 - extraout_x8_03;
  lVar10 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar12 = lVar16 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    return;
  }
  uStack_9c = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_68 = param_1;
  func_0x0001047c15e8(lVar12);
  lStack_90 = (long)*(int *)(lVar10 + 0x28);
  func_0x000103bffdd4(lVar12 + lStack_90,lVar13,0x112db3a00,&UNK_10d95dff0);
  lVar4 = 0;
  func_0x00010477ea9c();
  pcStack_98 = *(code **)(*(long *)(lVar4 + -8) + 0x30);
  lVar5 = lVar13;
  (*pcStack_98)(lVar13,1,lVar4);
  if ((int)lVar5 == 1) {
    uVar8 = 0x112db3a00;
    puVar9 = &UNK_10d95dff0;
    lVar11 = lVar13;
LAB_103bff7fc:
    func_0x000103bffe1c(lVar11,uVar8,puVar9);
    lVar11 = 0;
    func_0x0001047425ec();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar16,1,1,lVar11);
  }
  else {
    func_0x000103bffdd4(lVar13,lVar11,0x112db3ee8,&UNK_10d95e470);
    func_0x000103bffe5c(lVar13,&SUB_10477ea9c);
    lVar5 = 0;
    func_0x00010474425c();
    lVar13 = lVar11;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar11,1,lVar5);
    if ((int)lVar13 == 1) {
      uVar8 = 0x112db3ee8;
      puVar9 = &UNK_10d95e470;
      goto LAB_103bff7fc;
    }
    func_0x000103bffdd4(lVar11 + *(int *)(lVar5 + 0x24),lVar16,0x112db3fe8,&UNK_10d95e580);
    func_0x000103bffe5c(lVar11,&SUB_10474425c);
    lVar13 = 0;
    func_0x0001047425ec();
    lVar11 = lVar16;
    (**(code **)(*(long *)(lVar13 + -8) + 0x30))(lVar16,1,lVar13);
    if ((int)lVar11 != 1) {
      func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
      func_0x000107c61170(lStack_68);
      func_0x000103bffe1c(lVar16,0x112db3fe8,&UNK_10d95e580);
      return;
    }
  }
  func_0x000103bffe1c(lVar16,0x112db3fe8,&UNK_10d95e580);
  uVar15 = (uint)param_2;
  if (uVar15 == 1) {
    func_0x000103bffdd4(lVar12 + lStack_90,puVar14,0x112db3a00,&UNK_10d95dff0);
    puVar6 = puVar14;
    (*pcStack_98)(puVar14,1,lVar4);
    if ((int)puVar6 == 1) {
      uVar8 = 0x112db3a00;
      puVar9 = &UNK_10d95dff0;
      puVar17 = puVar14;
    }
    else {
      func_0x000103bffdd4(puVar14 + *(int *)(lVar4 + 0x14),puVar7,0x112dcbf08,&UNK_10d98e580);
      func_0x000103bffe5c(puVar14,&SUB_10477ea9c);
      lVar11 = 0;
      func_0x000104760f24();
      puVar14 = puVar7;
      (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar7,1,lVar11);
      if ((int)puVar14 == 1) {
        uVar8 = 0x112dcbf08;
        puVar9 = &UNK_10d98e580;
        puVar17 = puVar7;
      }
      else {
        func_0x000103bffdd4(puVar7 + *(int *)(lVar11 + 0x18),puVar17,0x112db3cd8,&UNK_10dd317d0);
        func_0x000103bffe5c(puVar7,&SUB_104760f24);
        lVar11 = 0;
        func_0x00010470fbcc();
        puVar7 = puVar17;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(puVar17,1,lVar11);
        if ((int)puVar7 != 1) {
          cVar1 = puVar17[0x88];
          func_0x000103bffe5c(puVar17,&SUB_10470fbcc);
          if (cVar1 == '\x01') {
            func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
            func_0x000107c61170(lStack_68);
            return;
          }
          goto LAB_103bffa10;
        }
        uVar8 = 0x112db3cd8;
        puVar9 = &UNK_10dd317d0;
      }
    }
    func_0x000103bffe1c(puVar17,uVar8,puVar9);
  }
LAB_103bffa10:
  lVar10 = lVar12 + *(int *)(lVar10 + 0x70);
  if ((*(int *)(lVar10 + 0x18) == 5) ||
     ((*(uint *)(lVar10 + 0x48) < 5 &&
      ((1 << (ulong)(*(uint *)(lVar10 + 0x48) & 0x1f) & 0x1aU) != 0)))) {
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
    func_0x000107c61170(lStack_68);
  }
  else if ((*(int *)(lVar10 + 0x18) == 6) || (*(int *)(lVar10 + 0x78) == 1)) {
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
    func_0x000107c61170(lStack_68);
  }
  else {
    lVar10 = lVar12;
    FUN_103bfe43c();
    bVar3 = true;
    if ((int)uStack_70 != 6) {
      uVar2 = (int)uStack_80 - 0x56;
      if (((0xf < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x9001U) == 0)) &&
         ((int)uStack_80 != 0x17)) {
        bVar3 = false;
      }
    }
    if (((uVar15 < 0xb) && ((1 << (ulong)(uVar15 & 0x1f) & 0x44aU) != 0)) && (lVar10 != 0)) {
      lVar11 = lVar10;
      func_0x000107c61174();
      lVar13 = lVar11;
      func_0x000107c5c7e4();
      if (((int)lVar13 == 0x11) && (lStack_78 != 0)) {
        lVar16 = lStack_78;
        func_0x000107c49e98();
        func_0x000107c61170(lVar11);
        lVar13 = lStack_88;
        if ((int)lVar16 != 0) {
          func_0x000103bffdd4(lVar12 + lStack_90,lStack_88,0x112db3a00,&UNK_10d95dff0);
          lVar10 = lVar13;
          (*pcStack_98)(lVar13,1,lVar4);
          if ((int)lVar10 == 1) {
            func_0x000103bffe1c(lVar13,0x112db3a00,&UNK_10d95dff0);
          }
          else {
            func_0x000103bffe5c(lVar13,&SUB_10477ea9c);
          }
          func_0x000107c61174();
          lVar10 = lVar11;
          func_0x000107c5c7e4();
          if ((int)lVar10 == 0x11) {
            func_0x000107c49ad0();
          }
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lStack_68);
          func_0x000107c61170(lVar11);
          func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
          return;
        }
      }
      else {
        func_0x000107c61170(lVar11);
      }
    }
    lVar11 = lStack_68;
    if (bVar3) {
      func_0x000103bfeab4(lStack_68);
    }
    else {
      FUN_103bff374(lStack_68,param_2);
    }
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000103bffe5c(lVar12,&SUB_1046d90b0);
  }
  return;
}



/* Entry: 103bffd54; end: 103bffd73;  */

void FUN_103bffd54(void)

{
  func_0x000107c61168(&PTR_PTR_112945378);
  return;
}



/* Entry: 103bffd74; end: 103bffd8f;  */

int FUN_103bffd74(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x9b)) {
    iVar1 = (*(byte *)(param_1 + 0x9b) + 0x7ffffffe & 0x7fffffff) + 1;
  }
  return iVar1;
}



/* Entry: 103bffd90; end: 103bffedb;  */

undefined8 FUN_103bffd90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104754770();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103bffedc; end: 103bfff1f; -[SCDeepLinkUriFormatter adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103bffedc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff71f0;
  func_0x000107c61428(param_1 + _DAT_112ff71f0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 103bfff20; end: 103bfff6f; -[SCDeepLinkUriFormatter setAdType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfff20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff71f0;
  func_0x000107c61428(param_1 + _DAT_112ff71f0,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103bfff70; end: 103bfffb7; -[SCDeepLinkUriFormatter bottomMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfff70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff71f8;
  func_0x000107c61428(param_1 + _DAT_112ff71f8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103bfffb8; end: 103c0001b; -[SCDeepLinkUriFormatter setBottomMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bfffb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff71f8;
  func_0x000107c61428(param_1 + _DAT_112ff71f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103c0001c; end: 103c00093; -[SCDeepLinkUriFormatter serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0001c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff7200);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c00094; end: 103c0010b; -[SCDeepLinkUriFormatter setServeItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c00094(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112ff7200);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 103c0010c; end: 103c00173; -[SCDeepLinkUriFormatter eventIdMacro] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0010c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff7208);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103c00174; end: 103c001db; -[SCDeepLinkUriFormatter setEventIdMacro:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c00174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff7208);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103c001dc; end: 103c003bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c001dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ff71f8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff71f8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7200);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ff7208);
  *puVar2 = 0x544e4556457e2e7e;
  puVar2[1] = 0xee007e2e7e44495f;
  *(undefined8 *)(unaff_x20 + _DAT_112ff71f0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_2;
  func_0x000107c61428(puVar1,auStack_80,1,0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c003bc; end: 103c0042b; -[SCDeepLinkUriFormatter initWithAdType:bottomMedia:serveItemId:] */

void FUN_103c003bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_4);
  func_0x000103c002cc(param_3,param_4,param_5,param_2);
  return;
}



/* Entry: 103c0042c; end: 103c0080b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c0042c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  undefined8 extraout_x13;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auVar16 [16];
  long alStack_110 [4];
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  long *plStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_f0 + -extraout_x8;
  lVar3 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar15 - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5ec24();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  if (param_2 != (long *)0x0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7208);
    puVar4 = puVar1;
    uStack_b8 = extraout_x13;
    lStack_b0 = lVar10;
    puStack_70 = param_1;
    plStack_68 = param_2;
    func_0x000107c61428(puVar1,auStack_88,0,0);
    uStack_98 = *puVar1;
    uStack_90 = puVar1[1];
    func_0x000100e8b654();
    func_0x000107c61434(param_2);
    puVar5 = &uStack_98;
    func_0x000107c6022c(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x000107c5ec14(lVar12,param_1,param_2);
      lVar6 = lVar12;
      (**(code **)(lVar14 + 0x30))(lVar12,1,lVar3);
      lVar13 = lStack_b0;
      if ((int)lVar6 == 1) {
        FUN_103c00be4(lVar12,0x112d4b5b0,&UNK_10d912140);
      }
      else {
        lVar6 = lStack_b0;
        puStack_e0 = param_1;
        puStack_d8 = puVar4;
        (**(code **)(lVar14 + 0x20))(lStack_b0,lVar12,lVar3);
        FUN_103c0080c();
        uVar2 = uStack_b8;
        uVar9 = uStack_b8;
        lStack_d0 = lVar14;
        lStack_c8 = lVar3;
        (**(code **)(lVar14 + 0x10))(uStack_b8,lVar13,lVar3);
        func_0x000107c5ebc4();
        uVar7 = uVar9;
        lStack_e8 = lVar6;
        lStack_c0 = lVar12;
        FUN_103c0097c();
        func_0x000107c6142c(uVar9);
        func_0x000107c5ebc8(uVar7);
        func_0x000107c5ebe8(puVar15);
        lVar14 = 0;
        func_0x000107c5ede0();
        lVar13 = *(long *)(lVar14 + -8);
        uVar9 = 1;
        puVar8 = puVar15;
        (**(code **)(lVar13 + 0x30))(puVar15,1,lVar14);
        lVar12 = lStack_c8;
        lVar3 = lStack_d0;
        if ((int)puVar8 == 1) {
          func_0x000107c6142c(lStack_c0);
          lVar3 = lStack_c8;
          pcVar11 = *(code **)(lStack_d0 + 8);
          (*pcVar11)(uVar2,lStack_c8);
          (*pcVar11)(lStack_b0,lVar3);
          FUN_103c00be4(puVar15,0x112d36580,&UNK_10d9016d0);
          param_1 = puStack_e0;
        }
        else {
          func_0x000107c5ed70();
          func_0x000107c6142c(param_2);
          (**(code **)(lVar13 + 8))(puVar15,lVar14);
          lVar14 = lStack_c0;
          puVar4 = puStack_d8;
          uStack_98 = *puVar1;
          uVar2 = puVar1[1];
          uStack_90 = uVar2;
          puStack_70 = (undefined8 *)puVar8;
          plStack_68 = (long *)uVar9;
          if (lStack_c0 == 0) {
            func_0x000107c61434(uVar2);
            lStack_a8 = 0;
            lVar13 = -0x2000000000000000;
          }
          else {
            lStack_a8 = lStack_e8;
            lVar13 = lStack_c0;
            func_0x000107c5fb1c();
            func_0x000107c61434(uVar2);
            func_0x000107c6142c(lVar14);
          }
          lStack_a0 = lVar13;
          *(undefined8 **)(lVar10 + -0x10) = puVar4;
          *(undefined8 **)(lVar10 + -8) = puVar4;
          param_1 = &uStack_98;
          param_2 = &lStack_a8;
          *(undefined8 **)(lVar10 + -0x18) = puVar4;
          *(undefined **)(lVar10 + -0x20) = PTR___sSSN_11034da80;
          func_0x000107c601fc(param_1,param_2,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(lVar13);
          pcVar11 = *(code **)(lVar3 + 8);
          (*pcVar11)(uStack_b8,lVar12);
          (*pcVar11)(lStack_b0,lVar12);
          func_0x000107c6142c(uVar9);
        }
      }
    }
  }
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 103c0080c; end: 103c0097b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103c0080c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar8 = _DAT_112ff71f8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff71f8,auStack_48,0,0);
  lVar6 = _DAT_112ff71f0;
  if (((*(long *)(unaff_x20 + lVar8) == 0) ||
      (lVar8 = *(long *)(*(long *)(unaff_x20 + lVar8) + _DAT_113090fe0), lVar8 == 0)) ||
     (lVar8 = *(long *)(lVar8 + _DAT_11308fd30), lVar8 == 0)) {
    iVar9 = 0;
    bVar5 = false;
  }
  else {
    iVar9 = *(int *)(lVar8 + _DAT_11308fde0);
    bVar5 = true;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112ff71f0,auStack_60,0,0);
  iVar7 = (int)*(ulong *)(unaff_x20 + lVar6);
  bVar2 = false;
  if (iVar7 == 10) {
    bVar2 = bVar5;
  }
  bVar3 = false;
  if (iVar9 == 6) {
    bVar3 = bVar2;
  }
  bVar4 = false;
  if (iVar9 == 3) {
    bVar4 = bVar2;
  }
  if ((*(ulong *)(unaff_x20 + lVar6) & 0xffffffff) == 10) {
    if (bVar5) {
      if ((((iVar7 != 3 && iVar7 != 6) && !bVar3) && !bVar4) && (iVar9 != 0x11)) {
LAB_103c00920:
        uVar10 = 0;
        uVar11 = 0;
        goto LAB_103c00960;
      }
    }
    else if (iVar7 != 3 && iVar7 != 6) goto LAB_103c00920;
  }
  else if (((iVar7 != 3 && iVar7 != 6) && !bVar3) && !bVar4) goto LAB_103c00920;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff7200);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  func_0x000107c61434(uVar11);
LAB_103c00960:
  auVar12._8_8_ = uVar11;
  auVar12._0_8_ = uVar10;
  return auVar12;
}



/* Entry: 103c0097c; end: 103c00be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c0097c(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uStack_a0;
  uint uStack_94;
  code *pcStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ebbc();
  lStack_88 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  uVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 != 0) {
    lVar12 = *(long *)(param_1 + 0x10);
    puVar1 = (ulong *)(unaff_x20 + _DAT_112ff7208);
    func_0x000107c61428(puVar1,auStack_80,0,0);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar12 != 0) {
      uStack_a0 = (ulong)*(byte *)(lStack_88 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lStack_88 + 0x50) ^ 0xffffffffffffffff);
      lVar13 = *(long *)(lStack_88 + 0x48);
      uVar9 = param_1 + uStack_a0;
      pcStack_90 = *(code **)(lStack_88 + 0x10);
      uVar4 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar4 = param_3 >> 0x38 & 0xf;
      }
      uStack_94 = (uint)(param_3 == 0 || uVar4 == 0);
      do {
        uVar4 = uVar8;
        uVar5 = uVar9;
        (*pcStack_90)(uVar8,uVar9,lVar3);
        func_0x000107c5ebb8();
        uVar2 = uVar4;
        uVar7 = uVar5;
        if (uVar5 == 0) {
LAB_103c00ad4:
          uVar5 = uVar2;
          uVar11 = 0;
        }
        else if (uVar4 == *puVar1 && uVar5 == puVar1[1]) {
          func_0x000107c6142c();
          uVar11 = uStack_94;
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c();
          uVar2 = uVar5;
          uVar11 = uStack_94;
          if ((uVar4 & 1) == 0) goto LAB_103c00ad4;
        }
        func_0x000107c5ebb4();
        if (uVar5 == *puVar1 && uVar7 == puVar1[1]) {
          func_0x000107c6142c(uVar7);
LAB_103c00a68:
          (**(code **)(lStack_88 + 8))(uVar8,lVar3);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c(uVar7);
          if (((uVar11 | (uint)uVar5) & 1) != 0) goto LAB_103c00a68;
          puVar6 = puVar10;
          func_0x000107c61558();
          puStack_68 = puVar10;
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000103094ed4(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar4 = *(ulong *)(puStack_68 + 0x10);
          if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar4) {
            func_0x000103094ed4(1 < *(ulong *)(puStack_68 + 0x18),uVar4 + 1,1);
          }
          puVar10 = puStack_68;
          *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
          (**(code **)(lStack_88 + 0x20))(puStack_68 + uVar4 * lVar13 + uStack_a0,uVar8,lVar3);
        }
        uVar9 = uVar9 + lVar13;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (*(long *)(puVar10 + 0x10) != 0) {
      return puVar10;
    }
    func_0x000107c61574(puVar10);
  }
  return (undefined *)0x0;
}



/* Entry: 103c00be4; end: 103c00c23;  */

undefined8 FUN_103c00be4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c00c24; end: 103c00cc3; -[SCDeepLinkUriFormatter format:] */

void FUN_103c00c24(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  lVar1 = param_2;
  FUN_103c0042c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c00cc4; end: 103c00de3; +[SCDeepLinkUriFormatter formatDeepLinkUri:adType:bottomMedia:serveItemId:] */

void FUN_103c00cc4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c614ec();
  if (param_3 == 0) {
    param_3 = 0;
    lVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c610f8(param_1);
  func_0x000107c61434(param_2);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000103c002cc(param_4,param_5,param_6,param_2);
  lVar3 = lVar1;
  FUN_103c0042c(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(lVar1);
  if (lVar3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar3);
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c00de4; end: 103c00e43; -[SCDeepLinkUriFormatter init] */

void FUN_103c00de4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdDataModelExtensions.DeepLinkUriFormatter",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c00e10);
  (*pcVar1)();
}



/* Entry: 103c00e44; end: 103c00e93; -[SCDeepLinkUriFormatter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c00e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c00e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c00e44(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff71f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff7200 + 8))
  ;
  return;
}



/* Entry: 103c00e94; end: 103c00ecf;  */

void FUN_103c00e94(void)

{
  func_0x000107c61168(&PTR_PTR_112945428);
  return;
}



/* Entry: 103c00ed0; end: 103c00fcf;  */

undefined * FUN_103c00ed0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c00fd0);
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
    puVar3 = (undefined *)0x112dcc620;
    func_0x0001000285a8(0x112dcc620,&UNK_10dc64c20);
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
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103c00fd0; end: 103c010a7;  */

void FUN_103c00fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd1f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae740;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd1f50 = puVar1;
  return;
}



/* Entry: 103c010a8; end: 103c01137; +[_TtC21AdDataModelExtensions23SCDpaItemTypeExtensions composerSupportedItemTypes] */

void FUN_103c010a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  FUN_103c00fd0(0);
  uVar1 = 0x112ff7238;
  func_0x0001000285a8(0x112ff7238,&UNK_10dc64c30);
  func_0x000107c61538();
  uVar2 = 0x112ff7240;
  uStack_38 = uVar1;
  func_0x0001000285a8(0x112ff7240,&UNK_10dc64c38);
  uVar1 = uVar2;
  func_0x000103c01014();
  uVar3 = uVar1;
  func_0x000103c01064();
  FUN_103c024b4(&uStack_38,uVar2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c01138; end: 103c01173; -[_TtC21AdDataModelExtensions23SCDpaItemTypeExtensions init] */

void FUN_103c01138(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103c011a4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c01174; end: 103c015a3;  */

void FUN_103c01174(void)

{
  func_0x000103c011a4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c015a4; end: 103c015a7;  */

undefined8 FUN_103c015a4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0x656e6f6e || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656e6f6e,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x64726163) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0x64726163;
        func_0x000107c605b8(0x64726163,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != 0x79617274) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0;
            func_0x000107c605b8(0x79617274,0xe400000000000000,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0;
              if (((param_1 == 0x6e6f74747562) && (param_2 == -0x1a00000000000000)) ||
                 (func_0x000107c605b8(0x6e6f74747562,0xe600000000000000,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 4;
              }
              if ((param_1 != 0x64697267) || (param_2 != -0x1c00000000000000)) {
                uVar1 = 0x64697267;
                func_0x000107c605b8(0x64697267,0xe400000000000000,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0;
                  if (((param_1 == 0x735f6d6f74746f62) && (param_2 == -0x13ffffff8b9a9a98)) ||
                     (func_0x000107c605b8(0x735f6d6f74746f62,0xec00000074656568,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 6;
                  }
                  uVar1 = 0;
                  if (((param_1 == 0x63695f646e617262) && (param_2 == -0x15ffffffffff9191)) ||
                     (func_0x000107c605b8(0x63695f646e617262,0xea00000000006e6f,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 7;
                  }
                  uVar1 = 0xd000000000000011;
                  if (((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51da0)) ||
                     (uVar2 = uVar1,
                     func_0x000107c605b8(0xd000000000000011,0x800000010f1ae260,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 8;
                  }
                  uVar2 = 0;
                  if (((param_1 == 0x676e6974616f6c66) && (param_2 == -0x12ffff9393968fa1)) ||
                     (func_0x000107c605b8(0x676e6974616f6c66,0xed00006c6c69705f,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 9;
                  }
                  uVar2 = 0x6565665f74616863;
                  if (((param_1 == 0x6565665f74616863) && (param_2 == -0x11ff93939a9ca09c)) ||
                     (func_0x000107c605b8(0x6565665f74616863,0xee006c6c65635f64,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 10;
                  }
                  uVar2 = 0;
                  if (((param_1 == -0x2fffffffffffffe6) && (param_2 == -0x7ffffffef0e51dc0)) ||
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae240,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xb;
                  }
                  uVar2 = 0x647261635f646e65;
                  if (((param_1 == 0x647261635f646e65) && (param_2 == -0x1800000000000000)) ||
                     (uVar3 = uVar2,
                     func_0x000107c605b8(0x647261635f646e65,0xe800000000000000,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xc;
                  }
                  if (((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51de0)) ||
                     (func_0x000107c605b8(0xd000000000000011,0x800000010f1ae220,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xd;
                  }
                  uVar1 = 0;
                  if (((param_1 == 0x6c6f6f745f706174) && (param_2 == -0x14ffffffff8f968c)) ||
                     (func_0x000107c605b8(0x6c6f6f745f706174,0xeb00000000706974,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xe;
                  }
                  uVar1 = 0x7474615f74616863;
                  if (((param_1 == 0x7474615f74616863) && (param_2 == -0x108b919a92979c9f)) ||
                     (func_0x000107c605b8(0x7474615f74616863,0xef746e656d686361,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xf;
                  }
                  uVar1 = 0xd000000000000013;
                  if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0f4d140)) ||
                     (uVar3 = uVar1,
                     func_0x000107c605b8(0xd000000000000013,0x800000010f0b2ec0,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x12;
                  }
                  uVar3 = 0;
                  if (((param_1 == 0x656c626179616c70) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x656c626179616c70,0xec0000006174635f,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x10;
                  }
                  if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0e51e00)) ||
                     (func_0x000107c605b8(0xd000000000000013,0x800000010f1ae200,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x11;
                  }
                  if (((param_1 == 0x647261635f646e65) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x647261635f646e65,0xec0000006174635f,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x13;
                  }
                  uVar1 = 0x5f6e6f6974706163;
                  if (((param_1 != 0x5f6e6f6974706163) || (param_2 != -0x14ffffffff9e8b9d)) &&
                     (func_0x000107c605b8(0x5f6e6f6974706163,0xeb00000000617463,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0xd000000000000019;
                    if (((param_1 == -0x2fffffffffffffe7) && (param_2 == -0x7ffffffef0e51e20)) ||
                       (func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1e0,param_1,param_2,0)
                       , (uVar1 & 1) != 0)) {
                      func_0x000107c6142c(param_2);
                      return 0x15;
                    }
                    if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0e51e40)) {
                      uVar1 = 0;
                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae1c0,param_1,param_2,0);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = 0x5f72656b63697473;
                        if (((param_1 == 0x5f72656b63697473) && (param_2 == -0x14ffffffff9e8b9d)) ||
                           (func_0x000107c605b8(0x5f72656b63697473,0xeb00000000617463,param_1,
                                                param_2,0), (uVar1 & 1) != 0)) {
                          func_0x000107c6142c(param_2);
                          return 0x17;
                        }
                        if ((param_1 != -0x2fffffffffffffe7) || (param_2 != -0x7ffffffef0e51e60)) {
                          uVar1 = 0xd000000000000019;
                          func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1a0,param_1,param_2,
                                              0);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = 0;
                            if (((param_1 == -0x2fffffffffffffee) &&
                                (param_2 == -0x7ffffffef0e51e80)) ||
                               (uVar2 = uVar1,
                               func_0x000107c605b8(0xd000000000000012,0x800000010f1ae180,param_1,
                                                   param_2,0), (uVar2 & 1) != 0)) {
                              func_0x000107c6142c(param_2);
                              return 0x19;
                            }
                            if ((param_1 != -0x2fffffffffffffe6) || (param_2 != -0x7ffffffef0e51ea0)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae160,param_1,
                                                  param_2,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_1 != -0x2fffffffffffffec) ||
                                   (param_2 != -0x7ffffffef0fa1ad0)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000014,0x800000010f05e530,param_1,
                                                      param_2,0);
                                  if ((uVar2 & 1) == 0) {
                                    if (((param_1 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ec0)) ||
                                       (uVar2 = uVar1,
                                       func_0x000107c605b8(0xd000000000000012,0x800000010f1ae140,
                                                           param_1,param_2,0), (uVar2 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1b;
                                    }
                                    if (((param_1 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ee0)) ||
                                       (func_0x000107c605b8(0xd000000000000012,0x800000010f1ae120,
                                                            param_1,param_2,0), (uVar1 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1c;
                                    }
                                    if ((param_1 != -0x2fffffffffffffec) ||
                                       (param_2 != -0x7ffffffef0e51f00)) {
                                      uVar1 = 0;
                                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae100,
                                                          param_1,param_2,0);
                                      if ((uVar1 & 1) == 0) {
                                        if ((param_1 != -0x2fffffffffffffec) ||
                                           (param_2 != -0x7ffffffef0e51f20)) {
                                          uVar1 = 0;
                                          func_0x000107c605b8(0xd000000000000014,0x800000010f1ae0e0,
                                                              param_1,param_2,0);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = 0;
                                            if (((param_1 == -0x2fffffffffffffea) &&
                                                (param_2 == -0x7ffffffef0e51f40)) ||
                                               (func_0x000107c605b8(0xd000000000000016,
                                                                    0x800000010f1ae0c0,param_1,
                                                                    param_2,0), (uVar1 & 1) != 0)) {
                                              func_0x000107c6142c(param_2);
                                              return 0x1f;
                                            }
                                            uVar1 = 0;
                                            if (((param_1 != -0x2fffffffffffffe4) ||
                                                (param_2 != -0x7ffffffef0e51f60)) &&
                                               (func_0x000107c605b8(0xd00000000000001c,
                                                                    0x800000010f1ae0a0,param_1,
                                                                    param_2,0), (uVar1 & 1) == 0)) {
                                              uVar1 = 0;
                                              if (((param_1 != 0x7665725f6576696c) ||
                                                  (param_2 != -0x14ffffffff889a97)) &&
                                                 (func_0x000107c605b8(0x7665725f6576696c,
                                                                      0xeb00000000776569,param_1,
                                                                      param_2,0), (uVar1 & 1) == 0))
                                              {
                                                uVar1 = 0;
                                                if ((param_1 == -0x2ffffffffffffff0) &&
                                                   (param_2 == -0x7ffffffef0f616b0)) {
                                                  func_0x000107c6142c(0x800000010f09e950);
                                                  return 0x23;
                                                }
                                                func_0x000107c605b8(0xd000000000000010,
                                                                    0x800000010f09e950,param_1,
                                                                    param_2,0);
                                                func_0x000107c6142c(param_2);
                                                if ((uVar1 & 1) != 0) {
                                                  return 0x23;
                                                }
                                                return 0;
                                              }
                                              func_0x000107c6142c(param_2);
                                              return 0x21;
                                            }
                                            func_0x000107c6142c(param_2);
                                            return 0x20;
                                          }
                                        }
                                        func_0x000107c6142c(param_2);
                                        return 0x1e;
                                      }
                                    }
                                    func_0x000107c6142c(param_2);
                                    return 0x1d;
                                  }
                                }
                                func_0x000107c6142c(param_2);
                                return 0x1a;
                              }
                            }
                            func_0x000107c6142c(param_2);
                            return 0x22;
                          }
                        }
                        func_0x000107c6142c(param_2);
                        return 0x18;
                      }
                    }
                    func_0x000107c6142c(param_2);
                    return 0x16;
                  }
                  func_0x000107c6142c(param_2);
                  return 0x14;
                }
              }
              func_0x000107c6142c(param_2);
              return 5;
            }
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 1;
}



/* Entry: 103c015a8; end: 103c015df; +[_TtC21AdDataModelExtensions31SCTapAttachmentSourceExtensions debugDescriptionFromTapSource:] */

void FUN_103c015a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000103c011c4(param_3);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c015e0; end: 103c015f7; +[_TtC21AdDataModelExtensions31SCTapAttachmentSourceExtensions tapSourceFromDebugDescription:] */

undefined8 FUN_103c015e0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c5faec();
  if (param_3 != 0x656e6f6e || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656e6f6e,0xe400000000000000,param_3,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_3 != 0x64726163) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0x64726163;
        func_0x000107c605b8(0x64726163,0xe400000000000000,param_3,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_3 != 0x79617274) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0;
            func_0x000107c605b8(0x79617274,0xe400000000000000,param_3,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0;
              if (((param_3 == 0x6e6f74747562) && (param_2 == -0x1a00000000000000)) ||
                 (func_0x000107c605b8(0x6e6f74747562,0xe600000000000000,param_3,param_2,0),
                 (uVar1 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 4;
              }
              if ((param_3 != 0x64697267) || (param_2 != -0x1c00000000000000)) {
                uVar1 = 0x64697267;
                func_0x000107c605b8(0x64697267,0xe400000000000000,param_3,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0;
                  if (((param_3 == 0x735f6d6f74746f62) && (param_2 == -0x13ffffff8b9a9a98)) ||
                     (func_0x000107c605b8(0x735f6d6f74746f62,0xec00000074656568,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 6;
                  }
                  uVar1 = 0;
                  if (((param_3 == 0x63695f646e617262) && (param_2 == -0x15ffffffffff9191)) ||
                     (func_0x000107c605b8(0x63695f646e617262,0xea00000000006e6f,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 7;
                  }
                  uVar1 = 0xd000000000000011;
                  if (((param_3 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51da0)) ||
                     (uVar2 = uVar1,
                     func_0x000107c605b8(0xd000000000000011,0x800000010f1ae260,param_3,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 8;
                  }
                  uVar2 = 0;
                  if (((param_3 == 0x676e6974616f6c66) && (param_2 == -0x12ffff9393968fa1)) ||
                     (func_0x000107c605b8(0x676e6974616f6c66,0xed00006c6c69705f,param_3,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 9;
                  }
                  uVar2 = 0x6565665f74616863;
                  if (((param_3 == 0x6565665f74616863) && (param_2 == -0x11ff93939a9ca09c)) ||
                     (func_0x000107c605b8(0x6565665f74616863,0xee006c6c65635f64,param_3,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 10;
                  }
                  uVar2 = 0;
                  if (((param_3 == -0x2fffffffffffffe6) && (param_2 == -0x7ffffffef0e51dc0)) ||
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae240,param_3,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xb;
                  }
                  uVar2 = 0x647261635f646e65;
                  if (((param_3 == 0x647261635f646e65) && (param_2 == -0x1800000000000000)) ||
                     (uVar3 = uVar2,
                     func_0x000107c605b8(0x647261635f646e65,0xe800000000000000,param_3,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xc;
                  }
                  if (((param_3 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51de0)) ||
                     (func_0x000107c605b8(0xd000000000000011,0x800000010f1ae220,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xd;
                  }
                  uVar1 = 0;
                  if (((param_3 == 0x6c6f6f745f706174) && (param_2 == -0x14ffffffff8f968c)) ||
                     (func_0x000107c605b8(0x6c6f6f745f706174,0xeb00000000706974,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xe;
                  }
                  uVar1 = 0x7474615f74616863;
                  if (((param_3 == 0x7474615f74616863) && (param_2 == -0x108b919a92979c9f)) ||
                     (func_0x000107c605b8(0x7474615f74616863,0xef746e656d686361,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xf;
                  }
                  uVar1 = 0xd000000000000013;
                  if (((param_3 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0f4d140)) ||
                     (uVar3 = uVar1,
                     func_0x000107c605b8(0xd000000000000013,0x800000010f0b2ec0,param_3,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x12;
                  }
                  uVar3 = 0;
                  if (((param_3 == 0x656c626179616c70) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x656c626179616c70,0xec0000006174635f,param_3,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x10;
                  }
                  if (((param_3 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0e51e00)) ||
                     (func_0x000107c605b8(0xd000000000000013,0x800000010f1ae200,param_3,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x11;
                  }
                  if (((param_3 == 0x647261635f646e65) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x647261635f646e65,0xec0000006174635f,param_3,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x13;
                  }
                  uVar1 = 0x5f6e6f6974706163;
                  if (((param_3 != 0x5f6e6f6974706163) || (param_2 != -0x14ffffffff9e8b9d)) &&
                     (func_0x000107c605b8(0x5f6e6f6974706163,0xeb00000000617463,param_3,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0xd000000000000019;
                    if (((param_3 == -0x2fffffffffffffe7) && (param_2 == -0x7ffffffef0e51e20)) ||
                       (func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1e0,param_3,param_2,0)
                       , (uVar1 & 1) != 0)) {
                      func_0x000107c6142c(param_2);
                      return 0x15;
                    }
                    if ((param_3 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0e51e40)) {
                      uVar1 = 0;
                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae1c0,param_3,param_2,0);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = 0x5f72656b63697473;
                        if (((param_3 == 0x5f72656b63697473) && (param_2 == -0x14ffffffff9e8b9d)) ||
                           (func_0x000107c605b8(0x5f72656b63697473,0xeb00000000617463,param_3,
                                                param_2,0), (uVar1 & 1) != 0)) {
                          func_0x000107c6142c(param_2);
                          return 0x17;
                        }
                        if ((param_3 != -0x2fffffffffffffe7) || (param_2 != -0x7ffffffef0e51e60)) {
                          uVar1 = 0xd000000000000019;
                          func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1a0,param_3,param_2,
                                              0);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = 0;
                            if (((param_3 == -0x2fffffffffffffee) &&
                                (param_2 == -0x7ffffffef0e51e80)) ||
                               (uVar2 = uVar1,
                               func_0x000107c605b8(0xd000000000000012,0x800000010f1ae180,param_3,
                                                   param_2,0), (uVar2 & 1) != 0)) {
                              func_0x000107c6142c(param_2);
                              return 0x19;
                            }
                            if ((param_3 != -0x2fffffffffffffe6) || (param_2 != -0x7ffffffef0e51ea0)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae160,param_3,
                                                  param_2,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_3 != -0x2fffffffffffffec) ||
                                   (param_2 != -0x7ffffffef0fa1ad0)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000014,0x800000010f05e530,param_3,
                                                      param_2,0);
                                  if ((uVar2 & 1) == 0) {
                                    if (((param_3 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ec0)) ||
                                       (uVar2 = uVar1,
                                       func_0x000107c605b8(0xd000000000000012,0x800000010f1ae140,
                                                           param_3,param_2,0), (uVar2 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1b;
                                    }
                                    if (((param_3 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ee0)) ||
                                       (func_0x000107c605b8(0xd000000000000012,0x800000010f1ae120,
                                                            param_3,param_2,0), (uVar1 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1c;
                                    }
                                    if ((param_3 != -0x2fffffffffffffec) ||
                                       (param_2 != -0x7ffffffef0e51f00)) {
                                      uVar1 = 0;
                                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae100,
                                                          param_3,param_2,0);
                                      if ((uVar1 & 1) == 0) {
                                        if ((param_3 != -0x2fffffffffffffec) ||
                                           (param_2 != -0x7ffffffef0e51f20)) {
                                          uVar1 = 0;
                                          func_0x000107c605b8(0xd000000000000014,0x800000010f1ae0e0,
                                                              param_3,param_2,0);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = 0;
                                            if (((param_3 == -0x2fffffffffffffea) &&
                                                (param_2 == -0x7ffffffef0e51f40)) ||
                                               (func_0x000107c605b8(0xd000000000000016,
                                                                    0x800000010f1ae0c0,param_3,
                                                                    param_2,0), (uVar1 & 1) != 0)) {
                                              func_0x000107c6142c(param_2);
                                              return 0x1f;
                                            }
                                            uVar1 = 0;
                                            if (((param_3 != -0x2fffffffffffffe4) ||
                                                (param_2 != -0x7ffffffef0e51f60)) &&
                                               (func_0x000107c605b8(0xd00000000000001c,
                                                                    0x800000010f1ae0a0,param_3,
                                                                    param_2,0), (uVar1 & 1) == 0)) {
                                              uVar1 = 0;
                                              if (((param_3 != 0x7665725f6576696c) ||
                                                  (param_2 != -0x14ffffffff889a97)) &&
                                                 (func_0x000107c605b8(0x7665725f6576696c,
                                                                      0xeb00000000776569,param_3,
                                                                      param_2,0), (uVar1 & 1) == 0))
                                              {
                                                uVar1 = 0;
                                                if ((param_3 == -0x2ffffffffffffff0) &&
                                                   (param_2 == -0x7ffffffef0f616b0)) {
                                                  func_0x000107c6142c(0x800000010f09e950);
                                                  return 0x23;
                                                }
                                                func_0x000107c605b8(0xd000000000000010,
                                                                    0x800000010f09e950,param_3,
                                                                    param_2,0);
                                                func_0x000107c6142c(param_2);
                                                if ((uVar1 & 1) != 0) {
                                                  return 0x23;
                                                }
                                                return 0;
                                              }
                                              func_0x000107c6142c(param_2);
                                              return 0x21;
                                            }
                                            func_0x000107c6142c(param_2);
                                            return 0x20;
                                          }
                                        }
                                        func_0x000107c6142c(param_2);
                                        return 0x1e;
                                      }
                                    }
                                    func_0x000107c6142c(param_2);
                                    return 0x1d;
                                  }
                                }
                                func_0x000107c6142c(param_2);
                                return 0x1a;
                              }
                            }
                            func_0x000107c6142c(param_2);
                            return 0x22;
                          }
                        }
                        func_0x000107c6142c(param_2);
                        return 0x18;
                      }
                    }
                    func_0x000107c6142c(param_2);
                    return 0x16;
                  }
                  func_0x000107c6142c(param_2);
                  return 0x14;
                }
              }
              func_0x000107c6142c(param_2);
              return 5;
            }
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 1;
}



/* Entry: 103c015f8; end: 103c01633; -[_TtC21AdDataModelExtensions31SCTapAttachmentSourceExtensions init] */

void FUN_103c015f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103c0211c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c01634; end: 103c01663;  */

void FUN_103c01634(void)

{
  FUN_103c0211c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c01664; end: 103c0211b;  */

undefined8 FUN_103c01664(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0x656e6f6e || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x656e6f6e,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x64726163) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0x64726163;
        func_0x000107c605b8(0x64726163,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != 0x79617274) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0;
            func_0x000107c605b8(0x79617274,0xe400000000000000,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0;
              if (((param_1 == 0x6e6f74747562) && (param_2 == -0x1a00000000000000)) ||
                 (func_0x000107c605b8(0x6e6f74747562,0xe600000000000000,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                func_0x000107c6142c(param_2);
                return 4;
              }
              if ((param_1 != 0x64697267) || (param_2 != -0x1c00000000000000)) {
                uVar1 = 0x64697267;
                func_0x000107c605b8(0x64697267,0xe400000000000000,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0;
                  if (((param_1 == 0x735f6d6f74746f62) && (param_2 == -0x13ffffff8b9a9a98)) ||
                     (func_0x000107c605b8(0x735f6d6f74746f62,0xec00000074656568,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 6;
                  }
                  uVar1 = 0;
                  if (((param_1 == 0x63695f646e617262) && (param_2 == -0x15ffffffffff9191)) ||
                     (func_0x000107c605b8(0x63695f646e617262,0xea00000000006e6f,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 7;
                  }
                  uVar1 = 0xd000000000000011;
                  if (((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51da0)) ||
                     (uVar2 = uVar1,
                     func_0x000107c605b8(0xd000000000000011,0x800000010f1ae260,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 8;
                  }
                  uVar2 = 0;
                  if (((param_1 == 0x676e6974616f6c66) && (param_2 == -0x12ffff9393968fa1)) ||
                     (func_0x000107c605b8(0x676e6974616f6c66,0xed00006c6c69705f,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 9;
                  }
                  uVar2 = 0x6565665f74616863;
                  if (((param_1 == 0x6565665f74616863) && (param_2 == -0x11ff93939a9ca09c)) ||
                     (func_0x000107c605b8(0x6565665f74616863,0xee006c6c65635f64,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 10;
                  }
                  uVar2 = 0;
                  if (((param_1 == -0x2fffffffffffffe6) && (param_2 == -0x7ffffffef0e51dc0)) ||
                     (func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae240,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xb;
                  }
                  uVar2 = 0x647261635f646e65;
                  if (((param_1 == 0x647261635f646e65) && (param_2 == -0x1800000000000000)) ||
                     (uVar3 = uVar2,
                     func_0x000107c605b8(0x647261635f646e65,0xe800000000000000,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xc;
                  }
                  if (((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e51de0)) ||
                     (func_0x000107c605b8(0xd000000000000011,0x800000010f1ae220,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xd;
                  }
                  uVar1 = 0;
                  if (((param_1 == 0x6c6f6f745f706174) && (param_2 == -0x14ffffffff8f968c)) ||
                     (func_0x000107c605b8(0x6c6f6f745f706174,0xeb00000000706974,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xe;
                  }
                  uVar1 = 0x7474615f74616863;
                  if (((param_1 == 0x7474615f74616863) && (param_2 == -0x108b919a92979c9f)) ||
                     (func_0x000107c605b8(0x7474615f74616863,0xef746e656d686361,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0xf;
                  }
                  uVar1 = 0xd000000000000013;
                  if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0f4d140)) ||
                     (uVar3 = uVar1,
                     func_0x000107c605b8(0xd000000000000013,0x800000010f0b2ec0,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x12;
                  }
                  uVar3 = 0;
                  if (((param_1 == 0x656c626179616c70) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x656c626179616c70,0xec0000006174635f,param_1,param_2,0),
                     (uVar3 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x10;
                  }
                  if (((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffef0e51e00)) ||
                     (func_0x000107c605b8(0xd000000000000013,0x800000010f1ae200,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x11;
                  }
                  if (((param_1 == 0x647261635f646e65) && (param_2 == -0x13ffffff9e8b9ca1)) ||
                     (func_0x000107c605b8(0x647261635f646e65,0xec0000006174635f,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000107c6142c(param_2);
                    return 0x13;
                  }
                  uVar1 = 0x5f6e6f6974706163;
                  if (((param_1 != 0x5f6e6f6974706163) || (param_2 != -0x14ffffffff9e8b9d)) &&
                     (func_0x000107c605b8(0x5f6e6f6974706163,0xeb00000000617463,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0xd000000000000019;
                    if (((param_1 == -0x2fffffffffffffe7) && (param_2 == -0x7ffffffef0e51e20)) ||
                       (func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1e0,param_1,param_2,0)
                       , (uVar1 & 1) != 0)) {
                      func_0x000107c6142c(param_2);
                      return 0x15;
                    }
                    if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0e51e40)) {
                      uVar1 = 0;
                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae1c0,param_1,param_2,0);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = 0x5f72656b63697473;
                        if (((param_1 == 0x5f72656b63697473) && (param_2 == -0x14ffffffff9e8b9d)) ||
                           (func_0x000107c605b8(0x5f72656b63697473,0xeb00000000617463,param_1,
                                                param_2,0), (uVar1 & 1) != 0)) {
                          func_0x000107c6142c(param_2);
                          return 0x17;
                        }
                        if ((param_1 != -0x2fffffffffffffe7) || (param_2 != -0x7ffffffef0e51e60)) {
                          uVar1 = 0xd000000000000019;
                          func_0x000107c605b8(0xd000000000000019,0x800000010f1ae1a0,param_1,param_2,
                                              0);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = 0;
                            if (((param_1 == -0x2fffffffffffffee) &&
                                (param_2 == -0x7ffffffef0e51e80)) ||
                               (uVar2 = uVar1,
                               func_0x000107c605b8(0xd000000000000012,0x800000010f1ae180,param_1,
                                                   param_2,0), (uVar2 & 1) != 0)) {
                              func_0x000107c6142c(param_2);
                              return 0x19;
                            }
                            if ((param_1 != -0x2fffffffffffffe6) || (param_2 != -0x7ffffffef0e51ea0)
                               ) {
                              uVar2 = 0;
                              func_0x000107c605b8(0xd00000000000001a,0x800000010f1ae160,param_1,
                                                  param_2,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_1 != -0x2fffffffffffffec) ||
                                   (param_2 != -0x7ffffffef0fa1ad0)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000014,0x800000010f05e530,param_1,
                                                      param_2,0);
                                  if ((uVar2 & 1) == 0) {
                                    if (((param_1 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ec0)) ||
                                       (uVar2 = uVar1,
                                       func_0x000107c605b8(0xd000000000000012,0x800000010f1ae140,
                                                           param_1,param_2,0), (uVar2 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1b;
                                    }
                                    if (((param_1 == -0x2fffffffffffffee) &&
                                        (param_2 == -0x7ffffffef0e51ee0)) ||
                                       (func_0x000107c605b8(0xd000000000000012,0x800000010f1ae120,
                                                            param_1,param_2,0), (uVar1 & 1) != 0)) {
                                      func_0x000107c6142c(param_2);
                                      return 0x1c;
                                    }
                                    if ((param_1 != -0x2fffffffffffffec) ||
                                       (param_2 != -0x7ffffffef0e51f00)) {
                                      uVar1 = 0;
                                      func_0x000107c605b8(0xd000000000000014,0x800000010f1ae100,
                                                          param_1,param_2,0);
                                      if ((uVar1 & 1) == 0) {
                                        if ((param_1 != -0x2fffffffffffffec) ||
                                           (param_2 != -0x7ffffffef0e51f20)) {
                                          uVar1 = 0;
                                          func_0x000107c605b8(0xd000000000000014,0x800000010f1ae0e0,
                                                              param_1,param_2,0);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = 0;
                                            if (((param_1 == -0x2fffffffffffffea) &&
                                                (param_2 == -0x7ffffffef0e51f40)) ||
                                               (func_0x000107c605b8(0xd000000000000016,
                                                                    0x800000010f1ae0c0,param_1,
                                                                    param_2,0), (uVar1 & 1) != 0)) {
                                              func_0x000107c6142c(param_2);
                                              return 0x1f;
                                            }
                                            uVar1 = 0;
                                            if (((param_1 != -0x2fffffffffffffe4) ||
                                                (param_2 != -0x7ffffffef0e51f60)) &&
                                               (func_0x000107c605b8(0xd00000000000001c,
                                                                    0x800000010f1ae0a0,param_1,
                                                                    param_2,0), (uVar1 & 1) == 0)) {
                                              uVar1 = 0;
                                              if (((param_1 != 0x7665725f6576696c) ||
                                                  (param_2 != -0x14ffffffff889a97)) &&
                                                 (func_0x000107c605b8(0x7665725f6576696c,
                                                                      0xeb00000000776569,param_1,
                                                                      param_2,0), (uVar1 & 1) == 0))
                                              {
                                                uVar1 = 0;
                                                if ((param_1 == -0x2ffffffffffffff0) &&
                                                   (param_2 == -0x7ffffffef0f616b0)) {
                                                  func_0x000107c6142c(0x800000010f09e950);
                                                  return 0x23;
                                                }
                                                func_0x000107c605b8(0xd000000000000010,
                                                                    0x800000010f09e950,param_1,
                                                                    param_2,0);
                                                func_0x000107c6142c(param_2);
                                                if ((uVar1 & 1) != 0) {
                                                  return 0x23;
                                                }
                                                return 0;
                                              }
                                              func_0x000107c6142c(param_2);
                                              return 0x21;
                                            }
                                            func_0x000107c6142c(param_2);
                                            return 0x20;
                                          }
                                        }
                                        func_0x000107c6142c(param_2);
                                        return 0x1e;
                                      }
                                    }
                                    func_0x000107c6142c(param_2);
                                    return 0x1d;
                                  }
                                }
                                func_0x000107c6142c(param_2);
                                return 0x1a;
                              }
                            }
                            func_0x000107c6142c(param_2);
                            return 0x22;
                          }
                        }
                        func_0x000107c6142c(param_2);
                        return 0x18;
                      }
                    }
                    func_0x000107c6142c(param_2);
                    return 0x16;
                  }
                  func_0x000107c6142c(param_2);
                  return 0x14;
                }
              }
              func_0x000107c6142c(param_2);
              return 5;
            }
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 2;
    }
  }
  func_0x000107c6142c(param_2);
  return 1;
}



/* Entry: 103c0211c; end: 103c0222b;  */

void FUN_103c0211c(void)

{
  func_0x000107c61168(&PTR_PTR_1129455b0);
  return;
}



/* Entry: 103c0222c; end: 103c0225b; -[GPBBoolValue initWithBool:] */

undefined8 FUN_103c0222c(undefined8 param_1)

{
  func_0x000107c453e4();
  func_0x000107c5a494();
  return param_1;
}



/* Entry: 103c0225c; end: 103c022e3; -[GPBBoolValue initWithNumber:] */

undefined8 FUN_103c0225c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c3ebcc(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c022e4; end: 103c0231b; -[GPBDoubleValue initWithDouble:] */

undefined8 FUN_103c022e4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c453e4();
  func_0x000107c5a494(param_1);
  return param_2;
}



/* Entry: 103c0231c; end: 103c0239f; -[GPBDoubleValue initWithNumber:] */

undefined8 FUN_103c0231c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c4223c(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c023a0; end: 103c0240b;  */

undefined8 FUN_103c023a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000107c5fc48(param_1,PTR___ss5Int32VN_11034ee20);
  func_0x000107c6142c(param_1);
  func_0x000107c467a8(unaff_x20);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 103c0240c; end: 103c02483;  */

undefined8 FUN_103c0240c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  long lVar2;
  undefined4 *puVar3;
  
  func_0x000107c453e4();
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = unaff_x20;
    func_0x000107c61174(unaff_x20);
    puVar3 = (undefined4 *)(param_1 + 0x20);
    do {
      func_0x000107c3d93c(uVar1,param_2,*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c6142c(param_1);
  return unaff_x20;
}



/* Entry: 103c02484; end: 103c024b3; -[GPBEnumArray initWithEnumValues:] */

void FUN_103c02484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___ss5Int32VN_11034ee20);
  FUN_103c0240c();
  return;
}



/* Entry: 103c024b4; end: 103c024bf;  */

undefined8 FUN_103c024b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c61174();
  func_0x000107c5fc14(FUN_103c024c0,auStack_80,param_2,param_3);
  func_0x000107c61170(unaff_x20);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103c024c0; end: 103c0252f;  */

void FUN_103c024c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_34 [4];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c614b8(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                      PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  func_0x000107c5fc24(auStack_34);
  func_0x000107c3d93c(uVar1);
  return;
}



/* Entry: 103c02530; end: 103c025d7;  */

undefined8
FUN_103c02530(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c61174();
  func_0x000107c5fc14(param_5,auStack_80,param_2,param_3);
  func_0x000107c61170(unaff_x20);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103c025d8; end: 103c02603;  */

void FUN_103c025d8(undefined8 param_1)

{
  func_0x000107c614e8();
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010c0138d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1);
  return;
}



/* Entry: 103c02604; end: 103c0263b; -[GPBFloatValue initWithFloat:] */

undefined8 FUN_103c02604(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c453e4();
  func_0x000107c5a494(param_1);
  return param_2;
}



/* Entry: 103c0263c; end: 103c026bf; -[GPBFloatValue initWithNumber:] */

undefined8 FUN_103c0263c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c436dc(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c026c0; end: 103c026ef; -[GPBInt32Value initWithInt32:] */

undefined8 FUN_103c026c0(undefined8 param_1)

{
  func_0x000107c453e4();
  func_0x000107c5a494();
  return param_1;
}



/* Entry: 103c026f0; end: 103c02777; -[GPBInt32Value initWithNumber:] */

undefined8 FUN_103c026f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c49804(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c02778; end: 103c027a7; -[GPBInt64Value initWithInt64:] */

undefined8 FUN_103c02778(undefined8 param_1)

{
  func_0x000107c453e4();
  func_0x000107c5a494();
  return param_1;
}



/* Entry: 103c027a8; end: 103c0282f; -[GPBInt64Value initWithNumber:] */

undefined8 FUN_103c027a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c4c0a8(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c02830; end: 103c02893;  */

undefined8 FUN_103c02830(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c48af4();
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 103c02894; end: 103c0291f; -[GPBStringValue initWithString:] */

undefined8 FUN_103c02894(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x000107c453e4();
    param_1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170();
  return param_1;
}



/* Entry: 103c02920; end: 103c0294f; -[GPBUInt32Value initWithUInt32:] */

undefined8 FUN_103c02920(undefined8 param_1)

{
  func_0x000107c453e4();
  func_0x000107c5a494();
  return param_1;
}



/* Entry: 103c02950; end: 103c02a13; -[GPBUInt32Value initWithNumber:] */

undefined8 FUN_103c02950(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x000107c614f0(param_1);
    func_0x000107c61464(param_1,uVar1,8,7);
    param_1 = 0;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c453e4(param_1);
    func_0x000107c61180();
    func_0x000107c5d384(param_3);
    func_0x000107c5a494(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  return param_1;
}



/* Entry: 103c02a14; end: 103c02d53;  */

undefined * FUN_103c02a14(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a0 [12];
  uint uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar7 = 0;
  func_0x000107c5eb9c();
  lStack_90 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  puVar15 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_2 + 0x10);
  if (lVar16 == 0) {
    lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_94 = param_1;
    func_0x000100403514(0,lVar16,0);
    puVar13 = (undefined8 *)(param_2 + 0x28);
    do {
      puVar14 = puStack_68;
      puStack_78 = (undefined *)puVar13[-1];
      uVar4 = *puVar13;
      uVar8 = uVar4;
      uStack_70 = uVar4;
      func_0x000107c61434(uVar4);
      func_0x000107c5eb88(puVar15);
      func_0x000100e8b654();
      puVar9 = puVar15;
      puVar11 = PTR___sSSN_11034da80;
      func_0x000107c601f0(puVar15,PTR___sSSN_11034da80,uVar8);
      (**(code **)(lStack_90 + 8))(puVar15,lVar7);
      func_0x000107c6142c(uVar4);
      uVar18 = *(ulong *)(puVar14 + 0x10);
      lVar17 = uVar18 + 1;
      puStack_68 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
        func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),lVar17,1);
      }
      puVar13 = puVar13 + 2;
      *(long *)(puStack_68 + 0x10) = lVar17;
      *(undefined1 **)(puStack_68 + uVar18 * 0x10 + 0x20) = puVar9;
      *(undefined **)(puStack_68 + uVar18 * 0x10 + 0x28) = puVar11;
      lVar16 = lVar16 + -1;
      puVar14 = puStack_68;
      param_1 = uStack_94;
    } while (lVar16 != 0);
  }
  uVar18 = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar12 = (ulong *)(puVar14 + uVar18 * 0x10 + 0x28);
    uVar3 = uVar18;
    do {
      uVar18 = uVar3 + 1;
      if (uVar18 - lVar17 == 1) {
        func_0x000107c6142c(puVar14);
        lVar16 = *(long *)(puVar11 + 0x10);
        if (lVar16 == 0) {
          func_0x000107c61574(puVar11);
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001034d91f4(0,lVar16,0);
          puVar13 = (undefined8 *)(puVar11 + 0x28);
          uStack_88 = 0xc000000000000000;
          lStack_90 = 0;
          do {
            puVar14 = puStack_78;
            uVar4 = puVar13[-1];
            uVar8 = *puVar13;
            func_0x000107c61438(uVar8,2);
            func_0x00010006c00c(0,0xc000000000000000);
            func_0x000107c6142c(uVar8);
            func_0x00010006c090(0,0xc000000000000000);
            uVar18 = *(ulong *)(puVar14 + 0x10);
            puStack_78 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
              func_0x0001034d91f4(1 < *(ulong *)(puVar14 + 0x18),uVar18 + 1,1);
            }
            puVar14 = puStack_78;
            puVar13 = puVar13 + 2;
            *(ulong *)(puStack_78 + 0x10) = uVar18 + 1;
            *(undefined8 *)(puStack_78 + uVar18 * 0x20 + 0x20) = uVar4;
            *(undefined8 *)(puStack_78 + uVar18 * 0x20 + 0x28) = uVar8;
            *(undefined8 *)(puStack_78 + uVar18 * 0x20 + 0x38) = uStack_88;
            *(long *)(puStack_78 + uVar18 * 0x20 + 0x30) = lStack_90;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          func_0x000107c61574(puVar11);
        }
        return puVar14;
      }
      if (*(ulong *)(puVar14 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103c02d54);
        (*pcVar6)();
      }
      uVar2 = puVar12[-1];
      uVar5 = *puVar12;
      if ((param_1 & 1) == 0) break;
      puVar12 = puVar12 + 2;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar1 = uVar5 >> 0x38 & 0xf;
      }
      uVar3 = uVar18;
    } while (uVar1 == 0);
    func_0x000107c61434(uVar5);
    puVar10 = puVar11;
    func_0x000107c61558();
    puStack_78 = puVar11;
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar3 = *(ulong *)(puStack_78 + 0x10);
    if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar3) {
      func_0x000100403514(1 < *(ulong *)(puStack_78 + 0x18),uVar3 + 1,1);
    }
    *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
    *(ulong *)(puStack_78 + uVar3 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puStack_78 + uVar3 * 0x10 + 0x28) = uVar5;
    puVar11 = puStack_78;
  } while( true );
}



/* Entry: 103c02d54; end: 103c02da3;  */

void FUN_103c02d54(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000022;
  func_0x000100442ccc(0xd000000000000022,0x800000010f1ae6b0,0);
  uRam000000011380cf90 = uVar1;
  return;
}



/* Entry: 103c02da4; end: 103c02dbf; +[SCStoriesPlaybackConfigKeys skipFriendsFeedStoryTypeCheck] */

void FUN_103c02da4(void)

{
  if (lRam0000000113595f90 != -1) {
    func_0x000107c61568(0x113595f90,FUN_103c02d54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cf90);
  return;
}



/* Entry: 103c02dc0; end: 103c02e0f;  */

void FUN_103c02dc0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001e;
  func_0x000100442ccc(0xd00000000000001e,0x800000010f1ae690,0);
  uRam000000011380cf98 = uVar1;
  return;
}



/* Entry: 103c02e10; end: 103c02e2b; +[SCStoriesPlaybackConfigKeys storySessionCacheEnabled] */

void FUN_103c02e10(void)

{
  if (lRam0000000113595f98 != -1) {
    func_0x000107c61568(0x113595f98,FUN_103c02dc0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cf98);
  return;
}



/* Entry: 103c02e2c; end: 103c02e7b;  */

void FUN_103c02e2c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002a;
  func_0x000100442ccc(0xd00000000000002a,0x800000010f1ae660,0);
  uRam000000011380cfa0 = uVar1;
  return;
}



/* Entry: 103c02e7c; end: 103c02e97; +[SCStoriesPlaybackConfigKeys viewStateFilteringOnSpotlightEntrance] */

void FUN_103c02e7c(void)

{
  if (lRam0000000113595fa0 != -1) {
    func_0x000107c61568(0x113595fa0,FUN_103c02e2c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfa0);
  return;
}



/* Entry: 103c02e98; end: 103c02ee7;  */

void FUN_103c02e98(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000028;
  func_0x000100bd65fc(0xd000000000000028,0x800000010f1ae630,3);
  uRam000000011380cfa8 = uVar1;
  return;
}



/* Entry: 103c02ee8; end: 103c02f03; +[SCStoriesPlaybackConfigKeys dfAutoProgressImageSnapsLengthSecs] */

void FUN_103c02ee8(void)

{
  if (lRam0000000113595fa8 != -1) {
    func_0x000107c61568(0x113595fa8,FUN_103c02e98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfa8);
  return;
}



/* Entry: 103c02f04; end: 103c02f53;  */

void FUN_103c02f04(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002d;
  func_0x000100442ccc(0xd00000000000002d,0x800000010f1ae600,0);
  uRam000000011380cfb0 = uVar1;
  return;
}



/* Entry: 103c02f54; end: 103c02f6f; +[SCStoriesPlaybackConfigKeys discoverFeedPrependStoriesForLogging] */

void FUN_103c02f54(void)

{
  if (lRam0000000113595fb0 != -1) {
    func_0x000107c61568(0x113595fb0,FUN_103c02f04);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfb0);
  return;
}



/* Entry: 103c02f70; end: 103c02fbf;  */

void FUN_103c02f70(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002a;
  func_0x000100bd65fc(0xd00000000000002a,0x800000010f1ae5d0,0);
  uRam000000011380cfb8 = uVar1;
  return;
}



/* Entry: 103c02fc0; end: 103c02fdb; +[SCStoriesPlaybackConfigKeys subsAutoProgressImageSnapsLengthSecs] */

void FUN_103c02fc0(void)

{
  if (lRam0000000113595fb8 != -1) {
    func_0x000107c61568(0x113595fb8,FUN_103c02f70);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfb8);
  return;
}



/* Entry: 103c02fdc; end: 103c0302b;  */

void FUN_103c02fdc(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000025;
  func_0x000100442ccc(0xd000000000000025,0x800000010f1ae5a0,0);
  uRam000000011380cfc0 = uVar1;
  return;
}



/* Entry: 103c0302c; end: 103c03047; +[SCStoriesPlaybackConfigKeys subsAutoProgressVideoSnapsEnable] */

void FUN_103c0302c(void)

{
  if (lRam0000000113595fc0 != -1) {
    func_0x000107c61568(0x113595fc0,FUN_103c02fdc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfc0);
  return;
}



/* Entry: 103c03048; end: 103c03097;  */

void FUN_103c03048(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002b;
  func_0x000100442ccc(0xd00000000000002b,0x800000010f1ae570,0);
  uRam000000011380cfc8 = uVar1;
  return;
}



/* Entry: 103c03098; end: 103c030b3; +[SCStoriesPlaybackConfigKeys subsAutoProgressDisableOnNavigateBack] */

void FUN_103c03098(void)

{
  if (lRam0000000113595fc8 != -1) {
    func_0x000107c61568(0x113595fc8,FUN_103c03048);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfc8);
  return;
}



/* Entry: 103c030b4; end: 103c03103;  */

void FUN_103c030b4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000033;
  func_0x000100442ccc(0xd000000000000033,0x800000010f1ae530,0);
  uRam000000011380cfd0 = uVar1;
  return;
}



/* Entry: 103c03104; end: 103c0311f; +[SCStoriesPlaybackConfigKeys upNextDefaultStoriesUseReadReceiptViewStatus] */

void FUN_103c03104(void)

{
  if (lRam0000000113595fd0 != -1) {
    func_0x000107c61568(0x113595fd0,FUN_103c030b4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cfd0);
  return;
}


