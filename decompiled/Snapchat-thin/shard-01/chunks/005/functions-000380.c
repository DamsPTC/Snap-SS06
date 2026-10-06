/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011e1ac8; end: 1011e1b4f; -[SCMessagingSDNSuppressionPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e1ac8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d66820,0);
  func_0x000107c61614(param_1 + _DAT_112d66828,0);
  func_0x000107c61614(param_1 + _DAT_112d66830,0);
  *(undefined8 *)(param_1 + _DAT_112d66838) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e1b50; end: 1011e1b83;  */

void FUN_1011e1b50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011e1b84; end: 1011e1bdb; -[SCMessagingSDNSuppressionPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e1b84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d66820);
  func_0x000107c61610(param_1 + _DAT_112d66828);
  func_0x000107c61610(param_1 + _DAT_112d66830);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d66838));
  return;
}



/* Entry: 1011e1bdc; end: 1011e1bfb;  */

void FUN_1011e1bdc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8e88);
  return;
}



/* Entry: 1011e1bfc; end: 1011e1cab; +[_TtC18OperaChromeHelpers18OperaChromeHelpers attributionStringWithProvenance:timing:playback:] */

void FUN_1011e1bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  lVar2 = param_4;
  func_0x000107c61174(param_4);
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  func_0x0001011e24f0(param_3,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1011e1cac; end: 1011e1ce7; -[_TtC18OperaChromeHelpers18OperaChromeHelpers init] */

void FUN_1011e1cac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1011e2b38();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e1ce8; end: 1011e1d17;  */

void FUN_1011e1ce8(void)

{
  FUN_1011e2b38();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011e1d18; end: 1011e1ed3;  */

ulong FUN_1011e1d18(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e1dfc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e1e00);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1011e2b58(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e1ed4);
  (*pcVar2)();
}



/* Entry: 1011e1ed4; end: 1011e2b37;  */

void FUN_1011e1ed4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_68;
  
  func_0x000107c4e928();
  func_0x000107c61180();
  if (param_1 != 0) {
    uStack_68 = 0;
    uVar4 = 0;
    FUN_1011e2b58(0,0x112d55598,&PTR_PTR_1126b25d0);
    func_0x000107c5fc50(param_1,&uStack_68,uVar4);
    func_0x000107c61170(param_1);
    uVar1 = uStack_68;
    if (uStack_68 != 0) {
      uVar10 = uStack_68 & 0xffffffffffffff8;
      if (uStack_68 >> 0x3e == 0) {
        uVar14 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar14 = uStack_68;
        if (-1 < (long)uStack_68) {
          uVar14 = uVar10;
        }
        func_0x000107c60480();
      }
      if (uVar14 != 0) {
        uVar12 = 0;
        do {
          while( true ) {
            if ((uVar1 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e21a4);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar1 + 0x20 + uVar12 * 8);
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar12;
              FUN_1011e1d18(uVar12,uVar1,&PTR_PTR_1126b25d0,0x112d55598);
            }
            bVar3 = SCARRY8(uVar12,1);
            uVar12 = uVar12 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e21a0);
              (*pcVar2)();
            }
            uVar6 = uVar5;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (uVar6 != 0) break;
LAB_1011e1f88:
            func_0x000107c61170(uVar5);
            if (uVar12 == uVar14) goto LAB_1011e21b8;
          }
          uVar7 = uVar6;
          func_0x000107c4e088();
          if ((int)uVar7 == 0x1e) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(uVar1);
            return;
          }
          uVar7 = uVar6;
          func_0x000107c3d988();
          func_0x000107c61180();
          if (uVar7 == 0) {
            func_0x000107c61170(uVar5);
            uVar5 = uVar6;
            goto LAB_1011e1f88;
          }
          uStack_68 = 0;
          uVar4 = 0;
          FUN_1011e2b58(0,0x112d530c8,&PTR_PTR_1126affc8);
          func_0x000107c5fc50(uVar7,&uStack_68,uVar4);
          func_0x000107c61170(uVar7);
          uVar7 = uStack_68;
          if (uStack_68 == 0) {
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar6);
          }
          else {
            uVar11 = uStack_68 & 0xffffffffffffff8;
            if (uStack_68 >> 0x3e == 0) {
              uVar13 = *(ulong *)(uVar11 + 0x10);
            }
            else {
              uVar13 = uStack_68;
              if (-1 < (long)uStack_68) {
                uVar13 = uVar11;
              }
              func_0x000107c60480();
            }
            uVar15 = 0;
            while (uVar13 != uVar15) {
              if ((uVar7 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar11 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e219c);
                  (*pcVar2)();
                }
                uVar8 = *(ulong *)(uVar7 + uVar15 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar15;
                FUN_1011e1d18(uVar15,uVar7,&PTR_PTR_1126affc8,0x112d530c8);
              }
              if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e2198);
                (*pcVar2)();
              }
              uVar9 = uVar8;
              func_0x000107c4e088();
              func_0x000107c61170(uVar8);
              uVar15 = uVar15 + 1;
              if ((int)uVar9 == 5) {
                func_0x000107c6142c(uVar1);
                func_0x000107c6142c(uVar7);
                func_0x000107c61170(uVar5);
                func_0x000107c61170(uVar6);
                return;
              }
            }
            func_0x000107c6142c(uVar7);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar6);
          }
        } while (uVar12 != uVar14);
      }
