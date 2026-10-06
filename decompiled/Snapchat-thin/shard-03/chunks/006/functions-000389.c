/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a34754; end: 102a34757; -[_TtC30LensPlatformLoggersIntegration30LensCarouselFunnelNullWorkflow onLensCarouselVisibleLenses:] */

void FUN_102a34754(void)

{
  return;
}



/* Entry: 102a34758; end: 102a34af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102a34758(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [8];
  long lStack_68;
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ee31d0;
  uVar2 = 0;
  func_0x0001005f60b4();
  uVar3 = uVar2;
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112ee31d8;
  func_0x000107c613fc(uVar2,0x20,7);
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112ee31e0;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112ee31e8) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ee31f0);
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee31f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3200) = param_6;
  *(long *)(unaff_x20 + _DAT_112ee3208) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3210) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3218) = param_7;
  uVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar2 = uVar3;
  func_0x000107c61538();
  func_0x000107c61538(uVar3,0x112ee3260);
  auStack_90[0] = param_1;
  lStack_68 = param_2;
  func_0x0001000285a8(0x112ee3088,&UNK_10db0e198);
  func_0x000107c613fc();
  func_0x000107c61580(param_1,2);
  func_0x000107c61580(param_2,2);
  func_0x000107c615f4(param_8,2);
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  puVar4 = auStack_90;
  func_0x000100614580(0,puVar4,&lStack_68,uVar2,uVar3,param_8);
  *(undefined8 **)(unaff_x20 + _DAT_112ee3290) = puVar4;
  puVar5 = auStack_78;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  func_0x000107c61180();
  plVar6 = (long *)&UNK_1008547f0;
  func_0x0001000bfde0(&UNK_1008547f0,0,PTR___sSbN_11034dd40);
  func_0x000107c61428(param_2 + 0x30,auStack_90,0,0);
  if (*(long *)(param_2 + 0x30) == 4) {
    puVar7 = &UNK_110589780;
    func_0x000107c613fc(&UNK_110589780,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,puVar5);
    puVar8 = &UNK_1105897a8;
    func_0x000107c613fc(&UNK_1105897a8,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(long **)(puVar8 + 0x18) = plVar6;
    pcVar10 = *(code **)(*plVar6 + 0x60);
    func_0x000107c6157c(plVar6);
    pcVar9 = FUN_102a34b64;
    puVar7 = puVar8;
    (*pcVar10)(FUN_102a34b64);
    func_0x000107c61574(puVar8);
    pcVar10 = pcVar9;
    func_0x000107c614f0(pcVar9);
    (**(code **)(puVar7 + 0x18))(*(undefined8 *)(puVar5 + _DAT_112ee31d0),pcVar10,puVar7);
    func_0x000107c61574(plVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(pcVar9);
  }
  else {
    func_0x000100619b88(param_5,param_3,plVar6);
    func_0x000107c61574(plVar6);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  return puVar5;
}



/* Entry: 102a34af4; end: 102a34af7;  */

void FUN_102a34af4(void)

{
  return;
}



/* Entry: 102a34af8; end: 102a34b63;  */

