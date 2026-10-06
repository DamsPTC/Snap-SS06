/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c6008c; end: 108c600df;  */

long FUN_108c6008c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c600e0; end: 108c600f3;  */

void FUN_108c600e0(void)

{
  func_0x000108c600b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c600f4; end: 108c6014b;  */

void FUN_108c600f4(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000108c62ea8();
    } while (extraout_w10 != 0);
  }
  FUN_108c5fd7c(param_1 + 8);
  func_0x000108c63014();
  return;
}



/* Entry: 108c6014c; end: 108c601fb;  */

undefined8 * FUN_108c6014c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_110abaf78;
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  plVar3 = (long *)param_1[0xb];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar3 + 2);
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[9];
  param_1[9] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[8] != 0) {
    plVar3 = (long *)param_1[7];
    plVar1 = *(long **)(param_1[6] + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[8] = 0;
    while (plVar3 != param_1 + 6) {
      plVar3 = (long *)plVar3[1];
      FUN_108c601fc();
    }
  }
  func_0x000108c4cad0(param_1 + 3);
  func_0x000108c4caf4(param_1 + 1);
  return param_1;
}



/* Entry: 108c601fc; end: 108c6029b;  */

void FUN_108c601fc(long param_1)

{
  func_0x000107c279c4(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c6029c; end: 108c6032f;  */

void FUN_108c6029c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x118;
  __Znwm();
  *puVar1 = FUN_108c62a0c;
  puVar1[1] = FUN_108c62b28;
  FUN_108c60330(puVar1 + 4,param_1);
  FUN_108c60b00(puVar1 + 2);
  func_0x000108c6336c();
  puVar1[0x20] = param_2;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  func_0x000108c63348(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108c60330; end: 108c60447;  */

undefined8 * FUN_108c60330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  param_1[5] = param_2[5];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 6,param_2 + 6);
  param_1[9] = param_2[9];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 10,param_2 + 10);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xf,param_2 + 0xf);
  puVar1 = (undefined8 *)param_2[0x16];
  if (puVar1 == (undefined8 *)0x0) {
    param_1[0x16] = 0;
  }
  else if (puVar1 == param_2 + 0x13) {
    param_1[0x16] = param_1 + 0x13;
    (**(code **)(*(long *)param_2[0x16] + 0x18))();
  }
  else {
    param_1[0x16] = puVar1;
    param_2[0x16] = 0;
  }
  func_0x000105302f48(param_1 + 0x17,param_2 + 0x17);
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}



/* Entry: 108c60448; end: 108c6048f;  */

void FUN_108c60448(long *param_1,long param_2)