LAB_1011e21b8:
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 1011e2b38; end: 1011e2b57;  */

void FUN_1011e2b38(void)

{
  func_0x000107c61168(&PTR_PTR_1127b8f58);
  return;
}



/* Entry: 1011e2b58; end: 1011e2b97;  */

void FUN_1011e2b58(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011e2b98; end: 1011e2bd7;  */

undefined1  [16] FUN_1011e2b98(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7469775f6564616d;
  func_0x000107c5fadc(0x7469775f6564616d,0xec00000069615f68);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2e84);
  (*pcVar1)();
}



/* Entry: 1011e2bd8; end: 1011e2ca3;  */

undefined1  [16] FUN_1011e2bd8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef2cfb0);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2ca4);
  (*pcVar1)();
}



/* Entry: 1011e2ca4; end: 1011e2cd7;  */

undefined1  [16] FUN_1011e2ca4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x736569726f6d656d;
  func_0x000107c5fadc(0x736569726f6d656d,0xe800000000000000);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2e84);
  (*pcVar1)();
}



/* Entry: 1011e2cd8; end: 1011e2da3;  */

undefined1  [16] FUN_1011e2cd8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2cfd0);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2da4);
  (*pcVar1)();
}



/* Entry: 1011e2da4; end: 1011e2dd3;  */

undefined1  [16] FUN_1011e2da4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x756f735f6d6f7266;
  func_0x000107c5fadc(0x756f735f6d6f7266,0xeb00000000656372);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2e84);
  (*pcVar1)();
}



/* Entry: 1011e2dd4; end: 1011e2e83;  */

undefined1  [16] FUN_1011e2dd4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2cf90);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2e84);
  (*pcVar1)();
}



/* Entry: 1011e2e84; end: 1011e2ee3; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation29PublicGroupsDeepLinkProcessor init] */

void FUN_1011e2e84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsDeepLinkProcessorPluginImplementation.PublicGroupsDeepLinkProcessor"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e2eb0);
  (*pcVar1)();
}



/* Entry: 1011e2ee4; end: 1011e2f2b; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation29PublicGroupsDeepLinkProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011e2f00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e2f04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e2ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d66890);
  return;
}



/* Entry: 1011e2f2c; end: 1011e33e7;  */

