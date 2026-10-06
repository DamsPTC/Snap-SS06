/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1046b9bf8; end: 1046b9c23;  */

void FUN_1046b9bf8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b9ce4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b9c24; end: 1046b9c2f;  */

void FUN_1046b9c24(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b9c30; end: 1046b9cdb;  */

void FUN_1046b9c30(void)

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



/* Entry: 1046b9cdc; end: 1046b9cf7;  */

undefined1  [16] FUN_1046b9cdc(void)

{
  code *pcVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      auVar2._8_8_ = 0xe500000000000000;
      auVar2._0_8_ = 0x7465736e75;
      return auVar2;
    }
    if (lStack_18 == 1) {
      auVar4._8_8_ = 0x800000010f20c360;
      auVar4._0_8_ = 0xd000000000000016;
      return auVar4;
    }
  }
  else {
    if (lStack_18 == 2) {
      auVar3._8_8_ = 0x800000010f20c340;
      auVar3._0_8_ = 0xd000000000000018;
      return auVar3;
    }
    if (lStack_18 == 3) {
      auVar5._8_8_ = 0xe700000000000000;
      auVar5._0_8_ = 0x6e776f6e6b6e75;
      return auVar5;
    }
  }
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799740,&lStack_18,&UNK_110799740,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9be4);
  (*pcVar1)();
}



/* Entry: 1046b9cf8; end: 1046b9d37;  */

void FUN_1046b9cf8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bce0;
  _swift_getWitnessTable(&UNK_10dd2bce0,&UNK_110799740);
  puRam000000011308d628 = puVar1;
  return;
}



/* Entry: 1046b9d38; end: 1046b9d47;  */

undefined1  [16] FUN_1046b9d38(void)

{
  return ZEXT816(0x110799740);
}



/* Entry: 1046b9d48; end: 1046b9e7f;  */

undefined1  [16] FUN_1046b9d48(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
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
      auVar4._8_8_ = 0x800000010f20c300;
      auVar4._0_8_ = 0xd000000000000013;
      return auVar4;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xeb00000000724164;
      auVar6._0_8_ = 0x65726f736e6f7073;
      return auVar6;
    }
  }
  else {
    if (4 < param_1) {
      if (param_1 == 5) {
        uVar2 = 0x4372656b63697473;
      }
      else {
        if (param_1 != 6) goto LAB_1046b9e50;
        uVar2 = 0x436e6f6974706163;
      }
      auVar8._8_8_ = 0xea00000000006174;
      auVar8._0_8_ = uVar2;
      return auVar8;
    }
    if (param_1 == 3) {
      auVar3._8_8_ = 0xef746e656d656361;
      auVar3._0_8_ = 0x6c506d6f74737563;
      return auVar3;
    }
    if (param_1 == 4) {
      auVar7._8_8_ = 0x800000010f20c380;
      auVar7._0_8_ = 0xd00000000000001c;
      return auVar7;
    }
  }
LAB_1046b9e50:
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_1107997c8,&lStack_18,&UNK_1107997c8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9e80);
  (*pcVar1)();
}



/* Entry: 1046b9e80; end: 1046b9e93;  */

bool FUN_1046b9e80(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046b9e94; end: 1046b9ebf;  */

void FUN_1046b9e94(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046b9f80();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046b9ec0; end: 1046b9ecb;  */

void FUN_1046b9ec0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046b9ecc; end: 1046b9f77;  */

void FUN_1046b9ecc(void)

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



/* Entry: 1046b9f78; end: 1046b9f93;  */

undefined1  [16] FUN_1046b9f78(void)

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
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 3) {
    if (lStack_18 == 0) {
      auVar5._8_8_ = 0xe500000000000000;
      auVar5._0_8_ = 0x7465736e75;
      return auVar5;
    }
    if (lStack_18 == 1) {
      auVar4._8_8_ = 0x800000010f20c300;
      auVar4._0_8_ = 0xd000000000000013;
      return auVar4;
    }
    if (lStack_18 == 2) {
      auVar6._8_8_ = 0xeb00000000724164;
      auVar6._0_8_ = 0x65726f736e6f7073;
      return auVar6;
    }
  }
  else {
    if (4 < lStack_18) {
      if (lStack_18 == 5) {
        uVar2 = 0x4372656b63697473;
      }
      else {
        if (lStack_18 != 6) goto LAB_1046b9e50;
        uVar2 = 0x436e6f6974706163;
      }
      auVar8._8_8_ = 0xea00000000006174;
      auVar8._0_8_ = uVar2;
      return auVar8;
    }
    if (lStack_18 == 3) {
      auVar3._8_8_ = 0xef746e656d656361;
      auVar3._0_8_ = 0x6c506d6f74737563;
      return auVar3;
    }
    if (lStack_18 == 4) {
      auVar7._8_8_ = 0x800000010f20c380;
      auVar7._0_8_ = 0xd00000000000001c;
      return auVar7;
    }
  }
LAB_1046b9e50:
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_1107997c8,&lStack_18,&UNK_1107997c8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046b9e80);
  (*pcVar1)();
}



