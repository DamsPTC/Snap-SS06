/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a378bc; end: 103a378fb; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordPlaybackTimeToRenderedWithDurationSec:attemptCount:] */

void FUN_103a378bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_103a377d4(param_1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103a378fc; end: 103a379e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a378fc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  if (param_1 == 0) {
    uVar2 = 0xe700000000000000;
    uStack_68 = 0x6f745f646e6573;
  }
  else {
    if (param_1 != 1) {
      lStack_70 = param_1;
      func_0x000107c60614(&UNK_1106c15b0,&lStack_70,&UNK_1106c15b0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103a379e4);
      (*pcVar1)();
    }
    uVar2 = 0xe400000000000000;
    uStack_68 = 0x65766173;
  }
  lStack_70 = 1;
  uStack_60 = uVar2;
  (**(code **)(lStack_38 + 8))(&lStack_70,&UNK_1106c16e8,&PTR_DAT_1106c1a38,uStack_40,lStack_38);
  func_0x000107c6142c(uVar2);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103a379e4; end: 103a37a13; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordLiveRenderFlowEnteredWithFlow:] */

void FUN_103a379e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103a378fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a37a14; end: 103a37bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a37a14(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(auStack_78);
  lVar1 = lStack_58;
  uVar3 = uStack_60;
  func_0x0001000a8868(auStack_78,uStack_60);
  if (param_1 == 0) {
    uVar4 = 0xe800000000000000;
    uStack_98 = 0x64657265646e6572;
  }
  else if (param_1 == 2) {
    uVar4 = 0xeb00000000656c62;
    uStack_98 = 0x616c696176616e75;
  }
  else {
    if (param_1 != 1) {
      lStack_a0 = param_1;
      func_0x000107c60614(&UNK_1106c15d0,&lStack_a0,&UNK_1106c15d0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103a37bd4);
      (*pcVar2)();
    }
    uVar4 = 0xef6b6361626c6c61;
    uStack_98 = 0x665f656372756f73;
  }
  lStack_a0 = 1;
  uStack_90 = uVar4;
  (**(code **)(lVar1 + 8))(&lStack_a0,&UNK_1106c1668,&PTR_DAT_1106c1a18,uVar3,lVar1);
  func_0x000107c6142c(uVar4);
  func_0x0001000834e4(auStack_78);
  if (param_1 == 2) {
    func_0x000100083b20(auStack_78);
    uVar3 = uStack_60;
    func_0x0001000a8868(auStack_78);
    FUN_103a37f60();
    uStack_98 = 0x69616e626d756874;
    lStack_a0 = 1;
    uStack_90 = 0xe90000000000006c;
    uStack_88 = param_2;
    (**(code **)(lStack_58 + 8))(&lStack_a0,&UNK_1106c1970,&PTR_DAT_1106c1ad8,uStack_60,lStack_58);
    func_0x000107c6142c(uVar3);
    func_0x0001000834e4(auStack_78);
  }
  return;
}



/* Entry: 103a37bd4; end: 103a37c33; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder recordThumbnailServedWithResult:error:] */

/* WARNING: Possible PIC construction at 0x000103a37c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a37c20) */

void FUN_103a37bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_103a37a14(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103a37c34; end: 103a37c67;  */

void FUN_103a37c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a37c68; end: 103a37c93; -[_TtC28MemoriesLiveRenderingMetrics36MemoriesLiveRenderingMetricsRecorder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a37c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fcf2b0));
  return;
}



/* Entry: 103a37c94; end: 103a37d0f;  */

long FUN_103a37c94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  *(undefined8 *)(lVar5 + 0x30) = uVar2;
  *(undefined8 *)(lVar5 + 0x38) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 103a37d10; end: 103a37d27;  */

void FUN_103a37d10(void)

{
  undefined8 *unaff_x20;
  
  func_0x000103a38d54(*unaff_x20);
  return;
}



/* Entry: 103a37d28; end: 103a37d43;  */

void FUN_103a37d28(void)