/* WARNING: Possible PIC construction at 0x0001011e3004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e33d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e3008) */
/* WARNING: Removing unreachable block (ram,0x0001011e300c) */
/* WARNING: Removing unreachable block (ram,0x0001011e33dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e2f2c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [80];
  undefined1 auStack_b0 [80];
  
  lVar5 = param_2;
  func_0x000107c4e434(param_1,param_2,1);
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_b0;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar9;
    *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000002d;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef2cff0;
    lVar6 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_1011e3c64((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010d92b070);
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    lVar6 = unaff_x20 + _DAT_112d66890;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar2 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar2 != 0) {
        FUN_1011e3954();
        lVar6 = unaff_x20 + _DAT_112d668a0;
        func_0x000107c61618();
        if (lVar6 != 0) {
          lVar3 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar3 != 0) {
            func_0x000107c41ec4(lVar3);
            lVar2 = lVar3;
            goto code_r0x000107c615e8;
          }
        }
        func_0x000107c4bb48(param_3);
        if (param_2 == 0x50) {
          FUN_1011e33e8(lVar1,lVar5,0x50,param_3);
          func_0x000107c6142c(lVar5);
        }
        else {
          puVar8 = &UNK_110391d48;
          func_0x000107c613fc(&UNK_110391d48,0x18,7);
          func_0x000107c61614(puVar8 + 0x10);
          puVar7 = &UNK_110391d70;
          func_0x000107c613fc(&UNK_110391d70,0x38,7);
          *(undefined **)(puVar7 + 0x10) = puVar8;
          *(long *)(puVar7 + 0x18) = lVar1;
          *(long *)(puVar7 + 0x20) = lVar5;
          *(long *)(puVar7 + 0x28) = param_2;
          *(undefined8 *)(puVar7 + 0x30) = param_3;
          pcStack_110 = FUN_1011e3c24;
          puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_128 = 0x42000000;
          puStack_120 = &UNK_100ab47f8;
          puStack_118 = &UNK_110391d88;
          puStack_108 = puVar7;
          func_0x000107c60bc4(&puStack_130);
          puVar8 = puStack_108;
          func_0x000107c615f0(param_3);
          func_0x000107c61574(puVar8);
          func_0x000107c5ae80(lVar2);
        }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
    func_0x000107c6142c(lVar5);
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_100;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    puVar8 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar5 + 0x28) = puVar9;
    *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001e;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010ef2d020;
    lVar6 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    FUN_1011e3c64((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010d92b070);
    lVar5 = lVar6;
    func_0x000107c5f9dc(lVar6,puVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c466bc(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61174(puVar7);
  puVar8 = puVar7;
  func_0x000107c5ed2c();
  func_0x000107c4bb48(param_3);
  func_0x000107c61170(puVar8);
  puVar8 = puVar7;
  func_0x000107c5ed2c(puVar7);
  func_0x000107c4bb60(param_3);
  func_0x000107c61170(puVar8);
  func_0x000107c42804(param_3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1011e33e8; end: 1011e36c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e33e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [80];
  
  ppuVar4 = &puStack_d0;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d66898);
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar8 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    puVar7 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar8;
    *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000018;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010ef2d040;
    lVar1 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    FUN_1011e3c64((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010d92b070);
    lVar2 = lVar1;
    func_0x000107c5f9dc(lVar1,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar1);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61174(puVar6);
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c4bb60(param_4);
    func_0x000107c61170(puVar7);
    func_0x000107c42804(param_4);
    func_0x000107c61170(puVar6);
  }
  else {
    FUN_1011e4c54(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x0001011e4b00(param_1,param_2,param_3);
    pcVar3 = "launchTopicChat(groupId:sourceType:delegate:)";
    func_0x0001000c10c0("launchTopicChat(groupId:sourceType:delegate:)");
    func_0x000107c61180();
    puVar7 = &UNK_110391dc0;
    func_0x000107c613fc(&UNK_110391dc0,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar2;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    uStack_b0 = 0x1011e3c50;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_110391dd8;
    puStack_a8 = puVar7;
    func_0x000107c60bc4(&puStack_d0);
    puVar7 = puStack_a8;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_4);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1011e36c4; end: 1011e374b;  */