{
  int extraout_w10;
  long lStack_18;
  
  lStack_18 = param_2;
  if (param_2 == 0) {
    lStack_18 = 0;
  }
  else {
    do {
      func_0x000108c62eb8();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_18;
  lStack_18 = 0;
  func_0x000107c27f9c(&lStack_18);
  return;
}



/* Entry: 108c60490; end: 108c604fb;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c60490(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  plVar6 = (long *)(param_1 + 8);
  lVar7 = *plVar6;
  do {
    uStack_38 = 0;
    lVar4 = lVar7 + 0x10;
    func_0x000108c62fa8(lVar4,&uStack_38);
    if ((int)lVar4 != 0) {
      func_0x00010865f984(lVar7 + 0x98);
      func_0x00010865f9a8(lVar7 + 0x98,param_2);
      func_0x000108c63084();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 108c604fc; end: 108c60aa7;  */

void FUN_108c604fc(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  code *extraout_x8_06;
  long *extraout_x8_07;
  long *plVar9;
  long *extraout_x8_08;
  long *extraout_x8_09;
  undefined8 *puVar10;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  long lVar11;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar12;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_58 [24];
  
  puVar6 = (undefined8 *)0x108;
  __Znwm();
  *puVar6 = FUN_108c624a0;
  puVar6[1] = FUN_108c629b0;
  puVar6[0x1f] = param_1;
  FUN_108c60b00(puVar6 + 2);
  func_0x000108c6336c();
  plVar7 = (long *)(param_1 + 0x28);
  FUN_108c60bac(puVar6 + 0x1c);
  puVar6[4] = puVar6[0x1c];
  do {
    func_0x000108c62eb8();
  } while (extraout_w10 != 0);
  func_0x000108c63000(puVar6[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x20) = 0;
    lVar13 = puVar6[4];
    func_0x000108c62f38();
    if (*plVar7 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c63210();
    plVar7 = extraout_x8;
    do {
      if (*plVar7 == 0) {
        func_0x000108c62ef4();
        plVar7 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar12 = extraout_x11_00;
      }
      else {
        func_0x000108c630f4();
        plVar7 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar12 = extraout_x11;
      }
      if ((uVar12 & 1) != 0) goto LAB_108c6075c;
    } while ((uVar3 >> 1 & 1) == 0);
  }
  puVar10 = puVar6 + 4;
  FUN_108c60aa8(puVar10);
  plVar7 = puVar6 + 8;
  func_0x00010867be90(plVar7,puVar10);
  func_0x000108c63128();
  func_0x000108c62fa0();
  func_0x000108c6338c();
  func_0x000108c63468();
  func_0x000108c63360();
  func_0x000108c631d8();
  lVar13 = puVar6[8];
  puVar10 = (undefined8 *)puVar6[0x1f];
  if (lVar13 == puVar6[9]) {
    lVar11 = puVar10[1];
    uVar14 = *puVar10;
    puVar6[0x17] = puVar10[1];
    puVar6[0x16] = uVar14;
    lVar8 = lVar13;
    if (lVar11 != 0) {
      plVar9 = (long *)(lVar11 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar8 = puVar6[9];
    }
    in_ZR = lVar13 == lVar8;
    func_0x000108c632f0();
    func_0x000108c63398();
    func_0x000108c632e4();
    func_0x000108c63450(puVar6[0x1e]);
    do {
      func_0x000108c62eb8();
    } while (extraout_w10_03 != 0);
    func_0x000108c62f64();
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x20) = 1;
      lVar13 = puVar6[0x1c];
      func_0x000108c62f38();
      if (*plVar7 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000108c63210();
      plVar7 = extraout_x8_03;
      do {
        if (*plVar7 == 0) {
          func_0x000108c62ef4();
          plVar7 = extraout_x8_05;
          uVar3 = extraout_w10_05;
          uVar12 = extraout_x11_02;
        }
        else {
          func_0x000108c630f4();
          plVar7 = extraout_x8_04;
          uVar3 = extraout_w10_04;
          uVar12 = extraout_x11_01;
        }
        if ((uVar12 & 1) != 0) goto LAB_108c6075c;
      } while ((uVar3 >> 1 & 1) == 0);
    }
    func_0x000108c62f64();
    lVar13 = puVar6[0x1c];
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      func_0x000108c633a4();
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar6 + 0x1d);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108c60938);
      (*pcVar4)();
    }
    func_0x000108c63334();
    uVar5 = *(undefined1 *)(lVar13 + 0xb4);
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(lVar13 + 0xb0);
    *(undefined1 *)((long)puVar6 + 0x3c) = uVar5;
    func_0x000108c62fa0();
    func_0x000108c63054();
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (*(char *)((long)puVar6 + 0x3c) == '\x01') {
      func_0x000108c63430();
      if (extraout_x9 != 0) {
        do {
          func_0x000108c62ea8();
        } while (extraout_w10_06 != 0);
      }
      func_0x000108c632a8();
      func_0x000108c631a8();
    }
    else {
      FUN_108c51960(auStack_58,*(undefined4 *)(puVar6 + 7));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar6 + 0xe,puVar6[0x1f] + 0x10);
      func_0x000108c6323c();
      func_0x000108c6310c();
      puVar10 = (undefined8 *)puVar6[0x1f];
      func_0x000108c63148();
      func_0x000108c63158();
      lVar13 = puVar10[1];
      uVar14 = *puVar10;
      puVar6[0x1b] = puVar10[1];
      puVar6[0x1a] = uVar14;
      if (lVar13 != 0) {
        do {
          func_0x000108c62ea8();
        } while (extraout_w10_07 != 0);
      }
      func_0x000108c633e8(puVar6[0x1f]);
      func_0x000108c6321c();
      func_0x000108c63150();
    }
    if ((*(char *)((long)puVar6 + 0x3c) == '\x01') && (uVar5 = puVar6[4] == puVar6[5], !(bool)uVar5)
       ) {
      plVar7 = *(long **)(puVar6[0x1f] + 0xb0);
      if (plVar7 != (long *)0x0) {
        func_0x000108c6345c();
        (*extraout_x8_06)();
      }
      func_0x000108c631f0();
      func_0x000108c63450(puVar6[0x1d]);
      do {
        func_0x000108c62eb8();
      } while (extraout_w10_08 != 0);
      func_0x000108c62f64();
      if ((extraout_w8_02 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x20) = 2;
        lVar13 = puVar6[0x1c];
        func_0x000108c62f38();
        if (*plVar7 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c63210();
        plVar9 = extraout_x8_07;
        do {
          if (*plVar9 == 0) {
            func_0x000108c62ef4();
            plVar9 = extraout_x8_09;
            uVar3 = extraout_w10_10;
            uVar12 = extraout_x11_04;
          }
          else {
            func_0x000108c630f4();
            plVar9 = extraout_x8_08;
            uVar3 = extraout_w10_09;
            uVar12 = extraout_x11_03;
          }
          if ((uVar12 & 1) != 0) {
            func_0x000108c62fe0();
            if ((bool)uVar5) {
              func_0x000108c62f04();
              func_0x000108c62e68();
              func_0x000108c62e78();
              *(long **)(lVar13 + 0x90) = plVar7;
            }
            func_0x000108c63408();
            goto LAB_108c6077c;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar6 + 0x1c);
      lVar13 = puVar6[0x1f];
      func_0x000108c62fa0();
      func_0x000108c63138();
      if (*(long *)(lVar13 + 0xd0) != 0) {
        func_0x000104c003e8(puVar6[0x1f] + 0xb8);
      }
    }
    lVar13 = puVar6[3];
    do {
      puVar6[0x1c] = 0;
      lVar8 = lVar13 + 0x10;
      func_0x000108c62fa8(lVar8,puVar6 + 0x1c);
      if ((int)lVar8 != 0) {
        func_0x00010865f984(lVar13 + 0x98);
        func_0x000108c63354();
        func_0x000108c6301c();
        break;
      }
    } while ((*(byte *)(puVar6 + 0x1c) >> 1 & 1) == 0);
    func_0x000108c63250();
    func_0x000108c63130();
  }
  else {
    if (puVar10[0x16] != 0) {
      func_0x000108c6345c();
      (*extraout_x8_02)();
      puVar10 = (undefined8 *)puVar6[0x1f];
    }
    lVar13 = puVar10[1];
    uVar14 = *puVar10;
    puVar6[0x15] = puVar10[1];
    puVar6[0x14] = uVar14;
    if (lVar13 != 0) {
      do {
        func_0x000108c62ea8();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c63318();
    func_0x000108c4cad0(puVar6 + 0x14);
    func_0x000108c633d0();
  }
  func_0x000108c63140();
  func_0x000108c62f84();
  func_0x000108c62ff0();
  return;
LAB_108c6075c:
  func_0x000108c630b0();
  if ((bool)in_ZR) {
    func_0x000108c62f04();
    func_0x000108c62e68();
    func_0x000108c62e94();
    func_0x000108c63224();
  }
  func_0x000108c63068();
LAB_108c6077c:
  func_0x000108c62f74(*(undefined8 *)(lVar13 + 0x90));
  *(undefined8 *)(lVar13 + 0x10) = 0;
  return;
}



/* Entry: 108c60aa8; end: 108c60aff;  */

long FUN_108c60aa8(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c60af0);
  (*pcVar1)();
}



/* Entry: 108c60b00; end: 108c60b63;  */

undefined8 * FUN_108c60b00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar2 = puVar1;
  func_0x000108c63304();
  *puVar2 = &PTR_FUN_110abb008;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x000108c6325c();
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000108c632d8();
  return param_1;
}



/* Entry: 108c60b64; end: 108c60b67;  */

undefined8 * FUN_108c60b64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb008;
  func_0x000107c28754(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c60b68; end: 108c60b7b;  */

void FUN_108c60b68(void)

{
  FUN_108c60b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c60b7c; end: 108c60bab;  */

undefined8 * FUN_108c60b7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb008;
  func_0x000107c28754(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c60bac; end: 108c60d5b;  */

void FUN_108c60bac(undefined8 param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  ulong uVar9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long alStack_140 [3];
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined8 auStack_120 [3];
  undefined8 uStack_108;
  long alStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  char cStack_60;
  undefined1 uStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar5 = param_2;
  func_0x000108c630cc();
  lVar12 = *plVar5;
  uStack_38 = extraout_x8;
  FUN_108c60b00(alStack_a8);
  FUN_108c60448(param_1,alStack_a8[0]);
  __ZNSt3__15mutex4lockEv(lVar12 + 0x70);
  lVar13 = lVar12 + 0x48;
  param_2 = param_2 + 1;
  FUN_108c612c0();
  if (lVar13 == 0) {
    auStack_78[0] = 0;
    uStack_58 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    func_0x000108c63378();
    func_0x000104bee630(&uStack_90);
  }
  else {
    FUN_108c61270(lVar12 + 0x30,*(undefined8 *)(lVar12 + 0x38),lVar12 + 0x30,
                  *(undefined8 *)(lVar13 + 0x28));
    func_0x000104be0ccc(auStack_78,*(long *)(lVar13 + 0x28) + 0x28);
    uStack_58 = 1;
    in_ZR = cStack_60 == '\x01';
    if ((bool)in_ZR) {
      func_0x000107c27994(alStack_50,auStack_78);
      param_2 = alStack_50;
      func_0x000108c630a8(&uStack_90);
    }
    else {
      func_0x000107c27994(alStack_50,&UNK_10df9b4b8);
      param_2 = alStack_50;
      func_0x000108c630a8(&uStack_90);
    }
    func_0x000108c63378();
    func_0x000104bee630(&uStack_90);
    func_0x000107c27914(alStack_50);
  }
  func_0x0001052b27fc(auStack_78);
  __ZNSt3__15mutex6unlockEv(lVar12 + 0x70);
  while( true ) {
    plVar5 = alStack_a8;
    func_0x000107c27fb8();
    func_0x000108c62f8c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000107c27914(alStack_50);
    func_0x0001052b27fc(auStack_78);
    __ZNSt3__15mutex6unlockEv(lVar12 + 0x70);
    ___cxa_begin_catch(plVar5);
    func_0x0001053360b0(alStack_a8);
    ___cxa_end_catch();
  }
  func_0x000108c630c4();
  plVar11 = plVar5;
  func_0x000108c630cc();
  lVar13 = *plVar11;
  puVar6 = (undefined8 *)0x110;
  uStack_108 = extraout_x8_01;
  __Znwm();
  *puVar6 = FUN_108c621b8;
  puVar6[1] = FUN_108c6246c;
  puVar6[0x20] = plVar5;
  puVar7 = (undefined8 *)0xc0;
  __Znwm();
  puVar8 = puVar7;
  func_0x000108c63304();
  *puVar8 = &PTR_FUN_110abb048;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x17) = 0;
  alStack_140[0] = 0;
  auStack_120[0] = 0;
  func_0x000107c27f98(auStack_120);
  func_0x000108c6325c();
  puVar6[2] = puVar7;
  puVar6[3] = puVar7;
  func_0x000108c632d8();
  alStack_140[0] = puVar6[2];
  if (alStack_140[0] != 0) {
    do {
      func_0x000108c62eb8();
    } while (extraout_w10 != 0);
  }
  *extraout_x8_00 = alStack_140[0];
  alStack_140[0] = 0;
  func_0x000108c6325c();
  plVar11 = *(long **)(lVar13 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6 + 0xf,plVar5 + 1);
  func_0x000107c27980(puVar6 + 0xc,puVar6 + 0xf,1);
  uVar4 = (int)plVar5[4] == 1;
  (**(code **)(*plVar11 + 0x28))(puVar6 + 0x1f,plVar11,puVar6 + 0xc,uVar4);
  puVar6[0x1e] = puVar6[0x1f];
  do {
    func_0x000108c62eb8();
  } while (extraout_w10_00 != 0);
  func_0x000108c63000(puVar6[0x1e]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x21) = 0;
    lVar13 = puVar6[0x1e];
    func_0x000108c62f14();
    if (*plVar11 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar13 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000108c62ef4();
        plVar5 = extraout_x8_03;
        uVar2 = extraout_w10_02;
        uVar9 = extraout_x11_00;
      }
      else {
        func_0x000108c630f4();
        plVar5 = extraout_x8_02;
        uVar2 = extraout_w10_01;
        uVar9 = extraout_x11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000108c62fe0();
        if ((bool)uVar4) {
          func_0x000108c62f04();
          func_0x000108c62e68();
          func_0x000108c62e78();
          *(long **)(lVar13 + 0x90) = plVar11;
        }
        func_0x000108c62ec8();
        goto LAB_108c61034;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x000108c63000(puVar6[0x1e]);
  lVar13 = puVar6[0x1e];
  if ((extraout_w8_00 >> 5 & 1) != 0) goto LAB_108c610a4;
  *(undefined1 *)(puVar6 + 4) = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  uVar4 = *(char *)(lVar13 + 200) == '\x01';
  if ((bool)uVar4) {
    plVar11 = puVar6 + 4;
    FUN_108c6e004(plVar11,0,lVar13 + 0x98);
    *(undefined1 *)(puVar6 + 10) = 1;
  }
  *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(lVar13 + 0xd0);
  func_0x000108c63054();
  func_0x000108c63310();
  func_0x000108c633b0();
  func_0x000108c631e0();
  if (*(int *)(puVar6 + 0xb) == 0) {
    if ((*(byte *)(puVar6 + 10) & 1) == 0) {
      func_0x000108c63444();
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x15] = 0;
      uStack_128 = 2;
      uStack_124 = 0;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x15;
      goto LAB_108c61024;
    }
    uVar9 = puVar6[6];
    uVar4 = (uVar9 & 1) == 0;
    puVar10 = puVar6 + 6;
    if (!(bool)uVar4) {
      puVar10 = (ulong *)(uVar9 + 7);
    }
    lVar13 = (long)*(int *)(puVar6 + 7) << 3;
    do {
      if (lVar13 == 0) goto LAB_108c61060;
      uVar9 = *puVar10;
      func_0x000108c632cc(puVar6[0x20]);
      lVar13 = lVar13 + -8;
      puVar10 = puVar10 + 1;
    } while ((int)plVar11 == 0);
    uVar9 = *(ulong *)(uVar9 + 0x18) & 0xfffffffffffffffc;
    cVar1 = *(char *)(uVar9 + 0x17);
    lVar13 = (long)cVar1;
    if (lVar13 < 0) {
      if (*(long *)(uVar9 + 8) != 0) goto LAB_108c60f90;
LAB_108c61060:
      func_0x000108c63168();
      func_0x000108c630a8(puVar6 + 0x1b,auStack_120);
      func_0x000108c633f4();
      puVar6[0x1c] = 0;
      puVar6[0x1d] = 0;
      puVar6[0x1b] = 0;
      uStack_128 = 0;
      uStack_124 = 1;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x1b;
    }
    else {
      if (lVar13 == 0) goto LAB_108c61060;
LAB_108c60f90:
      uVar4 = cVar1 == '\0';
      lVar12 = *(long *)(uVar9 + 8);
      if (-1 < cVar1) {
        lVar12 = lVar13;
      }
      func_0x000108c633dc(lVar12);
      func_0x000108c630a8(puVar6 + 0x18,auStack_120);
      func_0x000108c6341c();
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x18] = 0;
      uStack_128 = 0;
      uStack_124 = 1;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x18;
    }
    lVar13 = 1;
    func_0x000104bee630(puVar6);
    func_0x000108c631e8();
  }
  else {
    func_0x000108c63444();
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x12] = 0;
    uStack_124 = 0;
    uStack_128 = extraout_w8_01;
    func_0x000108c62fd4();
    func_0x000108c6304c();
    puVar6 = puVar6 + 0x12;
LAB_108c61024:
    func_0x000104bee630(puVar6);
  }
  func_0x000108c63324();
  func_0x000108c62f84();
  func_0x000108c62ff0();
LAB_108c61034:
  func_0x000108c62f8c(uStack_108);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_108c610a4:
  __ZNSt13exception_ptrC1ERKS_(alStack_140,lVar13 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(alStack_140);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108c610bc);
  (*pcVar3)();
}



/* Entry: 108c60d5c; end: 108c6116b;  */

void FUN_108c60d5c(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  long *plVar9;
  long *extraout_x8_00;
  long *extraout_x8_01;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong *puVar11;
  long *plVar12;
  long lVar13;
  long alStack_80 [3];
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  plVar12 = param_2;
  func_0x000108c630cc();
  lVar13 = *plVar12;
  puVar6 = (undefined8 *)0x110;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar6 = FUN_108c621b8;
  puVar6[1] = FUN_108c6246c;
  puVar6[0x20] = param_2;
  puVar7 = (undefined8 *)0xc0;
  __Znwm();
  puVar8 = puVar7;
  func_0x000108c63304();
  *puVar8 = &PTR_FUN_110abb048;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x17) = 0;
  alStack_80[0] = 0;
  auStack_60[0] = 0;
  func_0x000107c27f98(auStack_60);
  func_0x000108c6325c();
  puVar6[2] = puVar7;
  puVar6[3] = puVar7;
  func_0x000108c632d8();
  alStack_80[0] = puVar6[2];
  if (alStack_80[0] != 0) {
    do {
      func_0x000108c62eb8();
    } while (extraout_w10 != 0);
  }
  *param_1 = alStack_80[0];
  alStack_80[0] = 0;
  func_0x000108c6325c();
  plVar12 = *(long **)(lVar13 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6 + 0xf,param_2 + 1)
  ;
  func_0x000107c27980(puVar6 + 0xc,puVar6 + 0xf,1);
  uVar5 = (int)param_2[4] == 1;
  (**(code **)(*plVar12 + 0x28))(puVar6 + 0x1f,plVar12,puVar6 + 0xc,uVar5);
  puVar6[0x1e] = puVar6[0x1f];
  do {
    func_0x000108c62eb8();
  } while (extraout_w10_00 != 0);
  func_0x000108c63000(puVar6[0x1e]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x21) = 0;
    lVar13 = puVar6[0x1e];
    func_0x000108c62f14();
    if (*plVar12 == 0) {
      func_0x000107c3a5c0();
    }
    plVar9 = (long *)(lVar13 + 0x10);
    do {
      if (*plVar9 == 0) {
        func_0x000108c62ef4();
        plVar9 = extraout_x8_01;
        uVar3 = extraout_w10_02;
        uVar10 = extraout_x11_00;
      }
      else {
        func_0x000108c630f4();
        plVar9 = extraout_x8_00;
        uVar3 = extraout_w10_01;
        uVar10 = extraout_x11;
      }
      if ((uVar10 & 1) != 0) {
        func_0x000108c62fe0();
        if ((bool)uVar5) {
          func_0x000108c62f04();
          func_0x000108c62e68();
          func_0x000108c62e78();
          *(long **)(lVar13 + 0x90) = plVar12;
        }
        func_0x000108c62ec8();
        goto LAB_108c61034;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  func_0x000108c63000(puVar6[0x1e]);
  lVar13 = puVar6[0x1e];
  if ((extraout_w8_00 >> 5 & 1) != 0) goto LAB_108c610a4;
  *(undefined1 *)(puVar6 + 4) = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  uVar5 = *(char *)(lVar13 + 200) == '\x01';
  if ((bool)uVar5) {
    plVar12 = puVar6 + 4;
    FUN_108c6e004(plVar12,0,lVar13 + 0x98);
    *(undefined1 *)(puVar6 + 10) = 1;
  }
  *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(lVar13 + 0xd0);
  func_0x000108c63054();
  func_0x000108c63310();
  func_0x000108c633b0();
  func_0x000108c631e0();
  if (*(int *)(puVar6 + 0xb) == 0) {
    if ((*(byte *)(puVar6 + 10) & 1) == 0) {
      func_0x000108c63444();
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      puVar6[0x15] = 0;
      uStack_68 = 2;
      uStack_64 = 0;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x15;
      goto LAB_108c61024;
    }
    uVar10 = puVar6[6];
    uVar5 = (uVar10 & 1) == 0;
    puVar11 = puVar6 + 6;
    if (!(bool)uVar5) {
      puVar11 = (ulong *)(uVar10 + 7);
    }
    lVar13 = (long)*(int *)(puVar6 + 7) << 3;
    do {
      if (lVar13 == 0) goto LAB_108c61060;
      uVar10 = *puVar11;
      func_0x000108c632cc(puVar6[0x20]);
      lVar13 = lVar13 + -8;
      puVar11 = puVar11 + 1;
    } while ((int)plVar12 == 0);
    uVar10 = *(ulong *)(uVar10 + 0x18) & 0xfffffffffffffffc;
    cVar2 = *(char *)(uVar10 + 0x17);
    lVar13 = (long)cVar2;
    if (lVar13 < 0) {
      if (*(long *)(uVar10 + 8) != 0) goto LAB_108c60f90;
LAB_108c61060:
      func_0x000108c63168();
      func_0x000108c630a8(puVar6 + 0x1b,auStack_60);
      func_0x000108c633f4();
      puVar6[0x1c] = 0;
      puVar6[0x1d] = 0;
      puVar6[0x1b] = 0;
      uStack_68 = 0;
      uStack_64 = 1;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x1b;
    }
    else {
      if (lVar13 == 0) goto LAB_108c61060;
LAB_108c60f90:
      uVar5 = cVar2 == '\0';
      lVar1 = *(long *)(uVar10 + 8);
      if (-1 < cVar2) {
        lVar1 = lVar13;
      }
      func_0x000108c633dc(lVar1);
      func_0x000108c630a8(puVar6 + 0x18,auStack_60);
      func_0x000108c6341c();
      puVar6[0x19] = 0;
      puVar6[0x1a] = 0;
      puVar6[0x18] = 0;
      uStack_68 = 0;
      uStack_64 = 1;
      func_0x000108c62fd4();
      func_0x000108c6304c();
      puVar6 = puVar6 + 0x18;
    }
    lVar13 = 1;
    func_0x000104bee630(puVar6);
    func_0x000108c631e8();
  }
  else {
    func_0x000108c63444();
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x12] = 0;
    uStack_64 = 0;
    uStack_68 = extraout_w8_01;
    func_0x000108c62fd4();
    func_0x000108c6304c();
    puVar6 = puVar6 + 0x12;
LAB_108c61024:
    func_0x000104bee630(puVar6);
  }
  func_0x000108c63324();
  func_0x000108c62f84();
  func_0x000108c62ff0();
LAB_108c61034:
  func_0x000108c62f8c(uStack_48);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_108c610a4:
  __ZNSt13exception_ptrC1ERKS_(alStack_80,lVar13 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(alStack_80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108c610bc);
  (*pcVar4)();
}



/* Entry: 108c6116c; end: 108c6126f;  */

void FUN_108c6116c(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  lVar1 = *param_1;
  func_0x000107c27f94(auStack_78);
  func_0x000108c63234(auStack_78);
  if (*param_2 != param_2[1]) {
    __ZNSt3__15mutex4lockEv(lVar1 + 0x70);
    if (*(long *)*param_2 == ((long *)*param_2)[1]) {
      auStack_60[0] = 0;
      uStack_48 = 0;
      func_0x000108c63200();
    }
    else {
      func_0x00010866e73c(auStack_60);
      func_0x000108c63200();
    }
    func_0x000107c279c4(auStack_60);
    __ZNSt3__15mutex6unlockEv(lVar1 + 0x70);
  }
  func_0x000107c287c8(auStack_78);
  func_0x000107c27fb8(auStack_78);
  return;
}



/* Entry: 108c61270; end: 108c612bf;  */

void FUN_108c61270(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 108c612c0; end: 108c61393;  */

long FUN_108c612c0(long *param_1,undefined8 param_2)

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



/* Entry: 108c61394; end: 108c6148f;  */

undefined8 * FUN_108c61394(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_78 = 0;
  puStack_80 = param_1;
  if (param_3 != 0) {
    func_0x00010867bf20(param_1,param_3);
    lVar1 = param_1[1];
    puStack_70 = param_1 + 2;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar1;
    for (param_3 = param_3 * 0x18; lStack_48 = lVar1, param_3 != 0; param_3 = param_3 + -0x18) {
      func_0x000107c27994(lVar1,param_2);
      param_2 = param_2 + 0x18;
      lVar1 = lStack_48 + 0x18;
    }
    uStack_58 = 1;
    func_0x00010867c02c(&puStack_70);
    param_1[1] = lVar1;
  }
  uStack_78 = 1;
  func_0x00010867c0ac(&puStack_80);
  return param_1;
}



/* Entry: 108c61490; end: 108c61533;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c61490(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uStack_38;
  
  plVar7 = (long *)(param_1 + 8);
  lVar8 = *plVar7;
  do {
    uStack_38 = 0;
    lVar5 = lVar8 + 0x10;
    func_0x000108c62fa8(lVar5,&uStack_38);
    if ((int)lVar5 != 0) {
      if (*(char *)(lVar8 + 0xb8) == '\x01') {
        func_0x000104bee630(lVar8 + 0x98);
        *(undefined1 *)(lVar8 + 0xb8) = 0;
      }
      *(undefined8 *)(lVar8 + 0x98) = 0;
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      *(undefined8 *)(lVar8 + 0xa8) = 0;
      uVar10 = *param_2;
      *(undefined8 *)(lVar8 + 0xa0) = param_2[1];
      *(undefined8 *)(lVar8 + 0x98) = uVar10;
      *(undefined8 *)(lVar8 + 0xa8) = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      uVar2 = *(undefined4 *)(param_2 + 3);
      *(undefined1 *)(lVar8 + 0xb4) = *(undefined1 *)((long)param_2 + 0x1c);
      *(undefined4 *)(lVar8 + 0xb0) = uVar2;
      *(undefined1 *)(lVar8 + 0xb8) = 1;
      func_0x000108c63084();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar9 = (long *)*plVar7;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar6 >> 0x21 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9,1,plVar7);
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  *plVar7 = 0;
  return;
}



/* Entry: 108c61534; end: 108c61537;  */

undefined8 * FUN_108c61534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb048;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    func_0x000104bee630(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c61538; end: 108c6154b;  */

void FUN_108c61538(void)

{
  FUN_108c6154c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6154c; end: 108c6158b;  */

undefined8 * FUN_108c6154c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb048;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    func_0x000104bee630(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c6158c; end: 108c615ab;  */

void FUN_108c6158c(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108c6e04c();
  }
  return;
}



/* Entry: 108c615ac; end: 108c61b83;  */

void FUN_108c615ac(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *unaff_x27;
  
  puVar2 = param_1 + 4;
  FUN_108c612c0();
  if (puVar2 != (ulong *)0x0) {
    func_0x00010866e758(puVar2[5] + 0x28,param_3);
    plVar3 = (long *)param_1[2];
    plVar4 = (long *)puVar2[5];
    if ((plVar3 != plVar4) && (plVar5 = (long *)plVar4[1], plVar3 != plVar5)) {
      lVar9 = *plVar4;
      *(long **)(lVar9 + 8) = plVar5;
      *plVar5 = lVar9;
      lVar9 = *plVar3;
      *(long **)(lVar9 + 8) = plVar4;
      *plVar4 = lVar9;
      *plVar3 = (long)plVar4;
      plVar4[1] = (long)plVar3;
      param_1[3] = param_1[3] - 1;
      param_1[3] = param_1[3] + 1;
    }
    return;
  }
  puVar2 = param_1 + 7;
  if ((*param_1 <= *puVar2) && (param_1[3] != 0)) {
    puVar12 = param_1 + 4;
    FUN_108c612c0(puVar12,param_1[1] + 0x10);
    if (puVar12 != (ulong *)0x0) {
      uVar13 = param_1[5];
      uVar6 = *puVar12;
      uVar10 = puVar12[1];
      uVar17 = uVar13 - 1;
      if ((uVar13 & uVar17) == 0) {
        uVar10 = uVar17 & uVar10;
      }
      else if (uVar13 <= uVar10) {
        uVar19 = 0;
        if (uVar13 != 0) {
          uVar19 = uVar10 / uVar13;
        }
        uVar10 = uVar10 - uVar19 * uVar13;
      }
      uVar19 = param_1[4];
      puVar23 = *(ulong **)(uVar19 + uVar10 * 8);
      do {
        puVar22 = puVar23;
        puVar23 = (ulong *)*puVar22;
      } while ((ulong *)*puVar22 != puVar12);
      if (puVar22 == param_1 + 6) {
LAB_108c616d4:
        if (uVar6 == 0) {
LAB_108c61708:
          *(undefined8 *)(uVar19 + uVar10 * 8) = 0;
          uVar6 = *puVar12;
          goto LAB_108c61710;
        }
        uVar20 = *(ulong *)(uVar6 + 8);
        if ((uVar13 & uVar17) == 0) {
          uVar21 = uVar20 & uVar17;
        }
        else {
          uVar21 = uVar20;
          if (uVar13 <= uVar20) {
            uVar21 = 0;
            if (uVar13 != 0) {
              uVar21 = uVar20 / uVar13;
            }
            uVar21 = uVar20 - uVar21 * uVar13;
          }
        }
        if (uVar21 != uVar10) goto LAB_108c61708;
LAB_108c61718:
        if ((uVar13 & uVar17) == 0) {
          uVar20 = uVar20 & uVar17;
        }
        else if (uVar13 <= uVar20) {
          uVar17 = 0;
          if (uVar13 != 0) {
            uVar17 = uVar20 / uVar13;
          }
          uVar20 = uVar20 - uVar17 * uVar13;
        }
        if (uVar20 != uVar10) {
          *(ulong **)(uVar19 + uVar20 * 8) = puVar22;
          uVar6 = *puVar12;
        }
      }
      else {
        uVar20 = puVar22[1];
        if ((uVar13 & uVar17) == 0) {
          uVar20 = uVar20 & uVar17;
        }
        else if (uVar13 <= uVar20) {
          uVar21 = 0;
          if (uVar13 != 0) {
            uVar21 = uVar20 / uVar13;
          }
          uVar20 = uVar20 - uVar21 * uVar13;
        }
        if (uVar20 != uVar10) goto LAB_108c616d4;
LAB_108c61710:
        if (uVar6 != 0) {
          uVar20 = *(ulong *)(uVar6 + 8);
          goto LAB_108c61718;
        }
      }
      *puVar22 = uVar6;
      *puVar12 = 0;
      *puVar2 = *puVar2 - 1;
      func_0x000108c63248();
    }
    lVar9 = *(long *)param_1[1];
    plVar3 = (long *)((long *)param_1[1])[1];
    *(long **)(lVar9 + 8) = plVar3;
    *plVar3 = lVar9;
    param_1[3] = param_1[3] - 1;
    FUN_108c601fc();
  }
  plVar3 = (long *)0x48;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3 + 2,param_2);
  func_0x000104be0ccc(plVar3 + 5,param_3);
  puVar11 = (undefined8 *)param_1[2];
  *plVar3 = (long)(param_1 + 1);
  plVar3[1] = (long)puVar11;
  *puVar11 = plVar3;
  param_1[2] = (ulong)plVar3;
  param_1[3] = param_1[3] + 1;
  puVar12 = puVar2;
  func_0x000107c278c4(puVar2,param_2);
  puVar23 = (ulong *)param_1[5];
  if (puVar23 != (ulong *)0x0) {
    uVar6 = (long)puVar23 - 1;
    if (((ulong)puVar23 & uVar6) == 0) {
      unaff_x27 = (ulong *)(uVar6 & (ulong)puVar12);
    }
    else {
      unaff_x27 = puVar12;
      if (puVar23 <= puVar12) {
        uVar10 = 0;
        if (puVar23 != (ulong *)0x0) {
          uVar10 = (ulong)puVar12 / (ulong)puVar23;
        }
        unaff_x27 = (ulong *)((long)puVar12 - uVar10 * (long)puVar23);
      }
    }
    puVar22 = *(ulong **)(param_1[4] + (long)unaff_x27 * 8);
    if (puVar22 != (ulong *)0x0) {
      do {
        while( true ) {
          puVar22 = (ulong *)*puVar22;
          if (puVar22 == (ulong *)0x0) goto LAB_108c61874;
          puVar7 = (ulong *)puVar22[1];
          if (puVar7 != puVar12) break;
          puVar7 = puVar22 + 2;
          func_0x000107c278d0(puVar7,param_2);
          if (((ulong)puVar7 & 1) != 0) goto LAB_108c61b28;
        }
        if (((ulong)puVar23 & uVar6) == 0) {
          puVar7 = (ulong *)((ulong)puVar7 & uVar6);
        }
        else if (puVar23 <= puVar7) {
          uVar10 = 0;
          if (puVar23 != (ulong *)0x0) {
            uVar10 = (ulong)puVar7 / (ulong)puVar23;
          }
          puVar7 = (ulong *)((long)puVar7 - uVar10 * (long)puVar23);
        }
      } while (puVar7 == unaff_x27);
    }
  }
LAB_108c61874:
  puVar7 = param_1 + 6;
  puVar22 = (ulong *)0x30;
  __Znwm();
  *puVar22 = 0;
  puVar22[1] = (ulong)puVar12;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar22 + 2,param_2);
  puVar22[5] = 0;
  if ((puVar23 != (ulong *)0x0) &&
     ((float)(param_1[7] + 1) <= *(float *)(param_1 + 8) * (float)puVar23)) goto LAB_108c61ab4;
  uVar6 = 1;
  if ((ulong *)0x2 < puVar23) {
    uVar6 = (ulong)(((ulong)puVar23 & (long)puVar23 - 1U) != 0);
  }
  puVar8 = (ulong *)(uVar6 | (long)puVar23 << 1);
  puVar23 = (ulong *)(long)((float)(param_1[7] + 1) / *(float *)(param_1 + 8));
  if (puVar8 <= puVar23) {
    puVar8 = puVar23;
  }
  if ((long)puVar8 - 1U == 0) {
    puVar8 = (ulong *)0x2;
  }
  else if (((ulong)puVar8 & (long)puVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  puVar23 = (ulong *)param_1[5];
  if (puVar23 < puVar8) {
LAB_108c61928:
    if ((ulong)puVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108c61b54);
      (*pcVar1)();
    }
    lVar9 = (long)puVar8 << 3;
    __Znwm(lVar9);
    FUN_108c61bc8(param_1 + 4,lVar9);
    param_1[5] = (ulong)puVar8;
    uVar6 = param_1[4];
    for (puVar23 = (ulong *)0x0; puVar8 != puVar23; puVar23 = (ulong *)((long)puVar23 + 1)) {
      *(undefined8 *)(uVar6 + (long)puVar23 * 8) = 0;
    }
    puVar14 = (ulong *)*puVar7;
    puVar23 = puVar8;
    if (puVar14 != (ulong *)0x0) {
      puVar15 = (ulong *)puVar14[1];
      uVar13 = (long)puVar8 - 1;
      uVar10 = 0;
      if (puVar8 != (ulong *)0x0) {
        uVar10 = (ulong)puVar15 / (ulong)puVar8;
      }
      puVar16 = puVar15;
      if (puVar8 <= puVar15) {
        puVar16 = (ulong *)((long)puVar15 - uVar10 * (long)puVar8);
      }
      if (((ulong)puVar8 & uVar13) == 0) {
        puVar16 = (ulong *)((ulong)puVar15 & uVar13);
      }
      *(ulong **)(uVar6 + (long)puVar16 * 8) = puVar7;
      while (puVar15 = puVar14, puVar14 = (ulong *)*puVar15, puVar14 != (ulong *)0x0) {
        puVar18 = (ulong *)puVar14[1];
        if (((ulong)puVar8 & uVar13) == 0) {
          puVar18 = (ulong *)((ulong)puVar18 & uVar13);
        }
        else if (puVar8 <= puVar18) {
          uVar10 = 0;
          if (puVar8 != (ulong *)0x0) {
            uVar10 = (ulong)puVar18 / (ulong)puVar8;
          }
          puVar18 = (ulong *)((long)puVar18 - uVar10 * (long)puVar8);
        }
        if (puVar18 != puVar16) {
          if (*(long *)(uVar6 + (long)puVar18 * 8) == 0) {
            *(ulong **)(uVar6 + (long)puVar18 * 8) = puVar15;
            puVar16 = puVar18;
          }
          else {
            *puVar15 = *puVar14;
            *puVar14 = **(ulong **)(uVar6 + (long)puVar18 * 8);
            **(ulong **)(uVar6 + (long)puVar18 * 8) = (ulong)puVar14;
            puVar14 = puVar15;
          }
        }
      }
    }
  }
  else if (puVar8 < puVar23) {
    puVar14 = (ulong *)(long)((float)param_1[7] / *(float *)(param_1 + 8));
    if ((puVar23 < (ulong *)0x3) || (((ulong)puVar23 & (long)puVar23 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((ulong *)0x1 < puVar14) {
      puVar14 = (ulong *)(1L << (-LZCOUNT((long)puVar14 + -1) & 0x3fU));
    }
    if (puVar8 <= puVar14) {
      puVar8 = puVar14;
    }
    if (puVar8 < puVar23) {
      if (puVar8 != (ulong *)0x0) goto LAB_108c61928;
      FUN_108c61bc8(param_1 + 4,0);
      param_1[5] = 0;
      puVar23 = (ulong *)0x0;
    }
    else {
      puVar23 = (ulong *)param_1[5];
    }
  }
  if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
    unaff_x27 = (ulong *)((long)puVar23 - 1U & (ulong)puVar12);
  }
  else {
    unaff_x27 = puVar12;
    if (puVar23 <= puVar12) {
      uVar6 = 0;
      if (puVar23 != (ulong *)0x0) {
        uVar6 = (ulong)puVar12 / (ulong)puVar23;
      }
      unaff_x27 = (ulong *)((long)puVar12 - uVar6 * (long)puVar23);
    }
  }
LAB_108c61ab4:
  uVar6 = param_1[4];
  puVar12 = *(ulong **)(uVar6 + (long)unaff_x27 * 8);
  if (puVar12 == (ulong *)0x0) {
    *puVar22 = *puVar7;
    *puVar7 = (ulong)puVar22;
    *(ulong **)(uVar6 + (long)unaff_x27 * 8) = puVar7;
    if (*puVar22 != 0) {
      puVar12 = *(ulong **)(*puVar22 + 8);
      if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
        puVar12 = (ulong *)((ulong)puVar12 & (long)puVar23 - 1U);
      }
      else if (puVar23 <= puVar12) {
        uVar10 = 0;
        if (puVar23 != (ulong *)0x0) {
          uVar10 = (ulong)puVar12 / (ulong)puVar23;
        }
        puVar12 = (ulong *)((long)puVar12 - uVar10 * (long)puVar23);
      }
      *(ulong **)(uVar6 + (long)puVar12 * 8) = puVar22;
    }
  }
  else {
    *puVar22 = *puVar12;
    *puVar12 = (ulong)puVar22;
  }
  *puVar2 = *puVar2 + 1;
  func_0x000108c63248();
LAB_108c61b28:
  puVar22[5] = (ulong)plVar3;
  return;
}



/* Entry: 108c61b84; end: 108c61bc7;  */

long * FUN_108c61b84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 108c61bc8; end: 108c61be3;  */

void FUN_108c61bc8(long *param_1,long param_2)

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



/* Entry: 108c61be4; end: 108c61bf7;  */

void FUN_108c61be4(void)

{
  FUN_108c61c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c61bf8; end: 108c61bfb;  */

undefined8 * FUN_108c61bf8(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110abb0d0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c61d28(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_108c6008c(param_1 + 3);
  FUN_108c6008c(param_1 + 1);
  return param_1;
}



/* Entry: 108c61bfc; end: 108c61c0f;  */

void FUN_108c61bfc(void)

{
  FUN_108c61c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c61c10; end: 108c61c13;  */

void FUN_108c61c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb0f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c61c14; end: 108c61c27;  */

void FUN_108c61c14(void)

{
  FUN_108c61c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c61c28; end: 108c61c6f;  */

void FUN_108c61c28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x000108c630dc();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000104bee630();
  }
  return;
}



/* Entry: 108c61c70; end: 108c61c83;  */

void FUN_108c61c70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c61c84; end: 108c61d27;  */

undefined8 * FUN_108c61c84(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110abb0d0;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c61d28(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_108c6008c(param_1 + 3);
  FUN_108c6008c(param_1 + 1);
  return param_1;
}



/* Entry: 108c61d28; end: 108c61dfb;  */

void FUN_108c61d28(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_108c5fca4(auStack_40,param_1 + 8,&uStack_50);
  FUN_108c5fcf8(alStack_30,auStack_40);
  func_0x000108c631b0();
  func_0x000108c63014();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x50);
  __ZNSt13exception_ptraSERKS_(lVar1 + 0x90,param_2);
  plVar2 = *(long **)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x20);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x000108c631c0();
  }
  FUN_108c6008c(alStack_30);
  return;
}



/* Entry: 108c61dfc; end: 108c61e93;  */

void FUN_108c61dfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_108c62d08;
  puVar1[1] = FUN_108c62e1c;
  FUN_108c620f8(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000108c63234(puVar1 + 2);
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000108c63348(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108c61e94; end: 108c620f7;  */

void FUN_108c61e94(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
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
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_60 [16];
  long alStack_50 [2];
  
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  *puVar2 = FUN_108c62b60;
  puVar2[1] = FUN_108c62ce0;
  puVar2[8] = param_1;
  func_0x000107c27f94(puVar2 + 2);
  plVar7 = puVar2 + 2;
  func_0x000108c63234();
  puVar5 = puVar2 + 6;
  *puVar5 = *param_1;
  do {
    func_0x000108c62eb8();
  } while (extraout_w10 != 0);
  func_0x000108c63000(*puVar5);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 9) = 0;
    lVar6 = puVar2[6];
    func_0x000108c62f14();
    if (*plVar7 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c63210();
    plVar7 = extraout_x8;
    do {
      if (*plVar7 == 0) {
        func_0x000108c62ef4();
        plVar7 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x000108c630f4();
        plVar7 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108c630b0();
        if ((bool)in_ZR) {
          func_0x000108c62f04();
          func_0x000108c62e68();
          func_0x000108c62e94();
          func_0x000108c63224();
        }
        func_0x000108c63068();
        func_0x000108c62f74(*(undefined8 *)(lVar6 + 0x90));
        *(undefined8 *)(lVar6 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar3 = puVar5;
  FUN_108c60aa8(puVar5);
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  func_0x000108c6329c(puVar2[8],auStack_60);
  FUN_108c5fcf8(alStack_50,auStack_60);
  func_0x000108c63014();
  func_0x000108c631d0();
  lVar6 = alStack_50[0];
  __ZNSt3__15mutex4lockEv(alStack_50[0] + 0x50);
  if (*(char *)(lVar6 + 0x18) == '\x01') {
    func_0x0001086aa2c0(lVar6,puVar3);
  }
  else {
    func_0x00010867be74(lVar6,puVar3);
  }
  plVar7 = *(long **)(lVar6 + 0x98);
  *(undefined8 *)(lVar6 + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar6 + 0x50);
  if (plVar7 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(lVar6 + 0x20);
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,alStack_50);
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  func_0x000108c631b0();
  func_0x000107c27f9c(puVar5);
  func_0x000108c633c8();
  func_0x000108c62f84();
  func_0x000108c62ff0();
  return;
}



/* Entry: 108c620f8; end: 108c62123;  */

undefined8 * FUN_108c620f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_108c62124(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108c62124; end: 108c6214b;  */

void FUN_108c62124(undefined8 *param_1,long param_2)

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
  *param_1 = &PTR_DAT_110abb088;
  return;
}



/* Entry: 108c6214c; end: 108c621b7;  */

undefined8 * FUN_108c6214c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_108c61c84(param_1 + 1);
  plVar5 = (long *)*param_1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
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
  return param_1;
}



/* Entry: 108c621b8; end: 108c6246b;  */

void FUN_108c621b8(long param_1,undefined1 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  lVar4 = param_1;
  func_0x000108c630cc();
  plVar7 = (long *)(lVar4 + 0xf0);
  lVar11 = lVar4 + 0x78;
  lVar6 = lVar4 + 0x10;
  uStack_58 = extraout_x8;
  func_0x000108c63000(*plVar7);
  lVar9 = *plVar7;
  if ((extraout_w8 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_90,lVar9 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108c623dc);
    (*pcVar2)();
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  uVar3 = *(char *)(lVar9 + 200) == '\x01';
  if ((bool)uVar3) {
    param_2 = (undefined1 *)0x0;
    FUN_108c6e004(lVar4 + 0x20,0,lVar9 + 0x98);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar9 + 0xd0);
  func_0x000107c27f9c(plVar7);
  func_0x000107c27f9c(lVar4 + 0xf8);
  func_0x000107c278a8(lVar4 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(int *)(param_1 + 0x58) == 0) {
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      puVar10 = (undefined8 *)(lVar4 + 0xc0);
      uVar5 = *(ulong *)(param_1 + 0x30);
      puVar8 = (undefined8 *)(lVar4 + 0xd8);
      uVar3 = (uVar5 & 1) == 0;
      puVar12 = (ulong *)(param_1 + 0x30);
      if (!(bool)uVar3) {
        puVar12 = (ulong *)(uVar5 + 7);
      }
      lVar9 = (long)*(int *)(param_1 + 0x38) << 3;
      do {
        if (lVar9 == 0) goto LAB_108c62384;
        uVar5 = *puVar12;
        func_0x000108c632cc(*(undefined8 *)(param_1 + 0x100));
        lVar9 = lVar9 + -8;
        puVar12 = puVar12 + 1;
      } while ((int)lVar11 == 0);
      uVar5 = *(ulong *)(uVar5 + 0x18) & 0xfffffffffffffffc;
      cVar1 = *(char *)(uVar5 + 0x17);
      lVar11 = (long)cVar1;
      if (lVar11 < 0) {
        if (*(long *)(uVar5 + 8) != 0) goto LAB_108c622d0;
LAB_108c62384:
        func_0x000108c63168();
        param_2 = auStack_70;
        func_0x000108c630a8(puVar8);
        func_0x000108c633f4();
        *(undefined8 *)(lVar4 + 0xe0) = 0;
        *(undefined8 *)(lVar4 + 0xe8) = 0;
        *puVar8 = 0;
        uStack_78 = 0;
        uStack_74 = 1;
        func_0x000108c6309c();
        func_0x000108c6304c();
      }
      else {
        if (lVar11 == 0) goto LAB_108c62384;
LAB_108c622d0:
        uVar3 = cVar1 == '\0';
        lVar9 = *(long *)(uVar5 + 8);
        if (-1 < cVar1) {
          lVar9 = lVar11;
        }
        func_0x000108c633dc(lVar9);
        param_2 = auStack_70;
        func_0x000108c630a8(puVar10);
        func_0x000108c6341c();
        *(undefined8 *)(lVar4 + 200) = 0;
        *(undefined8 *)(lVar4 + 0xd0) = 0;
        *puVar10 = 0;
        uStack_78 = 0;
        uStack_74 = 1;
        func_0x000108c6309c();
        func_0x000108c6304c();
        puVar8 = puVar10;
      }
      func_0x000104bee630(puVar8);
      func_0x000108c631e8();
      goto LAB_108c62344;
    }
    puVar8 = (undefined8 *)(lVar4 + 0xa8);
    func_0x000108c63444();
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *puVar8 = 0;
    uStack_78 = 2;
  }
  else {
    puVar8 = (undefined8 *)(lVar4 + 0x90);
    func_0x000108c63444();
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *puVar8 = 0;
    uStack_78 = extraout_w8_00;
  }
  uStack_74 = 0;
  func_0x000108c6309c();
  func_0x000108c6304c();
  func_0x000104bee630(puVar8);
LAB_108c62344:
  func_0x000108c63264();
  while( true ) {
    lVar4 = lVar6;
    func_0x000107c27fb8(lVar6);
    func_0x000108c62ff0();
    func_0x000108c62f8c(uStack_58);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000108c631e8();
    func_0x000108c63264();
    ___cxa_begin_catch(lVar4);
    func_0x0001053360b0(lVar6);
    ___cxa_end_catch();
  }
  __Unwind_Resume(lVar4);
  func_0x000107c27f9c(lVar4 + 0xf0);
  func_0x000108c63310();
  func_0x000108c633b0();
  func_0x000108c631e0();
  func_0x000108c62f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar4);
  return;
}



/* Entry: 108c6246c; end: 108c6249f;  */

void FUN_108c6246c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xf0);
  func_0x000108c63310();
  func_0x000108c633b0();
  func_0x000108c631e0();
  func_0x000108c62f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c624a0; end: 108c629af;  */

void FUN_108c624a0(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  code *extraout_x8;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar8;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  long lVar9;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar10;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_1 + 0x100) == '\x02') {
LAB_108c626c8:
    func_0x000107c28834(param_1 + 0xe0);
    lVar11 = *(long *)(param_1 + 0xf8);
    func_0x000108c62fa0();
    func_0x000108c63138();
    if (*(long *)(lVar11 + 0xd0) != 0) {
      func_0x000104c003e8(*(long *)(param_1 + 0xf8) + 0xb8);
    }
  }
  else {
    if (*(char *)(param_1 + 0x100) != '\x01') {
      lVar11 = param_1 + 0x20;
      FUN_108c60aa8(lVar11);
      plVar6 = (long *)(param_1 + 0x40);
      func_0x00010867be90(plVar6,lVar11);
      func_0x000108c63128();
      func_0x000108c62fa0();
      func_0x000108c6338c();
      func_0x000108c63468();
      func_0x000108c63360();
      func_0x000108c631d8();
      lVar11 = *(long *)(param_1 + 0x40);
      puVar12 = *(undefined8 **)(param_1 + 0xf8);
      if (lVar11 != *(long *)(param_1 + 0x48)) {
        if (puVar12[0x16] != 0) {
          func_0x000108c6345c();
          (*extraout_x8)();
          puVar12 = *(undefined8 **)(param_1 + 0xf8);
        }
        lVar11 = puVar12[1];
        uVar13 = *puVar12;
        *(undefined8 *)(param_1 + 0xa8) = puVar12[1];
        *(undefined8 *)(param_1 + 0xa0) = uVar13;
        if (lVar11 != 0) {
          do {
            func_0x000108c62ea8();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108c63318();
        func_0x000108c4cad0(param_1 + 0xa0);
        func_0x000108c633d0();
        goto LAB_108c62730;
      }
      lVar9 = puVar12[1];
      uVar13 = *puVar12;
      *(undefined8 *)(param_1 + 0xb8) = puVar12[1];
      *(undefined8 *)(param_1 + 0xb0) = uVar13;
      lVar7 = lVar11;
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar7 = *(long *)(param_1 + 0x48);
      }
      uVar5 = lVar11 == lVar7;
      func_0x000108c632f0();
      func_0x000108c63398();
      func_0x000108c632e4();
      func_0x000108c63450(*(undefined8 *)(param_1 + 0xf0));
      do {
        func_0x000108c62eb8();
      } while (extraout_w10_05 != 0);
      func_0x000108c62f64();
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x100) = 1;
        lVar11 = *(long *)(param_1 + 0xe0);
        func_0x000108c62f38();
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c63210();
        plVar6 = extraout_x8_04;
        do {
          if (*plVar6 == 0) {
            func_0x000108c62ef4();
            plVar6 = extraout_x8_06;
            uVar3 = extraout_w10_07;
            uVar10 = extraout_x11_02;
          }
          else {
            func_0x000108c630f4();
            plVar6 = extraout_x8_05;
            uVar3 = extraout_w10_06;
            uVar10 = extraout_x11_01;
          }
          if ((uVar10 & 1) != 0) {
            func_0x000108c630b0();
            if ((bool)uVar5) {
              func_0x000108c62f04();
              func_0x000108c62e68();
              func_0x000108c62e94();
              func_0x000108c63224();
            }
            func_0x000108c63068();
            goto LAB_108c62830;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
    }
    func_0x000108c62f64();
    lVar11 = *(long *)(param_1 + 0xe0);
    if ((extraout_w8 >> 5 & 1) != 0) {
      func_0x000108c633a4();
      __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0xe8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x108c62854);
      (*pcVar4)();
    }
    func_0x000108c63334();
    uVar5 = *(undefined1 *)(lVar11 + 0xb4);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar11 + 0xb0);
    *(undefined1 *)(param_1 + 0x3c) = uVar5;
    func_0x000108c62fa0();
    func_0x000108c63054();
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      func_0x000108c63430();
      if (extraout_x9 != 0) {
        do {
          func_0x000108c62ea8();
        } while (extraout_w10 != 0);
      }
      func_0x000108c632a8();
      func_0x000108c631a8();
    }
    else {
      FUN_108c51960(auStack_58,*(undefined4 *)(param_1 + 0x38));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_1 + 0x70,*(long *)(param_1 + 0xf8) + 0x10);
      func_0x000108c6323c();
      func_0x000108c6310c();
      puVar12 = *(undefined8 **)(param_1 + 0xf8);
      func_0x000108c63148();
      func_0x000108c63158();
      lVar11 = puVar12[1];
      uVar13 = *puVar12;
      *(undefined8 *)(param_1 + 0xd8) = puVar12[1];
      *(undefined8 *)(param_1 + 0xd0) = uVar13;
      if (lVar11 != 0) {
        do {
          func_0x000108c62ea8();
        } while (extraout_w10_01 != 0);
      }
      func_0x000108c633e8(*(undefined8 *)(param_1 + 0xf8));
      func_0x000108c6321c();
      func_0x000108c63150();
    }
    if ((*(char *)(param_1 + 0x3c) == '\x01') &&
       (uVar5 = *(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28), !(bool)uVar5)) {
      plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + 0xb0);
      if (plVar6 != (long *)0x0) {
        func_0x000108c6345c();
        (*extraout_x8_00)();
      }
      func_0x000108c631f0();
      func_0x000108c63450(*(undefined8 *)(param_1 + 0xe8));
      do {
        func_0x000108c62eb8();
      } while (extraout_w10_02 != 0);
      func_0x000108c62f64();
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x100) = 2;
        lVar11 = *(long *)(param_1 + 0xe0);
        func_0x000108c62f38();
        if (*plVar6 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x000108c63210();
        plVar8 = extraout_x8_01;
        do {
          if (*plVar8 == 0) {
            func_0x000108c62ef4();
            plVar8 = extraout_x8_03;
            uVar3 = extraout_w10_04;
            uVar10 = extraout_x11_00;
          }
          else {
            func_0x000108c630f4();
            plVar8 = extraout_x8_02;
            uVar3 = extraout_w10_03;
            uVar10 = extraout_x11;
          }
          if ((uVar10 & 1) != 0) {
            func_0x000108c62fe0();
            if ((bool)uVar5) {
              func_0x000108c62f04();
              func_0x000108c62e68();
              func_0x000108c62e78();
              *(long **)(lVar11 + 0x90) = plVar6;
            }
            func_0x000108c63408();
LAB_108c62830:
            func_0x000108c62f74(*(undefined8 *)(lVar11 + 0x90));
            *(undefined8 *)(lVar11 + 0x10) = 0;
            return;
          }
        } while ((uVar3 >> 1 & 1) == 0);
      }
      goto LAB_108c626c8;
    }
  }
  lVar11 = *(long *)(param_1 + 0x18);
  do {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    lVar7 = lVar11 + 0x10;
    func_0x000108c62fa8(lVar7,param_1 + 0xe0);
    if ((int)lVar7 != 0) {
      func_0x00010865f984(lVar11 + 0x98);
      func_0x000108c63354();
      func_0x000108c6301c();
      break;
    }
  } while ((*(byte *)(param_1 + 0xe0) >> 1 & 1) == 0);
  func_0x000108c63250();
  func_0x000108c63130();
LAB_108c62730:
  func_0x000108c63140();
  func_0x000108c62f84();
  func_0x000108c62ff0();
  return;
}



/* Entry: 108c629b0; end: 108c62a0b;  */

void FUN_108c629b0(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\0') {
    func_0x000108c63128();
    func_0x000108c62fa0();
  }
  else {
    if (*(char *)(param_1 + 0x100) == '\x01') {
      func_0x000107c27f9c(param_1 + 0xe0);
      func_0x000108c63054();
    }
    else {
      func_0x000107c27f9c(param_1 + 0xe0);
      func_0x000108c63138();
      func_0x000108c63130();
    }
    func_0x000108c63140();
  }
  func_0x000108c62f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62a0c; end: 108c62b27;  */

void FUN_108c62a0c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c604fc(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x108);
    do {
      func_0x000108c62eb8();
    } while (extraout_w10 != 0);
    func_0x000108c63000(*(undefined8 *)(param_1 + 0x100));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x110) = 1;
      lVar5 = *(long *)(param_1 + 0x100);
      func_0x000108c62f14();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108c62ef4();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c630f4();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c62fe0();
          if ((bool)in_ZR) {
            func_0x000108c62f04();
            func_0x000108c62e68();
            func_0x000108c62e78();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000108c62ec8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = param_1 + 0x100;
  FUN_108c60aa8(lVar5);
  FUN_108c60490(param_1 + 0x10,lVar5);
  func_0x000108c632c4();
  func_0x000108c632b4();
  func_0x000108c62f84();
  func_0x000108c63340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62b28; end: 108c62b5f;  */

void FUN_108c62b28(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    func_0x000108c632c4();
    func_0x000108c632b4();
  }
  func_0x000108c62f84();
  func_0x000108c63340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62b60; end: 108c62cdf;  */

void FUN_108c62b60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long alStack_50 [2];
  undefined1 auStack_40 [16];
  
  lVar2 = param_1 + 0x30;
  FUN_108c60aa8(lVar2);
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x000108c6329c(*(undefined8 *)(param_1 + 0x40),auStack_40);
  FUN_108c5fcf8(alStack_50,auStack_40);
  func_0x000108c631b0();
  func_0x000108c631d0();
  lVar1 = alStack_50[0];
  __ZNSt3__15mutex4lockEv(alStack_50[0] + 0x50);
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    func_0x0001086aa2c0(lVar1,lVar2);
  }
  else {
    func_0x00010867be74(lVar1,lVar2);
  }
  plVar3 = *(long **)(lVar1 + 0x98);
  *(undefined8 *)(lVar1 + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
  if (plVar3 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(lVar1 + 0x20);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,alStack_50);
    func_0x000108c62fb4();
  }
  func_0x000108c63014();
  func_0x000107c27f9c(param_1 + 0x30);
  func_0x000108c633c8();
  func_0x000108c62f84();
  func_0x000108c62ff0();
  return;
}



