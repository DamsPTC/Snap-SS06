/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046bec98; end: 1046becc3;  */

void FUN_1046bec98(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102d0e2a0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046becc4; end: 1046beccf;  */

void FUN_1046becc4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046becd0; end: 1046bed7b;  */

void FUN_1046becd0(void)

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



/* Entry: 1046bed7c; end: 1046bed87;  */

undefined1  [16] FUN_1046bed7c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *unaff_x20;
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
  
  lStack_18 = *unaff_x20;
  switch(lStack_18) {
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
    if (lStack_18 == 0) {
      auVar4._8_8_ = 0xe700000000000000;
      auVar4._0_8_ = 0x6e776f6e6b6e75;
      return auVar4;
    }
    if (lStack_18 == 200) {
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



/* Entry: 1046bed88; end: 1046bedc7;  */

void FUN_1046bed88(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2dcd8;
  _swift_getWitnessTable(&UNK_10dd2dcd8,&UNK_11079a8b8);
  puRam000000011308d808 = puVar1;
  return;
}



/* Entry: 1046bedc8; end: 1046bee1b;  */

undefined1  [16] FUN_1046bedc8(void)

{
  return ZEXT816(0x11079a8b8);
}



/* Entry: 1046bee1c; end: 1046bee5b;  */

void FUN_1046bee1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ddb0;
  _swift_getWitnessTable(&UNK_10dd2ddb0,&UNK_11079a940);
  puRam000000011308d810 = puVar1;
  return;
}



/* Entry: 1046bee5c; end: 1046bef07;  */

void FUN_1046bee5c(void)

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



/* Entry: 1046bef08; end: 1046bef93;  */

undefined1  [16] FUN_1046bef08(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == -1) {
    uVar3 = 0xeb00000000646569;
    uVar2 = 0x6669636570736e75;
  }
  else if (lStack_18 == 1) {
    uVar3 = 0xe400000000000000;
    uVar2 = 0x6b636162;
  }
  else {
    if (lStack_18 != 0) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bef94);
      (*pcVar1)();
    }
    uVar3 = 0xe500000000000000;
    uVar2 = 0x746e6f7266;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bef94; end: 1046befb7;  */

undefined1  [16] FUN_1046bef94(void)

{
  return ZEXT816(0x11079a940);
}



/* Entry: 1046befb8; end: 1046befe3;  */

void FUN_1046befb8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046bf16c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046befe4; end: 1046befef;  */

void FUN_1046befe4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046beff0; end: 1046bf09b;  */

void FUN_1046beff0(void)

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



/* Entry: 1046bf09c; end: 1046bf16b;  */

undefined1  [16] FUN_1046bf09c(undefined8 param_1)

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
LAB_1046bf150:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bf16c);
        (*pcVar1)();
      }
      uVar3 = 0xec0000006563696f;
      uVar2 = 0x6843656c676e6973;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xee006563696f6843;
    uVar2 = 0x656c7069746c756d;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046bf150;
    uVar3 = 0xe900000000000064;
    uVar2 = 0x65646e456e65706f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bf16c; end: 1046bf17f;  */

undefined1  [16] FUN_1046bf16c(ulong param_1)

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



/* Entry: 1046bf180; end: 1046bf1bf;  */

void FUN_1046bf180(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2dea0;
  _swift_getWitnessTable(&UNK_10dd2dea0,&UNK_11079a9c8);
  puRam000000011308d818 = puVar1;
  return;
}



/* Entry: 1046bf1c0; end: 1046bf1cf;  */

undefined1  [16] FUN_1046bf1c0(void)

{
  return ZEXT816(0x11079a9c8);
}



/* Entry: 1046bf1d0; end: 1046bf2c7;  */

undefined1  [16] FUN_1046bf1d0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar3._8_8_ = 0xe700000000000000;
      auVar3._0_8_ = 0x6e776f6e6b6e75;
      return auVar3;
    }
    if (param_1 != 1) {
      if (param_1 != 2) {
LAB_1046bf298:
        lStack_18 = param_1;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11079aa50,&lStack_18,&UNK_11079aa50,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bf2c8);
        (*pcVar1)();
      }
      pcVar2 = "irrelevantGeneral";
LAB_1046bf264:
      auVar5._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
      auVar5._0_8_ = 0xd000000000000011;
      return auVar5;
    }
    pcVar2 = "frequencyCapTooHigh";
  }
  else {
    if (param_1 == 3) {
      auVar4._8_8_ = 0x800000010f20cb00;
      auVar4._0_8_ = 0xd000000000000010;
      return auVar4;
    }
    if (param_1 == 4) {
      pcVar2 = "alreadyBoughtItem";
      goto LAB_1046bf264;
    }
    if (param_1 != 5) goto LAB_1046bf298;
    pcVar2 = "alreadyInstalledApp";
  }
  auVar6._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar6._0_8_ = 0xd000000000000013;
  return auVar6;
}



