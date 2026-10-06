/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046bc680; end: 1046bc6bf;  */

void FUN_1046bc680(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2cd4c;
  _swift_getWitnessTable(&UNK_10dd2cd4c,&UNK_11079a048);
  puRam000000011308d6b0 = puVar1;
  return;
}



/* Entry: 1046bc6c0; end: 1046bc6e7;  */

undefined1  [16] FUN_1046bc6c0(void)

{
  return ZEXT816(0x11079a048);
}



/* Entry: 1046bc6e8; end: 1046bc727;  */

void FUN_1046bc6e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ce40;
  _swift_getWitnessTable(&UNK_10dd2ce40,&UNK_11079a0d0);
  puRam000000011308d6b8 = puVar1;
  return;
}



/* Entry: 1046bc728; end: 1046bc7d3;  */

void FUN_1046bc728(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bc7d4; end: 1046bc7fb;  */

void FUN_1046bc7d4(ulong *param_1,ulong *param_2)

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



/* Entry: 1046bc7fc; end: 1046bc883;  */

undefined1  [16] FUN_1046bc7fc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f20c720;
    uVar2 = 0xd000000000000011;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bc884);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x74696d627573;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bc884; end: 1046bc893;  */

undefined1  [16] FUN_1046bc884(void)

{
  return ZEXT816(0x11079a0d0);
}



/* Entry: 1046bc894; end: 1046bcafb;  */

undefined1  [16] FUN_1046bc894(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_18;
  
  uVar4 = 0xe400000000000000;
  uVar2 = 0x6c6c756e;
  switch(param_1) {
  case 1:
    uVar4 = 0xee00746e65736572;
    uVar2 = 0x5070616e53706f74;
  case 0:
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar2;
    return auVar6;
  case 2:
    pcVar5 = "topSnapDisappear";
    break;
  case 3:
    pcVar5 = "attachmentTrigger";
    goto code_r0x0001046bca98;
  case 4:
    pcVar5 = "attachmentDidTrigger";
    goto code_r0x0001046bca3c;
  case 5:
    pcVar5 = "attachmentTriggerFail";
    goto code_r0x0001046bc9f8;
  case 6:
    pcVar5 = "attachmentWillAppear";
code_r0x0001046bca3c:
    auVar14._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000014;
    return auVar14;
  case 7:
    pcVar5 = "attachmentDidAppear";
    goto code_r0x0001046bca5c;
  case 8:
    pcVar5 = "attachmentDismiss";
code_r0x0001046bca98:
    auVar17._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000011;
    return auVar17;
  case 9:
    uVar3 = 0x65726f66;
    goto code_r0x0001046bca7c;
  case 10:
    uVar3 = 0x6b636162;
code_r0x0001046bca7c:
    auVar16._0_8_ = uVar3 | 0x756f726700000000;
    auVar16._8_8_ = 0xea0000000000646e;
    return auVar16;
  case 0xb:
    auVar7._8_8_ = 0xe700000000000000;
    auVar7._0_8_ = 0x77656976626577;
    return auVar7;
  case 0xc:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x6b6e696c70656564;
    return auVar8;
  case 0xd:
    auVar13._8_8_ = 0xea00000000006c6c;
    auVar13._0_8_ = 0x6174736e49707061;
    return auVar13;
  case 0xe:
    pcVar5 = "focusItemChanged";
    break;
  case 0xf:
    auVar9._8_8_ = 0xee0064616f4c6469;
    auVar9._0_8_ = 0x4470616e53706f74;
    return auVar9;
  case 0x10:
    pcVar5 = "topSnapFullyLoaded";
    goto code_r0x0001046bc9a8;
  case 0x11:
    pcVar5 = "topSnapDidTearDown";
code_r0x0001046bc9a8:
    auVar10._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000012;
    return auVar10;
  case 0x12:
    pcVar5 = "tryOnOverlayTrigger";
code_r0x0001046bca5c:
    auVar15._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000013;
    return auVar15;
  case 0x13:
    pcVar5 = "endCardDisplayed";
    break;
  case 0x14:
    auVar11._8_8_ = 0xed00006e65646469;
    auVar11._0_8_ = 0x4864726143646e65;
    return auVar11;
  case 0x15:
    pcVar5 = "stickerOverlayTrigger";
code_r0x0001046bc9f8:
    auVar12._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000015;
    return auVar12;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079a158,&uStack_18,&UNK_11079a158,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bcafc);
    (*pcVar1)();
  }
  auVar18._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
  auVar18._0_8_ = 0xd000000000000010;
  return auVar18;
}