void FUN_102a34af8(char *param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000100c8227c(4,param_3);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102a34b64; end: 102a34b6b;  */

void FUN_102a34b64(char *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*param_1 == '\x01') {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000100c8227c(4,uVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102a34b6c; end: 102a34b97;  */

void FUN_102a34b6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a34b98; end: 102a34bf7;  */

void FUN_102a34b98(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  puStack_30 = param_1;
  func_0x00010484f5ec(FUN_102a35844,auStack_40,FUN_102a34c48,0,0x102a34c4c,0,0x102a34c50,0);
  return;
}



/* Entry: 102a34bf8; end: 102a34c47;  */

void FUN_102a34bf8(undefined8 param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = param_2;
    func_0x000107c61174();
    uVar1 = uVar2;
    func_0x000107c49eec();
    if ((uVar1 & 1) == 0) {
      uVar2 = *param_3;
      *param_3 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102a34c48; end: 102a34c53;  */

void FUN_102a34c48(void)

{
  return;
}



/* Entry: 102a34c54; end: 102a34cb3; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow init] */

void FUN_102a34c54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensPlatformLoggersIntegration.LensCarouselFunnelWorkflow",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a34c80);
  (*pcVar1)();
}



/* Entry: 102a34cb4; end: 102a34d5b; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a34cd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a34cd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a34cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee3200));
  return;
}



/* Entry: 102a34d5c; end: 102a34dff; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a34d5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_40,0x102a35894,auStack_60,uVar1);
  func_0x000107c61170(param_1);
  if (lStack_38 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102a34e00; end: 102a34e13;  */

void FUN_102a34e00(void)

{
  FUN_102a35640();
  return;
}



/* Entry: 102a34e14; end: 102a34e7f; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow lensCarouselUsableTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102a34e14(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_38,0x102a35880,auStack_50,PTR___sSdN_11034dd90);
  func_0x000107c61170(param_1);
  return uStack_38;
}



/* Entry: 102a34e80; end: 102a34e93;  */

void FUN_102a34e80(void)

{
  FUN_102a355dc();
  return;
}



/* Entry: 102a34e94; end: 102a34eff; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow wasInterrupted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102a34e94(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x000100087bd4(&uStack_31,0x102a3586c,auStack_50,PTR___sSbN_11034dd40);
  func_0x000107c61170(param_1);
  return uStack_31;
}



/* Entry: 102a34f00; end: 102a34f13;  */

void FUN_102a34f00(void)

{
  FUN_102a35578();
  return;
}



/* Entry: 102a34f14; end: 102a3527b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a34f14(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puStack_b0;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112ee31e8;
  if ((*(byte *)(param_2 + _DAT_112ee31e8) & 1) != 0) {
    return;
  }
  uVar18 = param_3 & 0xffffffffffffff8;
  uVar6 = param_3;
  if (param_3 >> 0x3e == 0) {
    uVar17 = *(ulong *)(uVar18 + 0x10);
  }
  else {
    uVar17 = uVar18;
    if (0x7fffffffffffffff < param_3) {
      uVar17 = param_3;
    }
    func_0x000107c60480();
  }
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((param_3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar18 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a350c8);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(param_3 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
          uVar15 = uVar6;
        }
        else {
          uVar4 = uVar7;
          uVar15 = param_3;
          func_0x0001016d284c();
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a350c4);
          (*pcVar3)();
        }
        uVar5 = uVar4;
        func_0x000107c4adb4();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c49c88();
        if ((int)uVar6 == 0) break;
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        uVar6 = uVar15;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar17) goto LAB_102a350f4;
      }
      uVar7 = uVar5;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5faec();
      uVar6 = uVar15;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      puVar9 = puStack_b0;
      func_0x000107c61558();
      if (((ulong)puVar9 & 1) == 0) {
        uVar6 = *(long *)(puStack_b0 + 0x10) + 1;
        puVar9 = (undefined *)0x0;
        FUN_102a356a8(0,uVar6,1,puStack_b0,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_b0 = puVar9;
      }
      uVar4 = *(ulong *)(puStack_b0 + 0x10);
      uVar7 = uVar4 + 1;
      if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar4) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puStack_b0 + 0x18));
        uVar6 = uVar7;
        FUN_102a356a8(puVar9,uVar7,1,puStack_b0,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_b0 = puVar9;
      }
      *(ulong *)(puStack_b0 + 0x10) = uVar7;
      *(ulong *)(puStack_b0 + uVar4 * 0x10 + 0x20) = uVar8;
      *(ulong *)(puStack_b0 + uVar4 * 0x10 + 0x28) = uVar15;
      uVar7 = uVar1;
    } while (uVar1 != uVar17);
  }
LAB_102a350f4:
  if (*(long *)(puStack_b0 + 0x10) != 0) {
    puVar10 = *(undefined8 **)(param_2 + _DAT_112ee3200);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined1 *)(param_2 + lVar2) = 1;
      puVar13 = (undefined8 *)(param_2 + _DAT_112ee31f0);
      if (*(char *)(puVar13 + 1) != '\x01') {
        uVar16 = *puVar13;
        puVar11 = puVar10;
        func_0x0001000298f0();
        func_0x000107c61428();
        uVar12 = *puVar11;
        func_0x000107c61174(uVar12);
        func_0x000100069b5c(uVar16);
        func_0x000107c61170(uVar12);
        *puVar13 = 0;
        *(undefined1 *)(puVar13 + 1) = 1;
      }
      func_0x000107c6071c();
      puVar13 = puVar10;
      func_0x000107c4332c(puVar10);
      func_0x000107c61180();
      puVar9 = &UNK_1105897d0;
      func_0x000107c613fc(&UNK_1105897d0,0x28,7);
      *(undefined **)(puVar9 + 0x10) = puStack_b0;
      *(long *)(puVar9 + 0x18) = param_2;
      *(undefined8 *)(puVar9 + 0x20) = param_1;
      pcStack_70 = FUN_102a357bc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_102a3545c;
      puStack_78 = &UNK_1105897e8;
      ppuVar14 = &puStack_90;
      puStack_68 = puVar9;
      func_0x000107c60bc4(ppuVar14);
      puVar9 = puStack_68;
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar9);
      func_0x000107c5dc64(puVar13);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c615e8(puVar10);
      func_0x000107c61170(puVar13);
      return;
    }
  }
  func_0x000107c6142c(puStack_b0);
  return;
}



/* Entry: 102a3527c; end: 102a35293;  */

void FUN_102a3527c(void)

{
  long unaff_x20;
  
  FUN_102a34f14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102a35294; end: 102a3545b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a35294(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar7 = *(undefined **)(param_4 + 0x10);
    func_0x000107c61174();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        puVar5 = puVar10;
        if (puVar10 <= puVar7) {
          puVar5 = puVar7;
        }
        puVar9 = (undefined8 *)(param_4 + 0x28 + (long)puVar10 * 0x10);
        puVar10 = puVar10 + 1;
        while( true ) {
          if ((long)puVar10 - (long)puVar5 == 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a3545c);
            (*pcVar2)();
          }
          uVar6 = puVar9[-1];
          uVar1 = *puVar9;
          func_0x000107c61434(uVar1);
          uVar3 = uVar6;
          func_0x000107c5fadc(uVar6,uVar1);
          uVar4 = param_2;
          func_0x000107c40404();
          func_0x000107c61170(uVar3);
          if ((uVar4 & 1) != 0) break;
          func_0x000107c6142c(uVar1);
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 2;
          if ((long)puVar10 - (long)puVar7 == 1) goto LAB_102a353fc;
        }
        puVar5 = puVar8;
        func_0x000107c61558();
        puStack_88 = puVar8;
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar4 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar4) {
          func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar4 + 1,1);
        }
        *(ulong *)(puStack_88 + 0x10) = uVar4 + 1;
        *(undefined8 *)(puStack_88 + uVar4 * 0x10 + 0x20) = uVar6;
        *(undefined8 *)(puStack_88 + uVar4 * 0x10 + 0x28) = uVar1;
        puVar8 = puStack_88;
      } while (puVar10 != puVar7);
    }
LAB_102a353fc:
    uVar6 = *(undefined8 *)(puVar8 + 0x10);
    func_0x000107c61574(puVar8);
    uStack_78 = 0;
    puStack_88 = puVar7;
    uStack_80 = uVar6;
    FUN_102a36138(param_1,&puStack_88);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102a3545c; end: 102a354d3;  */

/* WARNING: Possible PIC construction at 0x000102a354b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a354bc) */

void FUN_102a3545c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102a354d4; end: 102a35577; -[_TtC30LensPlatformLoggersIntegration26LensCarouselFunnelWorkflow onLensCarouselVisibleLenses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a354d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  func_0x000100619b48(0,0x112dc1630,&PTR_PTR_1126d1088);
  func_0x000107c5fc54(param_3,uVar1);
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_1);
  func_0x000100087bd4(FUN_102a35858,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 102a35578; end: 102a355db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a35578(undefined1 *param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ee31f8) + 0x10);
  func_0x000107c61428(lVar1 + 0x20,auStack_48,0,0);
  *param_1 = *(undefined1 *)(lVar1 + 0x20);
  return;
}