/* Entry: 108c62ce0; end: 108c62d07;  */

void FUN_108c62ce0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x30);
  func_0x000108c62f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62d08; end: 108c62e1b;  */

void FUN_108c62d08(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c61e94(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000108c62eb8();
    } while (extraout_w10 != 0);
    func_0x000108c63000(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar5 = *(long *)(param_1 + 0x50);
      func_0x000108c62f14();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar5 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108c62ef4();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108c630f4();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000108c62fe0();
          if ((bool)in_ZR) {
            func_0x000108c62f04();
            func_0x000108c62e68();
            func_0x000108c62e78();
            *(long **)(lVar5 + 0x90) = plVar2;
          }
          func_0x000108c62ec8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x000108c633b8();
  func_0x000108c63384();
  func_0x000108c633c8();
  func_0x000108c62f84();
  func_0x000108c6332c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62e1c; end: 108c62e53;  */

void FUN_108c62e1c(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000108c633b8();
    func_0x000108c63384();
  }
  func_0x000108c62f84();
  func_0x000108c6332c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c62e54; end: 108c6347b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c62e54(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack_38;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  plVar6 = (long *)(unaff_x19 + 0x18);
  lVar7 = *plVar6;
  do {
    uStack_38 = 0;
    lVar4 = lVar7 + 0x10;
    func_0x000108c62fa8(lVar4,&uStack_38);
    if ((int)lVar4 != 0) {
      func_0x00010865f984(lVar7 + 0x98);
      func_0x00010865f9a8(lVar7 + 0x98,&stack0x00000008);
      func_0x000108c63084();
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 108c6347c; end: 108c6355b;  */

undefined8 * FUN_108c6347c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[7] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  FUN_108c645d8(param_1 + 0x14);
  param_1[0x30] = 0x32aaaba7;
  param_1[0x3b] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  return param_1;
}



/* Entry: 108c6355c; end: 108c63e27;  */

undefined1 * FUN_108c6355c(long param_1,undefined8 param_2,int param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 extraout_x8;
  undefined1 *puVar12;
  undefined1 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  undefined1 *puVar13;
  undefined1 *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  undefined1 *extraout_x9_02;
  ulong extraout_x9_03;
  ulong uVar14;
  ulong extraout_x9_04;
  long *plVar15;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  undefined1 *extraout_x11;
  undefined1 *extraout_x11_00;
  undefined1 *extraout_x11_01;
  undefined1 *extraout_x11_02;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x19;
  long *unaff_x21;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  func_0x000108c673cc();
  uStack_68 = extraout_x8;
  if (*param_4 == 0) {
LAB_108c635bc:
    puVar16 = (undefined1 *)0xffffffffffffffff;
LAB_108c63d38:
    func_0x000108c67248(uStack_68);
    if ((bool)in_ZR) {
      return puVar16;
    }
    ___stack_chk_fail();
  }
  else {
    iVar11 = param_3;
    func_0x000108c67544();
    plStack_90 = (long *)CONCAT44(plStack_90._4_4_,iVar11);
    __ZNSt3__15mutex4lockEv(param_1 + 0x180);
    lVar9 = unaff_x19 + 0x1c0;
    FUN_108c64c74(lVar9,&plStack_90);
    func_0x000108c67370();
    if (lVar9 != 0) goto LAB_108c635bc;
    __ZNSt3__15mutex4lockEv(unaff_x19 + 0x38);
    lVar2 = unaff_x21[1];
    for (lVar9 = *unaff_x21; uVar6 = lVar9 - lVar2 < 0, lVar9 != lVar2; lVar9 = lVar9 + 0x18) {
      lVar10 = unaff_x19 + 0x78;
      FUN_108c6461c(lVar10,lVar9);
      if (lVar10 == 0) {
        plStack_88 = *(long **)(unaff_x19 + 0x30);
        plStack_90 = (long *)((ulong)plStack_90 & 0xffffffff00000000);
        FUN_108c63e28(unaff_x19 + 0x78,lVar9,&plStack_90);
      }
    }
    func_0x000108c6732c();
    puVar17 = &stack0xffffffffffffff40;
    puVar8 = auStack_b8;
    func_0x000107c2795c();
    lStack_98 = param_4[1];
    lStack_a0 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10 != 0);
    }
    puStack_78 = (undefined8 *)0x0;
    func_0x000108c67300();
    *puVar8 = &PTR_FUN_110abb140;
    puVar8[1] = unaff_x19;
    func_0x000107c2795c(puVar8 + 2,auStack_b8);
    puVar8[6] = lStack_98;
    puVar8[5] = lStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10_00 != 0);
    }
    puVar16 = (undefined1 *)(unaff_x19 + 0xa0);
    puStack_78 = puVar8;
    FUN_108c4cc88(puVar16,&plStack_90);
    func_0x000108c4cdb8(&plStack_90);
    FUN_108c63e40(&stack0xffffffffffffff40);
    __ZNSt3__15mutex4lockEv(unaff_x19 + 0x180);
    puVar18 = (undefined1 *)(long)param_3;
    puVar19 = *(undefined1 **)(unaff_x19 + 0x1c8);
    if (puVar19 != (undefined1 *)0x0) {
      puVar12 = puVar19 + -1;
      if (((ulong)puVar19 & (ulong)puVar12) == 0) {
        puVar17 = (undefined1 *)((ulong)puVar12 & (ulong)puVar18);
        uVar6 = false;
      }
      else {
        uVar6 = (long)puVar19 - (long)puVar18 < 0;
        puVar17 = puVar18;
        if (puVar19 <= puVar18) {
          uVar14 = 0;
          if (puVar19 != (undefined1 *)0x0) {
            uVar14 = (ulong)puVar18 / (ulong)puVar19;
          }
          puVar17 = puVar18 + -(uVar14 * (long)puVar19);
        }
      }
      plVar20 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + (long)puVar17 * 8);
      if (plVar20 != (long *)0x0) {
        do {
          while( true ) {
            plVar20 = (long *)*plVar20;
            if (plVar20 == (long *)0x0) goto LAB_108c63740;
            puVar13 = (undefined1 *)plVar20[1];
            if (puVar13 != puVar18) break;
            uVar6 = (int)plVar20[2] - param_3 < 0;
            if ((int)plVar20[2] == param_3) goto LAB_108c639a4;
          }
          if (((ulong)puVar19 & (ulong)puVar12) == 0) {
            puVar13 = (undefined1 *)((ulong)puVar13 & (ulong)puVar12);
          }
          else if (puVar19 <= puVar13) {
            uVar14 = 0;
            if (puVar19 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar13 / (ulong)puVar19;
            }
            puVar13 = puVar13 + -(uVar14 * (long)puVar19);
          }
          uVar6 = (long)puVar13 - (long)puVar17 < 0;
        } while (puVar13 == puVar17);
      }
    }
LAB_108c63740:
    plVar20 = (long *)0x20;
    __Znwm();
    plVar1 = (long *)(unaff_x19 + 0x1d0);
    uStack_80 = 1;
    *plVar20 = 0;
    plVar20[1] = (long)puVar18;
    *(int *)(plVar20 + 2) = param_3;
    plVar20[3] = 0;
    plStack_90 = plVar20;
    plStack_88 = plVar1;
    if ((puVar19 != (undefined1 *)0x0) &&
       (func_0x000108c673a0((float)(*(long *)(unaff_x19 + 0x1d8) + 1),
                            *(undefined4 *)(unaff_x19 + 0x1e0),(float)puVar19), !(bool)uVar6)) {
LAB_108c63928:
      plVar20 = plStack_90;
      lVar9 = *(long *)(unaff_x19 + 0x1c0);
      plVar15 = *(long **)(lVar9 + (long)puVar17 * 8);
      if (plVar15 == (long *)0x0) {
        *plStack_90 = *plVar1;
        *plVar1 = (long)plStack_90;
        *(long **)(lVar9 + (long)puVar17 * 8) = plVar1;
        if (*plStack_90 != 0) {
          puVar18 = *(undefined1 **)(*plStack_90 + 8);
          if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
            puVar18 = (undefined1 *)((ulong)puVar18 & (ulong)(puVar19 + -1));
            uVar6 = false;
          }
          else {
            uVar6 = (long)puVar18 - (long)puVar19 < 0;
            if (puVar19 <= puVar18) {
              uVar14 = 0;
              if (puVar19 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar18 / (ulong)puVar19;
              }
              puVar18 = puVar18 + -(uVar14 * (long)puVar19);
            }
          }
          *(long **)(lVar9 + (long)puVar18 * 8) = plStack_90;
        }
      }
      else {
        *plStack_90 = *plVar15;
        *plVar15 = (long)plStack_90;
      }
      plStack_90 = (long *)0x0;
      *(long *)(unaff_x19 + 0x1d8) = *(long *)(unaff_x19 + 0x1d8) + 1;
      FUN_108c64e34(&plStack_90);
LAB_108c639a4:
      plVar20[3] = (long)puVar16;
      puVar19 = *(undefined1 **)(unaff_x19 + 0x1f0);
      if (puVar19 != (undefined1 *)0x0) {
        puVar18 = puVar19 + -1;
        if (((ulong)puVar19 & (ulong)puVar18) == 0) {
          puVar17 = (undefined1 *)((ulong)puVar18 & (ulong)puVar16);
          uVar6 = false;
        }
        else {
          uVar6 = (long)puVar16 - (long)puVar19 < 0;
          puVar17 = puVar16;
          if (puVar19 <= puVar16) {
            uVar14 = 0;
            if (puVar19 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar16 / (ulong)puVar19;
            }
            puVar17 = puVar16 + -(uVar14 * (long)puVar19);
          }
        }
        plVar20 = *(long **)(*(long *)(unaff_x19 + 0x1e8) + (long)puVar17 * 8);
        if (plVar20 != (long *)0x0) {
          do {
            while( true ) {
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_108c63a34;
              puVar12 = (undefined1 *)plVar20[1];
              if (puVar12 != puVar16) break;
              uVar6 = plVar20[2] - (long)puVar16 < 0;
              if ((undefined1 *)plVar20[2] == puVar16) goto LAB_108c63c98;
            }
            if (((ulong)puVar19 & (ulong)puVar18) == 0) {
              puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar18);
            }
            else if (puVar19 <= puVar12) {
              uVar14 = 0;
              if (puVar19 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar12 / (ulong)puVar19;
              }
              puVar12 = puVar12 + -(uVar14 * (long)puVar19);
            }
            uVar6 = (long)puVar12 - (long)puVar17 < 0;
          } while (puVar12 == puVar17);
        }
      }
