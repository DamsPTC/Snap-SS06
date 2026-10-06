/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108677aa8; end: 108677acf;  */

void FUN_108677aa8(void)

{
  func_0x000108678914();
  func_0x000108678800();
  func_0x000108678700();
  func_0x000108678810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677ad0; end: 108677b2b;  */

void FUN_108677ad0(long param_1)

{
  func_0x000107c28834(param_1 + 0x48);
  func_0x000108678828();
  func_0x000108678800();
  func_0x000108678810();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677b2c; end: 108677b53;  */

void FUN_108677b2c(void)

{
  func_0x000108678914();
  func_0x000108678800();
  func_0x000108678810();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677b54; end: 108677b9f;  */

void FUN_108677b54(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677ba0; end: 108677bc3;  */

void FUN_108677ba0(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677bc4; end: 108677ccb;  */

void FUN_108677bc4(long param_1)

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
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108677440(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    do {
      func_0x000107c31f38();
    } while (extraout_w10 != 0);
    func_0x000107c31f90(*(undefined8 *)(param_1 + 0x58));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      func_0x000107c31f28();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31fa8();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31f40();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010867877c();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c31f30();
          if ((bool)in_ZR) {
            func_0x000108678648();
            func_0x000108678618();
            func_0x0001086785b8();
          }
          func_0x000107c31f10();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x58);
  func_0x000108678920();
  func_0x000108678980();
  func_0x000108678728();
  func_0x000108678700();
  func_0x000108678898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677ccc; end: 108677d03;  */

void FUN_108677ccc(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000108678920();
    func_0x000108678980();
  }
  func_0x000108678700();
  func_0x000108678898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677d04; end: 108677e73;  */

void FUN_108677d04(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long extraout_x8;
  int extraout_w10;
  long unaff_x21;
  long lVar9;
  
  plVar6 = param_1;
  func_0x000107c31f28();
  do {
    pbVar1 = (byte *)(param_1[0xc] + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    lVar9 = param_1[0xc];
    lVar8 = *(long *)(lVar9 + 0xe8);
    if (lVar8 == 0) {
      pbVar2 = (byte *)(lVar9 + 0xb8);
      lVar9 = param_1[0xc];
      if ((*pbVar2 & 1) == 0) {
        lVar8 = *(long *)(lVar9 + 0xe8);
        goto LAB_108677d74;
      }
      func_0x000107c314e4(lVar9 + 0x58);
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0x17) = 0;
    }
    else {
LAB_108677d74:
      func_0x000108678788(lVar8);
      FUN_108676510(unaff_x21);
      func_0x000107c314e4(lVar9 + 0x10);
      func_0x000108678988();
      *(undefined1 *)(param_1 + 0x17) = 1;
      func_0x000108678810();
    }
    *pbVar1 = 0;
    func_0x0001086788f4();
    if ((char)param_1[0x17] != '\x01') {
      func_0x00010867886c();
      func_0x000108678728();
      func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_1);
      return;
    }
    func_0x00010867883c();
    func_0x0001086788dc();
    func_0x000108678974();
    func_0x000108678968();
    func_0x0001086788cc();
    func_0x000108678898();
    func_0x000108677350(param_1 + 0xb);
    func_0x0001086788ec();
    func_0x000107c27f9c(param_1 + 0x1e);
    func_0x00010867886c();
    func_0x000107c3203c();
    if (extraout_x8 != 0) {
      do {
        func_0x000107c31f38();
      } while (extraout_w10 != 0);
    }
    plVar7 = param_1 + 0xb;
    func_0x000107c314f0();
    if (((ulong)plVar7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      unaff_x21 = param_1[0xb];
      if (*plVar6 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31ff8();
      if (((ulong)plVar7 & 1) != 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 108677e74; end: 108677e9b;  */

void FUN_108677e74(long param_1)

{
  func_0x000107c28a3c(param_1 + 0x60);
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677e9c; end: 108677f1f;  */

void FUN_108677e9c(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677f20; end: 108677f43;  */

void FUN_108677f20(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677f44; end: 108677f8f;  */

void FUN_108677f44(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677f90; end: 108677fe7;  */

void FUN_108677f90(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677fe8; end: 10867810f;  */

void FUN_108677fe8(long *param_1)

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
  
  func_0x000107c32038();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010867876c();
    func_0x000108678710();
    func_0x000108678708();
    func_0x0001086789bc();
    FUN_108672448(unaff_x19 + 0x28);
    func_0x000107c31f54();
    do {
      func_0x000107c31f38();
    } while (extraout_w10 != 0);
    func_0x000107c31f50();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x000107c32010();
      func_0x0001086785f4();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31fa8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31f40();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010867877c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c31f30();
          if ((bool)in_ZR) {
            func_0x000108678648();
            func_0x000108678618();
            func_0x0001086785b8();
          }
          func_0x000107c31f10();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108678110; end: 108678133;  */

void FUN_108678110(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108678134; end: 10867817f;  */

void FUN_108678134(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108678180; end: 1086781a3;  */

void FUN_108678180(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086781a4; end: 10867829b;  */

void FUN_1086781a4(void)

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
  
  func_0x000107c31fe8();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108676c88(unaff_x19 + 0x38);
    func_0x000107c3200c();
    do {
      func_0x000107c31f38();
    } while (extraout_w10 != 0);
    func_0x000107c31f90(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x000107c31f28();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31fa8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31f40();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010867877c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c31f30();
          if ((bool)in_ZR) {
            func_0x000108678648();
            func_0x000108678618();
            func_0x0001086785b8();
          }
          func_0x000107c31f10();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010867894c();
  func_0x0001086787c4();
  func_0x000108678818();
  func_0x000108678728();
  func_0x000108678700();
  func_0x000108678864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867829c; end: 1086782cf;  */

void FUN_10867829c(void)

{
  int extraout_w8;
  
  func_0x000107c31fe8();
  if (extraout_w8 == 1) {
    func_0x0001086787c4();
    func_0x000108678818();
  }
  func_0x000108678700();
  func_0x000108678864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086782d0; end: 1086783f7;  */

void FUN_1086782d0(long *param_1)

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
  
  func_0x000107c32038();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010867876c();
    func_0x000108678710();
    func_0x000108678708();
    func_0x0001086789bc();
    FUN_1086729d4(unaff_x19 + 0x28);
    func_0x000107c31f54();
    do {
      func_0x000107c31f38();
    } while (extraout_w10 != 0);
    func_0x000107c31f50();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x000107c32010();
      func_0x0001086785f4();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31fa8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31f40();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010867877c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c31f30();
          if ((bool)in_ZR) {
            func_0x000108678648();
            func_0x000108678618();
            func_0x0001086785b8();
          }
          func_0x000107c31f10();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086783f8; end: 10867841b;  */

void FUN_1086783f8(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867841c; end: 108678467;  */

void FUN_10867841c(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108678468; end: 10867848b;  */

void FUN_108678468(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867848c; end: 108678583;  */

void FUN_10867848c(void)

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
  
  func_0x000107c31fe8();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_108676fe4(unaff_x19 + 0x38);
    func_0x000107c3200c();
    do {
      func_0x000107c31f38();
    } while (extraout_w10 != 0);
    func_0x000107c31f90(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x000107c31f28();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c31fa8();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000107c31f40();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010867877c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000107c31f30();
          if ((bool)in_ZR) {
            func_0x000108678648();
            func_0x000108678618();
            func_0x0001086785b8();
          }
          func_0x000107c31f10();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x00010867894c();
  func_0x0001086787c4();
  func_0x000108678818();
  func_0x000108678728();
  func_0x000108678700();
  func_0x000108678864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108678584; end: 1086785b7;  */

void FUN_108678584(void)

{
  int extraout_w8;
  
  func_0x000107c31fe8();
  if (extraout_w8 == 1) {
    func_0x0001086787c4();
    func_0x000108678818();
  }
  func_0x000108678700();
  func_0x000108678864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086785b8; end: 1086789db;  */

void FUN_1086785b8(undefined1 *param_1)

{
  long unaff_x20;
  long unaff_x22;
  undefined1 unaff_w23;
  
  *param_1 = unaff_w23;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(unaff_x22 + 8) = param_1;
  *(undefined1 **)(unaff_x20 + 0x90) = param_1;
  return;
}



/* Entry: 1086789dc; end: 108679037;  */

undefined8 FUN_1086789dc(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 in_x7;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  byte bStack_1a0;
  long lStack_198;
  long lStack_190;
  byte bStack_180;
  undefined1 auStack_178 [24];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  long lStack_118;
  long lStack_110;
  byte bStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte bStack_c8;
  long lStack_c0;
  long lStack_b8;
  byte bStack_a8;
  undefined8 *****pppppuStack_a0;
  long lStack_98;
  char cStack_89;
  byte bStack_88;
  long lStack_80;
  long lStack_78;
  
  ppuVar15 = &PTR_PTR_11327fd48;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar15 = *(undefined ***)(param_1 + 0x20);
  }
  ppuVar2 = &PTR_PTR_113280278;
  if ((undefined **)ppuVar15[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar15[3];
  }
  if (*(int *)((long)ppuVar2 + 0x1c) == 7) {
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x28);
    }
    if ((((ulong)ppuVar1[2] & 1) == 0) || (*(int *)(ppuVar1[0xd] + 0x1c) != 7)) {
      uVar19 = 1;
    }
    else {
      if (*(int *)(ppuVar15 + 5) == 1) {
        ppuVar1 = &PTR_PTR_11326cb58;
        if (*(undefined ***)(ppuVar15[4] + 0x18) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(ppuVar15[4] + 0x18);
        }
        lVar17 = (long)*(char *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 0x17);
        if (lVar17 < 0) {
          lVar17 = *(long *)(((ulong)ppuVar1[2] & 0xfffffffffffffffc) + 8);
        }
        if (lVar17 == 0x10) {
          puVar21 = ppuVar2[2];
          uVar7 = *(undefined4 *)(puVar21 + 0x20);
          func_0x000100696384(auStack_178);
          ppuVar15 = &PTR_PTR_11326cb58;
          if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
            ppuVar15 = *(undefined ***)(param_1 + 0x18);
          }
          lVar17 = (long)*(char *)(((ulong)ppuVar15[2] & 0xfffffffffffffffc) + 0x17);
          if (lVar17 < 0) {
            lVar17 = *(long *)(((ulong)ppuVar15[2] & 0xfffffffffffffffc) + 8);
          }
          if (lVar17 == 0x10) {
            plVar13 = *(long **)(param_2 + 0x18);
            lStack_160 = CONCAT44(lStack_160._4_4_,uVar7);
            if (plVar13 == (long *)0x0) {
              func_0x000104bfeb48();
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x108678f40);
              (*pcVar12)();
            }
            (**(code **)(*plVar13 + 0x30))(&lStack_198,plVar13,auStack_178,&lStack_160);
            if ((bStack_180 & 1) == 0) {
              uVar19 = 2;
            }
            else {
              ppuVar15 = &PTR_PTR_113280c30;
              if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x28);
              }
              ppuVar2 = &PTR_PTR_113280bc8;
              if ((undefined **)ppuVar15[0xd] != (undefined **)0x0) {
                ppuVar2 = (undefined **)ppuVar15[0xd];
              }
              if (*(int *)((long)ppuVar2 + 0x1c) == 7) {
                ppuVar15 = (undefined **)ppuVar2[2];
              }
              else {
                ppuVar15 = &PTR_PTR_1132807d0;
              }
              puVar20 = (undefined8 *)((ulong)ppuVar15[3] & 0xfffffffffffffffc);
              bVar8 = *(byte *)((long)puVar20 + 0x17);
              puVar6 = (undefined8 *)*puVar20;
              uVar14 = puVar20[1];
              ppuVar15 = &PTR_PTR_11326cb58;
              if (*(undefined ***)(param_1 + 0x18) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x18);
              }
              func_0x000100696384(&lStack_1d0,ppuVar15);
              if (-1 < (char)bVar8) {
                uVar14 = (ulong)bVar8;
              }
              ppuVar15 = &PTR_PTR_113280c30;
              if (*(undefined ***)(param_1 + 0x28) != (undefined **)0x0) {
                ppuVar15 = *(undefined ***)(param_1 + 0x28);
              }
              puVar18 = (undefined8 *)(*(ulong *)(puVar21 + 0x10) & 0xfffffffffffffffc);
              bVar9 = *(byte *)((long)puVar18 + 0x17);
              uVar3 = puVar18[1];
              if (-1 < (char)bVar9) {
                uVar3 = (ulong)bVar9;
              }
              puVar16 = (undefined8 *)((ulong)ppuVar15[0xc] & 0xfffffffffffffffc);
              puVar4 = (undefined8 *)*puVar18;
              if (-1 < (char)bVar9) {
                puVar4 = puVar18;
              }
              puVar18 = (undefined8 *)*puVar16;
              uVar10 = puVar16[1];
              if (-1 < (char)*(byte *)((long)puVar16 + 0x17)) {
                puVar18 = puVar16;
                uVar10 = (ulong)*(byte *)((long)puVar16 + 0x17);
              }
              lStack_160 = 0;
              lStack_158 = 0;
              uStack_150 = 0;
              func_0x00010089a97c(&lStack_160,uVar14 + (lStack_190 - lStack_198) + 0x19);
              if (-1 < (char)bVar8) {
                puVar6 = puVar20;
              }
              FUN_108679bc0(&lStack_160,puVar6,uVar14);
              FUN_108679bc0(&lStack_160,lStack_1d0,lStack_1c8 - lStack_1d0);
              FUN_108679bc0(&lStack_160,lStack_198,lStack_190 - lStack_198);
              func_0x000107c27994(&lStack_80,&lStack_160);
              func_0x000107c27914(&lStack_160);
              func_0x000107c278b8(&pppppuStack_a0,&UNK_10f4afef1);
              ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
              if (-1 < (long)cStack_89) {
                ppppppuVar5 = &pppppuStack_a0;
              }
              lVar17 = lStack_98;
              if (-1 < cStack_89) {
                lVar17 = (long)cStack_89;
              }
              FUN_108679038(&lStack_160,lStack_80,lStack_78 - lStack_80,ppppppuVar5,lVar17,0x10);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_a0);
              if ((bStack_148 & 1) == 0) {
                func_0x0001086791d8();
              }
              else {
                func_0x000107c278b8(&lStack_c0,&UNK_10f4aff05);
                FUN_1086791c0(&pppppuStack_a0);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_c0);
                if ((bStack_88 & 1) == 0) {
                  func_0x0001086791d8();
                }
                else {
                  func_0x000107c278b8(&lStack_e0,&UNK_10f4aff13);
                  FUN_1086791c0(&lStack_c0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e0);
                  lVar11 = lStack_158;
                  lVar17 = lStack_160;
                  if ((bStack_a8 & 1) == 0) {
                    func_0x0001086791d8();
                  }
                  else {
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_e8 = 0;
                    FUN_108679b90(&uStack_f8,uVar7);
                    func_0x000107c27994(&lStack_118,&uStack_f8);
                    FUN_1086790fc(&lStack_e0,lVar17,lVar11 - lVar17,lStack_c0,lStack_b8 - lStack_c0,
                                  puVar4,uVar3,in_x7,lStack_118,lStack_110 - lStack_118);
                    func_0x000107c27914(&lStack_118);
                    func_0x0001086791d0();
                    if ((bStack_c8 & 1) == 0) {
                      func_0x0001086791d8();
                    }
                    else {
                      uStack_f8 = 0;
                      uStack_f0 = 0;
                      uStack_e8 = 0;
                      FUN_1086790fc(&lStack_118,lStack_e0,lStack_d8 - lStack_e0,pppppuStack_a0,
                                    lStack_98 - (long)pppppuStack_a0,puVar18,uVar10,in_x7,0,0);
                      func_0x0001086791d0();
                      if ((bStack_100 & 1) == 0) {
                        func_0x0001086791d8();
                      }
                      else {
                        func_0x000104be0ccc(&lStack_1b8,&lStack_118);
                      }
                      func_0x000107c279c4(&lStack_118);
                    }
                    func_0x000107c279c4(&lStack_e0);
                  }
                  func_0x000107c279c4(&lStack_c0);
                }
                func_0x000107c279c4(&pppppuStack_a0);
              }
              func_0x000107c279c4(&lStack_160);
              func_0x000107c27914(&lStack_80);
              func_0x000107c27914(&lStack_1d0);
              if ((bStack_1a0 & 1) == 0) {
                uVar19 = 5;
              }
              else {
                lVar17 = param_1;
                FUN_108653db8();
                uVar14 = *(ulong *)(lVar17 + 8);
                if ((uVar14 & 1) != 0) {
                  uVar14 = *(ulong *)(uVar14 & 0xfffffffffffffffe);
                }
                func_0x00010539283c(lVar17 + 0x60,lStack_1b8,lStack_1b0 - lStack_1b8,uVar14);
                FUN_108653db8(param_1);
                FUN_1086679f0();
                FUN_108667a24(param_1);
                FUN_1089076f4();
                uVar19 = 0;
              }
              func_0x000107c279c4(&lStack_1b8);
            }
            func_0x000107c279c4(&lStack_198);
          }
          else {
            FUN_108679188(&lStack_160,3);
            func_0x0001086791e4(*(undefined8 *)(*param_3 + 0x10));
            uVar19 = 4;
          }
          func_0x000107c27914(auStack_178);
          return uVar19;
        }
      }
      uVar19 = 2;
    }
  }
  else {
    uVar19 = 0;
  }
  FUN_108679188(&lStack_160,uVar19);
  func_0x0001086791e4(*(undefined8 *)(*param_3 + 0x10));
  return 4;
}



/* Entry: 108679038; end: 1086790fb;  */

void FUN_108679038(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = &lStack_70;
  func_0x000107c27fdc(plVar3,param_6);
  lVar2 = lStack_68;
  lVar4 = lStack_70;
  func_0x000107c2b428();
  func_0x00010ae41fc0(lVar4,lVar2 - lVar4,plVar3,param_2,param_3,&UNK_10df40d94,0x20,param_4,param_5
                     );
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[2] = lStack_60;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_70 = 0;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  func_0x000107c27914(&lStack_70);
  return;
}



/* Entry: 1086790fc; end: 108679187;  */

void FUN_1086790fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [6];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = param_9;
  uStack_90 = param_10;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x00010bcd5604(auStack_58,&uStack_68,&uStack_78);
  puVar1 = auStack_58;
  puVar3 = &uStack_88;
  func_0x00010bcd58e8(param_1,puVar1,puVar3,&uStack_98);
  uVar2 = (uint)puVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001086efe58();
  *puVar1 = &PTR_DAT_110a61b30;
  lVar4 = puVar1[8];
  if (lVar4 != 3) {
    puVar1[8] = lVar4 + 1;
    *(undefined1 *)((long)puVar1 + lVar4 * 0x10 + 0xc) = 1;
    puVar1[lVar4 * 2 + 2] = (ulong)(uVar2 | 0x40);
    if ((*(byte *)(puVar1 + lVar4 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(puVar1 + lVar4 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 108679188; end: 1086791bf;  */

void FUN_108679188(undefined8 *param_1,uint param_2)

{
  long lVar1;
  
  func_0x0001086efe58(param_1,10);
  *param_1 = &PTR_DAT_110a61b30;
  lVar1 = param_1[8];
  if (lVar1 != 3) {
    param_1[8] = lVar1 + 1;
    *(undefined1 *)((long)param_1 + lVar1 * 0x10 + 0xc) = 1;
    param_1[lVar1 * 2 + 2] = (ulong)(param_2 | 0x40);
    if ((*(byte *)(param_1 + lVar1 * 2 + 3) & 1) == 0) {
      *(undefined1 *)(param_1 + lVar1 * 2 + 3) = 1;
    }
  }
  return;
}



/* Entry: 1086791c0; end: 1086791ef;  */

void FUN_1086791c0(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  plVar3 = &lStack_70;
  func_0x000107c27fdc(plVar3,0xc);
  lVar2 = lStack_68;
  lVar4 = lStack_70;
  func_0x000107c2b428();
  func_0x00010ae41fc0(lVar4,lVar2 - lVar4,plVar3);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[2] = lStack_60;
    lStack_68 = 0;
    lStack_60 = 0;
    lStack_70 = 0;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  func_0x000107c27914(&lStack_70);
  return;
}



/* Entry: 1086791f0; end: 108679233;  */

void FUN_1086791f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  long *extraout_x8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_c8;
  undefined8 uStack_28;
  
  func_0x000108679a7c();
  func_0x000108679abc();
  func_0x000108679a94();
  func_0x000108679b00();
  func_0x00010bcd58d4();
  func_0x0001086799ac(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x000108679a7c();
    func_0x000108679abc();
    func_0x000108679a94();
    func_0x000108679b00();
    func_0x00010bcd58e8();
    func_0x0001086799ac(uStack_c8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      plVar3 = &lStack_1c0;
      func_0x000107c27fdc(plVar3,param_7);
      lVar2 = lStack_1b8;
      lVar4 = lStack_1c0;
      func_0x000107c2b428();
      func_0x00010ae41fc0(lVar4,lVar2 - lVar4,plVar3,param_1,param_2,param_5,param_6,param_3,param_4
                         );
      bVar1 = (int)lVar4 == 0;
      if (bVar1) {
        *(undefined1 *)extraout_x8 = 0;
      }
      else {
        extraout_x8[1] = lStack_1b8;
        *extraout_x8 = lStack_1c0;
        extraout_x8[2] = lStack_1b0;
        lStack_1b8 = 0;
        lStack_1b0 = 0;
        lStack_1c0 = 0;
      }
      *(bool *)(extraout_x8 + 3) = !bVar1;
      func_0x000108679af8();
      return;
    }
  }
  return;
}



/* Entry: 108679234; end: 108679277;  */

void FUN_108679234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  long *extraout_x8;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_28;
  
  func_0x000108679a7c();
  func_0x000108679abc();
  func_0x000108679a94();
  func_0x000108679b00();
  func_0x00010bcd58e8();
  func_0x0001086799ac(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar3 = &lStack_120;
  func_0x000107c27fdc(plVar3,param_7);
  lVar2 = lStack_118;
  lVar4 = lStack_120;
  func_0x000107c2b428();
  func_0x00010ae41fc0(lVar4,lVar2 - lVar4,plVar3,param_1,param_2,param_5,param_6,param_3,param_4);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)extraout_x8 = 0;
  }
  else {
    extraout_x8[1] = lStack_118;
    *extraout_x8 = lStack_120;
    extraout_x8[2] = lStack_110;
    lStack_118 = 0;
    lStack_110 = 0;
    lStack_120 = 0;
  }
  *(bool *)(extraout_x8 + 3) = !bVar1;
  func_0x000108679af8();
  return;
}



/* Entry: 108679278; end: 10867932b;  */

void FUN_108679278(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar3 = &lStack_80;
  func_0x000107c27fdc(plVar3,param_8);
  lVar2 = lStack_78;
  lVar4 = lStack_80;
  func_0x000107c2b428();
  func_0x00010ae41fc0(lVar4,lVar2 - lVar4,plVar3,param_2,param_3,param_6,param_7,param_4,param_5);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[1] = lStack_78;
    *param_1 = lStack_80;
    param_1[2] = lStack_70;
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_80 = 0;
  }
  *(bool *)(param_1 + 3) = !bVar1;
  func_0x000108679af8();
  return;
}



/* Entry: 10867932c; end: 1086794df;  */

void FUN_10867932c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ****ppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined8 uStack_38;
  
  func_0x000108679a7c();
  uStack_38 = extraout_x8;
  func_0x000107c2b3b8(auStack_44,0xc);
  ppppuStack_88 = (undefined8 *****)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c30364(param_2,&ppppuStack_88);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar2 = uStack_80;
  pppppuVar3 = (undefined8 *****)ppppuStack_88;
  if (-1 < (long)uStack_78) {
    uVar2 = uStack_78 >> 0x38;
    pppppuVar3 = &ppppuStack_88;
  }
  func_0x000107c2b43c(pppppuVar3,uVar2,&uStack_70);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  lVar1 = (param_3[1] - *param_3) + 0x2c;
  if ((char)param_3[3] == '\0') {
    lVar1 = 0x2c;
  }
  func_0x00010089a97c(&uStack_a0,lVar1);
  func_0x00010089aa04(&uStack_a0,uStack_98,auStack_44,&uStack_38);
  if ((char)param_3[3] == '\x01') {
    func_0x000107316780();
    func_0x0001078a80e0(&uStack_a0,uStack_98,*param_3,param_3[1]);
  }
  func_0x00010089aa04(&uStack_a0,uStack_98,&uStack_70,auStack_50);
  uVar4 = uStack_a0;
  func_0x000107c278b8(auStack_b8,&UNK_10f4aff20);
  func_0x000108679aac();
  uVar5 = extraout_w8 == 0;
  FUN_108679278(param_1,uVar4);
  func_0x000108679a74();
  func_0x000107c27914(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_88);
  func_0x0001086799ac(uStack_38);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000107c27914(&uStack_a0);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_88);
      func_0x000108679a8c();
    } while( true );
  }
  return;
}



/* Entry: 1086794e0; end: 108679523;  */

void FUN_1086794e0(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 *unaff_x21;
  byte bStack_98;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  func_0x000108679a7c();
  uStack_18 = extraout_x8;
  func_0x000107c2b3b8(&uStack_28,0xc);
  func_0x0001086799ac(uStack_18,uStack_28,uStack_20);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086799c0();
  func_0x000108679aac();
  func_0x0001086799f8();
  func_0x000108679a74();
  if ((bStack_98 & 1) == 0) {
    *unaff_x21 = 0;
    unaff_x21[0x18] = 0;
  }
  else {
    func_0x000108679a34();
    if ((bStack_98 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1086795ac);
      (*pcVar1)();
    }
    func_0x000108679ad4();
    FUN_1086791f0();
    func_0x000108679a6c();
  }
  func_0x000108679aa4();
  return;
}



/* Entry: 108679524; end: 1086795cf;  */

void FUN_108679524(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 *unaff_x21;
  undefined8 unaff_x28;
  byte bStack_68;
  
  func_0x0001086799c0();
  func_0x000108679aac();
  uVar1 = extraout_x9;
  if (in_NG == in_OV) {
    uVar1 = unaff_x28;
  }
  uVar2 = extraout_x10;
  if (-1 < (int)extraout_x8) {
    uVar2 = extraout_x8;
  }
  func_0x0001086799f8(param_1,param_2,uVar1,uVar2);
  func_0x000108679a74();
  if ((bStack_68 & 1) == 0) {
    *unaff_x21 = 0;
    unaff_x21[0x18] = 0;
  }
  else {
    func_0x000108679a34();
    if ((bStack_68 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1086795ac);
      (*pcVar3)();
    }
    func_0x000108679ad4();
    FUN_1086791f0();
    func_0x000108679a6c();
  }
  func_0x000108679aa4();
  return;
}



/* Entry: 1086795d0; end: 108679677;  */

void FUN_1086795d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010089a97c(&uStack_58,param_4 + param_6 + 0xd);
  FUN_108679b90(&uStack_58,param_2);
  FUN_108679bc0(&uStack_58,param_3,param_4);
  FUN_108679bc0(&uStack_58,param_5,param_6);
  func_0x000107c27994(param_1,&uStack_58);
  func_0x000108679a6c();
  return;
}



/* Entry: 108679678; end: 108679723;  */

void FUN_108679678(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 *unaff_x21;
  undefined8 unaff_x28;
  byte bStack_68;
  
  func_0x0001086799c0();
  func_0x000108679aac();
  uVar1 = extraout_x9;
  if (in_NG == in_OV) {
    uVar1 = unaff_x28;
  }
  uVar2 = extraout_x10;
  if (-1 < (int)extraout_x8) {
    uVar2 = extraout_x8;
  }
  func_0x0001086799f8(param_1,param_2,uVar1,uVar2);
  func_0x000108679a74();
  if ((bStack_68 & 1) == 0) {
    *unaff_x21 = 0;
    unaff_x21[0x18] = 0;
  }
  else {
    func_0x000108679a34();
    if ((bStack_68 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108679700);
      (*pcVar3)();
    }
    func_0x000108679ad4();
    FUN_108679234();
    func_0x000108679a6c();
  }
  func_0x000108679aa4();
  return;
}



/* Entry: 108679724; end: 1086799ab;  */

void FUN_108679724(long *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 auStack_65 [5];
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  plVar16 = param_1 + 2;
  param_1[3] = 0;
  *plVar16 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  iVar7 = *(int *)(param_2 + 0x30);
  if (0 < iVar7) {
    uVar12 = *(ulong *)(param_2 + 0x28);
    puVar17 = (ulong *)(param_2 + 0x28);
    if ((uVar12 & 1) != 0) {
      puVar17 = (ulong *)(uVar12 + 7);
    }
    puVar11 = (undefined8 *)(*(ulong *)(*puVar17 + 0x30) & 0xfffffffffffffffc);
    lVar13 = (long)*(char *)((long)puVar11 + 0x17);
    lVar15 = lVar13;
    if (lVar13 < 0) {
      lVar15 = puVar11[1];
    }
    if (lVar15 != 0) {
      puVar4 = (undefined8 *)*puVar11;
      lVar15 = puVar11[1];
      if (-1 < *(char *)((long)puVar11 + 0x17)) {
        puVar4 = puVar11;
        lVar15 = lVar13;
      }
      FUN_108657e30(puVar4,lVar15);
      uStack_80 = SUB84(puVar4,0);
      uStack_7c = (undefined1)((ulong)puVar4 >> 0x20);
      puVar5 = &uStack_80;
      FUN_108657e88();
      *param_1 = (long)puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      iVar7 = *(int *)(param_2 + 0x30);
    }
  }
  uVar12 = 0;
  uVar14 = *(ulong *)(param_2 + 0x28);
  puVar17 = (ulong *)(param_2 + 0x28);
  if ((uVar14 & 1) != 0) {
    puVar17 = (ulong *)(uVar14 + 7);
  }
  puVar1 = puVar17 + iVar7;
  do {
    if ((puVar17 == puVar1) || (0x31 < uVar12)) {
      func_0x000107c27ab0(param_1 + 5,(long)*(int *)(param_2 + 0x18));
      uVar12 = *(ulong *)(param_2 + 0x10);
      puVar17 = (ulong *)(param_2 + 0x10);
      if ((uVar12 & 1) != 0) {
        puVar17 = (ulong *)(uVar12 + 7);
      }
      for (lVar15 = (long)*(int *)(param_2 + 0x18) << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
        func_0x000100696384(&uStack_80,*puVar17);
        func_0x00010069c690(param_1 + 5,&uStack_80);
        func_0x000108679af8();
        puVar17 = puVar17 + 1;
      }
      return;
    }
    puVar9 = (ulong *)(*puVar17 + 0x18);
    uVar14 = *puVar9;
    if ((uVar14 & 1) != 0) {
      puVar9 = (ulong *)(uVar14 + 7);
    }
    puVar2 = puVar9 + *(int *)(*puVar17 + 0x20);
    while ((puVar9 != puVar2 && (uVar12 < 0x32))) {
      puVar10 = (ulong *)(*puVar9 + 0x18);
      uVar14 = *puVar10;
      if ((uVar14 & 1) != 0) {
        puVar10 = (ulong *)(uVar14 + 7);
      }
      lVar15 = (long)*(int *)(*puVar9 + 0x20) << 3;
      while ((lVar15 != 0 && (uVar12 < 0x32))) {
        puVar6 = (ulong *)(*(ulong *)(*puVar10 + 0x18) & 0xfffffffffffffffc);
        cVar3 = *(char *)((long)puVar6 + 0x17);
        if (cVar3 < '\0') {
          uVar14 = puVar6[1];
          if (uVar14 != 0) {
            if (4 < uVar14) {
              uVar14 = 5;
            }
            puVar6 = (ulong *)*puVar6;
            goto LAB_1086798a8;
          }
        }
        else if (cVar3 != '\0') {
          uVar8 = (uint)cVar3;
          if (4 < uVar8) {
            uVar8 = 5;
          }
          uVar14 = (ulong)uVar8;
LAB_1086798a8:
          if (puVar6 != (ulong *)(uVar14 + (long)puVar6)) {
            _memcpy(auStack_65);
          }
          if (uVar12 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (plVar16,&DAT_10f68e8ee);
          }
          FUN_108657e88(auStack_65);
          __ZNSt3__19to_stringEx(&uStack_80);
          func_0x000107c27fc4(plVar16,&uStack_80);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
          uVar12 = uVar12 + 1;
        }
        puVar10 = puVar10 + 1;
        lVar15 = lVar15 + -8;
      }
      puVar9 = puVar9 + 1;
    }
    puVar17 = puVar17 + 1;
  } while( true );
}



/* Entry: 1086799ac; end: 108679b13;  */

void FUN_1086799ac(void)

{
  return;
}



/* Entry: 108679b14; end: 108679b8f;  */

long FUN_108679b14(long param_1,undefined1 param_2,long param_3,long param_4)

{
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = param_2;
  func_0x000107c28458(param_1,&uStack_31);
  uStack_32 = (undefined1)((ulong)param_4 >> 8);
  func_0x000107c28458(param_1,&uStack_32);
  uStack_33 = (undefined1)param_4;
  func_0x000107c28458(param_1,&uStack_33);
  func_0x000104bd9994(param_1,*(undefined8 *)(param_1 + 8),param_3,param_3 + param_4);
  return param_1;
}



/* Entry: 108679b90; end: 108679bbf;  */

void FUN_108679b90(undefined8 param_1,uint param_2)

{
  uint uVar1;
  uint uStack_14;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_108679b14(param_1,0x81,&uStack_14,4);
  return;
}



/* Entry: 108679bc0; end: 108679bdf;  */

long FUN_108679bc0(long param_1,long param_2,long param_3)

{
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = 1;
  func_0x000107c28458(param_1,&uStack_31);
  uStack_32 = (undefined1)((ulong)param_3 >> 8);
  func_0x000107c28458(param_1,&uStack_32);
  uStack_33 = (undefined1)param_3;
  func_0x000107c28458(param_1,&uStack_33);
  func_0x000104bd9994(param_1,*(undefined8 *)(param_1 + 8),param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 108679be0; end: 108679c37;  */

bool FUN_108679be0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (*(long *)(param_1 + 0x18) < lVar1) {
    uVar2 = 0;
    *(long *)(param_1 + 0x18) = lVar1 + *(long *)(param_1 + 0x10) * 1000000;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  return uVar2 < *(ulong *)(param_1 + 8);
}



/* Entry: 108679c38; end: 108679c47;  */

void FUN_108679c38(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 108679c48; end: 108679c7f;  */

ulong FUN_108679c48(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = (*(long *)(param_1 + 0x18) - lVar2) / 1000000;
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 108679c80; end: 108679c93;  */

void FUN_108679c80(void)

{
  return;
}



/* Entry: 108679c94; end: 108679cef;  */

void FUN_108679c94(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x10);
  FUN_108679cf0();
  lVar3 = *plVar1;
  puVar2 = (undefined4 *)(param_1 + 0x50);
  FUN_108679d5c(puVar2,param_2);
  *puVar2 = param_3;
  *(long *)(puVar2 + 2) = param_4;
  *(long *)(puVar2 + 4) = lVar3 + param_4;
  return;
}



/* Entry: 108679cf0; end: 108679d5b;  */

long * FUN_108679cf0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = param_1 + 6;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      plVar4 = param_1 + 5;
    }
    else {
      plVar3 = param_1 + 2;
      (**(code **)(*plVar2 + 0x18))();
      param_1[6] = (long)plVar2;
      lVar1 = 0x30;
      if (((ulong)plVar3 & 1) == 0) {
        lVar1 = 0x28;
      }
      param_1[6] = *(long *)((long)param_1 + lVar1);
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  return plVar4;
}



/* Entry: 108679d5c; end: 108679d8f;  */

long FUN_108679d5c(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108679d90(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 108679d90; end: 10867a167;  */

undefined1  [16] FUN_108679d90(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  ulong unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar8 = param_2;
  FUN_108848654();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    uVar14 = (uint)uVar15;
    if ((uVar15 & uVar16) == 0) {
      unaff_x25 = uVar14 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar15 <= uVar8) {
        uVar1 = 0;
        if (uVar14 != 0) {
          uVar1 = (uint)uVar8 / uVar14;
        }
        unaff_x25 = (ulong)((uint)uVar8 - uVar1 * uVar14);
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_108679e58;
          uVar6 = plVar13[1];
          if (uVar6 != uVar8) break;
          plVar3 = plVar13 + 2;
          func_0x000107c28078(plVar3,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10867a128;
          }
        }
        if ((uVar15 & uVar16) == 0) {
          uVar6 = uVar6 & uVar16;
        }
        else if (uVar15 <= uVar6) {
          uVar7 = 0;
          if (uVar15 != 0) {
            uVar7 = uVar6 / uVar15;
          }
          uVar6 = uVar6 - uVar7 * uVar15;
        }
      } while (uVar6 == unaff_x25);
    }
  }
LAB_108679e58:
  uVar5 = *param_4;
  plVar3 = param_1 + 2;
  plVar13 = (long *)0x40;
  __Znwm();
  uStack_58 = 0;
  *plVar13 = 0;
  plVar13[1] = uVar8;
  plStack_68 = plVar13;
  plStack_60 = plVar3;
  func_0x000107c27994(plVar13 + 2,uVar5);
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  if ((uVar15 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar15))
  goto LAB_10867a0ac;
  uVar16 = 1;
  if (2 < uVar15) {
    uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar16 = uVar16 | uVar15 << 1;
  uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar16 <= uVar15) {
    uVar16 = uVar15;
  }
  if (uVar16 - 1 == 0) {
    uVar16 = 2;
  }
  else if ((uVar16 & uVar16 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar15 = param_1[1];
  if (uVar15 < uVar16) {
LAB_108679f14:
    if (uVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10867a150);
      (*pcVar2)();
    }
    lVar4 = uVar16 << 3;
    __Znwm(lVar4);
    FUN_10867a168(param_1,lVar4);
    param_1[1] = uVar16;
    lVar4 = *param_1;
    for (uVar15 = 0; uVar16 != uVar15; uVar15 = uVar15 + 1) {
      *(undefined8 *)(lVar4 + uVar15 * 8) = 0;
    }
    plVar9 = (long *)*plVar3;
    uVar15 = uVar16;
    if (plVar9 != (long *)0x0) {
      uVar11 = plVar9[1];
      uVar7 = uVar16 - 1;
      uVar6 = 0;
      if (uVar16 != 0) {
        uVar6 = uVar11 / uVar16;
      }
      uVar12 = uVar11;
      if (uVar16 <= uVar11) {
        uVar12 = uVar11 - uVar6 * uVar16;
      }
      if ((uVar16 & uVar7) == 0) {
        uVar12 = uVar11 & uVar7;
      }
      *(long **)(lVar4 + uVar12 * 8) = plVar3;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        uVar6 = plVar9[1];
        if ((uVar16 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar16 <= uVar6) {
          uVar11 = 0;
          if (uVar16 != 0) {
            uVar11 = uVar6 / uVar16;
          }
          uVar6 = uVar6 - uVar11 * uVar16;
        }
        if (uVar6 != uVar12) {
          if (*(long *)(lVar4 + uVar6 * 8) == 0) {
            *(long **)(lVar4 + uVar6 * 8) = plVar10;
            uVar12 = uVar6;
          }
          else {
            *plVar10 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + uVar6 * 8);
            **(long **)(lVar4 + uVar6 * 8) = (long)plVar9;
            plVar9 = plVar10;
          }
        }
      }
    }
  }
  else if (uVar16 < uVar15) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar16 <= uVar6) {
      uVar16 = uVar6;
    }
    if (uVar16 < uVar15) {
      if (uVar16 != 0) goto LAB_108679f14;
      FUN_10867a168(param_1,0);
      param_1[1] = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = param_1[1];
    }
  }
  if ((uVar15 & uVar15 - 1) == 0) {
    unaff_x25 = (int)uVar15 - 1 & uVar8;
  }
  else {
    unaff_x25 = uVar8;
    if (uVar15 <= uVar8) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar8 / uVar15;
      }
      unaff_x25 = uVar8 - uVar16 * uVar15;
    }
  }
LAB_10867a0ac:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar13 = *plVar3;
    *plVar3 = (long)plVar13;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar3;
    if (*plVar13 != 0) {
      uVar8 = *(ulong *)(*plVar13 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar8 = uVar8 & uVar15 - 1;
      }
      else if (uVar15 <= uVar8) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar8 / uVar15;
        }
        uVar8 = uVar8 - uVar16 * uVar15;
      }
      *(long **)(lVar4 + uVar8 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10867a180(&plStack_68);
  uVar5 = 1;
LAB_10867a128:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar13;
  return auVar17;
}



/* Entry: 10867a168; end: 10867a17f;  */

void FUN_10867a168(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10867a180; end: 10867a1c3;  */

long * FUN_10867a180(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10867a1c4; end: 10867a1d7;  */

undefined4 FUN_10867a1c4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10867a1d8; end: 10867a247;  */

undefined8 * FUN_10867a1d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110a61c68;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010867a334(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 10867a248; end: 10867a27b;  */

void FUN_10867a248(long param_1)

{
  FUN_10867a27c(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010867a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10867a27c; end: 10867a29f;  */

void FUN_10867a27c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10867a394(param_1,&uStack_18);
  return;
}



/* Entry: 10867a2a0; end: 10867a2df;  */

void FUN_10867a2a0(long param_1,ulong param_2)

{
  FUN_10867a27c(param_1 + 0x18,param_2 & 0xffffffff | 0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010867a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2);
  return;
}



/* Entry: 10867a2e0; end: 10867a2e3;  */

undefined8 * FUN_10867a2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61c68;
  func_0x00010865f8f8(param_1 + 3);
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 10867a2e4; end: 10867a2f7;  */

void FUN_10867a2e4(void)

{
  FUN_10867a2f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867a2f8; end: 10867a393;  */

undefined8 * FUN_10867a2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61c68;
  func_0x00010865f8f8(param_1 + 3);
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 10867a394; end: 10867a3b3;  */

void FUN_10867a394(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010867a3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10867a3b4; end: 10867a3bb;  */

void FUN_10867a3b4(void)

{
  return;
}



/* Entry: 10867a3bc; end: 10867a633;  */

undefined8 FUN_10867a3bc(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  char cStack_208;
  int iStack_200;
  int iStack_130;
  int iStack_11c;
  int iStack_118;
  byte bStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    func_0x000107c278b8(auStack_238,&UNK_10f4aff40);
    lVar4 = param_1 + 0x30;
    uVar6 = SUB81(auStack_238,0);
    FUN_108841654();
    *(long *)(param_1 + 8) = lVar4;
    *(undefined1 *)(param_1 + 0x10) = uVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    func_0x000107c278b8(&ppuStack_60,&UNK_10f4aff63);
    func_0x000107c29dbc(auStack_238,param_1 + 0x30,&ppuStack_60);
    uVar3 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    if (cStack_208 == '\x01') {
      ppuStack_60 = &PTR_DAT_110d122a8;
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      func_0x000107c30344();
      if ((uVar3 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = SUB84(&ppuStack_60,0);
        FUN_10867a994();
      }
      func_0x00010b598968(&ppuStack_60);
    }
    else {
      uVar8 = 0;
    }
    func_0x000107c28a64(auStack_238);
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_10867aa84();
    if ((ulong)(lVar4 - *(long *)(param_1 + 8)) < 0x9a7ec800) {
      return 0;
    }
  }
  if (*(uint *)(param_1 + 0x18) < 3) {
    return 0;
  }
  FUN_10867a634(&ppuStack_60,param_1 + 0x40);
  if ((ppuStack_60 != (undefined **)0x0) &&
     (ppuVar5 = ppuStack_60, (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60,param_2),
     ((ulong)ppuVar5 & 1) == 0)) {
    uVar7 = 0;
    goto LAB_10867a5ac;
  }
  func_0x000107c29f64(auStack_238,*(undefined8 *)(param_1 + 0x30),param_2,2);
  if ((bStack_68 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (iStack_130 == 1) {
      iVar2 = (int)auStack_220;
      func_0x0001006b61e4();
      if (iVar2 != 0) goto LAB_10867a56c;
      bVar1 = iStack_11c != 5;
    }
    else {
LAB_10867a56c:
      bVar1 = false;
    }
    uVar7 = 0;
    if (((bool)((iStack_130 == 0 && iStack_200 == 2) | bVar1)) && (iStack_118 != 1)) {
      FUN_10867a674(param_1);
      uVar7 = 1;
    }
  }
  func_0x000107c288c8(auStack_238);
LAB_10867a5ac:
  func_0x000107c28a70(&ppuStack_60);
  return uVar7;
}



/* Entry: 10867a634; end: 10867a673;  */

void FUN_10867a634(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10867a674; end: 10867a6fb;  */

void FUN_10867a674(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10867aa84();
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  func_0x000107c278b8(auStack_50,&UNK_10f4aff40);
  __ZNSt3__19to_stringEy(auStack_38,*(undefined8 *)(param_1 + 8));
  FUN_108841628(param_1 + 0x30,auStack_50);
  func_0x000107c28a68(auStack_50);
  return;
}



/* Entry: 10867a6fc; end: 10867a993;  */

void FUN_10867a6fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  char cStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  FUN_10867aa84();
  ppuStack_70 = &PTR_DAT_110d122a8;
  uStack_68 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  func_0x000107c278b8(&uStack_c0,&UNK_10f4aff63);
  func_0x000107c29dbc(auStack_a8,param_1 + 0x30,&uStack_c0);
  func_0x00010867aa90();
  if (cStack_78 == '\x01') {
    if (-1 < (char)bStack_79) {
      uStack_88 = (ulong)bStack_79;
      pppuStack_90 = &pppuStack_90;
    }
    pppuVar5 = &ppuStack_70;
    func_0x000107c30344(pppuVar5,pppuStack_90,uStack_88);
    if (((ulong)pppuVar5 & 1) == 0) {
      func_0x00010867aa98();
      goto LAB_10867a920;
    }
  }
  uVar4 = uVar4 / 86400000;
  func_0x00010867aa98();
  if ((int)uStack_58 == 0) {
LAB_10867a7ec:
    puVar6 = &uStack_60;
    func_0x000107c303b0(&uStack_60,FUN_10867a9f8);
    puVar6[2] = uVar4;
    *(undefined4 *)(puVar6 + 3) = 0;
    uVar7 = uStack_60 & 1;
    lVar8 = uStack_60 - 1;
    iVar10 = 1;
  }
  else {
    lVar8 = uStack_60 - 1;
    uVar7 = uStack_60 & 1;
    puVar6 = &uStack_60;
    if (uVar7 != 0) {
      puVar6 = (ulong *)(lVar8 + (long)(int)uStack_58 * 8);
    }
    puVar6 = (ulong *)*puVar6;
    if (puVar6[2] != uVar4) goto LAB_10867a7ec;
    iVar10 = (int)puVar6[3] + 1;
  }
  lVar2 = lStack_50;
  lVar9 = 0;
  *(int *)(puVar6 + 3) = iVar10;
  uVar1 = 0;
  if (0xc < uVar4) {
    uVar1 = uVar4 - 0xd;
  }
  puVar6 = &uStack_60;
  if (uVar7 != 0) {
    puVar6 = (ulong *)(lVar8 + 8);
  }
  for (lVar8 = (long)(int)uStack_58 << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
    if (uVar1 <= *(ulong *)(puVar6[lVar9] + 0x10)) {
      if ((int)lVar9 == 0) goto LAB_10867a8bc;
      goto LAB_10867a868;
    }
    lVar9 = lVar9 + 1;
  }
  lVar9 = (long)(int)uStack_58;
  if ((int)uStack_58 != 0) {
LAB_10867a868:
    puVar6 = &uStack_60;
    if ((uStack_60 & 1) != 0) {
      puVar6 = (ulong *)(uStack_60 + 7);
    }
    uVar11 = (uint)lVar9;
    for (uVar4 = (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
        uVar4 = uVar4 - 1) {
      if ((lVar2 == 0) && ((long *)*puVar6 != (long *)0x0)) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      puVar6 = puVar6 + 1;
    }
    if (0 < (int)uVar11) {
      func_0x00010b4d370c(&uStack_60,0,lVar9);
    }
  }
LAB_10867a8bc:
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pppuVar5 = &ppuStack_70;
  func_0x000107c30364(pppuVar5,&uStack_c0);
  if (((ulong)pppuVar5 & 1) != 0) {
    func_0x000107c278b8(auStack_a8,&UNK_10f4aff63);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pppuStack_90,&uStack_c0);
    FUN_108841628(param_1 + 0x30,auStack_a8);
    func_0x000107c28a68(auStack_a8);
    uVar3 = SUB84(&ppuStack_70,0);
    FUN_10867a994();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  func_0x00010867aa90();
LAB_10867a920:
  func_0x00010b598968(&ppuStack_70);
  return;
}



/* Entry: 10867a994; end: 10867a9e3;  */

int FUN_10867a994(long param_1)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = 0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar3 = (long)*(int *)(param_1 + 0x18) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    iVar2 = *(int *)(*puVar1 + 0x18) + iVar2;
    puVar1 = puVar1 + 1;
  }
  return iVar2;
}



/* Entry: 10867a9e4; end: 10867a9f7;  */

void FUN_10867a9e4(void)

{
  func_0x00010867aa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867a9f8; end: 10867aa83;  */

void FUN_10867a9f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d12258;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10867aa84; end: 10867aaa7;  */

void FUN_10867aa84(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010867aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 10867aaa8; end: 10867aae7;  */

void FUN_10867aaa8(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') && ((*(byte *)(param_1 + 0x21) & 1) != 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x0001006b3c90();
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10867aae8; end: 10867ab3b;  */

/* WARNING: Possible PIC construction at 0x000100553320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100553324) */
/* WARNING: Removing unreachable block (ram,0x000100553358) */
/* WARNING: Removing unreachable block (ram,0x000100553394) */
/* WARNING: Removing unreachable block (ram,0x0001005533b4) */
/* WARNING: Removing unreachable block (ram,0x0001005533a8) */
/* WARNING: Removing unreachable block (ram,0x000100553348) */

undefined1  [16] FUN_10867aae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puVar6;
  
  uVar9 = param_2;
  func_0x000107c28078();
  if ((int)uVar9 != 0) {
    param_3 = param_2;
  }
  uVar10 = param_3;
  func_0x0001005532d4(param_1);
  func_0x00010055336c();
  uVar9 = param_3;
  uStack_48 = param_2;
  uStack_40 = uVar10;
  func_0x00010055336c();
  puStack_78 = &UNK_100553324;
  puVar6 = &uStack_48;
  uStack_90 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  uStack_58 = uVar9;
  uStack_50 = uVar10;
  func_0x0001004a5d98();
  iVar5 = (int)puVar6;
  uStack_a8 = extraout_x8;
  func_0x000100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  puVar6 = &uStack_58;
  puVar13 = &uStack_48;
  if ((bool)uVar4) {
    puVar6 = &uStack_48;
    puVar13 = &uStack_58;
  }
  func_0x000100553540(auStack_d8,puVar6,puVar6 + 2);
  func_0x0001005535dc();
  lVar14 = extraout_x11;
  puVar11 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar14 = extraout_x8_00;
    puVar11 = auStack_d8;
  }
  puVar6 = puVar13 + 2;
  func_0x0001005535f0(auStack_d8,puVar11 + lVar14);
  uStack_b8 = 0x20cdf33f5c44e0a2;
  uStack_c0 = 0x47454b94a1269407;
  puVar7 = &uStack_c0;
  puVar11 = auStack_d8;
  func_0x000100553bf0();
  puVar8 = auStack_d8;
  puVar12 = puVar11;
  func_0x000107c60ca0();
  func_0x0001004a5f34(uStack_a8);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar14 = (long)puVar12 - (long)puVar8;
    lVar15 = (long)puVar6 - (long)puVar13;
    func_0x000107c610b0();
    bVar1 = lVar14 < lVar15;
    if ((int)puVar8 != 0) {
      bVar1 = (int)puVar8 < 0;
    }
    auVar17._1_7_ = 0;
    auVar17[0] = bVar1;
    auVar17._8_8_ = puVar13;
    return auVar17;
  }
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = puVar7;
  return auVar16;
}



/* Entry: 10867ab3c; end: 10867b06f;  */

undefined8 FUN_10867ab3c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [72];
  ulong uStack_318;
  int iStack_310;
  long lStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lStack_160 = 0;
  lStack_168 = 0;
  uStack_158 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_170 = 0x3f800000;
  FUN_10886d608(auStack_378,*(undefined8 *)(param_1 + 0x18));
  FUN_10867b070(&lStack_1a8,auStack_378);
  func_0x0001006928f0(auStack_378);
  if (lStack_1a8 == lStack_1a0) {
    uVar12 = 0;
  }
  else {
    func_0x0001006941fc(auStack_378,*(undefined8 *)(param_1 + 0x18),param_2,0);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_380 = 0x3f800000;
    puVar1 = &uStack_318;
    if ((uStack_318 & 1) != 0) {
      puVar1 = (ulong *)(uStack_318 + 7);
    }
    puStack_108 = &uStack_3a0;
    puStack_100 = (undefined8 *)0x0;
    lVar10 = lStack_1a8;
    lVar3 = lStack_1a0;
    for (lVar11 = (long)iStack_310 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      uStack_b0 = *(undefined8 *)(*puVar1 + 0x10);
      lStack_1a8 = lVar10;
      lStack_1a0 = lVar3;
      FUN_10867b25c(&puStack_108,&uStack_b0);
      puVar1 = puVar1 + 1;
      lVar10 = lStack_1a8;
      lVar3 = lStack_1a0;
    }
    lVar13 = *(long *)(lVar10 + 0x20);
    lVar11 = *(long *)(lVar3 + -0x188);
    uStack_3c0 = 0;
    lStack_3b8 = 0;
    puStack_3c8 = &uStack_3c0;
    lStack_3b0 = lVar13;
    lStack_3a8 = lVar11;
    for (; lVar10 != lVar3; lVar10 = lVar10 + 0x1a8) {
      ppuVar2 = &PTR_PTR_113286e08;
      if (*(undefined ***)(lVar10 + 0x80) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(lVar10 + 0x80);
      }
      ppuVar8 = &PTR_PTR_113284390;
      if (*(int *)(ppuVar2 + 0x2a) == 0xc) {
        ppuVar8 = (undefined **)ppuVar2[0x29];
      }
      puVar7 = (undefined8 *)ppuVar8[2];
      if ((long)puVar7 < lVar13 || lVar11 < (long)puVar7) {
        puStack_108 = puVar7;
        FUN_10867b124(&puStack_3c8,&puStack_108);
      }
      puVar7 = &uStack_3a0;
      FUN_10867b13c(puVar7,&lStack_3b0,lVar10);
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10867b1ac(&uStack_190,lVar10 + 0x18);
      }
      FUN_10867b444(&lStack_168,lVar10);
    }
    if (lStack_3b8 != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      FUN_10867b87c(&uStack_b0,puStack_3c8,&uStack_3c0);
      FUN_108861dec(&puStack_108,uVar12,param_2,&uStack_b0,0);
      func_0x000107c27ae4(&uStack_b0);
      puVar4 = puStack_100;
      for (puVar7 = puStack_108; puVar7 != puVar4; puVar7 = puVar7 + 0x35) {
        puVar5 = &uStack_3a0;
        FUN_10867b13c(puVar5,&lStack_3b0,puVar7);
        if (((ulong)puVar5 & 1) == 0) {
          FUN_10867b1ac(&uStack_190,puVar7 + 3);
        }
      }
      func_0x00010867b9fc(&puStack_108);
    }
    func_0x000107c27994(auStack_c8,auStack_378);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_120,&UNK_10f4aff7f);
    func_0x000107c31420(&puStack_108,uVar12,auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    uStack_1f8 = 1;
    uStack_1f0 = 1;
    lStack_200 = lVar11 + 1;
    FUN_10885ff98(*(undefined8 *)(param_1 + 0x18),auStack_378);
    FUN_10886488c(*(undefined8 *)(param_1 + 0x18),auStack_c8,&uStack_190);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x138))
              (*(long **)(param_1 + 0x28),auStack_c8,&lStack_168);
    plVar9 = *(long **)(param_1 + 0x28);
    puVar6 = auStack_360;
    func_0x0001006b61e4(puVar6);
    (**(code **)(*plVar9 + 0x140))(plVar9,auStack_c8,(ulong)puVar6 & 0xffffffff | 0x100000000);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_128 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_140 = 0;
    func_0x000104be7444(&uStack_150,(lStack_160 - lStack_168) / 0x1a8);
    lVar11 = lStack_160;
    for (lVar10 = lStack_168; lVar10 != lVar11; lVar10 = lVar10 + 0x1a8) {
      func_0x000107c27994(&uStack_90,lVar10);
      uStack_a0 = uStack_80;
      uStack_98 = *(undefined8 *)(lVar10 + 0x18);
      uStack_a8 = uStack_88;
      uStack_b0 = uStack_90;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      func_0x000107c27914();
      func_0x000104be7704(&uStack_150,&uStack_b0);
      func_0x000107c27914(&uStack_b0);
    }
    (**(code **)*puVar7)(puVar7,auStack_c8,auStack_378,1,&uStack_138,&uStack_150);
    func_0x000104be1274(&uStack_150);
    func_0x00010867b9fc(&uStack_138);
    func_0x000107c31428(&puStack_108);
    func_0x000107c31424(&puStack_108);
    uVar12 = 1;
    func_0x000107c27914(auStack_c8);
    func_0x00010867bb28(&puStack_3c8);
    func_0x00010867bb84(&uStack_3a0);
    func_0x000107c287e4(auStack_378);
  }
  func_0x00010867b9fc(&lStack_1a8);
  func_0x00010867bb84(&uStack_190);
  func_0x00010867b9fc(&lStack_168);
  return uVar12;
}



/* Entry: 10867b070; end: 10867b123;  */

void FUN_10867b070(undefined8 param_1)

{
  undefined1 auStack_710 [440];
  undefined1 auStack_558 [440];
  undefined1 auStack_3a0 [440];
  undefined1 auStack_1e8 [440];
  
  func_0x00010068e2b8(auStack_3a0);
  FUN_10867bc14(auStack_1e8,auStack_3a0);
  _bzero(auStack_710,0x1b8);
  FUN_10867bc14(auStack_558,auStack_710);
  FUN_10867bcc0(param_1,auStack_1e8,auStack_558);
  func_0x00010867cfe4();
  func_0x00010867ceb4(auStack_710);
  func_0x00010867cf64();
  func_0x00010867ceb4(auStack_3a0);
  return;
}



/* Entry: 10867b124; end: 10867b13b;  */

void FUN_10867b124(void)

{
  FUN_10867c0d8();
  return;
}



/* Entry: 10867b13c; end: 10867b1ab;  */

undefined8 FUN_10867b13c(ulong param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = param_2;
  if (*(char *)(param_3 + 0x28) == '\x01') {
    plVar1 = (long *)(param_3 + 0x20);
    func_0x00010867b2d8();
    if ((param_1 & 1) != 0) {
      return 1;
    }
  }
  func_0x00010867b2f4(param_3);
  if ((((ulong)plVar1 & 1) != 0) &&
     ((func_0x00010867b2f4(), param_3 < *param_2 || (param_2[1] < param_3)))) {
    return 1;
  }
  return 0;
}



/* Entry: 10867b1ac; end: 10867b1c3;  */

void FUN_10867b1ac(void)

{
  FUN_10867c274();
  return;
}



/* Entry: 10867b1c4; end: 10867b23b;  */

void FUN_10867b1c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c288a8(&uStack_48,param_2 + 0x68);
  uStack_38 = uStack_48;
  uStack_48 = 0;
  lStack_40 = param_2;
  FUN_10867c694(param_1,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  return;
}



/* Entry: 10867b23c; end: 10867b247;  */

void FUN_10867b23c(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int extraout_w10;
  
  iVar1 = (int)param_2 + 0xa8;
  func_0x000107c28850();
  if (iVar1 != 0) {
    func_0x000107c28854(param_2 + 0x68);
  }
  lVar2 = *(long *)(param_2 + 0xb0);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c31d08();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10867b248; end: 10867b25b;  */

void FUN_10867b248(void)

{
  FUN_10867bac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10867b25c; end: 10867b28b;  */

undefined8 * FUN_10867b25c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10867b28c();
  param_1[1] = puVar1;
  param_1[1] = *puVar1;
  return param_1;
}



/* Entry: 10867b28c; end: 10867b353;  */

void FUN_10867b28c(void)

{
  func_0x00010867b2a4();
  return;
}



/* Entry: 10867b354; end: 10867b3ef;  */

long FUN_10867b354(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar4 != uVar7) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10867b3f0; end: 10867b40f;  */

void FUN_10867b3f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10867b410(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10867b410; end: 10867b443;  */

void FUN_10867b410(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar1, param_1 = param_1 + 1, param_1 != param_2) {
      puVar1 = param_1;
      if (*param_1 <= *puVar2) {
        puVar1 = puVar2;
      }
    }
  }
  return;
}



/* Entry: 10867b444; end: 10867b4a7;  */

long FUN_10867b444(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010867b480();
    lVar2 = uVar1 + 0x1a8;
  }
  else {
    lVar2 = param_1;
    FUN_10867b4a8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x1a8;
}



/* Entry: 10867b4a8; end: 10867b543;  */

long FUN_10867b4a8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10867b544(param_1,(param_1[1] - *param_1) / 0x1a8 + 1);
  FUN_10867b638(auStack_58,plVar1,(param_1[1] - *param_1) / 0x1a8,param_1 + 2);
  func_0x00010068df2c(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x1a8;
  FUN_10867b5a4(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010867b814(auStack_58);
  return lVar2;
}



/* Entry: 10867b544; end: 10867b5a3;  */

long * FUN_10867b544(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x9a90e7d95bc60a) {
    uVar1 = (param_1[2] - *param_1) / 0x1a8;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x4d4873ecade303 < uVar1) {
      plVar3 = (long *)0x9a90e7d95bc609;
    }
    return plVar3;
  }
  FUN_10867b624();
  func_0x00010867cf58();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x1a8) * 0x1a8;
  FUN_10867b6d8(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10867b5a4; end: 10867b623;  */

void FUN_10867b5a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010867cf58();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x1a8) * 0x1a8;
  FUN_10867b6d8(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10867b624; end: 10867b637;  */

long * FUN_10867b624(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010867b684();
  }
  lVar2 = param_4 + param_3 * 0x1a8;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x1a8;
  return plVar1;
}



/* Entry: 10867b638; end: 10867b6a7;  */

long * FUN_10867b638(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010867b684();
  }
  lVar1 = param_4 + param_3 * 0x1a8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x1a8;
  return param_1;
}



/* Entry: 10867b6a8; end: 10867b6d7;  */

void FUN_10867b6a8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x9a90e7d95bc60a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1a8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010867cf6c();
  func_0x00010867d014();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x1a8) {
    func_0x00010068df2c(param_4,param_2);
    param_4 = lStack_48 + 0x1a8;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_10867b764();
  FUN_10867b794(auStack_70);
  return;
}



/* Entry: 10867b6d8; end: 10867b763;  */

void FUN_10867b6d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010867cf6c();
  func_0x00010867d014();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x1a8) {
    func_0x00010068df2c(param_4,param_2);
    param_4 = lStack_38 + 0x1a8;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10867b764();
  FUN_10867b794(auStack_60);
  return;
}



/* Entry: 10867b764; end: 10867b793;  */

void FUN_10867b764(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x1a8) {
    func_0x00010068e154();
  }
  return;
}



/* Entry: 10867b794; end: 10867b7c3;  */

long FUN_10867b794(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10867b7c4(param_1);
  }
  return param_1;
}



/* Entry: 10867b7c4; end: 10867b7e3;  */

void FUN_10867b7c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x1a8;
    func_0x00010068e154();
  }
  return;
}



/* Entry: 10867b7e4; end: 10867b83f;  */

void FUN_10867b7e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x1a8;
    func_0x00010068e154();
  }
  return;
}



/* Entry: 10867b840; end: 10867b847;  */

void FUN_10867b840(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010867cf58(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x1a8;
    func_0x00010068e154();
  }
  return;
}