{
  if (lRam000000011357ee60 != -1) {
    func_0x000107c61568(0x11357ee60,0x103a3692c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam000000011357ee68);
  return;
}



/* Entry: 103a37d44; end: 103a37d87;  */

void FUN_103a37d44(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103a37d88; end: 103a37da3;  */

void FUN_103a37d88(void)

{
  if (lRam000000011357ee70 != -1) {
    func_0x000107c61568(0x11357ee70,0x103a369c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam000000011357ee78);
  return;
}



/* Entry: 103a37da4; end: 103a37dbb;  */

void FUN_103a37da4(void)

{
  undefined8 *unaff_x20;
  
  func_0x000103a38d54(*unaff_x20);
  return;
}



/* Entry: 103a37dbc; end: 103a37df7;  */

void FUN_103a37dbc(void)

{
  if (lRam000000011357ee50 != -1) {
    func_0x000107c61568(0x11357ee50,0x103a36a54);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uRam000000011357ee58);
  return;
}



/* Entry: 103a37df8; end: 103a37e73;  */

long FUN_103a37df8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *(undefined8 *)(lVar5 + 0x30) = uVar1;
  *(undefined8 *)(lVar5 + 0x38) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return lVar5;
}



/* Entry: 103a37e74; end: 103a37edb;  */

undefined8 FUN_103a37e74(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103a37edc; end: 103a37f3f;  */

long FUN_103a37edc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 103a37f40; end: 103a37f5f;  */

undefined1  [16] FUN_103a37f40(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103a37f60; end: 103a38657;  */

undefined1  [16] FUN_103a37f60(undefined8 ****param_1,long param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined **ppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 ***pppuVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined1 auVar18 [16];
  undefined8 ****ppppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  if (param_1 == (undefined8 ****)0x0) {
    pppuVar11 = (undefined8 ***)0xea0000000000746c;
    pppppuVar5 = (undefined8 *****)0x757365725f6c696e;
    goto LAB_103a38630;
  }
  func_0x000107c61174();
  ppppuVar2 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  ppppuVar3 = ppppuVar2;
  func_0x000107c5faec();
  lVar9 = param_2;
  func_0x000107c61170(ppppuVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e877f8;
  func_0x000107c5faec();
  if ((ppppuVar3 == (undefined8 ****)ppuVar4) && (param_2 == lVar9)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar9);
  }
  else {
    lVar10 = param_2;
    func_0x000107c605b8(ppppuVar3,param_2,ppuVar4,lVar9,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar9);
    if (((ulong)ppppuVar3 & 1) == 0) {
      ppppuVar2 = param_1;
      func_0x000107c42210();
      func_0x000107c61180();
      ppppuVar3 = ppppuVar2;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar2);
      ppppuVar6 = param_1;
      func_0x000107c3fcb0();
      lVar9 = lVar10;
      func_0x000107c5fb1c(ppppuVar3,lVar10);
      ppppuVar2 = ppppuVar3;
      func_0x000107c5fb5c();
      if (ppppuVar2 == (undefined8 ****)0x0) {
        func_0x000107c6142c(lVar9);
        ppppuStack_80 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppuStack_80 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101499164(0,(ulong)ppppuVar2 & ((long)ppppuVar2 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)ppppuVar2 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103a38654);
          (*pcVar1)();
        }
        pppuVar11 = (undefined8 ***)0xf;
        ppppuVar14 = ppppuStack_80;
        do {
          pppuVar17 = pppuVar11;
          ppppuVar16 = ppppuVar3;
          func_0x000107c5fbcc(pppuVar11,ppppuVar3,lVar9);
          pppuVar7 = pppuVar17;
          func_0x000107c5fa6c();
          if ((((ulong)pppuVar7 & 1) == 0) &&
             (pppuVar7 = pppuVar17, func_0x000107c5fa70(pppuVar17,ppppuVar16),
             ((ulong)pppuVar7 & 1) == 0)) {
            func_0x000107c6142c(ppppuVar16);
            ppppuVar16 = (undefined8 ****)0xe100000000000000;
            pppuVar17 = (undefined8 ***)0x5f;
          }
          pppuVar7 = ppppuVar14[2];
          ppppuStack_80 = ppppuVar14;
          if ((undefined8 ***)((ulong)ppppuVar14[3] >> 1) <= pppuVar7) {
            func_0x000101499164((undefined8 ***)0x1 < ppppuVar14[3],
                                (undefined8 ***)((long)pppuVar7 + 1U),1);
          }
          ppppuVar14 = ppppuStack_80;
          ppppuStack_80[2] = (undefined8 ***)((long)pppuVar7 + 1U);
          ppppuStack_80[(long)pppuVar7 * 2 + 4] = pppuVar17;
          ppppuStack_80[(long)pppuVar7 * 2 + 5] = ppppuVar16;
          func_0x000107c5fb60(pppuVar11,ppppuVar3,lVar9);
          ppppuVar2 = (undefined8 ****)((long)ppppuVar2 + -1);
        } while (ppppuVar2 != (undefined8 ****)0x0);
        func_0x000107c6142c(lVar9);
        ppppuStack_80 = ppppuVar14;
      }
      pppuVar11 = ppppuStack_80[2];
      if ((undefined8 ***)0x27 < pppuVar11) {
        pppuVar11 = (undefined8 ***)0x28;
      }
      pppuStack_78 = ppppuStack_80 + 4;
      uStack_68 = (long)pppuVar11 << 1 | 1;
      uStack_70 = 0;
      uVar15 = 0x112fcf578;
      func_0x0001000285a8(0x112fcf578,&UNK_10dc3ea88);
      uVar8 = uVar15;
      FUN_103a38df0();
      pppppuVar5 = &ppppuStack_80;
      func_0x000107c5fbd0(pppppuVar5,uVar15,uVar8);
      uVar8 = (ulong)pppppuVar5 & 0xffffffffffff;
      if ((uVar15 & 0x2000000000000000) != 0) {
        uVar8 = uVar15 >> 0x38 & 0xf;
      }
      if (uVar8 == 0) {
        func_0x000107c6142c(uVar15);
        uVar15 = 0xec0000006e69616d;
        pppppuVar5 = (undefined8 *****)0x6f645f7974706d65;
        if (-1 < (long)ppppuVar6) goto LAB_103a38248;
LAB_103a38298:
        ppppuStack_80 = (undefined8 ****)0x67656e;
        pppuStack_78 = (undefined8 ***)0xe300000000000000;
        if (SBORROW8(0,(long)ppppuVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103a38658);
          (*pcVar1)();
        }
        puVar12 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar12);
        pppuVar11 = pppuStack_78;
        ppppuVar2 = ppppuStack_80;
      }
      else {
        if ((long)ppppuVar6 < 0) goto LAB_103a38298;
LAB_103a38248:
        ppppuVar2 = (undefined8 ****)PTR___sSiN_11034deb0;
        pppuVar11 = (undefined8 ***)PTR___sSis23CustomStringConvertiblesWP_11034df00;
        ppppuStack_80 = ppppuVar6;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      }
      ppppuStack_80 = pppppuVar5;
      pppuStack_78 = (undefined8 ***)uVar15;
      func_0x000107c61434(uVar15);
      func_0x000107c5fb78(0x5f,0xe100000000000000);
      func_0x000107c5fb78(ppppuVar2,pppuVar11);
      func_0x000107c6142c(pppuVar11);
      func_0x000107c6142c(uVar15);
      pppuVar11 = pppuStack_78;
      pppppuVar5 = (undefined8 *****)ppppuStack_80;
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar10);
      goto LAB_103a38630;
    }
  }
  ppppuVar2 = param_1;
  func_0x000107c3fcb0();
  func_0x000107c61170(param_1);
  pppuVar11 = (undefined8 ***)0xed00007475707475;
  pppppuVar5 = (undefined8 *****)0x6f5f7265646e6572;
  switch(ppppuVar2) {
  case (undefined8 ****)0x3:
    pcVar13 = "render_effect_plugins";
    goto code_r0x000103a38520;
  default:
    pppuVar11 = (undefined8 ***)0xec00000065646f63;
    pppppuVar5 = (undefined8 *****)0x5f6e776f6e6b6e75;
    break;
  case (undefined8 ****)0x5:
    break;
  case (undefined8 ****)0x6:
    pppuVar11 = (undefined8 ***)0x800000010f18b6d0;
    pppppuVar5 = (undefined8 *****)0xd000000000000013;
    break;
  case (undefined8 ****)0x7:
    pppuVar11 = (undefined8 ***)0xef676e6973736563;
    pppppuVar5 = (undefined8 *****)0x6f72705f736e656c;
    break;
  case (undefined8 ****)0x8:
    pppuVar11 = (undefined8 ***)0x800000010f18b6b0;
    pppppuVar5 = (undefined8 *****)0xd00000000000001b;
    break;
  case (undefined8 ****)0x9:
    pcVar13 = "video_inputs_stream_count";
    goto code_r0x000103a3850c;
  case (undefined8 ****)0xa:
    pcVar13 = "no_rendering_necessary";
    goto code_r0x000103a385fc;
  case (undefined8 ****)0xb:
    pcVar13 = "no_plugin_provided";
    goto code_r0x000103a384d0;
  case (undefined8 ****)0xc:
    pcVar13 = "non_renderable_input";
    goto code_r0x000103a3861c;
  case (undefined8 ****)0xd:
    pcVar13 = "video_inputs_warmup_failed";
    goto code_r0x000103a385bc;
  case (undefined8 ****)0xe:
    pppuVar11 = (undefined8 ***)0xe700000000000000;
    pppppuVar5 = (undefined8 *****)0x6b7361745f6f6e;
    break;
  case (undefined8 ****)0xf:
    pppuVar11 = (undefined8 ***)0xef746e65746e6f63;
    pppppuVar5 = (undefined8 *****)0x5f6f6e5f736e656c;
    break;
  case (undefined8 ****)0x10:
    pcVar13 = "callsite_cancelled";
    goto code_r0x000103a384d0;
  case (undefined8 ****)0x11:
    pcVar13 = "lens_long_running_task";
    goto code_r0x000103a385fc;
  case (undefined8 ****)0x12:
    pcVar13 = "external_textures_missing";
    goto code_r0x000103a3850c;
  case (undefined8 ****)0x13:
    pcVar13 = "external_textures_changed";
    goto code_r0x000103a3850c;
  case (undefined8 ****)0x14:
    pcVar13 = "plugin_disabled_processing";
code_r0x000103a385bc:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd00000000000001a;
    break;
  case (undefined8 ****)0x15:
    pcVar13 = "warmup_after_plugin_disabled";
    goto code_r0x000103a3859c;
  case (undefined8 ****)0x16:
    pcVar13 = "warmup_workflow_error";
    goto code_r0x000103a38520;
  case (undefined8 ****)0x17:
    pcVar13 = "effect_application_failed";
    goto code_r0x000103a3850c;
  case (undefined8 ****)0x18:
    pppuVar11 = (undefined8 ***)0xec000000636f645f;
    pppppuVar5 = (undefined8 *****)0x70616e735f6c696e;
    break;
  case (undefined8 ****)0x19:
    pppuVar11 = (undefined8 ***)0x800000010f18b4f0;
    pppppuVar5 = (undefined8 *****)0xd000000000000018;
    break;
  case (undefined8 ****)0x1a:
    pppuVar11 = (undefined8 ***)0xe700000000000000;
    pppppuVar5 = (undefined8 *****)0x74756f656d6974;
    break;
  case (undefined8 ****)0x1b:
    pppuVar11 = (undefined8 ***)0x800000010f18b4d0;
    pppppuVar5 = (undefined8 *****)0xd000000000000011;
    break;
  case (undefined8 ****)0x1c:
    pcVar13 = "external_unexpected_textures";
code_r0x000103a3859c:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd00000000000001c;
    break;
  case (undefined8 ****)0x1d:
    pcVar13 = "empty_media_inputs";
code_r0x000103a384d0:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd000000000000012;
    break;
  case (undefined8 ****)0x1e:
    pcVar13 = "invalid_media_inputs";
    goto code_r0x000103a3861c;
  case (undefined8 ****)0x1f:
    pcVar13 = "content_loading_failed";
code_r0x000103a385fc:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd000000000000016;
    break;
  case (undefined8 ****)0x20:
    pppuVar11 = (undefined8 ***)0xee00617461645f65;
    pppppuVar5 = (undefined8 *****)0x67616d695f646162;
    break;
  case (undefined8 ****)0x21:
    pcVar13 = "media_segment_failed";
code_r0x000103a3861c:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd000000000000014;
    break;
  case (undefined8 ****)0x22:
    pcVar13 = "invalid_ct_item_edits";
code_r0x000103a38520:
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
    pppppuVar5 = (undefined8 *****)0xd000000000000015;
    break;
  case (undefined8 ****)0x23:
    pcVar13 = "invalid_snap_doc_playback";
code_r0x000103a3850c:
    pppppuVar5 = (undefined8 *****)0xd000000000000019;
    pppuVar11 = (undefined8 ***)((ulong)(pcVar13 + -0x20) | 0x8000000000000000);
  }
LAB_103a38630:
  auVar18._8_8_ = pppuVar11;
  auVar18._0_8_ = pppppuVar5;
  return auVar18;
}



