/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046add80; end: 1046add8b;  */

void FUN_1046add80(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046add8c; end: 1046ade37;  */

void FUN_1046add8c(void)

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



/* Entry: 1046ade38; end: 1046ade93;  */

void FUN_1046ade38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046ae010();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046ade94; end: 1046adedf;  */

void FUN_1046ade94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046ae010();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046adee0; end: 1046adfab;  */

undefined1  [16] FUN_1046adee0(undefined8 param_1)

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
      uVar3 = 0xed00007465736e55;
      uVar2 = 0x647261436f666e69;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046adf90:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046adfac);
        (*pcVar1)();
      }
      uVar3 = 0xea00000000006e6f;
      uVar2 = 0x747475426c6c6970;
    }
  }
  else {
    if (lStack_18 == 2) {
      uVar3 = 0xec0000006c6c6543;
    }
    else {
      if (lStack_18 != 3) goto LAB_1046adf90;
      uVar3 = 0xee0072656e6e6142;
    }
    uVar2 = 0x6465654674616863;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046adfac; end: 1046adfbf;  */

undefined1  [16] FUN_1046adfac(ulong param_1)

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



/* Entry: 1046adfc0; end: 1046adfff;  */

void FUN_1046adfc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26d10;
  _swift_getWitnessTable(&UNK_10dd26d10,&UNK_110796e58);
  puRam000000011308d168 = puVar1;
  return;
}



/* Entry: 1046ae000; end: 1046ae00f;  */

undefined1  [16] FUN_1046ae000(void)

{
  return ZEXT816(0x110796e58);
}



/* Entry: 1046ae010; end: 1046ae04f;  */

void FUN_1046ae010(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26d38;
  _swift_getWitnessTable(&UNK_10dd26d38,&UNK_110796e58);
  puRam000000011308d170 = puVar1;
  return;
}



/* Entry: 1046ae050; end: 1046ae063;  */

bool FUN_1046ae050(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046ae064; end: 1046ae13b;  */

void FUN_1046ae064(void)

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



/* Entry: 1046ae13c; end: 1046ae147;  */

void FUN_1046ae13c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046ae148; end: 1046ae217;  */

undefined1  [16] FUN_1046ae148(undefined8 param_1)

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
LAB_1046ae1fc:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ae218);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x70556570697773;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe300000000000000;
    uVar2 = 0x706174;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xea0000000000646e;
    uVar2 = 0x756f726765726f66;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046ae1fc;
    uVar3 = 0xe900000000000064;
    uVar2 = 0x6564696365646e75;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046ae218; end: 1046ae22b;  */

undefined1  [16] FUN_1046ae218(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046ae22c; end: 1046ae26b;  */

void FUN_1046ae22c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26e60;
  _swift_getWitnessTable(&UNK_10dd26e60,&UNK_110796f00);
  puRam000000011308d178 = puVar1;
  return;
}



/* Entry: 1046ae26c; end: 1046ae28f;  */

undefined1  [16] FUN_1046ae26c(void)

{
  return ZEXT816(0x110796f00);
}



/* Entry: 1046ae290; end: 1046ae367;  */

void FUN_1046ae290(void)

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



/* Entry: 1046ae368; end: 1046ae37b;  */