LAB_108c63a34:
      plVar20 = (long *)0x20;
      __Znwm();
      plVar1 = (long *)(unaff_x19 + 0x1f8);
      uStack_80 = 1;
      *plVar20 = 0;
      plVar20[1] = (long)puVar16;
      plVar20[2] = (long)puVar16;
      *(undefined4 *)(plVar20 + 3) = 0;
      plStack_90 = plVar20;
      plStack_88 = plVar1;
      if ((puVar19 == (undefined1 *)0x0) ||
         (func_0x000108c673a0((float)(*(long *)(unaff_x19 + 0x200) + 1),
                              *(undefined4 *)(unaff_x19 + 0x208),(float)puVar19), (bool)uVar6)) {
        bVar5 = (undefined1 *)0x2 < puVar19;
        bVar7 = puVar19 == (undefined1 *)0x3;
        func_0x000108c670e0((long)puVar19 << 1);
        puVar17 = extraout_x8_03;
        if (!bVar5 || bVar7) {
          puVar17 = extraout_x9_02;
        }
        if (puVar17 + -1 == (undefined1 *)0x0) {
          puVar17 = (undefined1 *)0x2;
        }
        else if (((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
          puVar19 = *(undefined1 **)(unaff_x19 + 0x1f0);
        }
        if (puVar19 < puVar17) {
LAB_108c63acc:
          if ((ulong)puVar17 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_108c63d78;
          }
          lVar9 = (long)puVar17 << 3;
          __Znwm(lVar9);
          func_0x000108c66494(unaff_x19 + 0x1e8,lVar9);
          *(undefined1 **)(unaff_x19 + 0x1f0) = puVar17;
          lVar9 = *(long *)(unaff_x19 + 0x1e8);
          for (puVar19 = (undefined1 *)0x0; bVar7 = puVar19 <= puVar17, puVar17 != puVar19;
              puVar19 = puVar19 + 1) {
            *(undefined8 *)(lVar9 + (long)puVar19 * 8) = 0;
          }
          puVar19 = puVar17;
          if (*plVar1 != 0) {
            func_0x000108c67530();
            puVar18 = extraout_x11_01;
            if (bVar7) {
              puVar18 = extraout_x11_01 + -(extraout_x12_00 * (long)puVar17);
            }
            if (((ulong)puVar17 & extraout_x9_03) == 0) {
              puVar18 = (undefined1 *)((ulong)extraout_x11_01 & extraout_x9_03);
            }
            *(long **)(extraout_x8_04 + (long)puVar18 * 8) = plVar1;
            lVar9 = extraout_x8_04;
            uVar14 = extraout_x9_03;
            plVar20 = extraout_x10_01;
            while (plVar15 = plVar20, plVar20 = (long *)*plVar15, plVar20 != (long *)0x0) {
              puVar12 = (undefined1 *)plVar20[1];
              if (((ulong)puVar17 & uVar14) == 0) {
                puVar12 = (undefined1 *)((ulong)puVar12 & uVar14);
              }
              else if (puVar17 <= puVar12) {
                uVar3 = 0;
                if (puVar17 != (undefined1 *)0x0) {
                  uVar3 = (ulong)puVar12 / (ulong)puVar17;
                }
                puVar12 = puVar12 + -(uVar3 * (long)puVar17);
              }
              if (puVar12 != puVar18) {
                if (*(long *)(lVar9 + (long)puVar12 * 8) == 0) {
                  *(long **)(lVar9 + (long)puVar12 * 8) = plVar15;
                  puVar18 = puVar12;
                }
                else {
                  func_0x000108c67344();
                  lVar9 = extraout_x8_05;
                  uVar14 = extraout_x9_04;
                  plVar20 = extraout_x10_02;
                  puVar18 = extraout_x11_02;
                }
              }
            }
          }
        }
        else if (puVar17 < puVar19) {
          puVar18 = (undefined1 *)
                    (long)((float)*(ulong *)(unaff_x19 + 0x200) / *(float *)(unaff_x19 + 0x208));
          if ((puVar19 < (undefined1 *)0x3) || (((ulong)puVar19 & (ulong)(puVar19 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x000108c6713c();
          }
          if (puVar17 <= puVar18) {
            puVar17 = puVar18;
          }
          if (puVar17 < puVar19) {
            if (puVar17 != (undefined1 *)0x0) goto LAB_108c63acc;
            func_0x000108c66494(unaff_x19 + 0x1e8,0);
            *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
            puVar19 = (undefined1 *)0x0;
          }
          else {
            puVar19 = *(undefined1 **)(unaff_x19 + 0x1f0);
          }
        }
        if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
          puVar17 = (undefined1 *)((ulong)(puVar19 + -1) & (ulong)puVar16);
        }
        else {
          puVar17 = puVar16;
          if (puVar19 <= puVar16) {
            uVar14 = 0;
            if (puVar19 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar16 / (ulong)puVar19;
            }
            puVar17 = puVar16 + -(uVar14 * (long)puVar19);
          }
        }
      }
      plVar20 = plStack_90;
      lVar9 = *(long *)(unaff_x19 + 0x1e8);
      plVar15 = *(long **)(lVar9 + (long)puVar17 * 8);
      if (plVar15 == (long *)0x0) {
        *plStack_90 = *plVar1;
        *plVar1 = (long)plStack_90;
        *(long **)(lVar9 + (long)puVar17 * 8) = plVar1;
        if (*plStack_90 != 0) {
          puVar17 = *(undefined1 **)(*plStack_90 + 8);
          if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
            puVar17 = (undefined1 *)((ulong)puVar17 & (ulong)(puVar19 + -1));
          }
          else if (puVar19 <= puVar17) {
            uVar14 = 0;
            if (puVar19 != (undefined1 *)0x0) {
              uVar14 = (ulong)puVar17 / (ulong)puVar19;
            }
            puVar17 = puVar17 + -(uVar14 * (long)puVar19);
          }
          *(long **)(lVar9 + (long)puVar17 * 8) = plStack_90;
        }
      }
      else {
        *plStack_90 = *plVar15;
        *plVar15 = (long)plStack_90;
      }
      plStack_90 = (long *)0x0;
      *(long *)(unaff_x19 + 0x200) = *(long *)(unaff_x19 + 0x200) + 1;
      FUN_108c64f94(&plStack_90);
LAB_108c63c98:
      *(int *)(plVar20 + 3) = param_3;
      func_0x000108c67370();
      plStack_88 = (long *)0x0;
      plStack_90 = (long *)0x0;
      puStack_78 = (undefined8 *)0x0;
      uStack_80 = 0;
      uStack_70 = 0x3f800000;
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x38);
      bVar7 = false;
      lVar2 = unaff_x21[1];
      for (lVar9 = *unaff_x21; in_ZR = lVar9 == lVar2, !(bool)in_ZR; lVar9 = lVar9 + 0x18) {
        lVar10 = unaff_x19 + 0x78;
        FUN_108c6461c(lVar10,lVar9);
        if (lVar10 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,lVar9)
          ;
          uStack_c8 = *(undefined8 *)(lVar10 + 0x30);
          uStack_d0 = *(undefined8 *)(lVar10 + 0x28);
          func_0x000108c67440(&plStack_90);
          func_0x000108c671e8();
          bVar7 = (bool)(*(int *)(lVar10 + 0x28) != 0 | bVar7);
        }
      }
      func_0x000108c6732c();
      if (bVar7) {
        func_0x000108c67518(*param_4);
        (*extraout_x8_06)();
      }
      func_0x000108c3f498(&plStack_90);
      goto LAB_108c63d38;
    }
    bVar5 = (undefined1 *)0x2 < puVar19;
    bVar7 = puVar19 == (undefined1 *)0x3;
    func_0x000108c670e0((long)puVar19 << 1);
    puVar17 = extraout_x8_00;
    if (!bVar5 || bVar7) {
      puVar17 = extraout_x9;
    }
    if (puVar17 + -1 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)0x2;
    }
    else if (((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
      puVar19 = *(undefined1 **)(unaff_x19 + 0x1c8);
    }
    if (puVar17 <= puVar19) {
      if (puVar17 < puVar19) {
        puVar12 = (undefined1 *)
                  (long)((float)*(ulong *)(unaff_x19 + 0x1d8) / *(float *)(unaff_x19 + 0x1e0));
        if ((puVar19 < (undefined1 *)0x3) || (((ulong)puVar19 & (ulong)(puVar19 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x000108c6713c();
        }
        if (puVar17 <= puVar12) {
          puVar17 = puVar12;
        }
        if (puVar17 < puVar19) {
          if (puVar17 != (undefined1 *)0x0) goto LAB_108c637d8;
          func_0x000108c6647c(unaff_x19 + 0x1c0,0);
          *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
          puVar19 = (undefined1 *)0x0;
        }
        else {
          puVar19 = *(undefined1 **)(unaff_x19 + 0x1c8);
        }
      }
LAB_108c638fc:
      if (((ulong)puVar19 & (ulong)(puVar19 + -1)) == 0) {
        uVar6 = 0;
        puVar17 = (undefined1 *)((ulong)(puVar19 + -1) & (ulong)puVar18);
      }
      else {
        uVar6 = (long)puVar19 - (long)puVar18 < 0;
        puVar17 = puVar18;
        if (puVar19 <= puVar18) {
          uVar14 = 0;
          if (puVar19 != (undefined1 *)0x0) {
            uVar14 = (ulong)puVar18 / (ulong)puVar19;
          }
          puVar17 = puVar18 + -(uVar14 * (long)puVar19);
        }
      }
      goto LAB_108c63928;
    }
LAB_108c637d8:
    if ((ulong)puVar17 >> 0x3d == 0) {
      lVar9 = (long)puVar17 << 3;
      __Znwm(lVar9);
      func_0x000108c6647c(unaff_x19 + 0x1c0,lVar9);
      *(undefined1 **)(unaff_x19 + 0x1c8) = puVar17;
      lVar9 = *(long *)(unaff_x19 + 0x1c0);
      for (puVar19 = (undefined1 *)0x0; bVar7 = puVar19 <= puVar17, puVar17 != puVar19;
          puVar19 = puVar19 + 1) {
        *(undefined8 *)(lVar9 + (long)puVar19 * 8) = 0;
      }
      puVar19 = puVar17;
      if (*plVar1 != 0) {
        func_0x000108c67530();
        puVar12 = extraout_x11;
        if (bVar7) {
          puVar12 = extraout_x11 + -(extraout_x12 * (long)puVar17);
        }
        if (((ulong)puVar17 & extraout_x9_00) == 0) {
          puVar12 = (undefined1 *)((ulong)extraout_x11 & extraout_x9_00);
        }
        *(long **)(extraout_x8_01 + (long)puVar12 * 8) = plVar1;
        lVar9 = extraout_x8_01;
        uVar14 = extraout_x9_00;
        plVar20 = extraout_x10;
        while (plVar15 = plVar20, plVar20 = (long *)*plVar15, plVar20 != (long *)0x0) {
          puVar13 = (undefined1 *)plVar20[1];
          if (((ulong)puVar17 & uVar14) == 0) {
            puVar13 = (undefined1 *)((ulong)puVar13 & uVar14);
          }
          else if (puVar17 <= puVar13) {
            uVar3 = 0;
            if (puVar17 != (undefined1 *)0x0) {
              uVar3 = (ulong)puVar13 / (ulong)puVar17;
            }
            puVar13 = puVar13 + -(uVar3 * (long)puVar17);
          }
          if (puVar13 != puVar12) {
            if (*(long *)(lVar9 + (long)puVar13 * 8) == 0) {
              *(long **)(lVar9 + (long)puVar13 * 8) = plVar15;
              puVar12 = puVar13;
            }
            else {
              func_0x000108c67344();
              lVar9 = extraout_x8_02;
              uVar14 = extraout_x9_01;
              plVar20 = extraout_x10_00;
              puVar12 = extraout_x11_00;
            }
          }
        }
      }
      goto LAB_108c638fc;
    }
  }
  func_0x000104bd35f4();
LAB_108c63d78:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108c63d7c);
  (*pcVar4)();
}



/* Entry: 108c63e28; end: 108c63e3f;  */

void FUN_108c63e28(void)

{
  FUN_108c646dc();
  return;
}



/* Entry: 108c63e40; end: 108c63e6b;  */

long FUN_108c63e40(long param_1)

{
  func_0x000108c3eb90(param_1 + 0x20);
  func_0x000107c278a8(param_1 + 8);
  return param_1;
}



/* Entry: 108c63e6c; end: 108c64033;  */

void FUN_108c63e6c(long param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar6;
  long *plVar7;
  long *unaff_x24;
  long *plVar8;
  
  func_0x000108c67544();
  plVar5 = (long *)(param_1 + 0x18);
  func_0x000107c278c4();
  plVar7 = (long *)unaff_x19[1];
  plVar2 = plVar5;
  if (plVar7 != (long *)0x0) {
    uVar6 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar6) == 0) {
      unaff_x24 = (long *)(uVar6 & (ulong)plVar5);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar5 - (long)plVar7 < 0;
      unaff_x24 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar8 = *(long **)(*unaff_x19 + (long)unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108c63f28;
          plVar3 = (long *)plVar8[1];
          in_NG = (long)plVar3 - (long)plVar5 < 0;
          if (plVar3 != plVar5) break;
          plVar2 = plVar8 + 2;
          func_0x000107c278d0();
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        if (((ulong)plVar7 & uVar6) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar6);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
        in_NG = (long)plVar3 - (long)unaff_x24 < 0;
      } while (plVar3 == unaff_x24);
    }
  }
LAB_108c63f28:
  plVar8 = unaff_x19 + 2;
  func_0x000108c67300();
  *plVar2 = 0;
  plVar2[1] = (long)plVar5;
  func_0x000108c67308(plVar2 + 2);
  func_0x000108c6711c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((plVar7 == (long *)0x0) || (func_0x000108c673a0(), (bool)in_NG)) {
    func_0x000108c670e0((long)plVar7 << 1);
    func_0x000108c674cc();
    plVar7 = (long *)unaff_x19[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar7 <= plVar5) {
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar6 * (long)plVar7);
      }
    }
  }
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar2 = *plVar8;
    *plVar8 = (long)plVar2;
    *(long **)(lVar4 + (long)unaff_x24 * 8) = plVar8;
    if (*plVar2 != 0) {
      plVar5 = *(long **)(*plVar2 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar6 = 0;
        if (plVar7 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
  }
  func_0x000108c670f4();
  return;
}



/* Entry: 108c64034; end: 108c6409f;  */

void FUN_108c64034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_108c4cd00(param_1 + 0xa0);
  __ZNSt3__15mutex4lockEv(param_1 + 0x180);
  lVar1 = param_1 + 0x1e8;
  FUN_108c64ba8(lVar1,&uStack_28);
  if (lVar1 != 0) {
    FUN_108c64c44(param_1 + 0x1c0,lVar1 + 0x18);
    FUN_108c64e70(param_1 + 0x1e8,lVar1);
  }
  func_0x000108c67370();
  return;
}



