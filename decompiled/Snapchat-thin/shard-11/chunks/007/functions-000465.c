/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108854bd0; end: 108854be3;  */

void FUN_108854bd0(void)

{
  FUN_108826178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108854be4; end: 108854c53;  */

void FUN_108854be4(void)

{
  func_0x00010885bc7c();
  func_0x00010885c360();
  func_0x00010885c758(FUN_108858fb4);
  FUN_108854e48();
  func_0x00010885c2cc();
  func_0x00010885b948();
  func_0x00010885bbd8();
  func_0x00010885b93c();
  return;
}



/* Entry: 108854c54; end: 108854e47;  */

void FUN_108854c54(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *in_stack_00000010;
  
  func_0x00010885c9a8();
  func_0x00010885be5c();
  func_0x00010885c148();
  *param_1 = (long)FUN_108858e54;
  param_1[1] = (long)FUN_108858f94;
  param_1[8] = (long)unaff_x20;
  plVar3 = param_1;
  func_0x00010885be08();
  func_0x00010885b948();
  func_0x00010885c10c();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    unaff_x21 = (undefined8 *)param_1[6];
    func_0x00010885b6f0();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885c3f0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010885b9b8();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bc5c();
        }
        func_0x00010885b7cc();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  FUN_108850730();
  func_0x00010885c150();
  func_0x00010885c614();
  func_0x0001052c1d5c();
  func_0x0001052c1d84(&stack0x00000010);
  func_0x00010885c884();
  func_0x00010885c694();
  __ZNSt3__15mutex4lockEv(in_stack_00000010 + 8);
  if (*(char *)(in_stack_00000010 + 1) == '\x01') {
    uVar1 = *(undefined4 *)unaff_x21;
    *(undefined1 *)((long)in_stack_00000010 + 4) = *(undefined1 *)((long)unaff_x21 + 4);
    *(undefined4 *)in_stack_00000010 = uVar1;
  }
  else {
    *in_stack_00000010 = *unaff_x21;
    *(undefined1 *)(in_stack_00000010 + 1) = 1;
  }
  func_0x00010885c218();
  if (unaff_x21 == (undefined8 *)0x0) {
    func_0x00010885c5d4(in_stack_00000010);
  }
  else {
    func_0x00010885c9dc();
    func_0x00010885c0a0();
    func_0x00010885ba24();
  }
  func_0x00010885c91c();
  func_0x00010885bd8c();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108854e48; end: 108854e67;  */

void FUN_108854e48(void)

{
  func_0x00010885bdd4();
  FUN_108854e68();
  return;
}



/* Entry: 108854e68; end: 108854e7f;  */

void FUN_108854e68(undefined8 *param_1)

{
  func_0x00010885c70c();
  *param_1 = &PTR_FUN_110a7c168;
  return;
}



/* Entry: 108854e80; end: 108854e9f;  */

void FUN_108854e80(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010885caa4();
  FUN_108826178();
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



/* Entry: 108854ea0; end: 108854f3b;  */

void FUN_108854ea0(undefined8 *param_1)

{
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010885ba44();
  func_0x00010885c2b4();
  *param_1 = FUN_10885aa18;
  param_1[1] = FUN_10885ab40;
  uVar1 = *unaff_x23;
  uVar3 = unaff_x23[3];
  uVar2 = unaff_x23[2];
  param_1[5] = unaff_x23[1];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = unaff_x23[4];
  unaff_x23[4] = 0;
  FUN_108856810(param_1 + 2);
  FUN_1088503f8();
  param_1[9] = unaff_x21;
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010885ba54();
  func_0x00010885b93c();
  return;
}



/* Entry: 108854f3c; end: 10885507b;  */

void FUN_108854f3c(undefined8 *param_1)

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
  undefined8 *unaff_x20;
  long unaff_x21;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885b824();
  *param_1 = FUN_10885a96c;
  param_1[1] = FUN_10885a9f4;
  FUN_108856810(param_1 + 2);
  FUN_1088503f8();
  plVar2 = (long *)*unaff_x20;
  FUN_10884fe74(param_1 + 5,plVar2,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    unaff_x21 = *plVar2;
    if (unaff_x21 == 0) {
      func_0x000107c3a5c0();
      unaff_x21 = *plVar2;
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
  param_1 = param_1 + 4;
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
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 10885507c; end: 1088550b3;  */

long FUN_10885507c(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010885bda4();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010885be38();
  func_0x00010885c4d8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1088550ac);
  (*pcVar1)();
}



/* Entry: 1088550b4; end: 1088550d7;  */

void FUN_1088550b4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001052c2774();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1088550d8; end: 10885511b;  */

void FUN_1088550d8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  cVar1 = *(char *)(param_2 + 6);
  if (cVar1 != '\x01') {
    *param_1 = *param_2;
  }
  else {
    FUN_10882b798();
  }
  *(bool *)(param_1 + 6) = cVar1 == '\x01';
  return;
}



/* Entry: 10885511c; end: 10885511f;  */

long FUN_10885511c(long param_1)

{
  long extraout_x8;
  
  func_0x00010882f0a8(&UNK_110a78d60);
  if (extraout_x8 != 0) {
    func_0x00010882ecc4();
    func_0x000107c33ad4();
    FUN_1088267e4();
    func_0x00010882f9f4();
  }
  func_0x0001052c2468(param_1 + 0x18);
  func_0x0001052c2468();
  return param_1;
}



/* Entry: 108855120; end: 108855133;  */

void FUN_108855120(void)

{
  FUN_10882678c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108855134; end: 1088551a3;  */

void FUN_108855134(void)

{
  func_0x00010885bc7c();
  func_0x00010885c360();
  func_0x00010885c758(FUN_10885ae2c);
  FUN_108855674();
  func_0x00010885c2cc();
  func_0x00010885b948();
  func_0x00010885bbd8();
  func_0x00010885b93c();
  return;
}



/* Entry: 1088551a4; end: 1088554f3;  */

void FUN_1088551a4(long *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long lVar5;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  ulong uVar6;
  long extraout_x8_03;
  ulong uVar7;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long *unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  
  func_0x00010885be5c();
  func_0x00010885c2b4();
  *param_1 = (long)FUN_10885ab74;
  param_1[1] = (long)FUN_10885ae04;
  param_1[10] = (long)unaff_x20;
  plVar9 = param_1;
  func_0x00010885be08();
  func_0x00010885b948();
  plVar4 = param_1 + 8;
  *plVar4 = *unaff_x20;
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(*plVar4);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
    func_0x00010885b6f0();
    if (*plVar9 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885c3f0();
    plVar9 = extraout_x8;
    do {
      if (*plVar9 == 0) {
        func_0x00010885b89c();
        plVar9 = extraout_x8_01;
        uVar3 = extraout_w10_01;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar9 = extraout_x8_00;
        uVar3 = extraout_w10_00;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x00010885b9b8();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bc5c();
        }
        func_0x00010885b7cc();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  FUN_10885507c();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x00010885c474();
  func_0x00010885c99c();
  func_0x0001052c2468(&lStack_70);
  func_0x00010885c540();
  lVar12 = param_1[4];
  __ZNSt3__15mutex4lockEv(lVar12 + 0x58);
  plVar9 = (long *)param_1[4];
  if ((char)plVar9[4] == '\x01') {
    bVar2 = *(byte *)(plVar4 + 3);
    if (((*(byte *)(plVar9 + 3) & 1) == 0) && (bVar2 != 0)) {
      FUN_10882b798(&lStack_70,plVar4);
      plVar9[1] = lStack_68;
      *plVar9 = lStack_70;
      plVar9[2] = lStack_60;
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_60 = 0;
      *(undefined1 *)(plVar9 + 3) = 1;
      func_0x0001052c2794(&lStack_70);
    }
    else if (*(byte *)(plVar9 + 3) == 0) {
      if ((bVar2 & 1) == 0) {
        *(int *)plVar9 = (int)*plVar4;
      }
    }
    else if (bVar2 == 0) {
      func_0x00010885c5a8();
      *(int *)plVar9 = (int)*plVar4;
      *(undefined1 *)(plVar9 + 3) = 0;
    }
    else if (plVar9 != plVar4) {
      lVar5 = *plVar4;
      lVar1 = plVar4[1];
      uVar6 = lVar1 - lVar5;
      lVar10 = (long)uVar6 / 0x48;
      if ((ulong)(plVar9[2] - *plVar9) < uVar6) {
        func_0x000108826754(plVar9);
        plVar4 = plVar9;
        FUN_1088537c8(plVar9,lVar10);
        FUN_10882b824(plVar9,plVar4);
        lVar11 = lVar5;
      }
      else {
        uVar7 = plVar9[1] - *plVar9;
        if (uVar6 <= uVar7) {
          FUN_1088554f4(lVar5,lVar1);
          func_0x0001052c2804(plVar9,lVar5);
          goto LAB_1088552f0;
        }
        lVar11 = lVar5 + uVar7;
        FUN_1088554f4(lVar5,lVar11);
        func_0x00010885c6ec(plVar9[1]);
        lVar10 = extraout_x8_03 + lVar10;
      }
      FUN_10882b86c(plVar9,lVar11,lVar1,lVar10);
    }
  }
  else {
    func_0x00010885c804(plVar9);
    *(undefined1 *)(plVar9 + 4) = 1;
  }
LAB_1088552f0:
  plVar9 = *(long **)(param_1[4] + 0xa0);
  *(undefined8 *)(param_1[4] + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar12 + 0x58);
  if (plVar9 == (long *)0x0) {
    func_0x00010885c520(param_1[4]);
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9,param_1 + 4);
    func_0x00010885c5c4();
  }
  func_0x00010885c684();
  func_0x00010885bd8c();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 1088554f4; end: 108855627;  */

long FUN_1088554f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  func_0x00010885cab0();
  lVar7 = param_3;
  func_0x00010885c64c();
  plVar5 = (long *)(lVar7 + 0x10);
  do {
    if (unaff_x21 == unaff_x20) {
      return param_3;
    }
    lVar7 = *unaff_x21;
    plVar5[-1] = unaff_x21[1];
    plVar5[-2] = lVar7;
    if (plVar5 + -2 != unaff_x21) {
      lVar7 = unaff_x21[2];
      lVar1 = unaff_x21[3];
      uVar4 = lVar1 - lVar7;
      lVar3 = (long)uVar4 / 0x18;
      if ((ulong)(plVar5[2] - *plVar5) < uVar4) {
        func_0x00010885431c(plVar5);
        plVar2 = plVar5;
        func_0x0001052bffb4(plVar5,lVar3);
        FUN_10882ba50(plVar5,plVar2);
      }
      else {
        uVar6 = plVar5[1] - *plVar5;
        if (uVar4 <= uVar6) {
          FUN_108855628(lVar7,lVar1);
          func_0x0001052bfc94(plVar5,lVar7);
          goto LAB_1088555e4;
        }
        FUN_108855628(lVar7,lVar7 + uVar6);
        lVar7 = lVar7 + uVar6;
        lVar3 = (plVar5[1] - *plVar5) / -0x18 + lVar3;
      }
      FUN_10882ba94(plVar5,lVar7,lVar1,lVar3);
    }
LAB_1088555e4:
    plVar5[3] = unaff_x21[5];
    func_0x000107c27cfc(plVar5 + 4,unaff_x21 + 6);
    plVar5 = plVar5 + 9;
    param_3 = param_3 + 0x48;
    unaff_x21 = unaff_x21 + 9;
  } while( true );
}



/* Entry: 108855628; end: 108855673;  */

long FUN_108855628(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = param_3;
  func_0x00010885c64c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x000107c27cfc(lVar1,unaff_x21);
    lVar1 = lVar1 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



/* Entry: 108855674; end: 108855693;  */

void FUN_108855674(void)

{
  func_0x00010885bdd4();
  FUN_108855694();
  return;
}



/* Entry: 108855694; end: 1088556ab;  */

void FUN_108855694(undefined8 *param_1)

{
  func_0x00010885c70c();
  *param_1 = &PTR_FUN_110a7c1a0;
  return;
}



/* Entry: 1088556ac; end: 1088556cb;  */

void FUN_1088556ac(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010885caa4();
  FUN_10882678c();
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



/* Entry: 1088556cc; end: 108855767;  */

void FUN_1088556cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x21;
  long unaff_x23;
  
  func_0x00010885ba44();
  lVar2 = 0x58;
  __Znwm();
  lVar3 = lVar2;
  func_0x00010885c6dc(FUN_108859eac);
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x23 + 0x10);
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  FUN_1088568a4(lVar3 + 0x10);
  FUN_108850aa0();
  *(undefined8 *)(lVar2 + 0x40) = unaff_x21;
  *(undefined1 *)(lVar2 + 0x50) = 0;
  func_0x00010885ba54();
  func_0x00010885b93c();
  return;
}



/* Entry: 108855768; end: 1088558b7;  */

void FUN_108855768(undefined8 *param_1)

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
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_stack_00000008;
  
  func_0x00010885cac8();
  func_0x00010885b824();
  *param_1 = FUN_108859df0;
  param_1[1] = FUN_108859e88;
  FUN_1088568a4(param_1 + 2);
  FUN_108850aa0();
  plVar2 = (long *)*unaff_x20;
  FUN_108850768(param_1 + 5,plVar2,unaff_x20[1],unaff_x20[2]);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    unaff_x21 = *plVar2;
    if (unaff_x21 == 0) {
      func_0x000107c3a5c0();
      unaff_x21 = *plVar2;
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
  param_1 = param_1 + 4;
  FUN_1088558b8();
  func_0x00010885bac4();
  do {
    func_0x00010885b75c();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x21 + 0xb8) == '\x01') {
        *(undefined1 *)(unaff_x21 + 0xb8) = 0;
      }
      uVar5 = unaff_x22[1];
      uVar4 = *unaff_x22;
      uVar6 = unaff_x22[2];
      *(undefined8 *)(unaff_x21 + 0xb0) = unaff_x22[3];
      *(undefined8 *)(unaff_x21 + 0xa8) = uVar6;
      *(undefined8 *)(unaff_x21 + 0xa0) = uVar5;
      *(undefined8 *)(unaff_x21 + 0x98) = uVar4;
      *(undefined1 *)(unaff_x21 + 0xb8) = 1;
      func_0x00010885b744();
      break;
    }
  } while ((in_stack_00000008 >> 1 & 1) == 0);
  func_0x00010885ba18();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 1088558b8; end: 1088558ef;  */

long FUN_1088558b8(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010885bda4();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x00010885be38();
  func_0x00010885c4d8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1088558e8);
  (*pcVar1)();
}



/* Entry: 1088558f0; end: 1088558f3;  */

long FUN_1088558f0(long param_1)

{
  long extraout_x8;
  
  func_0x00010882f0a8(&UNK_110a78de0);
  if (extraout_x8 != 0) {
    func_0x00010882ecc4();
    func_0x000107c33ad4();
    FUN_108826c60();
    func_0x00010882f9f4();
  }
  func_0x0001052c2af4(param_1 + 0x18);
  func_0x0001052c2af4();
  return param_1;
}



/* Entry: 1088558f4; end: 108855907;  */

void FUN_1088558f4(void)

{
  FUN_108826c08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108855908; end: 108855977;  */

void FUN_108855908(void)

{
  func_0x00010885bc7c();
  func_0x00010885c360();
  func_0x00010885c758(FUN_10885a18c);
  FUN_108855b78();
  func_0x00010885c2cc();
  func_0x00010885b948();
  func_0x00010885bbd8();
  func_0x00010885b93c();
  return;
}



/* Entry: 108855978; end: 108855b77;  */

void FUN_108855978(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *in_stack_00000010;
  
  func_0x00010885c9a8();
  func_0x00010885be5c();
  func_0x00010885c148();
  *param_1 = (long)FUN_10885a020;
  param_1[1] = (long)FUN_10885a16c;
  param_1[8] = (long)unaff_x20;
  plVar3 = param_1;
  func_0x00010885be08();
  func_0x00010885b948();
  func_0x00010885c10c();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(*unaff_x20);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    unaff_x21 = (undefined8 *)param_1[6];
    func_0x00010885b6f0();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885c3f0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010885b9b8();
        if ((bool)in_ZR) {
          func_0x00010885b88c();
          func_0x00010885b700();
          func_0x00010885b720();
          func_0x00010885bc5c();
        }
        func_0x00010885b7cc();
        *extraout_x8_02 = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1088558b8();
  func_0x00010885c150();
  func_0x00010885c614();
  func_0x0001052c2884();
  func_0x0001052c28ac(&stack0x00000010);
  func_0x00010885c87c();
  func_0x00010885c67c();
  puVar2 = in_stack_00000010;
  __ZNSt3__15mutex4lockEv(in_stack_00000010 + 0xb);
  if (*(char *)(in_stack_00000010 + 4) == '\x01') {
    uVar7 = unaff_x21[1];
    uVar6 = *unaff_x21;
    uVar8 = *(undefined8 *)((long)unaff_x21 + 9);
    *(undefined8 *)((long)in_stack_00000010 + 0x11) = *(undefined8 *)((long)unaff_x21 + 0x11);
    *(undefined8 *)((long)in_stack_00000010 + 9) = uVar8;
    in_stack_00000010[1] = uVar7;
    *in_stack_00000010 = uVar6;
  }
  else {
    uVar6 = *unaff_x21;
    uVar8 = unaff_x21[3];
    uVar7 = unaff_x21[2];
    in_stack_00000010[1] = unaff_x21[1];
    *in_stack_00000010 = uVar6;
    in_stack_00000010[3] = uVar8;
    in_stack_00000010[2] = uVar7;
    *(undefined1 *)(in_stack_00000010 + 4) = 1;
  }
  lVar5 = in_stack_00000010[0x14];
  in_stack_00000010[0x14] = 0;
  __ZNSt3__15mutex6unlockEv(puVar2 + 0xb);
  if (lVar5 == 0) {
    func_0x00010885c520(in_stack_00000010);
  }
  else {
    func_0x00010885c9dc();
    func_0x00010885c0a0();
    func_0x00010885ba24();
  }
  func_0x00010885c914();
  func_0x00010885bd8c();
  func_0x00010885bc28();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108855b78; end: 108855b97;  */

void FUN_108855b78(void)

{
  func_0x00010885bdd4();
  FUN_108855b98();
  return;
}



/* Entry: 108855b98; end: 108855baf;  */

void FUN_108855b98(undefined8 *param_1)

{
  func_0x00010885c70c();
  *param_1 = &PTR_FUN_110a7c1d8;
  return;
}



/* Entry: 108855bb0; end: 108855c1b;  */

void FUN_108855bb0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x00010885caa4();
  FUN_108826c08();
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



/* Entry: 108855c1c; end: 108855c9b;  */

void FUN_108855c1c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010885bc7c();
  func_0x00010885c2b4();
  *param_1 = FUN_108859cc4;
  param_1[1] = FUN_108859dc0;
  FUN_108855c9c(param_1 + 4);
  FUN_108856644(param_1 + 2);
  func_0x00010885bb88();
  param_1[9] = unaff_x20;
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010885bc6c();
  func_0x00010885b93c();
  return;
}



/* Entry: 108855c9c; end: 108855cc3;  */

void FUN_108855c9c(long param_1,long param_2)

{
  func_0x000108855bd0();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 108855cc4; end: 108855de7;  */

void FUN_108855cc4(long param_1)

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
  long unaff_x21;
  
  func_0x00010885c9a8();
  func_0x00010885c58c();
  func_0x00010885bd94();
  func_0x00010885c03c(FUN_108859c50);
  func_0x00010885be84();
  plVar2 = (long *)&stack0x00000008;
  func_0x000107c291e8(plVar2,unaff_x21 + 8);
  func_0x00010885c4c4(param_1 + 0x28);
  FUN_108850b40();
  func_0x00010885c4e0();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885c3a8();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108855de8; end: 108855e6f;  */

void FUN_108855de8(long param_1)

{
  long lVar1;
  undefined8 unaff_x21;
  long unaff_x23;
  
  func_0x00010885ba44();
  func_0x00010885c148();
  lVar1 = param_1;
  func_0x00010885c6dc(FUN_1088598f0);
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(unaff_x23 + 0x10);
  *(undefined8 *)(unaff_x23 + 0x10) = 0;
  func_0x00010885c010();
  func_0x00010885be90();
  *(undefined8 *)(param_1 + 0x38) = unaff_x21;
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x00010885ba54();
  func_0x00010885b93c();
  return;
}



/* Entry: 108855e70; end: 108855f73;  */

void FUN_108855e70(long param_1)

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
  undefined8 *unaff_x20;
  
  func_0x00010885b824();
  func_0x00010885c03c(FUN_10885987c);
  func_0x00010885bb88();
  plVar2 = (long *)*unaff_x20;
  FUN_108851150(param_1 + 0x28,plVar2,unaff_x20[1]);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885c3a8();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108855f74; end: 108855fc3;  */

undefined8 * FUN_108855f74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108855fc4; end: 108856043;  */

void FUN_108855fc4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010885bc7c();
  func_0x00010885c2b4();
  *param_1 = FUN_108859238;
  param_1[1] = FUN_108859334;
  FUN_108856044(param_1 + 4);
  FUN_108856644(param_1 + 2);
  func_0x00010885bb88();
  param_1[9] = unaff_x20;
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010885bc6c();
  func_0x00010885b93c();
  return;
}



/* Entry: 108856044; end: 10885606b;  */

void FUN_108856044(long param_1,long param_2)

{
  FUN_108855f74();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10885606c; end: 108856197;  */

void FUN_10885606c(long param_1)

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
  long unaff_x21;
  
  func_0x00010885c9a8();
  func_0x00010885c58c();
  func_0x00010885bd94();
  func_0x00010885c03c(FUN_1088591c4);
  func_0x00010885be84();
  func_0x000107c27994(&stack0x00000008,unaff_x21 + 8);
  func_0x00010885c4c4(param_1 + 0x28);
  FUN_108851b48();
  plVar2 = (long *)&stack0x00000008;
  func_0x000107c27914();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885c3a8();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
  func_0x00010885bc18();
  return;
}



/* Entry: 108856198; end: 108856227;  */

void FUN_108856198(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x21;
  long unaff_x23;
  
  func_0x00010885ba44();
  lVar2 = 0x58;
  __Znwm();
  lVar3 = lVar2;
  func_0x00010885c6dc(FUN_108858d18);
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x23 + 0x10);
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x23 + 0x18) = 0;
  func_0x00010885c010();
  func_0x00010885be90();
  *(undefined8 *)(lVar2 + 0x40) = unaff_x21;
  *(undefined1 *)(lVar2 + 0x50) = 0;
  func_0x00010885ba54();
  func_0x00010885b93c();
  return;
}