void FUN_1046ae368(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046ae37c; end: 1046ae593;  */

undefined1  [16] FUN_1046ae37c(undefined8 param_1)

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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 0:
    goto code_r0x0001046ae3d4;
  case 1:
    uVar3 = 0xee00746e656d6863;
    uVar2 = 0x6174744164416f6e;
code_r0x0001046ae3d4:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar10._8_8_ = 0x800000010f20b6f0;
    auVar10._0_8_ = 0xd000000000000018;
    return auVar10;
  case 3:
    auVar12._8_8_ = 0xed00007765695662;
    auVar12._0_8_ = 0x655765746f6d6572;
    return auVar12;
  case 4:
    auVar7._8_8_ = 0xea00000000006c6c;
    auVar7._0_8_ = 0x6174736e49707061;
    return auVar7;
  case 5:
    auVar14._8_8_ = 0xe800000000000000;
    auVar14._0_8_ = 0x6b6e694c70656564;
    return auVar14;
  case 6:
    auVar16._8_8_ = 0xe800000000000000;
    auVar16._0_8_ = 0x6c6c61436f546461;
    return auVar16;
  case 7:
    auVar13._8_8_ = 0xe800000000000000;
    auVar13._0_8_ = 0x736e654c6f546461;
    return auVar13;
  case 8:
    auVar18._8_8_ = 0xeb00000000656761;
    auVar18._0_8_ = 0x7373654d6f546461;
    return auVar18;
  case 9:
    auVar9._8_8_ = 0xee00726573776f72;
    auVar9._0_8_ = 0x42746c7561666564;
    return auVar9;
  case 10:
    auVar17._8_8_ = 0xe900000000000065;
    auVar17._0_8_ = 0x63616c506f546461;
    return auVar17;
  case 0xb:
    auVar6._8_8_ = 0xee006e6f69746172;
    auVar6._0_8_ = 0x656e65476461656c;
    return auVar6;
  case 0xc:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x65736163776f6873;
    return auVar8;
  case 0xd:
    auVar15._8_8_ = 0xe600000000000000;
    auVar15._0_8_ = 0x796576727573;
    return auVar15;
  case 0xe:
    auVar5._8_8_ = 0xeb00000000706450;
    auVar5._0_8_ = 0x656372656d6d6f63;
    return auVar5;
  case 0xf:
    auVar11._8_8_ = 0xe800000000000000;
    auVar11._0_8_ = 0x656c626179616c70;
    return auVar11;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110796f88,&uStack_18,&UNK_110796f88,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ae594);
    (*pcVar1)();
  }
}



/* Entry: 1046ae594; end: 1046ae5cb; +[SCAttachmentTypeExtensions stringValueForAttachmentType:] */

void FUN_1046ae594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001046ae63c(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1046ae5cc; end: 1046ae607; -[SCAttachmentTypeExtensions init] */

void FUN_1046ae5cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1046ae608; end: 1046ae863;  */

void FUN_1046ae608(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046ae864; end: 1046ae877;  */

void FUN_1046ae864(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd26f70;
  func_0x000107c61520(&UNK_10dd26f70,&UNK_110796f88);
  puRam0000000112dcc688 = puVar1;
  return;
}



/* Entry: 1046ae878; end: 1046ae897;  */

void FUN_1046ae878(void)

{
  _objc_opt_self(&PTR_PTR_1129d2ee0);
  return;
}



/* Entry: 1046ae898; end: 1046ae8d7;  */

bool FUN_1046ae898(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046ae8d8; end: 1046ae917;  */

void FUN_1046ae8d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27080;
  _swift_getWitnessTable(&UNK_10dd27080,&UNK_110797010);
  puRam000000011308d1a8 = puVar1;
  return;
}



/* Entry: 1046ae918; end: 1046ae9c3;  */

void FUN_1046ae918(void)

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



/* Entry: 1046ae9c4; end: 1046aea2f;  */

undefined1  [16] FUN_1046ae9c4(undefined8 param_1)

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
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aea30);
      (*pcVar1)();
    }
    uVar3 = 0xe800000000000000;
    uVar2 = 0x64656c6261736964;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046aea30; end: 1046aea53;  */

undefined1  [16] FUN_1046aea30(void)

{
  return ZEXT816(0x110797010);
}



/* Entry: 1046aea54; end: 1046aea7f;  */