void FUN_1011e36c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1011e33e8(param_3,param_4,param_5,param_6);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1011e374c; end: 1011e37eb; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation29PublicGroupsDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1011e374c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1011e2f2c(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1011e37ec; end: 1011e37f3; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation29PublicGroupsDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1011e37ec(void)

{
  return 1;
}



/* Entry: 1011e37f4; end: 1011e37f7; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation29PublicGroupsDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1011e37f4(void)

{
  return;
}



/* Entry: 1011e37f8; end: 1011e38bb;  */

void FUN_1011e37f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110391e10;
  func_0x000107c613fc(&UNK_110391e10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uStack_50 = 0x1011e3c5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100f21850;
  puStack_58 = &UNK_110391e28;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f0(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4ab9c(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1011e38bc; end: 1011e3903;  */

void FUN_1011e38bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000107c4bb60(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_endDeepLinkProcessingScope_1125c2b68);
  return;
}



/* Entry: 1011e3904; end: 1011e3923;  */

void FUN_1011e3904(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9008);
  return;
}



/* Entry: 1011e3924; end: 1011e3953;  */

bool FUN_1011e3924(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1011e3954; end: 1011e3c23;  */

undefined ** FUN_1011e3954(undefined ***param_1,undefined ***param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined1 auStack_68 [40];
  undefined **ppuStack_40;
  undefined ***pppuStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110e63098;
  func_0x000107c5faec();
  ppuStack_78 = ppuVar2;
  pppuStack_70 = param_2;
  func_0x000107c61434(param_2);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_68,&ppuStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] == (undefined **)0x0) {
LAB_1011e39e8:
    pppuStack_38 = (undefined ***)0x0;
    ppuStack_40 = (undefined **)0x0;
    lStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    puVar3 = auStack_68;
    FUN_100df95d0(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_1011e39e8;
    }
    func_0x0001000bb420(param_1[7] + (long)puVar3 * 4,&ppuStack_40);
    func_0x000107c6142c(param_2);
    param_2 = param_1;
  }
  func_0x000107c6142c(param_2);
  func_0x0001007bbff0(auStack_68);
  if (lStack_28 == 0) {
    pppuVar5 = (undefined ***)0x112d387f8;
    FUN_1011e3c64(&ppuStack_40,0x112d387f8,&UNK_10d902650);
  }
  else {
    pppuVar4 = &ppuStack_78;
    pppuVar5 = &ppuStack_40;
    func_0x000107c6147c(pppuVar4,pppuVar5,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if (((ulong)pppuVar4 & 1) != 0) {
      return ppuStack_78;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e60d98;
  func_0x000107c5faec();
  ppuStack_40 = ppuVar2;
  pppuStack_38 = pppuVar5;
  func_0x000107c61434(pppuVar5);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_68,&ppuStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] == (undefined **)0x0) {
LAB_1011e3ad0:
    pppuStack_38 = (undefined ***)0x0;
    ppuStack_40 = (undefined **)0x0;
    lStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    puVar3 = auStack_68;
    FUN_100df95d0(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_1011e3ad0;
    }
    func_0x0001000bb420(param_1[7] + (long)puVar3 * 4,&ppuStack_40);
    func_0x000107c6142c(pppuVar5);
    pppuVar5 = param_1;
  }
  func_0x000107c6142c(pppuVar5);
  func_0x0001007bbff0(auStack_68);
  lVar1 = lStack_28;
  pppuVar5 = (undefined ***)0x112d387f8;
  FUN_1011e3c64(&ppuStack_40,0x112d387f8,&UNK_10d902650);
  if (lVar1 != 0) {
    return (undefined **)0x7;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e68ad8;
  func_0x000107c5faec();
  ppuStack_78 = ppuVar2;
  pppuStack_70 = pppuVar5;
  func_0x000107c61434(pppuVar5);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_68,&ppuStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] != (undefined **)0x0) {
    func_0x000107c61434(param_1);
    puVar3 = auStack_68;
    FUN_100df95d0(puVar3);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x0001000bb420(param_1[7] + (long)puVar3 * 4,&ppuStack_40);
      func_0x000107c6142c(pppuVar5);
      pppuVar5 = param_1;
      goto LAB_1011e3b98;
    }
    func_0x000107c6142c(param_1);
  }
  pppuStack_38 = (undefined ***)0x0;
  ppuStack_40 = (undefined **)0x0;
  lStack_28 = 0;
  uStack_30 = 0;
LAB_1011e3b98:
  func_0x000107c6142c(pppuVar5);
  func_0x0001007bbff0(auStack_68);
  if (lStack_28 == 0) {
    FUN_1011e3c64(&ppuStack_40,0x112d387f8,&UNK_10d902650);
  }
  else {
    pppuVar5 = &ppuStack_78;
    func_0x000107c6147c(pppuVar5,&ppuStack_40,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if ((((ulong)pppuVar5 & 1) != 0) && ((long)ppuStack_78 - 1U < 3)) {
      return *(undefined ***)(&UNK_10d92b0b8 + ((long)ppuStack_78 - 1U) * 8);
    }
  }
  return (undefined **)0x4f;
}



/* Entry: 1011e3c24; end: 1011e3c63;  */

void FUN_1011e3c24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1011e33e8(uVar2,uVar1,uVar3,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1011e3c64; end: 1011e3ca3;  */

undefined8 FUN_1011e3c64(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1011e3ca4; end: 1011e3cb3;  */

void FUN_1011e3ca4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1011e3cb4; end: 1011e3d13; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin init] */

void FUN_1011e3cb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsDeepLinkProcessorPluginImplementation.PublicGroupsDeepLinkProcessorPlugin"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e3ce0);
  (*pcVar1)();
}



/* Entry: 1011e3d14; end: 1011e3d5b; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011e3d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e3d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e3d14(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d668d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d668d8));
  return;
}



/* Entry: 1011e3d5c; end: 1011e3d7b;  */

void FUN_1011e3d5c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b90d8);
  return;
}



/* Entry: 1011e3d7c; end: 1011e3dcb; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin identifier] */

void FUN_1011e3d7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011e3dcc; end: 1011e3dd3; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin priority] */

undefined8 FUN_1011e3dcc(void)

{
  return 1000;
}



/* Entry: 1011e3dd4; end: 1011e3e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e3dd4(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long unaff_x20;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f83798;
  lVar2 = param_2;
  func_0x000107c5faec();
  if (param_1 == ppuVar1 && param_2 == lVar2) {
    func_0x000107c6142c(lVar2);
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar1,lVar2,0);
    func_0x000107c6142c(lVar2);
    if (((ulong)param_1 & 1) == 0) {
      return;
    }
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d668d8);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c42650();
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1011e3e8c; end: 1011e3ef3; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

uint FUN_1011e3e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1011e3dd4(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1011e3ef4; end: 1011e3f97; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin isValidDeepLink:] */