/* Entry: 1046bf2c8; end: 1046bf2db;  */

bool FUN_1046bf2c8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bf2dc; end: 1046bf3b3;  */

void FUN_1046bf2dc(void)

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



/* Entry: 1046bf3b4; end: 1046bf3cb;  */

void FUN_1046bf3b4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bf3cc; end: 1046bf40b;  */

void FUN_1046bf3cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2df8c;
  _swift_getWitnessTable(&UNK_10dd2df8c,&UNK_11079aa50);
  puRam000000011308d820 = puVar1;
  return;
}



/* Entry: 1046bf40c; end: 1046bf447;  */

undefined1  [16] FUN_1046bf40c(void)

{
  return ZEXT816(0x11079aa50);
}



/* Entry: 1046bf448; end: 1046bf487;  */

void FUN_1046bf448(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e0e8;
  _swift_getWitnessTable(&UNK_10dd2e0e8,&UNK_11079aad8);
  puRam000000011308d828 = puVar1;
  return;
}



/* Entry: 1046bf488; end: 1046bf533;  */

void FUN_1046bf488(void)

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



/* Entry: 1046bf534; end: 1046bf547;  */

bool FUN_1046bf534(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bf548; end: 1046bf5d7;  */

undefined1  [16] FUN_1046bf548(undefined8 param_1)

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
    uVar3 = 0xe800000000000000;
    uVar2 = 0x6e6f634974726163;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bf5d8);
      (*pcVar1)();
    }
    uVar3 = 0xe900000000000074;
    uVar2 = 0x7261436f54646461;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bf5d8; end: 1046bf613;  */

undefined1  [16] FUN_1046bf5d8(void)

{
  return ZEXT816(0x11079aad8);
}



/* Entry: 1046bf614; end: 1046bf653;  */

void FUN_1046bf614(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e1d8;
  _swift_getWitnessTable(&UNK_10dd2e1d8,&UNK_11079ab60);
  puRam000000011308d830 = puVar1;
  return;
}



/* Entry: 1046bf654; end: 1046bf6ff;  */

void FUN_1046bf654(void)

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



/* Entry: 1046bf700; end: 1046bf713;  */

bool FUN_1046bf700(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bf714; end: 1046bf7a7;  */

undefined1  [16] FUN_1046bf714(undefined8 param_1)

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
    if (lStack_18 == 2) {
      uVar2 = 0x6c616e7265747865;
    }
    else {
      if (lStack_18 != 1) {
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bf7a8);
        (*pcVar1)();
      }
      uVar2 = 0x7461686370616e73;
    }
    uVar3 = 0xef726573776f7242;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bf7a8; end: 1046bf7b7;  */

undefined1  [16] FUN_1046bf7a8(void)

{
  return ZEXT816(0x11079ab60);
}



/* Entry: 1046bf7b8; end: 1046bf8a7;  */

undefined1  [16] FUN_1046bf7b8(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_18;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar3._8_8_ = 0xe500000000000000;
      auVar3._0_8_ = 0x7465736e75;
      return auVar3;
    }
    if (param_1 == 1) {
      auVar6._8_8_ = 0xeb00000000617461;
      auVar6._0_8_ = 0x44746375646f7270;
      return auVar6;
    }
  }
  else {
    if (param_1 == 2) {
      auVar4._8_8_ = 0x800000010f20cb80;
      auVar4._0_8_ = 0xd000000000000013;
      return auVar4;
    }
    if (param_1 == 3) {
      auVar2._8_8_ = 0xef79726575517463;
      auVar2._0_8_ = 0x75646f7250706f74;
      return auVar2;
    }
    if (param_1 == 4) {
      auVar5._8_8_ = 0x800000010f20cb60;
      auVar5._0_8_ = 0xd000000000000011;
      return auVar5;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11079abe8,&lStack_18,&UNK_11079abe8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bf8a8);
  (*pcVar1)();
}



/* Entry: 1046bf8a8; end: 1046bf8d3;  */

void FUN_1046bf8a8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bf9a8();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bf8d4; end: 1046bf8df;  */

void FUN_1046bf8d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bf8e0; end: 1046bf98b;  */

void FUN_1046bf8e0(void)

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



/* Entry: 1046bf98c; end: 1046bf9bb;  */

bool FUN_1046bf98c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bf9bc; end: 1046bf9fb;  */

