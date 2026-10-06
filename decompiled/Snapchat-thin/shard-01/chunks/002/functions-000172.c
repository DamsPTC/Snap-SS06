/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e0e464; end: 100e0e473; -[BillboardGrpcServices lazyBillboardGrpcRankingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0e464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38770));
  return;
}



/* Entry: 100e0e474; end: 100e0e493;  */

void FUN_100e0e474(void)

{
  func_0x000107c61168(&PTR_PTR_112798ca0);
  return;
}



/* Entry: 100e0e494; end: 100e0e4ef; -[BillboardGrpcServices init] */

void FUN_100e0e494(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BillboardGrpcService.BillboardGrpcServices",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0e4c0);
  (*pcVar1)();
}



/* Entry: 100e0e4f0; end: 100e0e523; -[BillboardGrpcServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0e4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d38770));
  return;
}



/* Entry: 100e0e524; end: 100e0e563;  */

undefined8 FUN_100e0e524(void)

{
  if (lRam0000000112d387a0 != -1) {
    func_0x000107c61568(0x112d387a0,0x100e0e510);
  }
  return 0x1137fea40;
}



/* Entry: 100e0e564; end: 100e0e8b3;  */

undefined8 FUN_100e0e564(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
    uVar7 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
    func_0x000107c61438(param_1,2);
    func_0x000107c61434(param_2);
    lVar3 = 0;
    do {
      if (uVar9 == 0) {
        do {
          lVar8 = lVar3 + 1;
          if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0e708);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
            uVar7 = 1;
            goto LAB_100e0e6d0;
          }
          uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
          lVar3 = lVar3 + 1;
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
        lVar8 = lVar3;
      }
      uVar5 = LZCOUNT(uVar4) | lVar8 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar5 * 0x10);
      lVar3 = *plVar1;
      uVar4 = plVar1[1];
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar5 * 8);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar7);
      uVar5 = uVar4;
      func_0x000100029284();
      func_0x000107c6142c(uVar4);
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(uVar7);
        break;
      }
      uVar5 = *(ulong *)(*(long *)(param_2 + 0x38) + lVar3 * 8);
      uVar4 = uVar5;
      func_0x000107c61434();
      func_0x000100e0e708();
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar7);
      lVar3 = lVar8;
    } while ((uVar4 & 1) != 0);
    uVar7 = 0;
LAB_100e0e6d0:
    func_0x000107c6142c(param_2);
    func_0x000107c61430(param_1,2);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 100e0e8b4; end: 100e0e8cf;  */

undefined8 FUN_100e0e8b4(long *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  if (lVar4 == lVar5) {
    uVar9 = 1;
  }
  else if (*(long *)(lVar4 + 0x10) == *(long *)(lVar5 + 0x10)) {
    uVar8 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar4 + 0x40);
    func_0x000107c61438(lVar4,2);
    func_0x000107c61434(lVar5);
    lVar3 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar3 + 1;
          if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100e0e708);
            (*pcVar2)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
            uVar9 = 1;
            goto LAB_100e0e6d0;
          }
          uVar11 = ((ulong *)(lVar4 + 0x40))[lVar10];
          lVar3 = lVar3 + 1;
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
        lVar10 = lVar3;
      }
      uVar7 = LZCOUNT(uVar6) | lVar10 << 6;
      plVar1 = (long *)(*(long *)(lVar4 + 0x30) + uVar7 * 0x10);
      lVar3 = *plVar1;
      uVar6 = plVar1[1];
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar9);
      uVar7 = uVar6;
      func_0x000100029284();
      func_0x000107c6142c(uVar6);
      if ((uVar7 & 1) == 0) {
        func_0x000107c6142c(uVar9);
        break;
      }
      uVar7 = *(ulong *)(*(long *)(lVar5 + 0x38) + lVar3 * 8);
      uVar6 = uVar7;
      func_0x000107c61434();
      func_0x000100e0e708();
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar9);
      lVar3 = lVar10;
    } while ((uVar6 & 1) != 0);
    uVar9 = 0;
LAB_100e0e6d0:
    func_0x000107c6142c(lVar5);
    func_0x000107c61430(lVar4,2);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



/* Entry: 100e0e8d0; end: 100e0e933;  */

