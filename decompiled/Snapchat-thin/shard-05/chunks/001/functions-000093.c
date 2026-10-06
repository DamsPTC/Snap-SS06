/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b2aa54; end: 103b2aa63; -[SCSingleSnapPlayerConfig pictureInPictureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca70);
}



/* Entry: 103b2aa64; end: 103b2aa73; -[SCSingleSnapPlayerConfig checkAdBreaksOnExternalSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2aa64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112feca78);
}



/* Entry: 103b2aa74; end: 103b2ad9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2aa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feca00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112feca08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112feca10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112feca18) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112feca20) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112feca28) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112feca30) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112feca38) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112feca40) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112feca48) = param_10._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112feca50) = param_10._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112feca58) = param_10._3_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112feca60) = (undefined1)param_11;
  *(undefined1 *)(unaff_x20 + _DAT_112feca68) = param_11._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112feca70) = param_11._2_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112feca78) = param_11._3_1_;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2ad9c; end: 103b2ae5b; -[SCSingleSnapPlayerConfig initWithPlayerDomain:contentMode:loadingIndicatorSize:loadingIndicatorColor:enableBuiltInErrorScreen:enableRetryOnMediaErrors:flickerFixSspAutoAdvance:playerType:disablePauseUponSeekForNeoplayer:useImageContentControllerCallbacks:enableImageWatchTimeFix:enableMuteVolumeCacheFix:deferFirstFrameTeardownUntilVideoStarts:firstFrameRevealHandoffEnabled:pictureInPictureEnabled:checkAdBreaksOnExternalSeek:] */

void FUN_103b2ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000103b2ac0c();
  return;
}



/* Entry: 103b2ae5c; end: 103b2afc7;  */

void FUN_103b2ae5c(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x000103b2ae8c(param_1);
  return;
}



/* Entry: 103b2afc8; end: 103b2afcb; -[SCSingleSnapPlayerConfig copyWithZone:] */

void FUN_103b2afc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2afcc; end: 103b2afff; -[SCSingleSnapPlayerConfig description] */

void FUN_103b2afcc(void)

{
  undefined1 auStack_50 [64];
  
  FUN_103b2b090(auStack_50);
  func_0x000101ad90b8(auStack_50);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2b000; end: 103b2b07b; -[SCSingleSnapPlayerConfig init] */

void FUN_103b2b000(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerConfigWrapper.swift",0x3b,2,0x83,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b048);
  (*pcVar1)();
}



/* Entry: 103b2b07c; end: 103b2b08f; -[SCSingleSnapPlayerConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112feca00 + 8))
  ;
  return;
}



/* Entry: 103b2b090; end: 103b2b19f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b090(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = ((undefined8 *)(param_2 + _DAT_112feca00))[1];
  uVar13 = *(undefined8 *)(param_2 + _DAT_112feca08);
  uVar14 = *(undefined8 *)(param_2 + _DAT_112feca10);
  uVar15 = *(undefined8 *)(param_2 + _DAT_112feca18);
  uVar2 = *(undefined1 *)(param_2 + _DAT_112feca20);
  uVar3 = *(undefined1 *)(param_2 + _DAT_112feca28);
  uVar4 = *(undefined1 *)(param_2 + _DAT_112feca30);
  uVar16 = *(undefined8 *)(param_2 + _DAT_112feca38);
  uVar5 = *(undefined1 *)(param_2 + _DAT_112feca40);
  uVar6 = *(undefined1 *)(param_2 + _DAT_112feca48);
  uVar7 = *(undefined1 *)(param_2 + _DAT_112feca50);
  uVar8 = *(undefined1 *)(param_2 + _DAT_112feca58);
  uVar9 = *(undefined1 *)(param_2 + _DAT_112feca60);
  uVar10 = *(undefined1 *)(param_2 + _DAT_112feca68);
  uVar11 = *(undefined1 *)(param_2 + _DAT_112feca70);
  uVar12 = *(undefined1 *)(param_2 + _DAT_112feca78);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112feca00);
  param_1[1] = uVar1;
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  param_1[4] = uVar15;
  *(undefined1 *)(param_1 + 5) = uVar2;
  *(undefined1 *)((long)param_1 + 0x29) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2a) = uVar4;
  param_1[6] = uVar16;
  *(undefined1 *)(param_1 + 7) = uVar5;
  *(undefined1 *)((long)param_1 + 0x39) = uVar6;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar7;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar8;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar9;
  *(undefined1 *)((long)param_1 + 0x3d) = uVar10;
  *(undefined1 *)((long)param_1 + 0x3e) = uVar11;
  *(undefined1 *)((long)param_1 + 0x3f) = uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 103b2b1a0; end: 103b2b1bf;  */

void FUN_103b2b1a0(void)

{
  func_0x000107c61168(&PTR_PTR_11292a528);
  return;
}



/* Entry: 103b2b1c0; end: 103b2b1cf; -[SCSingleSnapPlayerContentAttribution contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2b1c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecaa8);
}



/* Entry: 103b2b1d0; end: 103b2b1df; -[SCSingleSnapPlayerContentAttribution contentViewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2b1d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecab0);
}



/* Entry: 103b2b1e0; end: 103b2b1f3; -[SCSingleSnapPlayerContentAttribution mediaContextType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2b1e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecab8);
}



/* Entry: 103b2b1f4; end: 103b2b2db; -[SCSingleSnapPlayerContentAttribution initWithContentType:contentViewSource:mediaContextType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b1f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fecaa8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fecab0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fecab8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2b2dc; end: 103b2b34b; -[SCSingleSnapPlayerContentAttribution hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b2dc(long param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  func_0x000107c60690(*(undefined8 *)(param_1 + _DAT_112fecaa8));
  func_0x000107c60690(*(undefined8 *)(param_1 + _DAT_112fecab0));
  func_0x000107c60690(*(undefined8 *)(param_1 + _DAT_112fecab8));
  func_0x000107c606a4();
  return;
}



/* Entry: 103b2b34c; end: 103b2b41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103b2b34c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    func_0x000107c6147c(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112fecaa8);
      lVar7 = *(long *)(lStack_68 + _DAT_112fecaa8);
      lVar2 = *(long *)(unaff_x20 + _DAT_112fecab0);
      lVar4 = *(long *)(lStack_68 + _DAT_112fecab0);
      lVar3 = *(long *)(unaff_x20 + _DAT_112fecab8);
      lVar5 = *(long *)(lStack_68 + _DAT_112fecab8);
      func_0x000107c61170();
      if (lVar6 == lVar7) {
        return lVar2 == lVar4 && lVar3 == lVar5;
      }
    }
  }
  return false;
}



/* Entry: 103b2b420; end: 103b2b49f; -[SCSingleSnapPlayerContentAttribution isEqual:] */

uint FUN_103b2b420(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b2b34c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b2b4a0; end: 103b2b4a3; -[SCSingleSnapPlayerContentAttribution copyWithZone:] */

void FUN_103b2b4a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2b4a4; end: 103b2b4bf; -[SCSingleSnapPlayerContentAttribution description] */

void FUN_103b2b4a4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2b4c0; end: 103b2b55b; -[SCSingleSnapPlayerContentAttribution init] */

void FUN_103b2b4c0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerContentAttributionWrapper.swift",0x47
                      ,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b508);
  (*pcVar1)();
}