/* Entry: 103a38658; end: 103a3865b;  */

void FUN_103a38658(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e448;
  func_0x000107c61520(&UNK_10dc3e448,&UNK_1106c1550);
  puRam0000000112fcf2b8 = puVar1;
  return;
}



/* Entry: 103a3865c; end: 103a3869b;  */

void FUN_103a3865c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e448;
  func_0x000107c61520(&UNK_10dc3e448,&UNK_1106c1550);
  puRam0000000112fcf2b8 = puVar1;
  return;
}



/* Entry: 103a3869c; end: 103a3869f;  */

void FUN_103a3869c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e4e8;
  func_0x000107c61520(&UNK_10dc3e4e8,&UNK_1106c1570);
  puRam0000000112fcf2c0 = puVar1;
  return;
}



/* Entry: 103a386a0; end: 103a386df;  */

void FUN_103a386a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e4e8;
  func_0x000107c61520(&UNK_10dc3e4e8,&UNK_1106c1570);
  puRam0000000112fcf2c0 = puVar1;
  return;
}



/* Entry: 103a386e0; end: 103a386e3;  */

void FUN_103a386e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e588;
  func_0x000107c61520(&UNK_10dc3e588,&UNK_1106c1590);
  puRam0000000112fcf2c8 = puVar1;
  return;
}