undefined8 FUN_100e0e8d0(int *param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == *param_2) {
    lVar2 = *(long *)(param_2 + 4);
    if (*(long *)(param_1 + 4) == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if ((lVar2 != 0) &&
            ((uVar1 = *(ulong *)(param_1 + 2),
             uVar1 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == lVar2 ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 100e0e934; end: 100e0e93b;  */

void FUN_100e0e934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 100e0e93c; end: 100e0e9ef;  */

undefined4 * FUN_100e0e93c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 100e0e9f0; end: 100e0eab7;  */

int FUN_100e0e9f0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e0eab8; end: 100e0eac3; -[SCBillboardCampaignMetadata campaignName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0eab8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d387a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d387a8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e0eac4; end: 100e0ead3; -[SCBillboardCampaignMetadata uxConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0eac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d387b0));
  return;
}



/* Entry: 100e0ead4; end: 100e0eae3; -[SCBillboardCampaignMetadata cooldownConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ead4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d387b8));
  return;
}



/* Entry: 100e0eae4; end: 100e0eb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0eae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d387a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d387b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d387b8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e0eb68; end: 100e0ec07; -[SCBillboardCampaignMetadata initWithCampaignName:uxConfig:cooldownConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0eb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d387a8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d387b0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112d387b8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 100e0ec08; end: 100e0ec77;  */

undefined8 FUN_100e0ec08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000100e11668(param_1);
  func_0x000100e08e2c(param_1);
  return uVar1;
}



/* Entry: 100e0ec78; end: 100e0ed0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ec78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(int *)(unaff_x20 + _DAT_112d387c0) = (int)param_1;
  *(int *)(unaff_x20 + _DAT_112d387c8) = (int)((ulong)param_1 >> 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d387d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d387d8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e0ed0c; end: 100e0ed3f; -[SCBillboardCampaignMetadata hash] */

undefined8 FUN_100e0ed0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e0ed40();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e0ed40; end: 100e0ef87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ed40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d387a8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112d387a8))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  func_0x000100e0ede0();
  func_0x000107c60690();
  func_0x000100e0eeb0();
  func_0x000107c60690();
  func_0x000107c606a4();
  return;
}