void FUN_1046bf9bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e2c8;
  _swift_getWitnessTable(&UNK_10dd2e2c8,&UNK_11079abe8);
  puRam000000011308d838 = puVar1;
  return;
}



/* Entry: 1046bf9fc; end: 1046bfa0b;  */

undefined1  [16] FUN_1046bf9fc(void)

{
  return ZEXT816(0x11079abe8);
}



/* Entry: 1046bfa0c; end: 1046bfae3;  */

undefined1  [16] FUN_1046bfa0c(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_18;
  
  if (1 < param_1) {
    if (param_1 == 2) {
      auVar4._8_8_ = 0x800000010f20cbe0;
      auVar4._0_8_ = 0xd000000000000014;
      return auVar4;
    }
    if (param_1 == 3) {
      pcVar2 = "belowDistanceThreshold";
    }
    else {
      if (param_1 != 4) goto LAB_1046bfab4;
      pcVar2 = "belowVelocityThreshold";
    }
    auVar5._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    auVar5._0_8_ = 0xd000000000000016;
    return auVar5;
  }
  if (param_1 == 0) {
    auVar3._8_8_ = 0xe400000000000000;
    auVar3._0_8_ = 0x656e6f6e;
    return auVar3;
  }
  if (param_1 == 1) {
    auVar6._8_8_ = 0xe900000000000061;
    auVar6._0_8_ = 0x657241664f74756f;
    return auVar6;
  }
LAB_1046bfab4:
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_11079ac70,&lStack_18,&UNK_11079ac70,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bfae4);
  (*pcVar1)();
}



/* Entry: 1046bfae4; end: 1046bfaf7;  */

bool FUN_1046bfae4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bfaf8; end: 1046bfbcf;  */

void FUN_1046bfaf8(void)

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



/* Entry: 1046bfbd0; end: 1046bfbf7;  */

void FUN_1046bfbd0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bfbf8; end: 1046bfc37;  */

void FUN_1046bfbf8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e340;
  _swift_getWitnessTable(&UNK_10dd2e340,&UNK_11079ac70);
  puRam000000011308d840 = puVar1;
  return;
}



/* Entry: 1046bfc38; end: 1046bfc47;  */

undefined1  [16] FUN_1046bfc38(void)

{
  return ZEXT816(0x11079ac70);
}



/* Entry: 1046bfc48; end: 1046c003b;  */