void FUN_1046aea54(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046aebf4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046aea80; end: 1046aea8b;  */

void FUN_1046aea80(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046aea8c; end: 1046aeb37;  */

void FUN_1046aea8c(void)

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



/* Entry: 1046aeb38; end: 1046aebf3;  */

undefined1  [16] FUN_1046aeb38(undefined8 param_1)

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
LAB_1046aebd8:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aebf4);
        (*pcVar1)();
      }
      uVar3 = 0xea00000000006169;
      uVar2 = 0x64654d656c6f6877;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f20b730;
    uVar2 = 0xd000000000000015;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046aebd8;
    uVar3 = 0xe900000000000067;
    uVar2 = 0x6e696d6165727473;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046aebf4; end: 1046aec07;  */

undefined1  [16] FUN_1046aebf4(ulong param_1)

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



/* Entry: 1046aec08; end: 1046aec47;  */

void FUN_1046aec08(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27170;
  _swift_getWitnessTable(&UNK_10dd27170,&UNK_110797098);
  puRam000000011308d1b0 = puVar1;
  return;
}



/* Entry: 1046aec48; end: 1046aec57;  */

undefined1  [16] FUN_1046aec48(void)

{
  return ZEXT816(0x110797098);
}



/* Entry: 1046aec58; end: 1046aecff;  */

undefined1  [16] FUN_1046aec58(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  if (param_1 == 0) {
    auVar3._8_8_ = 0xef726f6976616865;
    auVar3._0_8_ = 0x42746c7561666564;
    return auVar3;
  }
  if (param_1 == 2) {
    auVar2._8_8_ = 0x800000010f20b750;
    auVar2._0_8_ = 0xd00000000000001b;
    return auVar2;
  }
  if (param_1 == 1) {
    auVar4._8_8_ = 0x800000010ef142d0;
    auVar4._0_8_ = 0xd000000000000011;
    return auVar4;
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797120,&lStack_18,&UNK_110797120,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aed00);
  (*pcVar1)();
}



/* Entry: 1046aed00; end: 1046aed3f;  */

bool FUN_1046aed00(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046aed40; end: 1046aed7f;  */

void FUN_1046aed40(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27260;
  _swift_getWitnessTable(&UNK_10dd27260,&UNK_110797120);
  puRam000000011308d1b8 = puVar1;
  return;
}



/* Entry: 1046aed80; end: 1046aee2b;  */

void FUN_1046aed80(void)

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



/* Entry: 1046aee2c; end: 1046aee57;  */

undefined1  [16] FUN_1046aee2c(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    auVar3._8_8_ = 0xef726f6976616865;
    auVar3._0_8_ = 0x42746c7561666564;
    return auVar3;
  }
  if (lStack_18 == 2) {
    auVar2._8_8_ = 0x800000010f20b750;
    auVar2._0_8_ = 0xd00000000000001b;
    return auVar2;
  }
  if (lStack_18 == 1) {
    auVar4._8_8_ = 0x800000010ef142d0;
    auVar4._0_8_ = 0xd000000000000011;
    return auVar4;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110797120,&lStack_18,&UNK_110797120,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046aed00);
  (*pcVar1)();
}



/* Entry: 1046aee58; end: 1046aee83;  */

void FUN_1046aee58(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046af02c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046aee84; end: 1046aee8f;  */

void FUN_1046aee84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046aee90; end: 1046aef7b;  */

void FUN_1046aee90(void)

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



/* Entry: 1046aef7c; end: 1046af02b;  */

undefined1  [16] FUN_1046aef7c(undefined8 param_1)

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
      uVar3 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046af010:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046af02c);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x6c6c7566;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x647261646e617473;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046af010;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x646574696d696c;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046af02c; end: 1046af03f;  */

undefined1  [16] FUN_1046af02c(ulong param_1)

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



/* Entry: 1046af040; end: 1046af07f;  */

void FUN_1046af040(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d1c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27358;
  _swift_getWitnessTable(&UNK_10dd27358,&UNK_1107971a8);
  puRam000000011308d1c0 = puVar1;
  return;
}



/* Entry: 1046af080; end: 1046af083;  */