/* Entry: 108c640a0; end: 108c64363;  */

void FUN_108c640a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined ***pppuStack_108;
  undefined **appuStack_100 [3];
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [4];
  undefined8 uStack_58;
  
  func_0x000108c673cc();
  uVar1 = *param_2;
  lVar3 = param_2[1];
  uStack_130 = uVar1;
  lStack_128 = lVar3;
  uStack_58 = extraout_x8;
  if (lVar3 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10 != 0);
  }
  uVar2 = param_2[4];
  lVar4 = param_2[5];
  uStack_140 = uVar2;
  lStack_138 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c278b8(auStack_158,&UNK_10f50e350);
  pppuStack_e8 = appuStack_100;
  appuStack_100[0] = &PTR_FUN_110abb2a0;
  uStack_170 = uVar1;
  lStack_168 = lVar3;
  uStack_180 = uVar1;
  if (lVar3 == 0) {
    lStack_178 = 0;
  }
  else {
    do {
      func_0x000108c670d0();
      lStack_178 = lVar3;
    } while (extraout_w10_01 != 0);
    do {
      func_0x000108c670d0();
    } while (extraout_w10_02 != 0);
    do {
      func_0x000108c670d0();
    } while (extraout_w10_03 != 0);
  }
  ppuStack_120 = &PTR_SUB_110abb330;
  uStack_190 = 0;
  uStack_188 = 0;
  pppuStack_108 = &ppuStack_120;
  uStack_118 = uVar1;
  lStack_110 = lVar3;
  uStack_e0 = uVar2;
  lStack_d8 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_04 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d0,auStack_158);
  func_0x000108c65018(auStack_b8,appuStack_100);
  lStack_90 = lStack_168;
  uStack_98 = uStack_170;
  if (lStack_168 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_05 != 0);
  }
  uStack_88 = uStack_180;
  lStack_80 = lStack_178;
  if (lStack_178 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_06 != 0);
  }
  puVar5 = auStack_78;
  func_0x000108c4d384(puVar5,&ppuStack_120);
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000108c674a0();
  *puVar5 = &PTR_SUB_110abb1d0;
  puVar5[2] = lStack_d8;
  puVar5[1] = uStack_e0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 3,auStack_d0);
  FUN_108c652e8(puVar5 + 6,auStack_b8);
  lVar3 = lStack_90;
  uVar1 = uStack_98;
  uStack_98 = 0;
  lStack_90 = 0;
  puVar5[0xb] = lVar3;
  puVar5[10] = uVar1;
  puVar5[0xd] = lStack_80;
  puVar5[0xc] = uStack_88;
  uStack_88 = 0;
  lStack_80 = 0;
  FUN_108c65334(puVar5 + 0xe,auStack_78);
  *(undefined8 **)(param_1 + 0x18) = puVar5;
  func_0x000108c64fd0(&uStack_e0);
  func_0x000108c4cdb8(&ppuStack_120);
  FUN_108c4d70c(&uStack_190);
  FUN_108c4d70c(&uStack_180);
  FUN_108c4d70c(&uStack_170);
  FUN_108c662e0(appuStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x000108c4cad0(&uStack_140);
  FUN_108c4d70c(&uStack_130);
  func_0x000108c67248(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c4cad0(puVar5 + 1);
    __ZdlPv(puVar5);
    func_0x000108c64fd0(&uStack_e0);
    func_0x000108c4cdb8(&ppuStack_120);
    FUN_108c4d70c(&uStack_190);
    FUN_108c4d70c(&uStack_180);
    FUN_108c4d70c(&uStack_170);
    FUN_108c662e0(appuStack_100);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    do {
      func_0x000108c4cad0(&uStack_140);
      FUN_108c4d70c(&uStack_130);
      func_0x000108c671d8();
    } while( true );
  }
  return;
}