undefined1  [16] FUN_1046bfc48(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(param_1) {
  case 1:
    uVar3 = 0xe400000000000000;
    uVar2 = 0x656e6f6e;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar15._8_8_ = 0xe400000000000000;
    auVar15._0_8_ = 0x64726163;
    return auVar15;
  case 3:
    auVar17._8_8_ = 0xe400000000000000;
    auVar17._0_8_ = 0x79617274;
    return auVar17;
  case 4:
    auVar12._8_8_ = 0xe600000000000000;
    auVar12._0_8_ = 0x6e6f74747562;
    return auVar12;
  case 5:
    auVar20._8_8_ = 0xe400000000000000;
    auVar20._0_8_ = 0x64697267;
    return auVar20;
  case 6:
    auVar23._8_8_ = 0xeb00000000746565;
    auVar23._0_8_ = 0x68536d6f74746f62;
    return auVar23;
  case 7:
    auVar18._8_8_ = 0xe90000000000006e;
    auVar18._0_8_ = 0x6f6349646e617262;
    return auVar18;
  case 8:
    pcVar4 = "brandAttribution";
    goto code_r0x0001046bff24;
  case 9:
    auVar14._8_8_ = 0xec0000006c6c6950;
    auVar14._0_8_ = 0x676e6974616f6c66;
    return auVar14;
  case 10:
    auVar24._8_8_ = 0xec0000006c6c6543;
    auVar24._0_8_ = 0x6465654674616863;
    return auVar24;
  case 0xb:
    pcVar4 = "chatFeedCellActionMenu";
    goto code_r0x0001046bfe8c;
  case 0xc:
    auVar13._8_8_ = 0xe700000000000000;
    auVar13._0_8_ = 0x64726143646e65;
    return auVar13;
  case 0xd:
    auVar22._8_8_ = 0xef61744365636e65;
    auVar22._0_8_ = 0x6972657078457261;
    return auVar22;
  case 0xe:
    auVar10._8_8_ = 0xea00000000007069;
    auVar10._0_8_ = 0x746c6f6f54706174;
    return auVar10;
  case 0xf:
    auVar16._8_8_ = 0xee00746e656d6863;
    auVar16._0_8_ = 0x6174744174616863;
    return auVar16;
  case 0x10:
    auVar9._8_8_ = 0xeb00000000617443;
    auVar9._0_8_ = 0x656c626179616c70;
    return auVar9;
  case 0x11:
    pcVar4 = "playableAdContent";
    break;
  case 0x12:
    pcVar4 = "mapPromotedPlaces";
    break;
  case 0x13:
    uVar2 = 0x4364726143646e65;
    goto code_r0x0001046bffa0;
  case 0x14:
    uVar2 = 0x436e6f6974706163;
    goto code_r0x0001046bffa0;
  case 0x15:
    pcVar4 = "captionCtaTappableArea";
    goto code_r0x0001046bfe8c;
  case 0x16:
    pcVar4 = "captionCtaHeadline";
    goto code_r0x0001046bfff4;
  case 0x17:
    uVar2 = 0x4372656b63697473;
code_r0x0001046bffa0:
    auVar27._8_8_ = 0xea00000000006174;
    auVar27._0_8_ = uVar2;
    return auVar27;
  case 0x18:
    pcVar4 = "stickerCtaTappableArea";
code_r0x0001046bfe8c:
    auVar21._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar21._0_8_ = 0xd000000000000016;
    return auVar21;
  case 0x19:
    pcVar4 = "spotlightCtaPill";
    goto code_r0x0001046bff24;
  case 0x1a:
    pcVar4 = "chatAttachmentTile";
code_r0x0001046bfff4:
    auVar30._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar30._0_8_ = 0xd000000000000012;
    return auVar30;
  case 0x1b:
    pcVar4 = "appReviewSticker";
code_r0x0001046bff24:
    auVar25._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar25._0_8_ = 0xd000000000000010;
    return auVar25;
  case 0x1c:
    auVar28._8_8_ = 0xef7069746c6f6f54;
    auVar28._0_8_ = 0x69557055656b6177;
    return auVar28;
  case 0x1d:
    pcVar4 = "tapTooltipEndCard";
    break;
  case 0x1e:
    pcVar4 = "chatFeedBannerCta";
    break;
  case 0x1f:
    auVar19._8_8_ = 0x800000010f20cc20;
    auVar19._0_8_ = 0xd000000000000014;
    return auVar19;
  case 0x20:
    auVar26._8_8_ = 0x800000010f20cc00;
    auVar26._0_8_ = 0xd000000000000018;
    return auVar26;
  case 0x21:
    auVar11._8_8_ = 0xea00000000007765;
    auVar11._0_8_ = 0x697665526576696c;
    return auVar11;
  case 0x22:
    auVar8._8_8_ = 0x800000010f20b770;
    auVar8._0_8_ = 0xd000000000000017;
    return auVar8;
  case 0x23:
    auVar6._8_8_ = 0xee00656c69546465;
    auVar6._0_8_ = 0x746f6d6f72506664;
    return auVar6;
  case 0x24:
    auVar7._8_8_ = 0xeb00000000726567;
    auVar7._0_8_ = 0x676972546f747561;
    return auVar7;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079acf8,&uStack_18,&UNK_11079acf8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c003c);
    (*pcVar1)();
  }
  auVar29._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar29._0_8_ = 0xd000000000000011;
  return auVar29;
}



/* Entry: 1046c003c; end: 1046c004f;  */

bool FUN_1046c003c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046c0050; end: 1046c0127;  */

void FUN_1046c0050(void)

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



/* Entry: 1046c0128; end: 1046c014f;  */

void FUN_1046c0128(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c0150; end: 1046c018f;  */

void FUN_1046c0150(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e468;
  _swift_getWitnessTable(&UNK_10dd2e468,&UNK_11079acf8);
  puRam000000011308d848 = puVar1;
  return;
}



/* Entry: 1046c0190; end: 1046c01b3;  */

undefined1  [16] FUN_1046c0190(void)

{
  return ZEXT816(0x11079acf8);
}



/* Entry: 1046c01b4; end: 1046c028b;  */

void FUN_1046c01b4(void)

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



/* Entry: 1046c028c; end: 1046c0297;  */

void FUN_1046c028c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c0298; end: 1046c0357;  */

undefined1  [16] FUN_1046c0298(undefined8 param_1)

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
LAB_1046c033c:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c0358);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x72616c75676572;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe900000000000074;
    uVar2 = 0x6e656e696d6f7270;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046c033c;
    uVar3 = 0xeb00000000646574;
    uVar2 = 0x6867696c68676968;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046c0358; end: 1046c036b;  */

undefined1  [16] FUN_1046c0358(ulong param_1)

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



/* Entry: 1046c036c; end: 1046c03ab;  */