/* Entry: 102a355dc; end: 102a3563f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a355dc(undefined8 *param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ee31f8) + 0x10);
  func_0x000107c61428(lVar1 + 0x18,auStack_48,0,0);
  *param_1 = *(undefined8 *)(lVar1 + 0x18);
  return;
}



/* Entry: 102a35640; end: 102a356a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a35640(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ee3208);
  func_0x000107c61428(lVar2 + 0x18,auStack_48,0,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  param_1[1] = *(undefined8 *)(lVar2 + 0x20);
  *param_1 = uVar3;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 102a356a8; end: 102a357bb;  */

undefined *
FUN_102a356a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a357bc);
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
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102a357bc; end: 102a357e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a357bc(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((param_1 != 0) && (param_2 == 0)) {
    puVar8 = *(undefined **)(lVar1 + 0x10);
    func_0x000107c61174();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        puVar6 = puVar11;
        if (puVar11 <= puVar8) {
          puVar6 = puVar8;
        }
        puVar10 = (undefined8 *)(lVar1 + 0x28 + (long)puVar11 * 0x10);
        puVar11 = puVar11 + 1;
        while( true ) {
          if ((long)puVar11 - (long)puVar6 == 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a3545c);
            (*pcVar3)();
          }
          uVar7 = puVar10[-1];
          uVar2 = *puVar10;
          func_0x000107c61434(uVar2);
          uVar4 = uVar7;
          func_0x000107c5fadc(uVar7,uVar2);
          uVar5 = param_1;
          func_0x000107c40404();
          func_0x000107c61170(uVar4);
          if ((uVar5 & 1) != 0) break;
          func_0x000107c6142c(uVar2);
          puVar11 = puVar11 + 1;
          puVar10 = puVar10 + 2;
          if ((long)puVar11 - (long)puVar8 == 1) goto LAB_102a353fc;
        }
        puVar6 = puVar9;
        func_0x000107c61558();
        puStack_88 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar5 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar5) {
          func_0x000100403514(1 < *(ulong *)(puStack_88 + 0x18),uVar5 + 1,1);
        }
        *(ulong *)(puStack_88 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puStack_88 + uVar5 * 0x10 + 0x20) = uVar7;
        *(undefined8 *)(puStack_88 + uVar5 * 0x10 + 0x28) = uVar2;
        puVar9 = puStack_88;
      } while (puVar11 != puVar8);
    }
LAB_102a353fc:
    uVar7 = *(undefined8 *)(puVar9 + 0x10);
    func_0x000107c61574(puVar9);
    uStack_78 = 0;
    puStack_88 = puVar8;
    uStack_80 = uVar7;
    FUN_102a36138(uVar12,&puStack_88);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102a357e4; end: 102a35843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a357e4(void)

{
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ee31e8) & 1) == 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 1;
    FUN_102a36138(*(undefined8 *)(unaff_x20 + 0x18),&uStack_38);
  }
  return;
}



/* Entry: 102a35844; end: 102a35857;  */

void FUN_102a35844(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong uVar3;
  
  puVar2 = *(ulong **)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    uVar3 = param_2;
    func_0x000107c61174();
    uVar1 = uVar3;
    func_0x000107c49eec();
    if ((uVar1 & 1) == 0) {
      uVar3 = *puVar2;
      *puVar2 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102a35858; end: 102a358a7;  */

void FUN_102a35858(void)

{
  FUN_102a3527c();
  return;
}



/* Entry: 102a358a8; end: 102a35913;  */

long * FUN_102a358a8(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c613fc();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78),param_1);
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = param_2;
  return unaff_x20;
}



/* Entry: 102a35914; end: 102a35a9f;  */