/* Entry: 108c64364; end: 108c643fb;  */

void FUN_108c64364(undefined8 param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined4 auStack_50 [2];
  long lStack_48;
  
  if (*param_3 == param_3[1]) {
    func_0x000108c67564();
  }
  else {
    plVar1 = (long *)(param_2 + 0x30);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x000108c67564();
    lVar2 = param_3[1];
    for (lVar6 = *param_3; lVar6 != lVar2; lVar6 = lVar6 + 0x18) {
      auStack_50[0] = param_4;
      lStack_48 = lVar5 + 1;
      FUN_108c63e28(param_1,lVar6,auStack_50);
    }
  }
  return;
}



/* Entry: 108c643fc; end: 108c644bb;  */

void FUN_108c643fc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000108c673fc();
  func_0x000108c672e4();
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  plVar2 = (long *)(unaff_x20 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = unaff_x19 + 0x78;
    FUN_108c6461c(lVar1,plVar2 + 2);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x30) <= plVar2[6])) {
      FUN_108c644bc(unaff_x19 + 0x78,plVar2 + 2,plVar2 + 5);
      FUN_108c644f4(auStack_50,plVar2 + 2,plVar2 + 5);
    }
  }
  func_0x000108c6732c();
  if (lStack_38 != 0) {
    lVar1 = unaff_x19 + 0xa0;
    FUN_108c6450c();
    if (lVar1 != 0) {
      FUN_108c64544(unaff_x19 + 0xa0,auStack_50);
    }
  }
  func_0x000108c67398();
  return;
}