uint FUN_1011e3ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar2 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    FUN_1011e3dd4(lVar3,param_2);
    uVar1 = (uint)lVar3;
    func_0x000107c6142c(param_2);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 1011e3f98; end: 1011e408b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1011e3f98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  lVar4 = unaff_x20 + _DAT_112d668d0;
  func_0x000107c61618(lVar4);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d668e0);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d668d8);
  lVar5 = 0;
  FUN_1011e3904();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112d66890;
  func_0x000107c61614(lVar6 + _DAT_112d66890,0);
  lVar3 = _DAT_112d668a0;
  func_0x000107c61614(lVar6 + _DAT_112d668a0,0);
  func_0x000107c61604(lVar6 + lVar2,lVar4);
  *(undefined8 *)(lVar6 + _DAT_112d66898) = uVar9;
  func_0x000107c61604(lVar6 + lVar3,uVar8);
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_60,puVar1);
  func_0x000107c61170(lVar4);
  return (undefined1 *)plVar7;
}



/* Entry: 1011e408c; end: 1011e40bf; -[_TtC49PublicGroupsDeepLinkProcessorPluginImplementation35PublicGroupsDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_1011e408c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011e3f98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011e40c0; end: 1011e4227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011e40c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  func_0x000107c613fc();
  uVar3 = param_2;
  func_0x000107c43ab8(param_2);
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_3;
    func_0x000107c4cdb8();
    func_0x000107c61180();
  }
  lVar4 = 0;
  FUN_1011e3d5c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112d668d0;
  func_0x000107c61614(lVar5 + _DAT_112d668d0,0);
  func_0x000107c61604(lVar5 + lVar2,uVar3);
  *(long *)(lVar5 + _DAT_112d668d8) = lVar7;
  *(undefined8 *)(lVar5 + _DAT_112d668e0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_70,puVar1);
  func_0x000107c61170(uVar3);
  uVar3 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 1011e4228; end: 1011e4243;  */

void FUN_1011e4228(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011e4244; end: 1011e4263;  */

void FUN_1011e4244(void)

{
  func_0x000107c61168(&PTR_PTR_112d66950);
  return;
}



/* Entry: 1011e4264; end: 1011e426f; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4264(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d669a8;
  func_0x000107c61428(param_1 + _DAT_112d669a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e4270; end: 1011e427b; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d669a8;
  func_0x000107c61428(param_1 + _DAT_112d669a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e427c; end: 1011e4287; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint mainTabNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e427c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d669b0;
  func_0x000107c61428(param_1 + _DAT_112d669b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e4288; end: 1011e4293; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint setMainTabNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d669b0;
  func_0x000107c61428(param_1 + _DAT_112d669b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e4294; end: 1011e429f; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d669b8;
  func_0x000107c61428(param_1 + _DAT_112d669b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e42a0; end: 1011e42ab; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e42a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d669b8;
  func_0x000107c61428(param_1 + _DAT_112d669b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e42ac; end: 1011e42b7; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e42ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d669c0;
  func_0x000107c61428(param_1 + _DAT_112d669c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e42b8; end: 1011e42fb;  */

void FUN_1011e42b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e42fc; end: 1011e4307; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint setPageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e42fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d669c0;
  func_0x000107c61428(param_1 + _DAT_112d669c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e4308; end: 1011e435b;  */

void FUN_1011e4308(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011e435c; end: 1011e4557;  */

/* WARNING: Possible PIC construction at 0x0001011e44d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e44f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e4504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e4514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011e442c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e4518) */
/* WARNING: Removing unreachable block (ram,0x0001011e4508) */
/* WARNING: Removing unreachable block (ram,0x0001011e44f8) */
/* WARNING: Removing unreachable block (ram,0x0001011e44d4) */
/* WARNING: Removing unreachable block (ram,0x0001011e4430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e435c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4c19c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4e270();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c4cdfc();
      func_0x000107c61180();
      FUN_1011e4244();
      func_0x000107c613fc();
      func_0x000107c43ab8(lVar3);
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        unaff_x20 = 0;
      }
      else {
        func_0x000107c4cdb8();
        func_0x000107c61180();
      }
      lVar5 = 0;
      FUN_1011e3d5c();
      lVar6 = lVar5;
      func_0x000107c610f8();
      lVar2 = _DAT_112d668d0;
      func_0x000107c61614(lVar6 + _DAT_112d668d0,0);
      func_0x000107c61604(lVar6 + lVar2,lVar3);
      *(long *)(lVar6 + _DAT_112d668d8) = unaff_x20;
      *(long *)(lVar6 + _DAT_112d668e0) = lVar4;
      puVar1 = PTR_s_init_1125d9248;
      lStack_70 = lVar6;
      lStack_68 = lVar5;
      func_0x000107c61174(lVar4);
      func_0x000107c61154(&lStack_70,puVar1);
      lVar2 = lVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011e4558; end: 1011e457f; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint begin] */

void FUN_1011e4558(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011e435c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011e4580; end: 1011e45c3; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint end] */

void FUN_1011e4580(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011e45c4; end: 1011e4833;  */

void FUN_1011e45c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e1f90)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef1e070,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c561b0();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5666c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5ad0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef1a530,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PublicGroupsDeepLinkProcessorPluginImplementation/SCPublicGroupsDeepLinkProcessorPluginEntryPoint.swift"
                                ,0x67,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e4834);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c571c8();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011e4834; end: 1011e48df; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint setValue:forIvarName:] */

void FUN_1011e4834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011e45c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011e48e0; end: 1011e497b; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e48e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d669a8,0);
  func_0x000107c61614(param_1 + _DAT_112d669b0,0);
  func_0x000107c61614(param_1 + _DAT_112d669b8,0);
  func_0x000107c61614(param_1 + _DAT_112d669c0,0);
  *(undefined8 *)(param_1 + _DAT_112d669c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e497c; end: 1011e49af;  */

void FUN_1011e497c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011e49b0; end: 1011e4a17; -[SCPublicGroupsDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e49b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d669a8);
  func_0x000107c61610(param_1 + _DAT_112d669b0);
  func_0x000107c61610(param_1 + _DAT_112d669b8);
  func_0x000107c61610(param_1 + _DAT_112d669c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d669c8));
  return;
}