/* Entry: 1046b9f94; end: 1046b9fd3;  */

void FUN_1046b9f94(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bdd0;
  _swift_getWitnessTable(&UNK_10dd2bdd0,&UNK_1107997c8);
  puRam000000011308d630 = puVar1;
  return;
}



/* Entry: 1046b9fd4; end: 1046ba023;  */

undefined1  [16] FUN_1046b9fd4(void)

{
  return ZEXT816(0x1107997c8);
}



/* Entry: 1046ba024; end: 1046ba063;  */

void FUN_1046ba024(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bec0;
  _swift_getWitnessTable(&UNK_10dd2bec0,&UNK_110799850);
  puRam000000011308d638 = puVar1;
  return;
}



/* Entry: 1046ba064; end: 1046ba10f;  */

void FUN_1046ba064(void)

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



/* Entry: 1046ba110; end: 1046ba19f;  */

undefined1  [16] FUN_1046ba110(undefined8 param_1)

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
    uVar3 = 0xea00000000007375;
    uVar2 = 0x6f756e69746e6f63;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba1a0);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x746e656d676573;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046ba1a0; end: 1046ba1ef;  */

undefined1  [16] FUN_1046ba1a0(void)

{
  return ZEXT816(0x110799850);
}



/* Entry: 1046ba1f0; end: 1046ba22f;  */

void FUN_1046ba1f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2bfc0;
  _swift_getWitnessTable(&UNK_10dd2bfc0,&UNK_1107998d8);
  puRam000000011308d640 = puVar1;
  return;
}



/* Entry: 1046ba230; end: 1046ba2db;  */

void FUN_1046ba230(void)

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



/* Entry: 1046ba2dc; end: 1046ba357;  */

undefined1  [16] FUN_1046ba2dc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xee007465736e755f;
    uVar2 = 0x64656c6261736964;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba358);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x64656c62616e65;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046ba358; end: 1046ba367;  */

undefined1  [16] FUN_1046ba358(void)

{
  return ZEXT816(0x1107998d8);
}



/* Entry: 1046ba368; end: 1046ba3ef;  */

undefined1  [16] FUN_1046ba368(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lStack_18;
  
  if (param_1 == 0) {
    auVar3._8_8_ = 0xe500000000000000;
    auVar3._0_8_ = 0x7465736e75;
    return auVar3;
  }
  if (param_1 == 2) {
    pcVar2 = "opera_with_auto_open_attachment_half_screen";
  }
  else {
    if (param_1 != 1) {
      lStack_18 = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110799960,&lStack_18,&UNK_110799960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba3f0);
      (*pcVar1)();
    }
    pcVar2 = "opera_with_auto_open_attachment_full_screen";
  }
  auVar4._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar4._0_8_ = 0xd00000000000002b;
  return auVar4;
}



/* Entry: 1046ba3f0; end: 1046ba42f;  */

bool FUN_1046ba3f0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046ba430; end: 1046ba46f;  */

void FUN_1046ba430(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c0c0;
  _swift_getWitnessTable(&UNK_10dd2c0c0,&UNK_110799960);
  puRam000000011308d648 = puVar1;
  return;
}



/* Entry: 1046ba470; end: 1046ba51b;  */

void FUN_1046ba470(void)

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



/* Entry: 1046ba51c; end: 1046ba573;  */

undefined1  [16] FUN_1046ba51c(void)

{
  code *pcVar1;
  char *pcVar2;
  long *unaff_x20;
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
    pcVar2 = "opera_with_auto_open_attachment_half_screen";
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110799960,&lStack_18,&UNK_110799960,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba3f0);
      (*pcVar1)();
    }
    pcVar2 = "opera_with_auto_open_attachment_full_screen";
  }
  auVar4._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar4._0_8_ = 0xd00000000000002b;
  return auVar4;
}



/* Entry: 1046ba574; end: 1046ba5b3;  */

