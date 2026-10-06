/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046b7ad0; end: 1046b7b2b;  */

void FUN_1046b7ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b7bf0();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b7b2c; end: 1046b7b77;  */

void FUN_1046b7b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b7bf0();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b7b78; end: 1046b7bdf;  */

undefined1  [16] FUN_1046b7b78(undefined8 param_1)

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
    uVar2 = 0x6573756170;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b7be0);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar2 = 0x656d75736572;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b7be0; end: 1046b7bef;  */

undefined1  [16] FUN_1046b7be0(void)

{
  return ZEXT816(0x110798ed8);
}



/* Entry: 1046b7bf0; end: 1046b7c2f;  */

void FUN_1046b7bf0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ae08;
  _swift_getWitnessTable(&UNK_10dd2ae08,&UNK_110798ed8);
  puRam000000011308d598 = puVar1;
  return;
}



/* Entry: 1046b7c30; end: 1046b7c43;  */

bool FUN_1046b7c30(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b7c44; end: 1046b7c6f;  */

void FUN_1046b7c44(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b7e80();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b7c70; end: 1046b7c7b;  */

void FUN_1046b7c70(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b7c7c; end: 1046b7d27;  */

void FUN_1046b7c7c(void)

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



/* Entry: 1046b7d28; end: 1046b7d83;  */

void FUN_1046b7d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b7ee4();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b7d84; end: 1046b7dcf;  */

void FUN_1046b7d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b7ee4();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b7dd0; end: 1046b7e7f;  */

undefined1  [16] FUN_1046b7dd0(undefined8 param_1)

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
LAB_1046b7e64:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b7e80);
        (*pcVar1)();
      }
      uVar3 = 0xe300000000000000;
      uVar2 = 0x706174;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xea00000000006c61;
    uVar2 = 0x657665526f747561;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b7e64;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x7373696d736964;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b7e80; end: 1046b7e93;  */

undefined1  [16] FUN_1046b7e80(ulong param_1)

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



/* Entry: 1046b7e94; end: 1046b7ed3;  */

void FUN_1046b7e94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2af20;
  _swift_getWitnessTable(&UNK_10dd2af20,&UNK_110798f80);
  puRam000000011308d5a0 = puVar1;
  return;
}



/* Entry: 1046b7ed4; end: 1046b7ee3;  */

undefined1  [16] FUN_1046b7ed4(void)

{
  return ZEXT816(0x110798f80);
}



/* Entry: 1046b7ee4; end: 1046b809f;  */

void FUN_1046b7ee4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2af48;
  _swift_getWitnessTable(&UNK_10dd2af48,&UNK_110798f80);
  puRam000000011308d5a8 = puVar1;
  return;
}



/* Entry: 1046b80a0; end: 1046b80b3;  */

bool FUN_1046b80a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b80b4; end: 1046b80df;  */

void FUN_1046b80b4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102ca6c68();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b80e0; end: 1046b80eb;  */

void FUN_1046b80e0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b80ec; end: 1046b8197;  */

void FUN_1046b80ec(void)

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



/* Entry: 1046b8198; end: 1046b81f3;  */

void FUN_1046b8198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b829c();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b81f4; end: 1046b823f;  */

void FUN_1046b81f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b829c();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b8240; end: 1046b824b;  */