/* Entry: 103b2b55c; end: 103b2b55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecaa8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fecab0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecab8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2b560; end: 103b2b7a3;  */

uint FUN_103b2b560(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b7a4);
          (*pcVar1)();
        }
        FUN_103b2ef60(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b744);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b748);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b74c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_103b2b66c;
LAB_103b2b63c:
              func_0x000103b2d0fc(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x000103b2d0fc(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_103b2b63c;
LAB_103b2b66c:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2b750);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_103b2b77c;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_103b2b77c:
  return uVar8 & 1;
}



/* Entry: 103b2b7a4; end: 103b2b7ef; -[SCSingleSnapPlayerData snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b7a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecae8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fecae8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2b7f0; end: 103b2b83f; -[SCSingleSnapPlayerData mediaDescriptors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b7f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecaf0);
  FUN_103b2ef60(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b2b840; end: 103b2b84f; -[SCSingleSnapPlayerData attribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fecaf8));
  return;
}



/* Entry: 103b2b850; end: 103b2b85f; -[SCSingleSnapPlayerData supportClientGeneratedFirstFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2b850(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fecb00);
}



/* Entry: 103b2b860; end: 103b2b86f; -[SCSingleSnapPlayerData isMediaZipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b2b860(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fecb08);
}



/* Entry: 103b2b870; end: 103b2b91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecae8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecaf0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fecaf8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112fecb00) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fecb08) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2b91c; end: 103b2b9f7; -[SCSingleSnapPlayerData initWithSnapId:mediaDescriptors:attribution:supportClientGeneratedFirstFrame:isMediaZipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2b91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = 0;
  FUN_103b2ef60(0);
  func_0x000107c5fc54(param_4,uVar4);
  puVar1 = (undefined8 *)(param_1 + _DAT_112fecae8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fecaf0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fecaf8) = param_5;
  *(undefined1 *)(param_1 + _DAT_112fecb00) = param_6;
  *(undefined1 *)(param_1 + _DAT_112fecb08) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 103b2b9f8; end: 103b2ba27;  */

void FUN_103b2b9f8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103b2ba28(param_1);
  return;
}