/* Entry: 1046bcafc; end: 1046bcb0f;  */

bool FUN_1046bcafc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bcb10; end: 1046bcbe7;  */

void FUN_1046bcb10(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bcbe8; end: 1046bcc0f;  */

void FUN_1046bcbe8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bcc10; end: 1046bcc4f;  */

void FUN_1046bcc10(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2cf48;
  _swift_getWitnessTable(&UNK_10dd2cf48,&UNK_11079a158);
  puRam000000011308d6c0 = puVar1;
  return;
}



/* Entry: 1046bcc50; end: 1046bcc8b;  */

undefined1  [16] FUN_1046bcc50(void)

{
  return ZEXT816(0x11079a158);
}



/* Entry: 1046bcc8c; end: 1046bcccb;  */

void FUN_1046bcc8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d0a8;
  _swift_getWitnessTable(&UNK_10dd2d0a8,&UNK_11079a1e0);
  puRam000000011308d6c8 = puVar1;
  return;
}



/* Entry: 1046bcccc; end: 1046bcd77;  */

void FUN_1046bcccc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bcd78; end: 1046bcd8b;  */

bool FUN_1046bcd78(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bcd8c; end: 1046bce0f;  */

undefined1  [16] FUN_1046bcd8c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x7465736e75;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe600000000000000;
    uVar2 = 0x646570706174;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bce10);
      (*pcVar1)();
    }
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6e776f6873;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bce10; end: 1046bce1f;  */

undefined1  [16] FUN_1046bce10(void)

{
  return ZEXT816(0x11079a1e0);
}



/* Entry: 1046bce20; end: 1046bce4b;  */