/* Entry: 108856228; end: 10885632f;  */

void FUN_108856228(long param_1)

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
  undefined8 *unaff_x20;
  
  func_0x00010885b824();
  func_0x00010885c03c(FUN_108858ca4);
  func_0x00010885bb88();
  plVar2 = (long *)*unaff_x20;
  FUN_108851ecc(param_1 + 0x28,plVar2,unaff_x20[1],unaff_x20[2]);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885c3a8();
  func_0x00010885bf40();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108856330; end: 10885639f;  */

void FUN_108856330(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_108858624);
  func_0x000107c27f94();
  func_0x00010885ba8c();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 1088563a0; end: 10885649f;  */

void FUN_1088563a0(long param_1)

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
  undefined8 *unaff_x20;
  
  func_0x00010885b824();
  func_0x00010885bf50(FUN_1088585b4);
  func_0x00010885b948();
  plVar2 = (long *)*unaff_x20;
  FUN_10884ed44(param_1 + 0x28);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088564a0; end: 1088564eb;  */

/* WARNING: Removing unreachable block (ram,0x0001005ed580) */

undefined1 FUN_1088564a0(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  lVar3 = *(long *)(param_2 + 0x10);
  plVar10 = (long *)(lVar3 + 0x10);
  do {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        lVar6 = lVar3 + 0x20;
        lVar7 = lVar6;
        do {
          if (*(char *)(lVar7 + 1) != '\0') {
            uVar8 = 0;
            plVar10 = (long *)(lVar7 + 0x20);
            do {
              plVar4 = (long *)*plVar10;
              pcVar5 = (code *)plVar10[-2];
              if (plVar4 == (long *)0x0) {
                if (pcVar5 == (code *)0x0) {
                  (**(code **)plVar10[-1])();
                }
                else {
                  (*pcVar5)();
                }
              }
              else {
                (**(code **)(*plVar4 + 0x10))(plVar4,pcVar5,plVar10[-1]);
              }
              uVar8 = uVar8 + 1;
              plVar10 = plVar10 + 3;
            } while (uVar8 < *(byte *)(lVar7 + 1));
          }
          lVar9 = *(long *)(lVar7 + 8);
          if (lVar7 != lVar6) {
            func_0x000107c60fd0(lVar7);
          }
          lVar7 = lVar9;
        } while (lVar9 != 0);
        *(long *)(lVar3 + 0x90) = lVar6;
        *(undefined1 *)(lVar3 + 0x21) = 0;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 1088564ec; end: 1088565e7;  */

void FUN_1088564ec(int param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined **appuStack_78 [2];
  int iStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c278b8(auStack_60,&UNK_10f4be572);
  func_0x000107c27fac(auStack_48,auStack_60,(&PTR_DAT_110a7c248)[param_1]);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (appuStack_78,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  appuStack_78[0] = &PTR_FUN_110a7c230;
  puVar2 = (undefined8 *)0x18;
  iStack_68 = param_1;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC2ERKS_();
  *puVar2 = &PTR_FUN_110a7c230;
  *(int *)(puVar2 + 2) = iStack_68;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108856590);
  (*pcVar1)();
}



/* Entry: 1088565e8; end: 1088565eb;  */

void FUN_1088565e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1088565ec; end: 1088565ff;  */

void FUN_1088565ec(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108856600; end: 108856643;  */

undefined8 * FUN_108856600(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar6 = (long *)*puVar2;
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar2);
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
  return puVar2;
}



/* Entry: 108856644; end: 10885668f;  */

undefined8 FUN_108856644(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  func_0x00010885bb40();
  func_0x00010885c9f4(&PTR_FUN_110a7c2e0);
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  func_0x00010885baf4();
  func_0x00010885bfac();
  func_0x00010885bae4();
  return param_1;
}



/* Entry: 108856690; end: 108856693;  */

undefined8 * FUN_108856690(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108856694; end: 1088566a7;  */

void FUN_108856694(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088566a8; end: 1088566f3;  */

undefined8 FUN_1088566a8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xa8;
  __Znwm();
  func_0x00010885bb40();
  func_0x00010885c9f4(&PTR_FUN_110a7c320);
  *(undefined1 *)(lVar1 + 0xa4) = 0;
  func_0x00010885baf4();
  func_0x00010885bfac();
  func_0x00010885bae4();
  return param_1;
}



/* Entry: 1088566f4; end: 1088566f7;  */

undefined8 * FUN_1088566f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1088566f8; end: 10885670b;  */

void FUN_1088566f8(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10885670c; end: 1088567ff;  */

void FUN_10885670c(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  undefined1 auStack_b8 [72];
  char cStack_70;
  undefined1 uStack_68;
  undefined1 uStack_38;
  
  func_0x00010885bce4();
  plVar3 = *(long **)(unaff_x19 + 0x18);
  puVar1 = (undefined1 *)plVar3[1];
  *(int *)(*plVar3 + 0x1c) = *(int *)(*plVar3 + 0x1c) + 1;
  *puVar1 = 0;
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    func_0x00010885c210();
    __ZNSt11logic_errorC1EPKc();
    func_0x00010885c940();
    func_0x00010885bef4();
    func_0x000108853828();
    func_0x00010885c4a8();
    func_0x00010885bcf8();
    return;
  }
  puVar2 = (undefined8 *)(unaff_x20 + 0x20);
  func_0x0001072833b8();
  *(undefined8 *)plVar3[2] = *puVar2;
  uStack_68 = 0;
  uStack_38 = 0;
  func_0x00010885c6cc();
  if ((bool)in_ZR) {
    func_0x00010885c764();
  }
  func_0x00010885c7d0();
  if (cStack_70 == '\x01') {
    FUN_108853728(**(undefined8 **)(unaff_x19 + 0x28),auStack_b8);
  }
  func_0x000108853828(auStack_b8);
  func_0x00010885c4a8();
  return;
}



/* Entry: 108856800; end: 10885680f;  */

void FUN_108856800(void)

{
  return;
}



/* Entry: 108856810; end: 10885685b;  */

undefined8 FUN_108856810(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  func_0x00010885bb40();
  func_0x00010885c9f4(&PTR_FUN_110a7c378);
  *(undefined1 *)(lVar1 + 0xb8) = 0;
  func_0x00010885baf4();
  func_0x00010885bfac();
  func_0x00010885bae4();
  return param_1;
}



/* Entry: 10885685c; end: 10885685f;  */

undefined8 * FUN_10885685c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c378;
  FUN_108826528(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108856860; end: 108856873;  */

void FUN_108856860(void)

{
  FUN_108856874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108856874; end: 1088568a3;  */

undefined8 * FUN_108856874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c378;
  FUN_108826528(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1088568a4; end: 1088568ef;  */

undefined8 FUN_1088568a4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0xc0;
  __Znwm();
  func_0x00010885bb40();
  func_0x00010885c9f4(&PTR_FUN_110a7c3b8);
  *(undefined1 *)(lVar1 + 0xb8) = 0;
  func_0x00010885baf4();
  func_0x00010885bfac();
  func_0x00010885bae4();
  return param_1;
}



/* Entry: 1088568f0; end: 1088568f3;  */

undefined8 * FUN_1088568f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1088568f4; end: 108856907;  */

void FUN_1088568f4(void)

{
  func_0x000107c31514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108856908; end: 1088569eb;  */

void FUN_108856908(void)

{
  long *plVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long unaff_x19;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long alStack_b8 [2];
  ulong uStack_a8;
  ulong uStack_a0;
  char cStack_70;
  undefined1 uStack_68;
  undefined1 uStack_38;
  
  func_0x00010885bce4();
  uStack_68 = 0;
  uStack_38 = 0;
  func_0x00010885c6cc();
  if ((bool)in_ZR) {
    func_0x00010885c764();
  }
  func_0x00010885c7d0();
  if (cStack_70 == '\x01') {
    plVar4 = *(long **)(unaff_x19 + 0x28);
    lVar5 = *plVar4;
    uVar3 = uStack_a8;
    do {
      if (uVar3 == uStack_a0) {
        plVar1 = (long *)plVar4[2];
        *(int *)plVar4[1] = *(int *)plVar4[1] + 1;
        plVar4 = plVar1;
        if ((char)plVar1[1] == '\0') {
          plVar4 = alStack_b8;
        }
        if (*plVar4 <= alStack_b8[0]) {
          alStack_b8[0] = *plVar4;
        }
        *plVar1 = alStack_b8[0];
        *(undefined1 *)(plVar1 + 1) = 1;
        break;
      }
      uVar2 = uVar3;
      func_0x000107c28078(uVar3,lVar5 + 0x10);
      uVar3 = uVar3 + 0x18;
    } while ((uVar2 & 1) == 0);
  }
  func_0x000108853828(alStack_b8);
  func_0x00010885c4a8();
  return;
}



/* Entry: 1088569ec; end: 1088569ff;  */

void FUN_1088569ec(void)

{
  return;
}



/* Entry: 108856a00; end: 108856a13;  */

void FUN_108856a00(void)

{
  FUN_108856c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108856a14; end: 108856a6f;  */

void FUN_108856a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108856a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108856a70; end: 108856acb;  */

void FUN_108856a70(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010885c5dc();
  func_0x000107c2793c(&UNK_10f4be5cc);
  func_0x00010885c500();
  func_0x00010885c934();
  func_0x0001052b2bd0(auStack_40);
  func_0x00010885c8c0();
  __ZNSt13exception_ptrD1Ev(auStack_40);
  __ZNSt13runtime_errorD1Ev(auStack_30);
  func_0x00010885beec();
  return;
}



/* Entry: 108856acc; end: 108856b0b;  */

void FUN_108856acc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_3;
  FUN_108843ae8();
  uStack_28 = param_1;
  func_0x000107c28268(uVar1,&DAT_10f2fb62f,&uStack_28);
  *param_3 = uVar1;
  return;
}



/* Entry: 108856b0c; end: 108856b4f;  */

undefined8 * FUN_108856b0c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar6 = (long *)*puVar2;
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar2);
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
  return puVar2;
}



/* Entry: 108856b50; end: 108856ba7;  */

undefined8 * FUN_108856b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_110a7c4a0;
  param_1[1] = uVar1;
  (**(code **)(param_2[1] + 0x10))(param_1 + 2);
  param_1[7] = *param_3;
  (**(code **)(param_3[1] + 0x10))(param_1 + 8,param_3 + 1);
  return param_1;
}



/* Entry: 108856ba8; end: 108856bab;  */

undefined8 * FUN_108856ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c4a0;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 108856bac; end: 108856bbf;  */

void FUN_108856bac(void)

{
  FUN_108856bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108856bc0; end: 108856bdb;  */

void FUN_108856bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108856bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 108856bdc; end: 108856c1f;  */

undefined8 * FUN_108856bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7c4a0;
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 108856c20; end: 108856c2f;  */

void FUN_108856c20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7c410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108856c30; end: 108856c57;  */

long FUN_108856c30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108856c58; end: 108856cc3;  */

void FUN_108856c58(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  func_0x00010885c64c();
  func_0x00010885c77c();
  func_0x00010885c770();
  func_0x00010885c22c();
  func_0x000107c28890(&uStack_50);
  func_0x00010885c240();
  FUN_108856cc4(uStack_38,0);
  uVar1 = auStack_48[0];
  uStack_50 = 0;
  auStack_48[0] = 0;
  *extraout_x8 = uVar1;
  func_0x00010885bfac();
  func_0x000107c2889c(auStack_48);
  return;
}



/* Entry: 108856cc4; end: 108856cff;  */

void FUN_108856cc4(void)

{
  func_0x00010885bca8();
  func_0x000107c28894();
  func_0x000100579ac8();
  return;
}



/* Entry: 108856d00; end: 108856d7f;  */

void FUN_108856d00(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) == *(long *)(lVar1 + 0x140)) {
    plVar2 = *(long **)(lVar1 + 0x90);
    func_0x00010885c7c0(*(undefined8 *)(*plVar2 + 200));
    if (((ulong)plVar2 & 1) != 0) {
      uStack_28 = 3;
      uStack_24 = 1;
      (**(code **)(**(long **)(lVar1 + 0x90) + 0x48))
                (*(long **)(lVar1 + 0x90),lVar1 + 0x28,&uStack_28);
    }
  }
  return;
}



/* Entry: 108856d80; end: 108856de7;  */

void FUN_108856d80(void)

{
  return;
}



/* Entry: 108856de8; end: 108856e43;  */

void FUN_108856de8(void)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x00010885c5dc();
  func_0x000107c2793c(&UNK_10f4be5ee);
  func_0x00010885c500();
  func_0x00010885c934();
  func_0x0001052b2bd0(auStack_40);
  func_0x00010885c8c0();
  __ZNSt13exception_ptrD1Ev(auStack_40);
  __ZNSt13runtime_errorD1Ev(auStack_30);
  func_0x00010885beec();
  return;
}



/* Entry: 108856e44; end: 108856e87;  */

undefined8 * FUN_108856e44(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar6 = (long *)*puVar2;
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar2);
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
  return puVar2;
}