undefined1  [16] FUN_1046b8240(void)

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
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 4) {
    if (lStack_18 < 2) {
      if (lStack_18 == 0) {
        auVar2._8_8_ = 0xe500000000000000;
        auVar2._0_8_ = 0x7465736e75;
        return auVar2;
      }
      if (lStack_18 == 1) {
        auVar6._8_8_ = 0xea00000000007069;
        auVar6._0_8_ = 0x746c6f6f54706174;
        return auVar6;
      }
    }
    else {
      if (lStack_18 == 2) {
        auVar4._8_8_ = 0x800000010f20c2c0;
        auVar4._0_8_ = 0xd000000000000011;
        return auVar4;
      }
      if (lStack_18 == 3) {
        auVar8._8_8_ = 0xed00006472614364;
        auVar8._0_8_ = 0x6e45776569766572;
        return auVar8;
      }
    }
  }
  else if (lStack_18 < 6) {
    if (lStack_18 == 4) {
      auVar3._8_8_ = 0xea00000000006472;
      auVar3._0_8_ = 0x6143646e45617463;
      return auVar3;
    }
    if (lStack_18 == 5) {
      auVar7._8_8_ = 0xea00000000006573;
      auVar7._0_8_ = 0x7561506f54706174;
      return auVar7;
    }
  }
  else {
    if (lStack_18 == 6) {
      auVar5._8_8_ = 0xef7061547265746e;
      auVar5._0_8_ = 0x6543636974617473;
      return auVar5;
    }
    if (lStack_18 == 7) {
      auVar9._8_8_ = 0x800000010f20c2a0;
      auVar9._0_8_ = 0xd000000000000010;
      return auVar9;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799028,&lStack_18,&UNK_110799028,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b80a0);
  (*pcVar1)();
}



/* Entry: 1046b824c; end: 1046b828b;  */

void FUN_1046b824c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b058;
  _swift_getWitnessTable(&UNK_10dd2b058,&UNK_110799028);
  puRam000000011308d5b0 = puVar1;
  return;
}



/* Entry: 1046b828c; end: 1046b829b;  */

undefined1  [16] FUN_1046b828c(void)

{
  return ZEXT816(0x110799028);
}



/* Entry: 1046b829c; end: 1046b82db;  */

void FUN_1046b829c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b080;
  _swift_getWitnessTable(&UNK_10dd2b080,&UNK_110799028);
  puRam000000011308d5b8 = puVar1;
  return;
}



/* Entry: 1046b82dc; end: 1046b831b;  */

bool FUN_1046b82dc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b831c; end: 1046b835b;  */

void FUN_1046b831c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b180;
  _swift_getWitnessTable(&UNK_10dd2b180,&UNK_1107990d0);
  puRam000000011308d5c0 = puVar1;
  return;
}



/* Entry: 1046b835c; end: 1046b8407;  */

void FUN_1046b835c(void)

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



/* Entry: 1046b8408; end: 1046b8463;  */

void FUN_1046b8408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1046b8528();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1046b8464; end: 1046b84af;  */

void FUN_1046b8464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1046b8528();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1046b84b0; end: 1046b8517;  */

undefined1  [16] FUN_1046b84b0(undefined8 param_1)

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
    uVar2 = 0x64726163;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b8518);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x70616e73706f74;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b8518; end: 1046b8527;  */

undefined1  [16] FUN_1046b8518(void)

{
  return ZEXT816(0x1107990d0);
}



/* Entry: 1046b8528; end: 1046b8567;  */

void FUN_1046b8528(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b1a8;
  _swift_getWitnessTable(&UNK_10dd2b1a8,&UNK_1107990d0);
  puRam000000011308d5c8 = puVar1;
  return;
}



/* Entry: 1046b8568; end: 1046b8593;  */

void FUN_1046b8568(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b8724();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b8594; end: 1046b859f;  */

void FUN_1046b8594(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b85a0; end: 1046b864b;  */

void FUN_1046b85a0(void)

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



/* Entry: 1046b864c; end: 1046b865f;  */

bool FUN_1046b864c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b8660; end: 1046b8723;  */

undefined1  [16] FUN_1046b8660(undefined8 param_1)

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
LAB_1046b8708:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b8724);
        (*pcVar1)();
      }
      uVar3 = 0xe600000000000000;
      uVar2 = 0x70616e536461;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xec000000746e656d;
    uVar2 = 0x6863617474416461;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b8708;
    uVar3 = 0xed0000656c69666f;
    uVar2 = 0x725063696c627570;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b8724; end: 1046b8737;  */

undefined1  [16] FUN_1046b8724(ulong param_1)

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