void FUN_1046bce20(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046bd040();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bce4c; end: 1046bce57;  */

void FUN_1046bce4c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bce58; end: 1046bcf03;  */

void FUN_1046bce58(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bcf04; end: 1046bcf17;  */

bool FUN_1046bcf04(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bcf18; end: 1046bd03f;  */

undefined1  [16] FUN_1046bcf18(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      uVar3 = 0xec00000072656767;
      uVar2 = 0x6972546e4f797274;
    }
    else if (lStack_18 == 1) {
      uVar3 = 0xee006e6f69737365;
      uVar2 = 0x53746e6572727563;
    }
    else {
      if (lStack_18 != 2) {
LAB_1046bd024:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bd040);
        (*pcVar1)();
      }
      uVar3 = 0xec00000074726174;
      uVar2 = 0x536e6f6973736573;
    }
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xea0000000000646e;
    uVar2 = 0x456e6f6973736573;
  }
  else if (lStack_18 == 4) {
    uVar3 = 0xef6b63696c43746e;
    uVar2 = 0x656d686361747461;
  }
  else {
    if (lStack_18 != 5) goto LAB_1046bd024;
    uVar3 = 0xe900000000000064;
    uVar2 = 0x4179616c70736964;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bd040; end: 1046bd053;  */

undefined1  [16] FUN_1046bd040(ulong param_1)

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



/* Entry: 1046bd054; end: 1046bd093;  */

void FUN_1046bd054(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d198;
  _swift_getWitnessTable(&UNK_10dd2d198,&UNK_11079a268);
  puRam000000011308d6d0 = puVar1;
  return;
}



/* Entry: 1046bd094; end: 1046bd0a3;  */

undefined1  [16] FUN_1046bd094(void)

{
  return ZEXT816(0x11079a268);
}



/* Entry: 1046bd0a4; end: 1046bd20b;  */

undefined1  [16] FUN_1046bd0a4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar5._8_8_ = 0xe500000000000000;
        auVar5._0_8_ = 0x7465736e75;
        return auVar5;
      }
      if (param_1 == 1) {
        pcVar3 = "playableCtaDisplayed";
        goto LAB_1046bd1a8;
      }
      goto LAB_1046bd1dc;
    }
    if (param_1 == 2) {
      uVar2 = 0x706154617443;
      goto LAB_1046bd178;
    }
    if (param_1 != 3) goto LAB_1046bd1dc;
    uVar2 = 0x64616f4c;
  }
  else {
    if (5 < param_1) {
      if (param_1 == 6) {
        auVar6._8_8_ = 0xec000000726f7272;
        auVar6._0_8_ = 0x45676e6964616f6c;
        return auVar6;
      }
      if (param_1 == 7) {
        auVar4._8_8_ = 0xe800000000000000;
        auVar4._0_8_ = 0x7061547972746572;
        return auVar4;
      }
      if (param_1 == 8) {
        pcVar3 = "playableBackgrounded";
LAB_1046bd1a8:
        auVar8._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
        auVar8._0_8_ = 0xd000000000000014;
        return auVar8;
      }
LAB_1046bd1dc:
      lStack_18 = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_11079a2f0,&lStack_18,&UNK_11079a2f0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bd20c);
      (*pcVar1)();
    }
    if (param_1 != 4) {
      if (param_1 == 5) {
        auVar9._8_8_ = 0x800000010f20c8e0;
        auVar9._0_8_ = 0xd000000000000015;
        return auVar9;
      }
      goto LAB_1046bd1dc;
    }
    uVar2 = 0x736f6c43;
  }
  uVar2 = uVar2 | 0x646500000000;
LAB_1046bd178:
  auVar7._8_8_ = uVar2 | 0xee00000000000000;
  auVar7._0_8_ = 0x656c626179616c70;
  return auVar7;
}



/* Entry: 1046bd20c; end: 1046bd237;  */

void FUN_1046bd20c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bd30c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bd238; end: 1046bd243;  */

void FUN_1046bd238(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bd244; end: 1046bd2ef;  */

void FUN_1046bd244(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bd2f0; end: 1046bd31f;  */

bool FUN_1046bd2f0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bd320; end: 1046bd35f;  */

void FUN_1046bd320(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d288;
  _swift_getWitnessTable(&UNK_10dd2d288,&UNK_11079a2f0);
  puRam000000011308d6d8 = puVar1;
  return;
}



/* Entry: 1046bd360; end: 1046bd387;  */

undefined1  [16] FUN_1046bd360(void)

{
  return ZEXT816(0x11079a2f0);
}



/* Entry: 1046bd388; end: 1046bd3c7;  */

void FUN_1046bd388(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d300;
  _swift_getWitnessTable(&UNK_10dd2d300,&UNK_11079a378);
  puRam000000011308d6e0 = puVar1;
  return;
}



/* Entry: 1046bd3c8; end: 1046bd473;  */

void FUN_1046bd3c8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bd474; end: 1046bd49f;  */

void FUN_1046bd474(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 1046bd4a0; end: 1046bd533;  */

undefined1  [16] FUN_1046bd4a0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == -1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6c6c756e;
  }
  else if (lStack_18 == 1) {
    uVar3 = 0x800000010f20c920;
    uVar2 = 0xd000000000000019;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bd534);
      (*pcVar1)();
    }
    uVar3 = 0xeb00000000746553;
    uVar2 = 0x7265646e696d6572;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bd534; end: 1046bd543;  */

undefined1  [16] FUN_1046bd534(void)

{
  return ZEXT816(0x11079a378);
}



/* Entry: 1046bd544; end: 1046bd697;  */

undefined1  [16] FUN_1046bd544(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_18;
  
  uVar4 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 0:
    pcVar5 = "reportAdTriggered";
    break;
  case 1:
    uVar4 = 0xef64657265676769;
    uVar2 = 0x7254644165646968;
  case 0xffffffffffffffff:
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar2;
    return auVar6;
  case 2:
    auVar7._8_8_ = 0xea00000000006f66;
    auVar7._0_8_ = 0x6e496441776f6873;
    return auVar7;
  case 3:
    pcVar5 = "reportAdPresented";
    break;
  case 4:
    uVar3 = 0x644165646968;
    goto code_r0x0001046bd62c;
  case 5:
    uVar3 = 0x6f666e496461;
code_r0x0001046bd62c:
    auVar9._0_8_ = uVar3 | 0x7250000000000000;
    auVar9._8_8_ = 0xef6465746e657365;
    return auVar9;
  case 6:
    pcVar5 = "reportAdDismissed";
    break;
  case 7:
    uVar3 = 0x644165646968;
    goto code_r0x0001046bd650;
  case 8:
    uVar3 = 0x6f666e496461;
code_r0x0001046bd650:
    auVar10._0_8_ = uVar3 | 0x6944000000000000;
    auVar10._8_8_ = 0xef64657373696d73;
    return auVar10;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079a400,&uStack_18,&UNK_11079a400,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bd698);
    (*pcVar1)();
  }
  auVar8._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
  auVar8._0_8_ = 0xd000000000000011;
  return auVar8;
}