/* Entry: 103b2ba28; end: 103b2bc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2ba28(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [56];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c614f0();
  uVar3 = param_1[1];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_112fecae8);
  *puVar9 = *param_1;
  puVar9[1] = uVar3;
  lVar7 = param_1[2];
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c61434();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434();
    FUN_103b2c10c(0,lVar6,0);
    puVar10 = puStack_a8;
    puVar9 = (undefined8 *)(lVar7 + 0x20);
    uVar3 = 0;
    FUN_103b2ef60(0);
    do {
      uStack_98 = puVar9[1];
      uStack_a0 = *puVar9;
      uStack_88 = puVar9[3];
      uStack_90 = puVar9[2];
      uStack_78 = puVar9[5];
      uStack_80 = puVar9[4];
      uStack_70 = puVar9[6];
      func_0x000107c610f8(uVar3);
      func_0x000101e49e18(&uStack_a0,auStack_e0);
      puVar4 = &uStack_a0;
      func_0x000103b2e988();
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_a8 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        FUN_103b2c10c(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_a8 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puStack_a8 + uVar1 * 8 + 0x20) = puVar4;
      puVar9 = puVar9 + 7;
      lVar6 = lVar6 + -1;
      puVar10 = puStack_a8;
    } while (lVar6 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112fecaf0) = puVar10;
  uVar3 = param_1[3];
  uVar2 = param_1[4];
  uVar8 = param_1[5];
  lVar7 = 0;
  func_0x000103b2b53c();
  lVar6 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112fecaa8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112fecab0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112fecab8) = uVar8;
  plVar5 = &lStack_f0;
  lStack_f0 = lVar6;
  lStack_e8 = lVar7;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112fecaf8) = plVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112fecb00) = *(undefined1 *)(param_1 + 6);
  func_0x000101ad914c(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112fecb08) = *(undefined1 *)((long)param_1 + 0x31);
  func_0x000107c61154(&stack0xffffffffffffff00,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2bc20; end: 103b2bc53; -[SCSingleSnapPlayerData hash] */

undefined8 FUN_103b2bc20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b2bc54();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b2bc54; end: 103b2bd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2bc54(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fecae8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112fecae8))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar1);
  func_0x000107c60690(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fecaf0);
  uVar1 = 0;
  FUN_103b2ef60(0);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112fecaf8);
  func_0x000107c606ac(auStack_c0);
  func_0x000107c60690(*(undefined8 *)(lVar3 + _DAT_112fecaa8));
  func_0x000107c60690(*(undefined8 *)(lVar3 + _DAT_112fecab0));
  func_0x000107c60690(*(undefined8 *)(lVar3 + _DAT_112fecab8));
  func_0x000107c606a4();
  func_0x000107c60690();
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112fecb00));
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112fecb08));
  func_0x000107c606a4();
  return;
}



/* Entry: 103b2bd98; end: 103b2bf1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b2bd98(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_78;
  undefined8 auStack_70 [3];
  long lStack_58;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar7 = &lStack_78;
    func_0x000107c6147c(plVar7,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar7 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112fecae8);
      if (lVar6 == *(long *)(lStack_78 + _DAT_112fecae8) &&
          ((long *)(unaff_x20 + _DAT_112fecae8))[1] == ((long *)(lStack_78 + _DAT_112fecae8))[1]) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar5 = (uint)lVar6;
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fecaf0);
      uVar10 = *(undefined8 *)(lStack_78 + _DAT_112fecaf0);
      func_0x000107c61434(uVar10);
      FUN_103b2b560(uVar9,uVar10);
      func_0x000107c6142c(uVar10);
      uVar11 = *(undefined8 *)(lStack_78 + _DAT_112fecaf8);
      uVar10 = 0;
      func_0x000103b2b53c();
      auStack_70[0] = uVar11;
      lStack_58 = uVar10;
      func_0x000107c61174(uVar11);
      puVar8 = auStack_70;
      FUN_103b2b34c(puVar8);
      func_0x00010006e7f4(auStack_70);
      bVar1 = *(byte *)(unaff_x20 + _DAT_112fecb00);
      bVar2 = *(byte *)(lStack_78 + _DAT_112fecb00);
      bVar3 = *(byte *)(unaff_x20 + _DAT_112fecb08);
      bVar4 = *(byte *)(lStack_78 + _DAT_112fecb08);
      func_0x000107c61170(lStack_78);
      uVar5 = uVar5 & (uint)uVar9 & (uint)puVar8 & ((bVar1 ^ bVar2) ^ 1) & ((bVar3 ^ bVar4) ^ 1);
      goto LAB_103b2bf00;
    }
  }
  uVar5 = 0;
LAB_103b2bf00:
  return uVar5 & 1;
}



/* Entry: 103b2bf20; end: 103b2bf9f; -[SCSingleSnapPlayerData isEqual:] */