void FUN_1046af080(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d1c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d1d0;
  func_0x00010002969c(0x11308d1d0,&UNK_10dd273f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d1c8 = puVar2;
  return;
}



/* Entry: 1046af084; end: 1046af0d3;  */

void FUN_1046af084(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d1c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d1d0;
  func_0x00010002969c(0x11308d1d0,&UNK_10dd273f8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d1c8 = puVar2;
  return;
}



/* Entry: 1046af0d4; end: 1046af0f7;  */

undefined1  [16] FUN_1046af0d4(void)

{
  return ZEXT816(0x1107971a8);
}



/* Entry: 1046af0f8; end: 1046af123;  */

void FUN_1046af0f8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046af348();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046af124; end: 1046af12f;  */

void FUN_1046af124(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046af130; end: 1046af1db;  */

void FUN_1046af130(void)

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



/* Entry: 1046af1dc; end: 1046af237;  */

void FUN_1046af1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046af3ac();
  __sSYsSeRzSu8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046af238; end: 1046af283;  */

void FUN_1046af238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046af3ac();
  __sSYsSERzSu8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046af284; end: 1046af347;  */

undefined1  [16] FUN_1046af284(undefined8 param_1)

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
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046af32c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046af348);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xef64657463697274;
    uVar2 = 0x7365526570697773;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046af32c;
    uVar3 = 0xef74654d746f4e64;
    uVar2 = 0x6c6f687365726874;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046af348; end: 1046af35b;  */

undefined1  [16] FUN_1046af348(ulong param_1)

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



/* Entry: 1046af35c; end: 1046af39b;  */

void FUN_1046af35c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27480;
  _swift_getWitnessTable(&UNK_10dd27480,&UNK_110797250);
  puRam000000011308d220 = puVar1;
  return;
}



/* Entry: 1046af39c; end: 1046af3ab;  */

undefined1  [16] FUN_1046af39c(void)

{
  return ZEXT816(0x110797250);
}



/* Entry: 1046af3ac; end: 1046af3eb;  */

void FUN_1046af3ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd274a8;
  _swift_getWitnessTable(&UNK_10dd274a8,&UNK_110797250);
  puRam000000011308d228 = puVar1;
  return;
}



/* Entry: 1046af3ec; end: 1046af42b;  */

bool FUN_1046af3ec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046af42c; end: 1046af46b;  */

void FUN_1046af42c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd275c0;
  _swift_getWitnessTable(&UNK_10dd275c0,&UNK_1107972f8);
  puRam000000011308d230 = puVar1;
  return;
}



/* Entry: 1046af46c; end: 1046af517;  */

void FUN_1046af46c(void)

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



/* Entry: 1046af518; end: 1046af573;  */

void FUN_1046af518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046af65c();
  __sSYsSeRzSu8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046af574; end: 1046af5bf;  */

void FUN_1046af574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046af65c();
  __sSYsSERzSu8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046af5c0; end: 1046af64b;  */

undefined1  [16] FUN_1046af5c0(undefined8 param_1)

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
    uVar3 = 0xea00000000004653;
    uVar2 = 0x53747865746e6f63;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046af64c);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x465353736461;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046af64c; end: 1046af65b;  */

undefined1  [16] FUN_1046af64c(void)

{
  return ZEXT816(0x1107972f8);
}



/* Entry: 1046af65c; end: 1046af913;  */

void FUN_1046af65c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd275e8;
  _swift_getWitnessTable(&UNK_10dd275e8,&UNK_1107972f8);
  puRam000000011308d238 = puVar1;
  return;
}



/* Entry: 1046af914; end: 1046af927;  */