/* Entry: 1046bd698; end: 1046bd6ab;  */

bool FUN_1046bd698(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bd6ac; end: 1046bd783;  */

void FUN_1046bd6ac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bd784; end: 1046bd7af;  */

void FUN_1046bd784(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bd7b0; end: 1046bd7ef;  */

void FUN_1046bd7b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d3fc;
  _swift_getWitnessTable(&UNK_10dd2d3fc,&UNK_11079a400);
  puRam000000011308d6e8 = puVar1;
  return;
}



/* Entry: 1046bd7f0; end: 1046bd813;  */

undefined1  [16] FUN_1046bd7f0(void)

{
  return ZEXT816(0x11079a400);
}



/* Entry: 1046bd814; end: 1046bd83f;  */

void FUN_1046bd814(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046bd8f8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bd840; end: 1046bd84b;  */

void FUN_1046bd840(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bd84c; end: 1046bd8f7;  */

void FUN_1046bd84c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bd8f8; end: 1046bd90b;  */

undefined1  [16] FUN_1046bd8f8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = param_1;
  }
  auVar2[8] = 7 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046bd90c; end: 1046bd94b;  */

void FUN_1046bd90c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d4f0;
  _swift_getWitnessTable(&UNK_10dd2d4f0,&UNK_11079a488);
  puRam000000011308d6f0 = puVar1;
  return;
}



/* Entry: 1046bd94c; end: 1046bd973;  */

undefined1  [16] FUN_1046bd94c(void)

{
  return ZEXT816(0x11079a488);
}



/* Entry: 1046bd974; end: 1046bd9b3;  */

void FUN_1046bd974(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d5b0;
  _swift_getWitnessTable(&UNK_10dd2d5b0,&UNK_11079a500);
  puRam000000011308d6f8 = puVar1;
  return;
}



/* Entry: 1046bd9b4; end: 1046bda5f;  */

void FUN_1046bd9b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bda60; end: 1046bda8b;  */

void FUN_1046bda60(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 2U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 1046bda8c; end: 1046bdb23;  */

undefined1  [16] FUN_1046bda8c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == -1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6c6c756e;
  }
  else if (lStack_18 == 1) {
    uVar3 = 0x800000010f20c9a0;
    uVar2 = 0xd000000000000011;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bdb24);
      (*pcVar1)();
    }
    uVar3 = 0xef6e6f697469736f;
    uVar2 = 0x5072656b63697473;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bdb24; end: 1046bdb4b;  */

undefined1  [16] FUN_1046bdb24(void)

{
  return ZEXT816(0x11079a500);
}



/* Entry: 1046bdb4c; end: 1046bdb8b;  */