/* Entry: 1011e4a18; end: 1011e4a37;  */

void FUN_1011e4a18(void)

{
  func_0x000107c61168(&PTR_PTR_1127b91a8);
  return;
}



/* Entry: 1011e4a38; end: 1011e4a83; -[PublicGroupsChatPageLaunchPayload groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4a38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d669f8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d669f8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1011e4a84; end: 1011e4a93; -[PublicGroupsChatPageLaunchPayload source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011e4a84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d66a00);
}



/* Entry: 1011e4a94; end: 1011e4b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d669f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d66a00) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e4b6c; end: 1011e4bdf; -[PublicGroupsChatPageLaunchPayload initWithGroupId:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d669f8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112d66a00) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e4be0; end: 1011e4c3f; -[PublicGroupsChatPageLaunchPayload init] */

void FUN_1011e4be0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatPageLauncher.PublicGroupsChatPageLaunchPayload",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e4c0c);
  (*pcVar1)();
}



/* Entry: 1011e4c40; end: 1011e4c53; -[PublicGroupsChatPageLaunchPayload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d669f8 + 8))
  ;
  return;
}



/* Entry: 1011e4c54; end: 1011e4c73;  */

void FUN_1011e4c54(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9280);
  return;
}



/* Entry: 1011e4c74; end: 1011e4cdb;  */

undefined8 FUN_1011e4c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_1011e4e54(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1011e4cdc; end: 1011e4d3b; -[_TtC28PublicGroupsChatPageLauncher38PublicGroupsChatPageLauncherEntryPoint init] */

void FUN_1011e4cdc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatPageLauncher.PublicGroupsChatPageLauncherEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e4d08);
  (*pcVar1)();
}



/* Entry: 1011e4d3c; end: 1011e4db7; -[_TtC28PublicGroupsChatPageLauncher38PublicGroupsChatPageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011e4d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011e4d5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d66a30));
  return;
}



/* Entry: 1011e4db8; end: 1011e4dbf;  */

undefined8 FUN_1011e4db8(void)

{
  return 0;
}



/* Entry: 1011e4dc0; end: 1011e4e4f; -[_TtC28PublicGroupsChatPageLauncher38PublicGroupsChatPageLauncherEntryPoint nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4dc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112d66a38);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1011e4e50; end: 1011e4e53; -[_TtC28PublicGroupsChatPageLauncher38PublicGroupsChatPageLauncherEntryPoint setNativePayloadHandlers:] */

void FUN_1011e4e50(void)

{
  return;
}



/* Entry: 1011e4e54; end: 1011e4f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e4e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d66a30) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c4f5c8();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x00010451338c();
  lVar4 = 0;
  FUN_1011e52dc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112d66a70;
  func_0x000107c61614(lVar5 + _DAT_112d66a70,0);
  *(undefined8 *)(lVar5 + _DAT_112d66a68) = param_2;
  func_0x000107c61604(lVar5 + lVar2,uVar3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61174(param_2);
  plVar6 = &lStack_60;
  func_0x000107c61154(plVar6,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  *(long **)(unaff_x20 + _DAT_112d66a38) = plVar6;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011e4f6c; end: 1011e4f8b;  */

void FUN_1011e4f6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9348);
  return;
}



/* Entry: 1011e4f8c; end: 1011e50a3;  */