void FUN_1046ba574(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c1c0;
  _swift_getWitnessTable(&UNK_10dd2c1c0,&UNK_1107999e8);
  puRam000000011308d650 = puVar1;
  return;
}



/* Entry: 1046ba5b4; end: 1046ba65f;  */

void FUN_1046ba5b4(void)

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



/* Entry: 1046ba660; end: 1046ba707;  */

undefined1  [16] FUN_1046ba660(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xec0000007465736e;
    uVar2 = 0x55746c7561666564;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xee00776569766552;
    uVar2 = 0x656c676e69533176;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba708);
      (*pcVar1)();
    }
    uVar3 = 0xe900000000000079;
    uVar2 = 0x6c6e4f656c746974;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046ba708; end: 1046ba757;  */

undefined1  [16] FUN_1046ba708(void)

{
  return ZEXT816(0x1107999e8);
}



/* Entry: 1046ba758; end: 1046ba797;  */

void FUN_1046ba758(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c2b0;
  _swift_getWitnessTable(&UNK_10dd2c2b0,&UNK_110799a70);
  puRam000000011308d658 = puVar1;
  return;
}



/* Entry: 1046ba798; end: 1046ba843;  */

void FUN_1046ba798(void)

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



/* Entry: 1046ba844; end: 1046ba8bb;  */

undefined1  [16] FUN_1046ba844(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xec0000007465736e;
    uVar2 = 0x55746c7561666564;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046ba8bc);
      (*pcVar1)();
    }
    uVar3 = 0xe700000000000000;
    uVar2 = 0x7972656c6c6167;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046ba8bc; end: 1046ba8df;  */

undefined1  [16] FUN_1046ba8bc(void)

{
  return ZEXT816(0x110799a70);
}



/* Entry: 1046ba8e0; end: 1046ba90b;  */

void FUN_1046ba8e0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046baaac();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046ba90c; end: 1046ba917;  */

void FUN_1046ba90c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046ba918; end: 1046ba9c3;  */

void FUN_1046ba918(void)

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



/* Entry: 1046ba9c4; end: 1046baaab;  */

undefined1  [16] FUN_1046ba9c4(undefined8 param_1)

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
LAB_1046baa90:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046baaac);
        (*pcVar1)();
      }
      uVar3 = 0xe700000000000000;
      uVar2 = 0x746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xeb00000000524164;
    uVar2 = 0x65726f736e6f7073;
  }
  else if (lStack_18 == 3) {
    uVar3 = 0xe900000000000077;
    uVar2 = 0x6569766552707061;
  }
  else {
    if (lStack_18 != 4) goto LAB_1046baa90;
    uVar2 = 0x776f64746e756f63;
    uVar3 = 0xe90000000000006e;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046baaac; end: 1046baabf;  */

undefined1  [16] FUN_1046baaac(ulong param_1)

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



/* Entry: 1046baac0; end: 1046baaff;  */

void FUN_1046baac0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c3a0;
  _swift_getWitnessTable(&UNK_10dd2c3a0,&UNK_110799af8);
  puRam000000011308d660 = puVar1;
  return;
}



/* Entry: 1046bab00; end: 1046bab4f;  */

undefined1  [16] FUN_1046bab00(void)

{
  return ZEXT816(0x110799af8);
}



/* Entry: 1046bab50; end: 1046bab8f;  */

void FUN_1046bab50(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c490;
  _swift_getWitnessTable(&UNK_10dd2c490,&UNK_110799b80);
  puRam000000011308d668 = puVar1;
  return;
}



/* Entry: 1046bab90; end: 1046bac3b;  */

void FUN_1046bab90(void)

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



/* Entry: 1046bac3c; end: 1046bacbf;  */

undefined1  [16] FUN_1046bac3c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xec0000007465736e;
    uVar2 = 0x755f796576727573;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bacc0);
      (*pcVar1)();
    }
    uVar3 = 0xee00746c75616665;
    uVar2 = 0x645f796576727573;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bacc0; end: 1046bace3;  */

undefined1  [16] FUN_1046bacc0(void)

{
  return ZEXT816(0x110799b80);
}



/* Entry: 1046bace4; end: 1046bad0f;  */

void FUN_1046bace4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1046bae7c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bad10; end: 1046bad1b;  */