/* Entry: 108c644bc; end: 108c644f3;  */

void FUN_108c644bc(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_108c664ac(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x30) = param_3[1];
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 108c644f4; end: 108c6450b;  */

void FUN_108c644f4(void)

{
  FUN_108c66648();
  return;
}



/* Entry: 108c6450c; end: 108c64543;  */

undefined8 FUN_108c6450c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000108c67598();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x000108c67474();
  return uVar1;
}



/* Entry: 108c64544; end: 108c645d7;  */

void FUN_108c64544(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_30 = 0x3f800000;
  func_0x000108c67598();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  FUN_108c66668(&uStack_50,param_1 + 0xb0);
  func_0x000108c67474();
  for (plVar1 = (long *)lStack_40; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_108c661a8(plVar1 + 3,param_2);
  }
  FUN_108c4cd58(&uStack_50);
  return;
}



/* Entry: 108c645d8; end: 108c6461b;  */

undefined8 * FUN_108c645d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aba4a8;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1b] = 0;
  return param_1;
}



/* Entry: 108c6461c; end: 108c646db;  */

long FUN_108c6461c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
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
    plVar3 = plVar2;
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
        func_0x000108c6747c();
        if ((int)plVar3 != 0) {
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



/* Entry: 108c646dc; end: 108c646fb;  */

void FUN_108c646dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108c646fc(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 108c646fc; end: 108c64897;  */

undefined1  [16] FUN_108c646fc(ulong param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar5;
  ulong uVar6;
  ulong unaff_x26;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 *puStack_78;
  
  func_0x000108c6728c();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x26 = uVar7 & param_1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_1 - uVar6) < 0;
      unaff_x26 = param_1;
      if (uVar6 <= param_1) {
        func_0x000108c67524();
      }
    }
    puVar5 = *(undefined8 **)(*unaff_x19 + unaff_x26 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar5 = (undefined8 *)*puVar5;
          if (puVar5 == (undefined8 *)0x0) goto LAB_108c647a8;
          uVar3 = puVar5[1];
          in_NG = (long)(uVar3 - param_1) < 0;
          if (uVar3 != param_1) break;
          func_0x000108c674f4();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            puStack_78 = puVar5;
            goto LAB_108c6487c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x26) < 0;
      } while (uVar3 == unaff_x26);
    }
  }
