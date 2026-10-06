/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108703900; end: 108703943;  */

long * FUN_108703900(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108703944; end: 10870394b;  */

void FUN_108703944(void)

{
  return;
}



/* Entry: 10870394c; end: 108703973;  */

void FUN_10870394c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108705228();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a680c0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108703974; end: 108703997;  */

void FUN_108703974(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a680c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108703998; end: 108703a6b;  */

undefined1 FUN_108703998(long param_1,long param_2,long *param_3,byte *param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = 1;
  if (((*param_4 & 1) == 0) && (*(long *)(param_2 + 0x10) < 0x50)) {
    lVar6 = *(long *)(param_1 + 8);
    lVar5 = *param_3;
    lVar2 = param_3[1];
    if ((*(byte *)(lVar6 + 0xf8) & 1) == 0) {
      do {
        if (lVar5 == lVar2) {
          return 0;
        }
        pcVar1 = (char *)(lVar5 + 0x168);
        lVar5 = lVar5 + 0x378;
        uVar4 = 1;
      } while (*pcVar1 != '\x01');
    }
    else {
      for (; uVar4 = 0, lVar5 != lVar2; lVar5 = lVar5 + 0x378) {
        if (((*(int *)(lVar5 + 0x58) != 0) ||
            (uVar3 = *(ulong *)(lVar5 + 0x20), *(long *)(lVar5 + 0x28) - uVar3 != 0x18)) ||
           (func_0x000107c28078(uVar3,*(long *)(lVar6 + 0x20) + 0x40), (uVar3 & 1) == 0)) {
          uVar3 = lVar5 + 0xa0;
          func_0x000107c28f58(uVar3,*(long *)(lVar6 + 0x20) + 0x40);
          if ((uVar3 & 1) == 0) {
            if ((*(byte *)(lVar5 + 0x168) & 1) != 0) {
              return 1;
            }
            if (((*(byte *)(lVar5 + 0x148) & 1) == 0) && (*(char *)(lVar5 + 0x120) != '\x01')) {
              return 1;
            }
          }
        }
      }
    }
  }
  return uVar4;
}



/* Entry: 108703a6c; end: 108703aa3;  */

long FUN_108703a6c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a68120);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108703aa4; end: 108703aaf;  */

undefined ** FUN_108703aa4(void)

{
  return &PTR_DAT_110a68120;
}



/* Entry: 108703ab0; end: 108703bc7;  */

void FUN_108703ab0(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long *plVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(byte *)(puVar1 + 1) & 1) == 0) && (*(char *)(lVar2 + 0x92) == '\x01')) {
    *puVar1 = 0xb;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  plVar6 = *(long **)(lVar2 + 0x70);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x000108705158();
  uStack_50 = 0;
  uStack_38 = 0x28b;
  uVar3 = 0x5301db;
  if (**(int **)(param_1 + 0x20) != 0) {
    uVar3 = 0x5301dc;
  }
  puVar4 = auStack_58;
  FUN_1087034cc(puVar4,uVar3);
  func_0x000107c278b8(auStack_70,&UNK_10f4afcbc);
  pcVar5 = *(char **)(param_1 + 0x10);
  if (pcVar5[4] == '\x01') {
    FUN_108843ae8();
  }
  else {
    pcVar5 = "Success";
  }
  func_0x000107c28824(puVar4,auStack_70,pcVar5);
  (**(code **)(*plVar6 + 0x78))(plVar6,puVar4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 108703bc8; end: 108703beb;  */

void FUN_108703bc8(void)

{
  return;
}



/* Entry: 108703bec; end: 108703c53;  */

undefined8 * FUN_108703bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  func_0x000107c27afc(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 108703c54; end: 108703cef;  */

void FUN_108703c54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  *puVar1 = FUN_108704580;
  puVar1[1] = FUN_108704744;
  FUN_108703cf0(puVar1 + 4,param_1);
  FUN_108703e74(puVar1 + 2);
  func_0x000108705088();
  puVar1[0xe] = param_2;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  func_0x000107c32dd8(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108703cf0; end: 108703d17;  */

void FUN_108703cf0(long param_1,long param_2)

{
  FUN_108703bec();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 108703d18; end: 108703d5b;  */

void FUN_108703d18(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x000107c32d14();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000107c32dbc();
  return;
}



/* Entry: 108703d5c; end: 108703e73;  */

void FUN_108703d5c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  func_0x000107c32db8();
  *param_1 = FUN_108704508;
  param_1[1] = FUN_10870455c;
  FUN_108703e74(param_1 + 2);
  func_0x000108705088();
  FUN_108703fd8(param_1 + 5);
  func_0x000107c32db0(param_1[5]);
  do {
    func_0x000107c32d14();
  } while (extraout_w10 != 0);
  func_0x000107c32d48();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000107c32d00();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c32dac();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c32d28();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000108705070();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c32d24();
        if ((bool)in_ZR) {
          func_0x000108704f9c();
          func_0x000108704f5c();
          func_0x000108704f3c();
        }
        func_0x000107c32cf8();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_108703474(param_1 + 4);
  func_0x0001087050d4();
  func_0x000100871d68();
  func_0x000108704fdc();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108703e74; end: 108703e9b;  */

void FUN_108703e74(void)

{
  func_0x0001087052f0();
  FUN_108703e9c();
  func_0x000107c32da8();
  return;
}



/* Entry: 108703e9c; end: 108703ef7;  */

void FUN_108703e9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a68158;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c32dbc();
  return;
}



/* Entry: 108703ef8; end: 108703efb;  */

undefined8 * FUN_108703ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68158;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108703690(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108703efc; end: 108703f0f;  */

void FUN_108703efc(void)

{
  FUN_108703f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108703f10; end: 108703f7f;  */

undefined8 * FUN_108703f10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a68158;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108703690(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108703f80; end: 108703fb3;  */

void FUN_108703f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



/* Entry: 108703fb4; end: 108703fd7;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108703fb4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000107c32d90();
  FUN_108704244();
  plVar5 = (long *)*unaff_x19;
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
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
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
  *unaff_x19 = 0;
  return;
}



/* Entry: 108703fd8; end: 108704243;  */

void FUN_108703fd8(long *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 uVar10;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar13 = *param_1;
  plVar6 = param_1;
  func_0x000107c32dc8();
  *plVar6 = (long)FUN_108704478;
  plVar6[1] = (long)FUN_1087044d8;
  FUN_108703e74(plVar6 + 2);
  func_0x000108705088();
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  plVar14 = puVar7 + 1;
  *plVar14 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a681a8;
  puVar15 = puVar7 + 3;
  *puVar15 = &PTR____cxa_pure_virtual_110a68270;
  plVar12 = puVar7 + 4;
  *plVar12 = 0;
  puStack_70 = (undefined8 *)0x0;
  func_0x000107c27f9c(&puStack_70);
  puVar7[5] = 0;
  puStack_70 = (undefined8 *)0x0;
  func_0x000107c27f98(&puStack_70);
  FUN_108703e9c(&puStack_70);
  uStack_88 = puStack_68;
  puStack_90 = puStack_70;
  uStack_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  uStack_80 = 0;
  func_0x000107c27f98(&uStack_80);
  func_0x000107c27f9c(&uStack_78);
  func_0x000107c27fec(&puStack_70);
  func_0x000107c288b0(plVar12,&puStack_90);
  func_0x000107c2887c(puVar7 + 5,(ulong)&puStack_90 | 8);
  func_0x000107c27f98((ulong)&puStack_90 | 8);
  func_0x000107c27f9c(&puStack_90);
  *puVar15 = &PTR_FUN_110a681f8;
  plVar6[4] = (long)puVar15;
  plVar6[5] = (long)puVar7;
  plVar8 = *(long **)(lVar13 + 0x30);
  uVar10 = *(undefined8 *)(lVar13 + 0xb8);
  lVar13 = param_1[2];
  lVar4 = param_1[1];
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar5 = (int)lVar4 == 1;
  puStack_70 = puVar15;
  puStack_68 = puVar7;
  (**(code **)(*plVar8 + 200))(plVar8,uVar10,param_1 + 5,(int)lVar13,uVar5,&puStack_70);
  ppuVar9 = &puStack_70;
  func_0x0001086ff014();
  plVar6[7] = *plVar12;
  do {
    func_0x000107c32d14();
  } while (extraout_w10 != 0);
  plVar6[6] = plVar6[7];
  do {
    func_0x000107c32d14();
  } while (extraout_w10_00 != 0);
  func_0x000107c32d7c(plVar6[6]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(plVar6 + 8) = 0;
    func_0x000107c32d00();
    if (*ppuVar9 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c32dac();
    plVar8 = extraout_x8;
    do {
      if (*plVar8 == 0) {
        func_0x000107c32d28();
        plVar8 = extraout_x8_01;
        uVar3 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x000108705070();
        plVar8 = extraout_x8_00;
        uVar3 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x000107c32d24();
        if ((bool)uVar5) {
          func_0x000108704f9c();
          func_0x000108704f5c();
          func_0x000108704f3c();
        }
        func_0x000107c32cf8();
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  FUN_108703474(plVar6 + 6);
  func_0x0001087050d4();
  func_0x000100871d70();
  func_0x000108705024();
  func_0x0001087050c4();
  func_0x000100871d48();
  func_0x000108704fec();
  return;
}



/* Entry: 108704244; end: 1087042ab;  */

void FUN_108704244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = param_1;
  do {
    func_0x000107c32d2c();
    if ((int)lVar1 != 0) {
      func_0x000108703f50(param_1 + 0x98);
      FUN_108703610(param_1 + 0x98,param_3);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      func_0x000107c32d34();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087042ac; end: 1087042af;  */

void FUN_1087042ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a681a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087042b0; end: 1087042c3;  */

void FUN_1087042b0(void)

{
  FUN_108704440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087042c4; end: 1087042d3;  */

void FUN_1087042c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087042cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 1087042d4; end: 108704373;  */

undefined8 * FUN_1087042d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 auStack_c0 [8];
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_30;
  
  puVar1 = &uStack_70;
  puVar2 = &uStack_70;
  func_0x0001087052dc();
  func_0x000107c28c08(&uStack_70);
  uStack_58 = (undefined1)param_3;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_40 = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_30 = 0;
  uVar4 = SUB84(&uStack_50,0);
  uStack_38 = uStack_58;
  FUN_108704408(param_1 + 0x10);
  FUN_108703690(&uStack_50);
  func_0x000107c27b40();
  func_0x000108705180();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_108703690(&uStack_50);
  func_0x000107c27b40(&uStack_70);
  func_0x000108705068();
  puVar3 = auStack_c0;
  pcStack_78 = FUN_108704374;
  uStack_90 = param_3;
  puStack_88 = (undefined1 *)puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001087052dc();
  uStack_a0 = 1;
  auStack_c0[0] = uVar4;
  FUN_108704408((undefined1 *)((long)puVar2 + 0x10),auStack_c0);
  FUN_108703690(auStack_c0);
  func_0x000108705180();
  if ((bool)in_ZR) {
    return (undefined8 *)puVar3;
  }
  ___stack_chk_fail();
  func_0x0001087052f0();
  FUN_108703690();
  func_0x000108705068();
  func_0x000108705234();
  return (undefined8 *)(undefined1 *)puVar1;
}



/* Entry: 108704374; end: 1087043cf;  */

void FUN_108704374(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 auStack_50 [8];
  undefined4 uStack_30;
  
  auStack_50[0] = param_2;
  func_0x0001087052dc();
  uStack_30 = 1;
  FUN_108704408(param_1 + 0x10,auStack_50);
  FUN_108703690(auStack_50);
  func_0x000108705180();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001087052f0();
  FUN_108703690();
  func_0x000108705068();
  func_0x000108705234();
  return;
}



/* Entry: 1087043d0; end: 108704407;  */

void FUN_1087043d0(void)

{
  func_0x000108705234();
  return;
}



/* Entry: 108704408; end: 108704417;  */

void FUN_108704408(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  do {
    func_0x000107c32d2c();
    if ((int)lVar1 != 0) {
      func_0x000108703f50(lVar2 + 0x98);
      FUN_108703610(lVar2 + 0x98,param_2);
      *(undefined1 *)(lVar2 + 0xc0) = 1;
      func_0x000107c32d34();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108704418; end: 10870443f;  */

undefined8 * FUN_108704418(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000107c27f98(param_1 + 1);
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



/* Entry: 108704440; end: 10870444f;  */

void FUN_108704440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a681a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108704450; end: 108704477;  */

long FUN_108704450(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108704478; end: 1087044d7;  */

void FUN_108704478(long param_1)

{
  FUN_108703474(param_1 + 0x30);
  func_0x0001087050d4();
  func_0x000100871d70();
  func_0x000108705024();
  func_0x0001087050c4();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087044d8; end: 108704507;  */

void FUN_1087044d8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x30);
  func_0x000108705024();
  func_0x0001087050c4();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704508; end: 10870455b;  */

void FUN_108704508(long param_1)

{
  FUN_108703474(param_1 + 0x20);
  func_0x0001087050d4();
  func_0x000100871d68();
  func_0x000108704fdc();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10870455c; end: 10870457f;  */

void FUN_10870455c(void)

{
  func_0x00010870507c();
  func_0x000108704fdc();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108704580; end: 108704743;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108704580(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
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
  long *plVar5;
  long lVar6;
  long alStack_50 [2];
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    plVar5 = (long *)(param_1 + 0x20);
    FUN_108703d5c(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    do {
      func_0x000107c32d14();
    } while (extraout_w10 != 0);
    func_0x000107c32d7c(*(undefined8 *)(param_1 + 0x70));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x80) = 1;
      func_0x000107c32d00();
      if (*plVar5 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x000107c32dac();
      plVar5 = extraout_x8;
      do {
        if (*plVar5 == 0) {
          func_0x000107c32d28();
          plVar5 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x000108705070();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x000107c32d24();
          if ((bool)in_ZR) {
            func_0x000108704f9c();
            func_0x000108704f5c();
            func_0x000108704f3c();
          }
          func_0x000107c32cf8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar2 = param_1 + 0x70;
  FUN_108703474();
  plVar5 = (long *)(param_1 + 0x18);
  lVar6 = *plVar5;
  do {
    alStack_50[1] = 0;
    lVar3 = lVar6 + 0x10;
    func_0x000107c27ff0(lVar3,alStack_50 + 1,1,2);
    if ((int)lVar3 != 0) {
      lVar3 = lVar6 + 0x98;
      func_0x000108703f50(lVar3);
      *(undefined1 *)(lVar6 + 0x98) = 0;
      *(undefined4 *)(lVar6 + 0xb8) = 0xffffffff;
      FUN_108703690(lVar3);
      uVar1 = *(uint *)(lVar2 + 0x20);
      if (uVar1 != 0xffffffff) {
        alStack_50[0] = lVar3;
        (*(code *)(&PTR_FUN_110a68188)[uVar1])(alStack_50,lVar2);
        *(uint *)(lVar6 + 0xb8) = uVar1;
      }
      *(undefined1 *)(lVar6 + 0xc0) = 1;
      *(undefined8 *)(lVar6 + 0x10) = 2;
      func_0x000107c31508(lVar6,plVar5);
      break;
    }
  } while (((uint)alStack_50[1] >> 1 & 1) == 0);
  func_0x000107c27fa0(plVar5,0);
  func_0x00010870520c();
  func_0x0001087051b8();
  func_0x000100871d48();
  func_0x0001087050cc();
  func_0x000108704fec();
  return;
}



/* Entry: 108704744; end: 10870477b;  */

void FUN_108704744(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x00010870520c();
    func_0x0001087051b8();
  }
  func_0x000100871d48();
  func_0x0001087050cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10870477c; end: 108704bfb;  */

/* WARNING: Removing unreachable block (ram,0x0001087049b8) */

void FUN_10870477c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 extraout_w8;
  uint uVar12;
  uint extraout_w8_00;
  long extraout_x8;
  int *piVar13;
  long extraout_x8_00;
  undefined1 extraout_w9;
  long extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  code *extraout_x9_02;
  long extraout_x9_03;
  long lVar14;
  int *extraout_x9_04;
  int extraout_w10;
  long extraout_x10;
  long lVar15;
  ulong extraout_x10_00;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long lVar20;
  long *plStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plVar16 = param_1 + 0x46;
  plVar17 = param_1 + 0x52;
  plVar1 = param_1 + 0x55;
  plVar9 = param_1;
  func_0x000107c32d00();
  do {
    plVar10 = plVar17;
    FUN_108703474(plVar17);
    FUN_108703610(plVar16,plVar10);
    func_0x000107c27f9c(plVar17);
    func_0x000107c27f9c(plVar1);
    func_0x00010870509c();
    uVar12 = (uint)*(byte *)(param_1[0x5b] + 0x92);
    cVar4 = SBORROW4(uVar12,1);
    cVar5 = (int)(uVar12 - 1) < 0;
    uVar6 = uVar12 == 1;
    if ((bool)uVar6) {
      func_0x0001087050dc();
LAB_108704afc:
      func_0x0001087051f8();
LAB_108704b00:
      func_0x000108705094();
      func_0x000100871d48();
      FUN_108703900(param_1 + 0x4b);
      func_0x000108704fec();
      return;
    }
    if ((int)param_1[0x4a] != 0) {
      if ((int)param_1[0x4a] != 1) {
        func_0x00010563ab98();
LAB_108704b28:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108704b2c);
        (*pcVar3)();
      }
      FUN_108703718(plVar16);
      func_0x0001087052a0();
      FUN_1086fba4c(param_1 + 4);
      plVar17 = *(long **)(param_1[0x5b] + 0x40);
      FUN_108703718(plVar16);
      (**(code **)(*plVar17 + 0x18))(plVar17,param_1 + 4,(int)*plVar16);
      func_0x000108705198();
      func_0x0001087050a4();
      goto LAB_108704afc;
    }
    func_0x000108705278();
    *(long *)(extraout_x9 + 0x10) = extraout_x10 / 0x378 + *(long *)(extraout_x9 + 0x10);
    if ((!(bool)uVar6) && (func_0x000108705168(), cVar5 != cVar4)) {
      lVar15 = param_1[0x5c];
      *(undefined8 *)(lVar15 + 0x18) = extraout_x9_00;
      FUN_1086b9f28(lVar15 + 0x20,extraout_x8 + -0x378);
    }
    plVar10 = (long *)param_1[0x4e];
    *(char *)(param_1 + 4) = (char)param_1[0x49];
    if (plVar10 == (long *)0x0) {
      func_0x000104bfeb48();
      goto LAB_108704b28;
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,param_1[0x5c],plVar16,param_1 + 4);
    uVar8 = SUB81(plVar10,0);
    func_0x000108705264();
    uVar19 = 3;
    if ((bool)uVar6) {
      uVar19 = 1;
    }
    *(undefined1 *)(extraout_x9_01 + 4) = uVar8;
    func_0x000107c295e4(param_1 + 0x1e,uVar19);
    piVar13 = (int *)param_1[0x5c];
    if (*piVar13 == 1) {
      func_0x00010870528c();
      (*extraout_x9_02)(param_1 + 4);
      if (((char)param_1[5] == '\x01') && (func_0x00010870511c(), (extraout_x10_00 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x25) = 1;
      }
      FUN_1086fe8dc(param_1 + 4);
      piVar13 = (int *)param_1[0x5c];
    }
    func_0x0001087052c8(piVar13);
    plVar10 = *(long **)(extraout_x9_03 + 0x40);
    param_1[0x53] = 0;
    *plVar17 = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x5a] = 0;
    func_0x00010870524c();
    (**(code **)(*plVar10 + 0x10))(plVar10,plVar16,plVar17,plVar1,param_1 + 0x58,param_1 + 4);
    func_0x000108705114();
    func_0x00010870510c();
    func_0x000107c27b3c(plVar1);
    func_0x000107c28c60(plVar17);
    func_0x0001087050fc();
    func_0x0001087051f8();
    plVar10 = (long *)param_1[0x5c];
    if (((*plVar10 & 0x100000000) != 0) || ((*(byte *)(param_1[0x5b] + 0x92) & 1) != 0)) {
      plVar16 = param_1 + 0x4f;
      func_0x000107c2825c();
      plStack_90 = plVar16;
      func_0x000107c28288(param_1 + 0x4f);
      if ((*(byte *)(param_1[0x5b] + 0x92) & 1) == 0) {
        plVar16 = *(long **)(param_1[0x5b] + 0x70);
        uStack_78 = 0;
        uStack_70 = 0;
        func_0x000108705158();
        uStack_80 = 0;
        uStack_68 = 0x28a;
        uVar19 = 0x5301db;
        if (*extraout_x9_04 != 0) {
          uVar19 = 0x5301dc;
        }
        puVar11 = auStack_88;
        FUN_1087034cc(puVar11,uVar19);
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar11,&plStack_90);
        func_0x000107c2882c(auStack_88);
      }
      func_0x000108705198();
      goto LAB_108704b00;
    }
    param_1[0x37] = param_1[0x5b];
    lVar15 = *plVar10;
    lVar14 = plVar10[3];
    lVar20 = plVar10[2];
    param_1[0x39] = plVar10[1];
    param_1[0x38] = lVar15;
    param_1[0x3b] = lVar14;
    param_1[0x3a] = lVar20;
    func_0x0001087051ec();
    uVar18 = *(undefined8 *)(param_1[0x5b] + 0x110);
    func_0x0001087051e0();
    func_0x0001087051c0();
    func_0x000108705240();
    FUN_108703c54(plVar1,param_1 + 4,uVar18);
    func_0x0001087050cc();
    plVar10 = param_1 + 0x1e;
    func_0x000108703c2c();
    *plVar17 = *plVar1;
    do {
      func_0x000107c32d14();
    } while (extraout_w10 != 0);
    func_0x000107c32d7c(*plVar17);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 0x2f4) = 0;
      lVar15 = *plVar17;
      lVar20 = *plVar9;
      if (lVar20 == 0) {
        func_0x000107c3a5c0();
        lVar20 = *plVar10;
      }
      plVar2 = (long *)(lVar15 + 0x10);
      do {
        lVar14 = *plVar2;
        if (lVar14 == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar7 = cVar5 == '\0';
          if (bVar7) {
            uVar6 = 1;
            func_0x000108705004();
            if (bVar7) {
              func_0x000108704f9c();
              uVar8 = extraout_w8;
              if ((bool)uVar6) {
                uVar8 = extraout_w9;
              }
              func_0x0001087050ec();
              *(undefined1 *)plVar10 = uVar8;
              func_0x000108704fac(0);
              *(long **)(lVar15 + 0x90) = plVar10;
            }
            func_0x000108704ff4();
            *(long *)(extraout_x8_00 + 0x20) = lVar20;
            func_0x000108704f8c(*(undefined8 *)(lVar15 + 0x90));
            *(undefined8 *)(lVar15 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar14 >> 1 & 1) == 0);
    }
  } while( true );
}



/* Entry: 108704bfc; end: 108704c4f;  */

void FUN_108704bfc(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x290);
  func_0x000107c27f9c(param_1 + 0x2a8);
  func_0x00010870509c();
  func_0x000108705094();
  func_0x000100871d48();
  FUN_108703900(param_1 + 600);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704c50; end: 108704d5f;  */

void FUN_108704c50(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    func_0x000107c28a1c(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0xb0);
    func_0x000100871d68();
    func_0x000108705014();
    func_0x0001087051b0();
    if (*(char *)(lVar3 + 0xa4) == '\x01') {
      func_0x000107c32d98(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x30));
      (*extraout_x8)();
      func_0x000108705148(*(undefined8 *)(param_1 + 0xb0));
      (*extraout_x8_00)();
      func_0x0001087052b4();
      func_0x000108705200();
    }
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0xa0);
    func_0x000107c28a1c();
    lVar3 = *(long *)(param_1 + 0xb0);
    uVar1 = *puVar2;
    *(undefined1 *)(lVar3 + 0x98) = *(undefined1 *)(puVar2 + 1);
    *(undefined4 *)(lVar3 + 0x94) = uVar1;
    func_0x000108705014();
    func_0x0001087050b4();
    func_0x000108705214();
    lVar3 = *(long *)(param_1 + 0xb0);
    if (((*(byte *)(lVar3 + 0xf9) & 1) == 0) && (*(char *)(lVar3 + 0x98) == '\x01')) {
      *(undefined1 *)(lVar3 + 0x98) = 0;
    }
    func_0x0001087050bc();
  }
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704d60; end: 108704de3;  */

void FUN_108704d60(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000108705014();
    func_0x0001087050b4();
    func_0x000108705214();
    func_0x0001087050bc();
  }
  else {
    func_0x000100871d68();
    func_0x000108705014();
    func_0x0001087051b0();
  }
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704de4; end: 108704e6b;  */

void FUN_108704de4(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000100871d68();
  func_0x000108704fdc();
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704e6c; end: 108704e8f;  */

void FUN_108704e6c(void)

{
  func_0x00010870507c();
  func_0x000108704fdc();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108704e90; end: 108704edf;  */

void FUN_108704e90(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000100871d68();
  func_0x000108704fdc();
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108704ee0; end: 108704f3b;  */

void FUN_108704ee0(void)

{
  func_0x00010870507c();
  func_0x000108704fdc();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108704f3c; end: 1087052fb;  */

void FUN_108704f3c(undefined1 *param_1)

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



/* Entry: 1087052fc; end: 10870540f;  */

void FUN_1087052fc(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  undefined1 auStack_3c0 [888];
  char cStack_48;
  undefined1 auStack_44 [4];
  
  func_0x000107c32df4();
  if ((param_3 == 2) && ((*(byte *)(unaff_x20 + 8) & 1) != 0)) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    func_0x000104bf1c14();
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      FUN_108728ffc(auStack_3c0,unaff_x20[2],lVar2);
      if (cStack_48 == '\x01') {
        func_0x000108707668();
        func_0x000107c27b14();
      }
      FUN_108705f40(auStack_3c0);
    }
    lVar2 = *unaff_x19;
    lVar1 = unaff_x19[1];
    if (lVar2 != lVar1) {
      FUN_108705f60(lVar2,lVar1,LZCOUNT((lVar1 - lVar2) / 0x378) << 1 ^ 0x7e,1);
    }
    return;
  }
  FUN_108867224(&stack0xffffffffffffffc8,*unaff_x20,param_2);
  auStack_44[0] = 0;
  (**(code **)(*(long *)unaff_x20[4] + 0xc0))
            ((long *)unaff_x20[4],&stack0xffffffffffffffc8,&stack0xffffffffffffffc4,auStack_44);
  func_0x000107c29108(&stack0xffffffffffffffc8);
  return;
}



/* Entry: 108705410; end: 1087055db;  */

void FUN_108705410(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_7c [4];
  undefined1 uStack_78;
  undefined1 auStack_74 [4];
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_44;
  
  uStack_44 = param_3;
  func_0x000107c32df4();
  puStack_50 = &uStack_44;
  uStack_58 = param_1;
  if ((uStack_44 != 2) || ((unaff_x20[8] & 1) == 0)) {
    uVar3 = *unaff_x20;
    FUN_108867224(&uStack_70);
    uVar4 = uStack_68;
    for (uVar8 = uStack_70; uVar6 = uVar4, uVar8 != uVar4; uVar8 = uVar8 + 0x3d0) {
      func_0x000108707720();
      uVar6 = uVar8;
      if ((int)uVar3 != 0) goto LAB_1087054c4;
    }
    goto LAB_10870552c;
  }
  FUN_1087052fc();
  lVar1 = unaff_x19[1];
  for (lVar5 = *unaff_x19; lVar5 != lVar1; lVar5 = lVar5 + 0x378) {
    uVar2 = uStack_44;
    FUN_108706a80(uStack_44,&uStack_58,lVar5);
    lVar7 = lVar5;
    if (uVar2 != 0) goto LAB_1087054f8;
  }
  goto LAB_108705584;
LAB_1087054c4:
  while (uVar8 = uVar8 + 0x3d0, uVar8 != uVar4) {
    func_0x000108707720();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar6;
      func_0x000107c288f4(uVar6,uVar8);
      uVar6 = uVar6 + 0x3d0;
    }
  }
LAB_10870552c:
  if (uVar6 != uStack_68) {
    FUN_108706bd0(uStack_68,uStack_68,uVar6);
    func_0x000107c29110(&uStack_70);
  }
  auStack_7c[0] = 0;
  uStack_78 = 0;
  (**(code **)(*(long *)unaff_x20[4] + 0xc0))((long *)unaff_x20[4],&uStack_70,auStack_74,auStack_7c)
  ;
  func_0x000107c29108(&uStack_70);
  return;
LAB_1087054f8:
  while (lVar7 = lVar7 + 0x378, lVar7 != lVar1) {
    uVar4 = (ulong)uStack_44;
    FUN_108706a80(uVar4,&uStack_58,lVar7);
    if ((uVar4 & 1) == 0) {
      func_0x0001087076dc(lVar5);
      lVar5 = lVar5 + 0x378;
    }
  }
LAB_108705584:
  func_0x0001087076ac();
  func_0x0001086f7e38();
  return;
}



/* Entry: 1087055dc; end: 10870571f;  */

void FUN_1087055dc(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined1 auStack_fc0 [976];
  long alStack_bf0 [123];
  byte bStack_818;
  long alStack_810 [123];
  byte bStack_438;
  undefined1 auStack_430 [1004];
  uint3 uStack_44;
  undefined1 uStack_41;
  
  _uStack_44 = *param_2;
  func_0x000108707790();
  if ((bool)in_ZR) {
    uStack_44 = (uint3)(ushort)uStack_44;
  }
  FUN_108866da0(auStack_430,*param_1,&uStack_44,1);
  func_0x000107c288b4(alStack_810,auStack_430);
  _bzero(alStack_bf0,0x3e0);
  while ((((bStack_438 & 1) != 0 || ((bStack_818 & 1) != 0)) && (alStack_810[0] != alStack_bf0[0])))
  {
    plVar1 = alStack_810;
    func_0x000107c288b8();
    plVar2 = plVar1;
    FUN_1086a750c();
    if (((ulong)plVar2 & 1) == 0) {
      func_0x000107c291e0(auStack_fc0,plVar1);
      func_0x000108707668();
      FUN_108706d50();
      func_0x0001087075b0();
    }
    func_0x000107c28920(alStack_810);
  }
  func_0x000108707588(alStack_bf0);
  func_0x000108707588(alStack_810);
  func_0x000107c288ec(auStack_430);
  if ((*(char *)(param_1 + 8) == '\x01') && ((*(byte *)((long)param_2 + 2) & 1) != 0)) {
    FUN_108705720(param_1,0,1,param_3);
  }
  return;
}



/* Entry: 108705720; end: 108705957;  */

void FUN_108705720(undefined8 *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x23;
  undefined8 uVar3;
  undefined1 auStack_be0 [976];
  undefined1 auStack_810 [184];
  long lStack_758;
  long lStack_750;
  byte bStack_550;
  int iStack_4f8;
  byte bStack_468;
  long alStack_440 [43];
  byte bStack_2e8;
  long lStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined8 uStack_2c0;
  long lStack_2b8;
  int iStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [17];
  byte bStack_28f;
  long lStack_1d8;
  byte bStack_188;
  undefined1 auStack_180 [8];
  long lStack_178;
  undefined1 auStack_170 [336];
  char cStack_20;
  undefined1 auStack_18 [24];
  
  func_0x0001087077b0();
  FUN_108866300(auStack_180,*param_1,2);
  lStack_2e0 = 0;
  auStack_2d8[0] = 0;
  bStack_188 = 0;
  if (cStack_20 == '\0') {
    lVar2 = 0;
  }
  else {
    func_0x0001087073c4(auStack_2d8,auStack_170);
    func_0x0001087073a0(auStack_170);
    lVar2 = lStack_2e0;
  }
  lStack_2e0 = lStack_178;
  lStack_178 = lVar2;
  _bzero(alStack_440,0x160);
  while ((((bStack_188 & 1) != 0 || ((bStack_2e8 & 1) != 0)) && (lStack_2e0 != alStack_440[0]))) {
    if ((bStack_188 & 1) == 0) {
      uVar3 = *(undefined8 *)(lStack_2e0 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_18,lStack_2e0 + 0x58);
      func_0x000107c27f54(auStack_810,&UNK_10f4b2130,auStack_18);
      func_0x00010bcc7444(uVar3,0x65,auStack_810);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_810);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_18);
    }
    if (((param_2 & 1) != 0) || (lStack_2a8 != 0)) {
      uVar1 = 1;
      if (iStack_2b0 != 1) {
        uVar1 = 2;
      }
      unaff_x23 = uVar1 | unaff_x23 & 0xffffffff00000000;
      FUN_1088460dc(auStack_810,auStack_2d8,uStack_2c0,unaff_x23,lStack_2b8 * 1000,auStack_2a0,0);
      if ((((bStack_550 & 1) == 0) && ((bStack_468 & 1) == 0)) &&
         (((param_3 == 0 || ((iStack_4f8 != 2 || (lStack_758 != lStack_750)))) ||
          (((bStack_28f >> 4 & 1) != 0 &&
           (((*(byte *)(lStack_1d8 + 0x10) & 1) != 0 &&
            (*(char *)(*(long *)(lStack_1d8 + 0x28) + 0x10) == '\x01')))))))) {
        func_0x000107c28918(auStack_be0,auStack_810);
        func_0x000108707668();
        FUN_108706d50();
        func_0x0001087075b0();
      }
      func_0x000108707694();
    }
    FUN_108707414(&lStack_2e0);
  }
  func_0x000108707764();
  FUN_108706d08(auStack_2d8);
  FUN_1087072f0(auStack_180);
  return;
}



/* Entry: 108705958; end: 108705aef;  */

undefined *** FUN_108705958(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined **ppuVar2;
  long *plVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x19;
  undefined ***pppuVar7;
  long *unaff_x22;
  byte abStack_1460 [32];
  undefined1 auStack_1440 [32];
  undefined1 auStack_1420 [464];
  byte bStack_1250;
  long alStack_1248 [19];
  byte bStack_11b0;
  long alStack_11a8 [19];
  byte bStack_1110;
  undefined1 auStack_1108 [96];
  undefined **appuStack_10a8 [9];
  int iStack_1020;
  uint3 uStack_101c;
  undefined1 uStack_1019;
  undefined **ppuStack_1018;
  undefined1 *puStack_1010;
  undefined ***pppuStack_1000;
  undefined4 *puStack_ff8;
  undefined8 uStack_ff0;
  undefined ***pppuStack_fe8;
  undefined1 *puStack_fe0;
  code *pcStack_fd8;
  undefined8 auStack_fc8 [122];
  long alStack_bf8 [123];
  byte bStack_820;
  long alStack_818 [123];
  byte bStack_440;
  uint3 uStack_434;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  undefined ***pppuStack_418;
  undefined8 uStack_48;
  
  puVar5 = param_2;
  func_0x00010870779c();
  _uStack_434 = *puVar5;
  uStack_48 = extraout_x8;
  func_0x000108707790();
  if ((bool)in_ZR) {
    uStack_434 = (uint3)(ushort)uStack_434;
  }
  FUN_10886b4f8(&ppuStack_430,*unaff_x19,&uStack_434);
  func_0x000107c288b4(alStack_818,&ppuStack_430);
  puVar6 = (undefined8 *)0x3e0;
  _bzero(alStack_bf8);
  while ((((bStack_440 & 1) != 0 || ((bStack_820 & 1) != 0)) && (alStack_818[0] != alStack_bf8[0])))
  {
    unaff_x22 = alStack_818;
    func_0x000107c288b8();
    plVar3 = unaff_x22;
    puVar6 = unaff_x19;
    FUN_1086a750c();
    if (((ulong)plVar3 & 1) == 0) {
      func_0x000107c291e0(auStack_fc8,unaff_x22);
      puVar6 = auStack_fc8;
      FUN_108706d50(param_3);
      func_0x000107c288d0(auStack_fc8);
    }
    func_0x000107c28920(alStack_818);
  }
  func_0x000108707588(alStack_bf8);
  func_0x000108707588(alStack_818);
  pppuVar7 = &ppuStack_430;
  func_0x000107c288ec();
  uVar1 = *(char *)(unaff_x19 + 8) == '\x01';
  if (((bool)uVar1) && ((*(byte *)((long)param_2 + 2) & 1) != 0)) {
    ppuStack_430 = &PTR_FUN_110a682f0;
    pppuStack_418 = &ppuStack_430;
    puVar6 = (undefined8 *)0x1;
    uStack_428 = param_3;
    FUN_108705720();
    pppuVar7 = &ppuStack_430;
    FUN_108706e6c();
  }
  func_0x00010870777c(uStack_48);
  if ((bool)uVar1) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  FUN_108706e6c(&ppuStack_430);
  func_0x00010870755c();
  pcStack_fd8 = FUN_108705af0;
  uStack_ff0 = param_3;
  pppuStack_fe8 = pppuVar7;
  puStack_fe0 = &stack0xfffffffffffffff0;
  func_0x00010870779c();
  puStack_ff8 = (undefined4 *)extraout_x8_00;
  func_0x000108707790();
  if (((bool)uVar1) && ((*(byte *)((long)puVar6 + 2) & 1) != 0)) {
    iStack_1020 = 0;
    uStack_1019 = (undefined1)((uint)*(undefined4 *)puVar6 >> 0x18);
    uStack_101c = (uint3)(ushort)*(undefined4 *)puVar6;
    ppuStack_1018 = &PTR_FUN_110a68380;
    pppuStack_1000 = &ppuStack_1018;
    puStack_1010 = (undefined1 *)&iStack_1020;
    FUN_108705720(pppuVar7,1,0,&ppuStack_1018);
    FUN_108706e6c(&ppuStack_1018);
    ppuVar2 = *pppuVar7;
    iVar4 = (int)&uStack_101c;
    FUN_10886b5b0();
    if ((undefined4 *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_ff8) {
      return (undefined ***)(ulong)(uint)(iStack_1020 + (int)ppuVar2);
    }
  }
  else {
    ppuVar2 = *pppuVar7;
    func_0x00010870777c(puStack_ff8);
    iVar4 = (int)puVar6;
    if ((bool)uVar1) {
      pppuStack_1000 = (undefined ***)unaff_x22;
      puStack_ff8 = param_2;
      func_0x000107c341d8();
      if ((bool)uVar1) {
        func_0x000107c34178();
        func_0x000107c3437c();
        if (!(bool)uVar1) {
          func_0x000107c31338();
          func_0x00010887b508();
          func_0x00010887b644();
          func_0x00010887b760();
          func_0x000107c316c4();
          func_0x00010887b460();
          func_0x00010887b794();
          func_0x00010887be30();
          func_0x000107c34368();
          func_0x000107c34364();
        }
      }
      func_0x000107c344f4();
      FUN_10886b658();
      pppuVar7 = (undefined ***)&stack0xffffffffffffefa0;
      FUN_108867810(pppuVar7);
      func_0x00010887c068();
      return pppuVar7;
    }
  }
  ___stack_chk_fail();
  func_0x00010870755c();
  if ((iVar4 == 2) && (((ulong)ppuVar2[8] & 1) != 0)) {
    puVar6 = (undefined8 *)ppuVar2[2];
    FUN_108866230(auStack_1108,*puVar6,2);
    FUN_108707144(alStack_11a8,auStack_1108);
    _bzero(alStack_1248,0xa0);
    pppuVar7 = (undefined ***)0x0;
    while ((((bStack_1110 & 1) != 0 || ((bStack_11b0 & 1) != 0)) &&
           (alStack_11a8[0] != alStack_1248[0]))) {
      plVar3 = alStack_11a8;
      FUN_10870715c(plVar3);
      func_0x00010872a2c8(auStack_1420,*puVar6,plVar3);
      if ((bStack_1250 & 1) != 0) {
        FUN_108729870(abStack_1460,puVar6,plVar3,auStack_1420);
        pppuVar7 = (undefined ***)(ulong)((int)pppuVar7 + (abStack_1460[0] ^ 1));
        func_0x000107c279dc(auStack_1440);
      }
      func_0x000107c288c8(auStack_1420);
      FUN_10872a10c(alStack_11a8);
    }
    func_0x00010872a270(alStack_1248);
    func_0x00010872a270(alStack_11a8);
    FUN_108706f8c(auStack_1108);
    return pppuVar7;
  }
  uVar1 = iVar4 - 1U == 3;
  if (2 < iVar4 - 1U) {
    iVar4 = 0;
  }
  func_0x000107c342e8(*ppuVar2,iVar4);
  if ((bool)uVar1) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)uVar1) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b6f0();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b978();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  func_0x000107c34358();
  pppuVar7 = appuStack_10a8;
  FUN_108867810(pppuVar7);
  func_0x000107c28410(appuStack_10a8);
  return pppuVar7;
}



/* Entry: 108705af0; end: 108705bcf;  */

undefined1 * FUN_108705af0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long extraout_x8;
  long *unaff_x19;
  undefined1 *puVar5;
  byte abStack_490 [32];
  undefined1 auStack_470 [32];
  undefined1 auStack_450 [464];
  byte bStack_280;
  long alStack_278 [19];
  byte bStack_1e0;
  long alStack_1d8 [19];
  byte bStack_140;
  undefined1 auStack_138 [96];
  undefined1 auStack_d8 [72];
  int iStack_50;
  uint3 uStack_4c;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  
  func_0x00010870779c();
  func_0x000108707790();
  if (((bool)in_ZR) && ((*(byte *)((long)param_2 + 2) & 1) != 0)) {
    iStack_50 = 0;
    uStack_49 = (undefined1)((uint)*param_2 >> 0x18);
    uStack_4c = (uint3)(ushort)*param_2;
    ppuStack_48 = &PTR_FUN_110a68380;
    puStack_40 = (undefined1 *)&iStack_50;
    FUN_108705720();
    FUN_108706e6c(&ppuStack_48);
    puVar2 = (undefined8 *)*unaff_x19;
    iVar4 = (int)&uStack_4c;
    FUN_10886b5b0();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
      return (undefined1 *)(ulong)(uint)(iStack_50 + (int)puVar2);
    }
  }
  else {
    puVar2 = (undefined8 *)*unaff_x19;
    func_0x00010870777c(extraout_x8);
    iVar4 = (int)param_2;
    if ((bool)in_ZR) {
      func_0x000107c341d8();
      if ((bool)in_ZR) {
        func_0x000107c34178();
        func_0x000107c3437c();
        if (!(bool)in_ZR) {
          func_0x000107c31338();
          func_0x00010887b508();
          func_0x00010887b644();
          func_0x00010887b760();
          func_0x000107c316c4();
          func_0x00010887b460();
          func_0x00010887b794();
          func_0x00010887be30();
          func_0x000107c34368();
          func_0x000107c34364();
        }
      }
      func_0x000107c344f4();
      FUN_10886b658();
      puVar5 = &stack0xffffffffffffff70;
      FUN_108867810(puVar5);
      func_0x00010887c068();
      return puVar5;
    }
  }
  ___stack_chk_fail();
  func_0x00010870755c();
  if ((iVar4 == 2) && ((*(byte *)(puVar2 + 8) & 1) != 0)) {
    puVar2 = (undefined8 *)puVar2[2];
    FUN_108866230(auStack_138,*puVar2,2);
    FUN_108707144(alStack_1d8,auStack_138);
    _bzero(alStack_278,0xa0);
    puVar5 = (undefined1 *)0x0;
    while ((((bStack_140 & 1) != 0 || ((bStack_1e0 & 1) != 0)) && (alStack_1d8[0] != alStack_278[0])
           )) {
      plVar3 = alStack_1d8;
      FUN_10870715c(plVar3);
      func_0x00010872a2c8(auStack_450,*puVar2,plVar3);
      if ((bStack_280 & 1) != 0) {
        FUN_108729870(abStack_490,puVar2,plVar3,auStack_450);
        puVar5 = (undefined1 *)(ulong)((int)puVar5 + (abStack_490[0] ^ 1));
        func_0x000107c279dc(auStack_470);
      }
      func_0x000107c288c8(auStack_450);
      FUN_10872a10c(alStack_1d8);
    }
    func_0x00010872a270(alStack_278);
    func_0x00010872a270(alStack_1d8);
    FUN_108706f8c(auStack_138);
    return puVar5;
  }
  uVar1 = iVar4 - 1U == 3;
  if (2 < iVar4 - 1U) {
    iVar4 = 0;
  }
  func_0x000107c342e8(*puVar2,iVar4);
  if ((bool)uVar1) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)uVar1) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b6f0();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b978();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  func_0x000107c34358();
  puVar5 = auStack_d8;
  FUN_108867810(puVar5);
  func_0x000107c28410(auStack_d8);
  return puVar5;
}



/* Entry: 108705bd0; end: 108705bfb;  */

undefined1 * FUN_108705bd0(undefined8 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  byte abStack_440 [32];
  undefined1 auStack_420 [32];
  undefined1 auStack_400 [464];
  byte bStack_230;
  long alStack_228 [19];
  byte bStack_190;
  long alStack_188 [19];
  byte bStack_f0;
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [72];
  
  if ((param_2 == 2) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    puVar2 = (undefined8 *)param_1[2];
    FUN_108866230(auStack_e8,*puVar2,2);
    FUN_108707144(alStack_188,auStack_e8);
    _bzero(alStack_228,0xa0);
    puVar4 = (undefined1 *)0x0;
    while ((((bStack_f0 & 1) != 0 || ((bStack_190 & 1) != 0)) && (alStack_188[0] != alStack_228[0]))
          ) {
      plVar3 = alStack_188;
      FUN_10870715c(plVar3);
      func_0x00010872a2c8(auStack_400,*puVar2,plVar3);
      if ((bStack_230 & 1) != 0) {
        FUN_108729870(abStack_440,puVar2,plVar3,auStack_400);
        puVar4 = (undefined1 *)(ulong)((int)puVar4 + (abStack_440[0] ^ 1));
        func_0x000107c279dc(auStack_420);
      }
      func_0x000107c288c8(auStack_400);
      FUN_10872a10c(alStack_188);
    }
    func_0x00010872a270(alStack_228);
    func_0x00010872a270(alStack_188);
    FUN_108706f8c(auStack_e8);
    return puVar4;
  }
  uVar1 = param_2 - 1U == 3;
  if (2 < param_2 - 1U) {
    param_2 = 0;
  }
  func_0x000107c342e8(*param_1,param_2);
  if ((bool)uVar1) {
    func_0x000107c34190();
    func_0x000107c3437c();
    if (!(bool)uVar1) {
      func_0x000107c31338();
      func_0x00010887b5cc();
      func_0x00010887b6f0();
      func_0x00010887b788();
      func_0x000107c316c4();
      func_0x00010887b4a4();
      func_0x00010887b978();
      func_0x00010887be60();
      func_0x000107c34388();
      func_0x00010887be50();
    }
  }
  func_0x000107c34358();
  puVar4 = auStack_88;
  FUN_108867810(puVar4);
  func_0x000107c28410(auStack_88);
  return puVar4;
}



/* Entry: 108705bfc; end: 108705ca3;  */

undefined1  [16] FUN_108705bfc(long param_1)

{
  long lVar1;
  long unaff_x19;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_378;
  undefined1 uStack_38;
  
  func_0x00010870757c();
  lVar1 = unaff_x19 + 0x18;
  FUN_10872a318(lVar1,*(undefined1 *)(param_1 + 0x40));
  if ((int)lVar1 == 0) {
    func_0x00010870761c();
    FUN_1088660e8();
    func_0x0001087075f8();
    func_0x000108707634();
    func_0x00010870769c();
    uStack_3e8 = uStack_3f0;
    uStack_378 = uStack_38;
  }
  else {
    func_0x00010870761c();
    FUN_10886618c();
    func_0x0001087075ec();
    func_0x00010870762c();
    func_0x0001087076a4();
  }
  uVar2 = uStack_3e8 & 0xffffffffffffff00;
  if (uStack_378 == '\0') {
    uVar2 = 0;
    uStack_3e8 = 0;
  }
  auVar3._0_8_ = uStack_3e8 & 0xff | uVar2;
  auVar3[8] = uStack_378;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 108705ca4; end: 108705d33;  */

void FUN_108705ca4(undefined1 *param_1)

{
  long *plVar1;
  long lStack_d0;
  undefined1 auStack_c8 [144];
  char cStack_38;
  
  FUN_108707144(&lStack_d0);
  func_0x000108707684();
  if (cStack_38 == '\x01') {
    func_0x00010870767c();
    if (lStack_d0 != 0) {
      plVar1 = &lStack_d0;
      FUN_10870715c(plVar1);
      FUN_1087072d4(param_1,plVar1);
      goto LAB_108705d08;
    }
  }
  else {
    func_0x00010870767c();
  }
  *param_1 = 0;
  param_1[0x90] = 0;
LAB_108705d08:
  FUN_108706c90(auStack_c8);
  return;
}



/* Entry: 108705d34; end: 108705e5f;  */

void FUN_108705d34(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined1 auStack_7e0 [976];
  undefined1 uStack_410;
  undefined1 auStack_408 [24];
  int iStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_388;
  char cStack_378;
  int iStack_f0;
  char cStack_38;
  
  func_0x000107c32df4();
  FUN_1088660e8(&uStack_7f0,*param_1);
  func_0x0001087075f8();
  func_0x000108707634();
  if ((cStack_38 == '\x01') && ((iStack_f0 != 2 || ((*(byte *)(unaff_x20 + 8) & 1) == 0)))) {
    uStack_7e8 = uStack_3e8;
    FUN_1086d6d80(auStack_7e0,auStack_408);
    func_0x000108707668();
    func_0x000108706cd8();
    func_0x000107c288cc(auStack_7e0);
    func_0x00010870769c();
  }
  else {
    func_0x00010870769c();
    if (*(char *)(unaff_x20 + 8) == '\x01') {
      FUN_10886618c(&uStack_7f0,*unaff_x20,param_2);
      func_0x0001087075ec();
      func_0x00010870762c();
      if ((cStack_378 == '\x01' && iStack_3f0 == 2) && (*(char *)(unaff_x20 + 8) == '\x01')) {
        uStack_7f0 = uStack_3e8;
        uStack_7e8 = uStack_388;
        auStack_7e0[0] = 0;
        uStack_410 = 0;
        func_0x000108707668();
        func_0x000108706cd8();
        func_0x000107c288cc(auStack_7e0);
        func_0x0001087076a4();
        return;
      }
      func_0x0001087076a4();
    }
    *unaff_x19 = 0;
    unaff_x19[1000] = 0;
  }
  return;
}



/* Entry: 108705e60; end: 108705f3f;  */

ulong FUN_108705e60(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  byte bVar3;
  int iStack_400;
  char cStack_388;
  uint uStack_100;
  byte bStack_48;
  
  func_0x00010870757c();
  func_0x000108707790();
  if ((bool)in_ZR) {
    func_0x00010870761c();
    FUN_10886618c();
    func_0x0001087075ec();
    func_0x00010870762c();
    if (cStack_388 == '\x01' && iStack_400 == 2) {
      uVar2 = 2;
      if (*(byte *)(unaff_x20 + 0x40) == 0) {
        uVar2 = 0;
      }
      bVar3 = *(byte *)(unaff_x20 + 0x40) ^ 1;
    }
    else {
      uVar2 = 0;
      bVar3 = 1;
    }
    func_0x0001087076a4();
    if (bVar3 == 0) {
      uVar1 = 0x100000000;
      goto LAB_108705f0c;
    }
  }
  func_0x00010870761c();
  FUN_1088660e8();
  func_0x0001087075f8();
  func_0x000108707634();
  uVar2 = (ulong)uStack_100;
  if ((bStack_48 & uStack_100 - 1 < 3) == 0) {
    uVar2 = 0;
  }
  func_0x00010870769c();
  uVar1 = (ulong)bStack_48 << 0x20;
LAB_108705f0c:
  return uVar2 | uVar1;
}



/* Entry: 108705f40; end: 108705f5f;  */

void FUN_108705f40(long param_1)

{
  if (*(char *)(param_1 + 0x378) == '\x01') {
    func_0x000107c27b1c();
  }
  return;
}



/* Entry: 108705f60; end: 1087063c3;  */

void FUN_108705f60(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_380 [896];
  
  func_0x0001087077b0();
  func_0x00010870757c();
  do {
    lVar4 = unaff_x19 - 0x378;
    uVar3 = unaff_x20;
LAB_108705f9c:
    unaff_x20 = uVar3;
    uVar3 = unaff_x19 - unaff_x20;
    switch((long)uVar3 / 0x378) {
    case 0:
    case 1:
      goto FUN_108707544;
    case 2:
      func_0x000108707660();
      if ((int)lVar4 == 0) {
        return;
      }
      func_0x000108707744(unaff_x20);
      return;
    case 3:
      func_0x000108707718(unaff_x20,unaff_x20 + 0x378);
      return;
    case 4:
      func_0x000108706480(unaff_x20,unaff_x20 + 0x378,unaff_x20 + 0x6f0,lVar4);
      return;
    case 5:
      FUN_1087064e0(unaff_x20,unaff_x20 + 0x378,unaff_x20 + 0x6f0,unaff_x20 + 0xa68,lVar4);
      goto FUN_108707544;
    }
    if ((long)uVar3 < 0x5340) {
      if ((param_4 & 1) == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        while (uVar3 = unaff_x20, unaff_x20 = uVar3 + 0x378, unaff_x20 != unaff_x19) {
          uVar8 = unaff_x20;
          func_0x0001087075b8();
          if ((int)uVar8 != 0) {
            func_0x000108707610();
            do {
              uVar1 = uVar3;
              FUN_1086f95b8(uVar1 + 0x378,uVar1);
              uVar8 = 0;
              func_0x0001087075b8();
              uVar3 = uVar1 - 0x378;
            } while ((uVar8 & 1) != 0);
            FUN_1086f95b8(uVar1,auStack_380);
            func_0x000108707648();
          }
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar4 = 0;
      uVar3 = unaff_x20;
      break;
    }
    if (param_3 == 0) {
      func_0x000108707590();
      FUN_108706578();
      return;
    }
    lVar5 = unaff_x20 + ((ulong)((long)uVar3 / 0x378) >> 1) * 0x378;
    if (uVar3 < 0x1bc01) {
      func_0x000108707718(lVar5,unaff_x20);
    }
    else {
      func_0x000108707718(unaff_x20,lVar5);
      FUN_1087063ec(unaff_x20 + 0x378,lVar5 + -0x378,unaff_x19 - 0x6f0);
      FUN_1087063ec(unaff_x20 + 0x6f0,lVar5 + 0x378,unaff_x19 - 0xa68);
      FUN_1087063ec(lVar5 + -0x378,lVar5,lVar5 + 0x378);
      FUN_108706914(unaff_x20,lVar5);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      uVar3 = unaff_x20 - 0x378;
      func_0x000108707660();
      if ((uVar3 & 1) == 0) {
        func_0x000108707610();
        puVar2 = auStack_380;
        func_0x0001087075b8();
        uVar3 = unaff_x20;
        if (((ulong)puVar2 & 1) == 0) {
          do {
            uVar3 = uVar3 + 0x378;
            if (unaff_x19 <= uVar3) break;
            func_0x000108707604();
          } while ((int)puVar2 == 0);
        }
        else {
          do {
            uVar3 = uVar3 + 0x378;
            func_0x000108707604();
          } while (((ulong)puVar2 & 1) == 0);
        }
        uVar8 = unaff_x19;
        if (uVar3 < unaff_x19) {
          do {
            uVar8 = uVar8 - 0x378;
            func_0x0001087076d0();
          } while (((ulong)puVar2 & 1) != 0);
        }
        while (uVar3 < uVar8) {
          uVar1 = uVar3;
          FUN_108706914(uVar3,uVar8);
          do {
            uVar3 = uVar3 + 0x378;
            func_0x000108707604();
          } while ((int)uVar1 == 0);
          do {
            uVar8 = uVar8 - 0x378;
            func_0x0001087076d0();
          } while ((uVar1 & 1) != 0);
        }
        uVar8 = uVar3 - 0x378;
        if (unaff_x20 != uVar8) {
          FUN_1086f95b8(unaff_x20,uVar8);
        }
        FUN_1086f95b8(uVar8,auStack_380);
        func_0x000108707648();
        param_4 = 0;
        goto LAB_108705f9c;
      }
    }
    func_0x000108707610();
    lVar5 = 0;
    do {
      uVar8 = unaff_x20 + lVar5 + 0x378;
      FUN_1087063c4(uVar8,auStack_380);
      lVar5 = lVar5 + 0x378;
    } while ((uVar8 & 1) != 0);
    uVar1 = unaff_x20 + lVar5;
    uVar6 = unaff_x19;
    uVar3 = uVar1;
    if (lVar5 == 0x378) {
      do {
        uVar7 = uVar6;
        if (uVar6 <= uVar1) break;
        uVar6 = uVar6 - 0x378;
        func_0x0001087076b8();
        uVar7 = uVar6;
      } while ((uVar8 & 1) == 0);
    }
    else {
      do {
        uVar6 = uVar6 - 0x378;
        func_0x0001087076b8();
        uVar7 = uVar6;
      } while ((int)uVar8 == 0);
    }
    while (uVar3 < uVar6) {
      FUN_108706914(uVar3,uVar6);
      do {
        uVar3 = uVar3 + 0x378;
        uVar8 = uVar3;
        FUN_1087063c4(uVar3,auStack_380);
      } while ((uVar8 & 1) != 0);
      do {
        uVar6 = uVar6 - 0x378;
        uVar8 = uVar6;
        FUN_1087063c4(uVar6,auStack_380);
      } while ((uVar8 & 1) == 0);
    }
    uVar8 = uVar3 - 0x378;
    if (unaff_x20 != uVar8) {
      FUN_1086f95b8(unaff_x20,uVar8);
    }
    FUN_1086f95b8(uVar8,auStack_380);
    func_0x000108707648();
    if (uVar1 < uVar7) goto LAB_10870613c;
    uVar1 = unaff_x20;
    FUN_108706778(unaff_x20,uVar8);
    uVar6 = uVar3;
    FUN_108706778(uVar3,unaff_x19);
    if ((int)uVar6 == 0) goto code_r0x000108706138;
    unaff_x19 = uVar8;
    if ((uVar1 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1087062a8:
  uVar3 = uVar3 + 0x378;
  if (uVar3 == unaff_x19) {
FUN_108707544:
    return;
  }
  uVar8 = uVar3;
  FUN_1087063c4();
  if ((int)uVar8 != 0) {
    func_0x000107c27af4(auStack_380,uVar3);
    lVar5 = lVar4;
    do {
      func_0x0001087076dc(unaff_x20 + lVar5 + 0x378);
      uVar8 = unaff_x20;
      if (lVar5 == 0) goto LAB_108706304;
      puVar2 = auStack_380;
      FUN_1087063c4(puVar2,unaff_x20 + lVar5 + -0x378);
      lVar5 = lVar5 + -0x378;
    } while (((ulong)puVar2 & 1) != 0);
    uVar8 = unaff_x20 + lVar5 + 0x378;
LAB_108706304:
    FUN_1086f95b8(uVar8,auStack_380);
    func_0x000108707648();
  }
  lVar4 = lVar4 + 0x378;
  goto LAB_1087062a8;
code_r0x000108706138:
  if ((uVar1 & 1) == 0) {
LAB_10870613c:
    FUN_108705f60(unaff_x20,uVar8,param_3,(uint)param_4 & 1);
    param_4 = 0;
  }
  goto LAB_108705f9c;
}



/* Entry: 1087063c4; end: 1087063eb;  */

undefined8 FUN_1087063c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if ((long)param_2[3] < (long)param_1[3]) {
    return 1;
  }
  if (param_1[3] == param_2[3]) {
    uVar1 = *param_1;
    func_0x000107c289b8(uVar1,param_1[1],*param_2,param_2[1],&uStack_11,&uStack_12,&uStack_12);
    return uVar1;
  }
  return 0;
}



/* Entry: 1087063ec; end: 1087064df;  */

void FUN_1087063ec(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  func_0x0001087075b8();
  iVar1 = (int)uVar2;
  func_0x000108707590();
  FUN_1087063c4();
  if ((uVar2 & 1) != 0) {
    if (iVar1 == 0) {
      FUN_108706914(param_1,param_2);
      iVar1 = (int)param_1;
      func_0x000108707590();
      FUN_1087063c4();
      param_1 = param_2;
      if (iVar1 == 0) {
        return;
      }
    }
LAB_108706470:
    func_0x00010870757c(param_1,param_3);
    func_0x000108707738();
    func_0x000108707590();
    FUN_1086f95b8();
    func_0x00010870772c();
    func_0x0001087075a8();
    return;
  }
  if (iVar1 != 0) {
    func_0x0001087076ac();
    FUN_108706914();
    uVar2 = param_2;
    func_0x0001087075b8();
    param_3 = param_2;
    if ((int)uVar2 != 0) goto LAB_108706470;
  }
  return;
}



/* Entry: 1087064e0; end: 108706577;  */

void FUN_1087064e0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  int unaff_w19;
  
  func_0x00010870757c();
  func_0x000108706480();
  uVar2 = in_x4;
  func_0x000108707650();
  if ((int)uVar2 != 0) {
    FUN_108706914(in_x3,in_x4);
    func_0x0001087075b8();
    iVar1 = (int)in_x3;
    if (iVar1 != 0) {
      func_0x0001087076f0();
      func_0x0001087076e4();
      if (iVar1 != 0) {
        func_0x000108707744();
        func_0x000108707660();
        if (unaff_w19 != 0) {
          func_0x000108707590();
          func_0x00010870757c();
          func_0x000108707738();
          func_0x000108707590();
          FUN_1086f95b8();
          func_0x00010870772c();
          func_0x0001087075a8();
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 108706578; end: 108706777;  */

void FUN_108706578(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_6f8 [888];
  undefined1 auStack_380 [896];
  
  func_0x0001087077b0();
  if (param_1 != param_2) {
    func_0x00010870757c();
    lVar6 = (long)(param_2 - param_1) / 0x378;
    if (0x378 < (long)(param_2 - param_1)) {
      uVar8 = lVar6 - 2U >> 1;
      do {
        FUN_108706954();
        uVar8 = uVar8 - 1;
        param_2 = unaff_x19;
      } while (-1 < (long)uVar8);
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x378) {
      uVar8 = param_2;
      func_0x000108707660();
      if ((int)uVar8 != 0) {
        FUN_108706914(param_2);
        FUN_108706954();
      }
    }
    for (; 1 < lVar6; lVar6 = lVar6 + -1) {
      func_0x000108707738();
      uVar4 = 0;
      uVar8 = unaff_x20;
      do {
        lVar5 = uVar8 + uVar4 * 0x378;
        uVar9 = lVar5 + 0x378;
        uVar1 = uVar4 << 1 | 1;
        uVar3 = uVar4 * 2 + 2;
        uVar7 = uVar9;
        uVar4 = uVar1;
        if ((long)uVar3 < lVar6) {
          uVar7 = lVar5 + 0x6f0;
          uVar2 = uVar9;
          FUN_1087063c4(uVar9,uVar7);
          uVar4 = uVar3;
          if ((int)uVar2 == 0) {
            uVar7 = uVar9;
            uVar4 = uVar1;
          }
        }
        func_0x0001087076dc(uVar8);
        uVar8 = uVar7;
      } while ((long)uVar4 <= (long)(lVar6 - 2U >> 1));
      unaff_x19 = unaff_x19 - 0x378;
      if (uVar7 == unaff_x19) {
        FUN_1086f95b8(uVar7,auStack_6f8);
      }
      else {
        FUN_1086f95b8(uVar7,unaff_x19);
        func_0x00010870772c();
        uVar8 = (uVar7 - unaff_x20) + 0x378;
        if (0x378 < (long)uVar8) {
          uVar9 = uVar8 / 0x378 - 2 >> 1;
          uVar4 = unaff_x20 + uVar9 * 0x378;
          uVar8 = uVar4;
          func_0x000108707650();
          if ((int)uVar8 != 0) {
            func_0x000107c27af4(auStack_380,uVar7);
            do {
              uVar8 = uVar4;
              FUN_1086f95b8(uVar7,uVar8);
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1 >> 1;
              uVar4 = unaff_x20 + uVar9 * 0x378;
              uVar3 = uVar4;
              FUN_1087063c4(uVar4,auStack_380);
              uVar7 = uVar8;
            } while ((uVar3 & 1) != 0);
            FUN_1086f95b8(uVar8,auStack_380);
            func_0x000107c27b1c(auStack_380);
          }
        }
      }
      func_0x0001087075a8();
    }
  }
  return;
}



/* Entry: 108706778; end: 108706913;  */

bool FUN_108706778(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_3c8 [888];
  
  iVar2 = 1;
  switch((param_2 - param_1) / 0x378) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000108707590();
    FUN_1087063c4();
    if (iVar2 != 0) {
      func_0x0001087076ac();
      FUN_108706914();
    }
    break;
  case 3:
    FUN_1087063ec(param_1,param_1 + 0x378,param_2 + -0x378);
    break;
  case 4:
    func_0x000108706480(param_1,param_1 + 0x378,param_1 + 0x6f0,param_2 + -0x378);
    break;
  case 5:
    FUN_1087064e0(param_1,param_1 + 0x378,param_1 + 0x6f0,param_1 + 0xa68,param_2 + -0x378);
    break;
  default:
    FUN_1087063ec(param_1,param_1 + 0x378,param_1 + 0x6f0);
    lVar7 = 0;
    iVar2 = 0;
    for (lVar5 = param_1 + 0xa68; lVar5 != param_2; lVar5 = lVar5 + 0x378) {
      lVar6 = lVar5;
      func_0x000108707650();
      if ((int)lVar6 != 0) {
        func_0x000107c27af4(auStack_3c8,lVar5);
        lVar6 = lVar7;
        do {
          lVar1 = param_1 + lVar6;
          FUN_1086f95b8(lVar1 + 0xa68,lVar1 + 0x6f0);
          lVar4 = param_1;
          if (lVar6 == -0x6f0) goto LAB_10870689c;
          puVar3 = auStack_3c8;
          FUN_1087063c4(puVar3,lVar1 + 0x378);
          lVar6 = lVar6 + -0x378;
        } while (((ulong)puVar3 & 1) != 0);
        lVar4 = param_1 + lVar6 + 0xa68;
LAB_10870689c:
        FUN_1086f95b8(lVar4,auStack_3c8);
        iVar2 = iVar2 + 1;
        func_0x0001087075a8();
        if (iVar2 == 8) {
          return lVar5 + 0x378 == param_2;
        }
      }
      lVar7 = lVar7 + 0x378;
    }
  }
  return true;
}



/* Entry: 108706914; end: 108706953;  */

void FUN_108706914(void)

{
  func_0x00010870757c();
  func_0x000108707738();
  func_0x000108707590();
  FUN_1086f95b8();
  func_0x00010870772c();
  func_0x0001087075a8();
  return;
}



/* Entry: 108706954; end: 108706a7f;  */

void FUN_108706954(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_378 [888];
  
  func_0x0001087077b0();
  if (1 < param_2) {
    lVar1 = (long)(param_3 - param_1) / 0x378;
    uVar8 = param_2 - 2U >> 1;
    if (lVar1 <= (long)uVar8) {
      uVar4 = lVar1 << 1 | 1;
      uVar5 = param_1 + uVar4 * 0x378;
      uVar2 = lVar1 * 2 + 2;
      uVar7 = uVar5;
      uVar9 = uVar4;
      if ((long)uVar2 < param_2) {
        uVar6 = uVar5;
        FUN_1087063c4(uVar5,uVar5 + 0x378);
        uVar7 = uVar5 + 0x378;
        uVar9 = uVar2;
        if ((int)uVar6 == 0) {
          uVar7 = uVar5;
          uVar9 = uVar4;
        }
      }
      uVar2 = uVar7;
      func_0x000108707650();
      if ((uVar2 & 1) == 0) {
        func_0x000107c27af4(auStack_378,param_3);
        do {
          uVar2 = uVar7;
          FUN_1086f95b8(param_3,uVar2);
          if ((long)uVar8 < (long)uVar9) break;
          uVar5 = uVar9 << 1 | 1;
          uVar6 = param_1 + uVar5 * 0x378;
          uVar4 = uVar9 * 2 + 2;
          uVar7 = uVar6;
          uVar9 = uVar5;
          if ((long)uVar4 < param_2) {
            uVar3 = uVar6;
            func_0x000108707650();
            uVar7 = uVar6 + 0x378;
            uVar9 = uVar4;
            if ((int)uVar3 == 0) {
              uVar7 = uVar6;
              uVar9 = uVar5;
            }
          }
          uVar4 = uVar7;
          FUN_1087063c4(uVar7,auStack_378);
          param_3 = uVar2;
        } while ((int)uVar4 == 0);
        FUN_1086f95b8(uVar2,auStack_378);
        func_0x0001087075a8();
      }
    }
  }
  return;
}



/* Entry: 108706a80; end: 108706abf;  */

ulong FUN_108706a80(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  func_0x000107c294b4(param_3,param_1);
  if (param_3 >> 0x20 != 0) {
    func_0x00010870770c(*param_2);
  }
  return param_3 >> 0x20;
}



/* Entry: 108706ac0; end: 108706bcf;  */

void FUN_108706ac0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x2ca;
  iVar1 = param_2 + 0x41019f;
  if (2 < param_2 - 1U) {
    iVar1 = 0x41019f;
  }
  pppuVar2 = &ppuStack_80;
  func_0x000107c29054(pppuVar2,iVar1);
  func_0x000107c278b8(auStack_98,&UNK_10f4b20e6);
  if (param_3 - 1U < 3) {
    puVar3 = (&PTR_DAT_110a683f0)[param_3 - 1U];
  }
  else {
    puVar3 = &DAT_10f4be0ce;
  }
  func_0x000107c28824(pppuVar2,auStack_98,puVar3);
  func_0x000107c2884c(auStack_58,pppuVar2);
  (**(code **)(*param_1 + 0x50))(param_1,auStack_58);
  func_0x000108707674();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000107c2882c(&ppuStack_80);
  return;
}



/* Entry: 108706bd0; end: 108706bfb;  */

void FUN_108706bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_108706bfc(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 108706bfc; end: 108706c4b;  */

void FUN_108706bfc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x3d0) {
    func_0x000107c288f4(param_4,param_2);
    param_4 = param_4 + 0x3d0;
  }
  func_0x000108707590();
  return;
}



/* Entry: 108706c4c; end: 108706c8f;  */

bool FUN_108706c4c(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != (int)param_1) {
    iVar1 = param_3;
    if (2 < param_3 - 1U) {
      iVar1 = 0;
    }
    func_0x00010870770c(*param_2,param_1,param_2,iVar1);
  }
  return param_3 != (int)param_1;
}



/* Entry: 108706c90; end: 108706caf;  */

void FUN_108706c90(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_108706cb0();
  }
  return;
}



/* Entry: 108706cb0; end: 108706d07;  */

long FUN_108706cb0(long param_1)

{
  long lStack_28;
  
  func_0x000107c279dc(param_1 + 0x48);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108706d08; end: 108706d27;  */

void FUN_108706d08(long param_1)

{
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_108706d28();
  }
  return;
}



/* Entry: 108706d28; end: 108706d4f;  */

long FUN_108706d28(long param_1)

{
  long lStack_28;
  
  func_0x000107c2a3a8(param_1 + 0x38);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108706d50; end: 108706d6f;  */

void FUN_108706d50(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108706d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 108706d70; end: 108706d77;  */

void FUN_108706d70(void)

{
  return;
}



/* Entry: 108706d78; end: 108706d9f;  */

void FUN_108706d78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108707770();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a682f0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108706da0; end: 108706dc3;  */

void FUN_108706da0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a682f0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108706dc4; end: 108706e27;  */

void FUN_108706dc4(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_7c0 [104];
  int iStack_758;
  undefined1 auStack_3f0 [976];
  
  func_0x00010870759c();
  func_0x000107c28918();
  if (iStack_758 == 1) {
    uVar1 = *(undefined8 *)(unaff_x19 + 8);
    func_0x000107c28918(auStack_3f0,auStack_7c0);
    FUN_108706d50(uVar1,auStack_3f0);
    func_0x000108707694();
  }
  func_0x0001087075b0();
  return;
}



/* Entry: 108706e28; end: 108706e5f;  */

long FUN_108706e28(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a68360);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108706e60; end: 108706e6b;  */

undefined ** FUN_108706e60(void)

{
  return &PTR_DAT_110a68360;
}



/* Entry: 108706e6c; end: 108706eaf;  */

long * FUN_108706e6c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108706eb0; end: 108706eb7;  */

void FUN_108706eb0(void)

{
  return;
}



/* Entry: 108706eb8; end: 108706edf;  */

void FUN_108706eb8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000108707770();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a68380;
  param_1[1] = uVar1;
  return;
}



/* Entry: 108706ee0; end: 108706f03;  */

void FUN_108706ee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a68380;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108706f04; end: 108706f7f;  */

void FUN_108706f04(void)

{
  long unaff_x19;
  undefined4 uStack_388;
  
  func_0x00010870759c();
  func_0x000107c28918();
  if (uStack_388 == 1) {
    **(int **)(unaff_x19 + 8) = **(int **)(unaff_x19 + 8) + 1;
  }
  func_0x0001087075b0();
  return;
}



/* Entry: 108706f80; end: 108706f8b;  */

undefined ** FUN_108706f80(void)

{
  return &PTR_DAT_110a683e0;
}



/* Entry: 108706f8c; end: 108706fdf;  */

undefined8 * FUN_108706f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [160];
  
  func_0x000108707684();
  FUN_108706fe0(param_1 + 1,auStack_c0);
  func_0x00010870767c();
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_108706c90(param_1 + 2);
  return param_1;
}



/* Entry: 108706fe0; end: 108707007;  */

undefined8 * FUN_108706fe0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_108707008(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108707008; end: 10870702b;  */

undefined8 FUN_108707008(undefined8 param_1)

{
  FUN_10870702c();
  return param_1;
}



/* Entry: 10870702c; end: 108707053;  */

void FUN_10870702c(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar2 = *(char *)(param_1 + 0x90);
  if (cVar2 != *(char *)(param_2 + 0x90)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x90) == '\x01') {
        FUN_108706cb0();
        *(undefined1 *)(param_1 + 0x90) = 0;
      }
      return;
    }
    FUN_1087070f0();
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x00010870757c();
    func_0x000107c3194c();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x31);
    *(undefined8 *)(unaff_x20 + 0x39) = *(undefined8 *)(unaff_x19 + 0x39);
    *(undefined8 *)(unaff_x20 + 0x31) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    func_0x000107c28908(unaff_x20 + 0x48,unaff_x19 + 0x48);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
    *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x78) = uVar3;
    *(undefined4 *)(unaff_x20 + 0x88) = uVar1;
    return;
  }
  return;
}



/* Entry: 108707054; end: 1087070af;  */

void FUN_108707054(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010870757c();
  func_0x000107c3194c();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x31);
  *(undefined8 *)(unaff_x20 + 0x39) = *(undefined8 *)(unaff_x19 + 0x39);
  *(undefined8 *)(unaff_x20 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  func_0x000107c28908(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  *(undefined4 *)(unaff_x20 + 0x88) = uVar1;
  return;
}



/* Entry: 1087070b0; end: 1087070ef;  */

void FUN_1087070b0(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_108706cb0();
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



/* Entry: 1087070f0; end: 108707143;  */

void FUN_1087070f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_register_00005028;
  undefined8 uVar4;
  
  func_0x00010870757c();
  func_0x0001087075c0();
  uVar1 = *(undefined8 *)(param_4 + 0x31);
  *(undefined8 *)(param_3 + 0x39) = *(undefined8 *)(param_4 + 0x39);
  *(undefined8 *)(param_3 + 0x31) = uVar1;
  *(undefined8 *)(param_3 + 0x30) = in_register_00005028;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  *(undefined8 *)(param_3 + 0x20) = in_register_00005008;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  func_0x000107c27afc(param_3 + 0x48,param_4 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined4 *)(unaff_x20 + 0x88) = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  return;
}



/* Entry: 108707144; end: 10870715b;  */

void FUN_108707144(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_2 = param_2 + 8;
  func_0x00010870757c(param_1,param_2);
  FUN_108707220(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10870715c; end: 1087071eb;  */

long * FUN_10870715c(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4b2130,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    func_0x000108707704();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 1087071ec; end: 10870721f;  */

void FUN_1087071ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010870757c();
  FUN_108707220(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}