/* Entry: 108856e88; end: 108856ef7;  */

void FUN_108856e88(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_108858348);
  func_0x000107c27f94();
  func_0x00010885ba8c();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 108856ef8; end: 108856ff3;  */

void FUN_108856ef8(long *param_1)

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
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885bf50(FUN_1088582d8);
  func_0x00010885b948();
  func_0x00010885c1ec();
  FUN_108856ff4();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108856ff4; end: 1088570fb;  */

void FUN_108856ff4(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  func_0x00010885bd94();
  func_0x00010885bf50(FUN_108858268);
  func_0x00010885beb4();
  FUN_1088519f8(param_1 + 5);
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar2 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar2 = extraout_w11;
      }
      if ((uVar2 & 1) != 0) {
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088570fc; end: 108857123;  */

undefined8 FUN_1088570fc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c288ac(param_1 + 0x38);
  func_0x00010885bde8(param_1);
  func_0x000107c27ae4();
  func_0x00010885c79c();
  return unaff_x19;
}



/* Entry: 108857124; end: 10885719f;  */

void FUN_108857124(void)

{
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x00010885bc7c();
  lVar1 = 0x78;
  __Znwm();
  func_0x00010885c758(FUN_108858128);
  FUN_1088571a0();
  func_0x00010885c2cc();
  func_0x00010885b948();
  *(undefined8 *)(lVar1 + 0x60) = unaff_x20;
  *(undefined1 *)(lVar1 + 0x70) = 0;
  func_0x00010885bc6c();
  func_0x00010885b93c();
  return;
}