long FUN_1011e4f8c(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_130 [80];
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [80];
  
  lVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  if (param_1 == '\0') {
    puVar4 = auStack_130;
    uVar5 = 0xd000000000000017;
    pcVar6 = "Missing required dependencies.";
  }
  else {
    puVar4 = auStack_e0;
    uVar5 = 0xd000000000000022;
    pcVar6 = "No presenting view controller.";
    if (param_1 != '\x01') {
      puVar4 = auStack_90;
      uVar5 = 0xd00000000000001e;
      pcVar6 = "eLauncherHandler";
    }
  }
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined **)(lVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar1 + 0x28) = puVar4;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(ulong *)(lVar1 + 0x38) = (ulong)pcVar6 | 0x8000000000000000;
  lVar3 = lVar1;
  func_0x000100214a84(lVar1);
  func_0x000107c61588(lVar1);
  FUN_1011e5a78((undefined8 *)(lVar1 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  return lVar3;
}



/* Entry: 1011e50a4; end: 1011e50b7;  */

bool FUN_1011e50a4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1011e50b8; end: 1011e5163;  */

void FUN_1011e50b8(void)

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



/* Entry: 1011e5164; end: 1011e5187;  */

void FUN_1011e5164(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1011e5188; end: 1011e51bb;  */

undefined1  [16] FUN_1011e5188(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = PTR_DAT_112d66ac8;
  auVar1._0_8_ = uRam0000000112d66ac0;
  func_0x000107c61434(PTR_DAT_112d66ac8);
  return auVar1;
}



/* Entry: 1011e51bc; end: 1011e51cb;  */

undefined1 FUN_1011e51bc(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1011e51cc; end: 1011e51f3;  */

void FUN_1011e51cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001011e59f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzrlE7_domainSSvg_110351348)(param_1,uVar1);
  return;
}



/* Entry: 1011e51f4; end: 1011e523b;  */

void FUN_1011e51f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x0001011e59f8();
  uVar2 = uVar1;
  func_0x0001011e5a38();
  uVar3 = uVar2;
  FUN_100e2203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss5ErrorP10FoundationAC13CustomNSErrorRzSYRzs17FixedWidthInteger8RawValueSYRpzrlE5_codeSivg_110351338
  )(param_1,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1011e523c; end: 1011e5243;  */

void FUN_1011e523c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 1011e5244; end: 1011e52a3; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler init] */

void FUN_1011e5244(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsChatPageLauncher.PublicGroupsChatPageLauncherHandler",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011e5270);
  (*pcVar1)();
}



/* Entry: 1011e52a4; end: 1011e52db; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e52a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d66a68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112d66a70);
  return;
}



/* Entry: 1011e52dc; end: 1011e52fb;  */

void FUN_1011e52dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9410);
  return;
}



/* Entry: 1011e52fc; end: 1011e5313; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler payloadClass] */

void FUN_1011e52fc(void)