void FUN_1046bad10(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bad1c; end: 1046badc7;  */

void FUN_1046bad1c(void)

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



/* Entry: 1046badc8; end: 1046bae7b;  */

undefined1  [16] FUN_1046badc8(undefined8 param_1)

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
LAB_1046bae60:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bae7c);
        (*pcVar1)();
      }
      uVar3 = 0xeb00000000657079;
      uVar2 = 0x54746c7561666564;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe300000000000000;
    uVar2 = 0x6c7275;
  }
  else {
    if (lStack_18 != 3) goto LAB_1046bae60;
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6e6f63496c7275;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bae7c; end: 1046bae8f;  */

undefined1  [16] FUN_1046bae7c(ulong param_1)

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



/* Entry: 1046bae90; end: 1046baecf;  */

void FUN_1046bae90(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c580;
  _swift_getWitnessTable(&UNK_10dd2c580,&UNK_110799c08);
  puRam000000011308d670 = puVar1;
  return;
}



/* Entry: 1046baed0; end: 1046baf1f;  */

undefined1  [16] FUN_1046baed0(void)

{
  return ZEXT816(0x110799c08);
}



/* Entry: 1046baf20; end: 1046baf5f;  */

void FUN_1046baf20(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c670;
  _swift_getWitnessTable(&UNK_10dd2c670,&UNK_110799c90);
  puRam000000011308d678 = puVar1;
  return;
}



/* Entry: 1046baf60; end: 1046bb00b;  */

void FUN_1046baf60(void)

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



/* Entry: 1046bb00c; end: 1046bb0ab;  */

undefined1  [16] FUN_1046bb00c(undefined8 param_1)

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
    uVar3 = 0xef65707954656c62;
    uVar2 = 0x617070696b736e75;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bb0ac);
      (*pcVar1)();
    }
    uVar3 = 0xeb00000000657079;
    uVar2 = 0x54746c7561666564;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1046bb0ac; end: 1046bb0bb;  */

undefined1  [16] FUN_1046bb0ac(void)

{
  return ZEXT816(0x110799c90);
}



/* Entry: 1046bb0bc; end: 1046bb1af;  */

undefined1  [16] FUN_1046bb0bc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar4._8_8_ = 0xe400000000000000;
      auVar4._0_8_ = 0x656e6f6e;
      return auVar4;
    }
    if (param_1 != 1) {
      if (param_1 == 2) {
        auVar5._8_8_ = 0x800000010f20c420;
        auVar5._0_8_ = 0xd000000000000012;
        return auVar5;
      }
LAB_1046bb180:
      lStack_18 = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110799d18,&lStack_18,&UNK_110799d18,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bb1b0);
      (*pcVar1)();
    }
    uVar2 = 0x656e65704f77;
  }
  else if (param_1 == 3) {
    uVar2 = 0x65736f6c4377;
  }
  else {
    if (param_1 == 4) {
      auVar3._8_8_ = 0x800000010f20c400;
      auVar3._0_8_ = 0xd000000000000011;
      return auVar3;
    }
    if (param_1 != 5) goto LAB_1046bb180;
    uVar2 = 0x6564616f4c77;
  }
  auVar6._8_8_ = uVar2 | 0xef64000000000000;
  auVar6._0_8_ = 0x65695665726f7473;
  return auVar6;
}



/* Entry: 1046bb1b0; end: 1046bb1c3;  */

bool FUN_1046bb1b0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bb1c4; end: 1046bb29b;  */

void FUN_1046bb1c4(void)

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



/* Entry: 1046bb29c; end: 1046bb2c3;  */

void FUN_1046bb29c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bb2c4; end: 1046bb303;  */

void FUN_1046bb2c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c760;
  _swift_getWitnessTable(&UNK_10dd2c760,&UNK_110799d18);
  puRam000000011308d680 = puVar1;
  return;
}



/* Entry: 1046bb304; end: 1046bb313;  */

undefined1  [16] FUN_1046bb304(void)

{
  return ZEXT816(0x110799d18);
}



/* Entry: 1046bb314; end: 1046bb467;  */