uint FUN_103b2bf20(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b2bd98(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b2bfa0; end: 103b2bfa3; -[SCSingleSnapPlayerData copyWithZone:] */

void FUN_103b2bfa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2bfa4; end: 103b2c043; -[SCSingleSnapPlayerData description] */

void FUN_103b2bfa4(undefined8 param_1)

{
  undefined1 auStack_58 [56];
  
  func_0x000107c61174();
  FUN_103b2c31c(auStack_58);
  func_0x000107c61170(param_1);
  func_0x000101ad914c(auStack_58);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2c044; end: 103b2c0bf; -[SCSingleSnapPlayerData init] */

void FUN_103b2c044(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerDataWrapper.swift",0x39,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2c08c);
  (*pcVar1)();
}



/* Entry: 103b2c0c0; end: 103b2c10b; -[SCSingleSnapPlayerData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c0c0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fecae8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fecaf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fecaf8));
  return;
}



/* Entry: 103b2c10c; end: 103b2c173;  */

void FUN_103b2c10c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103b2c174();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103b2c174; end: 103b2c2af;  */

code * FUN_103b2c174(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b2c2b0);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_103b2c2b0(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 103b2c2b0; end: 103b2c31b;  */

void FUN_103b2c2b0(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103b2c31c; end: 103b2c593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c31c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fecae8);
  uVar2 = ((undefined8 *)(param_2 + _DAT_112fecae8))[1];
  uVar17 = *(ulong *)(param_2 + _DAT_112fecaf0);
  if (uVar17 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar18 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar18 = uVar17;
    }
    func_0x000107c60480();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar15;
  if (uVar18 == 0) {
    func_0x000107c61434(uVar2);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(uVar2);
    func_0x000103b256bc(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103b2c594);
      (*pcVar6)();
    }
    uVar16 = 0;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        uVar7 = *(ulong *)(uVar17 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar16;
        func_0x000103b2d0fc();
      }
      uVar14 = *(undefined8 *)(uVar7 + _DAT_112feccd0);
      uVar8 = *(undefined8 *)(uVar7 + _DAT_112feccd8);
      uVar9 = *(undefined8 *)(uVar7 + _DAT_112fecce0);
      uVar11 = *(undefined8 *)(uVar7 + _DAT_112fecce8);
      uVar13 = ((undefined8 *)(uVar7 + _DAT_112fecce8))[1];
      uVar12 = *(undefined8 *)(uVar7 + _DAT_112feccf0);
      uVar3 = ((undefined8 *)(uVar7 + _DAT_112feccf0))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      func_0x000107c61434(uVar13);
      func_0x000107c61170(uVar7);
      uVar7 = *(ulong *)(puVar15 + 0x10);
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar7) {
        func_0x000103b256bc(1 < *(ulong *)(puVar15 + 0x18),uVar7 + 1,1);
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar15 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x20) = uVar14;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x28) = uVar8;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x30) = uVar9;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x38) = uVar11;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x40) = uVar13;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x48) = uVar12;
      *(undefined8 *)(puVar15 + uVar7 * 0x38 + 0x50) = uVar3;
    } while (uVar18 != uVar16);
  }
  lVar10 = *(long *)(param_2 + _DAT_112fecaf8);
  uVar12 = *(undefined8 *)(lVar10 + _DAT_112fecaa8);
  uVar13 = *(undefined8 *)(lVar10 + _DAT_112fecab0);
  uVar11 = *(undefined8 *)(lVar10 + _DAT_112fecab8);
  uVar4 = *(undefined1 *)(param_2 + _DAT_112fecb00);
  uVar5 = *(undefined1 *)(param_2 + _DAT_112fecb08);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = puVar15;
  param_1[3] = uVar12;
  param_1[4] = uVar13;
  param_1[5] = uVar11;
  *(undefined1 *)(param_1 + 6) = uVar4;
  *(undefined1 *)((long)param_1 + 0x31) = uVar5;
  return;
}



/* Entry: 103b2c594; end: 103b2c5b3;  */

void FUN_103b2c594(void)

{
  func_0x000107c61168(&PTR_PTR_11292a740);
  return;
}



/* Entry: 103b2c5b4; end: 103b2c5d3; -[SCSingleSnapPlayerVideoPrepareContext videoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c5b4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fecb48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2c5d4; end: 103b2c5e3; -[SCSingleSnapPlayerVideoPrepareContext timeToPrepareSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2c5d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecb50);
}



/* Entry: 103b2c5e4; end: 103b2c5f3; -[SCSingleSnapPlayerVideoPrepareContext startPreparingTimeSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2c5e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecb58);
}



/* Entry: 103b2c5f4; end: 103b2c60b; -[SCSingleSnapPlayerVideoPrepareContext videoRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2c5f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecb60);
}



/* Entry: 103b2c60c; end: 103b2c6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecb48) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fecb50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fecb58) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecb60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2c6b4; end: 103b2c767; -[SCSingleSnapPlayerVideoPrepareContext initWithVideoAsset:timeToPrepareSec:startPreparingTimeSec:videoRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_7;
  func_0x000107c614f0();
  *(undefined8 *)(param_7 + _DAT_112fecb48) = param_9;
  *(undefined8 *)(param_7 + _DAT_112fecb50) = param_1;
  *(undefined8 *)(param_7 + _DAT_112fecb58) = param_2;
  puVar1 = (undefined8 *)(param_7 + _DAT_112fecb60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_7;
  lStack_58 = lVar3;
  func_0x000107c615f0(param_9);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 103b2c768; end: 103b2c7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c768(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecb48) = *param_1;
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fecb50) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112fecb58) = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecb60);
  uVar2 = param_1[3];
  uVar4 = param_1[6];
  uVar3 = param_1[5];
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2c7ec; end: 103b2c7ef; -[SCSingleSnapPlayerVideoPrepareContext copyWithZone:] */

