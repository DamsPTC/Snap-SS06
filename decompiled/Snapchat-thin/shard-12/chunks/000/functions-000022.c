/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c5129c; end: 108c512c3;  */

void FUN_108c5129c(void)

{
  func_0x000108c59048();
  FUN_108c512c4();
  func_0x000108c58f94();
  FUN_108c40bf4();
  return;
}



/* Entry: 108c512c4; end: 108c512e7;  */

void FUN_108c512c4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108c41168();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 108c512e8; end: 108c5143f;  */

void FUN_108c512e8(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  
  func_0x000108c59054();
  func_0x000108c59678();
  plVar2 = param_1 + 2;
  *param_1 = FUN_108c57dc0;
  param_1[1] = FUN_108c57e20;
  FUN_108c51188();
  func_0x000108c58ffc();
  FUN_108c50af0();
  func_0x000108c599a4();
  if (param_1[4] == 0) {
    func_0x000108c58d7c();
    func_0x000108c59018();
    func_0x000108c58b4c();
    func_0x000108c58da0();
  }
  else {
    func_0x000108c59d1c();
    func_0x000108c59ab8(param_1 + 7);
    func_0x000108c59278();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(param_1[6]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    puVar3 = param_1 + 6;
    FUN_108c51150(puVar3);
    FUN_108c51b60(param_1 + 2,puVar3);
    func_0x000108c58ddc();
    func_0x000108c58d98();
    func_0x000108c58d7c();
  }
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c51440; end: 108c5156b;  */

void FUN_108c51440(void)

{
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000108c58cd8();
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = *unaff_x22;
  func_0x000108c58e78(auStack_58);
  func_0x000107c278b8(auStack_70,&DAT_10f2e0488);
  func_0x000108c59a50(uVar1,auStack_58,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000108c58e78(auStack_88);
  func_0x000108c59604();
  func_0x000108c5957c();
  func_0x000108c595f4();
  func_0x000108c58f44();
  func_0x000108c59a24();
  uVar1 = *unaff_x22;
  func_0x000108c58e78(auStack_b8);
  func_0x000108c59604();
  func_0x000108c593a8();
  func_0x000108c58ea8();
  func_0x000108c591d8();
  FUN_108c6c320(uVar1);
  func_0x000108c58d60();
  func_0x000108c58dc0();
  func_0x000108c590a0();
  return;
}



/* Entry: 108c5156c; end: 108c51617;  */

void FUN_108c5156c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_90;
  uVar1 = *param_1;
  if (param_3 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_78);
    func_0x000108c590c8();
    func_0x000108c59854();
    func_0x000108c59a50(uVar1);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48);
    func_0x000108c595bc();
    puVar2 = auStack_60;
    func_0x000108c59a50(uVar1,auStack_48,auStack_60);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x000108c59af4();
  return;
}



/* Entry: 108c51618; end: 108c5184f;  */

void FUN_108c51618(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000108c59054();
  puVar2 = (undefined8 *)0xd0;
  __Znwm();
  *puVar2 = FUN_108c57e48;
  puVar2[1] = FUN_108c57f5c;
  func_0x000108c51c1c(puVar2 + 2);
  func_0x000108c58ffc();
  FUN_108c51b80();
  FUN_108c50364(puVar2 + 0x15);
  if (puVar2[0x15] == 0) {
    func_0x000108c591bc();
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    func_0x000108c591e8();
    func_0x000108c59b18();
    FUN_108c41168(puVar2 + 0x12);
  }
  else {
    plVar3 = *(long **)(puVar2[0x15] + 0x28);
    func_0x000108c59ab8(puVar2 + 0x18);
    puVar2[0x17] = puVar2[0x18];
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(puVar2[0x17]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x19) = 0;
      func_0x000108c58970();
      if (*plVar3 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x000108c58a1c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    FUN_108c51bc4(puVar2 + 0x17);
    func_0x000108c59514();
    func_0x000108c590d0();
    func_0x000108c593d4();
    func_0x000108c59cf8();
    if ((bool)in_ZR) {
      FUN_108c6add0(&uStack_60,puVar2 + 4);
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xc] = 0;
      func_0x000108c591e8();
      func_0x000108c59b18();
      FUN_108c41168(puVar2 + 0xc);
      puVar2 = &uStack_60;
    }
    else {
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0xf] = 0;
      func_0x000108c591e8();
      func_0x000108c59b18();
      puVar2 = puVar2 + 0xf;
    }
    FUN_108c41168(puVar2);
    func_0x000108c58ff4();
    func_0x000108c591bc();
  }
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c51850; end: 108c51887;  */

long FUN_108c51850(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c51880);
  (*pcVar1)();
}



/* Entry: 108c51888; end: 108c5195f;  */

void FUN_108c51888(void)

{
  undefined8 *unaff_x22;
  undefined8 uVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  
  func_0x000108c58cd8();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108c58e78(auStack_58);
  func_0x000108c59438();
  func_0x000108c5957c();
  func_0x000108c595f4();
  func_0x000108c58f44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uVar1 = *unaff_x22;
  func_0x000108c58e78(auStack_88);
  func_0x000108c59438();
  func_0x000108c593a8();
  func_0x000108c58ea8();
  func_0x000108c591d8();
  FUN_108c6c320(uVar1);
  func_0x000108c58d60();
  func_0x000108c58dc0();
  func_0x000108c590a0();
  return;
}



/* Entry: 108c51960; end: 108c5198f;  */