/* Entry: 1088571a0; end: 1088571ef;  */

void FUN_1088571a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = uVar1;
  param_2[7] = 0;
  return;
}



/* Entry: 1088571f0; end: 1088572eb;  */

void FUN_1088571f0(long *param_1)

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
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885bf50(FUN_1088580b8);
  func_0x00010885b948();
  func_0x00010885c1ec();
  FUN_1088572ec();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088572ec; end: 108857447;  */

void FUN_1088572ec(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
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
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  puVar2 = param_1;
  func_0x00010885c360();
  func_0x00010885bf50(FUN_10885802c);
  func_0x00010885ba8c();
  func_0x000107c291e8(puVar2 + 4,param_1 + 1);
  func_0x000107c291e8(puVar2 + 7,param_1 + 4);
  FUN_108852878(puVar2 + 0xb,plVar4,puVar2 + 4,puVar2 + 7);
  func_0x00010885bd40();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(puVar2[10]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0xc) = 0;
    func_0x00010885b6f0();
    if (*plVar4 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x00010885b89c();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar4 = extraout_x8_00;
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
  func_0x00010885c0f4();
  func_0x00010885bcc4();
  func_0x00010885bd08();
  func_0x00010885c298();
  func_0x00010885bf68();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 108857448; end: 1088574b7;  */

void FUN_108857448(void)

{
  func_0x00010885ba44();
  func_0x00010885bf00();
  func_0x00010885b834(FUN_108857e3c);
  func_0x000107c27f94();
  func_0x00010885ba8c();
  func_0x00010885b980();
  func_0x00010885b93c();
  return;
}



/* Entry: 1088574b8; end: 1088575b3;  */

void FUN_1088574b8(long *param_1)

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
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885bf50(FUN_108857dcc);
  func_0x00010885b948();
  func_0x00010885c1ec();
  FUN_1088575b4();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1088575b4; end: 108857643;  */

void FUN_1088575b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  
  lVar1 = *param_2;
  func_0x000107c27f94(auStack_50);
  func_0x000107c287c4(param_1,auStack_50);
  if (*(long *)(lVar1 + 0x168) != *(long *)(lVar1 + 0x170)) {
    auStack_38[0] = 0;
    uStack_34 = 0;
    func_0x00010884d878(lVar1 + 0x160,auStack_38);
  }
  func_0x000107c287c8(auStack_50);
  func_0x000107c27fb8(auStack_50);
  return;
}



/* Entry: 108857644; end: 108857667;  */

void FUN_108857644(void)

{
  func_0x00010885bde8();
  func_0x000107c288ac();
  func_0x00010885c79c();
  return;
}



/* Entry: 108857668; end: 108857703;  */

void FUN_108857668(undefined8 *param_1)

{
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010885ba44();
  func_0x00010885c2b4();
  uVar1 = *unaff_x23;
  uVar3 = unaff_x23[3];
  uVar2 = unaff_x23[2];
  param_1[5] = unaff_x23[1];
  param_1[4] = uVar1;
  *param_1 = FUN_108857c9c;
  param_1[1] = FUN_108857d98;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  unaff_x23[1] = 0;
  unaff_x23[2] = 0;
  param_1[8] = unaff_x23[4];
  unaff_x23[3] = 0;
  unaff_x23[4] = 0;
  func_0x00010885be08();
  func_0x00010885ba8c();
  param_1[9] = unaff_x21;
  *(undefined1 *)(param_1 + 0xb) = 0;
  func_0x00010885ba54();
  func_0x00010885b93c();
  return;
}



/* Entry: 108857704; end: 1088577ff;  */

void FUN_108857704(long *param_1)

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
  
  func_0x00010885b824();
  plVar2 = param_1;
  func_0x00010885bf50(FUN_108857c2c);
  func_0x00010885b948();
  func_0x00010885c1ec();
  FUN_108857800();
  func_0x00010885b9c8();
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885b998();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x00010885b6c4();
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
  func_0x00010885bf60();
  func_0x00010885bc10();
  func_0x00010885bc08();
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108857800; end: 108857947;  */

void FUN_108857800(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1 + 1;
  plVar3 = (long *)*param_1;
  func_0x00010885c148();
  func_0x00010885bf50(FUN_108857ba0);
  func_0x00010885ba8c();
  func_0x000107c291e8(param_1 + 4,puVar4);
  FUN_108852dd0(param_1 + 8,plVar3,param_1 + 4);
  param_1[7] = param_1[8];
  do {
    func_0x00010885b868();
  } while (extraout_w10 != 0);
  func_0x00010885bc30(param_1[7]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 9) = 0;
    func_0x00010885b6f0();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010885bcd8();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010885b89c();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar2 = extraout_w11_00;
      }
      else {
        func_0x00010885bc8c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar2 = extraout_w11;
      }
      if ((uVar2 & 1) != 0) {
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
  func_0x000107c28834(param_1 + 7);
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



/* Entry: 108857948; end: 1088579ab;  */

undefined8 * FUN_108857948(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x00010869af7c(param_1,param_2);
  }
  return param_1;
}



/* Entry: 1088579ac; end: 108857a33;  */

void FUN_1088579ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  FUN_10885318c();
  uVar2 = *puVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  func_0x00010885bc10();
  func_0x00010885bc08();
  if ((*(char *)(param_1 + 0x40) == '\x01') &&
     (*(long *)(*(long *)(param_1 + 0x30) + 0x168) != *(long *)(*(long *)(param_1 + 0x30) + 0x170)))
  {
    func_0x00010885c8e0();
  }
  func_0x00010885bc28();
  func_0x00010885bbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