void FUN_1046c036c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e550;
  _swift_getWitnessTable(&UNK_10dd2e550,&UNK_11079ad80);
  puRam000000011308d850 = puVar1;
  return;
}



/* Entry: 1046c03ac; end: 1046c03cf;  */

undefined1  [16] FUN_1046c03ac(void)

{
  return ZEXT816(0x11079ad80);
}



/* Entry: 1046c03d0; end: 1046c04a7;  */

void FUN_1046c03d0(void)

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



/* Entry: 1046c04a8; end: 1046c04b3;  */

void FUN_1046c04a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c04b4; end: 1046c059b;  */

undefined1  [16] FUN_1046c04b4(undefined8 param_1)

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
LAB_1046c0580:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c059c);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x54415564697267;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xed00005441556c61;
    uVar2 = 0x746e6f7a69726f68;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046c0580;
    uVar3 = 0xeb00000000544155;
    uVar2 = 0x6c61636974726576;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046c059c; end: 1046c05af;  */

undefined1  [16] FUN_1046c059c(ulong param_1)

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



/* Entry: 1046c05b0; end: 1046c05ef;  */

void FUN_1046c05b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e640;
  _swift_getWitnessTable(&UNK_10dd2e640,&UNK_11079ae08);
  puRam000000011308d858 = puVar1;
  return;
}



/* Entry: 1046c05f0; end: 1046c0613;  */

undefined1  [16] FUN_1046c05f0(void)

{
  return ZEXT816(0x11079ae08);
}



/* Entry: 1046c0614; end: 1046c06eb;  */

void FUN_1046c0614(void)

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



/* Entry: 1046c06ec; end: 1046c06f7;  */

void FUN_1046c06ec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c06f8; end: 1046c07ab;  */

undefined1  [16] FUN_1046c06f8(undefined8 param_1)

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
LAB_1046c0790:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c07ac);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x70556564696c73;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f20cd40;
    uVar2 = 0xd000000000000015;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046c0790;
    uVar3 = 0xe600000000000000;
    uVar2 = 0x646e61707865;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046c07ac; end: 1046c07bf;  */

undefined1  [16] FUN_1046c07ac(ulong param_1)

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



/* Entry: 1046c07c0; end: 1046c07ff;  */

void FUN_1046c07c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e730;
  _swift_getWitnessTable(&UNK_10dd2e730,&UNK_11079ae90);
  puRam000000011308d860 = puVar1;
  return;
}



/* Entry: 1046c0800; end: 1046c0827;  */

undefined1  [16] FUN_1046c0800(void)

{
  return ZEXT816(0x11079ae90);
}



/* Entry: 1046c0828; end: 1046c0867;  */

void FUN_1046c0828(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e820;
  _swift_getWitnessTable(&UNK_10dd2e820,&UNK_11079af18);
  puRam000000011308d868 = puVar1;
  return;
}



/* Entry: 1046c0868; end: 1046c0913;  */

void FUN_1046c0868(void)

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



/* Entry: 1046c0914; end: 1046c093b;  */

void FUN_1046c0914(ulong *param_1,ulong *param_2)

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



/* Entry: 1046c093c; end: 1046c09c7;  */

undefined1  [16] FUN_1046c093c(undefined8 param_1)

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
    uVar3 = 0xe800000000000000;
    uVar2 = 0x6c61636974726576;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c09c8);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x746c7561666564;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046c09c8; end: 1046c09d7;  */

undefined1  [16] FUN_1046c09c8(void)

{
  return ZEXT816(0x11079af18);
}



/* Entry: 1046c09d8; end: 1046c0e17;  */