void FUN_1046bdb4c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d6a0;
  _swift_getWitnessTable(&UNK_10dd2d6a0,&UNK_11079a588);
  puRam000000011308d700 = puVar1;
  return;
}



/* Entry: 1046bdb8c; end: 1046bdc37;  */

void FUN_1046bdb8c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bdc38; end: 1046bdc5f;  */

void FUN_1046bdc38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 1046bdc60; end: 1046bdcdb;  */

undefined1  [16] FUN_1046bdc60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe900000000000065;
    uVar2 = 0x6269726373627573;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bdcdc);
      (*pcVar1)();
    }
    uVar3 = 0xeb00000000656269;
    uVar2 = 0x7263736275736e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bdcdc; end: 1046bdcff;  */

undefined1  [16] FUN_1046bdcdc(void)

{
  return ZEXT816(0x11079a588);
}



/* Entry: 1046bdd00; end: 1046bddd7;  */

void FUN_1046bdd00(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bddd8; end: 1046bdde3;  */

void FUN_1046bddd8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bdde4; end: 1046bde8b;  */

undefined1  [16] FUN_1046bdde4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046bde70:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bde8c);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x746e6573;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe900000000000064;
    uVar2 = 0x656c6c65636e6163;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046bde70;
    uVar3 = 0xe600000000000000;
    uVar2 = 0x64656c696166;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bde8c; end: 1046bde9f;  */

undefined1  [16] FUN_1046bde8c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046bdea0; end: 1046bdedf;  */

void FUN_1046bdea0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d790;
  _swift_getWitnessTable(&UNK_10dd2d790,&UNK_11079a610);
  puRam000000011308d708 = puVar1;
  return;
}



/* Entry: 1046bdee0; end: 1046bdeef;  */

undefined1  [16] FUN_1046bdee0(void)

{
  return ZEXT816(0x11079a610);
}



/* Entry: 1046bdef0; end: 1046be047;  */

undefined1  [16] FUN_1046bdef0(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar2._8_8_ = 0xe500000000000000;
        auVar2._0_8_ = 0x7465736e75;
        return auVar2;
      }
      if (param_1 == 1) {
        auVar6._8_8_ = 0x800000010f20c9e0;
        auVar6._0_8_ = 0xd000000000000016;
        return auVar6;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0xe300000000000000;
        auVar4._0_8_ = 0x706174;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0xe900000000000073;
        auVar8._0_8_ = 0x73657250676e6f6c;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar3._8_8_ = 0xef776569566e6f69;
      auVar3._0_8_ = 0x7373655364656566;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0xe600000000000000;
      auVar7._0_8_ = 0x657269707865;
      return auVar7;
    }
  }
  else {
    if (param_1 == 6) {
      auVar5._8_8_ = 0xec00000077656956;
      auVar5._0_8_ = 0x656c626967696c65;
      return auVar5;
    }
    if (param_1 == 7) {
      auVar9._8_8_ = 0x800000010f20c9c0;
      auVar9._0_8_ = 0xd000000000000019;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11079a698,&lStack_18,&UNK_11079a698,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046be048);
  (*pcVar1)();
}



/* Entry: 1046be048; end: 1046be073;  */