/* Entry: 100e0ef88; end: 100e0f0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e0ef88(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lStack_68;
  undefined8 auStack_60 [3];
  undefined8 *puStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_100e12148(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (puStack_48 == (undefined8 *)0x0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    func_0x000107c6147c(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112d387a8);
      if (lVar1 == *(long *)(lStack_68 + _DAT_112d387a8) &&
          ((long *)(unaff_x20 + _DAT_112d387a8))[1] == ((long *)(lStack_68 + _DAT_112d387a8))[1]) {
        lVar6 = 1;
      }
      else {
        func_0x000107c605b8();
        lVar6 = lVar1;
      }
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_112d387b0);
      func_0x000100e11804();
      auStack_60[0] = uVar7;
      puStack_48 = (undefined8 *)lVar1;
      func_0x000107c61174(uVar7);
      puVar3 = auStack_60;
      FUN_100e0f0e4(puVar3);
      puVar4 = auStack_60;
      func_0x00010006e7f4();
      uVar7 = *(undefined8 *)(lStack_68 + _DAT_112d387b8);
      func_0x000100e11824();
      auStack_60[0] = uVar7;
      puStack_48 = puVar4;
      func_0x000107c61174(uVar7);
      puVar4 = auStack_60;
      FUN_100e0f26c(puVar4);
      func_0x000107c61170(lStack_68);
      func_0x00010006e7f4(auStack_60);
      uVar5 = (uint)lVar6 & (uint)puVar3 & (uint)puVar4;
      goto LAB_100e0f0c8;
    }
  }
  uVar5 = 0;
LAB_100e0f0c8:
  return uVar5 & 1;
}



/* Entry: 100e0f0e4; end: 100e0f26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e0f0e4(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lStack_58;
  long alStack_50 [3];
  long *plStack_38;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  FUN_100e12148(param_1,alStack_50,0x112d387f8,&UNK_10d902650);
  if (plStack_38 == (long *)0x0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,alStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = lStack_58;
      if (*(char *)(unaff_x20 + _DAT_112d387e0) == *(char *)(lStack_58 + _DAT_112d387e0)) {
        if (*(char *)(unaff_x20 + _DAT_112d387e0) == '\x01') {
          lVar3 = _DAT_112d387f0;
          if (*(long *)(unaff_x20 + _DAT_112d387f0) == 0) {
LAB_100e0f1e4:
            lVar4 = *(long *)(lStack_58 + lVar3);
            lVar3 = lVar4;
            func_0x000107c61174(lVar4);
            func_0x000107c61170(lStack_58);
            if (lVar4 == 0) {
              uVar2 = 1;
              goto LAB_100e0f1ac;
            }
            goto LAB_100e0f1a4;
          }
          lVar3 = *(long *)(lStack_58 + _DAT_112d387f0);
          if (lVar3 == 0) {
            plVar1 = (long *)0x0;
            alStack_50[1] = 0;
            alStack_50[2] = 0;
          }
          else {
            func_0x000100e11844();
          }
          alStack_50[0] = lVar3;
          plStack_38 = plVar1;
          func_0x000107c61174(lVar3);
          plVar1 = alStack_50;
          FUN_100e0fc58(plVar1);
          uVar2 = (uint)plVar1;
        }
        else {
          lVar3 = _DAT_112d387e8;
          if (*(long *)(unaff_x20 + _DAT_112d387e8) == 0) goto LAB_100e0f1e4;
          lVar3 = *(long *)(lStack_58 + _DAT_112d387e8);
          if (lVar3 == 0) {
            plVar1 = (long *)0x0;
            alStack_50[1] = 0;
            alStack_50[2] = 0;
          }
          else {
            func_0x000100e11864();
          }
          alStack_50[0] = lVar3;
          plStack_38 = plVar1;
          func_0x000107c61174(lVar3);
          plVar1 = alStack_50;
          FUN_100e0f9ac(plVar1);
          uVar2 = (uint)plVar1;
        }
        func_0x000107c61170(lStack_58);
        func_0x00010006e7f4(alStack_50);
        goto LAB_100e0f1ac;
      }
LAB_100e0f1a4:
      func_0x000107c61170(lVar3);
    }
  }
  uVar2 = 0;
LAB_100e0f1ac:
  return uVar2 & 1;
}



/* Entry: 100e0f26c; end: 100e0f3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e0f26c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  FUN_100e12148(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar6 = &lStack_78;
    func_0x000107c6147c(plVar6,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_112d387c0);
      iVar2 = *(int *)(lStack_78 + _DAT_112d387c0);
      iVar3 = *(int *)(unaff_x20 + _DAT_112d387c8);
      iVar4 = *(int *)(lStack_78 + _DAT_112d387c8);
      lVar5 = *(long *)(unaff_x20 + _DAT_112d387d0);
      if (lVar5 == *(long *)(lStack_78 + _DAT_112d387d0) &&
          ((long *)(unaff_x20 + _DAT_112d387d0))[1] == ((long *)(lStack_78 + _DAT_112d387d0))[1]) {
        uVar7 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar7 = (uint)lVar5;
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d387d8);
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_112d387d8);
      func_0x000107c61434(uVar9);
      FUN_100e0c308(uVar8,uVar9);
      func_0x000107c61170(lStack_78);
      func_0x000107c6142c(uVar9);
      if (iVar1 == iVar2 && iVar3 == iVar4) {
        uVar7 = uVar7 & (uint)uVar8;
        goto LAB_100e0f390;
      }
    }
  }
  uVar7 = 0;
LAB_100e0f390:
  return uVar7 & 1;
}



/* Entry: 100e0f3b8; end: 100e0f3c3; -[SCBillboardCampaignMetadata isEqual:] */

uint FUN_100e0f3b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_100e0ef88(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e0f3c4; end: 100e0f3fb; -[SCBillboardCampaignMetadata description] */

void FUN_100e0f3c4(void)

{
  undefined1 auStack_a8 [152];
  
  func_0x000107c61174();
  func_0x000100e11b30(auStack_a8);
  func_0x000100e08e2c(auStack_a8);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0f3fc; end: 100e0f443; -[SCBillboardCampaignMetadata init] */

void FUN_100e0f3fc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0f444);
  (*pcVar1)();
}



/* Entry: 100e0f444; end: 100e0f447;  */

