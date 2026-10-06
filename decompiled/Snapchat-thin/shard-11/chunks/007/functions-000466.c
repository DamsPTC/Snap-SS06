/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108857a34; end: 108857a57;  */

void FUN_108857a34(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857a58; end: 108857b4f;  */

void FUN_108857a58(long param_1)

{
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
    func_0x000107c28834(param_1 + 0x1f8);
    func_0x00010885c368();
    func_0x00010885c840();
    func_0x00010885bc28();
    func_0x00010885bd7c();
  }
  else {
    func_0x000107c28834(param_1 + 0x268);
    func_0x00010885c86c();
    func_0x00010885c858();
    func_0x00010885c850();
    func_0x00010885c848();
    func_0x00010885c370();
    func_0x00010885bd7c();
    func_0x00010885bc28();
  }
  func_0x00010885bbf0();
  func_0x00010885c620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857b50; end: 108857b9f;  */

void FUN_108857b50(long param_1)

{
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
    func_0x00010885c368();
    func_0x00010885c840();
  }
  else {
    func_0x00010885c86c();
    func_0x00010885c858();
    func_0x00010885c850();
    func_0x00010885c848();
    func_0x00010885c370();
  }
  func_0x00010885bd7c();
  func_0x00010885bbf0();
  func_0x00010885c620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857ba0; end: 108857bfb;  */

void FUN_108857ba0(long param_1)

{
  func_0x000107c28834(param_1 + 0x38);
  func_0x00010885bcbc();
  func_0x00010885bdb8();
  func_0x00010885bf68();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857bfc; end: 108857c2b;  */

void FUN_108857bfc(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x38);
  func_0x00010885bdb8();
  func_0x00010885bf68();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857c2c; end: 108857c77;  */

void FUN_108857c2c(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857c78; end: 108857c9b;  */

void FUN_108857c78(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857c9c; end: 108857d97;  */

void FUN_108857c9c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c1f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca0c();
    FUN_108857704();
    func_0x00010885c0fc();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x48);
  func_0x00010885bd38();
  func_0x00010885bcc4();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  FUN_108857644(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857d98; end: 108857dcb;  */

void FUN_108857d98(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010885c190();
  if ((bool)in_ZR) {
    func_0x00010885bd38();
    func_0x00010885bcc4();
  }
  func_0x00010885bbf0();
  FUN_108857644(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857dcc; end: 108857e17;  */

void FUN_108857dcc(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857e18; end: 108857e3b;  */

void FUN_108857e18(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857e3c; end: 108857f23;  */

void FUN_108857e3c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  func_0x00010885bf88();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010885c554();
    FUN_1088574b8();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010885b89c();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857f24; end: 108857f53;  */

void FUN_108857f24(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108857f54; end: 108857ffb;  */

void FUN_108857f54(long param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885c824();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c484();
  func_0x000107c27ae4(param_1 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857ffc; end: 10885802b;  */

void FUN_108857ffc(void)

{
  long unaff_x19;
  
  func_0x00010885b910();
  func_0x00010885c824();
  func_0x00010885bbf0();
  func_0x00010885c484();
  func_0x000107c27ae4(unaff_x19 + 0x1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885802c; end: 10885808b;  */

void FUN_10885802c(long param_1)

{
  func_0x000107c28834(param_1 + 0x50);
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885c298();
  func_0x00010885bf68();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885808c; end: 1088580b7;  */

void FUN_10885808c(void)

{
  func_0x00010885c950();
  func_0x00010885bd08();
  func_0x00010885c298();
  func_0x00010885bf68();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088580b8; end: 108858103;  */

void FUN_1088580b8(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858104; end: 108858127;  */

void FUN_108858104(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858128; end: 10885822f;  */

void FUN_108858128(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1088571f0(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(param_1 + 0x60));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x70) = 1;
      func_0x00010885b6f0();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x60);
  func_0x00010885c7fc();
  func_0x00010885c92c();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858230; end: 108858267;  */

void FUN_108858230(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010885c7fc();
    func_0x00010885c92c();
  }
  func_0x00010885bbf0();
  func_0x00010885c98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858268; end: 1088582b3;  */

void FUN_108858268(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088582b4; end: 1088582d7;  */

void FUN_1088582b4(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088582d8; end: 108858323;  */

void FUN_1088582d8(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858324; end: 108858347;  */

void FUN_108858324(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858348; end: 10885842f;  */

void FUN_108858348(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  func_0x00010885bf88();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010885c554();
    FUN_108856ef8();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010885b89c();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858430; end: 10885845f;  */

void FUN_108858430(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858460; end: 108858577;  */

void FUN_108858460(long param_1)

{
  func_0x000107c28834(param_1 + 0xa0);
  func_0x00010885c5b0();
  func_0x00010885c314();
  func_0x00010885c2f4();
  FUN_10884f16c(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x50,0);
  func_0x00010885c2ec();
  func_0x00010885c2d4();
  func_0x00010885c044();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858578; end: 1088585b3;  */

void FUN_108858578(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xa0);
  func_0x00010885c314();
  func_0x00010885c2f4();
  func_0x00010885c2ec();
  func_0x00010885c2d4();
  func_0x00010885c044();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088585b4; end: 1088585ff;  */

void FUN_1088585b4(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858600; end: 108858623;  */

void FUN_108858600(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858624; end: 10885870b;  */

void FUN_108858624(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  func_0x00010885bf88();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010885c554();
    FUN_1088563a0();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010885b89c();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885870c; end: 10885873b;  */

void FUN_10885870c(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885873c; end: 1088587d7;  */

void FUN_10885873c(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088587d8; end: 1088587fb;  */

void FUN_1088587d8(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088587fc; end: 108858847;  */

void FUN_1088587fc(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858848; end: 10885886b;  */

void FUN_108858848(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885886c; end: 108858953;  */

void FUN_10885886c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  func_0x00010885bf88();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010885c554();
    FUN_1088543c4();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010885b89c();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858954; end: 108858983;  */

void FUN_108858954(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858984; end: 108858a9b;  */

void FUN_108858984(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    plVar2 = param_1;
    func_0x00010885bfa4();
    func_0x00010885bc98();
    func_0x00010885bcbc();
    func_0x00010885c88c();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885ca68();
      func_0x00010885b6f0();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885bfa4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858a9c; end: 108858abf;  */

void FUN_108858a9c(void)

{
  func_0x00010885bec8();
  func_0x00010885bcbc();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858ac0; end: 108858c47;  */

void FUN_108858ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c28834(param_1 + 0xd0);
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010885bfb4();
  func_0x00010885c27c();
  func_0x00010885c350();
  func_0x00010885bbb4(*(undefined8 *)(lVar1 + 0xc0),0x273,param_3,param_1 + 0x50);
  func_0x00010885bd84();
  func_0x00010885c324();
  func_0x00010885c304();
  func_0x00010885bf08();
  func_0x00010885c2e4();
  func_0x00010885c380();
  func_0x00010885c96c();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858c48; end: 108858ca3;  */

void FUN_108858c48(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xd0);
  func_0x00010885c27c();
  func_0x00010885c350();
  func_0x00010885c324();
  func_0x00010885c304();
  func_0x00010885bf08();
  func_0x00010885c2e4();
  func_0x00010885c380();
  func_0x00010885c96c();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858ca4; end: 108858cf3;  */

void FUN_108858ca4(undefined8 param_1)

{
  func_0x00010885c26c();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108858cf4; end: 108858d17;  */

void FUN_108858cf4(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858d18; end: 108858e1f;  */

void FUN_108858d18(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885ca98();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108856228(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x48);
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x40));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x50) = 1;
      func_0x00010885b6f0();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108850730(unaff_x19 + 0x40);
  func_0x00010885c2c4();
  func_0x00010885bdb8();
  func_0x00010885bd38();
  func_0x00010885bbf0();
  func_0x00010885c538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858e20; end: 108858e53;  */

void FUN_108858e20(void)

{
  int extraout_w8;
  
  func_0x00010885ca98();
  if (extraout_w8 == 1) {
    func_0x00010885bdb8();
    func_0x00010885bd38();
  }
  func_0x00010885bbf0();
  func_0x00010885c538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858e54; end: 108858f93;  */

void FUN_108858e54(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long *aplStack_50 [2];
  undefined1 auStack_40 [16];
  
  FUN_108850730(param_1 + 0x30);
  func_0x00010885c0e0();
  func_0x00010885c614(auStack_40);
  func_0x0001052c1d5c();
  func_0x0001052c1d84(aplStack_50,auStack_40);
  func_0x00010885c91c();
  func_0x00010885c694();
  __ZNSt3__15mutex4lockEv(aplStack_50[0] + 8);
  if ((char)aplStack_50[0][1] == '\x01') {
    lVar1 = *unaff_x20;
    *(undefined1 *)((long)aplStack_50[0] + 4) = *(undefined1 *)((long)unaff_x20 + 4);
    *(int *)aplStack_50[0] = (int)lVar1;
  }
  else {
    *aplStack_50[0] = *unaff_x20;
    *(undefined1 *)(aplStack_50[0] + 1) = 1;
  }
  func_0x00010885c32c();
  if (unaff_x20 == (long *)0x0) {
    func_0x00010885c5d4(aplStack_50[0]);
  }
  else {
    func_0x00010885c0d4(*(undefined8 *)(*unaff_x20 + 0x10));
    func_0x00010885bea4();
  }
  func_0x00010885c884();
  func_0x00010885bc98();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108858f94; end: 108858fb3;  */

void FUN_108858f94(void)

{
  func_0x00010885bec8();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108858fb4; end: 10885909f;  */

void FUN_108858fb4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c204();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca00();
    FUN_108854c54();
    func_0x00010885bd40();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c628();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c97c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088590a0; end: 1088590cf;  */

void FUN_1088590a0(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c1a0();
  if ((bool)in_ZR) {
    func_0x00010885bcc4();
    func_0x00010885bd08();
  }
  func_0x00010885bbf0();
  func_0x00010885c97c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088590d0; end: 10885919b;  */

void FUN_1088590d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c28834(param_1 + 0x50);
  func_0x00010885bcc4();
  func_0x00010885bd08();
  FUN_108851df4(*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x68) + 1);
  func_0x00010885bbb4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc0),0x272,param_3,param_1 + 0x38
                     );
  func_0x00010885bd84();
  func_0x00010885bbf0();
  func_0x00010885c044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885919c; end: 1088591c3;  */

void FUN_10885919c(void)

{
  func_0x00010885c950();
  func_0x00010885bd08();
  func_0x00010885bbf0();
  func_0x00010885c044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088591c4; end: 108859213;  */

void FUN_1088591c4(undefined8 param_1)

{
  func_0x00010885c26c();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108859214; end: 108859237;  */

void FUN_108859214(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859238; end: 108859333;  */

void FUN_108859238(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c1f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca0c();
    FUN_10885606c();
    func_0x00010885c0fc();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108850730(unaff_x19 + 0x48);
  func_0x00010885c2c4();
  func_0x00010885bd38();
  func_0x00010885bcc4();
  func_0x00010885bbf0();
  func_0x00010885c964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859334; end: 108859363;  */

void FUN_108859334(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c190();
  if ((bool)in_ZR) {
    func_0x00010885bd38();
    func_0x00010885bcc4();
  }
  func_0x00010885bbf0();
  func_0x00010885c964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859364; end: 1088594c7;  */

void FUN_108859364(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long lVar5;
  
  func_0x00010885c9a8();
  func_0x00010885bf88();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885c5a0();
    lVar5 = *param_1;
    func_0x00010885bc08();
    func_0x00010885bc98();
    if (lVar5 == 0) {
      func_0x00010885c210();
      func_0x00010885c064();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
      func_0x00010885c4c4();
      FUN_10865aaac();
      func_0x00010885bdf4();
      func_0x00010885c940();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108859468);
      (*pcVar2)();
    }
    func_0x00010885c728(*(undefined8 *)(unaff_x19 + 0x20));
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010885b89c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = unaff_x19 + 0x28;
  func_0x000107c28a1c(lVar5);
  func_0x000107c29748(unaff_x19 + 0x10,lVar5);
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc10();
  func_0x00010885bc18();
  return;
}



/* Entry: 1088594c8; end: 108859507;  */

void FUN_1088594c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010885bbf0();
  func_0x00010885bc10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108859508; end: 10885981f;  */

void FUN_108859508(long param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  int *piVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar8;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  int iVar10;
  ulong unaff_x21;
  long lVar11;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar11 = param_1;
  func_0x00010885ba64();
  uStack_48 = extraout_x8;
  if ((*(byte *)(lVar11 + 0xf0) & 1) == 0) {
    piVar4 = (int *)(param_1 + 0xc0);
    func_0x000107c28a1c();
    iVar10 = *piVar4;
    bVar1 = *(byte *)(piVar4 + 1);
    unaff_x21 = (ulong)bVar1;
    func_0x00010885bfbc();
    func_0x00010885bf94();
    func_0x00010885bfb4();
    if (((bVar1 & 1) != 0) && (iVar10 != 6)) {
      in_ZR = iVar10 == 5;
      if ((bool)in_ZR) {
        func_0x00010885c5b8();
        func_0x00010885ba00();
        puVar7 = (ulong *)0x5;
      }
      else {
        func_0x00010885c5b8();
        func_0x00010885ba00();
        puVar7 = (ulong *)0x0;
      }
      puVar6 = (ulong *)(param_1 + 0x10);
      FUN_10884f414(puVar6);
      goto LAB_108859558;
    }
    uStack_50 = *(undefined8 *)(param_1 + 0xe8);
    puVar6 = *(ulong **)(*(long *)(param_1 + 0xd8) + 0xb0);
    func_0x00010885c7e8(auStack_68,&uStack_50);
    FUN_108864508(puVar6,*(long *)(param_1 + 0xd8) + 0x28,auStack_68);
    lVar11 = *(long *)(param_1 + 0xd8);
    func_0x00010885c4e0();
    in_ZR = *(long *)(lVar11 + 0x168) == *(long *)(lVar11 + 0x170);
    if (!(bool)in_ZR) {
      puVar7 = *(ulong **)(param_1 + 0xe0);
      FUN_10884d968(*(long *)(param_1 + 0xd8) + 0x160);
      puVar6 = *(ulong **)(param_1 + 0xd8);
      FUN_1088519f8(param_1 + 200);
      func_0x00010885c6fc();
      do {
        func_0x00010885b868();
      } while (extraout_w10 != 0);
      func_0x00010885bc30(*(undefined8 *)(param_1 + 0xc0));
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xf0) = 1;
        func_0x00010885b6f0();
        unaff_x21 = *puVar6;
        if (unaff_x21 == 0) {
          func_0x000107c3a5c0();
          unaff_x21 = *puVar6;
        }
        func_0x00010885bcd8();
        plVar8 = extraout_x8_00;
        do {
          if (*plVar8 == 0) {
            func_0x00010885b89c();
            plVar8 = extraout_x8_02;
            uVar2 = extraout_w10_01;
            uVar9 = extraout_w11_00;
          }
          else {
            func_0x00010885bc8c();
            plVar8 = extraout_x8_01;
            uVar2 = extraout_w10_00;
            uVar9 = extraout_w11;
          }
          if ((uVar9 & 1) != 0) {
            func_0x00010885b774();
            if ((bool)in_ZR) {
              func_0x00010885b88c();
              func_0x00010885b700();
              func_0x00010885b6a4();
            }
            func_0x00010885b678();
            goto LAB_108859570;
          }
        } while ((uVar2 >> 1 & 1) == 0);
      }
      goto LAB_108859534;
    }
  }
  else {
LAB_108859534:
    puVar6 = (ulong *)(param_1 + 0xc0);
    func_0x000107c28834(puVar6);
    func_0x00010885bfbc();
    func_0x00010885bf94();
  }
  func_0x00010885c5b8();
  puVar7 = (ulong *)0x271;
  func_0x00010885bbb4();
  func_0x00010885bd84();
LAB_108859558:
  func_0x00010885c30c();
  func_0x00010885bf58();
  func_0x00010885bf08();
  func_0x00010885c2dc();
  while( true ) {
    func_0x00010885bbf0();
    func_0x00010885bc18();
LAB_108859570:
    func_0x00010885b878(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar7 != 0) goto LAB_1088596e8;
    do {
      func_0x00010885bca0();
LAB_1088596e8:
      puVar5 = puVar6;
      func_0x000104bd46a0(puVar6);
      func_0x00010885bca8();
      iVar10 = (int)unaff_x21;
    } while (iVar10 == 0);
    func_0x00010885c30c();
    func_0x00010885bf58();
    func_0x00010885bf08();
    func_0x00010885c2dc();
    in_ZR = iVar10 == 3;
    if ((bool)in_ZR) {
      unaff_x21 = *(ulong *)(param_1 + 0xd8);
      func_0x00010885bbf8();
      puVar6 = *(ulong **)(unaff_x21 + 0xc0);
      func_0x00010885bff4();
      FUN_10884fa1c();
      puVar7 = puVar6;
      func_0x00010885bec0();
      ___cxa_end_catch();
    }
    else {
      in_ZR = iVar10 == 2;
      if ((bool)in_ZR) {
        lVar11 = *(long *)(param_1 + 0xd8);
        func_0x00010885bbf8();
        func_0x00010885ba00(*(undefined8 *)(lVar11 + 0xc0),0x271);
        ___cxa_rethrow();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1088597e4);
        (*pcVar3)();
      }
      func_0x00010885bbf8();
      func_0x00010885bc00();
      ___cxa_end_catch();
      puVar6 = puVar5;
    }
  }
  return;
}



/* Entry: 108859820; end: 10885987b;  */

void FUN_108859820(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xc0;
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    func_0x000107c27f9c(param_1 + 0xc0);
    lVar1 = param_1 + 200;
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010885bd8c();
  func_0x00010885c30c();
  func_0x00010885bf58();
  func_0x00010885bf08();
  func_0x00010885c2dc();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885987c; end: 1088598cb;  */

void FUN_10885987c(undefined8 param_1)

{
  func_0x00010885c26c();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088598cc; end: 1088598ef;  */

void FUN_1088598cc(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088598f0; end: 1088599fb;  */

void FUN_1088598f0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108855e70(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(param_1 + 0x38));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885ca68();
      func_0x00010885b6f0();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108850730(param_1 + 0x38);
  func_0x00010885c2c4();
  func_0x00010885bcbc();
  func_0x00010885bdb8();
  func_0x00010885bbf0();
  func_0x000107c288ac(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088599fc; end: 108859a37;  */

void FUN_1088599fc(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010885bcbc();
    func_0x00010885bdb8();
  }
  func_0x00010885bbf0();
  func_0x000107c288ac(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108859a38; end: 108859bff;  */

void FUN_108859a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c28834(param_1 + 0x100);
  lVar1 = *(long *)(param_1 + 0x118);
  func_0x00010885c674();
  func_0x00010885c3a0();
  func_0x00010885c398();
  func_0x00010885bbb4(*(undefined8 *)(lVar1 + 0xc0),0x270,param_3,param_1 + 0x80);
  func_0x00010885c658(*(undefined8 *)(lVar1 + 0xc0));
  (*extraout_x8)();
  func_0x00010885bf9c();
  func_0x00010885bd84();
  func_0x00010885c390();
  func_0x00010885c358();
  func_0x00010885bf58();
  func_0x00010885c254();
  func_0x00010885c2fc();
  func_0x00010885c25c();
  func_0x00010885bbf0();
  func_0x000107c27ae4(param_1 + 0x68);
  func_0x00010885bc18();
  return;
}



/* Entry: 108859c00; end: 108859c4f;  */

void FUN_108859c00(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x100);
  func_0x00010885c3a0();
  func_0x00010885c398();
  func_0x00010885c390();
  func_0x00010885c358();
  func_0x00010885bf58();
  func_0x00010885c254();
  func_0x00010885c2fc();
  func_0x00010885c25c();
  func_0x00010885bbf0();
  func_0x000107c27ae4(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108859c50; end: 108859c9f;  */

void FUN_108859c50(undefined8 param_1)

{
  func_0x00010885c26c();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108859ca0; end: 108859cc3;  */

void FUN_108859ca0(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859cc4; end: 108859dbf;  */

void FUN_108859cc4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c1f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca0c();
    FUN_108855cc4();
    func_0x00010885c0fc();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108850730(unaff_x19 + 0x48);
  func_0x00010885c2c4();
  func_0x00010885bd38();
  func_0x00010885bcc4();
  func_0x00010885bbf0();
  func_0x00010885c95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859dc0; end: 108859def;  */

void FUN_108859dc0(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c190();
  if ((bool)in_ZR) {
    func_0x00010885bd38();
    func_0x00010885bcc4();
  }
  func_0x00010885bbf0();
  func_0x00010885c95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859df0; end: 108859e87;  */

void FUN_108859df0(long param_1)

{
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_1088558b8();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xb8) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xb8) = 0;
      }
      uVar2 = unaff_x22[1];
      uVar1 = *unaff_x22;
      uVar3 = unaff_x22[2];
      *(undefined8 *)(unaff_x21 + 0xb0) = unaff_x22[3];
      *(undefined8 *)(unaff_x21 + 0xa8) = uVar3;
      *(undefined8 *)(unaff_x21 + 0xa0) = uVar2;
      *(undefined8 *)(unaff_x21 + 0x98) = uVar1;
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108859e88; end: 108859eab;  */

void FUN_108859e88(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108859eac; end: 108859feb;  */

void FUN_108859eac(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885ca98();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108855768(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x48);
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x40));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x50) = 1;
      func_0x00010885b6f0();
      unaff_x21 = *plVar2;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar2;
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = unaff_x19 + 0x40;
  FUN_1088558b8();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)lVar3 != 0) {
      if (*(char *)(unaff_x21 + 0xb8) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xb8) = 0;
      }
      uVar6 = unaff_x22[1];
      uVar5 = *unaff_x22;
      uVar7 = unaff_x22[2];
      *(undefined8 *)(unaff_x21 + 0xb0) = unaff_x22[3];
      *(undefined8 *)(unaff_x21 + 0xa8) = uVar7;
      *(undefined8 *)(unaff_x21 + 0xa0) = uVar6;
      *(undefined8 *)(unaff_x21 + 0x98) = uVar5;
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bdb8();
  func_0x00010885bd38();
  func_0x00010885bbf0();
  func_0x00010885c538();
  func_0x00010885bc18();
  return;
}



/* Entry: 108859fec; end: 10885a01f;  */

void FUN_108859fec(void)

{
  int extraout_w8;
  
  func_0x00010885ca98();
  if (extraout_w8 == 1) {
    func_0x00010885bdb8();
    func_0x00010885bd38();
  }
  func_0x00010885bbf0();
  func_0x00010885c538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885a020; end: 10885a16b;  */

void FUN_10885a020(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *apuStack_50 [2];
  undefined1 auStack_40 [16];
  
  FUN_1088558b8(param_1 + 0x30);
  func_0x00010885c0e0();
  func_0x00010885c614(auStack_40);
  func_0x0001052c2884();
  func_0x0001052c28ac(apuStack_50,auStack_40);
  func_0x00010885c914();
  func_0x00010885c67c();
  puVar1 = apuStack_50[0];
  __ZNSt3__15mutex4lockEv(apuStack_50[0] + 0xb);
  if (*(char *)(apuStack_50[0] + 4) == '\x01') {
    uVar4 = unaff_x20[1];
    uVar3 = *unaff_x20;
    uVar5 = *(undefined8 *)((long)unaff_x20 + 9);
    *(undefined8 *)((long)apuStack_50[0] + 0x11) = *(undefined8 *)((long)unaff_x20 + 0x11);
    *(undefined8 *)((long)apuStack_50[0] + 9) = uVar5;
    apuStack_50[0][1] = uVar4;
    *apuStack_50[0] = uVar3;
  }
  else {
    uVar3 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    apuStack_50[0][1] = unaff_x20[1];
    *apuStack_50[0] = uVar3;
    apuStack_50[0][3] = uVar5;
    apuStack_50[0][2] = uVar4;
    *(undefined1 *)(apuStack_50[0] + 4) = 1;
  }
  plVar2 = (long *)apuStack_50[0][0x14];
  apuStack_50[0][0x14] = 0;
  __ZNSt3__15mutex6unlockEv(puVar1 + 0xb);
  if (plVar2 == (long *)0x0) {
    func_0x00010885c520(apuStack_50[0]);
  }
  else {
    func_0x00010885c0d4(*(undefined8 *)(*plVar2 + 0x10));
    func_0x00010885bea4();
  }
  func_0x00010885c87c();
  func_0x00010885bc98();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885a16c; end: 10885a18b;  */

void FUN_10885a16c(void)

{
  func_0x00010885bec8();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885a18c; end: 10885a277;  */

void FUN_10885a18c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c204();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca00();
    FUN_108855978();
    func_0x00010885bd40();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c628();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885a278; end: 10885a2a7;  */

void FUN_10885a278(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c1a0();
  if ((bool)in_ZR) {
    func_0x00010885bcc4();
    func_0x00010885bd08();
  }
  func_0x00010885bbf0();
  func_0x00010885c984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885a2a8; end: 10885a40b;  */

void FUN_10885a2a8(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long lVar5;
  
  func_0x00010885c9a8();
  func_0x00010885bf88();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885c5a0();
    lVar5 = *param_1;
    func_0x00010885bc08();
    func_0x00010885bc98();
    if (lVar5 == 0) {
      func_0x00010885c210();
      func_0x00010885c064();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
      func_0x00010885c4c4();
      FUN_10865aaac();
      func_0x00010885bdf4();
      func_0x00010885c940();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10885a3ac);
      (*pcVar2)();
    }
    func_0x00010885c728(*(undefined8 *)(unaff_x19 + 0x20));
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010885b89c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = unaff_x19 + 0x28;
  FUN_1086cc64c(lVar5);
  FUN_1087522bc(unaff_x19 + 0x10,lVar5);
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc10();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885a40c; end: 10885a44b;  */

void FUN_10885a40c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010885bbf0();
  func_0x00010885bc10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885a44c; end: 10885a4d3;  */

void FUN_10885a44c(long param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)(param_1 + 0x20);
  FUN_1086cc64c();
  uVar3 = *puVar1;
  *(ulong *)(param_1 + 0x38) = uVar3;
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc98();
  if (uVar3 >> 0x20 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x38);
    FUN_1086cc694();
    FUN_10884f464(*puVar2);
    func_0x00010885be68();
  }
  else {
    func_0x00010885bd84();
  }
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885a4d4; end: 10885a4fb;  */

void FUN_10885a4d4(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bc98();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885a4fc; end: 10885a933;  */

void FUN_10885a4fc(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  undefined1 in_ZR;
  char cVar7;
  long *plVar8;
  ulong *puVar9;
  byte *pbVar10;
  int iVar11;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long *plVar12;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long *extraout_x9;
  long lVar13;
  uint extraout_w10;
  int extraout_w10_00;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  
  plVar8 = param_1;
  func_0x00010885ba64();
  puVar1 = (ulong *)(plVar8 + 0x4d);
  puVar2 = (ulong *)(plVar8 + 0x57);
  func_0x00010885b6f0();
  do {
    puVar9 = puVar1;
    FUN_108850730();
    plVar14 = (long *)*puVar9;
    func_0x000107c27f9c(puVar1);
    func_0x00010885bd8c();
    if (((ulong)plVar14 >> 0x20 & 1) == 0) {
      func_0x00010885b8c8();
      func_0x00010885c584();
LAB_10885a738:
      pbVar10 = (byte *)(param_1 + 2);
      FUN_1088506d4(pbVar10);
      func_0x00010885bd7c();
LAB_10885a7b8:
      func_0x00010885c634();
      goto LAB_10885a7bc;
    }
    FUN_10885052c(puVar1,param_1 + 0x45);
    pbVar10 = (byte *)(param_1 + 0x49);
    func_0x000108826720(pbVar10,puVar1);
    param_1[0x4c] = param_1[0x50];
    func_0x00010885c5a8();
    func_0x00010885bd7c();
    bVar3 = *(byte *)((long)param_1 + 0x2db);
    plVar12 = (long *)param_1[0x59];
    iVar11 = *(int *)((long)param_1 + 0x2d4) + 1;
    in_ZR = (*(byte *)((long)param_1 + 0x2da) & 0 < (long)plVar12) == 0;
    cVar6 = '\0';
    cVar7 = '\0';
    if ((bool)in_ZR) {
      plVar12 = (long *)0x7fffffffffffffff;
    }
    *(int *)((long)param_1 + 0x2d4) = iVar11;
    *(int *)(param_1 + 0x5a) = (int)plVar14;
    *(undefined1 *)((long)param_1 + 0x2d9) = 1;
    if (((*(uint *)(param_1 + 0x55) & 1) == 0) || (func_0x00010885c3fc(), cVar6 == cVar7)) {
LAB_10885a7a4:
      func_0x00010885b8c8();
      plVar14 = param_1 + 0x51;
      FUN_108850430();
      func_0x00010885c8b4();
      goto LAB_10885a7b8;
    }
    pbVar10 = (byte *)(param_1[0x58] + 0x60);
    func_0x000107c289e8();
    if ((*pbVar10 & 1) == 0) {
      func_0x00010885bdc0((char)param_1[0x44]);
      if ((extraout_x8_01 & 1) == 0) {
        func_0x00010885ca80();
      }
      goto LAB_10885a7a4;
    }
    pbVar10 = *(byte **)(param_1[0x58] + 0xb0);
    func_0x00010885c000(param_1 + 4,pbVar10,param_1[0x58] + 0x28);
    if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
      func_0x00010885bdc0((char)param_1[0x44]);
      uVar15 = extraout_x8_02;
joined_r0x00010885a778:
      if ((uVar15 & 1) == 0) {
        func_0x00010885ca80();
      }
      func_0x00010885bd7c();
      goto LAB_10885a7a4;
    }
    if ((*(byte *)(param_1 + 0x35) & 1) == 0) {
      func_0x00010885bbc0();
      func_0x00010885ca2c();
LAB_10885a794:
      func_0x00010885c560();
      uVar15 = extraout_x8_03;
      goto joined_r0x00010885a778;
    }
    func_0x00010885c5f8();
    plVar14 = extraout_x9;
    if ((extraout_w8 & extraout_w10) == 0) {
      plVar14 = (long *)0x7fffffffffffffff;
    }
    in_ZR = plVar14 == plVar12;
    if ((bool)in_ZR) {
      func_0x00010885bbc0();
      func_0x00010885ca18();
      goto LAB_10885a794;
    }
    in_ZR = true;
    if (((long)plVar12 <= (long)plVar14 & bVar3) == 1) {
LAB_10885a718:
      func_0x00010885b8c8();
      func_0x00010885c584();
      plVar14 = (long *)0x0;
      goto LAB_10885a738;
    }
    *(byte *)((long)param_1 + 0x2db) = (long)plVar12 < (long)plVar14 | bVar3 & 1;
    in_ZR = iVar11 == 3;
    if ((bool)in_ZR) goto LAB_10885a718;
    pbVar10 = (byte *)param_1[0x58];
    FUN_10884fa48(puVar2);
    *puVar1 = *puVar2;
    do {
      func_0x00010885b868();
    } while (extraout_w10_00 != 0);
    func_0x00010885bc30(*puVar1);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x5b) = 0;
      uVar15 = *puVar1;
      lVar16 = *plVar8;
      if (lVar16 == 0) {
        func_0x000107c3a5c0();
        lVar16 = *(long *)pbVar10;
      }
      plVar12 = (long *)(uVar15 + 0x10);
      do {
        lVar13 = *plVar12;
        if (lVar13 == 0) {
          cVar6 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          in_ZR = cVar6 == '\0';
          if ((bool)in_ZR) {
            func_0x00010885b9b8();
            if ((bool)in_ZR) {
              func_0x00010885b88c();
              func_0x00010885b900();
              func_0x00010885b7f4();
              *(byte **)(uVar15 + 0x90) = pbVar10;
            }
            func_0x00010885b9a8();
            *(long *)(extraout_x8_00 + 0x20) = lVar16;
            func_0x00010885b8ac(*(undefined8 *)(uVar15 + 0x90));
            *(undefined8 *)(uVar15 + 0x10) = 0;
            func_0x00010885b878(extraout_x8);
            if (!(bool)in_ZR) {
              do {
                ___stack_chk_fail();
                iVar11 = (int)plVar14;
                if (iVar11 == 0) {
                  do {
                    func_0x00010885c598();
                    func_0x00010885c8a0();
                    iVar11 = (int)plVar14;
                  } while (iVar11 == 0);
                }
                else {
                  func_0x00010885bd7c();
                }
                func_0x00010885c634();
                in_ZR = iVar11 == 4;
                if ((bool)in_ZR) {
                  func_0x00010885bd18();
                  func_0x00010885c8a8();
                  ___cxa_end_catch();
                }
                else {
                  in_ZR = iVar11 == 3;
                  if ((bool)in_ZR) {
                    lVar16 = param_1[0x58];
                    func_0x00010885bd18();
                    plVar14 = *(long **)(lVar16 + 0xc0);
                    func_0x00010885c120(plVar14,0x26f,param_1 + 0x51,pbVar10);
                    pbVar10 = (byte *)(param_1 + 2);
                    FUN_1088506d4();
                    ___cxa_end_catch();
                  }
                  else {
                    in_ZR = iVar11 == 2;
                    if ((bool)in_ZR) {
                      lVar16 = param_1[0x58];
                      func_0x00010885bd18();
                      func_0x00010885ba00(*(undefined8 *)(lVar16 + 0xc0),0x26f);
                      ___cxa_rethrow();
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10885a8f4);
                      (*pcVar5)();
                    }
                    func_0x00010885bd18();
                    func_0x00010885bc00();
                    ___cxa_end_catch();
                  }
                }
LAB_10885a7bc:
                func_0x00010885bbf0();
                func_0x00010885b878(extraout_x8);
              } while (!(bool)in_ZR);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(param_1);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 10885a934; end: 10885a96b;  */

void FUN_10885a934(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x268);
  func_0x000107c27f9c(param_1 + 0x2b8);
  func_0x00010885bd7c();
  func_0x00010885c634();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885a96c; end: 10885a9f3;  */

void FUN_10885a96c(long param_1)

{
  long unaff_x21;
  undefined4 uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_10885507c();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)param_1 != 0) {
      func_0x00010885c838();
      func_0x00010885c804(unaff_x21 + 0x98);
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885a9f4; end: 10885aa17;  */

void FUN_10885a9f4(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885aa18; end: 10885ab3f;  */

void FUN_10885aa18(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  long unaff_x21;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885c1f8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca0c();
    FUN_108854f3c();
    func_0x00010885c0fc();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x48));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      func_0x00010885b6f0();
      unaff_x21 = *param_1;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *param_1;
      }
      func_0x00010885bcd8();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010885b89c();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar2 = unaff_x19 + 0x48;
  FUN_10885507c();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)lVar2 != 0) {
      func_0x00010885c838();
      FUN_10882664c(unaff_x21 + 0x98);
      func_0x00010885b744();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bd38();
  func_0x00010885bcc4();
  func_0x00010885bbf0();
  func_0x000107c288ac(unaff_x19 + 0x40);
  func_0x00010885bc18();
  return;
}



/* Entry: 10885ab40; end: 10885ab73;  */

void FUN_10885ab40(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010885c190();
  if ((bool)in_ZR) {
    func_0x00010885bd38();
    func_0x00010885bcc4();
  }
  func_0x00010885bbf0();
  func_0x000107c288ac(unaff_x19 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885ab74; end: 10885ae03;  */

void FUN_10885ab74(long param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  ulong uVar5;
  long extraout_x8_00;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = (long *)(param_1 + 0x40);
  FUN_10885507c();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x00010885c474();
  func_0x00010885c99c();
  func_0x0001052c2468(&lStack_70);
  func_0x00010885c540();
  lVar10 = *(long *)(param_1 + 0x20);
  __ZNSt3__15mutex4lockEv(lVar10 + 0x58);
  plVar7 = *(long **)(param_1 + 0x20);
  if ((char)plVar7[4] == '\x01') {
    bVar2 = *(byte *)(plVar3 + 3);
    if (((*(byte *)(plVar7 + 3) & 1) == 0) && (bVar2 != 0)) {
      FUN_10882b798(&lStack_70,plVar3);
      plVar7[1] = lStack_68;
      *plVar7 = lStack_70;
      plVar7[2] = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      *(undefined1 *)(plVar7 + 3) = 1;
      func_0x0001052c2794(&lStack_70);
    }
    else if (*(byte *)(plVar7 + 3) == 0) {
      if ((bVar2 & 1) == 0) {
        *(int *)plVar7 = (int)*plVar3;
      }
    }
    else if (bVar2 == 0) {
      func_0x0001052c2794(plVar7);
      *(int *)plVar7 = (int)*plVar3;
      *(undefined1 *)(plVar7 + 3) = 0;
    }
    else if (plVar7 != plVar3) {
      lVar4 = *plVar3;
      lVar1 = plVar3[1];
      uVar5 = lVar1 - lVar4;
      lVar8 = (long)uVar5 / 0x48;
      if ((ulong)(plVar7[2] - *plVar7) < uVar5) {
        func_0x000108826754(plVar7);
        plVar3 = plVar7;
        FUN_1088537c8(plVar7,lVar8);
        FUN_10882b824(plVar7,plVar3);
        lVar9 = lVar4;
      }
      else {
        uVar6 = plVar7[1] - *plVar7;
        if (uVar5 <= uVar6) {
          FUN_1088554f4(lVar4,lVar1);
          func_0x0001052c2804(plVar7,lVar4);
          goto LAB_10885ac38;
        }
        lVar9 = lVar4 + uVar6;
        FUN_1088554f4(lVar4,lVar9);
        func_0x00010885c6ec(plVar7[1]);
        lVar8 = extraout_x8_00 + lVar8;
      }
      FUN_10882b86c(plVar7,lVar9,lVar1,lVar8);
    }
  }
  else {
    FUN_1088550d8(plVar7,plVar3);
    *(undefined1 *)(plVar7 + 4) = 1;
  }
LAB_10885ac38:
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0xa0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar10 + 0x58);
  if (lVar8 == 0) {
    func_0x00010885c520(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010885c9dc();
    (*extraout_x8)(lVar8,param_1 + 0x20);
    func_0x00010885ba24();
  }
  func_0x00010885c684();
  func_0x00010885bdb8();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885ae04; end: 10885ae2b;  */

void FUN_10885ae04(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885ae2c; end: 10885af17;  */

void FUN_10885ae2c(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *plVar2;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010885c204();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010885ca00();
    FUN_1088551a4();
    func_0x00010885bd40();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885bc30(*(undefined8 *)(unaff_x19 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010885c628();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010885b89c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885c994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885af18; end: 10885af47;  */

void FUN_10885af18(void)

{
  undefined1 in_ZR;
  
  func_0x00010885c1a0();
  if ((bool)in_ZR) {
    func_0x00010885bcc4();
    func_0x00010885bd08();
  }
  func_0x00010885bbf0();
  func_0x00010885c994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885af48; end: 10885b02b;  */

void FUN_10885af48(undefined8 param_1)

{
  func_0x00010885bf10();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bd84();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885b02c; end: 10885b04f;  */

void FUN_10885b02c(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b050; end: 10885b09f;  */

void FUN_10885b050(undefined8 param_1)

{
  func_0x00010885c26c();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10885b0a0; end: 10885b0c3;  */

void FUN_10885b0a0(void)

{
  func_0x00010885b910();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b0c4; end: 10885b1b3;  */

void FUN_10885b0c4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar2;
  undefined4 extraout_w8_02;
  undefined4 extraout_w8_03;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x19;
  
  func_0x00010885bf88();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010885c554();
    FUN_108854a70();
    func_0x00010885bb94();
    do {
      func_0x00010885b868();
    } while (extraout_w10 != 0);
    func_0x00010885baa4();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      func_0x00010885c058();
      func_0x00010885b6f0();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010885bcd8();
      uVar2 = extraout_w8_01;
      uVar3 = extraout_var;
      do {
        if (*(long *)CONCAT44(uVar3,uVar2) == 0) {
          func_0x00010885b89c();
          uVar2 = extraout_w8_03;
          uVar3 = extraout_var_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010885bc8c();
          uVar2 = extraout_w8_02;
          uVar3 = extraout_var_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010885b774();
          if ((bool)in_ZR) {
            func_0x00010885b88c();
            func_0x00010885b700();
            func_0x00010885b6a4();
          }
          func_0x00010885b678();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_108850730(unaff_x19 + 0x30);
  func_0x00010885c2c4();
  func_0x00010885bc98();
  func_0x00010885bcbc();
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b1b4; end: 10885b1e3;  */

void FUN_10885b1b4(void)

{
  undefined1 in_ZR;
  
  func_0x00010885bd6c();
  if ((bool)in_ZR) {
    func_0x00010885bc98();
    func_0x00010885bcbc();
  }
  func_0x00010885bbf0();
  func_0x00010885be10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885b1e4; end: 10885b27f;  */

void FUN_10885b1e4(long param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x22;
  uint uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_10885318c();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xa4) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xa4) = 0;
      }
      uVar1 = *unaff_x22;
      *(undefined4 *)(unaff_x21 + 0xa0) = *(undefined4 *)(unaff_x22 + 1);
      *(undefined8 *)(unaff_x21 + 0x98) = uVar1;
      *(undefined1 *)(unaff_x21 + 0xa4) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}