LAB_108c647a8:
  func_0x000108c67300();
  func_0x000108c67550();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000108c6711c(*unaff_x21);
  if ((uVar6 == 0) || (func_0x000108c673a0(), uVar4 = unaff_x26, (bool)in_NG)) {
    func_0x000108c67408();
    func_0x000108c670e0();
    func_0x000108c674cc();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_1;
    }
    else {
      uVar4 = param_1;
      if (uVar6 <= param_1) {
        func_0x000108c67524();
        uVar4 = unaff_x26;
      }
    }
  }
  puVar5 = *(undefined8 **)(*unaff_x19 + uVar4 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000108c67420();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(undefined8 **)(extraout_x8 + uVar4 * 8) = puStack_78;
    }
  }
  else {
    *puStack_78 = *puVar5;
    *puVar5 = puStack_78;
  }
  func_0x000108c670f4();
  uVar2 = 1;
LAB_108c6487c:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puStack_78;
  return auVar8;
}



/* Entry: 108c64898; end: 108c648c3;  */

undefined8 * FUN_108c64898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb140;
  FUN_108c63e40(param_1 + 1);
  return param_1;
}



/* Entry: 108c648c4; end: 108c648d7;  */

void FUN_108c648c4(void)

{
  FUN_108c64898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c648d8; end: 108c6490f;  */

undefined8 FUN_108c648d8(undefined8 param_1)

{
  func_0x000108c67300();
  FUN_108c64a9c();
  return param_1;
}



/* Entry: 108c64910; end: 108c64933;  */

void FUN_108c64910(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x000108c673fc();
  uVar2 = *puVar1;
  *param_2 = &PTR_FUN_110abb140;
  param_2[1] = uVar2;
  func_0x000107c2795c(param_2 + 2,puVar1 + 1);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  if (lVar3 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c64934; end: 108c64a67;  */

void FUN_108c64934(long param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  func_0x000108c673fc();
  lVar4 = *(long *)(param_1 + 8);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  __ZNSt3__15mutex4lockEv(lVar4 + 0x38);
  bVar5 = false;
  lVar1 = *(long *)(unaff_x19 + 0x18);
  for (lVar3 = *(long *)(unaff_x19 + 0x10); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    lVar2 = unaff_x20;
    FUN_108c64ae8();
    if (lVar2 == 0) {
      lVar2 = lVar4 + 0x78;
      FUN_108c6461c(lVar2,lVar3);
      func_0x000108c67308(auStack_a8);
      uStack_88 = *(undefined8 *)(lVar2 + 0x30);
      uStack_90 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000108c67440(&uStack_80);
      func_0x000108c671e8();
    }
    else {
      func_0x000108c67308(auStack_a8);
      uStack_88 = *(undefined8 *)(lVar2 + 0x30);
      uStack_90 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000108c67440(&uStack_80);
      func_0x000108c671e8();
      bVar5 = true;
    }
  }
  __ZNSt3__15mutex6unlockEv(lVar4 + 0x38);
  if (bVar5) {
    func_0x000108c67518(*(undefined8 *)(unaff_x19 + 0x28));
    (*extraout_x8)();
  }
  func_0x000108c3f498(&uStack_80);
  return;
}



/* Entry: 108c64a68; end: 108c64a8f;  */

void FUN_108c64a68(undefined8 param_1)

{
  func_0x000108c6758c();
  func_0x000108c673c4(param_1,&PTR_DAT_110abb1b0);
  func_0x000108c672ac();
  return;
}



/* Entry: 108c64a90; end: 108c64a9b;  */

undefined ** FUN_108c64a90(void)

{
  return &PTR_DAT_110abb1b0;
}



/* Entry: 108c64a9c; end: 108c64ae7;  */

void FUN_108c64a9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c673fc();
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_110abb140;
  param_1[1] = uVar1;
  func_0x000107c2795c(param_1 + 2,param_2 + 1);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c64ae8; end: 108c64ba7;  */

long FUN_108c64ae8(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
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
    plVar3 = plVar2;
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
        if (plVar2 != plVar4) break;
        func_0x000108c6747c();
        if ((int)plVar3 != 0) {
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



/* Entry: 108c64ba8; end: 108c64c43;  */

long FUN_108c64ba8(long *param_1,ulong *param_2)

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
        if (uVar7 != uVar4) break;
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



/* Entry: 108c64c44; end: 108c64c73;  */

void FUN_108c64c44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108c64c74();
  if (lVar1 != 0) {
    FUN_108c64d10(param_1,lVar1);
  }
  return;
}



/* Entry: 108c64c74; end: 108c64d0f;  */

long FUN_108c64c74(long *param_1,int *param_2)

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
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
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
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
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



/* Entry: 108c64d10; end: 108c64d3f;  */

undefined8 FUN_108c64d10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108c64d40(auStack_38);
  FUN_108c64e34(auStack_38);
  return uVar1;
}



/* Entry: 108c64d40; end: 108c64e33;  */

void FUN_108c64d40(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c64df4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c64df4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108c64df4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108c64e34; end: 108c64e57;  */

undefined8 FUN_108c64e34(undefined8 param_1)

{
  FUN_108c64e58(param_1,0);
  return param_1;
}



/* Entry: 108c64e58; end: 108c64e6f;  */

void FUN_108c64e58(long *param_1,long param_2)

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



/* Entry: 108c64e70; end: 108c64e9f;  */

undefined8 FUN_108c64e70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108c64ea0(auStack_38);
  FUN_108c64f94(auStack_38);
  return uVar1;
}



/* Entry: 108c64ea0; end: 108c64f93;  */

void FUN_108c64ea0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c64f54;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c64f54;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108c64f54:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108c64f94; end: 108c64fb7;  */

undefined8 FUN_108c64f94(undefined8 param_1)

{
  FUN_108c64fb8(param_1,0);
  return param_1;
}



/* Entry: 108c64fb8; end: 108c64fcf;  */

void FUN_108c64fb8(long *param_1,long param_2)

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



/* Entry: 108c64fd0; end: 108c6508f;  */

undefined8 FUN_108c64fd0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108c4cdb8(param_1 + 0x68);
  FUN_108c4d70c(param_1 + 0x58);
  FUN_108c4d70c(param_1 + 0x48);
  FUN_108c662e0(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000108c4d884();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 108c65090; end: 108c650a3;  */

void FUN_108c65090(void)

{
  func_0x000108c65064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c650a4; end: 108c650db;  */

undefined8 FUN_108c650a4(undefined8 param_1)

{
  func_0x000108c674a0();
  FUN_108c65380();
  return param_1;
}



/* Entry: 108c650dc; end: 108c650ff;  */

undefined8 * FUN_108c650dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110abb1d0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 3,param_1 + 0x18);
  func_0x000108c65018(param_2 + 6,param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  param_2[0xd] = *(undefined8 *)(param_1 + 0x68);
  param_2[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108c4d384(param_2 + 0xe,param_1 + 0x70);
  return param_2;
}



/* Entry: 108c65100; end: 108c652b3;  */

void FUN_108c65100(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [48];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined1 *puStack_120;
  undefined1 auStack_118 [192];
  undefined8 uStack_58;
  
  puVar1 = auStack_210;
  func_0x000108c673cc();
  uStack_58 = extraout_x8;
  FUN_108c6547c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar2 = puVar1;
  func_0x000107c3a5c0();
  func_0x000108c65018(auStack_1d8,param_1 + 0x30);
  FUN_108c6547c(auStack_1b8,auStack_210);
  uStack_180 = *(undefined8 *)(param_1 + 0x58);
  uStack_188 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10 != 0);
  }
  uStack_170 = *(undefined8 *)(param_1 + 0x10);
  uStack_178 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_168,param_1 + 0x18);
  uStack_148 = *(undefined8 *)(param_1 + 0x68);
  uStack_150 = *(undefined8 *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    do {
      func_0x000108c670d0();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108c4d384(auStack_140,param_1 + 0x70);
  puStack_120 = puVar1;
  FUN_108c65580(auStack_118,auStack_1d8);
  FUN_108c654d8(auStack_1e0,auStack_118,puVar2);
  FUN_108c65488(auStack_118);
  func_0x000107c27f9c(auStack_1e0);
  FUN_108c65488(auStack_1d8);
  func_0x00010b573c74();
  func_0x000108c67248(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_108c65488(auStack_1d8);
    func_0x00010b573c74(auStack_210);
    func_0x000108c671d8();
    func_0x000108c6758c();
    func_0x000108c673c4();
    func_0x000108c672ac();
    return;
  }
  return;
}



/* Entry: 108c652b4; end: 108c652db;  */

void FUN_108c652b4(undefined8 param_1)

{
  func_0x000108c6758c();
  func_0x000108c673c4(param_1,&PTR_DAT_110abb280);
  func_0x000108c672ac();
  return;
}



/* Entry: 108c652dc; end: 108c652e7;  */

undefined ** FUN_108c652dc(void)

{
  return &PTR_DAT_110abb280;
}



/* Entry: 108c652e8; end: 108c65333;  */

long FUN_108c652e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000108c672bc();
    func_0x000108c674ec();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 108c65334; end: 108c6537f;  */

long FUN_108c65334(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000108c672bc();
    func_0x000108c674ec();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}