void FUN_103b2c7ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2c7f0; end: 103b2c80b; -[SCSingleSnapPlayerVideoPrepareContext description] */

void FUN_103b2c7f0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2c80c; end: 103b2c887; -[SCSingleSnapPlayerVideoPrepareContext init] */

void FUN_103b2c80c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerVideoPrepareContextWrapper.swift",
                      0x48,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2c854);
  (*pcVar1)();
}



/* Entry: 103b2c888; end: 103b2c897; -[SCSingleSnapPlayerVideoPrepareContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fecb48));
  return;
}



/* Entry: 103b2c898; end: 103b2c8b7;  */

void FUN_103b2c898(void)

{
  func_0x000107c61168(&PTR_PTR_11292a828);
  return;
}



/* Entry: 103b2c8b8; end: 103b2c8c7; -[SCSingleSnapPlayerObservedPlaybackTime observeTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2c8b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecb90);
}



/* Entry: 103b2c8c8; end: 103b2c8d3; -[SCSingleSnapPlayerObservedPlaybackTime label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c8c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecb98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fecb98))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2c8d4; end: 103b2c8df; -[SCSingleSnapPlayerObservedPlaybackTime groupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c8d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecba0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fecba0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2c8e0; end: 103b2c927;  */

void FUN_103b2c8e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b2c928; end: 103b2c937; -[SCSingleSnapPlayerObservedPlaybackTime index] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2c928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecba8);
}



/* Entry: 103b2c938; end: 103b2c9db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecb90) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecb98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecba0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fecba8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2c9dc; end: 103b2ca93; -[SCSingleSnapPlayerObservedPlaybackTime initWithObserveTime:label:groupLabel:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2c9dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_3;
  func_0x000107c5faec();
  *(undefined8 *)(param_2 + _DAT_112fecb90) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_112fecb98);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(param_2 + _DAT_112fecba0);
  *puVar1 = param_5;
  puVar1[1] = uVar3;
  *(undefined8 *)(param_2 + _DAT_112fecba8) = param_6;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2ca94; end: 103b2cb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2ca94(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecb90) = *param_1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecb98);
  puVar1[1] = param_1[2];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecba0);
  puVar1[1] = param_1[4];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecba8) = param_1[5];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2cb14; end: 103b2cb17; -[SCSingleSnapPlayerObservedPlaybackTime copyWithZone:] */

void FUN_103b2cb14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2cb18; end: 103b2cb33; -[SCSingleSnapPlayerObservedPlaybackTime description] */

void FUN_103b2cb18(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2cb34; end: 103b2cbaf; -[SCSingleSnapPlayerObservedPlaybackTime init] */

void FUN_103b2cb34(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerObservedPlaybackTimeWrapper.swift",
                      0x49,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2cb7c);
  (*pcVar1)();
}



/* Entry: 103b2cbb0; end: 103b2cbef; -[SCSingleSnapPlayerObservedPlaybackTime .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b2cbd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b2cbd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2cbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fecb98 + 8))
  ;
  return;
}



/* Entry: 103b2cbf0; end: 103b2cc0f;  */

void FUN_103b2cbf0(void)

{
  func_0x000107c61168(&PTR_PTR_11292a908);
  return;
}



/* Entry: 103b2cc10; end: 103b2cc5b; -[SCSingleSnapPlayerObservedPlaybackTimeGroup label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2cc10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecbd8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fecbd8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2cc5c; end: 103b2ccab; -[SCSingleSnapPlayerObservedPlaybackTimeGroup observedPlaybackTimes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2cc5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fecbe0);
  FUN_103b2cbf0(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b2ccac; end: 103b2cd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2ccac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecbd8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecbe0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2cd18; end: 103b2cdaf; -[SCSingleSnapPlayerObservedPlaybackTimeGroup initWithLabel:observedPlaybackTimes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2cd18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = 0;
  FUN_103b2cbf0(0);
  func_0x000107c5fc54(param_4,uVar3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112fecbd8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fecbe0) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2cdb0; end: 103b2cdf7;  */

void FUN_103b2cdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_103b2cdf8(param_1,param_2,param_3);
  return;
}