/* Entry: 1046b8738; end: 1046b8777;  */

void FUN_1046b8738(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b338;
  _swift_getWitnessTable(&UNK_10dd2b338,&UNK_110799178);
  puRam000000011308d5d0 = puVar1;
  return;
}



/* Entry: 1046b8778; end: 1046b8787;  */

undefined1  [16] FUN_1046b8778(void)

{
  return ZEXT816(0x110799178);
}



/* Entry: 1046b8788; end: 1046b88ab;  */

undefined1  [16] FUN_1046b8788(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar5._8_8_ = 0xe500000000000000;
      auVar5._0_8_ = 0x7465736e75;
      return auVar5;
    }
    if (param_1 == 1) {
      auVar3._8_8_ = 0xe600000000000000;
      auVar3._0_8_ = 0x70616e536461;
      return auVar3;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xec000000746e656d;
      auVar6._0_8_ = 0x6863617474416461;
      return auVar6;
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      auVar2._8_8_ = 0xed0000656c69666f;
      auVar2._0_8_ = 0x725063696c627570;
      return auVar2;
    }
    if (param_1 == 4) {
      auVar7._8_8_ = 0xe900000000000079;
      auVar7._0_8_ = 0x726f74536576696c;
      return auVar7;
    }
  }
  else {
    if (param_1 == 5) {
      auVar4._8_8_ = 0xe400000000000000;
      auVar4._0_8_ = 0x74616863;
      return auVar4;
    }
    if (param_1 == 6) {
      auVar8._8_8_ = 0xe800000000000000;
      auVar8._0_8_ = 0x656c626179616c70;
      return auVar8;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799200,&lStack_18,&UNK_110799200,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b88ac);
  (*pcVar1)();
}



/* Entry: 1046b88ac; end: 1046b88d7;  */

void FUN_1046b88ac(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x00010427e968();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b88d8; end: 1046b88e3;  */

void FUN_1046b88d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b88e4; end: 1046b898f;  */

void FUN_1046b88e4(void)

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



/* Entry: 1046b8990; end: 1046b89af;  */

bool FUN_1046b8990(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b89b0; end: 1046b89ef;  */

void FUN_1046b89b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b428;
  _swift_getWitnessTable(&UNK_10dd2b428,&UNK_110799200);
  puRam000000011308d5d8 = puVar1;
  return;
}



/* Entry: 1046b89f0; end: 1046b8a13;  */

undefined1  [16] FUN_1046b89f0(void)

{
  return ZEXT816(0x110799200);
}



/* Entry: 1046b8a14; end: 1046b8a3f;  */

void FUN_1046b8a14(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b8bb4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b8a40; end: 1046b8a4b;  */

void FUN_1046b8a40(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b8a4c; end: 1046b8af7;  */

void FUN_1046b8a4c(void)

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



/* Entry: 1046b8af8; end: 1046b8bb3;  */

undefined1  [16] FUN_1046b8af8(undefined8 param_1)

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
LAB_1046b8b98:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b8bb4);
        (*pcVar1)();
      }
      uVar3 = 0xeb00000000657079;
      uVar2 = 0x54746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x7974706d65;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046b8b98;
    uVar3 = 0xea00000000006465;
    uVar2 = 0x6873696e696d6964;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b8bb4; end: 1046b8bc7;  */

undefined1  [16] FUN_1046b8bb4(ulong param_1)

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



/* Entry: 1046b8bc8; end: 1046b8c07;  */

void FUN_1046b8bc8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b4a0;
  _swift_getWitnessTable(&UNK_10dd2b4a0,&UNK_110799288);
  puRam000000011308d5e0 = puVar1;
  return;
}



/* Entry: 1046b8c08; end: 1046b8c57;  */

undefined1  [16] FUN_1046b8c08(void)

{
  return ZEXT816(0x110799288);
}



/* Entry: 1046b8c58; end: 1046b8c97;  */