undefined1  [16] FUN_1046bb314(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe400000000000000;
  uVar2 = 0x6c6c756e;
  switch(param_1) {
  case 0:
    goto code_r0x0001046bb434;
  case 1:
    uVar3 = 0xef74706d65747441;
    break;
  case 2:
    uVar3 = 0xee0064656e65704f;
    break;
  case 3:
    auVar6._8_8_ = 0xef77656976626557;
    auVar6._0_8_ = 0x6b6361626c6c6166;
    return auVar6;
  case 4:
    auVar4._8_8_ = 0x800000010f20c4a0;
    auVar4._0_8_ = 0xd000000000000016;
    return auVar4;
  case 5:
    auVar7._8_8_ = 0x800000010f20c480;
    auVar7._0_8_ = 0xd000000000000012;
    return auVar7;
  case 6:
    auVar8._8_8_ = 0x800000010f20c460;
    auVar8._0_8_ = 0xd000000000000011;
    return auVar8;
  case 7:
    uVar3 = 0x4353;
    goto code_r0x0001046bb41c;
  case 8:
    uVar3 = 0x5845;
code_r0x0001046bb41c:
    uVar3 = uVar3 | 0xeb00000000420000;
    break;
  case 9:
    auVar5._8_8_ = 0x800000010f20c440;
    auVar5._0_8_ = 0xd00000000000001b;
    return auVar5;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110799da0,&uStack_18,&UNK_110799da0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bb468);
    (*pcVar1)();
  }
  uVar2 = 0x6b6e696c70656564;
code_r0x0001046bb434:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = uVar2;
  return auVar9;
}



/* Entry: 1046bb468; end: 1046bb47b;  */

bool FUN_1046bb468(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bb47c; end: 1046bb553;  */

void FUN_1046bb47c(void)

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



/* Entry: 1046bb554; end: 1046bb57b;  */

void FUN_1046bb554(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bb57c; end: 1046bb5bb;  */

void FUN_1046bb57c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c85c;
  _swift_getWitnessTable(&UNK_10dd2c85c,&UNK_110799da0);
  puRam000000011308d688 = puVar1;
  return;
}



/* Entry: 1046bb5bc; end: 1046bb5cb;  */

undefined1  [16] FUN_1046bb5bc(void)

{
  return ZEXT816(0x110799da0);
}



/* Entry: 1046bb5cc; end: 1046bb6bb;  */

undefined1  [16] FUN_1046bb5cc(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lStack_18;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar4._8_8_ = 0xe500000000000000;
      auVar4._0_8_ = 0x7465736e75;
      return auVar4;
    }
    if (param_1 == 1) {
      auVar2._8_8_ = 0xe600000000000000;
      auVar2._0_8_ = 0x646577656976;
      return auVar2;
    }
    if (param_1 == 2) {
      auVar6._8_8_ = 0xe600000000000000;
      auVar6._0_8_ = 0x646570706174;
      return auVar6;
    }
  }
  else {
    if (param_1 == 3) {
      auVar5._8_8_ = 0xe600000000000000;
      auVar5._0_8_ = 0x646570697773;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar3._8_8_ = 0x800000010f20c4e0;
      auVar3._0_8_ = 0xd000000000000019;
      return auVar3;
    }
    if (param_1 == 5) {
      auVar7._8_8_ = 0x800000010f20c4c0;
      auVar7._0_8_ = 0xd000000000000013;
      return auVar7;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799e28,&lStack_18,&UNK_110799e28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bb6bc);
  (*pcVar1)();
}



/* Entry: 1046bb6bc; end: 1046bb6e7;  */

void FUN_1046bb6bc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bb7bc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bb6e8; end: 1046bb6f3;  */

void FUN_1046bb6e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bb6f4; end: 1046bb79f;  */

void FUN_1046bb6f4(void)

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



/* Entry: 1046bb7a0; end: 1046bb7cf;  */

bool FUN_1046bb7a0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bb7d0; end: 1046bb80f;  */

void FUN_1046bb7d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2c9c8;
  _swift_getWitnessTable(&UNK_10dd2c9c8,&UNK_110799e28);
  puRam000000011308d690 = puVar1;
  return;
}



/* Entry: 1046bb810; end: 1046bb81f;  */

undefined1  [16] FUN_1046bb810(void)

{
  return ZEXT816(0x110799e28);
}



/* Entry: 1046bb820; end: 1046bbb07;  */