/* WARNING: Possible PIC construction at 0x000102a35a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a35a50) */

void FUN_102a35914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = *unaff_x20;
  lVar4 = *(long *)(lVar8 + 0x58);
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_80 = param_2;
  uStack_78 = param_3;
  (**(code **)(*(long *)(lVar8 + 0x60) + 0x18))(*(undefined8 *)(lVar8 + 0x78));
  lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  lVar7 = lVar6;
  func_0x000107c61434();
  func_0x000107c5fc7c();
  if (lVar7 != 0) {
    lVar7 = 0;
    lVar8 = *(long *)(lVar8 + 0x68);
    pcVar3 = *(code **)(lVar8 + 0x18);
    do {
      func_0x000107c5fc98(lVar5 - extraout_x12,lVar7,lVar6,lVar4);
      lVar1 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a35aa0);
        (*pcVar3)();
      }
      (**(code **)(lVar9 + 0x20))(lVar5,lVar5 - extraout_x12,lVar4);
      (*pcVar3)(param_1,uStack_80,uStack_78,lVar4,lVar8);
      (**(code **)(lVar9 + 8))(lVar5,lVar4);
      lVar2 = lVar6;
      func_0x000107c5fc7c(lVar6,lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar6);
  return;
}



/* Entry: 102a35aa0; end: 102a35f27;  */

/* WARNING: Possible PIC construction at 0x000102a35bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a35bd0) */

void FUN_102a35aa0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar7 = *unaff_x20;
  lVar3 = *(long *)(lVar7 + 0x58);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_68 = param_1;
  (**(code **)(*(long *)(lVar7 + 0x60) + 0x20))(*(undefined8 *)(lVar7 + 0x78));
  lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  lVar6 = lVar5;
  func_0x000107c61434();
  func_0x000107c5fc7c();
  if (lVar6 != 0) {
    lVar6 = 0;
    lVar7 = *(long *)(lVar7 + 0x68);
    pcVar9 = *(code **)(lVar7 + 0x20);
    do {
      func_0x000107c5fc98((long)puVar4 - extraout_x12,lVar6,lVar5,lVar3);
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102a35c18);
        (*pcVar9)();
      }
      (**(code **)(lVar8 + 0x20))(puVar4,(long)puVar4 - extraout_x12,lVar3);
      (*pcVar9)(uStack_68,lVar3,lVar7);
      (**(code **)(lVar8 + 8))(puVar4,lVar3);
      lVar2 = lVar5;
      func_0x000107c5fc7c(lVar5,lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 102a35f28; end: 102a35f73;  */

void FUN_102a35f28(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a35f74; end: 102a35ff3;  */

void FUN_102a35f74(void)

{
  FUN_102a35914();
  return;
}



/* Entry: 102a35ff4; end: 102a3606f;  */

undefined8
FUN_102a35ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100614580(param_1,param_2,param_3,param_4,param_5,param_6);
  return unaff_x20;
}



/* Entry: 102a36070; end: 102a36113;  */

void FUN_102a36070(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(lVar1 + 0x78));
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x58) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88)));
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)));
  func_0x000107c615e8(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa0)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8)));
  func_0x000107c61574(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xb0)));
  return;
}



/* Entry: 102a36114; end: 102a36137;  */

void FUN_102a36114(void)

{
  FUN_102a36070();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a36138; end: 102a36197;  */

void FUN_102a36138(void)

{
  long *unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xa8)),FUN_102a362cc,
                      auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102a36198; end: 102a3628b;  */

void FUN_102a36198(undefined8 param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_2;
  lVar6 = *(long *)(lVar7 + 0xb0);
  plVar3 = *(long **)((long)param_2 + lVar6);
  if (plVar3 != (long *)0x0) {
    func_0x000107c6157c(plVar3);
    FUN_102a36938(param_3);
    lVar4 = *(long *)((long)plVar3 + *(long *)(*plVar3 + 0x70));
    if (lVar4 != 1) {
      lVar2 = *(long *)(*plVar3 + 0x68);
      lVar5 = *(long *)(lVar7 + 0x60);
      pcVar1 = *(code **)(lVar5 + 0x18);
      func_0x000107c614b0(lVar4);
      (*pcVar1)(param_1,(long)plVar3 + lVar2,param_3,*(undefined8 *)(lVar7 + 0x50),lVar5);
      FUN_102a362e8(lVar4);
      func_0x000107c61574(plVar3);
      plVar3 = *(long **)((long)param_2 + lVar6);
      *(undefined8 *)((long)param_2 + lVar6) = 0;
    }
    func_0x000107c61574(plVar3);
  }
  return;
}



/* Entry: 102a3628c; end: 102a362cb;  */

void FUN_102a3628c(void)

{
  func_0x000100c82b40();
  return;
}



/* Entry: 102a362cc; end: 102a362e7;  */

void FUN_102a362cc(void)