void FUN_108c51960(undefined8 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 - 1U < 0x10) {
    pcVar1 = (&PTR_s_cancelled_110abac58)[param_2 - 1U];
  }
  else {
    pcVar1 = "other";
  }
  func_0x00010002b82c(param_1,pcVar1);
  func_0x000107c613d0(pcVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 108c51990; end: 108c51a23;  */

void FUN_108c51990(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = *param_1;
  func_0x000108c58fac(auStack_48);
  func_0x000108c59438();
  func_0x000108c593a8();
  func_0x000108c59298();
  func_0x000108c591d8();
  FUN_108c6c320(uVar1);
  func_0x000108c58d60();
  func_0x000108c58dc0();
  func_0x000108c590a0();
  return;
}



/* Entry: 108c51a24; end: 108c51b5f;  */

void FUN_108c51a24(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000108c58d68();
  func_0x000108c59678();
  plVar2 = param_1 + 2;
  *param_1 = FUN_108c57f8c;
  param_1[1] = FUN_108c57fe4;
  func_0x000107c27f94();
  func_0x000108c599f4();
  func_0x000108c5994c();
  if (param_1[4] != 0) {
    func_0x000108c59d1c();
    (**(code **)(extraout_x8 + 0x10))(param_1 + 7);
    func_0x000108c59278();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(param_1[6]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x000107c28834(param_1 + 6);
    func_0x000108c58ddc();
    func_0x000108c58d98();
  }
  func_0x000108c58d7c();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c51b60; end: 108c51b7f;  */

void FUN_108c51b60(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000108c58df8();
  FUN_108c51e94();
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108c51b80; end: 108c51bc3;  */

void FUN_108c51b80(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000108c58e60();
  return;
}



/* Entry: 108c51bc4; end: 108c51bfb;  */

long FUN_108c51bc4(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c51bf4);
  (*pcVar1)();
}



/* Entry: 108c51bfc; end: 108c51c43;  */

void FUN_108c51bfc(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000108c58df8();
  FUN_108c51d80();
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108c51c44; end: 108c51c7b;  */

void FUN_108c51c44(void)

{
  __Znwm(0xc0);
  func_0x000108c59450();
  FUN_108c51c7c();
  func_0x000108c58bb0();
  func_0x000108c58e60();
  return;
}



/* Entry: 108c51c7c; end: 108c51c9f;  */

void FUN_108c51c7c(long param_1)

{
  func_0x000107c31510();
  func_0x000108c58f6c(&UNK_110abaa58);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}



/* Entry: 108c51ca0; end: 108c51ca3;  */

undefined8 * FUN_108c51ca0(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa58);
  FUN_108c51ce4();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51ca4; end: 108c51cb7;  */

void FUN_108c51ca4(void)

{
  FUN_108c51cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c51cb8; end: 108c51ce3;  */

undefined8 * FUN_108c51cb8(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa58);
  FUN_108c51ce4();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51ce4; end: 108c51d03;  */

void FUN_108c51ce4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108c41168();
  }
  return;
}



/* Entry: 108c51d04; end: 108c51d5f;  */

undefined1 * FUN_108c51d04(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x000108c59130();
    FUN_108c6d500();
    param_1[0x30] = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 108c51d60; end: 108c51d7f;  */

void FUN_108c51d60(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108c6d548();
  }
  return;
}



/* Entry: 108c51d80; end: 108c51dcb;  */

undefined8 FUN_108c51d80(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c58f54();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59860();
      FUN_108c51dcc();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108c51dcc; end: 108c51df3;  */

void FUN_108c51dcc(void)

{
  func_0x000108c59048();
  FUN_108c51df4();
  func_0x000108c58f94();
  func_0x000108c51e18();
  return;
}



/* Entry: 108c51df4; end: 108c51e33;  */

void FUN_108c51df4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108c41168();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 108c51e34; end: 108c51e67;  */

void FUN_108c51e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar1;
  return;
}



/* Entry: 108c51e68; end: 108c51e93;  */

void FUN_108c51e68(long param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_108c41f1c();
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108c51e94; end: 108c51edf;  */

undefined8 FUN_108c51e94(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c59048();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59d28();
      FUN_108c51ee0();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108c51ee0; end: 108c51f07;  */

void FUN_108c51ee0(void)

{
  func_0x000108c59048();
  FUN_108c512c4();
  func_0x000108c58f94();
  FUN_108c51f08();
  return;
}



/* Entry: 108c51f08; end: 108c51f23;  */

void FUN_108c51f08(long param_1)

{
  FUN_108c41f1c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108c51f24; end: 108c51f57;  */

void FUN_108c51f24(void)

{
  func_0x000108c59934();
  func_0x000108c59450();
  FUN_108c51f58();
  func_0x000108c58bb0();
  func_0x000108c58e60();
  return;
}



/* Entry: 108c51f58; end: 108c51f7b;  */

void FUN_108c51f58(long param_1)

{
  func_0x000107c31510();
  func_0x000108c58f6c(&UNK_110abaa98);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}



/* Entry: 108c51f7c; end: 108c51f7f;  */

undefined8 * FUN_108c51f7c(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa98);
  FUN_108c41480();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51f80; end: 108c51f93;  */

void FUN_108c51f80(void)

{
  FUN_108c51f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c51f94; end: 108c51fbf;  */

undefined8 * FUN_108c51f94(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa98);
  FUN_108c41480();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51fc0; end: 108c5200b;  */

undefined8 FUN_108c51fc0(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c58f54();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59860();
      FUN_108c5200c();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108c5200c; end: 108c52033;  */

void FUN_108c5200c(void)

{
  func_0x000108c59048();
  FUN_108c52034();
  func_0x000108c58f94();
  FUN_108c4172c();
  return;
}



/* Entry: 108c52034; end: 108c52057;  */

void FUN_108c52034(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000108c42160();
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 108c52058; end: 108c520c7;  */

void FUN_108c52058(void)

{
  func_0x000108c58ca8();
  func_0x000108c594d8();
  func_0x000108c59cc0(FUN_108c56f50);
  func_0x000108c529e4();
  func_0x000108c5951c();
  func_0x000108c58bd4();
  func_0x000108c58c48();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c520c8; end: 108c523eb;  */

void FUN_108c520c8(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long lVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  func_0x000108c59c34();
  func_0x000108c59054();
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  *puVar2 = FUN_108c56cc4;
  puVar2[1] = FUN_108c56f28;
  puVar2[10] = unaff_x20;
  plVar11 = puVar2 + 2;
  func_0x000107c27f94();
  func_0x000108c58bd4();
  puVar3 = puVar2 + 8;
  *puVar3 = *unaff_x20;
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(*puVar3);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xb) = 0;
    lVar8 = puVar2[8];
    func_0x000108c58970();
    if (*plVar11 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar5 = extraout_x8;
    do {
      if (*plVar5 == 0) {
        func_0x000108c58a1c();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c58944();
          *(long **)(lVar8 + 0x90) = plVar11;
        }
        func_0x000108c58a6c();
        func_0x000108c58998();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108c523ec();
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  func_0x000108c59640();
  func_0x000108c5998c();
  func_0x000108c59680();
  func_0x000108c59650();
  lVar8 = puVar2[4];
  puVar4 = (undefined8 *)(lVar8 + 0x60);
  __ZNSt3__15mutex4lockEv();
  puVar9 = (undefined8 *)puVar2[4];
  if (*(char *)(puVar9 + 5) == '\x01') {
    if (puVar9 != puVar3) {
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar3 + 4);
      plVar11 = (long *)puVar3[2];
      lVar6 = puVar9[1];
      plVar5 = plVar11;
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)*puVar9;
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        plVar10 = (long *)puVar9[2];
        puVar9[2] = 0;
        puVar9[3] = 0;
        for (; (plVar5 = plVar11, plVar10 != (long *)0x0 &&
               (plVar5 = (long *)0x0, plVar11 != (long *)0x0)); plVar11 = (long *)*plVar11) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar10 + 2,plVar11 + 2);
          puVar4 = plVar10 + 5;
          FUN_108c527f0(puVar4,plVar11 + 5);
          plVar10 = (long *)*plVar10;
          func_0x000108c59878();
          FUN_108c52424();
        }
        func_0x000108c59878();
        FUN_108c41838();
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        func_0x000108c5916c();
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_108c41ee8(puVar4 + 2,plVar5 + 2);
        puVar3 = puVar9 + 3;
        func_0x000107c278c4(puVar3,puVar4 + 2);
        puVar4[1] = puVar3;
        func_0x000108c59878();
        FUN_108c52424();
        func_0x000108c59288();
        puVar4 = puVar3;
      }
    }
  }
  else {
    func_0x000108c59878();
    FUN_108c41b74();
    *(undefined1 *)(puVar9 + 5) = 1;
  }
  plVar11 = *(long **)(puVar2[4] + 0xa8);
  *(undefined8 *)(puVar2[4] + 0xa8) = 0;
  __ZNSt3__15mutex6unlockEv(lVar8 + 0x60);
  if (plVar11 == (long *)0x0) {
    func_0x000108c598d8();
  }
  else {
    (**(code **)(*plVar11 + 0x10))(plVar11,puVar2 + 4);
    func_0x000108c59790();
  }
  func_0x000108c5950c();
  func_0x000108c58ed4();
  func_0x000108c58db8();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c523ec; end: 108c52423;  */

long FUN_108c523ec(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c5241c);
  (*pcVar1)();
}



/* Entry: 108c52424; end: 108c527ef;  */

void FUN_108c52424(float param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *extraout_x8;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *extraout_x9;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  byte bVar18;
  
  plVar10 = param_2 + 3;
  func_0x000107c278c4(plVar10,param_3 + 2);
  plVar11 = param_2 + 1;
  plVar13 = (long *)*plVar11;
  param_3[1] = (long)plVar10;
  func_0x000108c59820();
  if ((plVar13 != (long *)0x0) && (param_1 <= *(float *)(param_2 + 4) * (float)plVar13))
  goto LAB_108c52648;
  func_0x000108c598a8();
  bVar2 = (long *)0x2 < plVar13;
  bVar3 = plVar13 == (long *)0x3;
  func_0x000108c59338();
  plVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar13 = (long *)*plVar11;
  }
  if (plVar13 < plVar12) {
LAB_108c524c8:
    plVar13 = plVar11;
    FUN_108c41ad8(plVar11,plVar12);
    FUN_108c41820(param_2,plVar13);
    param_2[1] = (long)plVar12;
    lVar6 = *param_2;
    for (plVar13 = (long *)0x0; plVar12 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar13 * 8) = 0;
    }
    plVar13 = (long *)param_2[2];
    if (plVar13 != (long *)0x0) {
      plVar15 = (long *)plVar13[1];
      uVar14 = (long)plVar12 - 1;
      if (((ulong)plVar12 & uVar14) == 0) {
        plVar15 = (long *)((ulong)plVar15 & uVar14);
      }
      else if (plVar12 <= plVar15) {
        uVar1 = 0;
        if (plVar12 != (long *)0x0) {
          uVar1 = (ulong)plVar15 / (ulong)plVar12;
        }
        plVar15 = (long *)((long)plVar15 - uVar1 * (long)plVar12);
      }
      *(long **)(lVar6 + (long)plVar15 * 8) = param_2 + 2;
      while (plVar9 = plVar13, plVar13 = (long *)*plVar9, plVar13 != (long *)0x0) {
        plVar17 = (long *)plVar13[1];
        if (((ulong)plVar12 & uVar14) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar14);
        }
        else if (plVar12 <= plVar17) {
          uVar1 = 0;
          if (plVar12 != (long *)0x0) {
            uVar1 = (ulong)plVar17 / (ulong)plVar12;
          }
          plVar17 = (long *)((long)plVar17 - uVar1 * (long)plVar12);
        }
        if (plVar17 != plVar15) {
          plVar8 = plVar13;
          if (*(long *)(lVar6 + (long)plVar17 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar17 * 8) = plVar9;
            plVar15 = plVar17;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)0x0;
              if (*plVar7 == 0) break;
              plVar5 = plVar13 + 2;
              func_0x000107c278d0(plVar5,*plVar7 + 0x10);
              plVar8 = (long *)*plVar7;
            } while (((ulong)plVar5 & 1) != 0);
            *plVar9 = (long)plVar8;
            lVar6 = *param_2;
            *plVar7 = **(long **)(lVar6 + (long)plVar17 * 8);
            **(undefined8 **)(lVar6 + (long)plVar17 * 8) = plVar13;
            plVar13 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar12 < plVar13) {
    plVar15 = (long *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar15) {
      plVar15 = (long *)(1L << (-LZCOUNT((long)plVar15 - 1) & 0x3fU));
    }
    if (plVar12 <= plVar15) {
      plVar12 = plVar15;
    }
    if (plVar12 < plVar13) {
      if (plVar12 != (long *)0x0) goto LAB_108c524c8;
      func_0x000108c59130();
      FUN_108c41820();
      param_2[1] = 0;
    }
  }
  plVar13 = (long *)*plVar11;
LAB_108c52648:
  uVar14 = (long)plVar13 - 1;
  if (((ulong)plVar13 & uVar14) == 0) {
    plVar12 = (long *)(uVar14 & (ulong)plVar10);
  }
  else {
    plVar12 = plVar10;
    if (plVar13 <= plVar10) {
      uVar1 = 0;
      if (plVar13 != (long *)0x0) {
        uVar1 = (ulong)plVar10 / (ulong)plVar13;
      }
      plVar12 = (long *)((long)plVar10 - uVar1 * (long)plVar13);
    }
  }
  plVar15 = *(long **)(*param_2 + (long)plVar12 * 8);
  if (plVar15 != (long *)0x0) {
    uVar16 = 0;
    bVar18 = 0;
    for (; lVar6 = *plVar15, lVar6 != 0; plVar15 = (long *)*plVar15) {
      plVar9 = *(long **)(lVar6 + 8);
      if (((ulong)plVar13 & uVar14) == 0) {
        plVar17 = (long *)((ulong)plVar9 & uVar14);
      }
      else {
        plVar17 = plVar9;
        if (plVar13 <= plVar9) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar13;
          }
          plVar17 = (long *)((long)plVar9 - uVar1 * (long)plVar13);
        }
      }
      if (plVar17 != plVar12) break;
      if (plVar9 == plVar10) {
        lVar6 = lVar6 + 0x10;
        func_0x000107c278d0(lVar6,param_3 + 2);
        uVar4 = (uint)lVar6;
      }
      else {
        uVar4 = 0;
      }
      bVar3 = uVar4 != uVar16;
      if ((bool)(bVar18 & bVar3)) break;
      uVar16 = uVar16 | bVar3;
      bVar18 = bVar18 | bVar3;
    }
    plVar13 = (long *)*plVar11;
  }
  bVar18 = POPCOUNT((char)plVar13) + POPCOUNT((char)((ulong)plVar13 >> 8)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x10)) + POPCOUNT((char)((ulong)plVar13 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x20)) + POPCOUNT((char)((ulong)plVar13 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x30)) + POPCOUNT((char)((ulong)plVar13 >> 0x38));
  plVar10 = (long *)param_3[1];
  if (bVar18 < 2) {
    plVar10 = (long *)((long)plVar13 - 1U & (ulong)plVar10);
  }
  else if (plVar13 <= plVar10) {
    uVar14 = 0;
    if (plVar13 != (long *)0x0) {
      uVar14 = (ulong)plVar10 / (ulong)plVar13;
    }
    plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar13);
  }
  if (plVar15 == (long *)0x0) {
    plVar11 = param_2 + 2;
    *param_3 = *plVar11;
    *plVar11 = (long)param_3;
    lVar6 = *param_2;
    *(long **)(lVar6 + (long)plVar10 * 8) = plVar11;
    if (*param_3 != 0) {
      plVar10 = *(long **)(*param_3 + 8);
      if (bVar18 < 2) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar10) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar10 / (ulong)plVar13;
        }
        plVar10 = (long *)((long)plVar10 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar6 + (long)plVar10 * 8) = param_3;
    }
  }
  else {
    *param_3 = *plVar15;
    *plVar15 = (long)param_3;
    if (*param_3 != 0) {
      plVar11 = *(long **)(*param_3 + 8);
      if (bVar18 < 2) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar11) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar11 / (ulong)plVar13;
        }
        plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
      }
      if (plVar11 != plVar10) {
        *(long **)(*param_2 + (long)plVar11 * 8) = param_3;
      }
    }
  }
  func_0x000108c597e0();
  return;
}