undefined1  [16] FUN_1046bb820(undefined8 param_1)

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
  undefined8 uStack_18;
  
  uVar3 = 0xe500000000000000;
  uVar2 = 0x7465736e75;
  switch(param_1) {
  case 1:
    uVar2 = 0x64616f4c65676170;
    uVar3 = 0xea00000000006465;
  case 0:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    pcVar4 = "relatedProductsLoaded";
    break;
  case 3:
    auVar12._8_8_ = 0xe800000000000000;
    auVar12._0_8_ = 0x6e65704f65676170;
    return auVar12;
  case 4:
    auVar9._8_8_ = 0xeb00000000737369;
    auVar9._0_8_ = 0x6d73694465676170;
    return auVar9;
  case 5:
    auVar16._8_8_ = 0xeb000000006e6570;
    auVar16._0_8_ = 0x4f726573776f7262;
    return auVar16;
  case 6:
    auVar19._8_8_ = 0xe700000000000000;
    auVar19._0_8_ = 0x6c725564616f6c;
    return auVar19;
  case 7:
    auVar13._8_8_ = 0xee006567616d4974;
    auVar13._0_8_ = 0x6e6f724677656976;
    return auVar13;
  case 8:
    pcVar4 = "viewSimilarProducts";
    goto code_r0x0001046bbaac;
  case 9:
    pcVar4 = "clickVariantSelection";
    break;
  case 10:
    auVar21._8_8_ = 0xee00747261436f54;
    auVar21._0_8_ = 0x6464416b63696c63;
    return auVar21;
  case 0xb:
    auVar8._8_8_ = 0xed0000747261436e;
    auVar8._0_8_ = 0x65704f6b63696c63;
    return auVar8;
  case 0xc:
    pcVar4 = "clickUpdateQuantity";
code_r0x0001046bbaac:
    auVar22._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar22._0_8_ = 0xd000000000000013;
    return auVar22;
  case 0xd:
    auVar18._8_8_ = 0xed000074756f6b63;
    auVar18._0_8_ = 0x6568436b63696c63;
    return auVar18;
  case 0xe:
    auVar7._8_8_ = 0xeb00000000776f4e;
    auVar7._0_8_ = 0x7975426b63696c63;
    return auVar7;
  case 0xf:
    auVar11._8_8_ = 0xea00000000006d65;
    auVar11._0_8_ = 0x744965766f6d6572;
    return auVar11;
  case 0x10:
    auVar6._8_8_ = 0x800000010f20c540;
    auVar6._0_8_ = 0xd000000000000016;
    return auVar6;
  case 0x11:
    auVar14._8_8_ = 0xef64656c69614664;
    auVar14._0_8_ = 0x616f4c6567616d69;
    return auVar14;
  case 0x12:
    auVar20._8_8_ = 0xed0000646564616f;
    auVar20._0_8_ = 0x4c6b726f7774656e;
    return auVar20;
  case 0x13:
    auVar23._8_8_ = 0x800000010f20c520;
    auVar23._0_8_ = 0xd000000000000011;
    return auVar23;
  case 0x14:
    auVar15._8_8_ = 0xea0000000000646e;
    auVar15._0_8_ = 0x456e6f6973736573;
    return auVar15;
  case 0x15:
    auVar17._8_8_ = 0x800000010f20c500;
    auVar17._0_8_ = 0xd000000000000010;
    return auVar17;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110799eb0,&uStack_18,&UNK_110799eb0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bbb08);
    (*pcVar1)();
  }
  auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar10._0_8_ = 0xd000000000000015;
  return auVar10;
}



/* Entry: 1046bbb08; end: 1046bbb33;  */

void FUN_1046bbb08(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bbc08();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bbb34; end: 1046bbb3f;  */

void FUN_1046bbb34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bbb40; end: 1046bbbeb;  */

void FUN_1046bbb40(void)

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



/* Entry: 1046bbbec; end: 1046bbc1b;  */

bool FUN_1046bbbec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bbc1c; end: 1046bbc5b;  */

void FUN_1046bbc1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2cad0;
  _swift_getWitnessTable(&UNK_10dd2cad0,&UNK_110799eb0);
  puRam000000011308d698 = puVar1;
  return;
}



/* Entry: 1046bbc5c; end: 1046bbc6b;  */

undefined1  [16] FUN_1046bbc5c(void)

{
  return ZEXT816(0x110799eb0);
}



/* Entry: 1046bbc6c; end: 1046bbe07;  */

undefined1  [16] FUN_1046bbc6c(long param_1)

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
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar4._8_8_ = 0xe500000000000000;
        auVar4._0_8_ = 0x7465736e75;
        return auVar4;
      }
      if (param_1 == 1) {
        uVar2 = 0x50676e69646e616c;
LAB_1046bbd4c:
        auVar7._8_8_ = 0xeb00000000656761;
        auVar7._0_8_ = uVar2;
        return auVar7;
      }
    }
    else {
      if (param_1 == 2) {
        uVar2 = 0x5072616c696d6973;
        goto LAB_1046bbd4c;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0xee00656761507463;
        auVar8._0_8_ = 0x75646f7250706f74;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar5._8_8_ = 0x800000010f20c5e0;
      auVar5._0_8_ = 0xd000000000000010;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar10._8_8_ = 0xe800000000000000;
      auVar10._0_8_ = 0x6567615074726163;
      return auVar10;
    }
  }
  else {
    if (param_1 == 6) {
      auVar6._8_8_ = 0xed00006567615074;
      auVar6._0_8_ = 0x7261436f54646461;
      return auVar6;
    }
    if (param_1 == 7) {
      auVar3._8_8_ = 0xee00656761506e6f;
      auVar3._0_8_ = 0x697463656c6c6f63;
      return auVar3;
    }
    if (param_1 == 8) {
      auVar9._8_8_ = 0xef6567615074756f;
      auVar9._0_8_ = 0x6b63656843626373;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_110799f38,&lStack_18,&UNK_110799f38,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1046bbe08);
  (*pcVar1)();
}