{
  long unaff_x20;
  
  FUN_102a36198(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102a362e8; end: 102a362f7;  */

void FUN_102a362e8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 102a362f8; end: 102a36397;  */

void FUN_102a362f8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 8),
                      *(undefined8 *)(unaff_x20 + 0x10),&UNK_10e70d970,&UNK_10e70d978);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lStack_40 = unaff_x20 + (uVar2 + 0x48 & (uVar2 ^ 0xffffffffffffffff));
  auVar3 = NEON_ext(*(undefined1 (*) [16])(unaff_x20 + 0x38),
                    *(undefined1 (*) [16])(unaff_x20 + 0x38),8,1);
  uStack_48 = auVar3._8_8_;
  uStack_50 = auVar3._0_8_;
  func_0x000100087bd4(FUN_102a36398,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102a36398; end: 102a363eb;  */

void FUN_102a36398(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = **(long **)(unaff_x20 + 0x10);
  if (*(long *)((long)*(long **)(unaff_x20 + 0x10) + *(long *)(lVar1 + 0x70)) == 1) {
    (**(code **)(*(long *)(lVar1 + 0x58) + 0x20))
              (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(lVar1 + 0x50));
  }
  return;
}



/* Entry: 102a363ec; end: 102a363fb;  */

bool FUN_102a363ec(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Entry: 102a363fc; end: 102a36463;  */

void FUN_102a363fc(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c60690(param_2);
  return;
}



/* Entry: 102a36464; end: 102a3647f;  */

bool FUN_102a36464(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a36480; end: 102a364bb;  */

void FUN_102a36480(void)

{
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_102a363fc(auStack_68,*unaff_x20);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a364bc; end: 102a36647;  */

void FUN_102a364bc(double param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar5 = *unaff_x20;
  lVar8 = *(long *)(lVar5 + 0x88);
  cVar2 = *(char *)((long)unaff_x20 + lVar8);
  lVar1 = *(long *)(lVar5 + 0x58);
  lVar4 = *(long *)(lVar5 + 0x60);
  pcVar10 = *(code **)(lVar4 + 8);
  uVar7 = *(undefined8 *)(lVar5 + 0x50);
  func_0x000107c614b8(0,lVar1,uVar7,&UNK_10e70d970,&UNK_10e70d980);
  (*pcVar10)();
  func_0x000107c6142c(lVar4);
  if (cVar2 == '\0') {
    func_0x000107c6071c();
    param_1 = param_1 * 1000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102a3663c);
      (*pcVar10)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102a36640);
      (*pcVar10)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102a36644);
      (*pcVar10)();
    }
    lVar6 = (long)param_1;
    *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) = lVar6;
    lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
    lVar4 = lVar6 - lVar5;
    if (SBORROW8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x102a36648);
      (*pcVar10)();
    }
    plVar3 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
    func_0x000107c61648();
    lVar5 = lVar4;
    if (plVar3 != (long *)0x0) {
      if (*(char *)((long)plVar3 + *(long *)(*plVar3 + 0x88)) == '\x01') {
        lVar9 = *(long *)((long)plVar3 + *(long *)(*plVar3 + 0x98));
        func_0x000107c61574();
        lVar5 = lVar6 - lVar9;
        if (SBORROW8(lVar6,lVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x102a365e0);
          (*pcVar10)();
        }
      }
      else {
        func_0x000107c61574();
      }
    }
    (**(code **)(lVar1 + 0x18))
              (param_2,(long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),lVar4,lVar5,uVar7,lVar1);
    *(undefined1 *)((long)unaff_x20 + lVar8) = 1;
  }
  return;
}



/* Entry: 102a36648; end: 102a3679b;  */

void FUN_102a36648(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x88);
  if (*(char *)((long)unaff_x20 + lVar2) == '\0') {
    (**(code **)(*(long *)(lVar1 + 0x58) + 0x20))
              (unaff_x20[2],unaff_x20[3],(long)unaff_x20 + *(long *)(lVar1 + 0x70),
               *(undefined8 *)(lVar1 + 0x50));
    *(undefined1 *)((long)unaff_x20 + lVar2) = 2;
  }
  return;
}



/* Entry: 102a3679c; end: 102a367bf;  */

void FUN_102a3679c(void)