void FUN_1046b8c58(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b590;
  _swift_getWitnessTable(&UNK_10dd2b590,&UNK_110799310);
  puRam000000011308d5e8 = puVar1;
  return;
}



/* Entry: 1046b8c98; end: 1046b8d43;  */

void FUN_1046b8c98(void)

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



/* Entry: 1046b8d44; end: 1046b8daf;  */

undefined1  [16] FUN_1046b8d44(undefined8 param_1)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b8db0);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x746c7561666564;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b8db0; end: 1046b8dd3;  */

undefined1  [16] FUN_1046b8db0(void)

{
  return ZEXT816(0x110799310);
}



/* Entry: 1046b8dd4; end: 1046b8dff;  */

void FUN_1046b8dd4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b8eb8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b8e00; end: 1046b8e0b;  */

void FUN_1046b8e00(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b8e0c; end: 1046b8eb7;  */

void FUN_1046b8e0c(void)

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



/* Entry: 1046b8eb8; end: 1046b8ecb;  */

undefined1  [16] FUN_1046b8eb8(ulong param_1)

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



/* Entry: 1046b8ecc; end: 1046b8f0b;  */

void FUN_1046b8ecc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b680;
  _swift_getWitnessTable(&UNK_10dd2b680,&UNK_110799398);
  puRam000000011308d5f0 = puVar1;
  return;
}



/* Entry: 1046b8f0c; end: 1046b8f2f;  */

undefined1  [16] FUN_1046b8f0c(void)

{
  return ZEXT816(0x110799398);
}



/* Entry: 1046b8f30; end: 1046b8f5b;  */

void FUN_1046b8f30(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046b90e4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b8f5c; end: 1046b8f67;  */

void FUN_1046b8f5c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b8f68; end: 1046b9013;  */

void FUN_1046b8f68(void)

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



/* Entry: 1046b9014; end: 1046b90e3;  */

undefined1  [16] FUN_1046b9014(undefined8 param_1)

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
LAB_1046b90c8:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b90e4);
        (*pcVar1)();
      }
      uVar3 = 0xe400000000000000;
      uVar2 = 0x656e6f6e;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6f666e69;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xea00000000006f66;
    uVar2 = 0x6e49676e69746172;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046b90c8;
    uVar2 = 0x697463656c6c6f63;
    uVar3 = 0xea00000000006e6f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b90e4; end: 1046b90f7;  */

undefined1  [16] FUN_1046b90e4(ulong param_1)

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



/* Entry: 1046b90f8; end: 1046b9137;  */

void FUN_1046b90f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b740;
  _swift_getWitnessTable(&UNK_10dd2b740,&UNK_110799410);
  puRam000000011308d5f8 = puVar1;
  return;
}



/* Entry: 1046b9138; end: 1046b9147;  */

undefined1  [16] FUN_1046b9138(void)

{
  return ZEXT816(0x110799410);
}



/* Entry: 1046b9148; end: 1046b9277;  */

undefined1  [16] FUN_1046b9148(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar5._8_8_ = 0xe500000000000000;
      auVar5._0_8_ = 0x7465736e75;
      return auVar5;
    }
    if (param_1 == 1) {
      auVar3._8_8_ = 0xeb0000000073746f;
      auVar3._0_8_ = 0x68736e6565726373;
      return auVar3;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xe300000000000000;
      auVar6._0_8_ = 0x617463;
      return auVar6;
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      auVar2._8_8_ = 0xe900000000000077;
      auVar2._0_8_ = 0x6569766552707061;
      return auVar2;
    }
    if (param_1 == 4) {
      auVar7._8_8_ = 0xe700000000000000;
      auVar7._0_8_ = 0x6e776f6e6b6e75;
      return auVar7;
    }
  }
  else {
    if (param_1 == 5) {
      auVar4._8_8_ = 0xee0064726143646e;
      auVar4._0_8_ = 0x456e65476461656c;
      return auVar4;
    }
    if (param_1 == 6) {
      auVar8._8_8_ = 0xeb00000000647261;
      auVar8._0_8_ = 0x43646e456c6c6f70;
      return auVar8;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799498,&lStack_18,&UNK_110799498,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9278);
  (*pcVar1)();
}