/* Entry: 1046bbe08; end: 1046bbe33;  */

void FUN_1046bbe08(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001046bbf08();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 1046bbe34; end: 1046bbe3f;  */

void FUN_1046bbe34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bbe40; end: 1046bbeeb;  */

void FUN_1046bbe40(void)

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



/* Entry: 1046bbeec; end: 1046bbf1b;  */

bool FUN_1046bbeec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bbf1c; end: 1046bbf5b;  */

void FUN_1046bbf1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2cbb8;
  _swift_getWitnessTable(&UNK_10dd2cbb8,&UNK_110799f38);
  puRam000000011308d6a0 = puVar1;
  return;
}



/* Entry: 1046bbf5c; end: 1046bbf6b;  */

undefined1  [16] FUN_1046bbf5c(void)

{
  return ZEXT816(0x110799f38);
}



/* Entry: 1046bbf6c; end: 1046bc27f;  */

undefined1  [16] FUN_1046bbf6c(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
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
  undefined8 uStack_18;
  
  uVar1 = 0x6c6c756e;
  switch(param_1) {
  case 0:
    uVar1 = 0x656e6f6e;
code_r0x0001046bbfa4:
    auVar3._4_4_ = 0;
    auVar3._0_4_ = uVar1;
    auVar3._8_8_ = 0xe400000000000000;
    return auVar3;
  case 1:
    auVar12._8_8_ = 0xeb0000000065636e;
    auVar12._0_8_ = 0x617664416f747561;
    return auVar12;
  case 2:
    auVar14._8_8_ = 0xea0000000000646e;
    auVar14._0_8_ = 0x756f72676b636162;
    return auVar14;
  case 3:
    auVar7._8_8_ = 0xe900000000000073;
    auVar7._0_8_ = 0x73657250676e6f6c;
    return auVar7;
  case 4:
    auVar18._8_8_ = 0xe700000000000000;
    auVar18._0_8_ = 0x7466654c706174;
    return auVar18;
  case 5:
    auVar21._8_8_ = 0xe800000000000000;
    auVar21._0_8_ = 0x7468676952706174;
    return auVar21;
  case 6:
    auVar15._8_8_ = 0xe90000000000006e;
    auVar15._0_8_ = 0x776f446570697773;
    return auVar15;
  case 7:
    auVar24._8_8_ = 0xe900000000000074;
    auVar24._0_8_ = 0x66654c6570697773;
    return auVar24;
  case 8:
    auVar9._8_8_ = 0xea00000000007468;
    auVar9._0_8_ = 0x6769526570697773;
    return auVar9;
  case 9:
    auVar23._8_8_ = 0xe700000000000000;
    auVar23._0_8_ = 0x70556570697773;
    return auVar23;
  case 10:
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x776f727241706174;
    return auVar6;
  case 0xb:
    auVar8._8_8_ = 0xe400000000000000;
    auVar8._0_8_ = 0x58706174;
    return auVar8;
  case 0xc:
    auVar20._8_8_ = 0x800000010f20c6a0;
    auVar20._0_8_ = 0xd000000000000012;
    return auVar20;
  case 0xd:
    auVar5._8_8_ = 0xec000000776f7272;
    auVar5._0_8_ = 0x416e776f44706174;
    return auVar5;
  case 0xe:
    auVar13._8_8_ = 0xeb00000000726573;
    auVar13._0_8_ = 0x776f72426e65706f;
    return auVar13;
  case 0xf:
    auVar4._8_8_ = 0xe800000000000000;
    auVar4._0_8_ = 0x7265626275726373;
    return auVar4;
  case 0x10:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x626154706174;
    return auVar16;
  case 0x11:
    auVar22._8_8_ = 0xe900000000000065;
    auVar22._0_8_ = 0x6d6f726843706174;
    return auVar22;
  case 0x12:
    auVar26._8_8_ = 0xeb00000000646e75;
    auVar26._0_8_ = 0x6f53657355706174;
    return auVar26;
  case 0x13:
    auVar17._8_8_ = 0x800000010f20c680;
    auVar17._0_8_ = 0xd000000000000016;
    return auVar17;
  case 0x14:
    auVar19._8_8_ = 0x800000010f20c660;
    auVar19._0_8_ = 0xd000000000000019;
    return auVar19;
  case 0x15:
    auVar25._8_8_ = 0x800000010f20c640;
    auVar25._0_8_ = 0xd00000000000001b;
    return auVar25;
  case 0x16:
    auVar27._8_8_ = 0x800000010f20c620;
    auVar27._0_8_ = 0xd000000000000018;
    return auVar27;
  case 0x17:
    auVar11._8_8_ = 0xe800000000000000;
    auVar11._0_8_ = 0x6e4f797254706174;
    return auVar11;
  case 0x18:
    auVar10._8_8_ = 0x800000010f20c600;
    auVar10._0_8_ = 0xd000000000000014;
    return auVar10;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_110799fc0,&uStack_18,&UNK_110799fc0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1046bc280);
    (*pcVar2)();
  case 0xffffffffffffffff:
    goto code_r0x0001046bbfa4;
  }
}