void FUN_100e0f444(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e0f448; end: 100e0f53f; -[SCBillboardCampaignMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e0f478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0f47c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0f448(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d387a8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d387b0));
  return;
}



/* Entry: 100e0f540; end: 100e0f57f;  */

void FUN_100e0f540(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 100e0f580; end: 100e0f5ff;  */

undefined8 FUN_100e0f580(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_100e11284(param_1);
  FUN_100e11c4c(param_1);
  return uVar1;
}



/* Entry: 100e0f600; end: 100e0f633; -[SCCampaignUXConfig description] */

void FUN_100e0f600(void)

{
  undefined1 auStack_78 [104];
  
  FUN_100e11994(auStack_78);
  func_0x000100e11cb4(auStack_78);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0f634; end: 100e0f67b; -[SCCampaignUXConfig init] */

void FUN_100e0f634(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x79,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0f67c);
  (*pcVar1)();
}



/* Entry: 100e0f67c; end: 100e0f6af; -[SCCampaignUXConfig hash] */

undefined8 FUN_100e0f67c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e0ede0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e0f6b0; end: 100e0f9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0f6b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d38800);
  func_0x000107c606ac(auStack_c0);
  func_0x000107c60690(0);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d38808);
  if (puVar1[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *puVar1;
    func_0x000107c5fadc(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar4);
  func_0x000107c606a4();
  func_0x000107c60690();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d38810);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d38810))[1]);
  uVar2 = uVar4;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar4);
  func_0x000107c60690(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_112d38818))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d38818);
    func_0x000107c5fadc(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_112d38820))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d38820);
    func_0x000107c5fadc(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar4);
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_112d38828));
  func_0x000107c60690();
  if (((undefined8 *)(unaff_x20 + _DAT_112d38830))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d38830);
    func_0x000107c5fadc(uVar2);
    uVar4 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar4);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d38838);
  if (lVar3 == 0) {
    func_0x000107c60694();
  }
  else {
    func_0x000107c44c3c();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar3);
  }
  func_0x000107c6069c(*(undefined4 *)(unaff_x20 + _DAT_112d38840));
  func_0x000107c606a4();
  return;
}