/* Entry: 103a386e4; end: 103a38723;  */

void FUN_103a386e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e588;
  func_0x000107c61520(&UNK_10dc3e588,&UNK_1106c1590);
  puRam0000000112fcf2c8 = puVar1;
  return;
}



/* Entry: 103a38724; end: 103a38727;  */

void FUN_103a38724(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e628;
  func_0x000107c61520(&UNK_10dc3e628,&UNK_1106c15b0);
  puRam0000000112fcf2d0 = puVar1;
  return;
}



/* Entry: 103a38728; end: 103a38767;  */

void FUN_103a38728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e628;
  func_0x000107c61520(&UNK_10dc3e628,&UNK_1106c15b0);
  puRam0000000112fcf2d0 = puVar1;
  return;
}



/* Entry: 103a38768; end: 103a3876b;  */

void FUN_103a38768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e6c8;
  func_0x000107c61520(&UNK_10dc3e6c8,&UNK_1106c15d0);
  puRam0000000112fcf2d8 = puVar1;
  return;
}



/* Entry: 103a3876c; end: 103a387ab;  */

void FUN_103a3876c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fcf2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3e6c8;
  func_0x000107c61520(&UNK_10dc3e6c8,&UNK_1106c15d0);
  puRam0000000112fcf2d8 = puVar1;
  return;
}