{
  func_0x000102a366a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a367c0; end: 102a36937;  */

void FUN_102a367c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 102a36938; end: 102a36bab;  */

void FUN_102a36938(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar8 = *unaff_x20;
  lVar15 = *(long *)(lVar8 + 0x70);
  lVar13 = *(long *)((long)unaff_x20 + lVar15);
  lVar10 = *(long *)(lVar8 + 0x60);
  pcVar11 = *(code **)(lVar10 + 8);
  func_0x000102a36ff8(lVar13);
  uVar7 = *(undefined8 *)(lVar8 + 0x50);
  lVar8 = *(long *)(lVar8 + 0x58);
  uVar12 = *(undefined8 *)(lVar8 + 8);
  uVar1 = 0;
  func_0x000107c614b8(0,uVar12,uVar7,&UNK_10e70d970,&UNK_10e70d980);
  lVar4 = lVar10;
  (*pcVar11)();
  func_0x000107c6142c(lVar4);
  func_0x000102a36fe8(lVar13);
  if (lVar13 == 1) {
    uVar14 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
    uVar2 = uVar1;
    lVar4 = lVar10;
    (*pcVar11)();
    uVar3 = 0;
    uStack_78 = uVar2;
    lStack_70 = lVar4;
    func_0x000100c85b10(0,uVar7,uVar12,lVar10);
    func_0x000107c5fa40(&plStack_68,&uStack_78,uVar14,PTR___sSSN_11034da80,uVar3,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    if (plStack_68 != (long *)0x0) {
      FUN_102a364bc(param_1);
      lVar4 = lVar10;
      (*pcVar11)(uVar1,lVar10);
      func_0x0001000f66f0();
      func_0x000107c6142c(lVar4);
      if ((uVar1 & 1) == 0) {
        lVar4 = (long)plStack_68 + *(long *)(*plStack_68 + 0x80);
        func_0x000107c61648(lVar4);
        FUN_102a37008();
        func_0x000107c61574(lVar4);
        if (*(long *)((long)plStack_68 + *(long *)(*plStack_68 + 0x78)) == 0) {
          func_0x000107c6157c(plStack_68);
          plVar9 = plStack_68;
          do {
            plVar5 = (long *)((long)plVar9 + *(long *)(*plVar9 + 0x80));
            func_0x000107c61648();
            func_0x000107c61574(plVar9);
            if (plVar5 == (long *)0x0) {
              func_0x000107c61574(plStack_68);
              uVar7 = *(undefined8 *)((long)unaff_x20 + lVar15);
              *(undefined8 *)((long)unaff_x20 + lVar15) = 0;
              goto LAB_102a36ba4;
            }
            uVar1 = (ulong)*(byte *)((long)plVar5 + *(long *)(*plVar5 + 0x88));
            FUN_102a363ec(uVar1,2,uVar7,uVar12,lVar10);
            plVar9 = plVar5;
          } while ((uVar1 & 1) == 0);
          uVar12 = 0;
          FUN_102a370a4(0,uVar7,lVar8,lVar10);
          puVar6 = &UNK_10db0e638;
          func_0x000107c61520(&UNK_10db0e638,uVar12);
          func_0x000107c613f8(uVar12,puVar6,0,0);
          func_0x000107c61574(plVar5);
          func_0x000107c61574(plStack_68);
          uVar7 = *(undefined8 *)((long)unaff_x20 + lVar15);
          *(undefined8 *)((long)unaff_x20 + lVar15) = uVar12;
LAB_102a36ba4:
          func_0x000102a36fe8(uVar7);
          return;
        }
      }
      func_0x000107c61574(plStack_68);
    }
  }
  return;
}



/* Entry: 102a36bac; end: 102a36be7;  */

undefined8 FUN_102a36bac(long param_1,long param_2)

{
  if (param_1 == 1) {
    if (param_2 != 1) {
      return 0;
    }
  }
  else if (param_2 == 1) {
    return 0;
  }
  return 1;
}



/* Entry: 102a36be8; end: 102a36c87;  */

void FUN_102a36be8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a36c88; end: 102a36cb3;  */

void FUN_102a36c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a36cb4; end: 102a36d3b;  */

void FUN_102a36cb4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x68);
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(*(long *)(lVar2 + 0x58) + 8),*(undefined8 *)(lVar2 + 0x50),
                      &UNK_10e70d970,&UNK_10e70d978);
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  func_0x000102a36fe8(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  func_0x000107c6142c(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  return;
}



/* Entry: 102a36d3c; end: 102a36d5f;  */

void FUN_102a36d3c(void)

{
  FUN_102a36cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a36d60; end: 102a36d7f;  */

void FUN_102a36d60(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 102a36d80; end: 102a36dc3;  */

void FUN_102a36d80(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102a36dc4; end: 102a36e57;  */

ulong * FUN_102a36dc4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar1 = 0xffffffff;
  }
  uVar5 = *param_2;
  uVar2 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar2 = 0xffffffff;
  }
  iVar3 = (int)uVar2 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar3 < 0) {
      func_0x000107c614b0(uVar5);
      *param_1 = uVar5;
      func_0x000107c614ac(uVar4);
    }
    else {
      func_0x000107c614ac(uVar4);
      *param_1 = *param_2;
    }
  }
  else {
    if (iVar3 < 0) {
      func_0x000107c614b0(uVar5);
    }
    *param_1 = uVar5;
  }
  return param_1;
}



/* Entry: 102a36e58; end: 102a36ed3;  */

ulong * FUN_102a36e58(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  uVar3 = *param_2;
  if ((int)uVar1 + -1 < 0) {
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = uVar3;
      func_0x000107c614ac(uVar2);
    }
    else {
      func_0x000107c614ac(uVar2);
      *param_1 = uVar3;
    }
  }
  else {
    *param_1 = uVar3;
  }
  return param_1;
}



/* Entry: 102a36ed4; end: 102a37007;  */