/* Entry: 100e0f9ac; end: 100e0fc57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e0f9ac(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lStack_88;
  undefined8 auStack_80 [3];
  long *plStack_68;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  FUN_100e12148(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (plStack_68 == (long *)0x0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar6 = &lStack_88;
    func_0x000107c6147c(plVar6,auStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar6 & 1) != 0) {
      uVar11 = *(undefined8 *)(lStack_88 + _DAT_112d38800);
      FUN_100e11ce8();
      auStack_80[0] = uVar11;
      plStack_68 = plVar6;
      func_0x000107c61174(uVar11);
      uVar7 = 0;
      func_0x000100e100c0();
      func_0x00010006e7f4(auStack_80);
      lVar9 = *(long *)(unaff_x20 + _DAT_112d38810);
      if (lVar9 == *(long *)(lStack_88 + _DAT_112d38810) &&
          ((long *)(unaff_x20 + _DAT_112d38810))[1] == ((long *)(lStack_88 + _DAT_112d38810))[1]) {
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar3 = (uint)lVar9;
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_112d38818))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_112d38818))[1];
      uVar12 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar8 = *(long *)(unaff_x20 + _DAT_112d38818);
        if ((lVar8 == *(long *)(lStack_88 + _DAT_112d38818)) && (lVar9 == lVar10)) {
          uVar12 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar12 = (uint)lVar8;
        }
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_112d38820))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_112d38820))[1];
      uVar13 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar8 = *(long *)(unaff_x20 + _DAT_112d38820);
        if ((lVar8 == *(long *)(lStack_88 + _DAT_112d38820)) && (lVar9 == lVar10)) {
          uVar13 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar13 = (uint)lVar8;
        }
      }
      uVar4 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112d38828);
      func_0x000107c49cec();
      lVar9 = ((long *)(unaff_x20 + _DAT_112d38830))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_112d38830))[1];
      uVar14 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar8 = *(long *)(unaff_x20 + _DAT_112d38830);
        if ((lVar8 == *(long *)(lStack_88 + _DAT_112d38830)) && (lVar9 == lVar10)) {
          uVar14 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar14 = (uint)lVar8;
        }
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_112d38838);
      if (lVar9 == 0) {
        uVar5 = (uint)(*(long *)(lStack_88 + _DAT_112d38838) == 0);
      }
      else {
        func_0x000107c49cec();
        uVar5 = (uint)lVar9;
      }
      iVar1 = *(int *)(unaff_x20 + _DAT_112d38840);
      iVar2 = *(int *)(lStack_88 + _DAT_112d38840);
      func_0x000107c61170(lStack_88);
      if (((uVar7 & 1) != 0) && ((uVar3 & uVar12 & uVar13 & uVar4 & uVar14 & 1) != 0)) {
        return uVar5 & iVar1 == iVar2;
      }
    }
  }
  return 0;
}



/* Entry: 100e0fc58; end: 100e0fe0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100e0fc58(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  undefined8 auStack_60 [3];
  long *plStack_48;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  FUN_100e12148(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (plStack_48 == (long *)0x0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    func_0x000107c6147c(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_112d38848);
      func_0x000100e11d08();
      auStack_60[0] = uVar9;
      plStack_48 = plVar3;
      func_0x000107c61174(uVar9);
      uVar1 = 0;
      func_0x000100e10938();
      func_0x00010006e7f4(auStack_60);
      lVar5 = *(long *)(unaff_x20 + _DAT_112d38850);
      if (lVar5 == *(long *)(lStack_68 + _DAT_112d38850) &&
          ((long *)(unaff_x20 + _DAT_112d38850))[1] == ((long *)(lStack_68 + _DAT_112d38850))[1]) {
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar2 = (uint)lVar5;
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_112d38858))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_112d38858))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112d38858);
        if ((lVar4 == *(long *)(lStack_68 + _DAT_112d38858)) && (lVar5 == lVar6)) {
          uVar7 = 1;
        }
        else {
          func_0x000107c605b8();
          uVar7 = (uint)lVar4;
        }
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d38860);
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_112d38860);
      func_0x000107c61174(uVar9);
      func_0x000107c49cec(uVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lStack_68);
      if ((uVar1 & uVar2 & 1) != 0) {
        uVar7 = uVar7 & (uint)uVar8;
        goto LAB_100e0fdf0;
      }
    }
  }
  uVar7 = 0;
LAB_100e0fdf0:
  return uVar7 & 1;
}



/* Entry: 100e0fe0c; end: 100e0fe17; -[SCCampaignUXConfig isEqual:] */

uint FUN_100e0fe0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_100e0f0e4(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e0fe18; end: 100e0fe8b; +[SCCampaignUXConfig feedHeaderPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0fe18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d387e0) = 0;
  *(undefined8 *)(lVar2 + _DAT_112d387e8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112d387f0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0fe8c; end: 100e0ff03; +[SCCampaignUXConfig profileActivityCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0fe8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112d387e0) = 1;
  *(undefined8 *)(lVar2 + _DAT_112d387e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_112d387f0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e0ff04; end: 100e0ff4f; -[SCCampaignUXConfig matchFeedHeaderPrompt:profileActivityCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ff04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_112d387e0) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_112d387f0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0ff30);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_112d387e8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0ff50);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000100e0ff48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 100e0ff50; end: 100e0ff87; -[SCCampaignUXConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e0ff6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e0ff70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ff50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d387e8));
  return;
}



/* Entry: 100e0ff88; end: 100e0ff8f;  */

undefined8 FUN_100e0ff88(void)

{
  return 1;
}



/* Entry: 100e0ff90; end: 100e0ffc3; -[SCFeedHeaderPromptIcon description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e0ff90(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112d38808 + 8) != 0) {
    func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e0ffc4);
  (*pcVar1)();
}



/* Entry: 100e0ffc4; end: 100e1000b; -[SCFeedHeaderPromptIcon init] */

void FUN_100e0ffc4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0xdc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e1000c);
  (*pcVar1)();
}



/* Entry: 100e1000c; end: 100e101d3; -[SCFeedHeaderPromptIcon hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100e1000c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d38808))[1];
  if (lVar1 == 0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d38808);
    func_0x000107c61174(param_1);
    func_0x000107c5fadc(uVar2,lVar1);
    uVar3 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar3);
  func_0x000107c606a4();
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100e101d4; end: 100e101df; -[SCFeedHeaderPromptIcon isEqual:] */