/* Entry: 108c527f0; end: 108c52823;  */

undefined8 * FUN_108c527f0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_108c52824(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 108c52824; end: 108c52833;  */

void FUN_108c52824(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x48;
  if ((ulong)((param_1[2] - *param_1) / 0x48) < uVar1) {
    func_0x000108c40c54(param_1);
    plVar2 = param_1;
    FUN_108c41108(param_1,uVar1);
    FUN_108c41fd4(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x48)) {
      FUN_108c52924(param_2,param_3);
      func_0x000108c43e8c();
      lVar3 = param_1[1];
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x48;
        FUN_108c4064c();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_108c52924(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  FUN_108c42054(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 108c52834; end: 108c52923;  */

void FUN_108c52834(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x48) < param_4) {
    func_0x000108c40c54(param_1);
    plVar1 = param_1;
    FUN_108c41108(param_1,param_4);
    FUN_108c41fd4(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x48)) {
      FUN_108c52924(param_2,param_3);
      func_0x000108c43e8c();
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x48;
        FUN_108c4064c();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_108c52924(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  FUN_108c42054(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 108c52924; end: 108c5294f;  */

void FUN_108c52924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_108c52950(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 108c52950; end: 108c529a7;  */

void FUN_108c52950(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x48) {
    FUN_108c529a8(param_4,param_2);
    param_4 = param_4 + 0x48;
  }
  func_0x000108c58f94();
  return;
}



/* Entry: 108c529a8; end: 108c52a03;  */

void FUN_108c529a8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000108c59048();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (unaff_x20 + 0x18,unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  return;
}



/* Entry: 108c52a04; end: 108c52a2f;  */

void FUN_108c52a04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110ab9460;
  return;
}



/* Entry: 108c52a30; end: 108c52a7b;  */

void FUN_108c52a30(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c5945c();
  FUN_108c414b0();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108c52a7c; end: 108c52a8f;  */

void FUN_108c52a7c(void)

{
  func_0x000108c52a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c52a90; end: 108c52ac7;  */

undefined8 FUN_108c52a90(undefined8 param_1)

{
  func_0x000108c59734();
  FUN_108c52bf4();
  return param_1;
}



/* Entry: 108c52ac8; end: 108c52aeb;  */

long FUN_108c52ac8(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x000108c598c0(&PTR_SUB_110abaae8,param_2,param_1);
  if (extraout_x8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2795c(param_2 + 0x18,param_1 + 0x10);
  return param_2;
}



/* Entry: 108c52aec; end: 108c52baf;  */

void FUN_108c52aec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  long alStack_30 [2];
  
  FUN_108c50364(alStack_30,param_1 + 8);
  if (alStack_30[0] != 0) {
    if (*(long *)(alStack_30[0] + 0x48) == 0) {
      uVar1 = *(undefined8 *)(alStack_30[0] + 0x38);
      func_0x000108c59c78();
      func_0x000108c590c8();
      func_0x000108c59724();
      func_0x000108c58e20(uVar1,auStack_70,auStack_48);
      func_0x000108c594c0();
      func_0x000108c58f34();
    }
    else {
      func_0x000108c59afc(auStack_70);
      func_0x000108c59444();
      FUN_108c643fc();
      func_0x000108c3f498(auStack_70);
    }
  }
  func_0x000108c4d780(alStack_30);
  return;
}



/* Entry: 108c52bb0; end: 108c52be7;  */

long FUN_108c52bb0(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110abab48);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108c52be8; end: 108c52bf3;  */

undefined ** FUN_108c52be8(void)

{
  return &PTR_DAT_110abab48;
}



/* Entry: 108c52bf4; end: 108c52c43;  */

long FUN_108c52bf4(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c598c0(&PTR_SUB_110abaae8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2795c(param_1 + 0x18,param_2 + 0x10);
  return param_1;
}



/* Entry: 108c52c44; end: 108c52c8b;  */

undefined8 FUN_108c52c44(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27938(param_1 + 0x90);
  FUN_108c4d75c(param_1 + 0x78);
  FUN_108c4d75c(param_1 + 0x68);
  func_0x000108c4eaf8(param_1 + 0x40);
  func_0x000107c278a8(param_1 + 0x28);
  func_0x000108c599c8();
  func_0x000108c4d884();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 108c52c8c; end: 108c52d0f;  */

void FUN_108c52c8c(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108c58ca8();
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  *puVar1 = FUN_108c57a9c;
  puVar1[1] = FUN_108c57bac;
  FUN_108c52d10(puVar1 + 4);
  FUN_108c53630(puVar1 + 2);
  func_0x000108c5926c();
  puVar1[0x1b] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  func_0x000108c58cb8();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c52d10; end: 108c52dc3;  */

void FUN_108c52d10(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000108c59890();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c2795c(unaff_x19 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x000107c2795c(unaff_x19 + 0x50,param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  func_0x000105302f48(unaff_x19 + 0x90,param_2 + 0x90);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  return;
}



/* Entry: 108c52dc4; end: 108c52e03;  */

void FUN_108c52dc4(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000108c58e60();
  return;
}



/* Entry: 108c52e04; end: 108c52e23;  */

void FUN_108c52e04(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000108c58df8();
  FUN_108c51fc0();
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108c52e24; end: 108c5362f;  */

void FUN_108c52e24(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long extraout_x8_12;
  undefined1 extraout_w9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  uint extraout_w10_10;
  uint extraout_w10_11;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined1 auStack_a8 [24];
  undefined8 auStack_90 [6];
  
  func_0x000108c59054();
  puVar6 = (undefined8 *)0x280;
  __Znwm();
  *puVar6 = FUN_108c572dc;
  puVar6[1] = FUN_108c57a34;
  puVar6[0x49] = unaff_x20;
  FUN_108c53630(puVar6 + 2);
  func_0x000108c5926c();
  uVar4 = *(ulong *)(unaff_x20 + 0x30) <= *(ulong *)(unaff_x20 + 0x28);
  uVar5 = *(ulong *)(unaff_x20 + 0x28) == *(ulong *)(unaff_x20 + 0x30);
  if ((bool)uVar5) {
    func_0x000108c58980();
    puVar6 = auStack_90;
  }
  else {
    plVar7 = (long *)(unaff_x20 + 0x40);
    FUN_108c53658(puVar6 + 4);
    puVar6[0xf] = puVar6[4];
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(puVar6[0xf]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x4f) = 0;
      lVar10 = puVar6[0xf];
      func_0x000108c58cfc();
      lVar11 = *plVar7;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar7;
      }
      func_0x000108c59848();
      plVar8 = extraout_x8;
      do {
        if (*plVar8 == 0) {
          func_0x000108c58a1c();
          plVar8 = extraout_x8_01;
          uVar2 = extraout_w10_01;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar8 = extraout_x8_00;
          uVar2 = extraout_w10_00;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) goto LAB_108c53060;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    puVar12 = puVar6 + 0xf;
    FUN_108c523ec(puVar12);
    FUN_108c41b74(puVar6 + 10,puVar12);
    puVar15 = (undefined4 *)puVar6[0x49];
    func_0x000108c58f3c();
    func_0x000108c58d90();
    puVar12 = puVar6 + 0xc;
    while (puVar12 = (undefined8 *)*puVar12, puVar12 != (undefined8 *)0x0) {
      func_0x000108c59400(puVar6 + 0x2e);
      func_0x000108c59a70();
      func_0x000108c595ac();
    }
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    func_0x000108c58dc8();
    plVar7 = puVar6 + 0x3d;
    func_0x000107c31930();
    lVar10 = 0;
    uVar13 = *(ulong *)(puVar6[0x49] + 0x28);
    uVar1 = *(ulong *)(puVar6[0x49] + 0x30);
    while( true ) {
      puVar6[0x4a] = lVar10;
      uVar4 = uVar1 <= uVar13;
      uVar5 = uVar13 == uVar1;
      if ((bool)uVar5) break;
      func_0x000108c59a18();
      plVar8 = (long *)0x0;
      if (plVar7 == (long *)0x0) {
LAB_108c52f98:
        func_0x000108c59a64();
        if (plVar7 != (long *)0x0) {
          lVar10 = lVar10 + 1;
        }
      }
      else {
        plVar8 = plVar7 + 5;
        FUN_108c6b380();
        if ((int)plVar8 != 0) goto LAB_108c52f98;
      }
      uVar13 = uVar13 + 0x18;
      plVar7 = plVar8;
    }
    func_0x000108c59104();
    if ((bool)uVar5) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c59b78();
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c59400(puVar6 + 0x1f);
      func_0x000108c59554();
      func_0x000107c278b8(puVar6 + 0x22);
      func_0x000108c59604();
      func_0x000108c5954c();
      func_0x000108c59200();
      puVar12 = (undefined8 *)puVar6[0x49];
      func_0x000108c59008();
      func_0x000108c59034();
      func_0x000108c59010();
      lVar10 = puVar12[1];
      uVar14 = *puVar12;
      puVar6[0x47] = puVar12[1];
      puVar6[0x46] = uVar14;
      if (lVar10 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_05 != 0);
      }
      func_0x000108c59604();
      func_0x000108c593a8();
      func_0x000108c58ea8();
      func_0x000108c59830();
      FUN_108c5382c(puVar6 + 0x46,puVar15 + 4,auStack_90,auStack_a8,puVar6 + 0x48);
      func_0x000108c59ccc();
      func_0x000108c58d60();
      func_0x000108c58dc0();
      func_0x000108c4cad0(puVar6 + 0x46);
      func_0x000108c59cac();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_06 != 0);
      }
      func_0x000108c59084();
      func_0x000108c4cad0(puVar6 + 0x44);
      func_0x000108c599e8();
    }
    else {
      func_0x000108c5959c();
      func_0x000108c59ce0(puVar6[0xf]);
      do {
        func_0x000108c58a0c();
      } while (extraout_w10_02 != 0);
      func_0x000108c58d54(puVar6[0x14]);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x4f) = 1;
        lVar10 = puVar6[0x14];
        func_0x000108c58cfc();
        lVar11 = *plVar7;
        if (lVar11 == 0) {
          func_0x000107c3a5c0();
          lVar11 = *plVar7;
        }
        func_0x000108c59848();
        plVar8 = extraout_x8_02;
        do {
          if (*plVar8 == 0) {
            func_0x000108c58a1c();
            plVar8 = extraout_x8_04;
            uVar2 = extraout_w10_04;
            uVar9 = extraout_w11_02;
          }
          else {
            func_0x000108c58d84();
            plVar8 = extraout_x8_03;
            uVar2 = extraout_w10_03;
            uVar9 = extraout_w11_01;
          }
          if ((uVar9 & 1) != 0) goto LAB_108c53060;
        } while ((uVar2 >> 1 & 1) == 0);
      }
      func_0x000108c58d54(puVar6[0x14]);
      if ((extraout_w8_02 >> 5 & 1) != 0) {
        func_0x000108c59c28();
        __ZSt17rethrow_exceptionSt13exception_ptr();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108c53414);
        (*pcVar3)();
      }
      func_0x000108c59968();
      func_0x000108c58e28();
      func_0x000108c58f3c();
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c590d8();
      if ((bool)uVar5) {
        func_0x000108c59544();
      }
      else {
        func_0x000108c59544();
        uVar14 = *(undefined8 *)puVar6[0x49];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar6 + 0x37,(undefined8 *)puVar6[0x49] + 2);
        FUN_108c51960(puVar6 + 0x3a,*puVar15);
        func_0x000108c58e20(uVar14,puVar6 + 0x37,puVar6 + 0x3a);
        func_0x000108c59504();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6 + 0x37);
      }
      func_0x000108c59c98();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_07 != 0);
      }
      func_0x000108c59a3c();
      func_0x000108c59418();
      func_0x000108c5937c();
      func_0x000108c58dc0();
      func_0x000108c4cad0(puVar6 + 0x40);
      func_0x000108c59dac();
      if (extraout_x8_08 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_08 != 0);
      }
      func_0x000108c58fbc();
      func_0x000108c59908();
      func_0x000108c4cad0(puVar6 + 0x42);
      uVar5 = *(char *)((long)puVar6 + 0x4c) == '\x01';
      if (((bool)uVar5) && (puVar6[7] != 0)) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000108c598f0();
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000108c59b60();
        func_0x000108c59554();
        func_0x000107c278b8(puVar6 + 0x34);
        func_0x000108c59438();
        plVar7 = puVar6 + 0x31;
        func_0x000107c278b8();
        func_0x000108c591a4();
        func_0x000108c594a8();
        func_0x000108c594b0();
        func_0x000108c592dc();
        func_0x000108c59688();
        func_0x000108c59ce0(puVar6[0x48]);
        do {
          func_0x000108c58a0c();
        } while (extraout_w10_09 != 0);
        func_0x000108c58d54(puVar6[0x14]);
        if ((extraout_w8_03 >> 1 & 1) == 0) {
          *(undefined1 *)(puVar6 + 0x4f) = 2;
          lVar11 = puVar6[0x14];
          func_0x000108c58cfc();
          lVar10 = *plVar7;
          if (lVar10 == 0) {
            func_0x000107c3a5c0();
            lVar10 = *plVar7;
          }
          func_0x000108c59848();
          plVar8 = extraout_x8_09;
          do {
            if (*plVar8 == 0) {
              func_0x000108c58a1c();
              plVar8 = extraout_x8_11;
              uVar2 = extraout_w10_11;
              uVar9 = extraout_w11_04;
            }
            else {
              func_0x000108c58d84();
              plVar8 = extraout_x8_10;
              uVar2 = extraout_w10_10;
              uVar9 = extraout_w11_03;
            }
            if ((uVar9 & 1) != 0) {
              func_0x000108c58b3c();
              if ((bool)uVar5) {
                func_0x000108c58a2c();
                func_0x000108c58960();
                func_0x000108c58944();
                *(long **)(lVar11 + 0x90) = plVar7;
              }
              func_0x000108c58b2c();
              *(long *)(extraout_x8_12 + 0x20) = lVar10;
              goto LAB_108c53090;
            }
          } while ((uVar2 >> 1 & 1) == 0);
        }
        func_0x000107c28834(puVar6 + 0x14);
        func_0x000108c59024();
        func_0x000108c58ed4();
      }
      func_0x000108c593a0();
      FUN_108c54074(puVar6 + 0x14,puVar6[0x3d],puVar6[0x3e]);
      puVar6[0x10] = 0;
      puVar6[0xf] = 0;
      puVar6[0x12] = 0;
      puVar6[0x11] = 0;
      *(undefined4 *)(puVar6 + 0x13) = 0x3f800000;
      func_0x000108c58dc8(puVar6[0x49]);
      puVar12 = puVar6 + 0xf;
      func_0x000108c41908();
      lVar11 = *(long *)(puVar6[0x49] + 0x30);
      for (lVar10 = *(long *)(puVar6[0x49] + 0x28); lVar10 != lVar11; lVar10 = lVar10 + 0x18) {
        func_0x000108c59b2c();
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = puVar6 + 10;
          func_0x000108c5973c();
          if (puVar12 != (undefined8 *)0x0) {
            func_0x000108c58c70();
            func_0x000108c59620();
          }
        }
        else {
          puVar12 = puVar6 + 4;
          func_0x000108c5973c();
          if (puVar12 == (undefined8 *)0x0) {
            func_0x000108c58c70();
            FUN_108c40c94();
          }
          else {
            func_0x000108c58c70();
            func_0x000108c59620();
          }
        }
      }
      if (*(long *)(puVar6[0x49] + 0xa8) != 0) {
        func_0x000104c003e8(puVar6[0x49] + 0x90);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c59b84();
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000108c59760(puVar6 + 0x2b);
      func_0x000108c59554();
      func_0x000107c278b8(puVar6 + 0x28);
      func_0x000108c595e4();
      func_0x000108c59154();
      func_0x000108c59174();
      func_0x000108c59488();
      func_0x000108c59490();
      func_0x000108c59a00();
      func_0x000108c5953c();
      func_0x000108c596d8();
      func_0x000108c59390();
    }
    func_0x000108c593c4();
    puVar6 = puVar6 + 10;
  }
  func_0x000108c42160(puVar6);
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
LAB_108c53060:
  func_0x000108c58b3c();
  if ((bool)uVar5) {
    func_0x000108c58a2c();
    uVar5 = extraout_w8;
    if ((bool)uVar4) {
      uVar5 = extraout_w9;
    }
    func_0x000108c59744();
    *(undefined1 *)plVar7 = uVar5;
    func_0x000108c589e8(0);
    *(long **)(lVar10 + 0x90) = plVar7;
  }
  func_0x000108c58b2c();
  *(long *)(extraout_x8_05 + 0x20) = lVar11;
LAB_108c53090:
  func_0x000108c59560();
  return;
}



/* Entry: 108c53630; end: 108c53657;  */

void FUN_108c53630(void)

{
  func_0x000108c59d80();
  FUN_108c51f24();
  func_0x000108c58bc0();
  return;
}



/* Entry: 108c53658; end: 108c537fb;  */

void FUN_108c53658(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  func_0x000108c59054();
  func_0x000108c59678();
  plVar2 = param_1 + 2;
  *param_1 = FUN_108c57074;
  param_1[1] = FUN_108c57120;
  FUN_108c53630();
  func_0x000108c5926c();
  func_0x000108c599a4();
  if (param_1[4] == 0) {
    func_0x000108c58d7c();
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    FUN_108c52e04(param_1 + 2,&uStack_70);
    func_0x000108c596a0();
  }
  else {
    func_0x000108c59d1c();
    func_0x000108c59ab8(param_1 + 7);
    func_0x000108c59278();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(param_1[6]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      func_0x000108c58970();
      unaff_x21 = *plVar2;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar2;
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    FUN_108c523ec(param_1 + 6);
    func_0x000108c59cec();
    do {
      uStack_70 = 0;
      lVar3 = unaff_x21 + 0x10;
      func_0x000108c58aa0(lVar3,&uStack_70);
      if ((int)lVar3 != 0) {
        FUN_108c52034(unaff_x21 + 0x98);
        func_0x000108c59bf8();
        *(undefined1 *)(unaff_x21 + 0xc0) = 1;
        func_0x000108c58ae4();
        break;
      }
    } while (((uint)uStack_70 >> 1 & 1) == 0);
    func_0x000108c58edc();
    func_0x000108c58ddc();
    func_0x000108c58d98();
    func_0x000108c58d7c();
  }
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c537fc; end: 108c5382b;  */

void FUN_108c537fc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_108c6b3e0(plVar1 + 5);
  }
  return;
}



/* Entry: 108c5382c; end: 108c5392b;  */

void FUN_108c5382c(undefined8 *param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = *param_1;
  func_0x000108c59760(auStack_68);
  func_0x000108c58fac(auStack_80);
  FUN_108c6c68c(uVar1,auStack_68,auStack_80,in_x4);
  func_0x000108c58f44();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  uVar1 = *param_1;
  func_0x000108c59760(auStack_98);
  func_0x000108c58fac(auStack_b0);
  func_0x000108c592ec(auStack_c8);
  func_0x000108c591d8();
  FUN_108c6c320(uVar1);
  func_0x000108c58d60();
  func_0x000108c58dc0();
  func_0x000108c590a0();
  return;
}



/* Entry: 108c5392c; end: 108c53ad7;  */

void FUN_108c5392c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (0 < param_3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_68);
    func_0x000107c278b8(auStack_80,&DAT_10f2e0488);
    func_0x000108c59914();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
    func_0x000108c58fac(auStack_98);
    func_0x000107c278b8(auStack_b0,&DAT_10f2e048c);
    func_0x000108c59914();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x000108c58fac(auStack_c8);
    func_0x000108c595bc();
    func_0x000108c59914();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    func_0x000108c593cc();
    uVar1 = *param_1;
    func_0x000108c58fac(auStack_f8);
    func_0x000108c590c8();
    func_0x000108c59854();
    FUN_108c6c720(uVar1);
    func_0x000108c58f34();
    func_0x000108c58fb4();
  }
  return;
}