uint FUN_102a36ed4(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 102a37008; end: 102a370a3;  */

/* WARNING: Possible PIC construction at 0x000102a3707c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a37080) */

void FUN_102a37008(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x20;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar1 = (ulong)*(byte *)((long)param_1 + *(long *)(*param_1 + 0x88));
    FUN_102a363ec(uVar1,0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(*(long *)(lVar2 + 0x58) + 8)
                  ,*(undefined8 *)(lVar2 + 0x60));
    if ((uVar1 & 1) != 0) {
      func_0x000107c6157c(param_1);
      FUN_102a36648();
      func_0x000107c61648((long)param_1 + *(long *)(*param_1 + 0x80));
      FUN_102a37008();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 102a370a4; end: 102a371ab;  */

void FUN_102a370a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e70d748);
  return;
}



/* Entry: 102a371ac; end: 102a3721f;  */

long FUN_102a371ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 3;
  *(undefined8 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61428(unaff_x20 + 0x30,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return unaff_x20;
}



/* Entry: 102a37220; end: 102a37243;  */

void FUN_102a37220(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a37244; end: 102a37257;  */

void FUN_102a37244(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110589f90;
  if (lRam0000000112ee3760 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ee3760 = param_1;
  }
  return;
}



/* Entry: 102a37258; end: 102a372f3;  */

void FUN_102a37258(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102a372f4; end: 102a37437;  */

undefined8 * FUN_102a372f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xf] = param_2[0xf];
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x11] = param_2[0x11];
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a37438; end: 102a374e3;  */

undefined8 * FUN_102a37438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  uVar3 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar3;
  param_1[6] = uVar1;
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0x12];
  uVar1 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a374e4; end: 102a3758f;  */

int FUN_102a374e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a37590; end: 102a375c3;  */

void FUN_102a37590(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 102a375c4; end: 102a375e7;  */

void FUN_102a375c4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a375e8; end: 102a3774b;  */

void FUN_102a375e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  double dVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_5 != '\x01') {
    func_0x000107c61428(unaff_x20 + 0x18,auStack_68,1,0);
    *(undefined8 *)(unaff_x20 + 0x18) = param_1;
    puVar2 = PTR_PTR_1126abdc8;
    func_0x000107c610f8(PTR_PTR_1126abdc8);
    func_0x000107c453e4();
    func_0x000107c5947c();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(param_2 + 0x18));
    func_0x000107c55e70(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c521e0(puVar2);
    dVar4 = *(double *)(unaff_x20 + 0x18) * 1000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a37744);
      (*pcVar1)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a37748);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a3774c);
      (*pcVar1)();
    }
    func_0x000107c53270(puVar2);
    func_0x000107c61428(unaff_x20 + 0x20,auStack_80,0,0);
    func_0x000107c5a644(puVar2);
    func_0x000107c5a5e4(puVar2);
    func_0x000107c55fe4(puVar2);
    func_0x000107c4bfb0(*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102a3774c; end: 102a37777;  */

void FUN_102a3774c(undefined8 param_1,undefined8 *param_2)

{
  FUN_102a375e8(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  return;
}



/* Entry: 102a37778; end: 102a3777b;  */

void FUN_102a37778(void)

{
  return;
}



/* Entry: 102a3777c; end: 102a377c7;  */

void FUN_102a3777c(long param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar1 = *unaff_x20;
    func_0x000107c61428(lVar1 + 0x20,auStack_38,1,0);
    *(undefined1 *)(lVar1 + 0x20) = 1;
  }
  return;
}



/* Entry: 102a377c8; end: 102a377cb;  */

void FUN_102a377c8(void)

{
  return;
}



/* Entry: 102a377cc; end: 102a37843;  */

void FUN_102a377cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x40) = 0x800000010f0e40f0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x50) = 0x800000010f0e41e0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102a37844; end: 102a3788b;  */

void FUN_102a37844(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x40) = 0x800000010f0e40f0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xd000000000000014;
  *(undefined8 *)(unaff_x20 + 0x50) = 0x800000010f0e41e0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102a3788c; end: 102a378c7;  */

void FUN_102a3788c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a378c8; end: 102a37947;  */

void FUN_102a378c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = *unaff_x20;
  func_0x000107c61428(lVar3 + 0x20,auStack_58,1,0);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c3e750();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  *(undefined1 *)(lVar3 + 0x30) = 0;
  return;
}



/* Entry: 102a37948; end: 102a379b3;  */

void FUN_102a37948(undefined8 param_1,undefined8 *param_2)