/* Entry: 103b2cdf8; end: 103b2cfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2cdf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  puVar12 = (undefined8 *)(unaff_x20 + _DAT_112fecbd8);
  *puVar12 = param_1;
  puVar12[1] = param_2;
  lVar13 = *(long *)(param_3 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c6142c(param_3);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(param_2);
    func_0x000103b2c140(0,lVar13,0);
    puVar11 = puStack_78;
    lVar8 = 0;
    FUN_103b2cbf0();
    puVar12 = (undefined8 *)(param_3 + 0x48);
    do {
      uVar15 = puVar12[-5];
      uVar2 = puVar12[-4];
      uVar5 = puVar12[-3];
      uVar3 = puVar12[-2];
      uVar6 = puVar12[-1];
      uVar14 = *puVar12;
      lVar9 = lVar8;
      func_0x000107c610f8();
      *(undefined8 *)(lVar9 + _DAT_112fecb90) = uVar15;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112fecb98);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar9 + _DAT_112fecba0);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar9 + _DAT_112fecba8) = uVar14;
      puVar7 = PTR_s_init_1125d9248;
      lStack_88 = lVar9;
      lStack_80 = lVar8;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      plVar10 = &lStack_88;
      func_0x000107c61154(plVar10,puVar7);
      uVar4 = *(ulong *)(puVar11 + 0x10);
      puStack_78 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
        func_0x000103b2c140(1 < *(ulong *)(puVar11 + 0x18),uVar4 + 1,1);
      }
      puVar11 = puStack_78;
      puVar12 = puVar12 + 6;
      *(ulong *)(puStack_78 + 0x10) = uVar4 + 1;
      *(long **)(puStack_78 + uVar4 * 8 + 0x20) = plVar10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_112fecbe0) = puVar11;
  func_0x000107c61154(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2cfe8; end: 103b2cfeb; -[SCSingleSnapPlayerObservedPlaybackTimeGroup copyWithZone:] */

void FUN_103b2cfe8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2cfec; end: 103b2d043; -[SCSingleSnapPlayerObservedPlaybackTimeGroup description] */

void FUN_103b2cfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103b2d434();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2d044; end: 103b2d0bf; -[SCSingleSnapPlayerObservedPlaybackTimeGroup init] */

void FUN_103b2d044(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerDefines/SingleSnapPlayerObservedPlaybackTimeGroupWrapper.swift"
                      ,0x4e,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2d08c);
  (*pcVar1)();
}



/* Entry: 103b2d0c0; end: 103b2d433; -[SCSingleSnapPlayerObservedPlaybackTimeGroup .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b2d0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b2d0e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2d0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fecbd8 + 8))
  ;
  return;
}



/* Entry: 103b2d434; end: 103b2d623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2d434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fecbd8);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112fecbd8))[1];
  uVar9 = *(ulong *)(param_1 + _DAT_112fecbe0);
  if (uVar9 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar11 = uVar9;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar11 == 0) {
    func_0x000107c61434(uVar3);
  }
  else {
    func_0x000107c61434(uVar3);
    func_0x000103b22840(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x103b2d624);
      (*pcVar7)();
    }
    uVar12 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar9 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar12;
        func_0x000103b2d298();
      }
      uVar13 = *(undefined8 *)(uVar8 + _DAT_112fecb90);
      uVar3 = *(undefined8 *)(uVar8 + _DAT_112fecb98);
      uVar4 = ((undefined8 *)(uVar8 + _DAT_112fecb98))[1];
      uVar2 = *(undefined8 *)(uVar8 + _DAT_112fecba0);
      uVar5 = ((undefined8 *)(uVar8 + _DAT_112fecba0))[1];
      uVar10 = *(undefined8 *)(uVar8 + _DAT_112fecba8);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61170(uVar8);
      uVar8 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
        func_0x000103b22840(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x20) = uVar13;
      uVar12 = uVar12 + 1;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x28) = uVar3;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x30) = uVar4;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x38) = uVar2;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x40) = uVar5;
      *(undefined8 *)(puVar6 + uVar8 * 0x30 + 0x48) = uVar10;
    } while (uVar11 != uVar12);
  }
  return uVar1;
}



/* Entry: 103b2d624; end: 103b2d643;  */

void FUN_103b2d624(void)

{
  func_0x000107c61168(&PTR_PTR_11292a9e8);
  return;
}



/* Entry: 103b2d644; end: 103b2d647;  */

void FUN_103b2d644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56178;
  func_0x000107c61520(&UNK_10dc56178,&UNK_1106d4f20);
  puRam0000000112fecc10 = puVar1;
  return;
}



/* Entry: 103b2d648; end: 103b2d687;  */

void FUN_103b2d648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56178;
  func_0x000107c61520(&UNK_10dc56178,&UNK_1106d4f20);
  puRam0000000112fecc10 = puVar1;
  return;
}



/* Entry: 103b2d688; end: 103b2d733;  */