/* Entry: 1046b9278; end: 1046b928b;  */

bool FUN_1046b9278(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b928c; end: 1046b92b7;  */

void FUN_1046b928c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b9378();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b92b8; end: 1046b92c3;  */

void FUN_1046b92b8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b92c4; end: 1046b936f;  */

void FUN_1046b92c4(void)

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



/* Entry: 1046b9370; end: 1046b938b;  */

undefined1  [16] FUN_1046b9370(void)

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
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      auVar5._8_8_ = 0xe500000000000000;
      auVar5._0_8_ = 0x7465736e75;
      return auVar5;
    }
    if (lStack_18 == 1) {
      auVar3._8_8_ = 0xeb0000000073746f;
      auVar3._0_8_ = 0x68736e6565726373;
      return auVar3;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0xe300000000000000;
      auVar6._0_8_ = 0x617463;
      return auVar6;
    }
  }
  else if (lStack_18 < 5) {
    if (lStack_18 == 3) {
      auVar2._8_8_ = 0xe900000000000077;
      auVar2._0_8_ = 0x6569766552707061;
      return auVar2;
    }
    if (lStack_18 == 4) {
      auVar7._8_8_ = 0xe700000000000000;
      auVar7._0_8_ = 0x6e776f6e6b6e75;
      return auVar7;
    }
  }
  else {
    if (lStack_18 == 5) {
      auVar4._8_8_ = 0xee0064726143646e;
      auVar4._0_8_ = 0x456e65476461656c;
      return auVar4;
    }
    if (lStack_18 == 6) {
      auVar8._8_8_ = 0xeb00000000647261;
      auVar8._0_8_ = 0x43646e456c6c6f70;
      return auVar8;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799498,&lStack_18,&UNK_110799498,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9278);
  (*pcVar1)();
}



/* Entry: 1046b938c; end: 1046b93cb;  */

void FUN_1046b938c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b830;
  _swift_getWitnessTable(&UNK_10dd2b830,&UNK_110799498);
  puRam000000011308d600 = puVar1;
  return;
}



/* Entry: 1046b93cc; end: 1046b941b;  */

undefined1  [16] FUN_1046b93cc(void)

{
  return ZEXT816(0x110799498);
}



/* Entry: 1046b941c; end: 1046b945b;  */

void FUN_1046b941c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2b920;
  _swift_getWitnessTable(&UNK_10dd2b920,&UNK_110799520);
  puRam000000011308d608 = puVar1;
  return;
}



/* Entry: 1046b945c; end: 1046b9507;  */

void FUN_1046b945c(void)

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



/* Entry: 1046b9508; end: 1046b9593;  */

undefined1  [16] FUN_1046b9508(undefined8 param_1)

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
    uVar3 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9594);
      (*pcVar1)();
    }
    uVar3 = 0xeb00000000657079;
    uVar2 = 0x54746c7561666564;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b9594; end: 1046b95e3;  */

undefined1  [16] FUN_1046b9594(void)

{
  return ZEXT816(0x110799520);
}



/* Entry: 1046b95e4; end: 1046b9623;  */

void FUN_1046b95e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ba10;
  _swift_getWitnessTable(&UNK_10dd2ba10,&UNK_1107995a8);
  puRam000000011308d610 = puVar1;
  return;
}



/* Entry: 1046b9624; end: 1046b96cf;  */

void FUN_1046b9624(void)

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



/* Entry: 1046b96d0; end: 1046b975b;  */

undefined1  [16] FUN_1046b96d0(undefined8 param_1)

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
    uVar3 = 0xeb00000000657079;
    uVar2 = 0x54746c7561666564;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b975c);
      (*pcVar1)();
    }
    uVar3 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b975c; end: 1046b976b;  */