/* Entry: 103a387ac; end: 103a387fb;  */

undefined1  [16] FUN_103a387ac(void)

{
  return ZEXT816(0x1106c1530);
}



/* Entry: 103a387fc; end: 103a3881b;  */

void FUN_103a387fc(void)

{
  func_0x000107c61168(&PTR_PTR_112915f08);
  return;
}



/* Entry: 103a3881c; end: 103a3884b;  */

undefined1  [16] FUN_103a3881c(void)

{
  return ZEXT816(0x1106c15d0);
}



/* Entry: 103a3884c; end: 103a3887f;  */

undefined8 * FUN_103a3884c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103a38880; end: 103a3888b;  */

void FUN_103a38880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103a3888c; end: 103a3890b;  */

undefined8 * FUN_103a3888c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103a3890c; end: 103a38963;  */

int FUN_103a3890c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a38964; end: 103a389e3;  */

undefined8 * FUN_103a38964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103a389e4; end: 103a38a7b;  */

int FUN_103a389e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a38a7c; end: 103a38aef;  */

undefined8 * FUN_103a38a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103a38af0; end: 103a38b3b;  */

undefined8 * FUN_103a38af0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103a38b3c; end: 103a38b4b;  */

undefined1  [16] FUN_103a38b3c(void)

{
  return ZEXT816(0x1106c1970);
}



/* Entry: 103a38b4c; end: 103a38b77;  */

long FUN_103a38b4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a38b78; end: 103a38b7b;  */

/* WARNING: Possible PIC construction at 0x000103a38b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a38b94) */

void FUN_103a38b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103a38b7c; end: 103a38ba3;  */

/* WARNING: Possible PIC construction at 0x000103a38b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a38b94) */

void FUN_103a38b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 103a38ba4; end: 103a38ba7;  */

undefined8 * FUN_103a38ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103a38ba8; end: 103a38beb;  */

undefined8 * FUN_103a38ba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 103a38bec; end: 103a38c5f;  */

undefined8 * FUN_103a38bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103a38c60; end: 103a38cab;  */