void FUN_103b2d688(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b2d734; end: 103b2d78f;  */

void FUN_103b2d734(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b2d790; end: 103b2d7cf;  */

void FUN_103b2d790(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc561e0;
  func_0x000107c61520(&UNK_10dc561e0,&UNK_1106d4f98);
  puRam0000000112fecc18 = puVar1;
  return;
}



/* Entry: 103b2d7d0; end: 103b2d87b;  */

void FUN_103b2d7d0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b2d87c; end: 103b2d8b7;  */

void FUN_103b2d87c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b2d8b8; end: 103b2d90f;  */

uint FUN_103b2d8b8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_103b2d910(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103b2d910; end: 103b2d9f3;  */

undefined8 FUN_103b2d910(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x0001007bbbf8(0);
  uVar1 = *param_1;
  func_0x000107c60118(uVar1,*param_2);
  if ((((uVar1 & 1) != 0) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    uVar1 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[3];
      if (((uVar2 != param_2[3]) || (param_1[4] != uVar1)) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[6];
    if (param_1[6] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[5], uVar2 == param_2[5] && (param_1[6] == uVar1)) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103b2d9f4; end: 103b2da4f;  */

long FUN_103b2d9f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b2da50; end: 103b2db3f;  */

undefined8 * FUN_103b2da50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c61174();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103b2db40; end: 103b2db9b;  */

undefined8 * FUN_103b2db40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103b2db9c; end: 103b2dc3f;  */

int FUN_103b2db9c(ulong *param_1,int param_2)

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



/* Entry: 103b2dc40; end: 103b2dc77;  */

void FUN_103b2dc40(undefined8 param_1)

{
  if (lRam0000000112fecc90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ade68);
  return;
}



/* Entry: 103b2dc78; end: 103b2dc7b;  */

uint FUN_103b2dc78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long alStack_70 [2];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  alStack_70[1] = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_70[1] + 0x40));
  lVar6 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar10 = (long *)(lVar9 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar11 = (long *)((long)plVar10 - extraout_x12_01);
  lVar5 = 0x112feccc8;
  func_0x0001000285a8(0x112feccc8,&UNK_10dc56388);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)plVar11 - extraout_x8_01;
  lVar4 = (long)*(int *)(lVar5 + 0x30);
  func_0x000101e3cf64(param_1,lVar3);
  func_0x000101e3cf64(param_2,lVar3 + lVar4);
  lVar5 = lVar3;
  func_0x000107c614c4(lVar3,lVar2);
  if ((int)lVar5 == 0) {
    func_0x000101e3cf64(lVar3,plVar11);
    lVar1 = *plVar11;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 0) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar1);
LAB_103b2e144:
      uVar7 = (uint)(lVar1 == lVar5);
LAB_103b2e14c:
      func_0x000101e3cee4(lVar3);
      goto LAB_103b2e154;
    }
    func_0x000107c61170(lVar1);
  }
  else if ((int)lVar5 == 1) {
    func_0x000101e3cf64(lVar3,plVar10);
    lVar1 = *plVar10;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 1) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar1);
      goto LAB_103b2e144;
    }
    func_0x000107c615e8(lVar1);
  }
  else {
    func_0x000101e3cf64(lVar3,lVar9);
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    lVar2 = alStack_70[1];
    if ((int)lVar5 == 2) {
      pcVar8 = *(code **)(alStack_70[1] + 0x20);
      (*pcVar8)(lVar6,lVar9,lVar1);
      lVar5 = alStack_70[0];
      (*pcVar8)(alStack_70[0],lVar3 + lVar4,lVar1);
      lVar4 = lVar6;
      func_0x000107c5edac(lVar6,lVar5);
      uVar7 = (uint)lVar4;
      pcVar8 = *(code **)(lVar2 + 8);
      (*pcVar8)(lVar5,lVar1);
      (*pcVar8)(lVar6,lVar1);
      goto LAB_103b2e14c;
    }
    (**(code **)(alStack_70[1] + 8))(lVar9,lVar1);
  }
  func_0x000103b2e604(lVar3);
  uVar7 = 0;
LAB_103b2e154:
  return uVar7 & 1;
}



/* Entry: 103b2dc7c; end: 103b2deaf;  */

undefined1  [16] FUN_103b2dc7c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_50 [2];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)auStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000101e3cf64();
  puVar3 = puVar7;
  func_0x000107c614c4(puVar7,lVar2);
  if ((int)puVar3 == 0) {
    uVar6 = *puVar7;
    auStack_50[0] = 0x286567616d692e;
    auStack_50[1] = 0xe700000000000000;
    uVar4 = uVar6;
    func_0x000107c417f0(uVar6);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar5,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    func_0x000107c61170(uVar6);
  }
  else if ((int)puVar3 == 1) {
    uVar6 = *puVar7;
    auStack_50[0] = 0x286f656469762e;
    auStack_50[1] = 0xe700000000000000;
    uVar4 = uVar6;
    func_0x000107c417f0(uVar6);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar5,lVar2);
    func_0x000107c6142c(lVar2);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    func_0x000107c615e8(uVar6);
  }
  else {
    lVar2 = lVar8;
    (**(code **)(lVar9 + 0x20))(lVar8,puVar7,lVar1);
    auStack_50[0] = 0x6c7469746275732e;
    auStack_50[1] = 0xea00000000002865;
    func_0x000100f15b10();
    func_0x000107c6057c(lVar1,lVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar2);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    uVar5 = auStack_50[1];
    uVar4 = auStack_50[0];
    (**(code **)(lVar9 + 8))(lVar8,lVar1);
    auStack_50[0] = uVar4;
    auStack_50[1] = uVar5;
  }
  auVar10._8_8_ = auStack_50[1];
  auVar10._0_8_ = auStack_50[0];
  return auVar10;
}



/* Entry: 103b2deb0; end: 103b2deb7;  */