undefined1  [16] FUN_1046c09d8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(param_1) {
  case 1:
    uVar3 = 0xe800000000000000;
    uVar2 = 0x756f59726f466664;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    uVar2 = 0x7263736275536664;
    goto code_r0x0001046c0c70;
  case 3:
    auVar17._8_8_ = 0xe800000000000000;
    auVar17._0_8_ = 0x7265766f63736964;
    return auVar17;
  case 4:
    auVar12._8_8_ = 0xe400000000000000;
    auVar12._0_8_ = 0x64656566;
    return auVar12;
  case 5:
    auVar20._8_8_ = 0xef736569726f7453;
    auVar20._0_8_ = 0x6465746f6d6f7270;
    return auVar20;
  case 6:
    auVar23._8_8_ = 0xe900000000000073;
    auVar23._0_8_ = 0x646e656972466664;
    return auVar23;
  case 7:
    pcVar4 = "cognac_DEPRECATED";
    goto code_r0x0001046c0bb0;
  case 8:
    auVar26._8_8_ = 0xed00006c61636972;
    auVar26._0_8_ = 0x6f67657461436664;
    return auVar26;
  case 9:
    auVar14._8_8_ = 0xeb00000000646565;
    auVar14._0_8_ = 0x466d75696d657270;
    return auVar14;
  case 10:
    pcVar4 = "pfContinueWatching";
    break;
  case 0xb:
    auVar11._8_8_ = 0xea0000000000656c;
    auVar11._0_8_ = 0x69546f7265486670;
    return auVar11;
  case 0xc:
    auVar13._8_8_ = 0xeb0000000073776f;
    auVar13._0_8_ = 0x685365726f4d6670;
    return auVar13;
  case 0xd:
    uVar2 = 0x7263736275536670;
code_r0x0001046c0c70:
    auVar22._8_8_ = 0xef736e6f69747069;
    auVar22._0_8_ = uVar2;
    return auVar22;
  case 0xe:
    auVar9._8_8_ = 0x800000010f20ce00;
    auVar9._0_8_ = 0xd000000000000018;
    return auVar9;
  case 0xf:
    pcVar4 = "profileShowSeason";
code_r0x0001046c0bb0:
    auVar18._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = 0xd000000000000011;
    return auVar18;
  case 0x10:
    auVar8._8_8_ = 0xed00007478654e70;
    auVar8._0_8_ = 0x55656c69666f7270;
    return auVar8;
  case 0x11:
    auVar19._8_8_ = 0xee007265766f6373;
    auVar19._0_8_ = 0x6944686372616573;
    return auVar19;
  case 0x12:
    auVar24._8_8_ = 0x800000010f20cdc0;
    auVar24._0_8_ = 0xd000000000000016;
    return auVar24;
  case 0x13:
    auVar30._8_8_ = 0xe800000000000000;
    auVar30._0_8_ = 0x6653686372616573;
    return auVar30;
  case 0x14:
    pcVar4 = "dfSingleTileForYou";
    break;
  case 0x15:
    auVar21._8_8_ = 0xee006c6c41746867;
    auVar21._0_8_ = 0x696c746f70536664;
    return auVar21;
  case 0x16:
    auVar29._8_8_ = 0xed00006465654674;
    auVar29._0_8_ = 0x6867696c746f7073;
    return auVar29;
  case 0x17:
    auVar31._8_8_ = 0xe400000000000000;
    auVar31._0_8_ = 0x74616863;
    return auVar31;
  case 0x18:
    auVar16._8_8_ = 0xea00000000007265;
    auVar16._0_8_ = 0x6461654874616863;
    return auVar16;
  case 0x19:
    auVar15._8_8_ = 0xeb00000000656c69;
    auVar15._0_8_ = 0x666f7250696e696d;
    return auVar15;
  case 0x1a:
    auVar34._8_8_ = 0xee0070616e537463;
    auVar34._0_8_ = 0x6572694464656566;
    return auVar34;
  case 0x1b:
    auVar6._8_8_ = 0xed000070616e5379;
    auVar6._0_8_ = 0x726f745364656566;
    return auVar6;
  case 0x1c:
    auVar32._8_8_ = 0xe900000000000064;
    auVar32._0_8_ = 0x6565467265707573;
    return auVar32;
  case 0x1d:
    auVar33._8_8_ = 0xe800000000000000;
    auVar33._0_8_ = 0x6b6e694c70656564;
    return auVar33;
  case 0x1e:
    auVar27._8_8_ = 0xec00000079726f74;
    auVar27._0_8_ = 0x53656c69666f7270;
    return auVar27;
  case 0x1f:
    pcVar4 = "spotlightMixedFeed";
    break;
  case 0x20:
    auVar28._8_8_ = 0xec00000065726568;
    auVar28._0_8_ = 0x7779726576456666;
    return auVar28;
  case 0x21:
    auVar10._8_8_ = 0xe300000000000000;
    auVar10._0_8_ = 0x70616d;
    return auVar10;
  case 0x22:
    auVar7._8_8_ = 0x800000010f20cd60;
    auVar7._0_8_ = 0xd000000000000017;
    return auVar7;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c0e18);
    (*pcVar1)();
  }
  auVar25._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar25._0_8_ = 0xd000000000000012;
  return auVar25;
}



/* Entry: 1046c0e18; end: 1046c0e2b;  */