undefined8 * FUN_103a38c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103a38cac; end: 103a38def;  */

int FUN_103a38cac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a38df0; end: 103a38e3f;  */

void FUN_103a38df0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fcf580 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112fcf578;
  func_0x00010002969c(0x112fcf578,&UNK_10dc3ea88);
  puVar2 = PTR___ss10ArraySliceVyxGSTsMc_11034e2e8;
  func_0x000107c61520(PTR___ss10ArraySliceVyxGSTsMc_11034e2e8,uVar1);
  puRam0000000112fcf580 = puVar2;
  return;
}



/* Entry: 103a38e40; end: 103a38f6f;  */

void FUN_103a38e40(void)

{
  undefined8 *unaff_x20;
  
  func_0x000103a38d54(*unaff_x20);
  return;
}



/* Entry: 103a38f70; end: 103a38ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a38f70(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa3928();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fcf588) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fcf590) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a38ff8);
  (*pcVar1)();
}



/* Entry: 103a38ff8; end: 103a39057; -[_TtC36MemActiveUserSessionScopeGraphBridge51MemActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a38ff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemActiveUserSessionScopeGraphBridge.MemActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a39024);
  (*pcVar1)();
}



/* Entry: 103a39058; end: 103a3908f; -[_TtC36MemActiveUserSessionScopeGraphBridge51MemActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a39074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a39078) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a39058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fcf588));
  return;
}



/* Entry: 103a39090; end: 103a390b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a39090(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fcf590),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fcf588));
  return;
}



/* Entry: 103a390b8; end: 103a3911b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a390b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a3911c; end: 103a39123;  */

void FUN_103a3911c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39124; end: 103a391c3;  */

void FUN_103a39124(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a391c4; end: 103a391e3;  */

void FUN_103a391c4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a391e4; end: 103a39247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a391e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39248; end: 103a3924f;  */

void FUN_103a39248(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39250; end: 103a392ef;  */

void FUN_103a39250(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a392f0; end: 103a3930f;  */

void FUN_103a392f0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39310; end: 103a39373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39310(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39374; end: 103a3937b;  */

void FUN_103a39374(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a3937c; end: 103a3941b;  */

void FUN_103a3937c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a3941c; end: 103a3943b;  */

void FUN_103a3941c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a3943c; end: 103a3949f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a3943c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a394a0; end: 103a394a7;  */

void FUN_103a394a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a394a8; end: 103a39547;  */

void FUN_103a394a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a39548; end: 103a39567;  */

void FUN_103a39548(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39568; end: 103a395cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39568(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44c0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a395cc; end: 103a395d3;  */

void FUN_103a395cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a395d4; end: 103a39673;  */

void FUN_103a395d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a39674; end: 103a39693;  */

void FUN_103a39674(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39694; end: 103a396f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39694(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44c8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a396f8; end: 103a396ff;  */

void FUN_103a396f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39700; end: 103a3979f;  */

void FUN_103a39700(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a397a0; end: 103a397bf;  */

void FUN_103a397a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a397c0; end: 103a39823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a397c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44d0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39824; end: 103a3982b;  */

void FUN_103a39824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a3982c; end: 103a398cb;  */

void FUN_103a3982c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a398cc; end: 103a398eb;  */

void FUN_103a398cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a398ec; end: 103a3994f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a398ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44d8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39950; end: 103a39957;  */

void FUN_103a39950(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39958; end: 103a399f7;  */

void FUN_103a39958(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a399f8; end: 103a39a17;  */

void FUN_103a399f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39a18; end: 103a39a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39a18(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44e0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39a7c; end: 103a39a83;  */

void FUN_103a39a7c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39a84; end: 103a39b23;  */

void FUN_103a39a84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a39b24; end: 103a39b43;  */

void FUN_103a39b24(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39b44; end: 103a39ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39b44(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44e8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39ba8; end: 103a39baf;  */

void FUN_103a39ba8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39bb0; end: 103a39c4f;  */

void FUN_103a39bb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a39c50; end: 103a39c6f;  */

void FUN_103a39c50(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39c70; end: 103a39cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39c70(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44f0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a39cd4; end: 103a39cdb;  */

void FUN_103a39cd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a39cdc; end: 103a39d7b;  */

void FUN_103a39cdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a39d7c; end: 103a39d9b;  */

void FUN_103a39d7c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a39d9c; end: 103a39dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a39d9c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fd44f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}