uint FUN_100e101d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*(code *)0x100e100c0)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e101e0; end: 100e1024f; +[SCFeedHeaderPromptIcon iconUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e101e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d38808);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e10250; end: 100e102c3; -[SCFeedHeaderPromptIcon matchIconUrl:] */

/* WARNING: Possible PIC construction at 0x000100e102a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e102ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10250(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ((undefined8 *)(param_1 + _DAT_112d38808))[1];
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112d38808);
    func_0x000107c61174();
    func_0x000107c5fadc(uVar3,lVar2);
    (**(code **)(param_3 + 0x10))(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e102c4);
  (*pcVar1)();
}



/* Entry: 100e102c4; end: 100e102d7; -[SCFeedHeaderPromptIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e102c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d38808 + 8))
  ;
  return;
}



/* Entry: 100e102d8; end: 100e102e7; -[SCFeedHeaderPromptUXConfig icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e102d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38800));
  return;
}



/* Entry: 100e102e8; end: 100e102f3; -[SCFeedHeaderPromptUXConfig primaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e102e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d38810);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d38810))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e102f4; end: 100e102ff; -[SCFeedHeaderPromptUXConfig secondaryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e102f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d38818))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d38818);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10300; end: 100e1030b; -[SCFeedHeaderPromptUXConfig accessibilityText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d38820))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d38820);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e1030c; end: 100e1031b; -[SCFeedHeaderPromptUXConfig onTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1030c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38828));
  return;
}



/* Entry: 100e1031c; end: 100e10327; -[SCFeedHeaderPromptUXConfig extraButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e1031c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d38830))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d38830);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10328; end: 100e10337; -[SCFeedHeaderPromptUXConfig extraButtonOnTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38838));
  return;
}



/* Entry: 100e10338; end: 100e10347; -[SCFeedHeaderPromptUXConfig layoutVariant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100e10338(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112d38840);
}



/* Entry: 100e10348; end: 100e1044f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d38800) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38810);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38818);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38820);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d38828) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38830);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d38838) = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_112d38840) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e10450; end: 100e105d7; -[SCFeedHeaderPromptUXConfig initWithIcon:primaryText:secondaryText:accessibilityText:onTapAction:extraButtonText:extraButtonOnTapAction:layoutVariant:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10450(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined4 param_10)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_90;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_5 == 0) {
    lStack_90 = 0;
    lVar6 = 0;
    lVar5 = param_2;
  }
  else {
    lVar6 = param_2;
    func_0x000107c5faec();
    lVar5 = lVar6;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = lVar5;
  }
  if (param_8 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112d38800) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d38810);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112d38818);
  *plVar2 = lStack_90;
  plVar2[1] = lVar6;
  plVar2 = (long *)(param_1 + _DAT_112d38820);
  *plVar2 = param_6;
  plVar2[1] = lVar3;
  *(undefined8 *)(param_1 + _DAT_112d38828) = param_7;
  plVar2 = (long *)(param_1 + _DAT_112d38830);
  *plVar2 = param_8;
  plVar2[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_112d38838) = param_9;
  *(undefined4 *)(param_1 + _DAT_112d38840) = param_10;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e105d8; end: 100e1060b; -[SCFeedHeaderPromptUXConfig hash] */

undefined8 FUN_100e105d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e0f6b0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e1060c; end: 100e10617; -[SCFeedHeaderPromptUXConfig isEqual:] */

uint FUN_100e1060c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_100e0f9ac(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e10618; end: 100e1064b; -[SCFeedHeaderPromptUXConfig description] */

void FUN_100e10618(void)

{
  undefined1 auStack_78 [104];
  
  FUN_100e11884(auStack_78);
  FUN_100e11c4c(auStack_78);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e1064c; end: 100e10693; -[SCFeedHeaderPromptUXConfig init] */

void FUN_100e1064c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x16f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e10694);
  (*pcVar1)();
}



/* Entry: 100e10694; end: 100e107a7; -[SCFeedHeaderPromptUXConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e106b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e106fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e106b4) */
/* WARNING: Removing unreachable block (ram,0x000100e10700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d38800));
  return;
}



/* Entry: 100e107a8; end: 100e107af;  */

undefined8 FUN_100e107a8(void)

{
  return 1;
}