bool FUN_1046c0e18(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046c0e2c; end: 1046c0e57;  */

void FUN_1046c0e2c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001018aad68();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046c0e58; end: 1046c0e63;  */

void FUN_1046c0e58(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c0e64; end: 1046c0f0f;  */

void FUN_1046c0e64(void)

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



/* Entry: 1046c0f10; end: 1046c0f17;  */

undefined1  [16] FUN_1046c0f10(void)

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
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
  switch(uStack_18) {
  case 1:
    uVar3 = 0xe800000000000000;
    uVar2 = 0x756f59726f466664;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    uVar2 = 0x7263736275536664;
    goto code_r0x0001046c0c70;
  case 3:
    auVar17._8_8_ = 0xe800000000000000;
    auVar17._0_8_ = 0x7265766f63736964;
    return auVar17;
  case 4:
    auVar12._8_8_ = 0xe400000000000000;
    auVar12._0_8_ = 0x64656566;
    return auVar12;
  case 5:
    auVar20._8_8_ = 0xef736569726f7453;
    auVar20._0_8_ = 0x6465746f6d6f7270;
    return auVar20;
  case 6:
    auVar23._8_8_ = 0xe900000000000073;
    auVar23._0_8_ = 0x646e656972466664;
    return auVar23;
  case 7:
    pcVar4 = "cognac_DEPRECATED";
    goto code_r0x0001046c0bb0;
  case 8:
    auVar26._8_8_ = 0xed00006c61636972;
    auVar26._0_8_ = 0x6f67657461436664;
    return auVar26;
  case 9:
    auVar14._8_8_ = 0xeb00000000646565;
    auVar14._0_8_ = 0x466d75696d657270;
    return auVar14;
  case 10:
    pcVar4 = "pfContinueWatching";
    break;
  case 0xb:
    auVar11._8_8_ = 0xea0000000000656c;
    auVar11._0_8_ = 0x69546f7265486670;
    return auVar11;
  case 0xc:
    auVar13._8_8_ = 0xeb0000000073776f;
    auVar13._0_8_ = 0x685365726f4d6670;
    return auVar13;
  case 0xd:
    uVar2 = 0x7263736275536670;
code_r0x0001046c0c70:
    auVar22._8_8_ = 0xef736e6f69747069;
    auVar22._0_8_ = uVar2;
    return auVar22;
  case 0xe:
    auVar9._8_8_ = 0x800000010f20ce00;
    auVar9._0_8_ = 0xd000000000000018;
    return auVar9;
  case 0xf:
    pcVar4 = "profileShowSeason";
code_r0x0001046c0bb0:
    auVar18._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = 0xd000000000000011;
    return auVar18;
  case 0x10:
    auVar8._8_8_ = 0xed00007478654e70;
    auVar8._0_8_ = 0x55656c69666f7270;
    return auVar8;
  case 0x11:
    auVar19._8_8_ = 0xee007265766f6373;
    auVar19._0_8_ = 0x6944686372616573;
    return auVar19;
  case 0x12:
    auVar24._8_8_ = 0x800000010f20cdc0;
    auVar24._0_8_ = 0xd000000000000016;
    return auVar24;
  case 0x13:
    auVar30._8_8_ = 0xe800000000000000;
    auVar30._0_8_ = 0x6653686372616573;
    return auVar30;
  case 0x14:
    pcVar4 = "dfSingleTileForYou";
    break;
  case 0x15:
    auVar21._8_8_ = 0xee006c6c41746867;
    auVar21._0_8_ = 0x696c746f70536664;
    return auVar21;
  case 0x16:
    auVar29._8_8_ = 0xed00006465654674;
    auVar29._0_8_ = 0x6867696c746f7073;
    return auVar29;
  case 0x17:
    auVar31._8_8_ = 0xe400000000000000;
    auVar31._0_8_ = 0x74616863;
    return auVar31;
  case 0x18:
    auVar16._8_8_ = 0xea00000000007265;
    auVar16._0_8_ = 0x6461654874616863;
    return auVar16;
  case 0x19:
    auVar15._8_8_ = 0xeb00000000656c69;
    auVar15._0_8_ = 0x666f7250696e696d;
    return auVar15;
  case 0x1a:
    auVar34._8_8_ = 0xee0070616e537463;
    auVar34._0_8_ = 0x6572694464656566;
    return auVar34;
  case 0x1b:
    auVar6._8_8_ = 0xed000070616e5379;
    auVar6._0_8_ = 0x726f745364656566;
    return auVar6;
  case 0x1c:
    auVar32._8_8_ = 0xe900000000000064;
    auVar32._0_8_ = 0x6565467265707573;
    return auVar32;
  case 0x1d:
    auVar33._8_8_ = 0xe800000000000000;
    auVar33._0_8_ = 0x6b6e694c70656564;
    return auVar33;
  case 0x1e:
    auVar27._8_8_ = 0xec00000079726f74;
    auVar27._0_8_ = 0x53656c69666f7270;
    return auVar27;
  case 0x1f:
    pcVar4 = "spotlightMixedFeed";
    break;
  case 0x20:
    auVar28._8_8_ = 0xec00000065726568;
    auVar28._0_8_ = 0x7779726576456666;
    return auVar28;
  case 0x21:
    auVar10._8_8_ = 0xe300000000000000;
    auVar10._0_8_ = 0x70616d;
    return auVar10;
  case 0x22:
    auVar7._8_8_ = 0x800000010f20cd60;
    auVar7._0_8_ = 0xd000000000000017;
    return auVar7;
  default:
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079afa0,&uStack_18,&UNK_11079afa0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c0e18);
    (*pcVar1)();
  }
  auVar25._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar25._0_8_ = 0xd000000000000012;
  return auVar25;
}