uint FUN_103b2deb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long alStack_70 [2];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  alStack_70[1] = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_70[1] + 0x40));
  lVar6 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar10 = (long *)(lVar9 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar11 = (long *)((long)plVar10 - extraout_x12_01);
  lVar5 = 0x112feccc8;
  func_0x0001000285a8(0x112feccc8,&UNK_10dc56388);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)plVar11 - extraout_x8_01;
  lVar4 = (long)*(int *)(lVar5 + 0x30);
  func_0x000101e3cf64(param_1,lVar3);
  func_0x000101e3cf64(param_2,lVar3 + lVar4);
  lVar5 = lVar3;
  func_0x000107c614c4(lVar3,lVar2);
  if ((int)lVar5 == 0) {
    func_0x000101e3cf64(lVar3,plVar11);
    lVar1 = *plVar11;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 0) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar1);
LAB_103b2e144:
      uVar7 = (uint)(lVar1 == lVar5);
LAB_103b2e14c:
      func_0x000101e3cee4(lVar3);
      goto LAB_103b2e154;
    }
    func_0x000107c61170(lVar1);
  }
  else if ((int)lVar5 == 1) {
    func_0x000101e3cf64(lVar3,plVar10);
    lVar1 = *plVar10;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 1) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar1);
      goto LAB_103b2e144;
    }
    func_0x000107c615e8(lVar1);
  }
  else {
    func_0x000101e3cf64(lVar3,lVar9);
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    lVar2 = alStack_70[1];
    if ((int)lVar5 == 2) {
      pcVar8 = *(code **)(alStack_70[1] + 0x20);
      (*pcVar8)(lVar6,lVar9,lVar1);
      lVar5 = alStack_70[0];
      (*pcVar8)(alStack_70[0],lVar3 + lVar4,lVar1);
      lVar4 = lVar6;
      func_0x000107c5edac(lVar6,lVar5);
      uVar7 = (uint)lVar4;
      pcVar8 = *(code **)(lVar2 + 8);
      (*pcVar8)(lVar5,lVar1);
      (*pcVar8)(lVar6,lVar1);
      goto LAB_103b2e14c;
    }
    (**(code **)(alStack_70[1] + 8))(lVar9,lVar1);
  }
  func_0x000103b2e604(lVar3);
  uVar7 = 0;
LAB_103b2e154:
  return uVar7 & 1;
}



/* Entry: 103b2deb8; end: 103b2e177;  */

uint FUN_103b2deb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long alStack_70 [2];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  alStack_70[1] = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_70[1] + 0x40));
  lVar6 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_70[0] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar10 = (long *)(lVar9 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar11 = (long *)((long)plVar10 - extraout_x12_01);
  lVar5 = 0x112feccc8;
  func_0x0001000285a8(0x112feccc8,&UNK_10dc56388);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)plVar11 - extraout_x8_01;
  lVar4 = (long)*(int *)(lVar5 + 0x30);
  func_0x000101e3cf64(param_1,lVar3);
  func_0x000101e3cf64(param_2,lVar3 + lVar4);
  lVar5 = lVar3;
  func_0x000107c614c4(lVar3,lVar2);
  if ((int)lVar5 == 0) {
    func_0x000101e3cf64(lVar3,plVar11);
    lVar1 = *plVar11;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 0) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar1);
LAB_103b2e144:
      uVar7 = (uint)(lVar1 == lVar5);
LAB_103b2e14c:
      func_0x000101e3cee4(lVar3);
      goto LAB_103b2e154;
    }
    func_0x000107c61170(lVar1);
  }
  else if ((int)lVar5 == 1) {
    func_0x000101e3cf64(lVar3,plVar10);
    lVar1 = *plVar10;
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    if ((int)lVar5 == 1) {
      lVar5 = *(long *)(lVar3 + lVar4);
      func_0x000107c615e8(lVar5);
      func_0x000107c615e8(lVar1);
      goto LAB_103b2e144;
    }
    func_0x000107c615e8(lVar1);
  }
  else {
    func_0x000101e3cf64(lVar3,lVar9);
    lVar5 = lVar3 + lVar4;
    func_0x000107c614c4(lVar5,lVar2);
    lVar2 = alStack_70[1];
    if ((int)lVar5 == 2) {
      pcVar8 = *(code **)(alStack_70[1] + 0x20);
      (*pcVar8)(lVar6,lVar9,lVar1);
      lVar5 = alStack_70[0];
      (*pcVar8)(alStack_70[0],lVar3 + lVar4,lVar1);
      lVar4 = lVar6;
      func_0x000107c5edac(lVar6,lVar5);
      uVar7 = (uint)lVar4;
      pcVar8 = *(code **)(lVar2 + 8);
      (*pcVar8)(lVar5,lVar1);
      (*pcVar8)(lVar6,lVar1);
      goto LAB_103b2e14c;
    }
    (**(code **)(alStack_70[1] + 8))(lVar9,lVar1);
  }
  func_0x000103b2e604(lVar3);
  uVar7 = 0;
LAB_103b2e154:
  return uVar7 & 1;
}