{
  FUN_102a379bc(*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  return;
}



/* Entry: 102a379b4; end: 102a379bb;  */

void FUN_102a379b4(void)

{
  return;
}



/* Entry: 102a379bc; end: 102a37abb;  */

void FUN_102a379bc(double param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  if (param_4 != '\x01') {
    lVar2 = unaff_x20 + 0x20;
    func_0x000107c61428(lVar2,auStack_68,0,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    func_0x000107c5fdd0((param_1 - *(double *)(unaff_x20 + 0x20)) * 1000.0);
    puVar3 = PTR_PTR_1126b15f8;
    func_0x000107c610f8(PTR_PTR_1126b15f8);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c467dc(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c4bcd4(*(undefined8 *)(unaff_x20 + 0x10));
    if (*(char *)(unaff_x20 + 0x30) != '\x01') {
      func_0x000107c427e8(*(undefined8 *)(unaff_x20 + 0x18));
    }
    func_0x000107c61170(puVar3);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
  }
  return;
}



/* Entry: 102a37abc; end: 102a37b97;  */

undefined1  [16] FUN_102a37abc(void)

{
  undefined8 uVar1;
  char *pcVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd000000000000019;
  pcVar2 = "lens_carousel_usable";
  if (*(char *)(unaff_x20 + 0x10) != '\x01') {
    uVar1 = 0xd000000000000014;
    pcVar2 = "eplySnapRecencyStore";
  }
  auVar3._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a37b98; end: 102a37caf;  */

void FUN_102a37b98(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112ee3940,&UNK_10db0ea08);
  puVar1 = &uStack_48;
  uStack_48 = uVar4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ee3948,&UNK_10db0ea10);
  puVar2 = &UNK_11058a2e8;
  func_0x000107c613fc(&UNK_11058a2e8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar4 = 0x102a37cb8;
  func_0x0001000823a8(0x102a37cb8,puVar2);
  func_0x000100082720("CameraLensProcessingURIPluginRegistryServiceProvider",0x34,2);
  uVar3 = uVar4;
  func_0x000102b2dbbc();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000100082720("CameraLensProcessingURIPluginCollectionEntryPointProvider",0x39,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 102a37cb0; end: 102a37cc3;  */

void FUN_102a37cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *param_2;
  func_0x0001000285a8(0x112ee3940,&UNK_10db0ea08);
  puVar1 = &uStack_48;
  uStack_48 = uVar5;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ee3948,&UNK_10db0ea10);
  puVar2 = &UNK_11058a2e8;
  func_0x000107c613fc(&UNK_11058a2e8,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  uVar3 = 0x102a37cb8;
  func_0x0001000823a8(0x102a37cb8,puVar2);
  func_0x000100082720("CameraLensProcessingURIPluginRegistryServiceProvider",0x34,2);
  uVar4 = uVar3;
  func_0x000102b2dbbc();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
  func_0x000100082720("CameraLensProcessingURIPluginCollectionEntryPointProvider",0x39,2);
  *param_1 = uVar4;
  return;
}



/* Entry: 102a37cc4; end: 102a37e0f;  */

void FUN_102a37cc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11059f040;
  ppuVar4 = &PTR_DAT_112ef47d0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11058a310;
  func_0x000107c613fc(&UNK_11058a310,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar3 = 0x112ee3950;
  func_0x0001000285a8(0x112ee3950,&UNK_10db0ea18);
  func_0x0001000a6ee8(&UNK_11058a6d8,"BitmojiLensAvatarNotifyURIPluginKey",0x23,2,FUN_102a37e10,
                      puVar2,uVar3,&UNK_11058a6d8,&PTR_DAT_112ee3a08);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ee3958;
  func_0x0001000285a8(0x112ee3958,&UNK_10db0ea20);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("CameraLensProcessingURIPluginRegistryServiceProvider",0x34,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 102a37e10; end: 102a37e53;  */

void FUN_102a37e10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102a3a864(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100082720("BitmojiLensAvatarNotifyURIPluginProvider",0x28,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a37e54; end: 102a37e67;  */

bool FUN_102a37e54(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a37e68; end: 102a37f13;  */

void FUN_102a37e68(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a37f14; end: 102a37f5b;  */

undefined1  [16] FUN_102a37f14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x7641646e65697266;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6449726174617661;
  }
  uVar2 = 0xee00644972617461;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a37f5c; end: 102a3803b;  */

void FUN_102a37f5c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x6449726174617661;
  if ((param_2 == 0x6449726174617661 && param_3 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x6449726174617661,0xe800000000000000,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x7641646e65697266) && (param_3 == -0x11ff9bb68d9e8b9f)) {
      func_0x000107c6142c(0xee00644972617461);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x7641646e65697266,0xee00644972617461,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102a3803c; end: 102a38053;  */

undefined1  [16] FUN_102a3803c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a38054; end: 102a380a3;  */

void FUN_102a38054(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a3a5e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a380a4; end: 102a380cf;  */

void FUN_102a380a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102a39d64();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102a380d0; end: 102a384d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a380d0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  undefined *puStack_68;
  
  uStack_98 = param_1;
  uStack_90 = param_2;
  plStack_80 = param_3;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar4 = 0;
  puStack_b0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ffc4();
  puVar10 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar15 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = _DAT_112ee3968;
  lVar12 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lVar3 = _DAT_112ee3970;
  uVar5 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  lStack_b8 = _DAT_112ee3978;
  FUN_102a3a3a4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5f80c(lVar12);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  FUN_102a3a304(0x112d4ac68,puVar10,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x000102a3a344(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar15,&puStack_68,uVar6,uVar7,lVar4,uVar5);
  puVar8 = puStack_b0;
  (**(code **)(lStack_a8 + 0x68))
            (puStack_b0,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a0);
  uVar5 = 0xd000000000000025;
  func_0x000107c5ffec(0xd000000000000025,0x800000010f0e4370,lVar12,lVar15,puVar8,0);
  uVar6 = uStack_98;
  *(undefined8 *)(unaff_x20 + lStack_b8) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee3980);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee3988);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee3990);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ee3998) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3960) = uStack_98;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  uVar7 = uStack_90;
  func_0x000107c6157c(uStack_90);
  pcVar14 = FUN_102a3a388;
  func_0x0001000bdd8c(FUN_102a3a388,uVar7);
  *(code **)(unaff_x20 + _DAT_112ee39a0) = pcVar14;
  puVar8 = &stack0xffffffffffffff88;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  func_0x000107c61174();
  plVar2 = plStack_80;
  plVar9 = plStack_80;
  func_0x0001000b637c();
  puVar10 = &UNK_11058a3e0;
  func_0x000107c613fc(&UNK_11058a3e0,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,puVar8);
  uVar5 = 0x102a3a390;
  puVar11 = puVar10;
  (**(code **)(*plVar9 + 0x60))();
  func_0x000107c61574(plVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c614f0();
  uVar13 = *(undefined8 *)(puVar8 + _DAT_112ee3968);
  pcVar14 = *(code **)(puVar11 + 0x18);
  func_0x000107c6157c(uVar13);
  (*pcVar14)();
  func_0x000107c61170(puVar8);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(plVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c61574(uVar13);
  return puVar8;
}