/* Entry: 100e107b0; end: 100e107fb; -[SCProfileActivityCardIcon description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e107b0(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + _DAT_112d38868 + 8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100e107f8);
    (*pcVar1)();
  }
  if (*(char *)(param_1 + _DAT_112d38870) != '\x02') {
    func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e107fc);
  (*pcVar1)();
}



/* Entry: 100e107fc; end: 100e10843; -[SCProfileActivityCardIcon init] */

void FUN_100e107fc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x1a6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e10844);
  (*pcVar1)();
}



/* Entry: 100e10844; end: 100e10877; -[SCProfileActivityCardIcon hash] */

undefined8 FUN_100e10844(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e10878();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e10878; end: 100e10a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10878(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(0);
  if (((undefined8 *)(unaff_x20 + _DAT_112d38868))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d38868);
    func_0x000107c5fadc(uVar2);
    uVar3 = uVar2;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c60690(uVar3);
  bVar1 = *(byte *)(unaff_x20 + _DAT_112d38870);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    func_0x000107c60694(1);
    bVar1 = bVar1 & 1;
  }
  func_0x000107c60694(bVar1);
  func_0x000107c606a4();
  return;
}



/* Entry: 100e10a68; end: 100e10a73; -[SCProfileActivityCardIcon isEqual:] */

uint FUN_100e10a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*(code *)0x100e10938)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e10a74; end: 100e10af3; +[SCProfileActivityCardIcon iconUrlWithUrl:isMiniCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10a74(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  func_0x000107c5faec();
  lVar2 = param_1;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d38868);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)(lVar2 + _DAT_112d38870) = param_4;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e10af4; end: 100e10b8b; -[SCProfileActivityCardIcon matchIconUrl:] */

/* WARNING: Possible PIC construction at 0x000100e10b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e10b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10af4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = ((undefined8 *)(param_1 + _DAT_112d38868))[1];
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100e10b88);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(param_1 + _DAT_112d38870);
  if (bVar1 != 2) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112d38868);
    func_0x000107c61174();
    func_0x000107c5fadc(uVar4,lVar3);
    (**(code **)(param_3 + 0x10))(param_3,uVar4,bVar1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100e10b8c);
  (*pcVar2)();
}



/* Entry: 100e10b8c; end: 100e10b9f; -[SCProfileActivityCardIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d38868 + 8))
  ;
  return;
}



/* Entry: 100e10ba0; end: 100e10baf; -[SCProfileActivityCardUXConfig icon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38848));
  return;
}



/* Entry: 100e10bb0; end: 100e10bbb; -[SCProfileActivityCardUXConfig title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10bb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d38850);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d38850))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10bbc; end: 100e10bc7; -[SCProfileActivityCardUXConfig subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10bbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112d38858))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d38858);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10bc8; end: 100e10c1f;  */

void FUN_100e10bc8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10c20; end: 100e10c2f; -[SCProfileActivityCardUXConfig onTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d38860));
  return;
}



/* Entry: 100e10c30; end: 100e10cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d38848) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38850);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38858);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d38860) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e10cd4; end: 100e10daf; -[SCProfileActivityCardUXConfig initWithIcon:title:subtitle:onTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10cd4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112d38848) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d38850);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112d38858);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  *(undefined8 *)(param_1 + _DAT_112d38860) = param_6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 100e10db0; end: 100e10de3; -[SCProfileActivityCardUXConfig hash] */

undefined8 FUN_100e10db0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e0f8c8();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e10de4; end: 100e10def; -[SCProfileActivityCardUXConfig isEqual:] */