{
  FUN_1011e4c54(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1011e5314; end: 1011e5317; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler setPayloadClass:] */

void FUN_1011e5314(void)

{
  return;
}



/* Entry: 1011e5318; end: 1011e570b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e5318(undefined8 param_1,code *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *******pppppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 *******pppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001011e5ab8(param_1,&ppppppuStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    pppppppuVar8 = &ppppppuStack_80;
    func_0x0001011e5a78(pppppppuVar8,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0;
    FUN_1011e4c54(0);
    pppppppuVar8 = &pppppppuStack_88;
    func_0x000107c6147c(pppppppuVar8,&ppppppuStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
    if (((ulong)pppppppuVar8 & 1) != 0) {
      puVar1 = (ulong *)((long)pppppppuStack_88 + _DAT_112d669f8);
      uVar2 = *puVar1 & 0xffffffffffff;
      if ((puVar1[1] & 0x2000000000000000) != 0) {
        uVar2 = puVar1[1] >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        puVar5 = *(undefined **)(unaff_x20 + _DAT_112d66a68);
        if (puVar5 == (undefined *)0x0) {
LAB_1011e55e8:
          if (param_2 == (code *)0x0) {
            func_0x000107c61170(pppppppuStack_88);
            return;
          }
          FUN_1011e580c();
          puVar10 = &UNK_110391fc0;
          func_0x000107c613f8(&UNK_110391fc0,puVar5,0,0);
          *puVar5 = 1;
          puVar9 = puVar10;
          func_0x000107c5ed2c();
          func_0x000107c614ac(puVar10);
          uStack_78 = 0;
          ppppppuStack_80 = (undefined8 ******)0x0;
          lStack_68 = 0;
          uStack_70 = 0;
          (*param_2)(puVar9,&ppppppuStack_80);
        }
        else {
          func_0x000107c61174();
          puVar9 = puVar5;
          func_0x000107c49cd8();
          if ((int)puVar9 == 0) {
            func_0x000107c61170();
            goto LAB_1011e55e8;
          }
          puVar6 = (undefined1 *)(unaff_x20 + _DAT_112d66a70);
          func_0x000107c61618();
          if (puVar6 == (undefined1 *)0x0) {
LAB_1011e5660:
            if (param_2 == (code *)0x0) {
              func_0x000107c61170(pppppppuStack_88);
              func_0x000107c61170(puVar5);
              return;
            }
            FUN_1011e580c();
            puVar10 = &UNK_110391fc0;
            func_0x000107c613f8(&UNK_110391fc0,puVar6,0,0);
            *puVar6 = 2;
            puVar9 = puVar10;
            func_0x000107c5ed2c();
            func_0x000107c614ac(puVar10);
            uStack_78 = 0;
            ppppppuStack_80 = (undefined8 ******)0x0;
            lStack_68 = 0;
            uStack_70 = 0;
            (*param_2)(puVar9,&ppppppuStack_80);
            func_0x000107c61170(pppppppuStack_88);
            func_0x000107c61170(puVar5);
            goto LAB_1011e5594;
          }
          puVar7 = puVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar7 == (undefined1 *)0x0) goto LAB_1011e5660;
          puVar6 = puVar7;
          func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_topmostViewController_11267b0f0);
          if (((ulong)puVar6 & 1) == 0) {
            func_0x000107c615e8();
            puVar6 = puVar7;
            goto LAB_1011e5660;
          }
          puVar6 = puVar7;
          func_0x000107c5cc6c();
          func_0x000107c61180();
          func_0x000107c615e8(puVar7);
          puVar9 = PTR_PTR_1126b3530;
          func_0x000107c610f8(PTR_PTR_1126b3530);
          func_0x000107c4807c();
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar4 = *(undefined8 *)((long)pppppppuStack_88 + _DAT_112d66a00);
          func_0x0001005138b4(0);
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61434(uVar3);
          func_0x000107c61174(puVar9);
          func_0x000107c61174();
          puVar7 = puVar6;
          func_0x000103f580a0(puVar6,uVar2,uVar3,uVar4,puVar9);
          func_0x000107c4ab34(puVar5);
          if (param_2 == (code *)0x0) {
            func_0x000107c61170(pppppppuStack_88);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar6);
            return;
          }
          uStack_78 = 0;
          ppppppuStack_80 = (undefined8 ******)0x0;
          lStack_68 = 0;
          uStack_70 = 0;
          (*param_2)(0,&ppppppuStack_80);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar7);
          puVar9 = puVar5;
        }
        func_0x000107c61170(pppppppuStack_88);
        goto LAB_1011e5594;
      }
      func_0x000107c61170();
      pppppppuVar8 = pppppppuStack_88;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  FUN_1011e580c();
  puVar5 = &UNK_110391fc0;
  func_0x000107c613f8(&UNK_110391fc0,pppppppuVar8,0,0);
  *(undefined1 *)pppppppuVar8 = 0;
  puVar9 = puVar5;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar5);
  uStack_78 = 0;
  ppppppuStack_80 = (undefined8 ******)0x0;
  lStack_68 = 0;
  uStack_70 = 0;
  (*param_2)(puVar9,&ppppppuStack_80);
LAB_1011e5594:
  func_0x000107c61170(puVar9);
  func_0x0001011e5a78(&ppppppuStack_80,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1011e570c; end: 1011e57eb; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler launchWithPayload:completion:] */

void FUN_1011e570c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
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
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_110391f28;
    func_0x000107c613fc(&UNK_110391f28,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x1011e5804;
  }
  FUN_1011e5318(&uStack_50,uVar1,puVar2);
  FUN_100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  FUN_1011e5a78(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 1011e57ec; end: 1011e580b; -[_TtC28PublicGroupsChatPageLauncher35PublicGroupsChatPageLauncherHandler didDismissChatWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011e57ec(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d66a68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d66a68),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 1011e580c; end: 1011e584b;  */

void FUN_1011e580c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d66aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92b31c;
  func_0x000107c61520(&UNK_10d92b31c,&UNK_110391fc0);
  puRam0000000112d66aa0 = puVar1;
  return;
}



/* Entry: 1011e584c; end: 1011e59b7;  */

int FUN_1011e584c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1011e58c8;
        goto LAB_1011e58ac;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1011e58ac:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1011e58c8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1011e59b8; end: 1011e5a77;  */

void FUN_1011e59b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d66aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92b2f4;
  func_0x000107c61520(&UNK_10d92b2f4,&UNK_110391fc0);
  puRam0000000112d66aa8 = puVar1;
  return;
}