/* Entry: 1046bc280; end: 1046bc293;  */

bool FUN_1046bc280(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bc294; end: 1046bc36b;  */

void FUN_1046bc294(void)

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



/* Entry: 1046bc36c; end: 1046bc397;  */

void FUN_1046bc36c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1046bc398; end: 1046bc3d7;  */

void FUN_1046bc398(void)

{
  undefined *puVar1;
  
  if (puRam000000011308d6a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd2cc4c;
  _swift_getWitnessTable(&UNK_10dd2cc4c,&UNK_110799fc0);
  puRam000000011308d6a8 = puVar1;
  return;
}



/* Entry: 1046bc3d8; end: 1046bc3e7;  */

undefined1  [16] FUN_1046bc3d8(void)

{
  return ZEXT816(0x110799fc0);
}



/* Entry: 1046bc3e8; end: 1046bc567;  */

undefined1  [16] FUN_1046bc3e8(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
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
  undefined8 uStack_18;
  
  uVar1 = 0x6c6c756e;
  switch(param_1) {
  case 0:
    uVar1 = 0x656e6f6e;
  case 0xffffffffffffffff:
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar1;
    auVar4._8_8_ = 0xe400000000000000;
    return auVar4;
  case 1:
    auVar7._8_8_ = 0xeb0000000065636e;
    auVar7._0_8_ = 0x617664416f747561;
    return auVar7;
  case 2:
    auVar8._8_8_ = 0x800000010f20c700;
    auVar8._0_8_ = 0xd000000000000016;
    return auVar8;
  case 3:
    auVar5._8_8_ = 0x800000010f20c6e0;
    auVar5._0_8_ = 0xd000000000000014;
    return auVar5;
  case 4:
    auVar10._8_8_ = 0xea0000000000646e;
    auVar10._0_8_ = 0x756f72676b636162;
    return auVar10;
  case 5:
    auVar11._8_8_ = 0xe700000000000000;
    auVar11._0_8_ = 0x7373696d736964;
    return auVar11;
  case 6:
    auVar9._8_8_ = 0xe400000000000000;
    auVar9._0_8_ = 0x74697865;
    return auVar9;
  case 7:
    auVar13._8_8_ = 0xec00000072656874;
    auVar13._0_8_ = 0x4f746e6573657270;
    return auVar13;
  case 8:
    uVar3 = 0xef6e69676542746e;
    break;
  case 9:
    auVar12._8_8_ = 0x800000010f20c6c0;
    auVar12._0_8_ = 0xd000000000000012;
    return auVar12;
  case 10:
    uVar3 = 0xee006c696146746e;
    break;
  default:
    uStack_18 = param_1;
    __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
              (&UNK_11079a048,&uStack_18,&UNK_11079a048,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1046bc568);
    (*pcVar2)();
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = 0x656d686361747461;
  return auVar6;
}



/* Entry: 1046bc568; end: 1046bc57b;  */

bool FUN_1046bc568(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046bc57c; end: 1046bc653;  */

void FUN_1046bc57c(void)

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



/* Entry: 1046bc654; end: 1046bc67f;  */

void FUN_1046bc654(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}