void FUN_1046be048(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046be148();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046be074; end: 1046be07f;  */

void FUN_1046be074(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046be080; end: 1046be12b;  */

void FUN_1046be080(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046be12c; end: 1046be15b;  */

bool FUN_1046be12c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046be15c; end: 1046be19b;  */

void FUN_1046be15c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d8f8;
  _swift_getWitnessTable(&UNK_10dd2d8f8,&UNK_11079a698);
  puRam000000011308d710 = puVar1;
  return;
}



/* Entry: 1046be19c; end: 1046be1bf;  */

undefined1  [16] FUN_1046be19c(void)

{
  return ZEXT816(0x11079a698);
}



/* Entry: 1046be1c0; end: 1046be297;  */

void FUN_1046be1c0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046be298; end: 1046be2b7;  */

void FUN_1046be298(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046be2b8; end: 1046be2f7;  */

void FUN_1046be2b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2d970;
  _swift_getWitnessTable(&UNK_10dd2d970,&UNK_11079a720);
  puRam000000011308d718 = puVar1;
  return;
}



/* Entry: 1046be2f8; end: 1046be31b;  */

undefined1  [16] FUN_1046be2f8(void)

{
  return ZEXT816(0x11079a720);
}



/* Entry: 1046be31c; end: 1046be3f3;  */

void FUN_1046be31c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046be3f4; end: 1046be3ff;  */

void FUN_1046be3f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046be400; end: 1046be43f;  */

void FUN_1046be400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11308d7b8;
  func_0x0001000285a8(0x11308d7b8,&UNK_10dd2da40);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1046be440; end: 1046be477; +[_TtC11AdDataModel33SCAdDataModelLoadStatusExtensions loadStatusToString:] */

void FUN_1046be440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1046be4f8(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046be478; end: 1046be4b3; -[_TtC11AdDataModel33SCAdDataModelLoadStatusExtensions init] */

void FUN_1046be478(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001046be6f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046be4b4; end: 1046be4e3;  */

void FUN_1046be4b4(void)

{
  func_0x0001046be6f0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046be4e4; end: 1046be4f7;  */

undefined1  [16] FUN_1046be4e4(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  bVar2 = param_1 - 0xdU < 0xfffffffffffffff2;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = param_1;
  }
  auVar3[8] = bVar2;
  auVar3._0_8_ = lVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1046be4f8; end: 1046be70f;  */

undefined1  [16] FUN_1046be4f8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xef656c62616c6961;
  uVar2 = 0x76615f64615f6f6e;
  switch(param_1) {
  case 0:
    goto code_r0x0001046be5dc;
  case 1:
    uVar3 = 0xe900000000000067;
    uVar2 = 0x6e69766c6f736572;
code_r0x0001046be5dc:
    auVar9._8_8_ = uVar3;
    auVar9._0_8_ = uVar2;
    return auVar9;
  case 2:
    auVar10._8_8_ = 0xee00726f7272655f;
    auVar10._0_8_ = 0x6465766c6f736572;
    return auVar10;
  case 3:
    auVar6._8_8_ = 0xe700000000000000;
    auVar6._0_8_ = 0x6c6c69665f6f6e;
    return auVar6;
  case 4:
    auVar12._8_8_ = 0x800000010f20ca20;
    auVar12._0_8_ = 0xd000000000000012;
    return auVar12;
  case 5:
    auVar14._8_8_ = 0xed0000676e696461;
    auVar14._0_8_ = 0x6f6c5f616964656d;
    return auVar14;
  case 6:
    auVar11._8_8_ = 0xeb00000000726f72;
    auVar11._0_8_ = 0x72655f616964656d;
    return auVar11;
  case 7:
    auVar16._8_8_ = 0xec00000064656461;
    auVar16._0_8_ = 0x6f6c5f616964656d;
    return auVar16;
  case 8:
    auVar8._8_8_ = 0xed0000676e697373;
    auVar8._0_8_ = 0x696d5f616964656d;
    return auVar8;
  case 9:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x74756f5f646c6f68;
    return auVar15;
  case 10:
    auVar5._8_8_ = 0xe500000000000000;
    auVar5._0_8_ = 0x706f5f6f6e;
    return auVar5;
  case 0xb:
    auVar7._8_8_ = 0x800000010efbdbc0;
    auVar7._0_8_ = 0xd000000000000010;
    return auVar7;
  case 0xc:
    auVar13._8_8_ = 0x800000010f20ca00;
    auVar13._0_8_ = 0xd000000000000011;
    return auVar13;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079a798,&uStack_18,&UNK_11079a798,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046be6f0);
    (*pcVar1)();
  case 0xffffffffffffffff:
    auVar4._8_8_ = 0xe700000000000000;
    auVar4._0_8_ = 0x6e776f6e6b6e75;
    return auVar4;
  }
}



/* Entry: 1046be710; end: 1046be713;  */

void FUN_1046be710(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2da48;
  _swift_getWitnessTable(&UNK_10dd2da48,&UNK_11079a798);
  puRam000000011308d7c0 = puVar1;
  return;
}



/* Entry: 1046be714; end: 1046be753;  */

void FUN_1046be714(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2da48;
  _swift_getWitnessTable(&UNK_10dd2da48,&UNK_11079a798);
  puRam000000011308d7c0 = puVar1;
  return;
}



/* Entry: 1046be754; end: 1046be757;  */

void FUN_1046be754(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d7c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d7d0;
  func_0x00010002969c(0x11308d7d0,&UNK_10dd2dae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d7c8 = puVar2;
  return;
}



/* Entry: 1046be758; end: 1046be7a7;  */

void FUN_1046be758(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d7c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d7d0;
  func_0x00010002969c(0x11308d7d0,&UNK_10dd2dae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d7c8 = puVar2;
  return;
}



/* Entry: 1046be7a8; end: 1046be7b7;  */

undefined1  [16] FUN_1046be7a8(void)

{
  return ZEXT816(0x11079a798);
}



/* Entry: 1046be7b8; end: 1046be947;  */

undefined1  [16] FUN_1046be7b8(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xe500000000000000;
        auVar3._0_8_ = 0x7465736e75;
        return auVar3;
      }
      if (param_1 == 1) {
        auVar7._8_8_ = 0x800000010f20ca40;
        auVar7._0_8_ = 0xd000000000000013;
        return auVar7;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0xe800000000000000;
        auVar4._0_8_ = 0x6c6c61546f686365;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0xe800000000000000;
        auVar8._0_8_ = 0x656469576f686365;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar5._8_8_ = 0xeb00000000726f6c;
      auVar5._0_8_ = 0x6f43746573657270;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar10._8_8_ = 0xe90000000000006c;
      auVar10._0_8_ = 0x6c61546574696877;
      return auVar10;
    }
  }
  else {
    if (param_1 == 6) {
      auVar6._8_8_ = 0xe900000000000065;
      auVar6._0_8_ = 0x6469576574696877;
      return auVar6;
    }
    if (param_1 == 7) {
      auVar2._8_8_ = 0xed00006c6573756f;
      auVar2._0_8_ = 0x72614369746c756d;
      return auVar2;
    }
    if (param_1 == 8) {
      auVar9._8_8_ = 0xee00776f68736564;
      auVar9._0_8_ = 0x696c5369746c756d;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11079a830,&lStack_18,&UNK_11079a830,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046be948);
  (*pcVar1)();
}



/* Entry: 1046be948; end: 1046be95b;  */

bool FUN_1046be948(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046be95c; end: 1046be987;  */

void FUN_1046be95c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bea48();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046be988; end: 1046be993;  */

void FUN_1046be988(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046be994; end: 1046bea3f;  */

void FUN_1046be994(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046bea40; end: 1046bea5b;  */

undefined1  [16] FUN_1046bea40(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 4) {
    if (lStack_18 < 2) {
      if (lStack_18 == 0) {
        auVar3._8_8_ = 0xe500000000000000;
        auVar3._0_8_ = 0x7465736e75;
        return auVar3;
      }
      if (lStack_18 == 1) {
        auVar7._8_8_ = 0x800000010f20ca40;
        auVar7._0_8_ = 0xd000000000000013;
        return auVar7;
      }
    }
    else {
      if (lStack_18 == 2) {
        auVar4._8_8_ = 0xe800000000000000;
        auVar4._0_8_ = 0x6c6c61546f686365;
        return auVar4;
      }
      if (lStack_18 == 3) {
        auVar8._8_8_ = 0xe800000000000000;
        auVar8._0_8_ = 0x656469576f686365;
        return auVar8;
      }
    }
  }
  else if (lStack_18 < 6) {
    if (lStack_18 == 4) {
      auVar5._8_8_ = 0xeb00000000726f6c;
      auVar5._0_8_ = 0x6f43746573657270;
      return auVar5;
    }
    if (lStack_18 == 5) {
      auVar10._8_8_ = 0xe90000000000006c;
      auVar10._0_8_ = 0x6c61546574696877;
      return auVar10;
    }
  }
  else {
    if (lStack_18 == 6) {
      auVar6._8_8_ = 0xe900000000000065;
      auVar6._0_8_ = 0x6469576574696877;
      return auVar6;
    }
    if (lStack_18 == 7) {
      auVar2._8_8_ = 0xed00006c6573756f;
      auVar2._0_8_ = 0x72614369746c756d;
      return auVar2;
    }
    if (lStack_18 == 8) {
      auVar9._8_8_ = 0xee00776f68736564;
      auVar9._0_8_ = 0x696c5369746c756d;
      return auVar9;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11079a830,&lStack_18,&UNK_11079a830,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046be948);
  (*pcVar1)();
}



/* Entry: 1046bea5c; end: 1046bea9b;  */

void FUN_1046bea5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2db80;
  _swift_getWitnessTable(&UNK_10dd2db80,&UNK_11079a830);
  puRam000000011308d800 = puVar1;
  return;
}



/* Entry: 1046bea9c; end: 1046beaab;  */

undefined1  [16] FUN_1046bea9c(void)

{
  return ZEXT816(0x11079a830);
}



/* Entry: 1046beaac; end: 1046bec83;  */

undefined1  [16] FUN_1046beaac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_18;
  
  switch(param_1) {
  case 400:
    auVar3._8_8_ = 0xea00000000007473;
    auVar3._0_8_ = 0x6575716552646162;
    return auVar3;
  case 0x191:
    auVar7._8_8_ = 0xec00000064657a69;
    auVar7._0_8_ = 0x726f687475616e75;
    return auVar7;
  case 0x193:
    auVar9._8_8_ = 0xe90000000000006e;
    auVar9._0_8_ = 0x6564646962726f66;
    return auVar9;
  case 0x194:
    auVar13._8_8_ = 0xe800000000000000;
    auVar13._0_8_ = 0x646e756f46746f6e;
    return auVar13;
  case 0x195:
    auVar12._8_8_ = 0x800000010f20caa0;
    auVar12._0_8_ = 0xd000000000000010;
    return auVar12;
  case 0x198:
    uVar2 = 0x5474736575716572;
    break;
  case 0x19d:
    auVar8._8_8_ = 0xef656772614c6f6f;
    auVar8._0_8_ = 0x5464616f6c796170;
    return auVar8;
  case 500:
    auVar6._8_8_ = 0x800000010f20ca80;
    auVar6._0_8_ = 0xd000000000000013;
    return auVar6;
  case 0x1f6:
    auVar11._8_8_ = 0xea00000000007961;
    auVar11._0_8_ = 0x7765746147646162;
    return auVar11;
  case 0x1f7:
    auVar5._8_8_ = 0x800000010f20ca60;
    auVar5._0_8_ = 0xd000000000000012;
    return auVar5;
  case 0x1f8:
    uVar2 = 0x5479617765746167;
    break;
  default:
    if (param_1 == 0) {
      auVar4._8_8_ = 0xe700000000000000;
      auVar4._0_8_ = 0x6e776f6e6b6e75;
      return auVar4;
    }
    if (param_1 == 200) {
      auVar14._8_8_ = 0xe700000000000000;
      auVar14._0_8_ = 0x746c7561666564;
      return auVar14;
    }
  case 0x192:
  case 0x196:
  case 0x197:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 0x1f5:
    lStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079a8b8,&lStack_18,&UNK_11079a8b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bec84);
    (*pcVar1)();
  }
  auVar10._8_8_ = 0xee0074756f656d69;
  auVar10._0_8_ = uVar2;
  return auVar10;
}



/* Entry: 1046bec84; end: 1046bec97;  */

bool FUN_1046bec84(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