uint FUN_100e10de4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_100e0fc58(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e10df0; end: 100e10e23; -[SCProfileActivityCardUXConfig description] */

void FUN_100e10df0(void)

{
  undefined1 auStack_50 [64];
  
  FUN_100e11d28(auStack_50);
  func_0x000100e11c80(auStack_50);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e10e24; end: 100e10e6b; -[SCProfileActivityCardUXConfig init] */

void FUN_100e10e24(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x21e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e10e6c);
  (*pcVar1)();
}



/* Entry: 100e10e6c; end: 100e10ecb; -[SCProfileActivityCardUXConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e10e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e10e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d38848));
  return;
}



/* Entry: 100e10ecc; end: 100e10edb; -[SCCampaignCooldownConfig supStorageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100e10ecc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112d387c0);
}



/* Entry: 100e10edc; end: 100e10eeb; -[SCCampaignCooldownConfig campaignVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100e10edc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112d387c8);
}



/* Entry: 100e10eec; end: 100e10ef7; -[SCCampaignCooldownConfig category] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10eec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d387d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d387d0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10ef8; end: 100e10f3f;  */

void FUN_100e10ef8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e10f40; end: 100e10f8f; -[SCCampaignCooldownConfig campaignCooldownCapRuleOverrides] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10f40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d387d8);
  FUN_100e117c0(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e10f90; end: 100e11023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e10f90(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined4 *)(unaff_x20 + _DAT_112d387c0) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_112d387c8) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d387d0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d387d8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e11024; end: 100e110e3; -[SCCampaignCooldownConfig initWithSupStorageId:campaignVersion:category:campaignCooldownCapRuleOverrides:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11024(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = 0;
  FUN_100e117c0(0);
  func_0x000107c5fc54(param_6,uVar3);
  *(undefined4 *)(param_1 + _DAT_112d387c0) = param_3;
  *(undefined4 *)(param_1 + _DAT_112d387c8) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d387d0);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d387d8) = param_6;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e110e4; end: 100e11117; -[SCCampaignCooldownConfig hash] */

undefined8 FUN_100e110e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100e0eeb0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100e11118; end: 100e11123; -[SCCampaignCooldownConfig isEqual:] */

uint FUN_100e11118(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_100e0f26c(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e11124; end: 100e111af;  */

uint FUN_100e11124(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  (*param_4)(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 100e111b0; end: 100e111cb; -[SCCampaignCooldownConfig description] */

void FUN_100e111b0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e111cc; end: 100e11247; -[SCCampaignCooldownConfig init] */

void FUN_100e111cc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "BillboardGrpcService/BillboardCampaignMetadataWrapper.swift",0x3b,2,0x274,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e11214);
  (*pcVar1)();
}



/* Entry: 100e11248; end: 100e11283; -[SCCampaignCooldownConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e11268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e1126c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d387d0 + 8))
  ;
  return;
}



/* Entry: 100e11284; end: 100e11417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11284(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar5 = *param_1;
  uVar6 = param_1[1];
  FUN_100e11ce8();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112d38808);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(uVar6);
  puVar4 = auStack_98;
  func_0x000107c61154(puVar4,puVar2);
  *(undefined1 **)(unaff_x20 + _DAT_112d38800) = puVar4;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38810);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38818);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38820);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uVar5 = param_1[8];
  *(undefined8 *)(unaff_x20 + _DAT_112d38828) = uVar5;
  uVar6 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38830);
  puVar1[1] = param_1[10];
  *puVar1 = uVar6;
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uStack_88 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_112d38838) = uStack_88;
  *(undefined4 *)(unaff_x20 + _DAT_112d38840) = *(undefined4 *)(param_1 + 0xc);
  func_0x000100402194(&uStack_50,auStack_a8);
  FUN_100e12148(&uStack_60,auStack_a8,0x112d35ff8,&UNK_10d900cd0);
  FUN_100e12148(&uStack_70,auStack_a8,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c61174(uVar5);
  FUN_100e12148(&uStack_80,auStack_a8,0x112d35ff8,&UNK_10d900cd0);
  FUN_100e12148(&uStack_88,auStack_a8,0x112d389b8,&UNK_10d902980);
  func_0x000107c61154(&stack0xffffffffffffff48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e11418; end: 100e117bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e11418(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  uVar7 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  func_0x000100e11d08();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d38868);
  *puVar1 = uVar7;
  puVar1[1] = uVar2;
  *(undefined1 *)(lVar5 + _DAT_112d38870) = uVar3;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61434(uVar2);
  puVar6 = auStack_80;
  func_0x000107c61154(puVar6,puVar4);
  *(undefined1 **)(unaff_x20 + _DAT_112d38848) = puVar6;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38850);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d38858);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uVar7 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_112d38860) = uVar7;
  func_0x000100402194(&uStack_60,auStack_90);
  FUN_100e12148(&uStack_70,auStack_90,0x112d35ff8,&UNK_10d900cd0);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&stack0xffffffffffffff60,puVar4);
  return;
}