undefined1  [16] FUN_1046b975c(void)

{
  return ZEXT816(0x1107995a8);
}



/* Entry: 1046b976c; end: 1046b97ff;  */

undefined1  [16] FUN_1046b976c(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  if (param_1 == 0) {
    auVar3._8_8_ = 0xe500000000000000;
    auVar3._0_8_ = 0x7465736e75;
    return auVar3;
  }
  if (param_1 == 2) {
    auVar2._8_8_ = 0x800000010f20c2e0;
    auVar2._0_8_ = 0xd00000000000001b;
    return auVar2;
  }
  if (param_1 == 1) {
    auVar4._8_8_ = 0x800000010f20c300;
    auVar4._0_8_ = 0xd000000000000013;
    return auVar4;
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799630,&lStack_18,&UNK_110799630,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9800);
  (*pcVar1)();
}



/* Entry: 1046b9800; end: 1046b983f;  */

bool FUN_1046b9800(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b9840; end: 1046b987f;  */

void FUN_1046b9840(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bb00;
  _swift_getWitnessTable(&UNK_10dd2bb00,&UNK_110799630);
  puRam000000011308d618 = puVar1;
  return;
}



/* Entry: 1046b9880; end: 1046b992b;  */

void FUN_1046b9880(void)

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



/* Entry: 1046b992c; end: 1046b9983;  */

undefined1  [16] FUN_1046b992c(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    auVar3._8_8_ = 0xe500000000000000;
    auVar3._0_8_ = 0x7465736e75;
    return auVar3;
  }
  if (lStack_18 == 2) {
    auVar2._8_8_ = 0x800000010f20c2e0;
    auVar2._0_8_ = 0xd00000000000001b;
    return auVar2;
  }
  if (lStack_18 == 1) {
    auVar4._8_8_ = 0x800000010f20c300;
    auVar4._0_8_ = 0xd000000000000013;
    return auVar4;
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799630,&lStack_18,&UNK_110799630,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9800);
  (*pcVar1)();
}



/* Entry: 1046b9984; end: 1046b99c3;  */

void FUN_1046b9984(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bbf0;
  _swift_getWitnessTable(&UNK_10dd2bbf0,&UNK_1107996b8);
  puRam000000011308d620 = puVar1;
  return;
}



/* Entry: 1046b99c4; end: 1046b9a6f;  */

void FUN_1046b99c4(void)

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



/* Entry: 1046b9a70; end: 1046b9b17;  */

undefined1  [16] FUN_1046b9a70(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xee007465736e5570;
    uVar2 = 0x696b536f54706174;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f20c320;
    uVar2 = 0xd000000000000018;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9b18);
      (*pcVar1)();
    }
    uVar3 = 0xeb0000000065636e;
    uVar2 = 0x617664416f747561;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046b9b18; end: 1046b9b27;  */

undefined1  [16] FUN_1046b9b18(void)

{
  return ZEXT816(0x1107996b8);
}



/* Entry: 1046b9b28; end: 1046b9be3;  */

undefined1  [16] FUN_1046b9b28(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_18;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar2._8_8_ = 0xe500000000000000;
      auVar2._0_8_ = 0x7465736e75;
      return auVar2;
    }
    if (param_1 == 1) {
      auVar4._8_8_ = 0x800000010f20c360;
      auVar4._0_8_ = 0xd000000000000016;
      return auVar4;
    }
  }
  else {
    if (param_1 == 2) {
      auVar3._8_8_ = 0x800000010f20c340;
      auVar3._0_8_ = 0xd000000000000018;
      return auVar3;
    }
    if (param_1 == 3) {
      auVar5._8_8_ = 0xe700000000000000;
      auVar5._0_8_ = 0x6e776f6e6b6e75;
      return auVar5;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799740,&lStack_18,&UNK_110799740,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9be4);
  (*pcVar1)();
}



/* Entry: 1046b9be4; end: 1046b9bf7;  */

bool FUN_1046b9be4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}