/* Entry: 108c53ad8; end: 108c53d4f;  */

void FUN_108c53ad8(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_68 [5];
  
  func_0x000108c58d68();
  puVar2 = (undefined8 *)0x100;
  __Znwm();
  *puVar2 = FUN_108c57148;
  puVar2[1] = FUN_108c5722c;
  puVar3 = (undefined8 *)0xd0;
  __Znwm();
  puVar4 = puVar3;
  func_0x000108c59450();
  func_0x000107c31510();
  *puVar4 = &PTR_FUN_110abab68;
  *(undefined1 *)(puVar4 + 0x13) = 0;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  lStack_a0 = 0;
  auStack_68[0] = 0;
  func_0x000107c27f98(auStack_68);
  func_0x000107c27f9c(&lStack_a0);
  puVar2[2] = puVar3;
  puVar2[3] = puVar3;
  lStack_a0 = 0;
  uStack_98 = 0;
  func_0x000107c27fec(&lStack_a0);
  lStack_a0 = puVar2[2];
  if (lStack_a0 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  *extraout_x8 = lStack_a0;
  lStack_a0 = 0;
  func_0x000107c27f9c(&lStack_a0);
  FUN_108c50364(puVar2 + 0x1b);
  if (puVar2[0x1b] == 0) {
    func_0x000108c592e4();
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 0x3f800000;
    func_0x000108c54048(&lStack_a0,puVar2 + 0x16,1);
    func_0x000108c591f4();
    func_0x000108c596a0();
    func_0x000108c42160(puVar2 + 0x16);
  }
  else {
    plVar5 = *(long **)(puVar2[0x1b] + 0x28);
    func_0x000108c59ba4(puVar2 + 0x1e);
    puVar2[0x1d] = puVar2[0x1e];
    do {
      func_0x000108c58a0c();
    } while (extraout_w10_00 != 0);
    func_0x000108c58d54(puVar2[0x1d]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar2 + 0x1f) = 0;
      func_0x000108c58970();
      if (*plVar5 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar5 = extraout_x8_00;
      do {
        if (*plVar5 == 0) {
          func_0x000108c58a1c();
          plVar5 = extraout_x8_02;
          uVar1 = extraout_w10_02;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar5 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    FUN_108c51bc4(puVar2 + 0x1d);
    func_0x000108c59514();
    func_0x000108c59710();
    func_0x000108c5902c();
    func_0x000108c59cf8();
    if ((bool)in_ZR) {
      FUN_108c6ae84(auStack_68,puVar2 + 4);
      FUN_108c41898(puVar2 + 0xc,auStack_68);
      func_0x000108c54048(&lStack_a0,puVar2 + 0xc,*(undefined4 *)(puVar2 + 0xb));
      func_0x000108c591f4();
      func_0x000108c596a0();
      func_0x000108c42160(puVar2 + 0xc);
      puVar2 = auStack_68;
    }
    else {
      func_0x000108c594e8();
      func_0x000108c54048(&lStack_a0,puVar2 + 0x11);
      func_0x000108c591f4();
      func_0x000108c596a0();
      puVar2 = puVar2 + 0x11;
    }
    func_0x000108c42160(puVar2);
    func_0x000108c58ff4();
    func_0x000108c592e4();
  }
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c53d50; end: 108c53e83;  */

void FUN_108c53d50(undefined8 *param_1)

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
  
  func_0x000108c58d68();
  func_0x000108c59678();
  plVar2 = param_1 + 2;
  *param_1 = FUN_108c5725c;
  param_1[1] = FUN_108c572b4;
  func_0x000107c27f94();
  func_0x000108c599f4();
  func_0x000108c5994c();
  if (param_1[4] != 0) {
    func_0x000108c59d1c();
    func_0x000108c59ba4(param_1 + 7);
    func_0x000108c59278();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
    func_0x000108c58d54(param_1[6]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      func_0x000108c58970();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c58f88();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x000108c58a1c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c58d84();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c589d4();
          if ((bool)in_ZR) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588d8();
          }
          func_0x000108c588ac();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    func_0x000107c28834(param_1 + 6);
    func_0x000108c58ddc();
    func_0x000108c58d98();
  }
  func_0x000108c58d7c();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c53e84; end: 108c53eb7;  */

long FUN_108c53e84(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c54314(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 108c53eb8; end: 108c53f7f;  */

long FUN_108c53eb8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000107c278c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c278d0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 108c53f80; end: 108c53ff3;  */

void FUN_108c53f80(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c597b0();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 200) == '\x01') {
        param_1 = (long *)(unaff_x20 + 0x98);
        func_0x000108c42160();
        *(undefined1 *)(unaff_x20 + 200) = 0;
      }
      func_0x000108c59d28();
      FUN_108c41898();
      uVar2 = *(undefined4 *)(unaff_x21 + 0x28);
      *(undefined1 *)(unaff_x20 + 0xc4) = *(undefined1 *)(unaff_x21 + 0x2c);
      *(undefined4 *)(unaff_x20 + 0xc0) = uVar2;
      *(undefined1 *)(unaff_x20 + 200) = 1;
      func_0x000108c5892c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar6 = (long *)(param_2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)*param_1;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar5 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar5 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,param_1);
      do {
        uVar5 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108c53ff4; end: 108c53ff7;  */

undefined8 * FUN_108c53ff4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abab68;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x000108c42160(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c53ff8; end: 108c5400b;  */

void FUN_108c53ff8(void)

{
  FUN_108c5400c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5400c; end: 108c54073;  */

undefined8 * FUN_108c5400c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abab68;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    func_0x000108c42160(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c54074; end: 108c540af;  */

undefined8 * FUN_108c54074(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_108c540b0();
  return param_1;
}



/* Entry: 108c540b0; end: 108c540eb;  */

void FUN_108c540b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  func_0x000108c58d68();
  for (; unaff_x20 != param_3; unaff_x20 = unaff_x20 + 0x18) {
    FUN_108c540ec();
  }
  return;
}



/* Entry: 108c540ec; end: 108c5411f;  */

void FUN_108c540ec(void)

{
  func_0x000108c54104();
  return;
}



/* Entry: 108c54120; end: 108c54313;  */

undefined1  [16] FUN_108c54120(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x000108c59c34();
  func_0x000108c59bc0();
  uVar8 = unaff_x19[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x25 = uVar9 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar8 <= param_2) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = param_2 / uVar8;
        }
        unaff_x25 = param_2 - uVar4 * uVar8;
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_108c541d4;
          uVar4 = plVar7[1];
          if (uVar4 != param_2) break;
          plVar2 = plVar7 + 2;
          func_0x000107c278d0(plVar2,param_3);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_108c542e0;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar4 = uVar4 & uVar9;
        }
        else if (uVar8 <= uVar4) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar4 / uVar8;
          }
          uVar4 = uVar4 - uVar1 * uVar8;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_108c541d4:
  plVar2 = unaff_x19 + 2;
  plVar7 = (long *)0x28;
  __Znwm();
  in_stack_00000018 = 0;
  *plVar7 = 0;
  plVar7[1] = param_2;
  in_stack_00000008 = plVar7;
  in_stack_00000010 = plVar2;
  func_0x000108c58fac(plVar7 + 2);
  in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,1);
  func_0x000108c59820();
  if ((uVar8 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar8 < param_1)) {
    func_0x000108c598a8();
    func_0x000108c59338();
    func_0x000107c28280();
    uVar8 = unaff_x19[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar8 <= param_2) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = param_2 / uVar8;
        }
        unaff_x25 = param_2 - uVar9 * uVar8;
      }
    }
  }
  plVar7 = in_stack_00000008;
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    *in_stack_00000008 = *plVar2;
    *plVar2 = (long)in_stack_00000008;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar2;
    if (*in_stack_00000008 != 0) {
      uVar9 = *(ulong *)(*in_stack_00000008 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = in_stack_00000008;
    }
  }
  else {
    *in_stack_00000008 = *plVar6;
    *plVar6 = (long)in_stack_00000008;
  }
  in_stack_00000008 = (long *)0x0;
  func_0x000108c597e0();
  func_0x000107c28284(&stack0x00000008);
  uVar3 = 1;
LAB_108c542e0:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 108c54314; end: 108c54523;  */

undefined1  [16] FUN_108c54314(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x000108c59bc0();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_2;
    }
    else {
      unaff_x27 = param_2;
      if (uVar7 <= param_2) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_2 / uVar7;
        }
        unaff_x27 = param_2 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_108c543dc;
          uVar3 = plVar6[1];
          if (uVar3 != param_2) break;
          plVar5 = plVar6 + 2;
          func_0x000107c278d0(plVar5,param_3);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_108c544f4;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = uVar3 & uVar8;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x27);
    }
  }