bool FUN_1046af914(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046af928; end: 1046af953;  */

void FUN_1046af928(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046afabc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046af954; end: 1046af95f;  */

void FUN_1046af954(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046af960; end: 1046afa0b;  */

void FUN_1046af960(void)

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



/* Entry: 1046afa0c; end: 1046afa67;  */

void FUN_1046afa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046afb20();
  __sSYsSeRzSu8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046afa68; end: 1046afab3;  */

void FUN_1046afa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046afb20();
  __sSYsSERzSu8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046afab4; end: 1046afacf;  */

undefined1  [16] FUN_1046afab4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *unaff_x20;
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(uStack_18) {
  case 1:
    uVar3 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x64726163;
    return auVar9;
  case 3:
    auVar11._8_8_ = 0xe400000000000000;
    auVar11._0_8_ = 0x79617274;
    return auVar11;
  case 4:
    auVar7._8_8_ = 0xe600000000000000;
    auVar7._0_8_ = 0x6e6f74747562;
    return auVar7;
  case 5:
    auVar15._8_8_ = 0xec0000006c6c6950;
    auVar15._0_8_ = 0x676e6974616f6c66;
    return auVar15;
  case 6:
    auVar18._8_8_ = 0xef61744365636e65;
    auVar18._0_8_ = 0x6972657078457261;
    return auVar18;
  case 7:
    auVar12._8_8_ = 0xea00000000007069;
    auVar12._0_8_ = 0x746c6f6f54706174;
    return auVar12;
  case 8:
    uVar2 = 0x4364726143646e65;
    break;
  case 9:
    uVar2 = 0x436e6f6974706163;
    break;
  case 10:
    uVar2 = 0x4372656b63697473;
    break;
  case 0xb:
    pcVar4 = "spotlightCtaPill";
    goto code_r0x0001046af744;
  case 0xc:
    pcVar4 = "appReviewSticker";
code_r0x0001046af744:
    auVar8._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar8._0_8_ = 0xd000000000000010;
    return auVar8;
  case 0xd:
    auVar17._8_8_ = 0xef7069746c6f6f54;
    auVar17._0_8_ = 0x69557055656b6177;
    return auVar17;
  case 0xe:
    pcVar4 = "tapTooltipEndCard";
    goto code_r0x0001046af6f4;
  case 0xf:
    auVar10._8_8_ = 0xe700000000000000;
    auVar10._0_8_ = 0x64726143646e65;
    return auVar10;
  case 0x10:
    pcVar4 = "chatFeedBannerCta";
code_r0x0001046af6f4:
    auVar6._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar6._0_8_ = 0xd000000000000011;
    return auVar6;
  case 0x11:
    auVar13._8_8_ = 0xe400000000000000;
    auVar13._0_8_ = 0x64697267;
    return auVar13;
  case 0x12:
    auVar19._8_8_ = 0x800000010f20b790;
    auVar19._0_8_ = 0xd00000000000001b;
    return auVar19;
  case 0x13:
    auVar21._8_8_ = 0xea00000000007765;
    auVar21._0_8_ = 0x697665526576696c;
    return auVar21;
  case 0x14:
    auVar14._8_8_ = 0x800000010f20b770;
    auVar14._0_8_ = 0xd000000000000017;
    return auVar14;
  case 0x15:
    auVar16._8_8_ = 0xeb00000000726567;
    auVar16._0_8_ = 0x676972546f747561;
    return auVar16;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_1107973a0,&uStack_18,&UNK_1107973a0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046af914);
    (*pcVar1)();
  }
  auVar20._8_8_ = 0xea00000000006174;
  auVar20._0_8_ = uVar2;
  return auVar20;
}



/* Entry: 1046afad0; end: 1046afb0f;  */

void FUN_1046afad0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27718;
  _swift_getWitnessTable(&UNK_10dd27718,&UNK_1107973a0);
  puRam000000011308d240 = puVar1;
  return;
}



/* Entry: 1046afb10; end: 1046afb1f;  */

undefined1  [16] FUN_1046afb10(void)

{
  return ZEXT816(0x1107973a0);
}



/* Entry: 1046afb20; end: 1046afb5f;  */

void FUN_1046afb20(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27740;
  _swift_getWitnessTable(&UNK_10dd27740,&UNK_1107973a0);
  puRam000000011308d248 = puVar1;
  return;
}



/* Entry: 1046afb60; end: 1046afb73;  */