/* Entry: 1046c0f18; end: 1046c0f43;  */

void FUN_1046c0f18(void)

{
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c01e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1046c0f44; end: 1046c0f47;  */

void FUN_1046c0f44(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e934;
  _swift_getWitnessTable(&UNK_10dd2e934,&UNK_11079afa0);
  puRam000000011308d870 = puVar1;
  return;
}



/* Entry: 1046c0f48; end: 1046c0f87;  */

void FUN_1046c0f48(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2e934;
  _swift_getWitnessTable(&UNK_10dd2e934,&UNK_11079afa0);
  puRam000000011308d870 = puVar1;
  return;
}



/* Entry: 1046c0f88; end: 1046c0fab;  */

undefined1  [16] FUN_1046c0f88(void)

{
  return ZEXT816(0x11079afa0);
}



/* Entry: 1046c0fac; end: 1046c1083;  */

void FUN_1046c0fac(void)

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



/* Entry: 1046c1084; end: 1046c108f;  */

void FUN_1046c1084(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c1090; end: 1046c1143;  */

undefined1  [16] FUN_1046c1090(undefined8 param_1)

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
LAB_1046c1128:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c1144);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xed00006465654674;
    uVar2 = 0x6867696c746f7073;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046c1128;
    uVar3 = 0xe300000000000000;
    uVar2 = 0x544175;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046c1144; end: 1046c121b; +[OperaNGSCTATypeExtensions stringValueFor:] */

void FUN_1046c1144(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_28;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar3 = 0xe400000000000000;
      uVar2 = 0x454e4f4e;
    }
    else {
      if (param_3 != 1) {
LAB_1046c11f8:
        lStack_28 = param_3;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_11079b028,&lStack_28,&UNK_11079b028,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c121c);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x544c5541464544;
    }
  }
  else if (param_3 == 2) {
    uVar3 = 0xed00004445454654;
    uVar2 = 0x4847494c544f5053;
  }
  else {
    if (param_3 != 3) goto LAB_1046c11f8;
    uVar3 = 0xe300000000000000;
    uVar2 = 0x544155;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1046c121c; end: 1046c1257; -[OperaNGSCTATypeExtensions init] */

void FUN_1046c121c(undefined8 param_1)

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



/* Entry: 1046c1258; end: 1046c128b;  */

void FUN_1046c1258(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1046c128c; end: 1046c129f;  */

undefined1  [16] FUN_1046c128c(ulong param_1)

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



/* Entry: 1046c12a0; end: 1046c12df;  */

void FUN_1046c12a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2ea20;
  _swift_getWitnessTable(&UNK_10dd2ea20,&UNK_11079b028);
  puRam000000011308d878 = puVar1;
  return;
}



/* Entry: 1046c12e0; end: 1046c12ef;  */

undefined1  [16] FUN_1046c12e0(void)

{
  return ZEXT816(0x11079b028);
}



/* Entry: 1046c12f0; end: 1046c130f;  */

void FUN_1046c12f0(void)

{
  _objc_opt_self(&PTR_PTR_1129d31a0);
  return;
}



/* Entry: 1046c1310; end: 1046c133b;  */

void FUN_1046c1310(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046c14f0();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046c133c; end: 1046c1347;  */

void FUN_1046c133c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046c1348; end: 1046c13f3;  */

void FUN_1046c1348(void)

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



/* Entry: 1046c13f4; end: 1046c1407;  */

bool FUN_1046c13f4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046c1408; end: 1046c14ef;  */

undefined1  [16] FUN_1046c1408(undefined8 param_1)

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
LAB_1046c14d4:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046c14f0);
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
  else if (lStack_18 == 3) {
    uVar3 = 0xed0000656c69666f;
    uVar2 = 0x725063696c627570;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046c14d4;
    uVar3 = 0xe900000000000079;
    uVar2 = 0x726f74536576696c;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