LAB_108c543dc:
  FUN_108c54524(aplStack_78);
  func_0x000108c59820();
  if ((uVar7 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar7 < param_1)) {
    func_0x000108c59338(uVar7 << 1);
    FUN_108c4191c();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_2;
    }
    else {
      unaff_x27 = param_2;
      if (uVar7 <= param_2) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_2 / uVar7;
        }
        unaff_x27 = param_2 - uVar8 * uVar7;
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar4 + unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  func_0x000108c597e0();
  func_0x000108c59288();
  uVar2 = 1;
LAB_108c544f4:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 108c54524; end: 108c54577;  */

void FUN_108c54524(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x000108c5916c();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_108c54578(param_2 + 2,*param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108c54578; end: 108c54593;  */

void FUN_108c54578(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 108c54594; end: 108c5460f;  */

void FUN_108c54594(undefined8 param_1)

{
  int extraout_w10;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_28 [8];
  
  FUN_108c54610(&lStack_30);
  FUN_108c54640(auStack_28,&UNK_10dd62ad6);
  lStack_38 = lStack_30;
  if (lStack_30 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  FUN_108c54650(param_1,&lStack_38);
  func_0x000108c58e60();
  func_0x000108c54c88(&lStack_30);
  return;
}



/* Entry: 108c54610; end: 108c5463f;  */

void FUN_108c54610(void)

{
  undefined1 auStack_30 [16];
  
  FUN_108c546d8(auStack_30);
  func_0x000108c58c2c();
  func_0x000108c58e60();
  func_0x000108c59acc();
  return;
}



/* Entry: 108c54640; end: 108c5464f;  */

undefined8 FUN_108c54640(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_38;
  
  uVar1 = *param_1;
  func_0x000108c58f54(uVar1,param_1,param_2);
  do {
    func_0x000108c58914();
    if ((int)uVar1 != 0) {
      func_0x000108c59860();
      FUN_108c547c4();
      func_0x000108c5892c();
      return uVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return uVar1;
}



/* Entry: 108c54650; end: 108c546d7;  */

void FUN_108c54650(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000108c59800();
  FUN_108c400ac();
  func_0x000108c59d10();
  FUN_108c40034();
  func_0x000107c3a5c0();
  func_0x000108c592f4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  func_0x000108c597a0();
  FUN_108c54c38();
  func_0x000108c59444(auStack_60);
  FUN_108c54818();
  FUN_108c54c68(auStack_90);
  func_0x000108c59698();
  FUN_108c40300(auStack_58);
  return;
}



/* Entry: 108c546d8; end: 108c5470f;  */

void FUN_108c546d8(void)

{
  __Znwm(0xf0);
  func_0x000108c59450();
  FUN_108c54710();
  func_0x000108c58bb0();
  func_0x000108c58e60();
  return;
}



/* Entry: 108c54710; end: 108c54733;  */

void FUN_108c54710(long param_1)

{
  func_0x000107c31510();
  func_0x000108c58f6c(&UNK_110abab98);
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}



/* Entry: 108c54734; end: 108c54737;  */

undefined8 * FUN_108c54734(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abab98);
  FUN_108c402d0();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c54738; end: 108c5474b;  */

void FUN_108c54738(void)

{
  FUN_108c5474c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5474c; end: 108c54777;  */

undefined8 * FUN_108c5474c(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abab98);
  FUN_108c402d0();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c54778; end: 108c547c3;  */

undefined8 FUN_108c54778(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c58f54();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59860();
      FUN_108c547c4();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 108c547c4; end: 108c547f3;  */

undefined1 * FUN_108c547c4(undefined1 *param_1)

{
  FUN_108c547f4();
  *param_1 = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 1;
  return param_1;
}



/* Entry: 108c547f4; end: 108c54817;  */

void FUN_108c547f4(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_108c40698();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 108c54818; end: 108c54847;  */

void FUN_108c54818(void)

{
  undefined1 auStack_50 [48];
  
  func_0x000108c59810();
  FUN_108c54c18();
  func_0x000108c597f0();
  FUN_108c54848();
  FUN_108c54c68(auStack_50);
  return;
}



/* Entry: 108c54848; end: 108c548b7;  */

void FUN_108c54848(void)

{
  func_0x000108c58ca8();
  func_0x000108c594d8();
  func_0x000108c59cc0(FUN_108c58788);
  FUN_108c54c18();
  func_0x000108c5951c();
  func_0x000108c58bd4();
  func_0x000108c58c48();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c548b8; end: 108c549ff;  */

void FUN_108c548b8(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  
  func_0x000108c58ef4();
  plVar2 = param_1;
  func_0x000108c58e88(FUN_108c586d0);
  func_0x000108c58bd4();
  func_0x000108c59250();
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    lVar5 = param_1[4];
    func_0x000108c58970();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000108c58a1c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108c58d84();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c58944();
          *(long **)(lVar5 + 0x90) = plVar2;
        }
        func_0x000108c58a6c();
        func_0x000108c58998();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108c54a20();
  FUN_108c54a00(param_1[6] + 8,unaff_x20);
  func_0x000108c58ed4();
  func_0x000108c58db8();
  func_0x000108c58ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c54a00; end: 108c54a1f;  */

void FUN_108c54a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c54a58(param_1,&uStack_18);
  return;
}