bool FUN_1046afb60(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046afb74; end: 1046afb9f;  */

void FUN_1046afb74(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046afd70();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046afba0; end: 1046afbab;  */

void FUN_1046afba0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046afbac; end: 1046afc97;  */

void FUN_1046afbac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11308d250;
  func_0x0001000285a8(0x11308d250,&UNK_10dd27850);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1046afc98; end: 1046afd6f;  */

undefined1  [16] FUN_1046afc98(undefined8 param_1)

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
      uVar3 = 0xe500000000000000;
      uVar2 = 0x7465736e75;
    }
    else {
      if (lStack_18 != 1) {
LAB_1046afd54:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046afd70);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x77656956626577;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x6b6e696c70656564;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xea00000000006c6c;
    uVar2 = 0x6174736e49707061;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046afd54;
    uVar3 = 0xe800000000000000;
    uVar2 = 0x65736163776f6873;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046afd70; end: 1046afd83;  */

undefined1  [16] FUN_1046afd70(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1046afd84; end: 1046afdd3;  */

void FUN_1046afd84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308d258 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308d260;
  func_0x00010002969c(0x11308d260,&UNK_10dd278b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308d258 = puVar2;
  return;
}



/* Entry: 1046afdd4; end: 1046afdd7;  */

void FUN_1046afdd4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27858;
  _swift_getWitnessTable(&UNK_10dd27858,&UNK_110797448);
  puRam000000011308d268 = puVar1;
  return;
}



/* Entry: 1046afdd8; end: 1046afe17;  */

void FUN_1046afdd8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27858;
  _swift_getWitnessTable(&UNK_10dd27858,&UNK_110797448);
  puRam000000011308d268 = puVar1;
  return;
}



/* Entry: 1046afe18; end: 1046afe67;  */

undefined1  [16] FUN_1046afe18(void)

{
  return ZEXT816(0x110797448);
}



/* Entry: 1046afe68; end: 1046afea7;  */

void FUN_1046afe68(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27984;
  _swift_getWitnessTable(&UNK_10dd27984,&UNK_1107974f0);
  puRam000000011308d2c0 = puVar1;
  return;
}



/* Entry: 1046afea8; end: 1046aff53;  */

void FUN_1046afea8(void)

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



/* Entry: 1046aff54; end: 1046affc3;  */

undefined1  [16] FUN_1046aff54(undefined8 param_1)

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
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046affc4);
      (*pcVar1)();
    }
    uVar3 = 0x800000010f20b830;
    uVar2 = 0xd000000000000012;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046affc4; end: 1046affe7;  */

undefined1  [16] FUN_1046affc4(void)

{
  return ZEXT816(0x1107974f0);
}



/* Entry: 1046affe8; end: 1046b0013;  */

void FUN_1046affe8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b018c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b0014; end: 1046b001f;  */

void FUN_1046b0014(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b0020; end: 1046b00cb;  */

void FUN_1046b0020(void)

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



/* Entry: 1046b00cc; end: 1046b018b;  */

undefined1  [16] FUN_1046b00cc(undefined8 param_1)

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
LAB_1046b0170:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b018c);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x77656976626577;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xea00000000006c6c;
    uVar2 = 0x6174736e49707061;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b0170;
    uVar3 = 0xee00726573776f72;
    uVar2 = 0x42746c7561666564;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b018c; end: 1046b019f;  */

undefined1  [16] FUN_1046b018c(ulong param_1)

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



/* Entry: 1046b01a0; end: 1046b01df;  */

void FUN_1046b01a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd27a60;
  _swift_getWitnessTable(&UNK_10dd27a60,&UNK_110797578);
  puRam000000011308d2c8 = puVar1;
  return;
}



/* Entry: 1046b01e0; end: 1046b0203;  */

undefined1  [16] FUN_1046b01e0(void)

{
  return ZEXT816(0x110797578);
}



/* Entry: 1046b0204; end: 1046b022f;  */

void FUN_1046b0204(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b0524();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


