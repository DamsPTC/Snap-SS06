/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10873d6fc; end: 10873d6ff;  */

undefined8 * FUN_10873d6fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a280;
  func_0x000105c38bc0(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10873d700; end: 10873d713;  */

void FUN_10873d700(void)

{
  FUN_10873d714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873d714; end: 10873d77f;  */

undefined8 * FUN_10873d714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a280;
  func_0x000105c38bc0(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10873d780; end: 10873d7bb;  */

void FUN_10873d780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10873d7bc; end: 10873d7cf;  */

void FUN_10873d7bc(void)

{
  func_0x00010873d7ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873d7d0; end: 10873d7df;  */

void FUN_10873d7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010873d7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10873d7e0; end: 10873d817;  */

void FUN_10873d7e0(void)

{
  func_0x00010873f9ec();
  return;
}



/* Entry: 10873d818; end: 10873d863;  */

void FUN_10873d818(void)

{
  long unaff_x19;
  undefined1 auStack_38 [24];
  
  func_0x00010873f560();
  func_0x000107c2795c();
  FUN_10873cfcc(*(undefined8 *)(unaff_x19 + 0x10),(undefined8 *)(unaff_x19 + 0x10),auStack_38);
  func_0x000107c278a8(auStack_38);
  return;
}



/* Entry: 10873d864; end: 10873d8df;  */

undefined8 * FUN_10873d864(undefined8 *param_1)

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



/* Entry: 10873d8e0; end: 10873d9bf;  */

void FUN_10873d8e0(long *param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  int extraout_w8;
  int extraout_w9;
  int extraout_w10;
  long *plVar3;
  long *plStack_78;
  undefined1 auStack_70 [24];
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  plVar3 = *(long **)(*param_1 + 0x120);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_58 = &PTR_FUN_110a609a8;
  uStack_50 = 0;
  uStack_38 = 0x29f;
  func_0x00010873f588(*(undefined4 *)(*param_1 + 0x164));
  iVar1 = extraout_w10;
  if (extraout_w8 == 1) {
    iVar1 = extraout_w9 + 1;
  }
  pppuVar2 = &ppuStack_58;
  FUN_10873c004(pppuVar2,iVar1);
  func_0x00010873f6d0();
  func_0x000107c278b8(auStack_70);
  func_0x000107c28818(pppuVar2,auStack_70,*(undefined1 *)param_1[1]);
  param_1 = param_1 + 2;
  func_0x000107c2825c();
  plStack_78 = param_1;
  (**(code **)(*plVar3 + 0x18))(plVar3,pppuVar2,&plStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x00010873f668();
  return;
}



/* Entry: 10873d9c0; end: 10873d9ef;  */

void FUN_10873d9c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010866f0f4(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10873d9f0; end: 10873da8b;  */

void FUN_10873d9f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010873f9f8();
  *puVar1 = FUN_10873e368;
  puVar1[1] = FUN_10873e464;
  puVar1[5] = param_1[1];
  param_1[1] = 0;
  func_0x00010873f74c();
  func_0x00010873f920();
  puVar1[6] = param_2;
  *(undefined1 *)(puVar1 + 8) = 0;
  func_0x00010873f770(*param_2);
  func_0x00010873f974();
  return;
}



/* Entry: 10873da8c; end: 10873dbb3;  */

void FUN_10873da8c(undefined8 param_1)

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
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_10873e2f0;
  puVar2[1] = FUN_10873e344;
  func_0x000107c27f94(puVar2 + 2);
  plVar3 = puVar2 + 2;
  func_0x000107c287c4(param_1);
  FUN_10873dbb4(puVar2 + 5);
  puVar2[4] = puVar2[5];
  do {
    func_0x00010873f354();
  } while (extraout_w10 != 0);
  func_0x00010873f4e4(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010873f314();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010873f7c0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010873f3b8();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010873f5a0();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010873f404();
        if ((bool)in_ZR) {
          func_0x00010873f378();
          func_0x00010873f344();
          func_0x00010873f324();
        }
        func_0x00010873f2e8();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010873f958();
  func_0x00010873f4dc();
  func_0x00010873f4c4();
  func_0x00010873f518();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10873dbb4; end: 10873dbf7;  */

void FUN_10873dbb4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c27f94(auStack_38);
  func_0x000107c287c4(param_1,auStack_38);
  func_0x000107c287c8(auStack_38);
  func_0x000107c27fb8(auStack_38);
  return;
}



/* Entry: 10873dbf8; end: 10873dbff;  */

void FUN_10873dbf8(void)

{
  return;
}



/* Entry: 10873dc00; end: 10873dc2f;  */

void FUN_10873dc00(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6a390;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10873dc30; end: 10873dc5b;  */

void FUN_10873dc30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6a390;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10873dc5c; end: 10873dcff;  */

void FUN_10873dc5c(long param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar11;
  int extraout_w10;
  ulong uVar12;
  long lVar13;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  lVar13 = *(long *)(param_1 + 8);
  if (param_3[0x20] == 1) {
    FUN_10873dd0c(param_3);
    if (*(int *)(param_3 + 0x18) != 0) {
      return;
    }
    FUN_10873dd0c();
    func_0x00010873a0a8();
    uVar10 = (uint)*param_3;
  }
  else {
    uVar10 = 0;
  }
  lVar13 = lVar13 + 0x158;
  uVar10 = uVar10 & 1;
  func_0x0001087424a4();
  func_0x00010873f7e4();
  plVar9 = &lStack_d0;
  if ((uVar10 == 2) && ((*(byte *)(lVar13 + 0x170) & 1) != 0)) {
    if ((*(char *)(lVar13 + 0x16c) == '\x01') &&
       ((((*(byte *)(lVar13 + 0x169) & 1) == 0 && (*(char *)(lVar13 + 0x171) == '\x01')) &&
        (*(char *)(lVar13 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(lVar13 + 0x164));
      iVar8 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar8 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar8);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar9,auStack_a8,PTR_DAT_11326a1a0);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar9);
      func_0x00010873f448(auStack_80,lVar13 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(lVar13 + 0x110),0,*(undefined4 *)(lVar13 + 0x2c));
      FUN_10873d9c0(lVar13 + 0xe0);
      lVar11 = lStack_c8;
      for (; lStack_d0 != lVar11; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(lVar13 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(lVar13 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(lVar13 + 0xf0) != 0) || (*(long *)(lVar13 + 0x108) != 0)) {
      iVar8 = (int)*(undefined8 *)(lVar13 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar8 != 0) {
        pbStack_38 = (byte *)(*(long *)(lVar13 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar11 = *(long *)(lVar13 + 0xb0);
        if (*(char *)(lVar11 + 0xb8) == '\x01') {
          lVar11 = lVar11 + 0x10;
          func_0x000107c314e4(lVar11);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar11,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar11 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar12 = *(ulong *)(lVar11 + 0xa0);
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar1 / uVar12;
        }
        *(ulong *)(lVar11 + 0xe0) = uVar1 - uVar6 * uVar12;
        *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(lVar13 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873dd00; end: 10873dd0b;  */

undefined ** FUN_10873dd00(void)

{
  return &PTR_DAT_110a6a400;
}



/* Entry: 10873dd0c; end: 10873dd23;  */

long * FUN_10873dd0c(long *param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}



/* Entry: 10873dd24; end: 10873dd57;  */

long * FUN_10873dd24(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}



/* Entry: 10873dd58; end: 10873dd7f;  */

long FUN_10873dd58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10873dd80; end: 10873df27;  */

void FUN_10873dd80(void)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
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
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [24];
  
  func_0x00010873f8f0();
  if ((extraout_x8 & 1) == 0) {
    plVar3 = (long *)(unaff_x19 + 0x28);
    func_0x000107c28870();
    lVar5 = *plVar3;
    func_0x00010873f4c4();
    func_0x00010873f5c4();
    if (lVar5 == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
      func_0x00010873f9a8();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f4afc25,lVar5 + 0x20);
      FUN_10865aaac(plVar3,auStack_58);
      func_0x00010873fa60();
      ___cxa_throw(plVar3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10873dec0);
      (*pcVar2)();
    }
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
    func_0x00010873f4e4(*(undefined8 *)(unaff_x19 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010873fa74();
      func_0x00010873f314();
      if (*plVar3 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f7c0();
      plVar3 = extraout_x8_00;
      do {
        if (*plVar3 == 0) {
          func_0x00010873f3b8();
          plVar3 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010873f5a0();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010873f404();
          if ((bool)in_ZR) {
            func_0x00010873f378();
            func_0x00010873f344();
            func_0x00010873f324();
          }
          func_0x00010873f2e8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar5 = unaff_x19 + 0x28;
  FUN_10873af78(lVar5);
  puVar6 = (undefined8 *)(unaff_x19 + 0x18);
  FUN_10873cfcc(*puVar6,puVar6,lVar5);
  func_0x000107c27fa0(puVar6,0);
  func_0x00010873f4c4();
  func_0x00010873f49c();
  func_0x00010873f4dc();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873df28; end: 10873df67;  */

void FUN_10873df28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010873f49c();
  func_0x00010873f4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873df68; end: 10873e0f7;  */

void FUN_10873df68(long param_1)

{
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  long *plVar1;
  long lStack_60;
  long alStack_58 [4];
  undefined4 uStack_38;
  
  FUN_10873af78(param_1 + 0x70);
  func_0x00010873f7b8();
  func_0x00010873f94c();
  alStack_58[2] = 0;
  alStack_58[3] = 0;
  func_0x00010873f57c(*(undefined8 *)(unaff_x20 + 0x120));
  alStack_58[1] = 0;
  uStack_38 = 0x29b;
  alStack_58[0] = extraout_x8 + 0x10;
  func_0x00010873f79c();
  (*extraout_x8_00)();
  func_0x00010873f4cc();
  plVar1 = *(long **)(unaff_x20 + 0x120);
  alStack_58[2] = 0;
  alStack_58[3] = 0;
  alStack_58[1] = 0;
  uStack_38 = 0x29a;
  param_1 = param_1 + 0x38;
  alStack_58[0] = extraout_x8 + 0x10;
  func_0x000107c2825c();
  lStack_60 = param_1;
  (**(code **)(*plVar1 + 0x18))(plVar1,alStack_58,&lStack_60);
  func_0x00010873f4cc();
  func_0x00010873f92c();
  func_0x00010873f538();
  func_0x00010873f724();
  func_0x00010873f70c();
  func_0x00010873f49c();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873e0f8; end: 10873e127;  */

void FUN_10873e0f8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x70);
  func_0x00010873f724();
  func_0x00010873f70c();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873e128; end: 10873e2c3;  */

void FUN_10873e128(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = param_1;
  func_0x00010873f314();
  while( true ) {
    FUN_10873af78(param_1 + 10);
    func_0x00010873f7b8();
    func_0x00010873f510();
    func_0x00010873f5bc();
    func_0x00010873f5e0();
    (*extraout_x8)();
    lVar8 = param_1[0xd];
    func_0x00010873f794();
    func_0x00010873f538();
    param_1[0xd] = lVar8 + 1;
    plVar5 = (long *)param_1[0xc];
    if ((*(byte *)((long)plVar5 + 0x172) & 1) == 0) break;
    uVar2 = *(int *)((long)plVar5 + 0x164) != 0;
    uVar3 = *(int *)((long)plVar5 + 0x164) == 1;
    if (!(bool)uVar3) break;
    *(undefined1 *)((long)plVar5 + 0x172) = 0;
    FUN_10873a76c(param_1 + 0xb);
    param_1[10] = param_1[0xb];
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
    func_0x00010873f4e4(param_1[10]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xe) = 0;
      lVar8 = param_1[10];
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar5;
      }
      plVar6 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar6 == 0) {
          func_0x00010873f880();
          plVar6 = extraout_x8_01;
          uVar1 = extraout_w9_01;
          uVar7 = extraout_w10_01;
        }
        else {
          func_0x00010873f764();
          plVar6 = extraout_x8_00;
          uVar1 = extraout_w9_00;
          uVar7 = extraout_w10_00;
        }
        if ((uVar7 & 1) != 0) {
          func_0x00010873f438();
          if ((bool)uVar3) {
            func_0x00010873f378();
            uVar3 = extraout_w8;
            if ((bool)uVar2) {
              uVar3 = extraout_w9;
            }
            func_0x00010873f500();
            *(undefined1 *)plVar5 = uVar3;
            func_0x00010873f364(0);
            *(long **)(lVar8 + 0x90) = plVar5;
          }
          func_0x00010873f418();
          *(long *)(extraout_x8_02 + 0x20) = lVar9;
          func_0x00010873f3a8(*(undefined8 *)(lVar8 + 0x90));
          func_0x00010873fa40();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  if (-1 < lVar8) {
    func_0x00010873f428(plVar5[0x24]);
    func_0x00010873f8c0();
    func_0x00010873fa00();
    func_0x00010873f4cc();
  }
  func_0x00010873f518();
  func_0x00010873f49c();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873e2c4; end: 10873e2ef;  */

void FUN_10873e2c4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x50);
  func_0x00010873f5bc();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873e2f0; end: 10873e343;  */

void FUN_10873e2f0(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010873f4dc();
  func_0x00010873f4c4();
  func_0x00010873f518();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873e344; end: 10873e367;  */

void FUN_10873e344(void)

{
  func_0x00010873f9e0();
  func_0x00010873f4c4();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873e368; end: 10873e463;  */

void FUN_10873e368(long *param_1)

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
  
  func_0x00010873f8f0();
  if ((extraout_x8 & 1) == 0) {
    FUN_10873da8c(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
    func_0x00010873f4e4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010873fa74();
      func_0x00010873f314();
      if (*param_1 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f7c0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010873f3b8();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010873f5a0();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010873f404();
          if ((bool)in_ZR) {
            func_0x00010873f378();
            func_0x00010873f344();
            func_0x00010873f324();
          }
          func_0x00010873f2e8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x30);
  func_0x00010873f5c4();
  func_0x00010873f4bc();
  func_0x00010873f518();
  func_0x00010873f49c();
  func_0x00010873f73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873e464; end: 10873e497;  */

void FUN_10873e464(void)

{
  int extraout_w8;
  
  func_0x00010873f8f0();
  if (extraout_w8 == 1) {
    func_0x00010873f5c4();
    func_0x00010873f4bc();
  }
  func_0x00010873f49c();
  func_0x00010873f73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873e498; end: 10873ecf7;  */

/* WARNING: Possible PIC construction at 0x00010874b314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108756d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108750744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010874f304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108750390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108758b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010873e8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108758b30) */
/* WARNING: Removing unreachable block (ram,0x000108758b34) */
/* WARNING: Removing unreachable block (ram,0x000108750394) */
/* WARNING: Removing unreachable block (ram,0x0001087501dc) */
/* WARNING: Removing unreachable block (ram,0x00010874f308) */
/* WARNING: Removing unreachable block (ram,0x000108750748) */
/* WARNING: Removing unreachable block (ram,0x000108750768) */
/* WARNING: Removing unreachable block (ram,0x00010875077c) */
/* WARNING: Removing unreachable block (ram,0x0001087501c0) */
/* WARNING: Removing unreachable block (ram,0x000108756d20) */
/* WARNING: Removing unreachable block (ram,0x000108756d24) */
/* WARNING: Removing unreachable block (ram,0x000108756d34) */
/* WARNING: Removing unreachable block (ram,0x000108756d48) */
/* WARNING: Removing unreachable block (ram,0x000108756d50) */
/* WARNING: Removing unreachable block (ram,0x000108756d54) */
/* WARNING: Removing unreachable block (ram,0x000108756d68) */
/* WARNING: Removing unreachable block (ram,0x000108756d5c) */
/* WARNING: Removing unreachable block (ram,0x000108756d70) */
/* WARNING: Removing unreachable block (ram,0x000108756d74) */
/* WARNING: Removing unreachable block (ram,0x000108756d88) */
/* WARNING: Removing unreachable block (ram,0x000108756d9c) */
/* WARNING: Removing unreachable block (ram,0x000108756da4) */
/* WARNING: Removing unreachable block (ram,0x000108756db0) */
/* WARNING: Removing unreachable block (ram,0x000108756dbc) */
/* WARNING: Removing unreachable block (ram,0x000108756dc0) */
/* WARNING: Removing unreachable block (ram,0x000108756df4) */
/* WARNING: Removing unreachable block (ram,0x000108756df8) */
/* WARNING: Removing unreachable block (ram,0x000108756e04) */
/* WARNING: Removing unreachable block (ram,0x000108756e50) */
/* WARNING: Removing unreachable block (ram,0x000108756d64) */
/* WARNING: Removing unreachable block (ram,0x000108757000) */
/* WARNING: Removing unreachable block (ram,0x000108757014) */
/* WARNING: Removing unreachable block (ram,0x000108757018) */
/* WARNING: Removing unreachable block (ram,0x000108757048) */
/* WARNING: Removing unreachable block (ram,0x00010874b318) */
/* WARNING: Removing unreachable block (ram,0x00010873e8d8) */
/* WARNING: Removing unreachable block (ram,0x00010873e904) */
/* WARNING: Removing unreachable block (ram,0x00010873e908) */
/* WARNING: Removing unreachable block (ram,0x00010873e910) */
/* WARNING: Removing unreachable block (ram,0x00010873e92c) */
/* WARNING: Removing unreachable block (ram,0x00010873e934) */
/* WARNING: Removing unreachable block (ram,0x00010873e940) */
/* WARNING: Removing unreachable block (ram,0x00010873e958) */
/* WARNING: Removing unreachable block (ram,0x00010873e960) */
/* WARNING: Removing unreachable block (ram,0x00010873e964) */
/* WARNING: Removing unreachable block (ram,0x00010873e978) */
/* WARNING: Removing unreachable block (ram,0x00010873e96c) */
/* WARNING: Removing unreachable block (ram,0x00010873e974) */
/* WARNING: Removing unreachable block (ram,0x00010873e980) */
/* WARNING: Removing unreachable block (ram,0x000108759b54) */
/* WARNING: Removing unreachable block (ram,0x00010874b950) */
/* WARNING: Removing unreachable block (ram,0x00010875776c) */
/* WARNING: Removing unreachable block (ram,0x000108759fc4) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_10873e498(code ******param_1,code *******param_2,code *******param_3,code *******param_4,
             code *******param_5,code *******param_6,undefined1 *param_7,code *******param_8,
             undefined8 param_9,code *******param_10,code *******param_11,code *******param_12,
             code *******param_13,code *******param_14,code *******param_15,code *******param_16,
             undefined8 param_17,ulong param_18,undefined8 param_19,code *******param_20,
             code *******param_21,code *param_22,undefined **param_23,ulong param_24,
             undefined8 param_25,code ******param_26,undefined8 param_27,undefined4 param_28,
             undefined1 param_29,undefined1 param_30)

{
  int iVar1;
  code ******ppppppcVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  code *pcVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  code *******pppppppcVar19;
  code *******pppppppcVar20;
  code *******pppppppcVar21;
  long lVar22;
  code *******pppppppcVar23;
  long *plVar24;
  undefined1 *puVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  undefined **ppuVar28;
  code *******pppppppcVar29;
  int iVar30;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  undefined4 uVar31;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  uint extraout_w8_12;
  uint extraout_w8_13;
  uint extraout_w8_14;
  undefined8 uVar32;
  code *******UNRECOVERED_JUMPTABLE;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  code ******extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  code ******extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long *extraout_x8_10;
  long extraout_x8_11;
  code *******pppppppcVar33;
  long extraout_x8_12;
  long extraout_x8_13;
  code ******ppppppcVar34;
  code ******extraout_x8_14;
  code ******extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  code *******extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  long *extraout_x8_22;
  long *extraout_x8_23;
  long *extraout_x8_24;
  code ******extraout_x8_25;
  long *extraout_x8_26;
  long *extraout_x8_27;
  long *extraout_x8_28;
  long *extraout_x8_29;
  long *plVar35;
  long *extraout_x8_30;
  long *extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  ulong extraout_x8_34;
  long *extraout_x8_35;
  long *extraout_x8_36;
  long *extraout_x8_37;
  long *extraout_x8_38;
  long *extraout_x8_39;
  long *extraout_x8_40;
  code *******extraout_x8_41;
  code *******extraout_x8_42;
  code *******pppppppcVar36;
  code *******pppppppcVar37;
  ulong uVar38;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  code *extraout_x9;
  long extraout_x9_00;
  code *******pppppppcVar39;
  code *******pppppppcVar40;
  ulong uVar41;
  code *****pppppcVar42;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  uint extraout_w10_14;
  uint extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  uint extraout_w10_18;
  uint extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  uint extraout_w10_22;
  uint extraout_w10_23;
  int extraout_w10_24;
  uint extraout_w10_25;
  uint extraout_w10_26;
  int extraout_w10_27;
  uint extraout_w10_28;
  uint extraout_w10_29;
  uint extraout_w10_30;
  uint extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  code *******pppppppcVar43;
  code *******extraout_x10;
  code *******extraout_x10_00;
  code ******ppppppcVar44;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  undefined8 *extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  ulong extraout_x11_11;
  ulong extraout_x11_12;
  ulong extraout_x11_13;
  ulong extraout_x11_14;
  ulong extraout_x11_15;
  ulong extraout_x11_16;
  ulong extraout_x11_17;
  ulong extraout_x11_18;
  ulong extraout_x11_19;
  ulong in_x14;
  int in_w15;
  undefined8 unaff_x19;
  code ******ppppppcVar45;
  code *******unaff_x20;
  code *******pppppppcVar46;
  uint uVar47;
  uint uVar48;
  code *******unaff_x21;
  code *******pppppppcVar49;
  code *******unaff_x22;
  int iVar50;
  code *******unaff_x23;
  code ******ppppppcVar51;
  code ******ppppppcVar52;
  long lVar53;
  code *******pppppppcVar54;
  code *******unaff_x24;
  code *******unaff_x25;
  code *******pppppppcVar55;
  code *******unaff_x26;
  code *******pppppppcVar56;
  code *******unaff_x27;
  code *******unaff_x28;
  code ******ppppppcVar57;
  undefined8 unaff_x29;
  code *******pppppppcVar58;
  undefined8 unaff_x30;
  code ******in_register_00005008;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 in_stack_000000b0;
  undefined1 in_stack_000000e8;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  ulong in_stack_00000188;
  undefined **in_stack_00000190;
  code *******in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 *in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  char in_stack_000001e8;
  char in_stack_00000248;
  char in_stack_000002a0;
  long in_stack_000002f0;
  undefined4 in_stack_00000320;
  uint in_stack_00000324;
  uint3 uVar105;
  uint in_stack_00000328;
  code *******in_stack_000008a0;
  char in_stack_000008af;
  undefined1 auStack_2f0 [64];
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  long lStack_298;
  long lStack_290;
  byte abStack_280 [8];
  undefined8 uStack_278;
  code *******pppppppcStack_270;
  undefined1 uStack_268;
  code ******appppppcStack_260 [38];
  undefined1 auStack_130 [72];
  undefined1 auStack_e8 [8];
  byte bStack_e0;
  undefined7 uStack_df;
  code ******ppppppcStack_d8;
  code ******ppppppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  code *******pppppppcStack_90;
  code *******pppppppcStack_80;
  undefined8 uStack_78;
  code *******pppppppcStack_70;
  code *******pppppppcVar106;
  
  pppppppcVar9 = (code *******)&pppppppcStack_80;
  pppppppcVar11 = (code *******)&pppppppcStack_80;
  pppppppcVar8 = (code *******)&pppppppcStack_80;
  pppppppcVar27 = (code *******)&pppppppcStack_80;
  pppppppcVar19 = (code *******)&pppppppcStack_80;
  pppppppcVar40 = (code *******)&stack0xfffffffffffffff0;
  pppppppcVar26 = param_2 + 4;
  pppppppcVar29 = param_2 + 0x81;
  pcVar7 = (code *)(param_2 + 0x8c);
  pppppppcVar21 = param_2 + 0xa0;
  pppppppcVar37 = param_2 + 0xae;
  pppppppcVar49 = param_2 + 0xb5;
  pppppppcVar33 = param_2 + 0xb6;
  pppppppcStack_70 = param_2 + 0xb4;
  bVar3 = *(byte *)(param_2 + 0xba);
  UNRECOVERED_JUMPTABLE = (code *******)(ulong)bVar3;
  pppppppcVar36 = param_2 + 0xb7;
  uStack_78 = pppppppcVar36;
  pppppppcVar39 = (code *******)&UNK_10df4c420;
  pppppppcVar43 =
       (code *******)
       ((ulong)*(ushort *)(&UNK_10df4c420 + (long)UNRECOVERED_JUMPTABLE * 2) * 4 + 0x10873e578);
  uVar47 = (uint)pppppppcVar29;
  pppppppcVar12 = (code *******)&pppppppcStack_80;
  pppppppcVar13 = (code *******)&pppppppcStack_80;
  pppppppcVar10 = (code *******)&pppppppcStack_80;
  bVar15 = (bool)in_ZR;
  pppppppcVar23 = param_2;
  pppppppcVar20 = param_2;
  ppuVar28 = (undefined **)param_3;
  pppppppcVar46 = pppppppcVar26;
  pppppppcVar54 = (code *******)pcVar7;
  pppppppcVar55 = unaff_x25;
  pppppppcVar56 = unaff_x26;
  pppppppcVar58 = pppppppcVar40;
  pppppppcVar106 = unaff_x27;
  switch(bVar3) {
  case 0:
    do {
      func_0x000107c28834(pppppppcVar29);
      func_0x00010873f6a0();
      func_0x00010873f5ac();
      ppppppcVar45 = param_2[0xb9];
code_r0x00010873e5a0:
      if ((*(byte *)((long)ppppppcVar45 + 0x169) & 1) != 0) goto code_r0x00010873eb40;
      if (ppppppcVar45[0x1e] == (code *****)0x0) {
        if (ppppppcVar45[0x21] != (code *****)0x0) {
          func_0x00010873f3e8();
          in_CY = extraout_w8_04 != 0;
          in_ZR = extraout_w8_04 == 1;
          func_0x00010873f454(pppppppcVar26,ppppppcVar45[0x24]);
          func_0x00010873f644();
          FUN_10873bb00();
          func_0x00010873f784(pppppppcVar26);
          func_0x00010873f6d0();
          func_0x000107c278b8(param_2 + 0xb1);
          func_0x00010873f878(pppppppcVar26,param_2 + 0xb1);
          ppppppcVar45 = param_2[0xb9];
          func_0x00010873f808();
          pppppcVar42 = ppppppcVar45[0x1f];
          func_0x000107c27994(pppppppcVar21,pppppcVar42 + 4);
          ppppppcVar45 = param_2[0xb9];
          func_0x00010873d88c(ppppppcVar45 + 0x1f,pppppcVar42);
          param_3 = pppppppcVar21;
          func_0x00010873f9c4(ppppppcVar45,pppppppcVar21);
          func_0x00010873facc();
          if (extraout_x8_06 == 0) {
            func_0x00010873f644();
            func_0x00010873f9b8();
            func_0x000107c27914(pppppppcVar21);
            pppppppcVar36 = pppppppcVar26;
            goto code_r0x00010873e868;
          }
          func_0x00010873f474();
          param_2[0x8f] = (code ******)0x0;
          param_2[0x8e] = (code ******)0x0;
          param_2[0x8d] = (code ******)0x0;
          func_0x00010873f428();
          param_2[0x8c] = extraout_x8_07;
          *(undefined4 *)(param_2 + 0x90) = 0x2a1;
          pppppppcVar21 = (code *******)pcVar7;
          func_0x00010873f644(pcVar7);
          FUN_10873bfb8();
          func_0x00010873f78c();
          func_0x000107c2884c(param_2 + 0x96,pppppppcVar21);
          param_3 = (code *******)(param_2[0xb9] + 0x24);
          func_0x00010873f448(pppppppcVar29,param_3,param_2 + 0x96);
          func_0x00010873f7f0();
          unaff_x30 = 0x10873e8d8;
          goto code_r0x0001005505e4;
        }
      }
      else {
        func_0x00010873f3e8();
        in_CY = extraout_w8_02 != 0;
        in_ZR = extraout_w8_02 == 1;
        func_0x00010873f454(pppppppcVar29,ppppppcVar45[0x24]);
        func_0x00010873f8fc();
        FUN_10873bb00();
        func_0x00010873f784(pppppppcVar29);
        func_0x00010873f6d0();
        func_0x000107c278b8(param_2 + 0xab);
        func_0x00010873f878(pppppppcVar29,param_2 + 0xab);
        ppppppcVar45 = param_2[0xb9];
        func_0x00010873f77c();
        pppppcVar42 = ppppppcVar45[0x1c];
        func_0x000107c27994(pppppppcVar37,pppppcVar42 + 4);
        param_3 = (code *******)param_2[0xb9];
        func_0x00010873d88c(param_3 + 0x1c,pppppcVar42);
        FUN_10873bbd0(pppppppcVar26,param_3,pppppppcVar37);
        if (((ulong)param_2[0x7e] & 1) == 0) {
          func_0x00010873f944();
          func_0x000107c27914(pppppppcVar37);
          pppppppcVar36 = pppppppcVar29;
code_r0x00010873e868:
          FUN_108681c34(pppppppcVar36);
        }
        else {
          func_0x00010873f474(param_2[0xb9][0x24],0x221);
          param_2[0xa3] = (code ******)0x0;
          param_2[0xa2] = (code ******)0x0;
          param_2[0xa1] = (code ******)0x0;
          func_0x00010873f428();
          param_2[0xa0] = extraout_x8_02;
          *(undefined4 *)(param_2 + 0xa4) = 0x2a1;
          pppppppcVar36 = pppppppcVar21;
          func_0x00010873f8fc(pppppppcVar21);
          FUN_10873bfb8();
          func_0x00010873f78c();
          func_0x000107c2884c(param_2 + 0x9b,pppppppcVar36);
          param_3 = (code *******)(param_2[0xb9] + 0x24);
          param_4 = param_2 + 0x9b;
          unaff_x26 = pppppppcVar33;
code_r0x00010873e68c:
          func_0x00010873f448(pcVar7,param_3,param_4);
          func_0x00010873f848();
          func_0x00010873f830();
          func_0x00010873fab8();
          (*extraout_x9)(unaff_x26);
          ppppppcVar45 = *unaff_x26;
          *pppppppcStack_70 = ppppppcVar45;
          param_3 = pppppppcStack_70;
          if (ppppppcVar45 != (code ******)0x0) {
            do {
              func_0x00010873f354();
            } while (extraout_w10_02 != 0);
          }
          ppppppcVar45 = param_2[0xb9] + 7;
          func_0x000107c2883c(pppppppcVar21);
          *pppppppcVar49 = *pppppppcVar21;
          do {
            func_0x00010873f354();
          } while (extraout_w10_03 != 0);
          func_0x00010873f4e4(*pppppppcVar49);
          if ((extraout_w8_03 >> 1 & 1) == 0) {
            *(undefined1 *)(param_2 + 0xba) = 1;
            ppppppcVar44 = *pppppppcVar49;
            func_0x00010873f314();
            pppppcVar42 = *ppppppcVar45;
            if (pppppcVar42 == (code *****)0x0) {
              func_0x000107c3a5c0();
              pppppcVar42 = *ppppppcVar45;
            }
            func_0x00010873fa94();
            plVar24 = extraout_x8_03;
            do {
              if (*plVar24 == 0) {
                func_0x00010873f3b8();
                plVar24 = extraout_x8_05;
                uVar47 = extraout_w10_05;
                uVar38 = extraout_x11_02;
              }
              else {
                func_0x00010873f5a0();
                plVar24 = extraout_x8_04;
                uVar47 = extraout_w10_04;
                uVar38 = extraout_x11_01;
              }
              if ((uVar38 & 1) != 0) goto code_r0x00010873eae0;
            } while ((uVar47 >> 1 & 1) == 0);
          }
code_r0x00010873e740:
          pppppppcVar36 = pppppppcStack_70;
          func_0x000107c28834(pppppppcVar49);
          func_0x00010873f5cc();
          func_0x00010873f744();
          func_0x000107c27f9c(pppppppcVar36);
          func_0x000107c27f9c(pppppppcVar33);
          func_0x000107c28b40(pcVar7);
          in_CY = *(char *)(param_2 + 0x80) != '\0';
          in_ZR = *(char *)(param_2 + 0x80) == '\x01';
          if ((bool)in_ZR) {
            ppppppcVar44 = param_2[0x7f];
            ppppppcVar45 = param_2[0xb9] + 0x17;
            FUN_10869f01c(ppppppcVar45,pppppppcVar37);
            *ppppppcVar45 = (code *****)ppppppcVar44;
          }
          func_0x00010873f6d0();
          func_0x000107c278b8(param_2 + 0xa5);
          param_3 = param_2 + 0xa5;
          func_0x00010873f810(pppppppcVar29,param_3);
          func_0x00010873f818();
          func_0x00010873f944();
          pppppppcVar36 = pppppppcVar37;
          pppppppcVar39 = pppppppcVar29;
code_r0x00010873e9d4:
          func_0x000107c27914(pppppppcVar36);
          FUN_108681c34(pppppppcVar39);
          ppppppcVar45 = param_2[0xb9];
          if ((ppppppcVar45[0x1e] != (code *****)0x0) || (ppppppcVar45[0x21] != (code *****)0x0)) {
            pppppcVar42 = ppppppcVar45[9];
            func_0x000107c288a8(param_2 + 0x82,ppppppcVar45 + 7);
            param_2[5] = param_2[0x82];
            param_2[0x82] = (code ******)0x0;
            FUN_10873d9f0(pcVar7,pppppppcVar26,pppppcVar42);
            func_0x000107c288ac(param_2 + 5);
            func_0x000107c288ac(param_2 + 0x82);
            param_2[0xb8] = param_2[0x8c];
            if (param_2[0x8c] != (code ******)0x0) {
              do {
                func_0x00010873f354();
              } while (extraout_w10_06 != 0);
            }
            ppppppcVar45 = param_2[0xb9] + 7;
            param_3 = param_2 + 0xb8;
            func_0x000107c2883c(pppppppcVar29,ppppppcVar45,param_3);
            *pppppppcVar26 = *pppppppcVar29;
            do {
              func_0x00010873f354();
            } while (extraout_w10_07 != 0);
            func_0x00010873f4e4(*pppppppcVar26);
            if ((extraout_w8_05 >> 1 & 1) == 0) {
              *(undefined1 *)(param_2 + 0xba) = 3;
              ppppppcVar44 = *pppppppcVar26;
              func_0x00010873f314();
              pppppcVar42 = *ppppppcVar45;
              if (pppppcVar42 == (code *****)0x0) {
                func_0x000107c3a5c0();
                pppppcVar42 = *ppppppcVar45;
              }
              func_0x00010873fa94();
              plVar24 = extraout_x8_08;
              do {
                if (*plVar24 == 0) {
                  func_0x00010873f3b8();
                  plVar24 = extraout_x8_10;
                  uVar47 = extraout_w10_09;
                  uVar38 = extraout_x11_04;
                }
                else {
                  func_0x00010873f5a0();
                  plVar24 = extraout_x8_09;
                  uVar47 = extraout_w10_08;
                  uVar38 = extraout_x11_03;
                }
                if ((uVar38 & 1) != 0) goto code_r0x00010873eae0;
              } while ((uVar47 >> 1 & 1) == 0);
            }
code_r0x00010873eac4:
            func_0x000107c28834(pppppppcVar26);
            func_0x00010873f5ac();
            func_0x00010873f6a0();
            func_0x00010873f9a0();
            func_0x00010873f734();
          }
        }
      }
      ppppppcVar45 = param_2[0xb9];
      if ((*(byte *)((long)ppppppcVar45 + 0x172) & 1) == 0) goto code_r0x00010873e590;
      FUN_10873b924(pppppppcVar26);
      *pppppppcVar29 = *pppppppcVar26;
      do {
        func_0x00010873f354();
      } while (extraout_w10 != 0);
      func_0x00010873f4e4(*pppppppcVar29);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(param_2 + 0xba) = 0;
        ppppppcVar44 = *pppppppcVar29;
        func_0x00010873f314();
        pppppcVar42 = *ppppppcVar45;
        if (pppppcVar42 == (code *****)0x0) {
          func_0x000107c3a5c0();
          pppppcVar42 = *ppppppcVar45;
        }
        func_0x00010873fa94();
        plVar24 = extraout_x8;
        do {
          if (*plVar24 == 0) {
            func_0x00010873f3b8();
            plVar24 = extraout_x8_01;
            uVar47 = extraout_w10_01;
            uVar38 = extraout_x11_00;
          }
          else {
            func_0x00010873f5a0();
            plVar24 = extraout_x8_00;
            uVar47 = extraout_w10_00;
            uVar38 = extraout_x11;
          }
          if ((uVar38 & 1) != 0) {
code_r0x00010873eae0:
            func_0x00010873f438();
            if ((bool)in_ZR) {
              func_0x00010873f378();
              uVar14 = extraout_w8;
              if ((bool)in_CY) {
                uVar14 = extraout_w9;
              }
              func_0x00010873f464();
              *(undefined1 *)ppppppcVar45 = uVar14;
              func_0x00010873f364(0);
              ppppppcVar44[0x12] = (code *****)ppppppcVar45;
            }
            func_0x00010873f418();
            *(code ******)(extraout_x8_11 + 0x20) = pppppcVar42;
            func_0x00010873f3a8(ppppppcVar44[0x12]);
            ppppppcVar44[2] = (code *****)0x0;
            auVar67._8_8_ = param_3;
            auVar67._0_8_ = ppppppcVar45;
            return auVar67;
          }
        } while ((uVar47 >> 1 & 1) == 0);
      }
    } while( true );
  case 1:
    goto code_r0x00010873e740;
  case 2:
    func_0x000107c28834(pppppppcVar37);
    func_0x000107c27f9c(pppppppcVar37);
    func_0x00010873f5cc();
    func_0x000107c27f9c(pppppppcVar36);
    func_0x00010873f734();
    func_0x000107c28b40(pppppppcVar29);
    func_0x00010873f6d0();
    func_0x000107c278b8(param_2 + 0xa8);
    param_3 = param_2 + 0xa8;
    func_0x00010873f810(pppppppcVar26,param_3);
    func_0x00010873f7dc();
    pppppppcVar36 = pppppppcVar21;
    pppppppcVar39 = pppppppcVar26;
    goto code_r0x00010873e9d4;
  case 3:
    goto code_r0x00010873eac4;
  case 4:
    pppppppcVar40 = param_2 + 9;
    func_0x000107c28870();
    ppppppcVar45 = *pppppppcVar40;
    func_0x0001087454e0();
    pppppppcVar40 = param_2 + 10;
    func_0x000107c27f9c();
    if (ppppppcVar45 == (code ******)0x1) {
      func_0x000108745534(param_2[8]);
      if ((extraout_w8_07 >> 5 & 1) == 0) {
        puVar16 = (undefined8 *)0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE()
        ;
        *puVar16 = &PTR_FUN_110a6a618;
        func_0x000108745788();
        ___cxa_throw(puVar16);
      }
      else {
        func_0x000108745570(param_2[8],param_2 + 0xb);
        __ZSt17rethrow_exceptionSt13exception_ptr(param_2 + 0xb);
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x108744b5c);
      (*pcVar7)();
    }
    param_2[9] = *pppppppcVar26;
    uVar14 = 0;
    do {
      func_0x000108745398();
    } while (extraout_w10_13 != 0);
    func_0x000108745534(param_2[9]);
    if ((extraout_w8_06 >> 1 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xc) = 1;
      func_0x000108745660();
      ppppppcVar44 = *pppppppcVar40;
      if (ppppppcVar44 == (code ******)0x0) {
        func_0x000107c3a5c0();
        ppppppcVar44 = *pppppppcVar40;
      }
      ppppppcVar34 = ppppppcVar45 + 2;
      do {
        if (*ppppppcVar34 == (code *****)0x0) {
          func_0x0001087453d8();
          ppppppcVar34 = extraout_x8_15;
          uVar47 = extraout_w10_15;
          uVar38 = extraout_x11_07;
        }
        else {
          func_0x0001087455e8();
          ppppppcVar34 = extraout_x8_14;
          uVar47 = extraout_w10_14;
          uVar38 = extraout_x11_06;
        }
        if ((uVar38 & 1) != 0) {
          pppppcVar42 = ppppppcVar45[0x12];
          func_0x000108745680();
          if ((bool)uVar14) {
            func_0x000108745408();
            func_0x0001087453f0();
            func_0x000108745454();
            pppppcVar42[1] = (code ****)pppppppcVar40;
            ppppppcVar45[0x12] = (code *****)pppppppcVar40;
          }
          func_0x000108745690();
          *(code *******)(extraout_x8_16 + 0x20) = ppppppcVar44;
          func_0x0001087454f0(ppppppcVar45[0x12]);
          ppppppcVar45[2] = (code *****)0x0;
          goto LAB_108744af0;
        }
      } while ((uVar47 >> 1 & 1) == 0);
    }
    FUN_108743d18(param_2 + 9);
    ppppppcVar45 = param_2[3];
    do {
      pppppppcStack_70 = (code *******)0x0;
      ppppppcVar44 = ppppppcVar45 + 2;
      param_3 = (code *******)&pppppppcStack_70;
      func_0x0001087453a8(ppppppcVar44,param_3);
      if ((int)ppppppcVar44 != 0) {
        FUN_10874463c(ppppppcVar45 + 0x13);
        func_0x000108745738();
        *(undefined1 *)(ppppppcVar45 + 0x1c) = 1;
        ppppppcVar45[2] = (code *****)0x2;
        param_3 = param_2 + 3;
        func_0x000107c31508(ppppppcVar45,param_3);
        break;
      }
    } while (((uint)pppppppcStack_70 >> 1 & 1) == 0);
    pppppppcVar40 = param_2 + 3;
    func_0x000108745478(pppppppcVar40);
    func_0x0001087454e0();
    func_0x0001087453e8();
    func_0x000108745590();
    func_0x000108745638();
    func_0x000108745614();
    func_0x000108745418();
LAB_108744af0:
    auVar69._8_8_ = param_3;
    auVar69._0_8_ = pppppppcVar40;
    return auVar69;
  case 5:
    while( true ) {
      func_0x000108745758();
      pppppppcVar29 = pppppppcVar29 + 1;
      if (pppppppcVar29 == pppppppcVar37) break;
      ppppppcVar45 = *pppppppcVar29;
      FUN_108742ee0(&stack0xffffffffffffffe0,ppppppcVar45[6]);
      if ((int)pppppppcVar26 != 0) {
        pppppppcVar21 = (code *******)ppppppcVar45[6];
        pppppppcVar40 = unaff_x25;
        if (pppppppcVar21 != (code *******)0x0) {
          pppppppcVar40 = pppppppcVar21;
        }
        lVar22 = 8;
        for (uVar38 = (ulong)(*(uint *)(pppppppcVar40 + 4) &
                             ((int)*(uint *)(pppppppcVar40 + 4) >> 0x1f ^ 0xffffffffU)); uVar38 != 0
            ; uVar38 = uVar38 - 1) {
          ppppppcVar45 = pppppppcVar40[3];
          pppppppcVar21 = pppppppcVar40 + 3;
          if (((ulong)ppppppcVar45 & 1) != 0) {
            pppppppcVar21 = (code *******)((long)ppppppcVar45 + lVar22 + -1);
          }
          if (*(int *)(*pppppppcVar21 + 7) == 1) {
            pppppcVar42 = (*pppppppcVar21)[6];
            uVar47 = *(uint *)(pppppcVar42 + 2);
            if ((uVar47 >> 5 & 1) == 0) {
              if (((uVar47 >> 4 & 1) == 0) && ((uVar47 >> 3 & 1) == 0)) break;
            }
            else {
              iVar50 = *(int *)(pppppcVar42[8] + 2);
              if (iVar50 != 1 && iVar50 != 4) break;
            }
          }
          lVar22 = lVar22 + 8;
        }
      }
      param_3 = (code *******)pcVar7;
      FUN_1087430a4(&pppppppcStack_90,pcVar7,&stack0xffffffffffffffe0,&stack0xffffffffffffffb0);
      pcVar7 = (code *)(ulong)((int)pcVar7 + 1);
    }
    if (unaff_x23 == unaff_x22) {
      param_3 = (code *******)0x61021a;
      FUN_108742e90(param_2[0xa3],0x61021a);
    }
    pppppppcVar40 = pppppppcStack_80;
    func_0x00010874579c();
    ppppppcVar45 = (code ******)&param_14;
    FUN_1088bfa34(ppppppcVar45);
    *param_2 = (code ******)0x0;
    param_2[1] = (code ******)0x0;
    uStack_78 = param_2 + 2;
    *uStack_78 = (code ******)0x0;
    do {
      if (unaff_x23 == unaff_x22) {
        func_0x0001087456c4();
        auVar68._8_8_ = param_3;
        auVar68._0_8_ = ppppppcVar45;
        return auVar68;
      }
      iVar50 = (int)pcVar7;
      if (*(char *)((long)unaff_x23 + 100) == '\x01') {
        uVar47 = iVar50 + 7;
        if (*(int *)(unaff_x23 + 0xc) != 0) {
          uVar47 = iVar50 + 8;
        }
        param_3 = (code *******)(ulong)uVar47;
        ppppppcVar45 = param_2[0xa3];
        FUN_108742e90(ppppppcVar45,param_3);
      }
      else {
        param_3 = (code *******)0x610218;
        if (((ulong)unaff_x23[0xb] & 1) == 0) {
LAB_108742980:
          ppppppcVar45 = param_2[0xa3];
          FUN_108742e90(ppppppcVar45,param_3);
        }
        else {
          if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
            if (unaff_x23[1] == (code ******)0x0) goto LAB_10874297c;
          }
          else if (*(char *)((long)unaff_x23 + 0x17) == '\0') {
LAB_10874297c:
            param_3 = (code *******)(ulong)(iVar50 + 1);
            goto LAB_108742980;
          }
          func_0x000107c29e2c(&stack0xffffffffffffffe0,pppppppcVar40 + 10);
          func_0x00010727f9a8(&stack0xffffffffffffffb0,&stack0xffffffffffffffe0,"");
          func_0x000107c279a4(&stack0xffffffffffffffe0);
          pppppppcVar33 = (code *******)((ulong)pppppppcVar33 & 0xffffffffffffff00);
          bVar15 = false;
          if (*(char *)(pppppppcStack_70 + 1) == '\x01') {
            pppppppcVar33 = (code *******)*pppppppcStack_70;
            if (pppppppcVar33 != (code *******)0x0) {
              do {
                func_0x000108745398();
              } while (extraout_w10_10 != 0);
            }
            bVar15 = true;
          }
          ppppppcVar45 = param_2[0xa1];
          (*(code *)(*ppppppcVar45)[3])(ppppppcVar45,unaff_x23);
          if ((int)ppppppcVar45 == 0) {
            func_0x0001072d2e68(param_2 + 0xad);
            ppppppcVar45 = param_2[0xab];
            (*(code *)(*ppppppcVar45)[2])();
            uVar31 = 3;
            if ((int)ppppppcVar45 != 1) {
              uVar31 = 4;
            }
            ppppppcVar45 = param_2[0xa1];
            func_0x0001087456a0();
            if (extraout_x8_12 == 0) {
              func_0x000107c278b8(&pppppppcStack_90,"");
            }
            else {
              pcVar7 = (code *)unaff_x23[4];
              func_0x000107c27e5c();
              param_11 = (code *******)0x0;
              param_10 = (code *******)pcVar7;
              func_0x000107c2793c(&UNK_10f4b2b5b);
              func_0x000107c3173c(&pppppppcStack_90);
            }
            uStack_78 = (code *******)CONCAT44(uStack_78._4_4_,uVar31);
            (*(code *)(*ppppppcVar45)[2])
                      (&param_14,ppppppcVar45,unaff_x23,&pppppppcStack_a0,&pppppppcStack_90,
                       unaff_x23 + 5);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppcStack_90);
            puVar16 = &param_14;
            param_27 = param_17;
            param_26 = (code ******)param_16;
            param_16 = (code *******)0x0;
            param_17 = 0;
            pppppppcStack_a0 = (code *******)((ulong)pppppppcStack_a0 & 0xffffffffffffff00);
            uVar38 = (ulong)pppppppcStack_98 >> 8;
            pppppppcStack_98 = (code *******)((ulong)pppppppcStack_98 & 0xffffffffffffff00);
            if (bVar15) {
              pppppppcStack_98 = (code *******)CONCAT71((int7)uVar38,1);
              pppppppcStack_a0 = pppppppcVar33;
              pppppppcVar33 = (code *******)0x0;
            }
            if (param_15 != (code *******)0x0) {
              do {
                func_0x000108745514();
                puVar16 = extraout_x11_05;
              } while (extraout_w10_11 != 0);
            }
            pppppppcStack_b0 = (code *******)0x0;
            pppppppcStack_a8 = (code *******)0x0;
            ppppppcVar45 = param_2[0xa4];
            ppppppcVar44 = param_2[0xa3];
            puVar16[7] = param_2[0xa4];
            puVar16[6] = ppppppcVar44;
            func_0x00010874579c(ppppppcVar45);
            if (extraout_x8_13 != 0) {
              do {
                func_0x000108745514();
              } while (extraout_w10_12 != 0);
            }
            param_3 = (code *******)&pppppppcStack_a0;
            FUN_108743440(&stack0xffffffffffffffa8,&pppppppcStack_90,param_3,
                          &stack0xffffffffffffffe0,&uStack_c0);
            func_0x000107c288a4(&uStack_c0);
            FUN_108743ab4(&stack0xffffffffffffffe0);
            func_0x000108744d14(&pppppppcStack_b0);
            func_0x000108740e88(&pppppppcStack_a0);
            func_0x0001052a4560(&pppppppcStack_90);
            func_0x000108744c70(&param_14);
          }
          else {
            func_0x00010874560c(param_2[0xa3],0x224);
            param_10 = (code *******)0x0;
            param_11 = (code *******)0x0;
            FUN_108744338(&param_14);
            param_3 = (code *******)&param_15;
            FUN_10874472c(param_15,param_3,&stack0xffffffffffffffe0);
            unaff_x27 = param_14;
            param_14 = (code *******)0x0;
            func_0x000107c27fec(&param_14);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      (&stack0xfffffffffffffff0);
            func_0x00010874579c();
          }
          ppppppcVar45 = param_2[1];
          if (ppppppcVar45 < param_2[2]) {
            ppppppcVar44 = ppppppcVar45 + 1;
            *ppppppcVar45 = (code *****)unaff_x27;
          }
          else {
            ppppppcVar44 = *param_2;
            lVar18 = (long)ppppppcVar45 - (long)ppppppcVar44;
            lVar22 = lVar18 >> 3;
            pppppppcVar40 = (code *******)(lVar22 + 1);
            if ((ulong)pppppppcVar40 >> 0x3d != 0) {
              FUN_108740fac();
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x108742dbc);
              (*pcVar7)();
            }
            uVar38 = (long)param_2[2] - (long)ppppppcVar44;
            param_3 = (code *******)((long)uVar38 >> 2);
            if (param_3 <= pppppppcVar40) {
              param_3 = pppppppcVar40;
            }
            if (0x7ffffffffffffff7 < uVar38) {
              param_3 = (code *******)0x1fffffffffffffff;
            }
            if (param_3 == (code *******)0x0) {
              pppppppcVar26 = (code *******)0x0;
              pppppppcVar29 = (code *******)0x0;
            }
            else {
              pppppppcVar26 = uStack_78;
              FUN_108740fc0();
              ppppppcVar44 = *param_2;
              ppppppcVar45 = param_2[1];
              lVar22 = (long)ppppppcVar45 - (long)ppppppcVar44 >> 3;
              pppppppcVar29 = param_3;
            }
            pppppppcVar40 = pppppppcStack_80;
            puVar16 = (undefined8 *)((long)pppppppcVar26 + lVar18);
            *puVar16 = unaff_x27;
            pcVar7 = (code *)(puVar16 + -lVar22);
            pppppppcVar21 = (code *******)((long)pppppppcVar26 + lVar18 + lVar22 * -8);
            param_14 = (code *******)pcVar7;
            for (ppppppcVar34 = ppppppcVar44; pppppppcVar37 = pppppppcVar21 + 1,
                pppppppcStack_90 = (code *******)pcVar7, ppppppcVar34 != ppppppcVar45;
                ppppppcVar34 = ppppppcVar34 + 1) {
              *pppppppcVar21 = (code ******)*ppppppcVar34;
              *ppppppcVar34 = (code *****)0x0;
              pppppppcVar21 = pppppppcVar37;
              param_14 = pppppppcVar37;
            }
            for (; ppppppcVar44 != ppppppcVar45; ppppppcVar44 = ppppppcVar44 + 1) {
              func_0x000107c27f9c();
            }
            ppppppcVar44 = (code ******)(puVar16 + 1);
            FUN_108741000(&stack0xffffffffffffffe0);
            ppppppcVar45 = *param_2;
            *param_2 = (code ******)pcVar7;
            param_2[1] = ppppppcVar44;
            param_2[2] = (code ******)(pppppppcVar26 + (long)pppppppcVar29);
            if (ppppppcVar45 != (code ******)0x0) {
              __ZdlPv();
            }
            func_0x00010874579c();
          }
          unaff_x27 = (code *******)0x0;
          param_2[1] = ppppppcVar44;
          func_0x000107c27f9c(&stack0xffffffffffffffa8);
          ppppppcVar45 = (code ******)&stack0xffffffffffffff98;
          func_0x000108740e88(ppppppcVar45);
          func_0x0001087455a0();
        }
      }
      unaff_x23 = unaff_x23 + 0xd;
    } while( true );
  case 6:
  case 0x1d:
  case 0x32:
  case 0x8a:
    param_18 = param_18 & 0xffffffffffff0000;
    param_15 = (code *******)0x0;
    param_14 = (code *******)0x0;
    param_16 = (code *******)0x0;
    param_13 = (code *******)0x0;
    param_12 = (code *******)0x0;
    ppppppcVar44 = param_4[0xf];
    ppppppcVar57 = param_4[0x10];
    ppppppcVar34 = param_4[0x11];
    ppppppcVar2 = param_4[0x12];
    FUN_10874737c(param_4,param_5);
    ppppppcVar45 = *param_6;
    ppppppcVar51 = param_6[1];
    lVar22 = (long)ppppppcVar51 - (long)ppppppcVar45;
    for (; ppppppcVar52 = ppppppcVar51, ppppppcVar45 != ppppppcVar51;
        ppppppcVar45 = ppppppcVar45 + 0x35) {
      pppppppcVar40 = param_4;
      FUN_108752af8(param_4,ppppppcVar45);
      if (((ulong)pppppppcVar40 & 1) == 0) goto LAB_10874b728;
      lVar22 = lVar22 + -0x1a8;
    }
    goto LAB_10874b7f0;
  case 7:
  case 0x1e:
  case 0x33:
  case 0x8b:
    goto code_r0x000108759f44;
  default:
    iVar30 = (int)param_5;
    iVar50 = 2;
    if (iVar30 != 4) {
      iVar50 = iVar30;
    }
    iVar1 = 0;
    if (iVar30 != 3) {
      iVar1 = iVar50;
    }
    switch(iVar30) {
    case 1:
    case 2:
      if ((iVar1 - 1U < 2) || (iVar1 != 5)) {
code_r0x0001005ef790:
        ppppppcVar44 = *param_3;
        ppppppcVar45 = *param_2;
        goto code_r0x0001005ef798;
      }
      break;
    case 3:
      if ((iVar1 - 1U < 2) || (iVar1 == 5)) break;
      ppppppcVar44 = *param_3;
      ppppppcVar45 = *param_2;
      goto code_r0x0001005ef7b8;
    case 4:
    case 5:
      break;
    default:
      if (iVar1 - 1U < 2) goto code_r0x0001005ef790;
      if (iVar1 == 5) break;
      ppppppcVar44 = *param_3;
      ppppppcVar45 = *param_2;
code_r0x0001005ef798:
      if (ppppppcVar45 != ppppppcVar44) goto code_r0x0001005ef7dc;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar15) {
        *param_2 = (code ******)param_4;
        cVar4 = ExclusiveMonitorsStatus();
      }
      goto code_r0x0001005ef7c4;
    }
    ppppppcVar44 = *param_3;
    ppppppcVar45 = *param_2;
code_r0x0001005ef7b8:
    if (ppppppcVar45 == ppppppcVar44) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar15) {
        *param_2 = (code ******)param_4;
        cVar4 = ExclusiveMonitorsStatus();
      }
code_r0x0001005ef7c4:
      if (cVar4 == '\0') {
        auVar63._8_8_ = param_3;
        auVar63._0_8_ = 1;
        return auVar63;
      }
    }
    else {
code_r0x0001005ef7dc:
      ClearExclusiveLocal();
    }
    *param_3 = ppppppcVar45;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_3;
    return auVar5 << 0x40;
  case 9:
  case 0x20:
  case 0x8d:
    do {
      while( true ) {
        if (((uint)pppppppcVar43 >> 1 & 1) != 0) {
          pppppppcVar23 = param_2 + 5;
          FUN_10872f9ec();
          func_0x00010875a844();
          goto LAB_108759a6c;
        }
        if (*UNRECOVERED_JUMPTABLE == (code ******)0x0) break;
        func_0x00010875a894();
        UNRECOVERED_JUMPTABLE = extraout_x8_41;
        pppppppcVar43 = extraout_x10;
        if ((extraout_x11_18 & 1) != 0) goto LAB_108759acc;
      }
      func_0x00010875a75c();
      UNRECOVERED_JUMPTABLE = extraout_x8_42;
      pppppppcVar43 = extraout_x10_00;
    } while ((extraout_x11_19 & 1) == 0);
LAB_108759acc:
    func_0x00010875a7d0();
    if ((bool)in_ZR) {
      func_0x00010875a76c();
      func_0x00010875a6c8();
      func_0x00010875a700();
    }
    func_0x00010875a69c();
    goto LAB_10875a7b4;
  case 10:
  case 0x21:
  case 0x8e:
    goto LAB_10875b30c;
  case 0xb:
  case 0x22:
  case 0x8f:
    do {
      FUN_1088460dc(UNRECOVERED_JUMPTABLE,pppppppcVar23,param_3,param_4,param_5,param_6,param_7);
code_r0x000108756b48:
      FUN_1086d6ea8(unaff_x28,&stack0x00000190);
      func_0x000107c288d0(&stack0x00000190);
      do {
        do {
          func_0x000107c29158(pppppppcVar37);
          pppppppcVar39 = pppppppcVar33;
LAB_108756ac0:
          pppppppcVar33 = pppppppcVar39;
          if (((ulong)param_2[0x7c] & 1) == 0) {
code_r0x000108756ac8:
            if ((in_stack_00000188 & 1) != 0) goto LAB_108756ad0;
LAB_108756b68:
            func_0x00010875aadc();
            func_0x000107c288c8(param_2 + 0x42);
            func_0x000107c29150(pppppppcVar29);
            func_0x000107c316d0(pcVar7);
            func_0x000107c316c8(&stack0xffffffffffffffb0,&UNK_10f4ba030);
            in_stack_00000190 = &PTR_FUN_110a6ac38;
            in_stack_000001a8 = &stack0x00000190;
            in_stack_00000198 = unaff_x28;
            FUN_1087055dc(param_2[0xca],&stack0xffffffffffffffa8,&stack0x00000190);
            FUN_108706e6c(&stack0x00000190);
            func_0x000107c316d0(&stack0xffffffffffffffb0);
            ppppppcVar45 = param_2[0xce];
            func_0x00010875a8c8();
            in_stack_000001b0 = CONCAT44(in_stack_000001b0._4_4_,0x1f6);
            func_0x000107c278b8(param_2 + 0x89,&UNK_10f4b2029);
            lVar22 = ((long)param_2[0x87] - (long)param_2[0x86]) / 0x3d0;
            func_0x000107c28af4(lVar22);
            puVar16 = &stack0x00000190;
            func_0x000107c28824(puVar16,param_2 + 0x89,lVar22);
            func_0x00010875a81c();
            (*(code *)(*ppppppcVar45)[3])(ppppppcVar45,puVar16,&stack0xffffffffffffffb0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x89);
            func_0x00010875a824();
            *pppppppcVar21 = (code ******)0x0;
            pppppppcVar21[1] = (code ******)0x0;
            pppppppcVar21[2] = (code ******)0x0;
            if ((long)param_2[0x87] - (long)param_2[0x86] != 0) {
              uVar38 = ((long)param_2[0x87] - (long)param_2[0x86]) / 0x3d0;
              if (0xf0f0f0f0f0f0f0 < uVar38) goto LAB_1087570a4;
              func_0x000108757e10(pppppppcVar37,uVar38,0,param_2 + 0x8e);
              FUN_108757d34(pppppppcVar21,pppppppcVar37);
              func_0x000108757f54(pppppppcVar37);
            }
            param_2[0x82] = (code ******)0x0;
            *pppppppcVar29 = (code ******)0x0;
            param_2[0x84] = (code ******)0x0;
            param_2[0x83] = (code ******)0x0;
            *(undefined4 *)(param_2 + 8) = 0x3f800000;
            *(undefined4 *)(param_2 + 9) = 0;
            func_0x000107c316c8(pppppppcVar37,&UNK_10f4ba043);
            (*(code *)(*param_2[0xcc])[7])
                      (param_2 + 0x97,param_2[0xcc],unaff_x28,1,
                       *(undefined4 *)((long)param_2 + 0x68c));
            pppppppcVar40 = pppppppcStack_70;
            pppppppcVar23 = param_2 + 0xbc;
            param_3 = param_2 + 0x97;
            FUN_108757418(pppppppcStack_70,pppppppcVar23,param_3);
            ppppppcVar45 = *pppppppcVar40;
            *pppppppcVar33 = ppppppcVar45;
            UNRECOVERED_JUMPTABLE = (code *******)(ppppppcVar45 + 1);
            goto SUB_10875a72c;
          }
LAB_108756ad0:
          if ((code *******)*pppppppcVar37 == unaff_x26) goto LAB_108756b68;
          unaff_x25 = pppppppcVar37;
          func_0x000107c29060();
          pppppppcVar40 = unaff_x25;
          func_0x0001086a74d4();
        } while (((ulong)pppppppcVar40 & 1) != 0);
        pppppppcVar39 = (code *******)(ulong)*(uint *)(unaff_x25 + 0x39);
        in_ZR = *(char *)((long)unaff_x25 + 0x1cc) == '\x01';
code_r0x000108756b00:
        bVar15 = false;
        if ((bool)in_ZR) {
          bVar15 = (int)pppppppcVar39 == 3;
        }
code_r0x000108756b04:
      } while (bVar15);
      if (*(char *)(unaff_x25 + 0x2a) == '\x01') {
        UNRECOVERED_JUMPTABLE = (code *******)unaff_x25[0x29];
code_r0x000108756b18:
        param_5 = (code *******)((long)UNRECOVERED_JUMPTABLE * (long)pppppppcVar26);
      }
      else {
        param_5 = (code *******)0x0;
      }
      UNRECOVERED_JUMPTABLE = (code *******)&stack0x00000190;
      unaff_x27 = (code *******)((ulong)unaff_x27 & 0xffffffff00000000 | 2);
code_r0x000108756b30:
      param_4 = unaff_x27;
      pppppppcVar23 = unaff_x25;
      param_6 = pppppppcVar23 + 3;
      param_3 = (code *******)0x0;
      unaff_x27 = param_4;
code_r0x000108756b40:
      param_7 = (undefined1 *)0x0;
    } while( true );
  case 0xd:
  case 0x24:
  case 0x5d:
  case 0x91:
    if (pppppppcVar37 <= pppppppcVar43) {
      uVar38 = 0;
      if (pppppppcVar37 != (code *******)0x0) {
        uVar38 = (ulong)pppppppcVar43 / (ulong)pppppppcVar37;
      }
      pppppppcVar43 = (code *******)((long)pppppppcVar43 - uVar38 * (long)pppppppcVar37);
    }
    if (pppppppcVar43 != (code *******)&UNK_10df4c420) {
      (*param_2)[(long)pppppppcVar43] = (code *****)pppppppcVar26;
    }
    goto LAB_108758368;
  case 0xf:
  case 0x26:
code_r0x000108757aac:
    *(int *)(unaff_x26 + 0x18) = (int)UNRECOVERED_JUMPTABLE;
    do {
      FUN_1086373b4(&stack0x000002e0);
      FUN_10862b094(&stack0x000001a0);
      puVar16 = &stack0x000001c0;
LAB_108757ad4:
      func_0x000107c316d0(puVar16);
      while( true ) {
        func_0x000107c27994(&stack0x000001c0,pcVar7);
        unaff_x27 = *(code ********)((long)pcVar7 + 0x20);
        FUN_1087586a4(&param_30,&stack0x000001d8);
        param_2[0xda] = param_2[0xba];
        param_2[0xd9] = param_2[0xb9];
        in_stack_000001c0 = 0;
code_r0x000108757b08:
        in_stack_000001c8 = 0;
        in_stack_000001d0 = 0;
code_r0x000108757b10:
        pppppppcVar23 = (code *******)&stack0x000002e0;
code_r0x000108757b14:
        func_0x0001086375b0(pppppppcVar23,&param_30);
        pppppppcVar23 = (code *******)&uStack_78;
        param_3 = (code *******)&stack0x000002c0;
        param_6 = (code *******)&stack0x000002e0;
code_r0x000108757b28:
        param_4 = unaff_x27;
code_r0x000108757b2c:
        param_5 = (code *******)0x0;
code_r0x000108757b30:
        param_7 = (undefined1 *)0x0;
        param_8 = (code *******)0x0;
code_r0x000108757b38:
        FUN_108637540(pppppppcVar23,param_3,param_4,param_5,param_6,param_7,param_8,0);
code_r0x000108757b40:
        func_0x0001086375e4(&stack0x000002e0);
code_r0x000108757b48:
        func_0x00010875aac0();
code_r0x000108757b4c:
        pppppppcVar23 = (code *******)&param_30;
        pppppppcVar54 = (code *******)pcVar7;
code_r0x000108757b50:
        func_0x0001086375e4(pppppppcVar23);
        func_0x000107c27914(&stack0x000001c0);
        FUN_1086a7340(pppppppcVar54,param_2 + 0x82,param_2 + 0x85);
        if (*(char *)(pppppppcVar54 + 0x57) == '\x01') {
          param_26 = pppppppcVar54[0x56];
          param_27 = CONCAT71(param_27._1_7_,1);
        }
        if (*(char *)((long)pppppppcVar54 + 0x34c) == '\x01') {
          param_28 = *(undefined4 *)(pppppppcVar54 + 0x69);
          param_29 = 1;
        }
        func_0x0001086375e4(&stack0x000001d8);
        func_0x000107c316d0(&stack0x000002a8);
        ppppppcVar45 = param_2[5];
        if (ppppppcVar45 < param_2[6]) {
          puVar16 = &uStack_78;
          func_0x000108757e9c(ppppppcVar45,puVar16);
          ppppppcVar45 = ppppppcVar45 + 0x22;
        }
        else {
          lVar22 = 0;
          if (pppppppcVar37 != (code *******)0x0) {
            lVar22 = ((long)ppppppcVar45 - (long)*pppppppcVar26) / (long)pppppppcVar37;
          }
          pppppppcVar40 = pppppppcVar26;
          FUN_108758968(pppppppcVar26,lVar22 + 1);
          lVar22 = 0;
          if (pppppppcVar37 != (code *******)0x0) {
            lVar22 = ((long)param_2[5] - (long)*pppppppcVar26) / (long)pppppppcVar37;
          }
          func_0x000108757e10(&stack0x000002e0,pppppppcVar40,lVar22,param_2 + 6);
          func_0x000108757e9c(in_stack_000002f0,&uStack_78);
          in_stack_000002f0 = in_stack_000002f0 + 0x110;
          puVar16 = (undefined8 *)&stack0x000002e0;
          FUN_108757d34(pppppppcVar26,puVar16);
          ppppppcVar45 = param_2[5];
          func_0x000108757f54(&stack0x000002e0);
        }
        param_2[5] = ppppppcVar45;
        func_0x00010875aafc();
        pcVar7 = (code *)(pppppppcVar54 + 0x7a);
        pppppppcVar37 = (code *******)0x110;
        if ((code *******)pcVar7 == pppppppcVar21) {
          auVar97._8_8_ = puVar16;
          auVar97._0_8_ = pppppppcVar26;
          return auVar97;
        }
        func_0x000107c316c8(&stack0x000002a8,&UNK_10f4ba064);
        param_30 = 0;
        in_stack_000000e8 = 0;
        FUN_10863723c(&stack0x000001d8,&stack0x000002e0,&param_30);
        FUN_108637394(&param_30);
        FUN_1086373dc(&stack0x000002e0);
        if (*(int *)(pppppppcVar54 + 0x87) == 1) break;
        if (*(int *)(pppppppcVar54 + 0x87) == 0) goto code_r0x000108757868;
      }
      func_0x000107c316c8(&stack0x000001c0,&UNK_10f4ba0a4);
      in_stack_000001a8 = (undefined8 *)0x0;
      in_stack_000001a0 = 0;
      in_stack_000001b0 = 0;
      FUN_10862b17c(&stack0x000001a0,((long)pppppppcVar54[0x92] - (long)pppppppcVar54[0x91]) / 0x18)
      ;
      iVar50 = 0;
      ppppppcVar44 = pppppppcVar54[0x92];
      for (ppppppcVar45 = pppppppcVar54[0x91]; ppppppcVar45 != ppppppcVar44;
          ppppppcVar45 = ppppppcVar45 + 3) {
        FUN_108758394(&stack0x000002e0,param_2,ppppppcVar45);
        func_0x00010862b5b4(&stack0x000001a0,&stack0x000002e0);
        func_0x00010875aa08();
        lVar22 = (long)*(char *)((long)in_stack_000001a8 + -0x41);
        if (lVar22 < 0) {
          lVar22 = *(long *)((long)in_stack_000001a8 + -0x50);
        }
        if (lVar22 == 0) {
          iVar50 = iVar50 + 1;
        }
      }
      in_stack_000001b0 = 0;
      in_stack_000001a8 = (undefined8 *)0x0;
      in_stack_000001a0 = 0;
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
      in_stack_00000168 = 0;
      in_stack_00000198 = (code *******)CONCAT44(in_stack_00000198._4_4_,iVar50);
      iVar50 = *(int *)(pppppppcVar54 + 0xdd);
      if (2 < iVar50 - 1U) {
        iVar50 = 0;
      }
      param_30 = 0;
      in_stack_000000b0 = 0;
      param_2[0xda] = param_2[0xb6];
      param_2[0xd9] = *pppppppcVar49;
      in_stack_00000188 = 0;
      in_stack_00000180 = 0;
      in_stack_00000190 = (undefined **)0x0;
      FUN_10862b810(&stack0x000002e0,&param_30,&stack0x000002c0,0,iVar50);
      FUN_10862b094(&stack0x000002c0);
      func_0x000107c279a4(&param_30);
      FUN_10862b094(&stack0x00000180);
      FUN_10862b094(&stack0x00000168);
      func_0x000107c27c5c(&stack0x000002e0,pppppppcVar54 + 0x83);
      pppppppcVar37 = (code *******)0x110;
      ppppppcVar45 = param_2[0x98];
      (*(code *)(*ppppppcVar45)[8])(ppppppcVar45,pcVar7);
      if ((in_stack_00000324 & 0xff) == ((uint)((ulong)ppppppcVar45 >> 0x20) & 0xff)) {
        if ((char)in_stack_00000324 != '\0') {
          in_stack_00000320 = (int)ppppppcVar45;
        }
      }
      else {
        uVar105 = (uint3)(in_stack_00000324 >> 8);
        if ((in_stack_00000324 & 0xff) == 0) {
          in_stack_00000324 = CONCAT31(uVar105,1);
          in_stack_00000320 = (int)ppppppcVar45;
        }
        else {
          in_stack_00000324 = (uint)uVar105 << 8;
        }
      }
      if (in_stack_000002a0 == '\x01') goto code_r0x000108757a68;
      FUN_108637308(unaff_x26 + 0xf,&stack0x000002e0);
    } while( true );
  case 0x10:
  case 0x27:
    param_3 = (code *******)param_2[2];
    FUN_1087573d4(pppppppcVar29,param_3);
  case 0xc:
  case 0x23:
  case 0x90:
    pppppppcVar23 = (code *******)*pppppppcVar26;
    FUN_1087569c4(param_2 + 5,pppppppcVar23);
    param_2[4] = param_2[5];
    UNRECOVERED_JUMPTABLE = (code *******)(param_2[5] + 1);
SUB_10875a72c:
    bVar15 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
    if (bVar15) {
      *UNRECOVERED_JUMPTABLE = (code ******)((long)*UNRECOVERED_JUMPTABLE + 4);
      ExclusiveMonitorsStatus();
    }
    auVar94._8_8_ = param_3;
    auVar94._0_8_ = pppppppcVar23;
    return auVar94;
  case 0x11:
  case 0x28:
    goto code_r0x0001087526fc;
  case 0x12:
  case 0x29:
  case 0x82:
    goto code_r0x000108757b40;
  case 0x13:
  case 0x2a:
    goto code_r0x000108757b10;
  case 0x14:
  case 0x2b:
    while (unaff_x28 = param_2, func_0x00010875a720(unaff_x28,param_3), (int)unaff_x28 == 0) {
      if (((uint)in_stack_00000190 >> 1 & 1) != 0) goto code_r0x000108757370;
code_r0x00010875733c:
      in_stack_00000190 = (undefined **)0x0;
      param_3 = (code *******)&stack0x00000190;
      param_2 = pppppppcVar29 + 2;
    }
    func_0x00010875a8a8();
    *(undefined4 *)(pppppppcVar29 + 0x13) = 10;
    *(undefined1 *)(pppppppcVar29 + 0x16) = 0;
    func_0x00010875a67c();
code_r0x000108757370:
    func_0x00010875a750();
    ___cxa_end_catch();
    goto code_r0x000108756ff0;
  case 0x15:
  case 0x2c:
    goto code_r0x00010874f318;
  case 0x16:
  case 0x2d:
  case 0xda:
    func_0x000107c332c8();
    ___cxa_begin_catch(pppppppcVar29);
    func_0x00010875a7ec();
    ___cxa_end_catch();
    pppppppcVar23 = pppppppcVar29;
    goto code_r0x000108759ab8;
  case 0x17:
  case 0x2e:
    goto code_r0x00010875a338;
  case 0x18:
  case 0x2f:
    goto code_r0x000108757b30;
  case 0x19:
  case 0x30:
  case 0x9f:
  case 0xcf:
    goto code_r0x00010875b730;
  case 0x1a:
code_r0x000108759a9c:
    func_0x00010875a874(param_2 + 0x83);
    func_0x000107c31508(pppppppcVar29,pppppppcVar26);
    pppppppcVar23 = pppppppcVar29;
    param_3 = pppppppcVar26;
    goto LAB_108759ab0;
  case 0x1b:
  case 0x87:
  case 0xdb:
    goto code_r0x00010057715c;
  case 0x1c:
  case 0x31:
  case 0x7a:
    goto code_r0x00010873e68c;
  case 0x25:
    while( true ) {
      pppppppcStack_70 = (code *******)0x0;
      func_0x000107c27914(&pppppppcStack_70);
      func_0x000107c27914(&stack0x000008d0);
      func_0x0001052950c4(&stack0x00000880,&stack0x000008f0);
      func_0x000107c27914(&stack0x000008f0);
      pppppppcVar21 = pppppppcVar21 + 3;
      if (pppppppcVar21 == unaff_x26) break;
      pppppppcVar23 = (code *******)&stack0x000008d0;
      param_3 = pppppppcVar26;
code_r0x00010874ae3c:
      func_0x000107c27994(pppppppcVar23,param_3);
    }
    unaff_x26 = (code *******)param_2[0x11];
  case 0xfe:
    FUN_108747e58(&stack0x000007e8,uStack_78);
    if (((ulong)unaff_x27 & 1) != 0) {
      func_0x000107c291f8(&pppppppcStack_70,param_2[0x15],pppppppcVar26);
      pppppppcVar23 = (code *******)&stack0x000003b8;
code_r0x00010874af14:
      func_0x000104bfae94(pppppppcVar23,&pppppppcStack_70);
    }
    pppppppcVar37 = (code *******)&stack0x000003b8;
    func_0x000105294bc8(&stack0x000008f0,&stack0x00000860,&stack0x00000840,&stack0x000007e8);
    uVar38 = 0;
    param_3 = pppppppcVar26;
    (*(code *)(*unaff_x26)[2])(unaff_x26,pppppppcVar26);
    func_0x000104bf5850(&stack0x000008f0);
    func_0x000104be16c8(&stack0x000003b8);
    ppppppcVar45 = (code ******)pppppppcStack_80;
    if (((ulong)unaff_x27 & 1) != 0) {
      func_0x000107c27a60(&pppppppcStack_70);
      ppppppcVar45 = (code ******)pppppppcStack_80;
    }
    func_0x000104bf5888(&stack0x000007e8);
    func_0x000104bf58b8(&stack0x00000840);
    func_0x000107c27a08(&stack0x00000860);
    uVar14 = in_stack_000008af != '\x01' || in_stack_000008a0 == pppppppcVar49;
    if (in_stack_000008af == '\x01' && (long)pppppppcVar49 < (long)in_stack_000008a0) {
      pppppppcVar29 = (code *******)0x2;
      func_0x000107c29f64(&stack0x000008f0,param_2[0x13],pppppppcVar26);
      param_3 = (code *******)&stack0x000008f0;
      FUN_10885ff98(param_2[0x13],param_3);
      func_0x000107c288c8(&stack0x000008f0);
    }
    while( true ) {
      func_0x000104bf58b8(&stack0x00000880);
      pppppppcVar40 = (code *******)&stack0x000008b0;
      func_0x000107c27a08(pppppppcVar40);
      func_0x000108756650(pppppppcStack_70);
      if ((bool)uVar14) break;
      ___stack_chk_fail();
      func_0x000108755c04();
      func_0x000107c288c8(&stack0x000008f0);
      uVar14 = (int)pppppppcVar26 == 1;
      if (!(bool)uVar14) {
        func_0x000104bf58b8(&stack0x00000880);
        param_2 = (code *******)&stack0x000008b0;
        func_0x000107c27a08();
        func_0x000108755b58();
        func_0x00010875615c();
        pppppppcVar40 = (code *******)&stack0xffffffffffffffd0;
        pppppppcVar11 = (code *******)auStack_2f0;
        pppppppcVar26 = param_2 + 0x50;
        pppppppcVar21 = param_3;
        FUN_108750c68();
        if (pppppppcVar26 == (code *******)0x0) {
          param_2 = (code *******)0x0;
          goto LAB_108755a40;
        }
        pppppppcVar49 = pppppppcVar26 + 5;
        if (((ulong)*pppppppcVar49 & 1) == 0) {
          param_2 = (code *******)(ulong)*(byte *)(pppppppcVar26 + 0x32);
          goto LAB_108755a40;
        }
        if (0 < *(int *)((long)pppppppcVar26 + 0x2c)) {
          FUN_10874789c(pppppppcVar49,pppppppcVar37,ppppppcVar45);
          param_2 = (code *******)0x1;
          pppppppcVar21 = pppppppcVar37;
          goto LAB_108755a40;
        }
        pppppppcVar21 = param_3;
        func_0x000108755be0(appppppcStack_260,param_2[0x13],param_3);
        if ((char)pppppppcStack_90 == '\x01') {
          pppppppcVar21 = param_2 + 0x40;
          func_0x000107c289e8();
          bVar3 = *(byte *)pppppppcVar21;
          pppppppcVar33 = pppppppcVar29;
          if ((pppppppcVar29 != (code *******)0x0 & bVar3) == 0) {
            pppppppcVar33 = appppppcStack_260;
          }
          uStack_278 = 0;
          func_0x000107c28258();
          pppppppcStack_270 = pppppppcVar21;
          bVar15 = true;
          uStack_268 = 1;
          if ((uVar38 & 1) == 0) {
            if (*pppppppcVar37 == pppppppcVar37[1]) {
              bVar15 = *ppppppcVar45 != ppppppcVar45[1];
            }
            else {
              bVar15 = true;
            }
          }
          if ((*(char *)(pppppppcVar26 + 0x2c) == '\x01') &&
             (*(char *)((long)pppppppcVar26 + 0x15c) == '\x01')) {
            if ((bool)(*(int *)(pppppppcVar26 + 0x2b) != 0 & bVar15)) {
LAB_10874b1fc:
              bVar15 = *(char *)(pppppppcVar26 + 0x15) == '\x01';
              if (((bVar15) && (func_0x0001087563b8(pppppppcVar26[0x14]), bVar15)) &&
                 ((bStack_e0 & 1) != 0)) {
                uStack_2b0 = 0;
                uStack_2a8 = 0;
                if (bVar3 == 0) {
                  pppppppcVar29 = (code *******)0x0;
                }
                FUN_10874b388(param_2,param_3,pppppppcVar49,0x730254,&uStack_2b0,pppppppcVar29);
                pppppppcVar21 = param_3;
                goto LAB_10874b320;
              }
            }
          }
          else if (bVar15) goto LAB_10874b1fc;
          FUN_108747820(&uStack_2b0,pppppppcVar49,pppppppcVar33,param_2 + 0x1f,pppppppcVar37,
                        ppppppcVar45);
          if (abStack_280[1] == '\x01') {
            func_0x0001087566a4();
            FUN_10874b684();
          }
          puVar16 = (undefined8 *)auStack_2f0;
          if (((CONCAT71(uStack_2af,uStack_2b0) != CONCAT71(uStack_2a7,uStack_2a8)) ||
              (puVar16 = (undefined8 *)auStack_2f0, (uVar38 & 1) != 0)) ||
             (puVar16 = (undefined8 *)auStack_2f0, lStack_298 != lStack_290)) goto LAB_10874b298;
          goto code_r0x00010874b348;
        }
        param_2 = (code *******)0x0;
LAB_10874b320:
        func_0x000107c288c8(appppppcStack_260);
        goto LAB_108755a40;
      }
      ___cxa_begin_catch(param_2);
      ___cxa_end_catch();
    }
    goto LAB_1087557d4;
  case 0x35:
    param_2[0x81] = (code ******)param_2;
    *(undefined1 *)(param_2 + 0x82) = 1;
    param_3 = (code *******)&UNK_10f4b9000;
  case 0xb2:
    func_0x000107c316c8(param_2 + 0x83,(long)param_3 + 0xfff);
    param_2[0x88] = (code ******)0x0;
    param_2[0x87] = (code ******)0x0;
    param_2[0x86] = (code ******)0x0;
    func_0x000107c316c8(pcVar7,&UNK_10f4ba01a);
code_r0x000108756a84:
    FUN_10886bc20(pppppppcVar29,param_2[200]);
    pppppppcVar37 = param_2 + 0x41;
    func_0x000107c2905c(pppppppcVar37,pppppppcVar29);
    pppppppcVar21 = param_2 + 0x8c;
    pppppppcVar39 = param_2 + 0x95;
    UNRECOVERED_JUMPTABLE = param_2 + 0x96;
code_r0x000108756aac:
    pppppppcStack_70 = UNRECOVERED_JUMPTABLE;
    _bzero(&stack0xffffffffffffffb0,0x1e0);
    pppppppcVar26 = (code *******)0x3e8;
    goto LAB_108756ac0;
  case 0x36:
  case 0xcc:
  case 0xec:
    goto code_r0x00010875cb44;
  case 0x37:
  case 0xcd:
  case 0xed:
    goto code_r0x000108757330;
  case 0x38:
    param_2 = (code *******)*param_2;
    *UNRECOVERED_JUMPTABLE = (code ******)param_3;
    pppppppcVar23 = (code *******)0x0;
    if (param_2 == (code *******)0x0) goto LAB_10875be50;
    goto code_r0x00010bdbd7ac;
  case 0x39:
  case 0xf9:
    param_7 = (undefined1 *)0x0;
  case 0xe:
    ppppppcVar45 = param_2[0x33];
    if (*(char *)(param_2 + 0x34) == '\0') {
      ppppppcVar45 = (code ******)0x7fffffffffffffff;
    }
    func_0x0001087566e8(param_2[0x13],param_3,ppppppcVar45,param_5,param_6,param_7);
    func_0x000108755ef0();
    func_0x000108755f18(unaff_x21);
    func_0x000108756678();
    func_0x00010875648c(&stack0xffffffffffffffd0);
    func_0x0001086c0798(&stack0xffffffffffffffd0,unaff_x21,unaff_x19,unaff_x29);
    func_0x000108756530();
    if (unaff_x22 != unaff_x21) {
      for (pppppppcVar40 = unaff_x22 + 4; pppppppcVar40 + -4 != unaff_x21;
          pppppppcVar40 = pppppppcVar40 + 0x35) {
        if (*(char *)(pppppppcVar40 + 1) == '\x01') {
          ppppppcVar45 = pppppppcVar40[-1];
          pppppppcVar21 = param_2 + 0xbf;
          FUN_10874cff8(pppppppcVar21,pppppppcVar40);
          *pppppppcVar21 = ppppppcVar45;
        }
      }
      func_0x000108755f18(in_stack_000001b0);
      func_0x000108756678();
      func_0x00010875648c(&stack0x000001a8);
      func_0x0001086c0798(&stack0x000001a8,in_stack_000001b0,unaff_x22,unaff_x21);
    }
    in_stack_000001d8 = (undefined4)((ulong)unaff_x28 >> 0x20);
    if (in_stack_000001e8 == '\x01') {
      in_stack_000001e8 = '\0';
    }
    param_3 = (code *******)&stack0x000001d8;
    FUN_108746ffc(pppppppcVar29,param_3);
    func_0x000108756400();
    FUN_10874d02c();
    func_0x000107c2825c();
    func_0x000107c28258();
    pppppppcStack_80 = (code *******)0x0;
    uStack_78 = (code *******)0x0;
    func_0x000108756400();
    FUN_10874ad2c();
    FUN_10869ccc0(&stack0xffffffffffffffe8);
    func_0x000107c2825c();
    pppppppcStack_80 = pppppppcVar33;
    func_0x0001087566b0();
    func_0x000108756764();
    FUN_10874d22c();
    pppppppcVar40 = param_2 + 0x22;
    func_0x000107c289e8();
    bVar15 = *(char *)pppppppcVar40 == '\x01';
    if ((((bVar15) && (((ulong)param_2[0xa8] & 1) == 0)) &&
        ((((ulong)param_2[0x34] & 1) == 0 &&
         ((((((ulong)param_2[0x35] & 1) != 0 && ((*(byte *)((long)param_2 + 0x1ec) & 1) == 0)) &&
           (((ulong)*pppppppcVar29 & 1) != 0)) &&
          ((((ulong)param_2[0x93] & 1) == 0 && (((ulong)param_2[0x91] & 1) != 0)))))))) &&
       (func_0x0001087563b8(param_2[0x90]), bVar15)) {
      func_0x000107c27994(&ppppppcStack_d0,pppppppcVar26);
      func_0x000107c289cc(&bStack_e0);
      ppppppcStack_d8 = (code ******)0x0;
      FUN_10874d5d0(param_2 + 0xa6,&stack0xffffffffffffffe8);
      func_0x000107c27f98();
      func_0x000107c28258();
      func_0x000107c28da8();
      func_0x000107c27994(&stack0x00000248,&ppppppcStack_d0);
      if (CONCAT71(uStack_df,bStack_e0) != 0) {
        do {
          func_0x00010875583c();
        } while (extraout_w10_16 != 0);
      }
      param_3 = (code *******)param_2[7];
      FUN_108751e7c(&pppppppcStack_b8,&stack0x00000240);
      func_0x000107c288a8(&pppppppcStack_70,param_2 + 5);
      FUN_108751f5c(&stack0xffffffffffffffe8,&pppppppcStack_b8);
      FUN_108751edc(auStack_e8,&stack0xffffffffffffffe8,param_3);
      func_0x000108751eb4(&stack0xffffffffffffffe8);
      func_0x000108751eb4(&pppppppcStack_b8);
      FUN_10874d618(&stack0x00000240);
      func_0x000107c27f9c(auStack_e8);
      func_0x000107c289dc(&bStack_e0);
      func_0x000107c27914(&ppppppcStack_d0);
    }
    func_0x000108755f88();
    func_0x00010867b9fc(&stack0x000001a8);
    pppppppcVar40 = (code *******)&stack0x000001d8;
    func_0x000108750a20(pppppppcVar40);
LAB_1087557d4:
    auVar77._8_8_ = param_3;
    auVar77._0_8_ = pppppppcVar40;
    return auVar77;
  case 0x3a:
    goto code_r0x000108757b08;
  case 0x3b:
  case 0x47:
    goto code_r0x000108756b48;
  case 0x3c:
    goto code_r0x00010875971c;
  case 0x3d:
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x000108755eb0();
    param_2 = param_2 + 0x50;
    FUN_108750c68();
    if (param_2 != (code *******)0x0) {
      if (((ulong)param_2[5] & 1) == 0) {
        param_2 = (code *******)(ulong)*(byte *)(param_2 + 0x32);
      }
      else {
        pppppppcStack_b0 = (code *******)((ulong)pppppppcStack_b0 & 0xffffffffffffff00);
        pppppppcStack_a8 = (code *******)((ulong)pppppppcStack_a8 & 0xffffffffffffff00);
        func_0x000108756274();
        func_0x000108755ca4();
      }
    }
    auVar72._8_8_ = param_3;
    auVar72._0_8_ = param_2;
    return auVar72;
  case 0x3e:
    if (bVar3 == 1) {
      FUN_108758728(param_2,pppppppcVar26);
      param_3 = pppppppcVar26;
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 0x19) = 0;
    if (*(char *)(param_2 + 0x1d) == '\x01') {
      param_3 = param_2 + 0x13;
      FUN_1087587b8(param_2 + 0xf,param_3);
    }
  case 0x62:
    auVar98._8_8_ = param_3;
    auVar98._0_8_ = param_2;
    return auVar98;
  case 0x3f:
  case 99:
code_r0x00010875aefc:
    pppppppcVar23 = pppppppcVar21 + 2;
    func_0x000107c28078(pppppppcVar23,pppppppcVar26);
code_r0x00010875af08:
    if (((ulong)pppppppcVar23 & 1) == 0) goto LAB_10875aee8;
code_r0x00010875af0c:
    do {
      *(char *)(pppppppcVar21 + 5) = (char)(((uint)pppppppcVar56 & 4) >> 2);
      puVar16 = (undefined8 *)&stack0xffffffffffffffe0;
      func_0x000107c303b0(puVar16,0x10875bdc0);
      if ((code **)puVar16 != &param_22) {
        uVar38 = puVar16[1];
        if ((uVar38 & 1) != 0) {
          uVar38 = *(ulong *)(uVar38 & 0xfffffffffffffffe);
        }
        uVar41 = (ulong)param_23;
        if (((ulong)param_23 & 1) != 0) {
          uVar41 = *(ulong *)((ulong)param_23 & 0xfffffffffffffffe);
        }
        if (uVar38 == uVar41) {
          FUN_108905704();
        }
        else {
code_r0x00010875b248:
          FUN_1089056d0();
        }
      }
      FUN_1089052c4(&param_22);
      FUN_1086569a0(&ppppppcStack_d8);
      do {
        pppppppcVar26 = pppppppcVar26 + 3;
        if (pppppppcVar26 == unaff_x27) {
          func_0x000107c297b4(&stack0xffffffffffffffb0,param_2 + 1);
          goto code_r0x00010875b27c;
        }
        pppppppcVar29 = param_2 + 0x20;
        FUN_108699578(pppppppcVar29,pppppppcVar26);
      } while (((ulong)pppppppcVar29 & 1) != 0);
      func_0x00010875bf0c(&param_10);
      FUN_10885edd8(&param_22,param_10[0xc],pppppppcVar26);
      FUN_108663a10(&ppppppcStack_d8,&param_22);
      FUN_108656820(&param_22);
      func_0x000107c297b0(&param_10);
      (*(code *)(*param_2[0x19])[3])(&param_22,param_2[0x19],pppppppcVar26,&ppppppcStack_d8);
      pppppppcVar56 = (code *******)(param_24 & 0xffffffff);
      pcVar7 = (code *)pppppppcVar26;
      FUN_108848654();
      pppppppcVar29 = (code *******)param_2[0x26];
      if (pppppppcVar29 != (code *******)0x0) {
        pppppppcVar55 = (code *******)((long)pppppppcVar29 + -1);
        if (((ulong)pppppppcVar29 & (ulong)pppppppcVar55) == 0) {
LAB_10875aed4:
          pppppppcVar37 = (code *******)((ulong)((int)pppppppcVar29 - 1) & (ulong)pcVar7);
        }
        else {
          pppppppcVar37 = (code *******)pcVar7;
          if (pppppppcVar29 <= pcVar7) {
            uVar47 = 0;
            uVar48 = (uint)pppppppcVar29;
            if (uVar48 != 0) {
              uVar47 = (uint)pcVar7 / uVar48;
            }
            pppppppcVar37 = (code *******)(ulong)((uint)pcVar7 - uVar47 * uVar48);
          }
        }
        pppppppcVar21 = (code *******)param_2[0x25][(long)pppppppcVar37];
        if (pppppppcVar21 != (code *******)0x0) {
LAB_10875aee8:
          do {
            pppppppcVar21 = (code *******)*pppppppcVar21;
            if (pppppppcVar21 == (code *******)0x0) break;
            pppppppcVar36 = (code *******)pppppppcVar21[1];
            if (pppppppcVar36 == (code *******)pcVar7) goto code_r0x00010875aefc;
            if (((ulong)pppppppcVar29 & (ulong)pppppppcVar55) == 0) {
              pppppppcVar36 = (code *******)((ulong)pppppppcVar36 & (ulong)pppppppcVar55);
            }
            else if (pppppppcVar29 <= pppppppcVar36) {
              uVar38 = 0;
              if (pppppppcVar29 != (code *******)0x0) {
                uVar38 = (ulong)pppppppcVar36 / (ulong)pppppppcVar29;
              }
              pppppppcVar36 = (code *******)((long)pppppppcVar36 - uVar38 * (long)pppppppcVar29);
            }
            in_ZR = pppppppcVar36 == pppppppcVar37;
code_r0x00010875af34:
          } while ((bool)in_ZR);
        }
      }
      pppppppcVar21 = (code *******)0x30;
      __Znwm();
      param_12 = (code *******)0x0;
      *pppppppcVar21 = (code ******)0x0;
      pppppppcVar21[1] = (code ******)pcVar7;
      param_10 = pppppppcVar21;
      param_11 = pppppppcVar49;
      func_0x000107c27994(pppppppcVar21 + 2,pppppppcVar26);
      *(undefined1 *)(pppppppcVar21 + 5) = 0;
      param_12 = (code *******)CONCAT71(param_12._1_7_,1);
      if ((pppppppcVar29 == (code *******)0x0) ||
         (*(float *)(param_2 + 0x29) * (float)pppppppcVar29 <
          (float)(undefined *)((long)param_2[0x28] + 1))) {
        uVar38 = 1;
        if ((code *******)0x2 < pppppppcVar29) {
          uVar38 = (ulong)(((ulong)pppppppcVar29 & (long)pppppppcVar29 - 1U) != 0);
        }
        pppppppcVar37 = (code *******)(uVar38 | (long)pppppppcVar29 << 1);
        pppppppcVar29 =
             (code *******)
             (long)((float)(undefined *)((long)param_2[0x28] + 1) / *(float *)(param_2 + 0x29));
        if (pppppppcVar37 <= pppppppcVar29) {
          pppppppcVar37 = pppppppcVar29;
        }
        if ((long)pppppppcVar37 - 1U == 0) {
          pppppppcVar37 = (code *******)0x2;
        }
        else if (((ulong)pppppppcVar37 & (long)pppppppcVar37 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        pppppppcVar29 = (code *******)param_2[0x26];
        if (pppppppcVar29 < pppppppcVar37) {
LAB_10875afe8:
          pppppppcVar29 = pppppppcVar37;
          if ((ulong)pppppppcVar29 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10875b500);
            (*pcVar7)();
          }
          lVar22 = (long)pppppppcVar29 << 3;
          __Znwm(lVar22);
          FUN_10875be3c(param_2 + 0x25,lVar22);
          param_2[0x26] = (code ******)pppppppcVar29;
          ppppppcVar45 = param_2[0x25];
          for (pppppppcVar37 = (code *******)0x0; pppppppcVar29 != pppppppcVar37;
              pppppppcVar37 = (code *******)((long)pppppppcVar37 + 1)) {
            ppppppcVar45[(long)pppppppcVar37] = (code *****)0x0;
          }
          ppppppcVar44 = *pppppppcVar49;
          if (ppppppcVar44 != (code ******)0x0) {
            pppppppcVar37 = (code *******)ppppppcVar44[1];
            uVar41 = (long)pppppppcVar29 - 1;
            uVar38 = 0;
            if (pppppppcVar29 != (code *******)0x0) {
              uVar38 = (ulong)pppppppcVar37 / (ulong)pppppppcVar29;
            }
            pppppppcVar36 = pppppppcVar37;
            if (pppppppcVar29 <= pppppppcVar37) {
              pppppppcVar36 = (code *******)((long)pppppppcVar37 - uVar38 * (long)pppppppcVar29);
            }
            if (((ulong)pppppppcVar29 & uVar41) == 0) {
              pppppppcVar36 = (code *******)((ulong)pppppppcVar37 & uVar41);
            }
            ppppppcVar45[(long)pppppppcVar36] = (code *****)pppppppcVar49;
            while (ppppppcVar34 = ppppppcVar44, ppppppcVar44 = (code ******)*ppppppcVar34,
                  ppppppcVar44 != (code ******)0x0) {
              pppppppcVar37 = (code *******)ppppppcVar44[1];
              if (((ulong)pppppppcVar29 & uVar41) == 0) {
                pppppppcVar37 = (code *******)((ulong)pppppppcVar37 & uVar41);
              }
              else if (pppppppcVar29 <= pppppppcVar37) {
                uVar38 = 0;
                if (pppppppcVar29 != (code *******)0x0) {
                  uVar38 = (ulong)pppppppcVar37 / (ulong)pppppppcVar29;
                }
                pppppppcVar37 = (code *******)((long)pppppppcVar37 - uVar38 * (long)pppppppcVar29);
              }
              if (pppppppcVar37 != pppppppcVar36) {
                if (ppppppcVar45[(long)pppppppcVar37] == (code *****)0x0) {
                  ppppppcVar45[(long)pppppppcVar37] = (code *****)ppppppcVar34;
                  pppppppcVar36 = pppppppcVar37;
                }
                else {
                  *ppppppcVar34 = *ppppppcVar44;
                  *ppppppcVar44 = (code *****)*ppppppcVar45[(long)pppppppcVar37];
                  *ppppppcVar45[(long)pppppppcVar37] = (code ****)ppppppcVar44;
                  ppppppcVar44 = ppppppcVar34;
                }
              }
            }
          }
        }
        else if (pppppppcVar37 < pppppppcVar29) {
          pppppppcVar36 = (code *******)(long)((float)param_2[0x28] / *(float *)(param_2 + 0x29));
          if ((pppppppcVar29 < (code *******)0x3) ||
             (((ulong)pppppppcVar29 & (long)pppppppcVar29 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((code *******)0x1 < pppppppcVar36) {
            pppppppcVar36 = (code *******)(1L << (-LZCOUNT((long)pppppppcVar36 + -1) & 0x3fU));
          }
          if (pppppppcVar37 <= pppppppcVar36) {
            pppppppcVar37 = pppppppcVar36;
          }
          if (pppppppcVar37 < pppppppcVar29) {
            if (pppppppcVar37 != (code *******)0x0) goto LAB_10875afe8;
            FUN_10875be3c(param_2 + 0x25,0);
            pppppppcVar29 = (code *******)0x0;
            param_2[0x26] = (code ******)0x0;
          }
          else {
            pppppppcVar29 = (code *******)param_2[0x26];
          }
        }
        if (((ulong)pppppppcVar29 & (long)pppppppcVar29 - 1U) == 0) {
          pppppppcVar37 = (code *******)((ulong)((int)pppppppcVar29 - 1) & (ulong)pcVar7);
        }
        else {
          pppppppcVar37 = (code *******)pcVar7;
          if (pppppppcVar29 <= pcVar7) {
            uVar38 = 0;
            if (pppppppcVar29 != (code *******)0x0) {
              uVar38 = (ulong)pcVar7 / (ulong)pppppppcVar29;
            }
            pppppppcVar37 = (code *******)((long)pcVar7 - uVar38 * (long)pppppppcVar29);
          }
        }
      }
      ppppppcVar45 = param_2[0x25];
      pppppcVar42 = ppppppcVar45[(long)pppppppcVar37];
      if (pppppcVar42 == (code *****)0x0) {
        *pppppppcVar21 = *pppppppcVar49;
        *pppppppcVar49 = (code ******)pppppppcVar21;
        ppppppcVar45[(long)pppppppcVar37] = (code *****)pppppppcVar49;
        if (*pppppppcVar21 != (code ******)0x0) {
          pppppppcVar36 = (code *******)(*pppppppcVar21)[1];
          if (((ulong)pppppppcVar29 & (long)pppppppcVar29 - 1U) == 0) {
            pppppppcVar36 = (code *******)((ulong)pppppppcVar36 & (long)pppppppcVar29 - 1U);
          }
          else if (pppppppcVar29 <= pppppppcVar36) {
            uVar38 = 0;
            if (pppppppcVar29 != (code *******)0x0) {
              uVar38 = (ulong)pppppppcVar36 / (ulong)pppppppcVar29;
            }
            pppppppcVar36 = (code *******)((long)pppppppcVar36 - uVar38 * (long)pppppppcVar29);
          }
          ppppppcVar45[(long)pppppppcVar36] = (code *****)pppppppcVar21;
        }
      }
      else {
        *pppppppcVar21 = (code ******)*pppppcVar42;
        *pppppcVar42 = (code ****)pppppppcVar21;
      }
      param_10 = (code *******)0x0;
      param_2[0x28] = (code ******)((long)param_2[0x28] + 1);
      FUN_10875be54(&param_10);
    } while( true );
  case 0x40:
    ppppppcVar45 = param_2[7];
    uVar32 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_78,&UNK_10f4afc25,ppppppcVar45 + 4);
    FUN_10865aaac(uVar32,&uStack_78);
    func_0x00010875ab88();
    ___cxa_throw(uVar32);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10875774c);
    (*pcVar7)();
  case 0x41:
    goto code_r0x000108756ac8;
  case 0x42:
    goto code_r0x000108759344;
  case 0x43:
  case 0x4e:
    func_0x00010875b6dc();
    auVar100._8_8_ = param_3;
    auVar100._0_8_ = param_2;
    return auVar100;
  case 0x44:
  case 0xb5:
  case 0xd7:
    goto code_r0x00010875b6fc;
  case 0x45:
    goto code_r0x00010874ab0c;
  case 0x46:
    ppuVar28 = &PTR_DAT_110a6aa80;
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x000107c27934(param_3,&PTR_DAT_110a6aa80);
    pppppppcVar26 = param_2 + 1;
    if ((int)param_3 == 0) {
      pppppppcVar26 = (code *******)0x0;
    }
    goto LAB_108755b60;
  case 0x48:
  case 0x9e:
  case 0xab:
    goto code_r0x000108757b48;
  case 0x49:
    goto code_r0x00010875a290;
  case 0x4a:
    func_0x000108755880();
    func_0x000108755b04();
    if (uVar47 == 3) {
      func_0x0001087559e8();
      func_0x000108755768();
      param_2 = (code *******)&uStack_78;
      func_0x000108755de8(param_2,0x252);
      param_3 = param_2;
      func_0x000108755e28();
      func_0x000108756018();
      func_0x0001087559f4();
      func_0x000108755bd0();
      func_0x000108755b94();
      func_0x000108755e48();
      func_0x0001087558dc();
      func_0x00010875645c();
      func_0x000108755ad0();
      ___cxa_end_catch();
    }
    else if (uVar47 == 2) {
      func_0x000108755ad8();
      func_0x000108755ad0();
      ___cxa_end_catch();
    }
    else {
      func_0x000108755ad8();
      func_0x000108755ae0();
      ___cxa_end_catch();
    }
    func_0x000108755ac8();
    func_0x000108755ae8();
    auVar80._8_8_ = param_3;
    auVar80._0_8_ = param_2;
    return auVar80;
  case 0x4b:
  case 0x6c:
  case 0xde:
    pppppppcStack_70 = pppppppcVar40;
    func_0x000107c27cfc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 3,param_3 + 3);
    pppppppcVar23 = param_3;
    pppppppcVar26 = param_2;
    goto code_r0x00010875971c;
  case 0x4c:
    goto code_r0x000108757b4c;
  case 0x4d:
  case 0xfd:
    goto code_r0x000108751e9c;
  case 0x4f:
    goto SUB_108756244;
  case 0x50:
  case 0x98:
  case 0xff:
    pppppppcVar9 = (code *******)auStack_130;
    pppppppcVar58 = (code *******)&pppppppcStack_90;
    pppppppcVar46 = param_2;
    pppppppcStack_b0 = pppppppcVar21;
    pppppppcStack_a8 = pppppppcVar29;
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    goto code_r0x00010874ab0c;
  case 0x51:
LAB_10875be50:
    auVar101._8_8_ = param_3;
    auVar101._0_8_ = pppppppcVar23;
    return auVar101;
  case 0x52:
    goto code_r0x00010875730c;
  case 0x53:
  case 0x6f:
    goto code_r0x00010875a348;
  case 0x54:
  case 0x70:
  case 0xf5:
    goto code_r0x000108750b40;
  case 0x55:
  case 0x5f:
  case 0x7b:
  case 0xf6:
code_r0x0001087532b0:
    func_0x000108755b04();
    uVar14 = pppppppcVar26 == (code *******)0x1;
    if ((bool)uVar14) {
      func_0x000108755af0(param_2[8]);
      if ((extraout_w8_14 >> 5 & 1) == 0) {
        func_0x000108755bd8();
        func_0x00010875620c();
        func_0x000108755800();
      }
      else {
        func_0x000108755a80();
        func_0x000108756234();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x108753398);
      (*pcVar7)();
    }
    func_0x000108755f7c(param_2[7]);
    do {
      func_0x00010875583c();
    } while (extraout_w10_27 != 0);
    func_0x0001087559cc();
    if ((extraout_w8_13 >> 1 & 1) == 0) {
      func_0x00010875600c();
      func_0x000108755790();
      if (*pppppppcVar23 == (code ******)0x0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar24 = extraout_x8_35;
      do {
        if (*plVar24 == 0) {
          func_0x000108755890();
          plVar24 = extraout_x8_37;
          uVar47 = extraout_w10_29;
          uVar38 = extraout_x11_15;
        }
        else {
          func_0x000108755b70();
          plVar24 = extraout_x8_36;
          uVar47 = extraout_w10_28;
          uVar38 = extraout_x11_14;
        }
        if ((uVar38 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)uVar14) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
LAB_1087557c4:
          auVar76._8_8_ = param_3;
          auVar76._0_8_ = pppppppcVar23;
          return auVar76;
        }
      } while ((uVar47 >> 1 & 1) == 0);
    }
    goto LAB_108753314;
  case 0x56:
  case 0x60:
    goto SUB_10875624c;
  case 0x57:
  case 0x7e:
  case 0x92:
    goto code_r0x00010874ae3c;
  case 0x58:
  case 0xae:
  case 0xf0:
    goto code_r0x000108756b00;
  case 0x59:
    goto code_r0x000108758b44;
  case 0x5a:
    goto SUB_108756304;
  case 0x5b:
    goto code_r0x00010875b744;
  case 0x5c:
    *(undefined1 *)(param_2 + 6) = 0;
    goto code_r0x000108758b44;
  case 0x5e:
    func_0x000107c27f9c(param_2 + 0xb4);
    func_0x00010875a8b0();
    func_0x000107c316d0(pppppppcVar37);
    func_0x00010875aa00();
    FUN_108638118(pppppppcVar21);
    func_0x000107c29108(unaff_x28);
    if ((int)unaff_x27 != 2) {
      func_0x00010875a8a0();
      func_0x00010875aab8();
      func_0x00010875a7ec();
      ___cxa_end_catch();
      goto code_r0x000108756ff4;
    }
    ppppppcVar45 = param_2[0x98];
    func_0x00010875aab8();
    pppppppcVar26 = (code *******)ppppppcVar45[0x19];
    func_0x00010875a8c8();
    in_stack_000001b0 = CONCAT44(in_stack_000001b0._4_4_,0x1f5);
    func_0x00010875a918();
    pppppppcVar23 = (code *******)&stack0xffffffffffffffa8;
  case 0x88:
  case 0xe0:
    FUN_108843ae8(pppppppcVar23);
    pppppppcVar20 = (code *******)&stack0x00000190;
    param_3 = param_2 + 0x92;
    param_4 = pppppppcVar23;
code_r0x00010875730c:
    func_0x000107c28824(pppppppcVar20,param_3,param_4);
    func_0x00010875a81c();
    func_0x00010875aa88((*pppppppcVar26)[3]);
    func_0x00010875a910();
code_r0x000108757330:
    func_0x00010875a824();
code_r0x000108757334:
    pppppppcVar29 = (code *******)param_2[3];
    goto code_r0x00010875733c;
  case 0x61:
    param_12 = pppppppcVar21;
    param_13 = pppppppcVar29;
    param_14 = pppppppcVar26;
    param_15 = param_2;
    param_16 = pppppppcVar40;
    func_0x000108756728();
    func_0x00010875658c();
    param_3 = (code *******)param_2[0xb];
    FUN_108751684(&stack0xffffffffffffffb0,&pppppppcStack_80);
    func_0x000108756290(&stack0xffffffffffffffd8);
    FUN_108751748(&stack0xffffffffffffffe0,&stack0xffffffffffffffb0);
    FUN_1087516c8(&stack0xffffffffffffffa8);
    func_0x0001087516a8(&stack0xffffffffffffffe0);
    pppppppcVar26 = (code *******)&stack0xffffffffffffffb0;
    func_0x0001087516a8(pppppppcVar26);
    func_0x000108755f90();
    func_0x000108756314();
    break;
  case 100:
    if (UNRECOVERED_JUMPTABLE == (code *******)0x0) goto LAB_10084fb04;
    FUN_10875b718();
    goto code_r0x00010875b6fc;
  case 0x65:
  case 0xa5:
    goto code_r0x000108756b40;
  case 0x66:
    pppppppcVar20 = param_3;
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    goto code_r0x00010875b730;
  case 0x67:
    goto code_r0x000108750b44;
  case 0x68:
  case 0x71:
    goto code_r0x00010874fb04;
  case 0x69:
  case 0x73:
  case 0xb0:
    param_2[8] = param_2[4];
    param_2[4] = (code ******)0x0;
    in_register_00005008 = param_2[6];
    param_1 = param_2[5];
    goto code_r0x000108751e9c;
  case 0x6a:
    pppppppcVar40 = param_2;
    if ((bool)in_ZR) {
      ppppppcVar44 = param_2[0x82];
      for (ppppppcVar45 = *pppppppcVar29; ppppppcVar45 != ppppppcVar44;
          ppppppcVar45 = ppppppcVar45 + 3) {
        pppppppcVar40 = param_2 + 0x50;
        func_0x000108756298();
        if (((pppppppcVar40 != (code *******)0x0) &&
            ((((ulong)pppppppcVar40[5] & 1) != 0 || (*(char *)(pppppppcVar40 + 0x32) != '\0')))) &&
           (((*(char *)(pppppppcVar40 + 0x2c) == '\x01' &&
             ((*(int *)(pppppppcVar40 + 0x2b) != 0 ||
              ((*(byte *)((long)pppppppcVar40 + 0x15c) & 1) == 0)))) ||
            (((((ulong)pppppppcVar40[5] & 1) == 0 && (*(char *)(pppppppcVar40 + 0x32) != '\0')) ||
             (((ulong)pppppppcVar40[0x17] & 1) != 0)))))) {
          pppppppcStack_80 = (code *******)((ulong)pppppppcStack_80 & 0xffffffffffffff00);
          uStack_78 = (code *******)((ulong)uStack_78 & 0xffffffffffffff00);
          func_0x0001087566b0();
          func_0x000108755ca4();
        }
      }
    }
    auVar89._8_8_ = param_3;
    auVar89._0_8_ = pppppppcVar40;
    return auVar89;
  case 0x6b:
    *(uint *)((long)unaff_x26 + 0x14c) = (uint)bVar3;
    pppppppcStack_80 = (code *******)&stack0xffffffffffffffd0;
    uStack_78 = (code *******)0x0;
    param_3 = param_2 + 4;
    FUN_10874bc54(pppppppcVar26,param_3,pppppppcVar29,param_5,param_6,0,*(undefined4 *)unaff_x27,
                  param_2 + 0x70);
    func_0x000108755ad0();
    func_0x000108755c10();
    func_0x000108755ac8();
    func_0x000108755ae8();
    break;
  case 0x6d:
    goto code_r0x00010875a328;
  case 0x6e:
    goto code_r0x000108756b04;
  case 0x72:
  case 0x78:
  case 0x79:
  case 0xb9:
  case 0xba:
    pcVar7 = (code *)(ulong)((int)pcVar7 != 2);
    FUN_1087479b8(pppppppcVar21);
    unaff_x28 = (code *******)0x0;
    pppppppcVar106 = (code *******)0x0;
    FUN_108747820(&stack0xffffffffffffffd8,pppppppcVar21,pppppppcVar37,param_2 + 0xa0);
    FUN_10869ccc0(&stack0xffffffffffffffa0);
    *(undefined2 *)(param_2 + 6) = 0;
    param_2[3] = (code ******)0x0;
    param_2[2] = (code ******)0x0;
    param_2[5] = (code ******)0x0;
    param_2[4] = (code ******)0x0;
    param_2[1] = (code ******)0x0;
    *param_2 = (code ******)0x0;
    pppppppcVar40 = pppppppcVar21;
    FUN_108747dfc();
    if ((int)pppppppcVar40 == 0) {
      pppppppcVar40 = (code *******)&stack0xffffffffffffffd8;
      FUN_108747e24(param_2,pppppppcVar40);
      if (*(char *)((long)param_2 + 0x31) == '\x01') {
        FUN_10874737c(pppppppcVar21,pcVar7);
        pppppppcVar40 = (code *******)pcVar7;
      }
      goto LAB_10874fc0c;
    }
    UNRECOVERED_JUMPTABLE = (code *******)&stack0xffffffffffffffa0;
    param_3 = param_2 + 0x94;
    param_5 = param_2 + 0xa0;
  case 0x77:
    FUN_108747a3c(UNRECOVERED_JUMPTABLE,pppppppcVar21,param_3,pppppppcVar37,param_5);
    param_6 = (code *******)&stack0xffffffffffffffa0;
code_r0x00010874fb04:
    FUN_10874b684(pppppppcVar29,pppppppcVar37,pppppppcVar21,pcVar7,param_6);
    func_0x000108755f18(unaff_x20);
code_r0x00010874fb24:
    func_0x000108756678();
    FUN_10867d03c(param_2,extraout_x9_00 + extraout_x8_20);
    while( true ) {
      pppppppcVar26 = pppppppcVar106;
      pppppppcVar40 = unaff_x28;
      if (unaff_x21 != unaff_x20) {
        pppppppcVar26 = unaff_x20;
        pppppppcVar40 = unaff_x21;
      }
      if (unaff_x21 == unaff_x20 || unaff_x28 == pppppppcVar106) break;
      if (((ulong)unaff_x28[5] & 1) == 0) {
        if ((*(byte *)(unaff_x21 + 5) & 1) == 0) {
          ppppppcVar45 = unaff_x28[3];
          ppppppcVar44 = unaff_x21[3];
          goto LAB_10874fb78;
        }
LAB_10874fb94:
        func_0x0001087566a4();
        FUN_10867b444();
        unaff_x28 = unaff_x28 + 0x35;
      }
      else {
        if (*(byte *)(unaff_x21 + 5) != 0) {
          ppppppcVar45 = unaff_x28[4];
          ppppppcVar44 = unaff_x21[4];
LAB_10874fb78:
          if ((long)ppppppcVar44 < (long)ppppppcVar45) goto LAB_10874fb94;
        }
        FUN_10867b444(param_2,unaff_x21);
        unaff_x21 = unaff_x21 + 0x35;
      }
    }
    for (; pppppppcVar40 != pppppppcVar26; pppppppcVar40 = pppppppcVar40 + 0x35) {
      func_0x000108756400();
      FUN_10867b444();
    }
    *(byte *)(param_2 + 6) = ((byte)param_11 | (byte)unaff_x22) & 1;
    pppppppcVar40 = (code *******)&stack0xffffffffffffffb8;
    func_0x000108748ad0(param_2 + 3,pppppppcVar40);
    func_0x000108748a7c(&stack0xffffffffffffffa0);
LAB_10874fc0c:
    uVar38 = (long)pppppppcStack_70 + (long)unaff_x27 + (long)pppppppcVar49;
    if (0 < (int)uVar38) {
      ppppppcVar45 = param_2[0x9e];
      puVar17 = &stack0xffffffffffffffa0;
      func_0x0001087564f4(puVar17);
      (*(code *)(*ppppppcVar45)[0xf])(ppppppcVar45,puVar17,uVar38 & 0x7fffffff);
      func_0x000108755dd8();
      ppppppcVar45 = param_2[0x9e];
      func_0x0001087564f4();
      pppppppcVar40 = (code *******)0x6e0246;
      FUN_10874b9f8();
      func_0x000108756558();
      func_0x000108756174((*ppppppcVar45)[3]);
      (*extraout_x8_21)();
      func_0x000108755dd8();
    }
    puVar17 = &stack0xffffffffffffffd8;
    func_0x000108748a7c(puVar17);
    auVar84._8_8_ = pppppppcVar40;
    auVar84._0_8_ = puVar17;
    return auVar84;
  case 0x74:
    goto code_r0x00010874eac4;
  case 0x75:
    auVar74._1_7_ = 0;
    auVar74[0] = (int)param_2 != 2;
    auVar74._8_8_ = param_3;
    return auVar74;
  case 0x76:
    func_0x000107c2825c();
    pppppppcVar23 = (code *******)&stack0xffffffffffffffa8;
    func_0x000108755f6c(pppppppcVar23,param_2[0x69]);
    FUN_10874fa30();
    func_0x0001087564e0();
  case 0x9c:
SUB_10875624c:
    auVar85._8_8_ = param_2 + 4;
    auVar85._0_8_ = pppppppcVar23;
    return auVar85;
  case 0x7c:
  case 0xf7:
code_r0x00010874b348:
    puVar16 = pppppppcVar11;
    if ((*(byte *)((long)pppppppcVar11 + 0x70) & 1) != 0) {
LAB_10874b298:
      *puVar16 = 0;
      puVar16[1] = 0;
      func_0x0001087566a4();
      func_0x000108755e38();
      pppppppcVar11 = (code *******)puVar16;
    }
    param_2 = (code *******)param_2[0x1d];
    *(undefined8 *)((long)pppppppcVar11 + 0x28) = 0;
    *(undefined8 *)((long)pppppppcVar11 + 0x30) = 0;
    func_0x000108755cec();
    *(long *)((long)pppppppcVar11 + 0x18) = extraout_x8_17 + 0x10;
    *(undefined8 *)((long)pppppppcVar11 + 0x20) = 0;
    *(undefined4 *)((long)pppppppcVar11 + 0x38) = 0x2ba;
    pppppppcVar29 = pppppppcVar26 + 0x29;
    pppppppcVar26 = (code *******)((long)pppppppcVar11 + 0x18);
    func_0x000107c29054(pppppppcVar26,*(undefined4 *)pppppppcVar29);
    param_3 = (code *******)0x6e0247;
    FUN_10874b9f8();
    puVar17 = (undefined1 *)((long)pppppppcVar11 + 0x78);
    func_0x000107c2825c();
    *(undefined1 **)((long)pppppppcVar11 + 0x10) = puVar17;
    func_0x0001087566b0((*param_2)[3]);
    (*extraout_x8_18)();
    unaff_x30 = 0x10874b318;
    pppppppcVar12 = pppppppcVar11;
    goto SUB_108756304;
  case 0x7d:
  case 200:
  case 0xf8:
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x0001005fbb58();
    func_0x0001005fbb9c();
    func_0x0001005fbc34();
    goto code_r0x0001005f9520;
  case 0x7f:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZSt17rethrow_exceptionSt13exception_ptr_1103469c8)();
    auVar103._8_8_ = param_3;
    auVar103._0_8_ = param_2;
    return auVar103;
  case 0x80:
    goto code_r0x00010875b2f4;
  case 0x81:
    goto code_r0x000108756b18;
  case 0x83:
    goto code_r0x000108756308;
  case 0x84:
    goto LAB_10875b738;
  case 0x85:
    pppppppcVar26 = param_2 + 0x14;
    func_0x0001087567dc();
    pppppppcVar21 = param_4;
    goto code_r0x0001087526fc;
  case 0x86:
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_();
    FUN_10865aaac(pppppppcVar26,&uStack_78);
    func_0x00010875ab88();
    ___cxa_throw(pppppppcVar26);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x108759b2c);
    (*pcVar7)();
  case 0x89:
    *param_2 = (code ******)&PTR_FUN_110a6a690;
    param_2[1] = (code ******)&PTR_FUN_110a6a708;
    pppppppcVar26 = param_2 + 2;
    *pppppppcVar26 = (code ******)&PTR_DAT_110a6a738;
    func_0x000108750bd4(param_2 + 0x50);
    func_0x000107c28cc4(param_2 + 0x4e);
    goto code_r0x000108750b40;
  case 0x93:
    if (((pppppppcVar43 == (code *******)0x0) || ((in_x14 & 1) != 0)) ||
       (in_w15 <= (int)((long)(UNRECOVERED_JUMPTABLE + -0x21be9884) / 0x1a8))) {
      if (UNRECOVERED_JUMPTABLE != (code *******)&UNK_10df4c420) {
        func_0x000108756620(param_2[0x6c] + 5,UNRECOVERED_JUMPTABLE[-0x31],
                            UNRECOVERED_JUMPTABLE[-0x30]);
      }
    }
    else {
      func_0x000108756620(param_2[0x6c] + 5,0,0);
    }
    pppppppcVar23 = (code *******)&stack0xffffffffffffffa8;
    func_0x000108755f6c(pppppppcVar23,param_2[0x6a]);
    FUN_10874fa30();
    func_0x0001087564e0();
    goto SUB_10875624c;
  case 0x94:
    puVar16 = &uStack_78;
    func_0x000107c27f9c(puVar16);
    auVar75._8_8_ = param_3;
    auVar75._0_8_ = puVar16;
    return auVar75;
  case 0x95:
    goto code_r0x00010874ea80;
  case 0x96:
                    /* WARNING: Could not recover jumptable at 0x0001087562ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar87._8_8_ = param_3;
    auVar87._0_8_ = param_2;
    return auVar87;
  case 0x97:
    __Znwm();
    pppppppcVar40 = param_2 + 4;
    *param_2 = (code ******)FUN_108753430;
    param_2[1] = (code ******)FUN_108753538;
    FUN_108751f5c(pppppppcVar40,pppppppcVar21);
    func_0x0001087560e4();
    func_0x0001087558f4();
    param_2[0xe] = (code ******)pppppppcVar26;
    *(undefined1 *)(param_2 + 0x10) = 0;
    func_0x000108755d18();
    func_0x000108755b38();
    auVar82._8_8_ = pppppppcVar21;
    auVar82._0_8_ = pppppppcVar40;
    return auVar82;
  case 0x99:
    goto code_r0x00010874b574;
  case 0x9a:
code_r0x00010875b27c:
    func_0x000107c297b4(&pppppppcStack_70,param_2 + 1);
    param_10 = pppppppcStack_70;
    pppppppcStack_70 = (code *******)0x0;
    param_11 = pppppppcVar33;
    param_12 = param_2;
    func_0x00010875bf0c(&param_22);
    param_14 = *(code ********)((long)param_22 + 600);
    param_13 = *(code ********)((long)param_22 + 0x250);
    if (*(long *)((long)param_22 + 600) != 0) {
      do {
        func_0x00010875bee0();
      } while (extraout_w10_32 != 0);
    }
    param_15 = (code *******)CONCAT44(param_15._4_4_,*(undefined4 *)((long)param_2[0xb] + 0xfc));
    func_0x00010875bf14();
    pcVar7 = FUN_10875bb44;
    pppppppcStack_a0 = (code *******)FUN_10875bb44;
    pppppppcStack_98 = (code *******)&PTR_FUN_110a6aea8;
    pppppppcVar23 = (code *******)0x30;
    __Znwm();
    unaff_x24 = param_2;
    goto code_r0x00010875b2f4;
  case 0x9b:
    goto code_r0x000108759f5c;
  case 0x9d:
  case 0xa7:
    goto code_r0x000108759f34;
  case 0xa0:
    goto code_r0x000108756aac;
  case 0xa1:
  case 0xbd:
  case 0xe4:
    goto code_r0x000108756b30;
  case 0xa2:
    goto code_r0x000108757b14;
  case 0xa3:
    pppppppcVar26 = param_2;
    goto SUB_108756244;
  case 0xa4:
    func_0x000107c332c8();
    ___cxa_free_exception(pppppppcVar29);
    func_0x00010875aa74();
    func_0x00010875a7ec();
    ___cxa_end_catch();
    func_0x00010875a7c8();
    func_0x00010875a954();
    func_0x00010875a7e4();
    pppppppcVar23 = pppppppcVar29;
    goto LAB_10875a7b4;
  case 0xa6:
    goto code_r0x000108758b48;
  case 0xa8:
  case 0xce:
    func_0x00010875a8c0();
    func_0x00010875aaf4();
    func_0x00010875a7c8();
    goto code_r0x00010875a290;
  case 0xa9:
    goto SUB_10875a72c;
  case 0xaa:
    goto code_r0x000108757b28;
  case 0xac:
  case 0xee:
    goto code_r0x000108756a84;
  case 0xad:
  case 0xb3:
  case 0xef:
    goto code_r0x000108759728;
  case 0xaf:
  case 0xf1:
    UNRECOVERED_JUMPTABLE[0x14] = (code ******)0x0;
    pppppppcVar40 = unaff_x25 + 0xb;
    __ZNSt3__15mutex6unlockEv(pppppppcVar40);
    if (pppppppcVar21 == (code *******)0x0) {
      func_0x00010875aad0();
      param_2 = pppppppcVar40;
    }
    else {
      param_3 = param_2 + 4;
      (*(code *)(*pppppppcVar21)[2])(pppppppcVar21,param_3);
      func_0x00010875a95c();
      param_2 = pppppppcVar21;
    }
    func_0x00010875a9f8();
    func_0x00010875a954();
    func_0x00010875ab2c();
    func_0x00010875a7c8();
    goto code_r0x000108759344;
  case 0xb1:
    auVar88._8_8_ = param_3;
    auVar88._0_8_ = param_2;
    return auVar88;
  case 0xb4:
    goto code_r0x000108757334;
  case 0xb6:
  case 0xfc:
    goto code_r0x00010875af34;
  case 0xb7:
    func_0x0001087562f8();
    if ((extraout_x8_34 & 1) == 0) {
      func_0x000108756260();
      pppppppcVar26 = (code *******)*pppppppcVar23;
      func_0x000108755b1c();
      goto code_r0x0001087532b0;
    }
LAB_108753314:
    param_3 = param_2 + 9;
    FUN_1086cc64c(param_3);
    FUN_1087522bc(param_2 + 2,param_3);
    func_0x000108755b1c();
    func_0x000108755ac8();
    func_0x000108755e30();
    func_0x000108755c40();
    func_0x000108755ce4();
    goto code_r0x00010bdbd7ac;
  case 0xb8:
    goto code_r0x000108756248;
  case 0xbb:
  case 0xe2:
    func_0x000108755b94();
    ___cxa_end_catch();
    func_0x000108755ad8();
    func_0x000108755ae0();
    ___cxa_end_catch();
    func_0x000108755ac8();
    func_0x000108755ae8();
    auVar79._8_8_ = param_3;
    auVar79._0_8_ = param_2;
    return auVar79;
  case 0xbc:
  case 0xe3:
    goto code_r0x00010875b248;
  case 0xbe:
  case 0xe5:
    func_0x0001087557a0();
    func_0x000108755748();
    func_0x00010875571c();
    pppppppcVar26 = param_2;
    break;
  case 0xbf:
  case 0xe6:
    goto code_r0x000108757b2c;
  case 0xc0:
  case 0xe7:
    goto code_r0x00010875b344;
  case 0xc1:
  case 0xd3:
  case 0xe8:
    pppppcVar42 = (code *****)
                  ((ulong)*(ushort *)(&UNK_10df4c420 + (long)UNRECOVERED_JUMPTABLE * 2) + 0x10);
    *pppppppcVar26 = (code ******)*pppppcVar42;
    *pppppcVar42 = (code ****)pppppppcVar26;
    ppppppcVar45 = *param_2;
    ppppppcVar45[0x10df4c420] = pppppcVar42;
    if (*pppppppcVar26 != (code ******)0x0) {
      pppppppcVar40 = (code *******)(*pppppppcVar26)[1];
      if (UNRECOVERED_JUMPTABLE < (code *******)0x2) {
        pppppppcVar40 = (code *******)((ulong)pppppppcVar40 & (long)param_2 + 0x56fU);
      }
      else if (pppppppcVar37 <= pppppppcVar40) {
        uVar38 = 0;
        if (pppppppcVar37 != (code *******)0x0) {
          uVar38 = (ulong)pppppppcVar40 / (ulong)pppppppcVar37;
        }
        pppppppcVar40 = (code *******)((long)pppppppcVar40 - uVar38 * (long)pppppppcVar37);
      }
      ppppppcVar45[(long)pppppppcVar40] = (code *****)pppppppcVar26;
    }
LAB_108758368:
    param_2[3] = (code ******)((long)param_2[3] + 1);
    auVar91._8_8_ = param_3;
    auVar91._0_8_ = param_2;
    return auVar91;
  case 0xc2:
  case 0xe9:
    goto code_r0x000108759f1c;
  case 0xc3:
    goto code_r0x00010874ab14;
  case 0xc4:
    pppppppcVar29 = param_2;
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x00010086ab64();
    if ((bool)in_ZR) {
      uVar32 = 0x20;
    }
    else {
      if (pppppppcVar29 == (code *******)0x0) goto code_r0x00010055318c;
      uVar32 = 0x28;
    }
    func_0x00010086abd4(uVar32);
code_r0x00010055318c:
    auVar60._8_8_ = param_3;
    auVar60._0_8_ = param_2;
    return auVar60;
  case 0xc5:
    goto code_r0x000108751694;
  case 0xc6:
    uStack_78._5_3_ = (undefined3)((ulong)pppppppcVar36 >> 0x28);
    uStack_78._0_5_ = (uint5)uVar47;
    pppppppcStack_80 = UNRECOVERED_JUMPTABLE;
    FUN_10874d5d0(param_2 + 0x29,&pppppppcStack_80);
    func_0x000107c27f98(&pppppppcStack_80);
    func_0x000107c289dc(&pppppppcStack_70);
    auVar73._8_8_ = pppppppcVar27;
    auVar73._0_8_ = param_2;
    return auVar73;
  case 199:
    func_0x000108755ae8();
    func_0x000108755bc8();
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x000108755974();
    ppuVar28 = (undefined **)param_3;
    goto code_r0x000108751694;
  case 0xc9:
    pppppppcStack_a0 = pppppppcVar26;
    pppppppcStack_98 = param_2;
    pppppppcStack_90 = pppppppcVar40;
    func_0x0001005fb940(param_2 + 2,&UNK_10dd62ad6);
    func_0x0001005fb990();
    param_3 = (code *******)0x0;
code_r0x0001005f9520:
    if (param_3 != (code *******)0x0) {
      pppppppcVar40 = param_3 + 1;
      do {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppcVar40,0x10);
        if (bVar15) {
          *pppppppcVar40 = *pppppppcVar40 + 0x40000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pppppppcVar37 = (code *******)*param_2;
    pppppppcVar40 = param_2;
    pppppppcVar26 = param_3;
    if (pppppppcVar37 != (code *******)0x0) {
      pppppppcVar49 = pppppppcVar37 + 1;
      do {
        ppppppcVar45 = *pppppppcVar49;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppcVar49,0x10);
        if (bVar15) {
          *pppppppcVar49 = ppppppcVar45 + -0x40000000;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((ulong)ppppppcVar45 >> 0x21 == 1) {
        pppppppcVar26 = (code *******)0x1;
        pppppppcVar40 = pppppppcVar37;
        pppppppcStack_b0 = pppppppcVar21;
        pppppppcStack_a8 = pppppppcVar29;
        (*(code *)(*pppppppcVar37)[2])(pppppppcVar37,1,param_2);
        do {
          ppppppcVar45 = *pppppppcVar49;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(pppppppcVar49,0x10);
          if (bVar15) {
            *pppppppcVar49 = (code ******)((long)ppppppcVar45 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((code ******)((long)ppppppcVar45 + -1) == (code ******)0x0) {
          (*(code *)(*pppppppcVar37)[1])(pppppppcVar37);
          pppppppcVar40 = pppppppcVar37;
        }
      }
    }
    *param_2 = (code ******)param_3;
    auVar64._8_8_ = pppppppcVar26;
    auVar64._0_8_ = pppppppcVar40;
    return auVar64;
  case 0xca:
    func_0x000108756764(param_2,param_3,pppppppcVar29);
code_r0x00010874b574:
    FUN_10874bb4c();
    ___cxa_end_catch();
    param_2 = (code *******)0x0;
    pppppppcVar21 = param_3;
LAB_108755a40:
    auVar81._8_8_ = pppppppcVar21;
    auVar81._0_8_ = param_2;
    return auVar81;
  case 0xcb:
    goto code_r0x00010874ea48;
  case 0xd0:
    goto code_r0x000108759f0c;
  case 0xd1:
    do {
      func_0x00010875583c();
    } while (extraout_w10_17 != 0);
    func_0x000108755af0(param_2[4]);
    if ((extraout_w8_10 >> 1 & 1) == 0) {
      *(undefined1 *)(param_2 + 6) = 0;
      func_0x000108755790();
      if (*pppppppcVar23 == (code ******)0x0) {
        func_0x000107c3a5c0();
      }
      func_0x000108755c18();
      plVar24 = extraout_x8_22;
      do {
        if (*plVar24 == 0) {
          func_0x000108755890();
          plVar24 = extraout_x8_24;
          uVar47 = extraout_w10_19;
          uVar38 = extraout_x11_09;
        }
        else {
          func_0x000108755b70();
          plVar24 = extraout_x8_23;
          uVar47 = extraout_w10_18;
          uVar38 = extraout_x11_08;
        }
        if ((uVar38 & 1) != 0) {
          func_0x0001087557ec();
          if ((bool)in_ZR) {
            func_0x000108755860();
            func_0x0001087557a0();
            func_0x000108755748();
          }
          func_0x00010875571c();
          goto LAB_1087557c4;
        }
      } while ((uVar47 >> 1 & 1) == 0);
    }
    func_0x000108756044();
    func_0x000108755b14();
    func_0x000108755afc();
    func_0x000108755ad0();
    func_0x000108755ac8();
    goto code_r0x00010bdbd7ac;
  case 0xd2:
    FUN_1087313f0(UNRECOVERED_JUMPTABLE);
    func_0x000107c27f9c(param_2 + 0x95);
    goto code_r0x000108759f0c;
  case 0xd4:
    goto code_r0x00010875af0c;
  case 0xd5:
    func_0x00010875c544();
    uStack_78 = pppppppcVar29;
    pppppppcStack_70 = pppppppcVar29;
    pppppppcVar26 = (code *******)&stack0xffffffffffffffb0;
    for (pppppppcVar40 = param_2; pppppppcVar40 != (code *******)pcVar7;
        pppppppcVar40 = pppppppcVar40 + 7) {
      func_0x000107c27994(pppppppcVar29,pppppppcVar40);
      ppppppcVar44 = pppppppcVar40[4];
      ppppppcVar45 = pppppppcVar40[3];
      uVar32 = *(undefined8 *)((long)pppppppcVar40 + 0x24);
      *(undefined8 *)((long)pppppppcVar29 + 0x2c) = *(undefined8 *)((long)pppppppcVar40 + 0x2c);
      *(undefined8 *)((long)pppppppcVar29 + 0x24) = uVar32;
      pppppppcVar29[4] = ppppppcVar44;
      pppppppcVar29[3] = ppppppcVar45;
      pppppppcVar29 = pppppppcVar26 + 7;
      pppppppcVar26 = pppppppcVar29;
    }
    FUN_10875c698(&stack0xffffffffffffffb0);
    pppppppcStack_70 = pppppppcVar29;
    func_0x00010875c960(&stack0xffffffffffffffa0);
    ppppppcVar45 = param_2[0xbc];
    if (ppppppcVar45 == (code ******)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10875cb74);
      (*pcVar7)();
    }
    param_3 = (code *******)&uStack_78;
    (*(code *)(*ppppppcVar45)[6])(ppppppcVar45,param_3);
    goto code_r0x00010875cb44;
  case 0xd6:
    goto code_r0x00010875af08;
  case 0xd8:
    FUN_108758ce8();
    param_2[5] = (code ******)uStack_78;
    *pppppppcVar26 = (code ******)pppppppcStack_80;
    goto code_r0x00010875a328;
  case 0xd9:
    goto LAB_10874f144;
  case 0xdc:
    goto code_r0x00010875b70c;
  case 0xdd:
    param_7 = &stack0xffffffffffffffa8;
    param_8 = param_2 + 0x84;
    pppppppcVar23 = pppppppcVar26;
    goto code_r0x00010874f318;
  case 0xdf:
    func_0x00010875a81c();
    func_0x00010875a9b0((*(code *******)pcVar7)[3]);
    func_0x00010875a824();
    func_0x00010875a938();
    in_stack_000001b0 = CONCAT44(in_stack_000001b0._4_4_,0x1f5);
    func_0x00010875a81c();
    func_0x00010875a9b0((*(code *******)pcVar7)[3]);
    func_0x00010875a824();
    pppppppcVar40 = uStack_78;
    pppppppcVar26 = param_2 + 3;
    ppppppcVar45 = *pppppppcVar26;
    do {
      in_stack_00000190 = (undefined **)0x0;
      ppppppcVar44 = ppppppcVar45 + 2;
      param_3 = (code *******)&stack0x00000190;
      func_0x00010875a720(ppppppcVar44,param_3);
      if ((int)ppppppcVar44 != 0) {
        FUN_108758c80(ppppppcVar45 + 0x13);
        ppppppcVar44 = *pppppppcVar21;
        ppppppcVar45[0x14] = (code *****)param_2[0xa1];
        ppppppcVar45[0x13] = (code *****)ppppppcVar44;
        ppppppcVar45[0x15] = (code *****)*pppppppcVar40;
        *pppppppcVar21 = (code ******)0x0;
        param_2[0xa1] = (code ******)0x0;
        param_2[0xa2] = (code ******)0x0;
        *(undefined1 *)(ppppppcVar45 + 0x16) = 1;
        *(undefined1 *)(ppppppcVar45 + 0x17) = 1;
        func_0x00010875a874(ppppppcVar45 + 2);
        param_3 = pppppppcVar26;
        func_0x000107c31508(ppppppcVar45,pppppppcVar26);
        break;
      }
    } while (((uint)in_stack_00000190 >> 1 & 1) == 0);
    func_0x00010875a82c(pppppppcVar26);
    func_0x00010875aa00();
    FUN_108638118(pppppppcVar21);
    func_0x000107c29108(unaff_x28);
code_r0x000108756ff0:
    func_0x00010875a8a0();
code_r0x000108756ff4:
    func_0x00010875a7c8();
    func_0x00010875a7e4();
    if (*(code ********)PTR____stack_chk_guard_11034bdc0 == pppppppcStack_70) {
      auVar90._8_8_ = param_3;
      auVar90._0_8_ = unaff_x28;
      return auVar90;
    }
    ___stack_chk_fail();
LAB_1087570a4:
    func_0x000108757d20();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x108757268);
    (*pcVar7)();
  case 0xe1:
    goto code_r0x00010874fb24;
  case 0xea:
    goto code_r0x00010874af14;
  case 0xeb:
    func_0x000108755c9c();
    func_0x000108755dc8();
code_r0x00010874ea48:
    func_0x000108755d90();
    if ((int)pppppppcVar21 == 3) {
      func_0x000108755c54();
      func_0x00010875590c();
      if (((extraout_w8_08 >> 1 & 1) == 0) &&
         (func_0x00010875590c(), (extraout_w8_09 >> 5 & 1) == 0)) {
        func_0x000108755e20();
        func_0x000108755fa8();
        if (param_2 != (code *******)0x0) {
code_r0x00010874ea80:
          if ((((ulong)param_2[5] & 1) == 0) && (*(char *)(param_2 + 0x32) != '\0')) {
            func_0x000108755bf0();
            func_0x000108755950();
          }
        }
        bVar15 = false;
      }
      else {
        func_0x000108755ad0();
        bVar15 = true;
      }
      ___cxa_end_catch();
      if (bVar15) {
code_r0x00010874eac4:
      }
      else {
LAB_10874e96c:
        func_0x000108755ad0();
      }
      func_0x000108755d38();
      pppppppcVar40 = param_2;
    }
    else {
      if ((int)pppppppcVar21 == 2) {
        func_0x000108755c54();
        ___cxa_end_catch();
        goto LAB_10874e96c;
      }
      func_0x000108755d38();
      func_0x000108755c54();
      func_0x000108755ae0();
      ___cxa_end_catch();
      pppppppcVar40 = param_2;
    }
    func_0x000108755ac8();
    func_0x000108755be8();
    func_0x000108755ae8();
    goto LAB_1087557d4;
  case 0xf2:
    goto LAB_10875aed4;
  case 0xf4:
    goto code_r0x000108757b38;
  case 0xfa:
    goto code_r0x000108757b50;
  case 0xfb:
    goto code_r0x00010875b704;
  }
  auVar86._8_8_ = param_3;
  auVar86._0_8_ = pppppppcVar26;
  return auVar86;
code_r0x000108751694:
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 4);
  goto LAB_108755b60;
code_r0x000108750b40:
  pppppppcVar23 = param_2 + 0x46;
  ppuVar28 = (undefined **)param_3;
code_r0x000108750b44:
  func_0x000107c28eb4(pppppppcVar23);
  func_0x000107c289f8(param_2 + 0x40);
  func_0x000107c289f8(param_2 + 0x3a);
  func_0x000107c289f8(param_2 + 0x34);
  func_0x000107c289f8(param_2 + 0x2e);
  func_0x000107c289f8(param_2 + 0x28);
  func_0x000107c289f8(param_2 + 0x22);
  func_0x000107c27914(param_2 + 0x1f);
  func_0x000107c288a4(param_2 + 0x1d);
  func_0x000107c28abc(param_2 + 0x1b);
  func_0x000107c29188(param_2 + 0x19);
  func_0x000107c28ec0(param_2 + 0x17);
  func_0x000107c28ebc(param_2 + 0x15);
  func_0x000107c28808(param_2 + 0x13);
  func_0x000107c27a6c(param_2 + 0x11);
  FUN_10865a95c(param_2 + 5);
  FUN_108687d5c(pppppppcVar26);
  pppppppcVar26 = param_2;
  goto LAB_108755b60;
code_r0x00010875a290:
  func_0x000107c288ac(param_2 + 5);
  goto code_r0x00010bdbd7ac;
code_r0x00010874f318:
  func_0x000108755e38(pppppppcVar23,param_3,0,0x100000001,param_6,param_7,param_8);
  func_0x000108756558();
LAB_10874f144:
  func_0x000108756388(param_2[0x69]);
  func_0x000108756378();
  pppppppcVar40 = extraout_x8_19;
  FUN_10874fd24(extraout_x8_19);
  func_0x000108755ad0();
  func_0x000108756324();
  func_0x000108755e18();
  func_0x000108755c10();
  func_0x000108755ac8();
  func_0x000108755ae8();
  goto LAB_1087557d4;
code_r0x000108757a68:
  func_0x000107c27c54(unaff_x26 + 0xf,&stack0x000002e0);
  func_0x00010875866c(unaff_x26 + 0x13);
  param_2[0xd0] = param_2[0xe2];
  param_2[0xcf] = param_2[0xe1];
  unaff_x26[0x17] = (code ******)CONCAT44(in_stack_00000324,in_stack_00000320);
  UNRECOVERED_JUMPTABLE = (code *******)(ulong)in_stack_00000328;
  goto code_r0x000108757aac;
code_r0x000108757868:
  func_0x000107c316c8(&param_30,&UNK_10f4ba083);
  FUN_1086a3f6c(&stack0x000002c0,pppppppcVar54 + 0x91,param_2 + 0x82);
  FUN_108758394(&stack0x000002e0,param_2,&stack0x000002c0);
  if (in_stack_00000248 == '\x01') {
    func_0x000107c3194c(&stack0x000001d8,&stack0x000002e0);
    func_0x000107c27b9c(unaff_x26 + 3,&stack0x000002f8);
    func_0x000107c27c54(unaff_x26 + 6,&stack0x00000310);
    func_0x000107c27c54(unaff_x26 + 10,&stack0x00000330);
  }
  else {
    FUN_1086372ac(&stack0x000001d8,&stack0x000002e0);
  }
  pppppppcVar37 = (code *******)0x110;
  func_0x00010875aa08();
  func_0x00010875aac0();
  puVar16 = (undefined8 *)&param_30;
  goto LAB_108757ad4;
  while (((uint)uStack_78 >> 1 & 1) == 0) {
LAB_108759a6c:
    func_0x00010875a6e8();
    if ((int)pppppppcVar23 != 0) {
      func_0x000108733b60(param_2 + 0x94);
      FUN_108730e90(param_2 + 0x94,pppppppcVar21);
      *(undefined1 *)(param_2 + 0x9a) = 1;
      goto code_r0x000108759a9c;
    }
  }
LAB_108759ab0:
  func_0x00010875a750();
  func_0x00010875a7f4();
code_r0x000108759ab8:
  func_0x00010875a7c8();
  func_0x00010875a880();
  func_0x00010875a7e4();
  goto LAB_10875a7b4;
LAB_10874b900:
  while (pppppppcVar21 = pppppppcVar40, pppppppcVar40 = pppppppcVar21 + 3,
        pppppppcVar40 != pppppppcVar26) {
    pppppppcVar37 = param_4;
    param_3 = pppppppcVar40;
    FUN_108750ae4(param_4,pppppppcVar40);
    if (((ulong)pppppppcVar37 & 1) == 0) {
      ppppppcVar44 = pppppppcVar21[4];
      ppppppcVar45 = *pppppppcVar40;
      pppppppcVar29[2] = pppppppcVar21[5];
      pppppppcVar29[1] = ppppppcVar44;
      *pppppppcVar29 = ppppppcVar45;
      pppppppcVar29 = pppppppcVar29 + 3;
    }
  }
  goto LAB_10874b934;
code_r0x00010873e590:
  if ((ppppppcVar45[0x1e] == (code *****)0x0) && (ppppppcVar45[0x21] == (code *****)0x0)) {
code_r0x00010873eb40:
    func_0x00010873f518();
    func_0x00010873f49c();
    goto code_r0x00010bdbd7ac;
  }
  goto code_r0x00010873e5a0;
  while( true ) {
    pppppppcVar40 = param_4;
    FUN_108752af8(param_4,ppppppcVar51);
    puVar6 = PTR___ZSt7nothrow_1103469d8;
    lVar22 = lVar22 + -0x1a8;
    if ((int)pppppppcVar40 != 0) break;
LAB_10874b728:
    ppppppcVar51 = ppppppcVar51 + -0x35;
    ppppppcVar52 = ppppppcVar45;
    if (ppppppcVar45 == ppppppcVar51) goto LAB_10874b7f0;
  }
  pppppppcVar26 = (code *******)0x0;
  pppppppcVar40 = (code *******)(lVar22 / 0x1a8 + 1);
  if (0x350 < lVar22) {
    pppppppcVar26 = pppppppcVar40;
    uStack_78 = pppppppcVar40;
    pppppppcStack_70 = param_3;
    if (0x4d4873ecade303 < (long)pppppppcVar40) {
      pppppppcVar26 = (code *******)0x4d4873ecade304;
    }
    for (; 0 < (long)pppppppcVar26; pppppppcVar26 = (code *******)((ulong)pppppppcVar26 >> 1)) {
      lVar22 = (long)pppppppcVar26 * 0x1a8;
      __ZnwmRKSt9nothrow_t(lVar22,puVar6);
      if (lVar22 != 0) goto LAB_10874b7b0;
    }
    lVar22 = 0;
LAB_10874b7b0:
    param_10 = pppppppcVar26;
    FUN_108752dc0(&stack0xffffffffffffffc0,lVar22);
    FUN_108752dd8(&stack0xfffffffffffffff8);
    pppppppcVar40 = uStack_78;
    param_3 = pppppppcStack_70;
  }
  FUN_108752b18(ppppppcVar45,ppppppcVar51,&stack0xffffffffffffffa8,pppppppcVar40,0,pppppppcVar26);
  FUN_108752dd8(&stack0xffffffffffffffc0);
  ppppppcVar52 = ppppppcVar45;
LAB_10874b7f0:
  param_10 = (code *******)0x0;
  param_11 = (code *******)0x0;
  puVar17 = &stack0xfffffffffffffff8;
  FUN_10867d03c(puVar17,((long)param_6[1] - (long)ppppppcVar52) / 0x1a8);
  ppppppcVar45 = param_6[1];
  for (ppppppcVar52 = ppppppcVar52 + 4; ppppppcVar52 + -4 != ppppppcVar45;
      ppppppcVar52 = ppppppcVar52 + 0x35) {
    func_0x000108756708();
    FUN_1087470cc();
    if ((int)puVar17 == 1) {
      if ((((ulong)ppppppcVar57 & 1) == 0) ||
         ((*(char *)(ppppppcVar52 + 1) == '\x01' && ((long)ppppppcVar44 <= (long)*ppppppcVar52))))
      goto LAB_10874b878;
    }
    else if (((int)puVar17 == 0) &&
            ((((ulong)ppppppcVar2 & 1) == 0 ||
             ((*(char *)(ppppppcVar52 + 1) == '\x01' && ((long)*ppppppcVar52 <= (long)ppppppcVar34))
             )))) {
LAB_10874b878:
      puVar17 = &stack0xfffffffffffffff8;
      FUN_10867b444(puVar17,ppppppcVar52 + -4);
    }
  }
  FUN_108747820(&stack0xffffffffffffffc0,param_4,param_3,param_2 + 0x1f,&stack0xfffffffffffffff8,
                &stack0xffffffffffffffa8);
  FUN_10869ccc0(&stack0xffffffffffffffa8);
  *(byte *)(param_6 + 6) = *(byte *)(param_6 + 6) | (byte)unaff_x29;
  func_0x0001087566a4();
  FUN_1086a4174();
  pppppppcVar26 = (code *******)param_6[4];
  for (pppppppcVar40 = (code *******)param_6[3]; pppppppcVar29 = pppppppcVar26,
      pppppppcVar40 != pppppppcVar26; pppppppcVar40 = pppppppcVar40 + 3) {
    pppppppcVar21 = param_4;
    param_3 = pppppppcVar40;
    FUN_108750ae4(param_4,pppppppcVar40);
    pppppppcVar29 = pppppppcVar40;
    if ((int)pppppppcVar21 != 0) goto LAB_10874b900;
  }
LAB_10874b934:
  pppppppcVar40 = (code *******)param_6[4];
  if (pppppppcVar29 != pppppppcVar40) {
    param_6[4] = (code ******)pppppppcVar29;
    param_3 = pppppppcVar40;
  }
  func_0x0001087562e8();
  func_0x00010867b9fc(&stack0xfffffffffffffff8);
  puVar16 = &param_12;
  func_0x000108748a7c(puVar16);
  auVar71._8_8_ = param_3;
  auVar71._0_8_ = puVar16;
  return auVar71;
code_r0x00010875b6fc:
  param_2 = (code *******)**param_2;
code_r0x00010875b704:
code_r0x00010875b70c:
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  auVar104._8_8_ = param_3;
  auVar104._0_8_ = param_2;
  return auVar104;
code_r0x000108751e9c:
  *(undefined8 *)((long)param_2 + 0x59) = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_2 + 0x51) = *(undefined8 *)((long)param_2 + 0x31);
  param_2[10] = in_register_00005008;
  param_2[9] = param_1;
LAB_108755b60:
  auVar83._8_8_ = ppuVar28;
  auVar83._0_8_ = pppppppcVar26;
  return auVar83;
code_r0x00010875a328:
  param_2[6] = (code ******)pppppppcStack_70;
  pppppppcStack_80 = (code *******)0x0;
  uStack_78 = (code *******)0x0;
  pppppppcStack_70 = (code *******)0x0;
code_r0x00010875a338:
  *(undefined1 *)(param_2 + 7) = 1;
  FUN_108638118(&pppppppcStack_80);
code_r0x00010875a348:
  pppppcVar42 = param_2[4][0x14];
  param_2[4][0x14] = (code *****)0x0;
  __ZNSt3__15mutex6unlockEv(param_2 + 0xb9);
  if (pppppcVar42 == (code *****)0x0) {
    func_0x00010875aad0();
  }
  else {
    param_3 = param_2 + 4;
    (*(code *)(*pppppcVar42)[2])(pppppcVar42,param_3);
    func_0x00010875a990();
  }
  func_0x00010875a9f8();
  pppppppcVar23 = param_2 + 8;
  func_0x000107c27f9c(pppppppcVar23);
  func_0x00010875ab2c();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
LAB_10875a7b4:
  auVar96._8_8_ = param_3;
  auVar96._0_8_ = pppppppcVar23;
  return auVar96;
code_r0x000108759f0c:
  func_0x00010875ab50();
  func_0x00010875a8b0();
  pppppppcVar23 = param_2 + 0x41;
  func_0x000107c316d0(pppppppcVar23);
code_r0x000108759f1c:
  func_0x00010875aa00();
  func_0x00010875aa94();
  func_0x00010875ab18();
  if ((int)pcVar7 == 2) {
    pppppppcVar26 = (code *******)param_2[0x98];
code_r0x000108759f34:
    func_0x00010875aa74();
    pppppppcVar26 = (code *******)pppppppcVar26[0x19];
code_r0x000108759f44:
    func_0x00010875a918();
code_r0x000108759f5c:
    pppppppcStack_70 = (code *******)CONCAT44(pppppppcStack_70._4_4_,10);
    pppppppcVar40 = (code *******)&pppppppcStack_70;
    FUN_108843ae8(pppppppcVar40);
    ppppppcVar45 = (code ******)&stack0xffffffffffffff98;
    func_0x000107c28824(ppppppcVar45,param_2 + 0x92,pppppppcVar40);
    func_0x00010875a81c();
    pppppppcStack_80 = (code *******)ppppppcVar45;
    func_0x00010875aa88((*pppppppcVar26)[3]);
    func_0x00010875a910();
    func_0x00010875a854();
    ppppppcVar45 = param_2[3];
    do {
      pppppppcVar23 = (code *******)(ppppppcVar45 + 2);
      param_3 = (code *******)&stack0xffffffffffffff98;
      func_0x00010875a720(pppppppcVar23,param_3);
    } while ((int)pppppppcVar23 == 0);
    func_0x00010875a8a8();
    *(undefined4 *)(ppppppcVar45 + 0x13) = 10;
    *(undefined1 *)(ppppppcVar45 + 0x16) = 0;
    func_0x00010875a67c();
    func_0x00010875a750();
    ___cxa_end_catch();
    func_0x00010875a8a0();
  }
  else {
    func_0x00010875a8a0();
    func_0x00010875aa74();
    func_0x00010875a7ec();
    ___cxa_end_catch();
  }
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  auVar93._8_8_ = param_3;
  auVar93._0_8_ = pppppppcVar23;
  return auVar93;
code_r0x00010875b2f4:
  pppppppcVar23[1] = (code ******)param_11;
  *pppppppcVar23 = (code ******)param_10;
  pppppppcVar26 = pppppppcVar23;
  if (param_11 != (code *******)0x0) {
LAB_10875b30c:
    do {
      pppppppcVar23 = pppppppcVar26;
      func_0x00010875bee0();
      pppppppcVar26 = pppppppcVar23;
    } while (extraout_w10_33 != 0);
  }
  pppppppcVar23[3] = (code ******)param_13;
  pppppppcVar23[2] = (code ******)param_12;
  pppppppcVar23[4] = (code ******)param_14;
  if (param_14 != (code *******)0x0) {
    do {
      func_0x00010875bee0();
    } while (extraout_w10_34 != 0);
  }
  *(undefined4 *)(pppppppcVar23 + 5) = param_15._0_4_;
  pppppppcVar56 = (code *******)param_2[1];
  unaff_x27 = (code *******)param_2[2];
  pppppppcVar26 = pppppppcVar23;
  pppppppcStack_90 = pppppppcVar23;
code_r0x00010875b344:
  param_20 = pppppppcVar56;
  param_21 = unaff_x27;
  if (unaff_x27 == (code *******)0x0) {
    ppppppcVar45 = param_2[0xb];
  }
  else {
    do {
      func_0x00010875bee0();
    } while (extraout_w10_35 != 0);
    ppppppcVar45 = param_2[0xb];
    do {
      func_0x00010875bee0();
    } while (extraout_w10_36 != 0);
  }
  ppppppcVar44 = (code ******)0xb8;
  param_16 = pppppppcVar56;
  __Znwm();
  ppppppcVar34 = ppppppcVar44 + 1;
  *ppppppcVar34 = (code *****)0x0;
  ppppppcVar44[2] = (code *****)0x0;
  *ppppppcVar44 = (code *****)&PTR_FUN_110a6ad68;
  param_22 = FUN_10875b844;
  param_23 = &PTR_FUN_110a6ada8;
  param_16 = (code *******)0x0;
  ppppppcVar57 = ppppppcVar44 + 3;
  *ppppppcVar57 = (code *****)&PTR_DAT_110a6ade8;
  ppppppcStack_d8 = (code ******)0x10875b8c8;
  ppppppcStack_d0 = (code ******)&PTR_DAT_110a6adc0;
  uStack_c0 = 0;
  ppppppcVar44[4] = (code *****)0x10875b8c8;
  ppppppcVar44[5] = (code *****)&PTR_DAT_110a6adc0;
  ppppppcVar44[7] = (code *****)unaff_x25;
  ppppppcVar44[6] = (code *****)unaff_x26;
  uStack_c8 = 0;
  ppppppcVar44[8] = (code *****)unaff_x24;
  ppppppcVar44[10] = (code *****)pcVar7;
  ppppppcVar44[0xb] = (code *****)&PTR_FUN_110a6aea8;
  ppppppcVar44[0xc] = (code *****)pppppppcVar26;
  pppppppcStack_90 = (code *******)0x0;
  ppppppcVar44[0x10] = (code *****)FUN_10875b844;
  ppppppcVar44[0x11] = (code *****)&PTR_FUN_110a6ada8;
  ppppppcVar44[0x12] = (code *****)pppppppcVar56;
  ppppppcVar44[0x13] = (code *****)unaff_x27;
  param_24 = 0;
  param_25 = 0;
  ppppppcVar44[0x16] = (code *****)ppppppcVar45;
  pppppppcStack_b8 = unaff_x24;
  func_0x000107c297a4(&uStack_c8);
  func_0x000107c297a8(&param_24);
  func_0x000107c297a8(&param_16);
  param_18 = 0;
  param_19 = 0;
  pppppppcStack_80 = (code *******)ppppppcVar57;
  uStack_78 = (code *******)ppppppcVar44;
  func_0x00010875be98(&param_18);
  func_0x000107c297a8(&param_20);
  func_0x00010875bef0();
  FUN_10875b7f4(&param_10);
  func_0x00010875bf0c(&param_22);
  plVar24 = *(long **)(param_22 + 0x50);
  do {
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(ppppppcVar34,0x10);
    if (bVar15) {
      *ppppppcVar34 = (code *****)((long)*ppppppcVar34 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar17 = &stack0xffffffffffffffd0;
  ppppppcStack_d8 = ppppppcVar57;
  ppppppcStack_d0 = ppppppcVar44;
  (**(code **)(*plVar24 + 0x48))(plVar24,puVar17,&ppppppcStack_d8,param_2 + 0x37);
  func_0x00010875bebc(&ppppppcStack_d8);
  func_0x00010875bf14();
  func_0x00010875be98(&pppppppcStack_80);
  func_0x000107c297a4(&pppppppcStack_70);
  func_0x000107c297a4(&stack0xffffffffffffffb0);
  puVar25 = &stack0xffffffffffffffd0;
  FUN_1089064c8();
  if (*(code ********)PTR____stack_chk_guard_11034bdc0 == pppppppcStack_70) {
    auVar99._8_8_ = puVar17;
    auVar99._0_8_ = puVar25;
    return auVar99;
  }
  ___stack_chk_fail();
  func_0x00010875bebc(&ppppppcStack_d8);
  func_0x00010875bf14();
  func_0x00010875be98(&pppppppcStack_80);
  func_0x000107c297a4(&pppppppcStack_70);
  func_0x000107c297a4(&stack0xffffffffffffffb0);
  puVar16 = (undefined8 *)&stack0xffffffffffffffd0;
  FUN_1089064c8();
  func_0x00010875bf04();
  pppppppcStack_a0 = pppppppcVar26;
  pppppppcStack_98 = (code *******)puVar25;
  pppppppcStack_90 = pppppppcVar40;
  puVar16[1] = *puVar16;
  puVar16[3] = 0;
  *(undefined1 *)(puVar16 + 5) = 0;
  if ((int)puVar17 != 0) {
    func_0x000107c28298();
  }
  auVar61._8_8_ = puVar17;
  auVar61._0_8_ = puVar16;
  return auVar61;
code_r0x00010875b730:
  pppppppcVar23 = (code *******)param_2[1];
  pppppppcVar26 = param_2;
LAB_10875b738:
  while (pppppppcVar23 != pppppppcVar20) {
    param_2 = pppppppcVar23 + -7;
code_r0x00010875b744:
    func_0x000107c27914();
    pppppppcVar23 = param_2;
  }
  pppppppcVar26[1] = (code ******)pppppppcVar20;
  param_2 = pppppppcVar23;
LAB_10084fb04:
  auVar65._8_8_ = param_3;
  auVar65._0_8_ = param_2;
  return auVar65;
code_r0x00010875971c:
  func_0x000107c27c5c(pppppppcVar26 + 6,pppppppcVar23 + 6);
code_r0x000108759728:
  param_2 = pppppppcVar26;
  param_3 = pppppppcVar23 + 10;
  func_0x000107c27c5c(param_2 + 10,param_3);
code_r0x00010057715c:
  auVar62._8_8_ = param_3;
  auVar62._0_8_ = param_2;
  return auVar62;
code_r0x000108759344:
  func_0x00010875a7e4();
  auVar92._8_8_ = param_3;
  auVar92._0_8_ = param_2;
  return auVar92;
SUB_108756304:
  pppppppcVar13 = pppppppcVar12;
  pppppppcVar23 = (code *******)((long)pppppppcVar12 + 0x18);
code_r0x000108756308:
  pcVar7 = (code *)pppppppcVar23;
  pppppppcVar8 = pppppppcVar13;
code_r0x0001005505e4:
  *(code ********)((long)pppppppcVar8 + -0x20) = pppppppcVar26;
  *(code ********)((long)pppppppcVar8 + -0x18) = param_2;
  *(code ********)((long)pppppppcVar8 + -0x10) = pppppppcVar40;
  *(undefined8 *)((long)pppppppcVar8 + -8) = unaff_x30;
  *(undefined ***)pcVar7 = &PTR_DAT_110a60a10;
  func_0x0001000e30f4((code *******)((long)pcVar7 + 8));
  auVar59._8_8_ = param_3;
  auVar59._0_8_ = pcVar7;
  return auVar59;
code_r0x00010874ab0c:
  *(code ********)((long)pppppppcVar9 + 8) = param_2;
  pppppppcVar10 = pppppppcVar9;
code_r0x00010874ab14:
  func_0x00010875658c();
  ppppppcVar45 = pppppppcVar46[7];
  FUN_108751a10((undefined1 *)((long)pppppppcVar10 + 0x30),(undefined1 *)((long)pppppppcVar10 + 8));
  func_0x000108756290((undefined1 *)((long)pppppppcVar10 + 0x50));
  FUN_108751ae0(pppppppcVar58 + -9,(undefined1 *)((long)pppppppcVar10 + 0x30));
  FUN_108751a60((undefined1 *)((long)pppppppcVar10 + 0x28));
  func_0x000108751a38(pppppppcVar58 + -9);
  puVar17 = (undefined1 *)((long)pppppppcVar10 + 0x30);
  func_0x000108751a38(puVar17);
  func_0x000108755f90();
  func_0x000108756314();
  auVar70._8_8_ = ppppppcVar45;
  auVar70._0_8_ = puVar17;
  return auVar70;
SUB_108756244:
  pppppppcVar23 = (code *******)&pppppppcStack_80;
code_r0x000108756248:
  pppppppcStack_a8 = pppppppcVar23;
  pppppppcStack_a0 = pppppppcVar26;
  pppppppcStack_98 = param_2;
  pppppppcStack_90 = pppppppcVar40;
  FUN_10869ccf4(&pppppppcStack_a8);
  auVar66._8_8_ = param_3;
  auVar66._0_8_ = pppppppcVar23;
  return auVar66;
code_r0x000108758b44:
code_r0x000108758b48:
  pppppppcVar40 = param_2;
  func_0x00010875a6d8();
  if (*pppppppcVar40 == (code ******)0x0) {
    func_0x000107c3a5c0();
  }
  func_0x00010875aa4c();
  plVar24 = extraout_x8_38;
  do {
    if (*plVar24 == 0) {
      func_0x00010875a75c();
      plVar24 = extraout_x8_40;
      uVar47 = extraout_w10_31;
      uVar38 = extraout_x11_17;
    }
    else {
      func_0x00010875a894();
      plVar24 = extraout_x8_39;
      uVar47 = extraout_w10_30;
      uVar38 = extraout_x11_16;
    }
    if ((uVar38 & 1) != 0) {
      func_0x00010875a7d0();
      if ((bool)in_ZR) {
        func_0x00010875a76c();
        func_0x00010875a6c8();
        func_0x00010875a700();
      }
      func_0x00010875a69c();
      goto LAB_108758be0;
    }
  } while ((uVar47 >> 1 & 1) == 0);
  pppppppcVar40 = param_2 + 4;
  FUN_108758c20();
  func_0x00010875a844();
  do {
    func_0x00010875a6e8();
    if ((int)pppppppcVar40 != 0) {
      func_0x00010875a8a8();
      func_0x00010875aa68();
      func_0x00010875a67c();
      break;
    }
  } while (((uint)uStack_78 >> 1 & 1) == 0);
  func_0x00010875a750();
  func_0x00010875a880();
  func_0x00010875a7f4();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
LAB_108758be0:
  auVar95._8_8_ = param_3;
  auVar95._0_8_ = pppppppcVar40;
  return auVar95;
code_r0x0001087526fc:
  lVar18 = 0x50;
  __Znwm();
  lVar22 = lVar18;
  func_0x0001087563a8(FUN_1087548e4);
  pppppppcVar26 = pppppppcVar26 + 4;
  *pppppppcVar26 = extraout_x8_25;
  *(code ********)(lVar22 + 0x40) = pppppppcVar23;
  if (extraout_x8_25 != (code ******)0x0) {
    do {
      func_0x00010875583c();
    } while (extraout_w10_20 != 0);
  }
  func_0x000107c295fc(lVar18 + 0x10);
  func_0x0001087565d8();
  func_0x000107c314e0(lVar18 + 0x28,pppppppcVar23[2],(long)pppppppcVar21 * 1000000);
  func_0x000107c28874(&uStack_78);
  func_0x000107c28878(&pppppppcStack_80,3);
  func_0x000108755b24();
  func_0x000108756628();
  param_2[0xb7] = (code ******)0x3;
  func_0x000107c2887c(pppppppcVar33,&pppppppcStack_70);
  plVar24 = (long *)0x0;
  FUN_10865ba74(pppppppcVar33,0,pppppppcVar26,lVar18 + 0x28,pppppppcVar23 + 7);
  pppppppcVar40 = uStack_78;
  pppppppcStack_80 = (code *******)0x0;
  uStack_78 = (code *******)0x0;
  *(code ********)(lVar18 + 0x38) = pppppppcVar40;
  func_0x000107c27f9c();
  func_0x0001087564d8();
  *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)(lVar18 + 0x38);
  do {
    func_0x00010875583c();
  } while (extraout_w10_21 != 0);
  func_0x000108755af0(*(undefined8 *)(lVar18 + 0x30));
  if ((extraout_w8_11 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar18 + 0x48) = 0;
    lVar22 = *(long *)(lVar18 + 0x30);
    func_0x000108755aa0();
    lVar53 = (long)*pppppppcVar19;
    if (lVar53 == 0) {
      func_0x000107c3a5c0();
      lVar53 = (long)*pppppppcVar19;
    }
    func_0x000108756268();
    plVar35 = extraout_x8_26;
    do {
      if (*plVar35 == 0) {
        func_0x000108755890();
        plVar35 = extraout_x8_28;
        uVar47 = extraout_w10_23;
        uVar38 = extraout_x11_11;
      }
      else {
        func_0x000108755b70();
        plVar35 = extraout_x8_27;
        uVar47 = extraout_w10_22;
        uVar38 = extraout_x11_10;
      }
      if ((uVar38 & 1) != 0) {
        func_0x0001087559ac();
        if ((bool)in_ZR) {
          func_0x000108755860();
          uVar14 = extraout_w8_00;
          if ((bool)in_CY) {
            uVar14 = extraout_w9_00;
          }
          func_0x000108755964();
          *(undefined1 *)pppppppcVar19 = uVar14;
          func_0x00010875584c(0);
          *(code ********)(lVar22 + 0x90) = pppppppcVar19;
        }
        func_0x0001087559bc();
        *(long *)(extraout_x8_32 + 0x20) = lVar53;
        goto LAB_108752938;
      }
    } while ((uVar47 >> 1 & 1) == 0);
  }
  pppppppcVar19 = (code *******)(lVar18 + 0x30);
  func_0x000107c28870();
  lVar22 = (long)*pppppppcVar19;
  func_0x000108755cdc();
  func_0x000108755ce4();
  if (lVar22 == 2) {
    func_0x000108755bd8();
    func_0x0001087560c0();
    FUN_10865aaac(pppppppcVar19,&uStack_78);
    func_0x000108756750();
    func_0x000108755ef8();
  }
  else {
    uVar14 = lVar22 == 1;
    if (!(bool)uVar14) {
      *(code *******)(lVar18 + 0x30) = *pppppppcVar26;
      do {
        func_0x00010875583c();
      } while (extraout_w10_24 != 0);
      func_0x000108755af0(*(undefined8 *)(lVar18 + 0x30));
      if ((extraout_w8_12 >> 1 & 1) == 0) {
        *(undefined1 *)(lVar18 + 0x48) = 1;
        lVar22 = *(long *)(lVar18 + 0x30);
        func_0x000108755aa0();
        lVar53 = (long)*pppppppcVar19;
        if (lVar53 == 0) {
          func_0x000107c3a5c0();
          lVar53 = (long)*pppppppcVar19;
        }
        func_0x000108756268();
        plVar35 = extraout_x8_29;
        do {
          if (*plVar35 == 0) {
            func_0x000108755890();
            plVar35 = extraout_x8_31;
            uVar47 = extraout_w10_26;
            uVar38 = extraout_x11_13;
          }
          else {
            func_0x000108755b70();
            plVar35 = extraout_x8_30;
            uVar47 = extraout_w10_25;
            uVar38 = extraout_x11_12;
          }
          if ((uVar38 & 1) != 0) {
            func_0x0001087559ac();
            if ((bool)uVar14) {
              func_0x000108755860();
              func_0x0001087557a0();
              func_0x0001087557b0();
              func_0x000108755b84();
            }
            func_0x0001087559bc();
            *(long *)(extraout_x8_33 + 0x20) = lVar53;
LAB_108752938:
            func_0x0001087558a0(*(undefined8 *)(lVar22 + 0x90));
            *(undefined8 *)(lVar22 + 0x10) = 0;
            goto LAB_108752948;
          }
        } while ((uVar47 >> 1 & 1) == 0);
      }
      pppppppcVar19 = (code *******)(lVar18 + 0x30);
      func_0x000107c28a1c(pppppppcVar19);
      plVar24 = (long *)pppppppcVar19;
      func_0x0001087562f0();
      func_0x000108755cdc();
      func_0x000108755afc();
      func_0x000108755ac8();
      func_0x000108755be8();
      func_0x000108755ae8();
LAB_108752948:
      auVar78._8_8_ = plVar24;
      auVar78._0_8_ = pppppppcVar19;
      return auVar78;
    }
    func_0x000108755bd8();
    func_0x0001087565a4();
    func_0x00010875673c();
    func_0x000108755ef8();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x108752990);
  (*pcVar7)();
code_r0x00010875cb44:
  puVar16 = &uStack_78;
  func_0x00010875b6a8(puVar16);
  auVar102._8_8_ = param_3;
  auVar102._0_8_ = puVar16;
  return auVar102;
}



/* Entry: 10873ecf8; end: 10873edd3;  */

void FUN_10873ecf8(long *param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  code *pcVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  undefined1 extraout_w9;
  int iVar7;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar8;
  long *unaff_x20;
  long *unaff_x21;
  long lVar9;
  long lVar10;
  
  pcVar6 = (code *)(ulong)*(byte *)(param_1 + 0xba);
  iVar7 = 0xdf4c428;
  iVar5 = (int)param_2;
  plVar4 = param_1;
  switch(*(byte *)(param_1 + 0xba)) {
  case 0:
  case 0x31:
  case 0x5b:
  case 0xed:
    func_0x000107c27f9c(param_1 + 0x81);
    plVar4 = param_1 + 4;
    break;
  case 1:
    func_0x000107c27f9c(param_1 + 0xb5);
    func_0x000107c27f9c(param_1 + 0xa0);
    func_0x000107c27f9c(param_1 + 0xb4);
    func_0x000107c27f9c(param_1 + 0xb6);
    func_0x000107c28b40(param_1 + 0x8c);
    func_0x00010873f960();
    func_0x000107c27914(param_1 + 0xae);
    plVar4 = param_1 + 0x81;
    goto code_r0x00010873edc0;
  case 2:
    func_0x000107c27f9c(param_1 + 0xae);
    func_0x000107c27f9c(param_1 + 0xb5);
    func_0x000107c27f9c(param_1 + 0xb7);
    func_0x000107c27f9c(param_1 + 0x8c);
    func_0x000107c28b40(param_1 + 0x81);
    func_0x000107c27914(param_1 + 0xa0);
    plVar4 = param_1 + 4;
code_r0x00010873edc0:
    FUN_108681c34(plVar4);
    goto code_r0x00010873edc4;
  case 3:
    func_0x00010873f4dc();
    func_0x000107c27f9c(param_1 + 0x81);
    func_0x00010873f9a0();
    plVar4 = param_1 + 0x8c;
    break;
  case 4:
  case 0x32:
  case 0x5c:
  case 0x93:
  case 0xa2:
  case 0xb6:
  case 0xcb:
  case 0xdf:
  case 0xee:
code_r0x00010873ee5c:
    (*pcVar6)();
  case 0x1b:
  case 0x49:
    func_0x00010873f62c();
    plVar4 = (long *)unaff_x21[0x28];
    func_0x00010873f770();
    pcVar6 = extraout_x8_01;
  case 0x74:
  case 0x7e:
  case 0x85:
  case 0x94:
  case 0xa3:
  case 0xb7:
  case 0xcc:
  case 0xe0:
  case 0xe4:
  case 0xef:
    (*pcVar6)();
  case 0x7a:
    param_2 = plVar4;
    goto LAB_10873ee80;
  case 6:
  case 0xd:
  case 0xe:
  case 0x34:
  case 0x3b:
  case 0x3c:
  case 0x5e:
  case 100:
  case 0x7c:
  case 0xaa:
  case 0xae:
  case 0xc6:
  case 0xf9:
    func_0x00010873f5d4();
    plVar4 = param_1;
  case 0x20:
  case 0x2b:
  case 0x4e:
  case 0x59:
  case 0x6e:
  case 0x7f:
  case 0x81:
  case 0x86:
  case 0x88:
  case 0x95:
  case 0x9e:
  case 0xaf:
  case 0xc1:
  case 0xc5:
  case 0xd6:
  case 0xf0:
    if ((int)unaff_x21 != 0) goto LAB_10873f08c;
  case 0x90:
    goto LAB_10873f044;
  default:
code_r0x00010873eea8:
  case 0x69:
  case 0x9b:
    do {
      func_0x00010873fa2c();
      if (extraout_x8_02 != 0) {
LAB_10873ef08:
        do {
          func_0x00010873f354();
        } while (extraout_w10 != 0);
      }
      plVar4 = param_1 + 7;
      func_0x000107c314f0();
      if (((ulong)plVar4 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 1;
        func_0x00010873f52c();
        if (*plVar4 == 0) {
          func_0x000107c3a5c0();
        }
        func_0x00010873f820();
        if (((ulong)plVar4 & 1) != 0) goto LAB_10873f014;
      }
LAB_10873ef44:
      plVar3 = param_1 + 7;
      func_0x000107c28c9c();
      plVar4 = plVar3;
      func_0x00010873f71c();
      if (((uint)plVar3 >> 8 & 1) == 0) {
        func_0x00010873f72c();
        goto LAB_10873f028;
      }
      plVar4 = (long *)param_1[0xc];
      FUN_10873aff4(param_1 + 10);
      func_0x00010873f890();
      do {
        func_0x00010873f354();
      } while (extraout_w10_00 != 0);
      func_0x00010873f4e4(param_1[7]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 2;
        lVar9 = param_1[7];
        func_0x00010873f52c();
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar4;
        }
        plVar3 = (long *)(lVar9 + 0x10);
        do {
          if (*plVar3 == 0) {
            func_0x00010873f3b8();
            plVar3 = extraout_x8_04;
            uVar2 = extraout_w10_02;
            uVar8 = extraout_x11_00;
          }
          else {
            func_0x00010873f5a0();
            plVar3 = extraout_x8_03;
            uVar2 = extraout_w10_01;
            uVar8 = extraout_x11;
          }
          if ((uVar8 & 1) != 0) {
            func_0x00010873f438();
            if ((bool)in_ZR) {
              func_0x00010873f378();
              uVar1 = extraout_w8;
              if ((bool)in_CY) {
                uVar1 = extraout_w9;
              }
              func_0x00010873f344();
              *(undefined1 *)plVar4 = uVar1;
              func_0x00010873f364(0);
              *(long **)(lVar9 + 0x90) = plVar4;
            }
            func_0x00010873f418();
            *(long *)(extraout_x8_05 + 0x20) = lVar10;
            func_0x00010873f3a8(*(undefined8 *)(lVar9 + 0x90));
            func_0x00010873fa40();
            goto LAB_10873f014;
          }
        } while ((uVar2 >> 1 & 1) == 0);
      }
LAB_10873efc4:
      func_0x000107c28834(param_1 + 7);
      func_0x00010873f4bc();
      func_0x00010873f510();
    } while( true );
  case 0x16:
  case 0x44:
    goto code_r0x00010873ee58;
  case 0x1c:
  case 0x4a:
  case 0x77:
  case 0x8c:
  case 0xa0:
  case 0xb0:
  case 0xbf:
  case 0xc2:
  case 0xd8:
  case 0xfc:
    goto code_r0x00010873f050;
  case 0x1e:
  case 0x4c:
    unaff_x20 = param_1;
  case 0x10:
  case 0x13:
  case 0x3e:
  case 0x41:
  case 0xb3:
    if (iVar5 == 0) goto LAB_10873f044;
  case 0x22:
  case 0x50:
  case 0x75:
  case 0xbd:
  case 0xfa:
    unaff_x21 = param_2;
  case 0x11:
  case 0x19:
  case 0x3f:
  case 0x47:
  case 0x70:
  case 0xab:
  case 0xb1:
  case 0xc4:
    func_0x00010873f538();
    plVar4 = param_1;
    goto LAB_10873f08c;
  case 0x2c:
  case 0x92:
  case 0xa1:
  case 0xb4:
  case 199:
  case 0xd9:
  case 0xe3:
    goto code_r0x00010873ee48;
  case 0x65:
    goto LAB_10873ef08;
  case 0x7d:
    unaff_x20 = param_1;
  case 0x2f:
  case 0x71:
  case 0x8f:
  case 0xd1:
  case 0xd2:
    if (iVar5 == 0) goto LAB_10873f044;
  case 0xb:
  case 0x25:
  case 0x2d:
  case 0x39:
  case 0x53:
    unaff_x21 = param_2;
  case 7:
  case 0x12:
  case 0x28:
  case 0x2a:
  case 0x35:
  case 0x40:
  case 0x56:
  case 0x58:
  case 0x5f:
  case 0x66:
  case 0xb2:
    func_0x00010873f4bc();
  case 0x24:
  case 0x27:
  case 0x52:
  case 0x55:
  case 0x8b:
  case 0x9f:
  case 0xd3:
  case 0xd7:
    func_0x00010873f510();
  case 9:
  case 0x26:
  case 0x2e:
  case 0x37:
  case 0x54:
  case 0x61:
    plVar4 = param_1 + 0xb;
    func_0x000107c27f9c(plVar4);
    goto LAB_10873f08c;
  case 0x8d:
    goto LAB_10873ee7c;
  case 0x97:
  case 0x98:
  case 0xa5:
  case 0xad:
  case 0xb9:
  case 0xc0:
  case 0xce:
  case 0xe2:
  case 0xe6:
  case 0xf2:
  case 0xf3:
  case 0xf7:
  case 0xf8:
  case 0xff:
    goto code_r0x00010873eea0;
  case 0xa8:
    unaff_x20 = param_1;
  case 0x21:
  case 0x4f:
  case 0x67:
  case 0x9d:
  case 0xac:
  case 0xb5:
  case 0xbc:
  case 200:
  case 0xd4:
  case 0xda:
    if (iVar5 == 0) goto LAB_10873f044;
  case 0x18:
  case 0x46:
  case 0x6c:
  case 0x79:
  case 0xfe:
    func_0x00010873f968();
  case 0xc:
  case 0x17:
  case 0x1d:
  case 0x1f:
  case 0x29:
  case 0x3a:
  case 0x45:
  case 0x4b:
  case 0x4d:
  case 0x57:
  case 0x6d:
  case 0x78:
  case 0x82:
  case 0x89:
  case 0x91:
  case 0x9c:
  case 0xfd:
    plVar4 = param_1;
    goto LAB_10873f08c;
  case 0xf6:
  case 0x6a:
  case 0x72:
  case 0x83:
  case 0x99:
  case 0xa6:
  case 0xba:
  case 0xbb:
  case 0xf4:
  case 0x14:
  case 0x42:
  case 0x43:
  case 0x68:
  case 0xa7:
  case 0xf5:
  case 0x84:
  case 0x96:
  case 0xf1:
    func_0x00010873fa80();
  case 5:
  case 0x33:
  case 0x5d:
    pcVar6 = (code *)(ulong)*(byte *)(plVar4 + 0xd);
  case 0x62:
  case 0x73:
  case 0xa4:
  case 0xb8:
  case 0xcd:
  case 0x15:
  case 0x6b:
  case 0x9a:
    in_CY = 1 < (uint)pcVar6;
    in_ZR = 1;
    if ((uint)pcVar6 == 2) goto LAB_10873efc4;
  case 10:
  case 0x38:
  case 0xcf:
    in_CY = (int)pcVar6 != 0;
    in_ZR = (int)pcVar6 == 1;
    if ((bool)in_ZR) goto LAB_10873ef44;
    FUN_10873af78(param_1 + 7);
    func_0x00010873f4bc();
    func_0x00010873f510();
    func_0x00010873f5bc();
    unaff_x21 = (long *)param_1[0xc];
  case 0xe1:
    func_0x00010873f770(unaff_x21[0x13]);
    pcVar6 = extraout_x8;
  case 0x23:
  case 0x51:
  case 0xe5:
    (*pcVar6)();
  case 0x30:
  case 0x5a:
  case 0xc9:
  case 0xca:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
    plVar4 = param_1 + 9;
  case 0x8a:
    func_0x00010086e594(plVar4);
    func_0x00010873f678();
    func_0x00010873f914();
    goto code_r0x00010873ee48;
  }
  func_0x000107c27f9c(plVar4);
code_r0x00010873edc4:
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
code_r0x00010873ee48:
  unaff_x21 = (long *)param_1[0xc];
  func_0x00010873f538();
  if (unaff_x21[0x28] != 0) {
code_r0x00010873ee58:
    func_0x00010873f6e8();
    pcVar6 = extraout_x8_00;
    goto code_r0x00010873ee5c;
  }
LAB_10873ee7c:
  param_2 = (long *)0x0;
LAB_10873ee80:
  func_0x0001087424a4(param_1[0xc] + 0x158);
  lVar9 = param_1[0xc];
  *(undefined1 *)(lVar9 + 0x170) = 1;
  pcVar6 = (code *)(ulong)*(byte *)(lVar9 + 0x169);
  iVar7 = 2;
code_r0x00010873eea0:
  func_0x00010873f994(iVar7 - (int)pcVar6);
  goto code_r0x00010873eea8;
LAB_10873f014:
  func_0x00010873f8d8();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  unaff_x20 = plVar4;
  param_1 = plVar4;
  if ((int)param_2 != 0) goto LAB_10873f048;
LAB_10873f044:
  do {
    func_0x00010873f5b4();
    param_1 = unaff_x20;
LAB_10873f048:
    func_0x000104bd46a0(param_1);
code_r0x00010873f050:
    plVar4 = param_1;
    unaff_x20 = param_1;
    unaff_x21 = param_2;
  } while ((int)param_2 == 0);
LAB_10873f08c:
  func_0x00010873f72c();
  in_ZR = (int)unaff_x21 == 3;
  if ((bool)in_ZR) {
    func_0x00010873f4a4();
    ___cxa_end_catch();
LAB_10873f028:
    func_0x00010873f518();
  }
  else {
    in_ZR = (int)unaff_x21 == 2;
    if ((bool)in_ZR) {
      func_0x00010873f4a4();
      ___cxa_end_catch();
      goto LAB_10873f028;
    }
    func_0x00010873f4a4();
    func_0x00010873f4ac();
    ___cxa_end_catch();
  }
  func_0x00010873f49c();
  func_0x00010873f4d4();
  goto LAB_10873f014;
}



/* Entry: 10873edd4; end: 10873f0df;  */

void FUN_10873edd4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = param_1;
  func_0x00010873fa80();
  bVar2 = *(byte *)(lVar10 + 0x68);
  uVar4 = 1 < bVar2;
  uVar5 = 1;
  if (bVar2 == 2) goto LAB_10873efc4;
  uVar4 = bVar2 != 0;
  uVar5 = bVar2 == 1;
  if ((bool)uVar5) goto LAB_10873ef44;
  FUN_10873af78(param_1 + 0x38);
  func_0x00010873f4bc();
  func_0x00010873f510();
  func_0x00010873f5bc();
  func_0x00010873f770(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  (*extraout_x8)();
  func_0x00010086e594(param_1 + 0x48);
  func_0x00010873f678();
  func_0x00010873f914();
  lVar10 = *(long *)(param_1 + 0x60);
  func_0x00010873f538();
  if (*(long *)(lVar10 + 0x140) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010873f6e8();
    (*extraout_x8_00)();
    func_0x00010873f62c();
    param_2 = *(undefined8 *)(lVar10 + 0x140);
    func_0x00010873f770();
    (*extraout_x8_01)();
  }
  func_0x0001087424a4(*(long *)(param_1 + 0x60) + 0x158);
  lVar10 = *(long *)(param_1 + 0x60);
  *(undefined1 *)(lVar10 + 0x170) = 1;
  func_0x00010873f994(2 - (uint)*(byte *)(lVar10 + 0x169));
  do {
    func_0x00010873fa2c();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010873f354();
      } while (extraout_w10 != 0);
    }
    plVar7 = (long *)(param_1 + 0x38);
    func_0x000107c314f0();
    if (((ulong)plVar7 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      func_0x00010873f52c();
      if (*plVar7 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f820();
      if (((ulong)plVar7 & 1) != 0) break;
    }
LAB_10873ef44:
    plVar6 = (long *)(param_1 + 0x38);
    func_0x000107c28c9c();
    plVar7 = plVar6;
    func_0x00010873f71c();
    if (((uint)plVar6 >> 8 & 1) == 0) {
      func_0x00010873f72c();
      goto LAB_10873f028;
    }
    plVar7 = *(long **)(param_1 + 0x60);
    FUN_10873aff4(param_1 + 0x50);
    func_0x00010873f890();
    do {
      func_0x00010873f354();
    } while (extraout_w10_00 != 0);
    func_0x00010873f4e4(*(undefined8 *)(param_1 + 0x38));
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 2;
      lVar10 = *(long *)(param_1 + 0x38);
      func_0x00010873f52c();
      lVar11 = *plVar7;
      if (lVar11 == 0) {
        func_0x000107c3a5c0();
        lVar11 = *plVar7;
      }
      plVar6 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar6 == 0) {
          func_0x00010873f3b8();
          plVar6 = extraout_x8_04;
          uVar3 = extraout_w10_02;
          uVar9 = extraout_w11_00;
        }
        else {
          func_0x00010873f5a0();
          plVar6 = extraout_x8_03;
          uVar3 = extraout_w10_01;
          uVar9 = extraout_w11;
        }
        if ((uVar9 & 1) != 0) {
          func_0x00010873f438();
          if ((bool)uVar5) {
            func_0x00010873f378();
            uVar1 = extraout_w8;
            if ((bool)uVar4) {
              uVar1 = extraout_w9;
            }
            func_0x00010873f344();
            *(undefined1 *)plVar7 = uVar1;
            func_0x00010873f364(0);
            *(long **)(lVar10 + 0x90) = plVar7;
          }
          func_0x00010873f418();
          *(long *)(extraout_x8_05 + 0x20) = lVar11;
          func_0x00010873f3a8(*(undefined8 *)(lVar10 + 0x90));
          func_0x00010873fa40();
          goto LAB_10873f014;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
LAB_10873efc4:
    func_0x000107c28834(param_1 + 0x38);
    func_0x00010873f4bc();
    func_0x00010873f510();
  } while( true );
LAB_10873f014:
  func_0x00010873f8d8();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) goto LAB_10873f048;
  do {
    func_0x00010873f5b4();
LAB_10873f048:
    func_0x000104bd46a0(plVar7);
    iVar8 = (int)param_2;
  } while (iVar8 == 0);
  func_0x00010873f72c();
  uVar5 = iVar8 == 3;
  if ((bool)uVar5) {
    func_0x00010873f4a4();
    ___cxa_end_catch();
LAB_10873f028:
    func_0x00010873f518();
  }
  else {
    uVar5 = iVar8 == 2;
    if ((bool)uVar5) {
      func_0x00010873f4a4();
      ___cxa_end_catch();
      goto LAB_10873f028;
    }
    func_0x00010873f4a4();
    func_0x00010873f4ac();
    ___cxa_end_catch();
  }
  func_0x00010873f49c();
  func_0x00010873f4d4();
  goto LAB_10873f014;
}



/* Entry: 10873f0e0; end: 10873f13b;  */

void FUN_10873f0e0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x02') {
    func_0x00010873f4bc();
    lVar1 = param_1 + 0x50;
  }
  else {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      func_0x00010873f71c();
      goto LAB_10873f128;
    }
    func_0x00010873f4bc();
    func_0x00010873f510();
    lVar1 = param_1 + 0x58;
  }
  func_0x000107c27f9c(lVar1);
LAB_10873f128:
  func_0x00010873f72c();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873f13c; end: 10873f18f;  */

void FUN_10873f13c(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x00010873f4dc();
  func_0x00010873f4c4();
  func_0x00010873f518();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10873f190; end: 10873f1b3;  */

void FUN_10873f190(void)

{
  func_0x00010873f9e0();
  func_0x00010873f4c4();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873f1b4; end: 10873f2b3;  */

void FUN_10873f1b4(void)

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
  
  func_0x00010873f8f0();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10873d0ec(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
    func_0x00010873f4e4(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x00010873fa74();
      func_0x00010873f314();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f7c0();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010873f3b8();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010873f5a0();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010873f404();
          if ((bool)in_ZR) {
            func_0x00010873f378();
            func_0x00010873f344();
            func_0x00010873f324();
          }
          func_0x00010873f2e8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(unaff_x19 + 0x30);
  func_0x00010873f5c4();
  func_0x00010873f4bc();
  func_0x00010873f518();
  func_0x00010873f49c();
  func_0x00010873f73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873f2b4; end: 10873f2e7;  */

void FUN_10873f2b4(void)

{
  int extraout_w8;
  
  func_0x00010873f8f0();
  if (extraout_w8 == 1) {
    func_0x00010873f5c4();
    func_0x00010873f4bc();
  }
  func_0x00010873f49c();
  func_0x00010873f73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873f2e8; end: 10873fadf;  */

void FUN_10873f2e8(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  lVar1 = unaff_x22 + (param_1 & 0xffffffff) * 0x18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
  *(char *)(*(long *)(unaff_x20 + 0x90) + 1) = *(char *)(*(long *)(unaff_x20 + 0x90) + 1) + '\x01';
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 10873fae0; end: 10873fb93;  */

/* WARNING: Removing unreachable block (ram,0x00010873fb40) */

void FUN_10873fae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  FUN_1086b5168(&lStack_58,param_3);
  lVar1 = lStack_58 + (param_4 & 0xffffffff) * 8;
  if ((param_4 & 0xffffffff) < (ulong)(lStack_50 - lStack_58 >> 3) && lStack_50 != lVar1) {
    lStack_50 = lVar1;
  }
  func_0x0001087422e8();
  func_0x00010bcd3464(param_1);
  func_0x000107c27ae4(&lStack_58);
  return;
}



/* Entry: 10873fb94; end: 10874011f;  */

void FUN_10873fb94(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  code *extraout_x8;
  undefined8 *puVar8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_188 [8];
  undefined8 *puStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  long lStack_140;
  ulong uStack_138;
  undefined1 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 *puStack_110;
  char cStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  char cStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if (*param_3 == param_3[1]) {
    plVar10 = *(long **)(param_1 + 0xc0);
    uStack_90 = 0;
    uStack_88 = 0;
    ppuStack_a0 = &PTR_FUN_110a609a8;
    puStack_98 = (undefined8 *)0x0;
    uStack_80 = 0x296;
    pppuVar6 = &ppuStack_a0;
    FUN_10873cde8(pppuVar6,0x61021d);
    (**(code **)(*plVar10 + 0x58))(plVar10,pppuVar6,1);
    func_0x000108742244();
  }
  else {
    uVar4 = (undefined4)*(undefined8 *)(param_1 + 0xd0);
    func_0x000108742334();
    (*extraout_x8)();
    FUN_108861918(&lStack_f0,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
    puVar1 = (undefined8 *)(param_1 + 0x128);
    for (lVar9 = lStack_f0; lVar9 != lStack_e8; lVar9 = lVar9 + 0x1a8) {
      puVar8 = (undefined8 *)*puVar1;
      puVar13 = puVar1;
      puVar11 = puVar1;
      while (puVar8 != (undefined8 *)0x0) {
        while (puVar11 = puVar8, uVar12 = param_2, FUN_10866f054(param_2,puVar11 + 4),
              (int)uVar12 != 0) {
          puVar8 = (undefined8 *)*puVar11;
          puVar13 = puVar11;
          if ((undefined8 *)*puVar11 == (undefined8 *)0x0) goto LAB_10873fc78;
        }
        puVar8 = puVar11 + 4;
        FUN_10866f054(puVar8,param_2);
        if ((int)puVar8 == 0) {
          ppuVar5 = (undefined **)*puVar13;
          if (ppuVar5 != (undefined **)0x0) goto LAB_10873fcdc;
          break;
        }
        puVar13 = puVar11 + 1;
        puVar8 = (undefined8 *)*puVar13;
      }
LAB_10873fc78:
      ppuVar5 = (undefined **)0x50;
      __Znwm();
      uStack_90 = 0;
      ppuStack_a0 = ppuVar5;
      puStack_98 = puVar1;
      func_0x00010871c9d0(ppuVar5 + 4,param_2);
      uStack_90 = CONCAT71(uStack_90._1_7_,1);
      *ppuVar5 = (undefined *)0x0;
      ppuVar5[1] = (undefined *)0x0;
      ppuVar5[2] = (undefined *)puVar11;
      *puVar13 = ppuVar5;
      if (**(long **)(param_1 + 0x120) != 0) {
        *(long *)(param_1 + 0x120) = **(long **)(param_1 + 0x120);
      }
      func_0x000107c27be4(*(undefined8 *)(param_1 + 0x128),ppuVar5);
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
      ppuStack_a0 = (undefined **)0x0;
      func_0x000108741234(&ppuStack_a0);
LAB_10873fcdc:
      ppuVar5 = ppuVar5 + 7;
      uVar7 = lVar9 + 0x18;
      FUN_1087108d4(ppuVar5);
      if ((uVar7 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0xc0);
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        uStack_88 = 0;
        ppuStack_a0 = &PTR_FUN_110a609a8;
        uStack_80 = 0x296;
        pppuVar6 = &ppuStack_a0;
        FUN_10873cde8(pppuVar6,0x61021c);
        (**(code **)(*plVar10 + 0x58))(plVar10,pppuVar6,1);
        func_0x000108742244();
      }
      else {
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_100 = 0;
        cStack_f8 = '\0';
        puStack_110 = (undefined8 *)((ulong)puStack_110 & 0xffffffffffffff00);
        cStack_108 = '\0';
        plVar10 = (long *)(param_1 + 0xe0);
        FUN_108679cf0();
        if (0 < *plVar10) {
          func_0x000107c289cc(&ppuStack_a0);
          FUN_108740220(&uStack_100,&ppuStack_a0);
          if (cStack_108 == '\x01') {
            func_0x000107c2887c(&puStack_110,&puStack_98);
          }
          else {
            puStack_110 = puStack_98;
            puStack_98 = (undefined8 *)0x0;
            cStack_108 = '\x01';
          }
          func_0x000107c289dc(&ppuStack_a0);
        }
        plVar10 = *(long **)(param_1 + 0x90);
        uStack_138 = uStack_138 & 0xffffffffffffff00;
        uStack_130 = 0;
        if (cStack_f8 == '\x01') {
          uStack_138 = CONCAT71(uStack_ff,uStack_100);
          if (uStack_138 != 0) {
            do {
              func_0x000108741f64();
            } while (extraout_w10 != 0);
          }
          uStack_130 = 1;
        }
        (**(code **)(*plVar10 + 0x10))(&plStack_128);
        func_0x000108740e88(&uStack_138);
        ppuVar2 = &PTR_PTR_113280c30;
        if (*(undefined ***)(lVar9 + 0x78) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar9 + 0x78);
        }
        plVar10 = plStack_128;
        if (*(int *)(ppuVar2 + 0x15) == 0x15 || *(int *)(ppuVar2 + 0x15) == 0) {
          for (; plVar10 != plStack_120; plVar10 = plVar10 + 1) {
            if ((((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) &&
               (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 5 & 1) == 0)) {
              FUN_108740268(param_1,0,param_2,*(undefined8 *)(lVar9 + 0x18));
              break;
            }
          }
        }
        func_0x000107c27994(auStack_158,param_2);
        uVar12 = *(undefined8 *)(lVar9 + 0x18);
        ppuVar2 = &PTR_PTR_113280c30;
        if (*(undefined ***)(lVar9 + 0x78) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(lVar9 + 0x78);
        }
        iVar3 = *(int *)(ppuVar2 + 0x15);
        FUN_108740ea8(auStack_170,&plStack_128);
        puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
        uStack_178 = cStack_108 == '\x01';
        if ((bool)uStack_178) {
          puStack_180 = puStack_110;
          puStack_110 = (undefined8 *)0x0;
        }
        FUN_108740348(&lStack_140,param_1,auStack_158,uVar12,ppuVar5,iVar3 == 0 || iVar3 == 0x15,
                      uVar4,auStack_170,&puStack_180);
        FUN_1086a8a50(&puStack_180);
        func_0x000108741124(auStack_170);
        func_0x000107c27914(auStack_158);
        lStack_1b8 = param_1;
        func_0x000107c27994(auStack_1b0,param_2);
        uStack_198 = *(undefined8 *)(lVar9 + 0x18);
        lStack_190 = lStack_140;
        if (lStack_140 != 0) {
          do {
            func_0x000108741f64();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108741270(auStack_d8,&lStack_1b8);
        func_0x000107c288a8(auStack_a8,param_1 + 8);
        FUN_108741384(&ppuStack_a0,auStack_d8);
        FUN_1087412dc(auStack_188);
        func_0x0001087412b4(&ppuStack_a0);
        func_0x0001087412b4(auStack_d8);
        FUN_108740bd4(&lStack_1b8);
        func_0x000107c27f9c(auStack_188);
        func_0x000107c27f9c(&lStack_140);
        func_0x000108741124(&plStack_128);
        FUN_1086a8a50(&puStack_110);
        func_0x000108740e88(&uStack_100);
      }
    }
    func_0x00010867b9fc(&lStack_f0);
  }
  return;
}



/* Entry: 108740120; end: 1087401bb;  */

void FUN_108740120(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  FUN_1088615a4(auStack_68,*(undefined8 *)(param_2 + 0x80),param_3,param_2 + 0x68,param_4,param_5);
  FUN_1086a4a7c(auStack_48,auStack_68);
  func_0x000107c29020(auStack_68);
  func_0x0001087422e8();
  func_0x00010bcd3464(param_1);
  func_0x000107c27ae4(auStack_48);
  return;
}



/* Entry: 1087401bc; end: 10874021f;  */

void FUN_1087401bc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  plVar1 = *(long **)(param_1 + 0x90);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (**(code **)(*plVar1 + 0x18))(plVar1,&uStack_40);
  func_0x000107c278a8(&uStack_40);
  return;
}



/* Entry: 108740220; end: 108740267;  */

undefined8 * FUN_108740220(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c288b0(param_1);
  }
  else {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 108740268; end: 108740347;  */

void FUN_108740268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *(undefined8 *)(param_1 + 0xa0);
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  func_0x000107c29784(aplStack_50,*(long *)(param_1 + 0xa0) + 0x40);
  func_0x000107c2798c(&uStack_40);
  if (aplStack_50[0] != (long *)0x0) {
    FUN_1086708f8(&uStack_60);
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    uStack_60 = 0;
    uStack_58 = 0;
    (**(code **)(*aplStack_50[0] + 0x18))(aplStack_50[0],param_2,param_3,param_4,&uStack_40);
    func_0x000104be3970(&uStack_40);
    FUN_10867340c(&uStack_60);
  }
  func_0x000107c27a7c(aplStack_50);
  return;
}



/* Entry: 108740348; end: 108740bd3;  */

void FUN_108740348(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined1 param_6,uint param_7,undefined8 param_8,undefined8 *param_9)

{
  uint uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  long lVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  int extraout_w8_01;
  long lVar11;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar12;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar13;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  int iVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  long lStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar6 = (undefined8 *)0xf8;
  __Znwm();
  *puVar6 = FUN_1087416d8;
  puVar6[1] = FUN_108741c30;
  *(uint *)(puVar6 + 0x1e) = param_7;
  *(undefined1 *)((long)puVar6 + 0xf5) = param_6;
  puVar6[0x1c] = param_4;
  puVar6[0x1d] = param_5;
  puVar6[0x1b] = param_2;
  func_0x000107c27994(puVar6 + 0xe,param_3);
  FUN_108740ea8(puVar6 + 0x11,param_8);
  *(undefined1 *)(puVar6 + 0x14) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  if (*(char *)(param_9 + 1) == '\x01') {
    puVar6[0x14] = *param_9;
    *param_9 = 0;
    *(undefined1 *)(puVar6 + 0x15) = 1;
  }
  func_0x000107c27f94(puVar6 + 2);
  func_0x000107c287c4(param_1,puVar6 + 2);
  lVar10 = puVar6[0x11];
  lVar11 = puVar6[0x12];
  if (lVar10 != lVar11) {
    lVar16 = lVar11 - lVar10 >> 3;
    FUN_10865b428(&uStack_d8);
    FUN_10865b464(&ppuStack_88,lVar16);
    ppuVar3 = ppuStack_88;
    ppuStack_88 = (undefined **)0x0;
    FUN_10865b56c(lStack_c8 + 0x18,ppuVar3);
    func_0x00010865b5d0(&ppuStack_88);
    *(long *)(lStack_c8 + 8) = lVar16;
    func_0x000107c2887c(lStack_c8,&ppuStack_d0);
    puVar17 = (undefined8 *)0x0;
    for (; lVar10 != lVar11; lVar10 = lVar10 + 8) {
      FUN_10865b4a4(lStack_c8,puVar17,lVar10);
      puVar17 = (undefined8 *)((long)puVar17 + 1);
    }
    puVar6[0x16] = uStack_d8;
    uStack_d8 = (undefined8 *)0x0;
    FUN_10865b628(&uStack_d8);
    plVar15 = (long *)(param_2 + 0xe0);
    FUN_108679cf0();
    lVar10 = *plVar15;
    lVar11 = puVar6[0x16];
    uVar4 = lVar10 != 0;
    uVar5 = lVar10 == 1;
    if ((lVar10 < 1) || ((*(byte *)(puVar6 + 0x15) & 1) == 0)) {
      puVar6[0x18] = lVar11;
      if (lVar11 != 0) {
        do {
          FUN_108741f64();
        } while (extraout_w10_03 != 0);
      }
      plVar15 = (long *)(param_2 + 8);
      func_0x000107c2883c(puVar6 + 0x17,plVar15,puVar6 + 0x18);
      puVar6[4] = puVar6[0x17];
      do {
        FUN_108741f64();
      } while (extraout_w10_04 != 0);
      func_0x000108742178(puVar6[4]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar6 + 0xf4) = 0;
        lVar11 = puVar6[4];
        func_0x000108742078();
        lVar10 = *plVar15;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar15;
        }
        func_0x000108742328();
        plVar12 = extraout_x8_02;
        do {
          if (*plVar12 == 0) {
            func_0x000108742008();
            plVar12 = extraout_x8_04;
            uVar1 = extraout_w10_06;
            uVar13 = extraout_x11_02;
          }
          else {
            func_0x00010874216c();
            plVar12 = extraout_x8_03;
            uVar1 = extraout_w10_05;
            uVar13 = extraout_x11_01;
          }
          if ((uVar13 & 1) != 0) {
            func_0x0001087420e0();
            if ((bool)uVar5) {
              func_0x000108741f84();
              func_0x000108741fd8();
              func_0x000108741fb4();
              *(long **)(lVar11 + 0x90) = plVar15;
            }
            func_0x000108742388();
            *(undefined8 *)(extraout_x8_08 + 0x10) = 0;
            *(undefined8 **)(extraout_x8_08 + 0x18) = puVar6;
            *(long *)(extraout_x8_08 + 0x20) = lVar10;
            goto LAB_1087408a4;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000108742114();
      func_0x000108742000();
      func_0x000108741ff8();
      puVar7 = puVar6 + 0x18;
    }
    else {
      puVar6[0x19] = lVar11;
      if (lVar11 != 0) {
        do {
          FUN_108741f64();
        } while (extraout_w10 != 0);
      }
      puVar7 = (undefined8 *)(param_2 + 8);
      FUN_10872d624(puVar6 + 0x17,puVar7,puVar6 + 0x19);
      puVar6[4] = puVar6[0x17];
      do {
        FUN_108741f64();
      } while (extraout_w10_00 != 0);
      func_0x000108742178(puVar6[4]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)((long)puVar6 + 0xf4) = 1;
        lVar10 = puVar6[4];
        func_0x000108742078();
        puVar17 = (undefined8 *)*puVar7;
        if (puVar17 == (undefined8 *)0x0) {
          func_0x000107c3a5c0();
          puVar17 = (undefined8 *)*puVar7;
        }
        func_0x000108742328();
        plVar15 = extraout_x8;
        do {
          if (*plVar15 == 0) {
            func_0x000108742008();
            plVar15 = extraout_x8_01;
            uVar1 = extraout_w10_02;
            uVar13 = extraout_x11_00;
          }
          else {
            func_0x00010874216c();
            plVar15 = extraout_x8_00;
            uVar1 = extraout_w10_01;
            uVar13 = extraout_x11;
          }
          if ((uVar13 & 1) != 0) {
            lVar11 = *(long *)(lVar10 + 0x90);
            func_0x0001087420e0();
            if ((bool)uVar5) {
              func_0x000108741f84();
              iVar14 = extraout_w8_01;
              if ((bool)uVar4) {
                iVar14 = extraout_w9_00;
              }
              puVar9 = (undefined1 *)(ulong)(iVar14 * 0x18 + 0x10);
              _malloc();
              *puVar9 = (char)iVar14;
              puVar9[1] = 0;
              *(undefined8 *)(puVar9 + 8) = 0;
              *(undefined1 **)(lVar11 + 8) = puVar9;
              *(undefined1 **)(lVar10 + 0x90) = puVar9;
            }
            func_0x000108742388();
            *(undefined8 *)(extraout_x8_09 + 0x10) = 0;
            *(undefined8 **)(extraout_x8_09 + 0x18) = puVar6;
            *(undefined8 **)(extraout_x8_09 + 0x20) = puVar17;
LAB_1087408a4:
            func_0x000108742218();
            return;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000108742114();
      func_0x000108742000();
      func_0x000108741ff8();
      puVar7 = puVar6 + 0x19;
    }
    func_0x000107c27f9c(puVar7);
    func_0x0001087420f0();
    while (puVar17 != &uStack_d8) {
      func_0x00010086e594(puVar17);
      func_0x0001087421a4();
      uVar1 = (uint)param_5 & extraout_w10_07;
      param_5 = (ulong)uVar1;
      if (((extraout_w9 != 5) && ((uVar1 & 1) == 0)) && ((*(byte *)(puVar6 + 8) & 1) == 0)) {
        func_0x000108742394();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&ppuStack_88,extraout_x8_05 + 0xa8);
        lStack_c8 = lStack_80;
        ppuStack_d0 = ppuStack_88;
        uStack_c0 = uStack_78;
        ppuStack_88 = (undefined **)0x0;
        lStack_80 = 0;
        uStack_78 = 0;
        uStack_d8 = puVar6;
        func_0x000108742210();
        uStack_b8 = 1;
        puVar6[4] = uStack_d8;
        if (*(char *)(puVar6 + 8) == '\0') {
          func_0x000108742184();
        }
        else {
          func_0x0001087422f4();
        }
        FUN_108631a60(&uStack_d8);
        param_5 = param_3;
      }
      func_0x000108742360();
    }
    lVar10 = puVar6[0x1b];
    func_0x000108742354();
    func_0x0001087422a8(*(undefined8 *)(extraout_x8_06 + 0x70));
    if (*(char *)((long)puVar6 + 0xf5) == '\x01') {
      uVar2 = 1;
      if ((param_5 & 1) == 0) {
        uVar2 = 2;
      }
      FUN_108740268(puVar6[0x1b],uVar2,puVar6 + 0xe,puVar6[0x1c]);
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000107c316c4();
    func_0x0001087421f0();
    func_0x000108742084();
    func_0x00010874211c(&uStack_d8);
    iVar14 = (int)&uStack_d8;
    if ((param_7 & 1) == 0) {
      if ((char)uStack_d8 == '\x01') {
        if (uStack_d8._1_1_ == '\0') {
          iVar14 = iVar14 + 1;
        }
      }
      else {
        iVar14 = iVar14 + 2;
      }
    }
    else {
      iVar14 = iVar14 + 3;
    }
    plVar15 = *(long **)(lVar10 + 0xc0);
    uStack_78 = 0;
    uStack_70 = 0;
    ppuStack_88 = &PTR_FUN_110a609a8;
    lStack_80 = 0;
    uStack_68 = 0x292;
    pppuVar8 = &ppuStack_88;
    FUN_108740c00(pppuVar8,iVar14);
    func_0x00010874214c();
    FUN_10873c004();
    lStack_90 = lStack_98 * (long)puVar6;
    (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar8,&lStack_90);
    func_0x000107c2882c(&ppuStack_88);
    if (0 < (long)ppuStack_d0) {
      func_0x000108742354();
      (**(code **)(extraout_x8_07 + 0x48))();
    }
    (**(code **)(**(long **)(puVar6[0x1b] + 0xb0) + 0x18))
              (*(long **)(puVar6[0x1b] + 0xb0),puVar6 + 0xe,puVar6[0x1c],&uStack_d8);
    FUN_108631a60(&lStack_c8);
    FUN_108631a60(puVar6 + 9);
    FUN_108631a60(puVar6 + 4);
    func_0x000107c27f9c(puVar6 + 0x16);
  }
  func_0x0001087420c4();
  func_0x000108741fd0();
  func_0x000108742318();
  func_0x000108742300();
  func_0x000107c27914(puVar6 + 0xe);
  func_0x0001087422c0();
  return;
}



/* Entry: 108740bd4; end: 108740bff;  */

long FUN_108740bd4(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x28);
  func_0x000107c27914(param_1 + 8);
  return param_1;
}



/* Entry: 108740c00; end: 108740c97;  */

undefined8 FUN_108740c00(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar2 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b8) {
    puVar2 = (&PTR_s_success_113269028)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000107c28824(param_1,auStack_38,puVar2);
  func_0x0001087420ac();
  return param_1;
}



/* Entry: 108740c98; end: 108740ca3;  */

void FUN_108740c98(void)

{
  return;
}



/* Entry: 108740ca4; end: 108740e6f;  */

undefined8 *
FUN_108740ca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_FUN_110a6a430;
  func_0x000107c278b8(auStack_78,&UNK_10f4b2b48);
  func_0x000107c28a44(param_1 + 1,param_3,auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  func_0x000107c27994(param_1 + 0xd,param_2);
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[0x11] = param_4[1];
  param_1[0x10] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010874224c();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[0x13] = param_5[1];
  param_1[0x12] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010874224c();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_6[1];
  uVar5 = *param_6;
  param_1[0x15] = param_6[1];
  param_1[0x14] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010874224c();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = param_7[1];
  uVar5 = *param_7;
  param_1[0x17] = param_7[1];
  param_1[0x16] = uVar5;
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
  lVar4 = param_8[1];
  uVar5 = *param_8;
  param_1[0x19] = param_8[1];
  param_1[0x18] = uVar5;
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
  lVar4 = param_9[1];
  uVar5 = *param_9;
  param_1[0x1b] = param_9[1];
  param_1[0x1a] = uVar5;
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
  uVar5 = *param_10;
  param_1[0x1d] = param_10[1];
  param_1[0x1c] = uVar5;
  *param_10 = 0;
  param_10[1] = 0;
  uVar6 = param_10[3];
  uVar5 = param_10[2];
  param_1[0x20] = param_10[4];
  param_1[0x1f] = uVar6;
  param_1[0x1e] = uVar5;
  param_10[3] = 0;
  param_10[4] = 0;
  param_10[2] = 0;
  uVar6 = param_10[6];
  uVar5 = param_10[5];
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_10 + 7);
  param_1[0x22] = uVar6;
  param_1[0x21] = uVar5;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = param_1 + 0x25;
  return param_1;
}



/* Entry: 108740e70; end: 108740e73;  */

undefined8 * FUN_108740e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a430;
  func_0x0001087411d0(param_1[0x25]);
  func_0x000107c28eb4(param_1 + 0x1c);
  func_0x000107c29778(param_1 + 0x1a);
  func_0x000107c288a4(param_1 + 0x18);
  func_0x000107c286f0(param_1 + 0x16);
  func_0x000107c2977c(param_1 + 0x14);
  func_0x00010874120c(param_1 + 0x12);
  func_0x000107c28808(param_1 + 0x10);
  func_0x000107c27914(param_1 + 0xd);
  FUN_10865a95c(param_1 + 1);
  return param_1;
}



/* Entry: 108740e74; end: 108740ea7;  */

void FUN_108740e74(void)

{
  func_0x000108741158();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108740ea8; end: 108740fab;  */

undefined8 * FUN_108740ea8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  long *plVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  long *plStack_70;
  long **pplStack_68;
  long **pplStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar6 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  uStack_78 = 0;
  lVar5 = (long)plVar1 - (long)plVar6;
  puStack_80 = param_1;
  if (lVar5 != 0) {
    uVar4 = lVar5 >> 3;
    if (uVar4 >> 0x3d != 0) {
      FUN_108740fac();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108740f9c);
      (*pcVar2)();
    }
    plVar3 = param_1 + 2;
    FUN_108740fc0();
    *param_1 = plVar3;
    param_1[1] = plVar3;
    param_1[2] = plVar3 + uVar4;
    pplStack_68 = &plStack_50;
    pplStack_60 = &plStack_48;
    uStack_58 = 0;
    plStack_70 = param_1 + 2;
    plStack_50 = plVar3;
    for (; plStack_48 = plVar3, plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar5 = *plVar6;
      *plVar3 = lVar5;
      if (lVar5 != 0) {
        do {
          FUN_108741f64();
        } while (extraout_w10 != 0);
      }
      plVar3 = plStack_48 + 1;
    }
    uStack_58 = 1;
    FUN_108741000(&plStack_70);
    param_1[1] = plVar3;
  }
  uStack_78 = 1;
  func_0x000108741080(&puStack_80);
  return param_1;
}



/* Entry: 108740fac; end: 108740fbf;  */

void FUN_108740fac(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_108740fe4();
  return;
}



/* Entry: 108740fc0; end: 108740fe3;  */

void FUN_108740fc0(void)

{
  FUN_108740fe4();
  return;
}



/* Entry: 108740fe4; end: 108740fff;  */

long FUN_108740fe4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108741030(param_1);
  }
  return param_1;
}



/* Entry: 108741000; end: 10874102f;  */

long FUN_108741000(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108741030(param_1);
  }
  return param_1;
}



/* Entry: 108741030; end: 10874104f;  */

void FUN_108741030(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 108741050; end: 1087410e3;  */

void FUN_108741050(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087410e4; end: 1087410eb;  */

void FUN_1087410e4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087410ec; end: 1087412db;  */

void FUN_1087410ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1087412dc; end: 108741383;  */

void FUN_1087412dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *puVar1 = FUN_108741e08;
  puVar1[1] = FUN_108741f2c;
  FUN_108741384(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x0001087420b8();
  puVar1[0xb] = param_2;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  func_0x000108742334(*param_2);
  (*extraout_x8)();
  return;
}



/* Entry: 108741384; end: 1087413ab;  */

void FUN_108741384(long param_1,long param_2)

{
  func_0x000108741270();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 1087413ac; end: 1087414f7;  */

void FUN_1087413ac(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long *unaff_x22;
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_108741d88;
  puVar2[1] = FUN_108741de0;
  func_0x000107c27f94(puVar2 + 2);
  func_0x0001087420b8();
  FUN_1087414f8(puVar2 + 5);
  puVar2[4] = puVar2[5];
  do {
    func_0x000108741f64();
  } while (extraout_w10 != 0);
  func_0x000108742178(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    lVar6 = puVar2[4];
    func_0x000108741f74();
    if (*param_1 == 0) {
      func_0x000107c3a5c0();
    }
    plVar3 = (long *)(lVar6 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x000108742008();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x00010874216c();
        plVar3 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001087423a8();
        uVar4 = extraout_x8_01;
        if ((bool)in_ZR) {
          func_0x000108741f84();
          func_0x000108741fe8();
          func_0x0001087420cc();
          unaff_x22[1] = (long)param_1;
          *(long **)(lVar6 + 0x90) = param_1;
          uVar4 = extraout_x8_02;
          unaff_x22 = param_1;
        }
        unaff_x22[(uVar4 & 0xffffffff) * 3 + 2] = 0;
        unaff_x22[(uVar4 & 0xffffffff) * 3 + 3] = (long)puVar2;
        func_0x000108741f94();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar2 + 4);
  func_0x000108742018();
  func_0x000108742144();
  func_0x0001087420c4();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 1087414f8; end: 1087416d7;  */

void FUN_1087414f8(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar8;
  ulong uVar9;
  ulong extraout_x8_03;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  long unaff_x24;
  undefined8 *puVar15;
  
  puVar14 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  *puVar4 = FUN_108741c90;
  puVar4[1] = FUN_108741d64;
  puVar4[5] = param_1;
  puVar4[6] = puVar14;
  pbVar5 = (byte *)(puVar4 + 2);
  func_0x000107c27f94();
  func_0x0001087420b8();
  puVar11 = puVar4 + 4;
  *puVar11 = param_1[5];
  do {
    func_0x000108741f64();
  } while (extraout_w10 != 0);
  func_0x000108742178(*puVar11);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 7) = 0;
    lVar13 = puVar4[4];
    func_0x000108741f74();
    puVar14 = *(undefined8 **)pbVar5;
    if (puVar14 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
      puVar14 = *(undefined8 **)pbVar5;
    }
    func_0x000108742328();
    plVar7 = extraout_x8;
    do {
      if (*plVar7 == 0) {
        func_0x000108742008();
        plVar7 = extraout_x8_01;
        uVar2 = extraout_w10_01;
        uVar10 = extraout_w11_00;
      }
      else {
        func_0x00010874216c();
        plVar7 = extraout_x8_00;
        uVar2 = extraout_w10_00;
        uVar10 = extraout_w11;
      }
      if ((uVar10 & 1) != 0) {
        pbVar12 = *(byte **)(lVar13 + 0x90);
        uVar9 = (ulong)pbVar12[1];
        if (pbVar12[1] == *pbVar12) {
          func_0x000108741f84();
          func_0x000108741fe8();
          func_0x0001087420cc();
          *(byte **)(pbVar12 + 8) = pbVar5;
          *(byte **)(lVar13 + 0x90) = pbVar5;
          uVar9 = extraout_x8_03;
          pbVar12 = pbVar5;
        }
        uVar9 = uVar9 & 0xffffffff;
        pbVar5 = pbVar12 + uVar9 * 0x18 + 0x10;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5[4] = 0;
        pbVar5[5] = 0;
        pbVar5[6] = 0;
        pbVar5[7] = 0;
        *(undefined8 **)(pbVar12 + uVar9 * 0x18 + 0x18) = puVar4;
        *(undefined8 **)(pbVar12 + uVar9 * 0x18 + 0x20) = puVar14;
        func_0x000108742218();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar11);
  lVar13 = puVar4[6];
  puVar6 = puVar11;
  func_0x000107c27f9c();
  func_0x000108742374();
  puVar8 = extraout_x8_02;
  while (puVar15 = (undefined8 *)*puVar8, puVar15 != (undefined8 *)0x0) {
    func_0x0001087422d4();
    bVar3 = (int)puVar6 == 0;
    lVar1 = unaff_x24;
    if (bVar3) {
      lVar1 = 0;
    }
    puVar8 = (undefined8 *)((long)puVar15 + lVar1);
    if (bVar3) {
      puVar11 = puVar15;
    }
  }
  if (((puVar14 != puVar11) && (func_0x0001087422c8(), ((ulong)puVar6 & 1) == 0)) &&
     (func_0x0001087422b4(puVar4[5]), puVar11[9] == 0)) {
    puVar14 = puVar11;
    func_0x000107c27be0();
    if (*(undefined8 **)(lVar13 + 0x120) == puVar11) {
      *(undefined8 **)(lVar13 + 0x120) = puVar14;
    }
    func_0x000108742028();
    func_0x000108742320();
    func_0x000108742290();
  }
  func_0x0001087420c4();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar4);
  return;
}



/* Entry: 1087416d8; end: 108741c2f;  */

void FUN_1087416d8(undefined **param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  uint extraout_w10;
  int iVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **unaff_x22;
  ulong unaff_x24;
  uint unaff_w26;
  undefined *puVar9;
  uint unaff_w28;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_68;
  
  ppuVar7 = (undefined **)&UNK_110a60998;
  if (*(char *)((long)param_1 + 0xf4) == '\x02') {
    func_0x000108742114();
    func_0x000108742000();
    func_0x000108741ff8();
    func_0x000107c27f9c(param_1 + 0x1a);
    iVar6 = (int)*(undefined8 *)(param_1[0x1b] + 0xd0);
    func_0x000108742334();
    (*extraout_x8)();
    plVar8 = *(long **)(param_1[0x1b] + 0xc0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = &PTR_FUN_110a609a8;
    ppuStack_a0 = (undefined **)0x0;
    uStack_88 = 0x293;
    func_0x000107c278b8(&ppuStack_d8,PTR_DAT_113268ef8);
    lVar2 = 0x239;
    if (*(int *)(param_1 + 0x1e) != 2) {
      lVar2 = 0x237;
    }
    lVar3 = 0x238;
    if (*(int *)(param_1 + 0x1e) != 1) {
      lVar3 = lVar2;
    }
    ppuVar7 = &PTR_s_success_113269028;
    unaff_x22 = (undefined **)&uStack_a8;
    func_0x000107c28824(unaff_x22,&ppuStack_d8,(&PTR_s_success_113269028)[lVar3]);
    func_0x000108742234();
    func_0x000107c278b8(&ppuStack_d8,PTR_DAT_113268f00);
    lVar2 = 0x23c;
    if (iVar6 != 2) {
      lVar2 = 0x23a;
    }
    lVar3 = 0x23b;
    if (iVar6 != 1) {
      lVar3 = lVar2;
    }
    func_0x000107c28824(unaff_x22,&ppuStack_d8,(&PTR_s_success_113269028)[lVar3]);
    func_0x000108742234();
    func_0x0001087421c0(*(undefined8 *)(*plVar8 + 0x58));
    func_0x000107c2882c(&uStack_a8);
  }
  else {
    if (*(char *)((long)param_1 + 0xf4) == '\x01') {
      func_0x000108742114();
      func_0x000108742000();
      func_0x000108741ff8();
      ppuVar4 = param_1 + 0x19;
    }
    else {
      func_0x000108742114();
      func_0x000108742000();
      func_0x000108741ff8();
      ppuVar4 = param_1 + 0x18;
    }
    func_0x000107c27f9c(ppuVar4);
  }
  func_0x0001087420f0();
  while (unaff_x22 != ppuVar7) {
    func_0x00010086e594(unaff_x22);
    func_0x0001087421a4();
    unaff_w26 = unaff_w26 & extraout_w10;
    if (((extraout_w9 != 5) && ((unaff_w26 & 1) == 0)) && (((ulong)param_1[8] & 1) == 0)) {
      func_0x000108742394();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_d8,extraout_x8_00 + 0xa8);
      uStack_98 = uStack_d0;
      ppuStack_a0 = ppuStack_d8;
      uStack_90 = uStack_c8;
      ppuStack_d8 = (undefined **)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_a8 = param_1;
      func_0x000108742234();
      uStack_88 = CONCAT31(uStack_88._1_3_,1);
      param_1[4] = (undefined *)uStack_a8;
      if (*(char *)(param_1 + 8) == '\0') {
        func_0x000108742184();
      }
      else {
        func_0x0001087422f4();
      }
      FUN_108631a60(&uStack_a8);
      unaff_w26 = unaff_w28;
    }
    func_0x000108742360();
  }
  puVar9 = param_1[0x1b];
  func_0x000108742354();
  func_0x0001087422a8(*(undefined8 *)(extraout_x8_01 + 0x70));
  if (*(char *)((long)param_1 + 0xf5) == '\x01') {
    uVar1 = 1;
    if ((unaff_w26 & 1) == 0) {
      uVar1 = 2;
    }
    FUN_108740268(param_1[0x1b],uVar1,param_1 + 0xe,param_1[0x1c]);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000107c316c4();
  func_0x0001087421f0();
  func_0x000108742084();
  func_0x00010874211c(&uStack_a8);
  iVar6 = (int)ppuVar7;
  if ((unaff_x24 & 1) == 0) {
    if ((char)uStack_a8 == '\x01') {
      if (uStack_a8._1_1_ == '\0') {
        iVar6 = iVar6 + 1;
      }
    }
    else {
      iVar6 = iVar6 + 2;
    }
  }
  else {
    iVar6 = iVar6 + 3;
  }
  plVar8 = *(long **)(puVar9 + 0xc0);
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppuStack_d8 = &PTR_FUN_110a609a8;
  uStack_d0 = 0;
  uStack_b8 = 0x292;
  pppuVar5 = &ppuStack_d8;
  FUN_108740c00(pppuVar5,iVar6);
  func_0x00010874214c();
  FUN_10873c004();
  lStack_b0 = lStack_68 * (long)param_1;
  (**(code **)(*plVar8 + 0x18))(plVar8,pppuVar5,&lStack_b0);
  func_0x00010874223c();
  if (0 < (long)ppuStack_a0) {
    func_0x000108742354();
    (**(code **)(extraout_x8_02 + 0x48))();
  }
  (**(code **)(**(long **)(param_1[0x1b] + 0xb0) + 0x18))
            (*(long **)(param_1[0x1b] + 0xb0),param_1 + 0xe,param_1[0x1c],&uStack_a8);
  FUN_108631a60(&uStack_98);
  FUN_108631a60(param_1 + 9);
  FUN_108631a60(param_1 + 4);
  func_0x000107c27f9c(param_1 + 0x16);
  func_0x000107c287c8(param_1 + 2);
  func_0x000107c27fb8(param_1 + 2);
  FUN_1086a8a50(param_1 + 0x14);
  func_0x000108741124(param_1 + 0x11);
  func_0x000107c27914(param_1 + 0xe);
  __ZdlPv(param_1);
  return;
}



/* Entry: 108741c30; end: 108741c8f;  */

void FUN_108741c30(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xf4);
  func_0x00010874225c();
  func_0x000108742298();
  func_0x000107c27f9c(param_1 + *(long *)(&UNK_10df4c8f0 + ((ulong)(bVar1 ^ 2) & 3) * 8));
  func_0x000107c27f9c(param_1 + 0xb0);
  func_0x000108741fd0();
  func_0x000108742318();
  func_0x000108742300();
  func_0x000107c27914(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741c90; end: 108741d63;  */

void FUN_108741c90(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long *extraout_x8;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long lVar6;
  
  uVar4 = param_1 + 0x20;
  func_0x000107c28834();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x000108742018();
  func_0x000108742374();
  plVar5 = extraout_x8;
  while (lVar6 = *plVar5, lVar6 != 0) {
    func_0x0001087422d4();
    bVar3 = (int)uVar4 == 0;
    lVar1 = unaff_x24;
    if (bVar3) {
      lVar1 = 0;
    }
    plVar5 = (long *)(lVar6 + lVar1);
    if (bVar3) {
      unaff_x20 = lVar6;
    }
  }
  if (((unaff_x22 != unaff_x20) && (func_0x0001087422c8(), (uVar4 & 1) == 0)) &&
     (func_0x0001087422b4(*(undefined8 *)(param_1 + 0x28)), *(long *)(unaff_x20 + 0x48) == 0)) {
    lVar6 = unaff_x20;
    func_0x000107c27be0();
    if (*(long *)(lVar2 + 0x120) == unaff_x20) {
      *(long *)(lVar2 + 0x120) = lVar6;
    }
    func_0x000108742028();
    func_0x000108742320();
    func_0x000108742290();
  }
  func_0x0001087420c4();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741d64; end: 108741d87;  */

void FUN_108741d64(undefined8 param_1)

{
  func_0x00010874225c();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741d88; end: 108741ddf;  */

void FUN_108741d88(long param_1)

{
  func_0x000107c28834(param_1 + 0x20);
  func_0x000108742018();
  func_0x000108742144();
  func_0x0001087420c4();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741de0; end: 108741e07;  */

void FUN_108741de0(undefined8 param_1)

{
  func_0x00010874225c();
  func_0x000108742144();
  func_0x000108741fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741e08; end: 108741f2b;  */

void FUN_108741e08(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long lVar6;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087413ac(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    do {
      FUN_108741f64();
    } while (extraout_w10 != 0);
    func_0x000108742178(*(undefined8 *)(param_1 + 0x58));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      lVar6 = *(long *)(param_1 + 0x58);
      func_0x000108741f74();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar3 = (long *)(lVar6 + 0x10);
      do {
        if (*plVar3 == 0) {
          func_0x000108742008();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x00010874216c();
          plVar3 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x0001087423a8();
          uVar4 = extraout_x8_01;
          if ((bool)in_ZR) {
            func_0x000108741f84();
            func_0x000108741fe8();
            func_0x0001087420cc();
            unaff_x22[1] = (long)plVar2;
            *(long **)(lVar6 + 0x90) = plVar2;
            uVar4 = extraout_x8_02;
            unaff_x22 = plVar2;
          }
          unaff_x22[(uVar4 & 0xffffffff) * 3 + 2] = 0;
          unaff_x22[(uVar4 & 0xffffffff) * 3 + 3] = param_1;
          func_0x000108741f94();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x58);
  func_0x000108742310();
  func_0x000108742308();
  func_0x0001087420c4();
  func_0x000108741fd0();
  func_0x0001087422a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741f2c; end: 108741f63;  */

void FUN_108741f2c(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x000108742310();
    func_0x000108742308();
  }
  func_0x000108741fd0();
  func_0x0001087422a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108741f64; end: 1087423bb;  */

void FUN_108741f64(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087423bc; end: 1087424fb;  */

undefined1 * FUN_1087423bc(undefined1 *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 8) = 3;
  param_1[0x10] = 0;
  puVar1 = param_1;
  func_0x0001087423fc();
  param_1[0x11] = (char)puVar1;
  return param_1;
}



/* Entry: 1087424fc; end: 108742513;  */

ulong FUN_1087424fc(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar3 = param_1;
  func_0x0001087423fc();
  *(char *)(param_1 + 0x11) = (char)uVar3;
  uVar1 = 0;
  if ((uint)bVar2 != (uint)uVar3) {
    uVar1 = bVar2 + 1;
  }
  return (ulong)uVar1;
}



/* Entry: 108742514; end: 10874253f;  */

int FUN_108742514(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  lVar3 = param_1;
  func_0x0001087423fc();
  *(char *)(param_1 + 0x11) = (char)lVar3;
  iVar1 = 0;
  if ((uint)bVar2 != (uint)lVar3) {
    iVar1 = bVar2 + 1;
  }
  return iVar1;
}



/* Entry: 108742540; end: 108742687;  */

int FUN_108742540(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  
  if (param_2 == *(int *)(param_1 + 0xc)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = param_2;
  bVar2 = *(byte *)(param_1 + 0x11);
  lVar3 = param_1;
  func_0x0001087423fc();
  *(char *)(param_1 + 0x11) = (char)lVar3;
  iVar1 = 0;
  if ((uint)bVar2 != (uint)lVar3) {
    iVar1 = bVar2 + 1;
  }
  return iVar1;
}



/* Entry: 108742688; end: 1087426fb;  */

void FUN_108742688(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_2 != param_2[1]) {
    func_0x000107c283f4(param_1 + 0x68);
    func_0x00010730c744(param_1 + 0x68,(param_2[1] - *param_2) / 0x18);
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x00010726db18(param_1 + 0x68,lVar2);
    }
  }
  return;
}



/* Entry: 1087426fc; end: 108742e8f;  */

void FUN_1087426fc(long *param_1,long param_2,long param_3,ulong *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  uint uVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *****pppppuVar13;
  long lVar14;
  undefined4 uVar15;
  uint *puVar16;
  long extraout_x8;
  undefined8 uVar17;
  long extraout_x8_00;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  ulong uVar22;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *****extraout_x11;
  ulong uVar23;
  undefined8 *puVar24;
  undefined **ppuVar25;
  int iVar26;
  undefined8 *****unaff_x23;
  long lVar27;
  uint *puVar28;
  undefined8 *****pppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 *****pppppuVar31;
  ulong uStack_178;
  char cStack_170;
  undefined8 ****ppppuStack_168;
  uint uStack_160;
  undefined1 uStack_15c;
  undefined8 ****ppppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 uStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_d0;
  int iStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 uStack_98;
  undefined8 ****ppppuStack_90;
  long lStack_88;
  undefined8 ****ppppuStack_80;
  undefined4 uStack_78;
  
  ppppuStack_f0 = (undefined8 ****)&PTR_FUN_110a826e8;
  ppppuStack_e8 = (undefined8 *****)0x0;
  iStack_c8 = 0;
  ppppuStack_e0 = (undefined8 *****)0x0;
  lStack_d8 = 0;
  ppuVar25 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_3 + 0x78) != (undefined **)0x0) {
    ppuVar25 = *(undefined ***)(param_3 + 0x78);
  }
  puVar11 = (undefined8 *)((ulong)ppuVar25[0xc] & 0xfffffffffffffffc);
  lVar14 = (long)*(char *)((long)puVar11 + 0x17);
  puVar12 = puVar11;
  if (lVar14 < 0) {
    puVar12 = (undefined8 *)*puVar11;
    lVar14 = puVar11[1];
  }
  pppppuVar7 = &ppppuStack_f0;
  func_0x000107c30344(pppppuVar7,puVar12,lVar14);
  if (((ulong)pppppuVar7 & 1) == 0) {
    FUN_108742e90(*(undefined8 *)(param_2 + 0x18),0x61021b);
    ppppuStack_148 = (undefined8 *****)0x0;
    ppppuStack_140 = (undefined8 *****)0x0;
    uStack_138 = 0;
  }
  else {
    ppuVar25 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_3 + 0x78) != (undefined **)0x0) {
      ppuVar25 = *(undefined ***)(param_3 + 0x78);
    }
    ppppuStack_90 = (undefined8 ****)(ppuVar25 + 6);
    ppppuStack_140 = (undefined8 *****)0x0;
    uStack_138 = 0;
    ppppuStack_148 = (undefined8 *****)0x0;
    ppppuStack_80 = &ppppuStack_148;
    lStack_88 = param_2;
    if (iStack_c8 == 3) {
      pcVar9 = (char *)(param_2 + 0x28);
      func_0x000107c289e8();
      unaff_x23 = (undefined8 *****)0x0;
      cVar4 = *pcVar9;
      if (iStack_c8 != 3) {
        ppuStack_d0 = &PTR_PTR_11326cd38;
      }
      puVar21 = ppuStack_d0[2];
      ppuVar25 = ppuStack_d0 + 2;
      if (((ulong)puVar21 & 1) != 0) {
        ppuVar25 = (undefined **)(puVar21 + 7);
      }
      ppuVar1 = ppuVar25 + *(int *)(ppuStack_d0 + 3);
      for (; ppuVar25 != ppuVar1; ppuVar25 = ppuVar25 + 1) {
        puVar21 = *ppuVar25;
        FUN_108742ee0(&puStack_130,*(undefined8 *)(puVar21 + 0x30));
        uStack_160 = uStack_160 & 0xffffff00;
        uStack_15c = 0;
        if (cVar4 != '\0') {
          ppuVar18 = *(undefined ***)(puVar21 + 0x30);
          ppuVar2 = &PTR_PTR_1133aaf30;
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar2 = ppuVar18;
          }
          lVar14 = 8;
          for (uVar22 = (ulong)(*(uint *)(ppuVar2 + 4) &
                               ((int)*(uint *)(ppuVar2 + 4) >> 0x1f ^ 0xffffffffU)); uVar22 != 0;
              uVar22 = uVar22 - 1) {
            puVar21 = ppuVar2[3];
            ppuVar18 = ppuVar2 + 3;
            if (((ulong)puVar21 & 1) != 0) {
              ppuVar18 = (undefined **)(puVar21 + lVar14 + -1);
            }
            if (*(int *)(*ppuVar18 + 0x38) == 1) {
              lVar27 = *(long *)(*ppuVar18 + 0x30);
              uVar3 = *(uint *)(lVar27 + 0x10);
              if ((uVar3 >> 5 & 1) == 0) {
                if (((uVar3 >> 4 & 1) == 0) && ((uVar3 >> 3 & 1) == 0)) {
LAB_108742da8:
                  uVar23 = 0x100000000;
                  uVar22 = 1;
                  goto LAB_108742d60;
                }
              }
              else {
                iVar26 = *(int *)(*(long *)(lVar27 + 0x40) + 0x10);
                if (iVar26 != 1 && iVar26 != 4) {
                  if (1 < iVar26 - 2U) goto LAB_108742da8;
                  uVar22 = 0x100000000;
                  goto LAB_108742d64;
                }
              }
            }
            lVar14 = lVar14 + 8;
          }
          uVar23 = 0;
          uVar22 = 0;
LAB_108742d60:
          uVar22 = uVar22 | uVar23;
LAB_108742d64:
          uStack_160 = (uint)uVar22;
          uStack_15c = (undefined1)(uVar22 >> 0x20);
        }
        FUN_1087430a4(&ppppuStack_90,unaff_x23,&puStack_130,&uStack_160);
        unaff_x23 = (undefined8 *****)(ulong)((int)unaff_x23 + 1);
        func_0x000108745758();
      }
    }
    else if (iStack_c8 == 0xb) {
      FUN_108742ee0(&puStack_130,ppuStack_d0[6]);
      uStack_160 = uStack_160 & 0xffffff00;
      uStack_15c = 0;
      FUN_1087430a4(&ppppuStack_90,0,&puStack_130,&uStack_160);
      func_0x000108745758();
    }
    if (ppppuStack_148 == ppppuStack_140) {
      FUN_108742e90(*(undefined8 *)(param_2 + 0x18),0x61021a);
    }
  }
  func_0x00010874579c();
  FUN_1088bfa34(&ppppuStack_f0);
  ppppuVar5 = ppppuStack_140;
  *param_1 = 0;
  param_1[1] = 0;
  puVar16 = (uint *)(param_1 + 2);
  puVar16[0] = 0;
  puVar16[1] = 0;
  pppppuVar7 = (undefined8 *****)ppppuStack_148;
  do {
    if (pppppuVar7 == (undefined8 *****)ppppuVar5) {
      func_0x0001087456c4();
      return;
    }
    iVar26 = (int)unaff_x23;
    if (*(char *)((long)pppppuVar7 + 100) == '\x01') {
      iVar10 = iVar26 + 7;
      if (*(int *)(pppppuVar7 + 0xc) != 0) {
        iVar10 = iVar26 + 8;
      }
      FUN_108742e90(*(undefined8 *)(param_2 + 0x18),iVar10);
    }
    else {
      iVar10 = 0x610218;
      if (((ulong)pppppuVar7[0xb] & 1) == 0) {
LAB_108742980:
        FUN_108742e90(*(undefined8 *)(param_2 + 0x18),iVar10);
      }
      else {
        if (*(char *)((long)pppppuVar7 + 0x17) < '\0') {
          if (pppppuVar7[1] == (undefined8 ****)0x0) goto LAB_10874297c;
        }
        else if (*(char *)((long)pppppuVar7 + 0x17) == '\0') {
LAB_10874297c:
          iVar10 = iVar26 + 1;
          goto LAB_108742980;
        }
        func_0x000107c29e2c(&puStack_130,param_3 + 0x50);
        func_0x00010727f9a8(&uStack_160,&puStack_130,"");
        func_0x000107c279a4(&puStack_130);
        uStack_178 = uStack_178 & 0xffffffffffffff00;
        cStack_170 = '\0';
        if ((char)param_4[1] == '\x01') {
          uStack_178 = *param_4;
          if (uStack_178 != 0) {
            do {
              func_0x000108745398();
            } while (extraout_w10 != 0);
          }
          cStack_170 = '\x01';
        }
        plVar8 = *(long **)(param_2 + 8);
        (**(code **)(*plVar8 + 0x18))(plVar8,pppppuVar7);
        if ((int)plVar8 == 0) {
          pppppuVar13 = pppppuVar7;
          func_0x0001072d2e68(param_2 + 0x68);
          plVar8 = *(long **)(param_2 + 0x58);
          (**(code **)(*plVar8 + 0x10))();
          uVar15 = 3;
          if ((int)plVar8 != 1) {
            uVar15 = 4;
          }
          plVar8 = *(long **)(param_2 + 8);
          func_0x0001087456a0();
          if (extraout_x8 == 0) {
            func_0x000107c278b8(&ppppuStack_90,"");
          }
          else {
            unaff_x23 = (undefined8 *****)pppppuVar7[4];
            iVar26 = *(int *)(pppppuVar7 + 3);
            puVar28 = &uStack_160;
            func_0x000107c27e5c();
            uStack_118 = 0;
            uStack_108 = 0;
            puStack_130 = puVar28;
            ppppuStack_128 = pppppuVar13;
            ppppuStack_120 = (undefined8 *****)(long)iVar26;
            ppppuStack_110 = unaff_x23;
            func_0x000107c2793c(&UNK_10f4b2b5b);
            func_0x000107c3173c(&ppppuStack_90);
          }
          uStack_78 = uVar15;
          (**(code **)(*plVar8 + 0x10))
                    (&ppppuStack_f0,plVar8,pppppuVar7,&uStack_a0,&ppppuStack_90,pppppuVar7 + 5);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_90);
          pppppuVar13 = &ppppuStack_f0;
          lStack_88 = lStack_d8;
          ppppuStack_90 = ppppuStack_e0;
          ppppuStack_e0 = (undefined8 *****)0x0;
          lStack_d8 = 0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff00;
          uStack_98 = cStack_170 == '\x01';
          if ((bool)uStack_98) {
            uStack_a0 = uStack_178;
            uStack_178 = 0;
          }
          pppppuVar29 = (undefined8 *****)ppppuStack_f0;
          pppppuVar31 = (undefined8 *****)ppppuStack_e8;
          if ((undefined8 *****)ppppuStack_e8 != (undefined8 *****)0x0) {
            do {
              func_0x000108745514();
              pppppuVar13 = extraout_x11;
            } while (extraout_w10_00 != 0);
          }
          puStack_130 = (uint *)((ulong)puStack_130 & 0xffffffffffffff00);
          uStack_b0 = 0;
          uStack_a8 = 0;
          uVar17 = *(undefined8 *)(param_2 + 0x20);
          ppppuVar30 = *(undefined8 *****)(param_2 + 0x18);
          pppppuVar13[7] = *(undefined8 *****)(param_2 + 0x20);
          pppppuVar13[6] = ppppuVar30;
          ppppuStack_128 = pppppuVar29;
          ppppuStack_120 = pppppuVar31;
          func_0x00010874579c(uVar17);
          if (extraout_x8_00 != 0) {
            do {
              func_0x000108745514();
            } while (extraout_w10_01 != 0);
          }
          FUN_108743440(&ppppuStack_168,&ppppuStack_90,&uStack_a0,&puStack_130,auStack_c0);
          func_0x000107c288a4(auStack_c0);
          FUN_108743ab4(&puStack_130);
          func_0x000108744d14(&uStack_b0);
          func_0x000108740e88(&uStack_a0);
          func_0x0001052a4560(&ppppuStack_90);
          func_0x000108744c70(&ppppuStack_f0);
        }
        else {
          func_0x00010874560c(*(undefined8 *)(param_2 + 0x18),0x224);
          puStack_130 = (uint *)CONCAT71(puStack_130._1_7_,1);
          ppppuStack_120 = (undefined8 *****)0x0;
          ppppuStack_128 = (undefined8 *****)0x0;
          ppppuStack_110 = (undefined8 *****)0x0;
          uStack_118 = 0;
          uStack_108 = 0;
          FUN_108744338(&ppppuStack_f0);
          FUN_10874472c(ppppuStack_e8,&ppppuStack_e8,&puStack_130);
          ppppuStack_168 = ppppuStack_f0;
          ppppuStack_f0 = (undefined8 *****)0x0;
          func_0x000107c27fec(&ppppuStack_f0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_120);
          func_0x00010874579c();
        }
        puVar12 = (undefined8 *)param_1[1];
        if (puVar12 < (undefined8 *)param_1[2]) {
          puVar24 = puVar12 + 1;
          *puVar12 = ppppuStack_168;
          ppppuStack_168 = (undefined8 *****)0x0;
        }
        else {
          puVar11 = (undefined8 *)*param_1;
          lVar27 = (long)puVar12 - (long)puVar11;
          lVar14 = lVar27 >> 3;
          uVar22 = lVar14 + 1;
          if (uVar22 >> 0x3d != 0) {
            FUN_108740fac();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x108742dbc);
            (*pcVar6)();
          }
          uVar19 = param_1[2] - (long)puVar11;
          uVar23 = (long)uVar19 >> 2;
          if (uVar23 <= uVar22) {
            uVar23 = uVar22;
          }
          if (0x7ffffffffffffff7 < uVar19) {
            uVar23 = 0x1fffffffffffffff;
          }
          if (uVar23 == 0) {
            puVar28 = (uint *)0x0;
            uVar23 = 0;
          }
          else {
            puVar28 = puVar16;
            FUN_108740fc0();
            puVar11 = (undefined8 *)*param_1;
            puVar12 = (undefined8 *)param_1[1];
            lVar14 = (long)puVar12 - (long)puVar11 >> 3;
          }
          puVar24 = (undefined8 *)((long)puVar28 + lVar27);
          *puVar24 = ppppuStack_168;
          ppppuStack_168 = (undefined8 *****)0x0;
          unaff_x23 = (undefined8 *****)(puVar24 + -lVar14);
          ppppuStack_128 = &ppppuStack_90;
          ppppuStack_120 = &ppppuStack_f0;
          pppppuVar13 = (undefined8 *****)((long)puVar28 + lVar27 + lVar14 * -8);
          ppppuStack_f0 = unaff_x23;
          for (puVar20 = puVar11; pppppuVar29 = pppppuVar13 + 1, puVar20 != puVar12;
              puVar20 = puVar20 + 1) {
            *pppppuVar13 = (undefined8 ****)*puVar20;
            *puVar20 = 0;
            pppppuVar13 = pppppuVar29;
            ppppuStack_f0 = pppppuVar29;
          }
          uStack_118 = CONCAT71(uStack_118._1_7_,1);
          puStack_130 = puVar16;
          ppppuStack_90 = unaff_x23;
          for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
            func_0x000107c27f9c();
          }
          puVar24 = puVar24 + 1;
          FUN_108741000(&puStack_130);
          lVar14 = *param_1;
          *param_1 = (long)unaff_x23;
          param_1[1] = (long)puVar24;
          param_1[2] = (long)(puVar28 + uVar23 * 2);
          if (lVar14 != 0) {
            __ZdlPv();
          }
          func_0x00010874579c();
        }
        param_1[1] = (long)puVar24;
        func_0x000107c27f9c(&ppppuStack_168);
        func_0x000108740e88(&uStack_178);
        func_0x0001087455a0();
      }
    }
    pppppuVar7 = pppppuVar7 + 0xd;
  } while( true );
}



/* Entry: 108742e90; end: 108742edf;  */

void FUN_108742e90(void)

{
  long *unaff_x19;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010874561c();
  uStack_28 = 0x296;
  FUN_10873cde8(auStack_48);
  func_0x0001087456f8(*(undefined8 *)(*unaff_x19 + 0x58));
  func_0x000108745604();
  return;
}



/* Entry: 108742ee0; end: 1087430a3;  */

void FUN_108742ee0(undefined1 *param_1,undefined **param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_70 = &PTR_DAT_110d14e80;
  uStack_68 = 0;
  ppuStack_58 = (undefined **)0x0;
  uStack_60 = 0;
  ppuStack_48 = (undefined **)0x0;
  uStack_50 = 0;
  ppuVar4 = &PTR_PTR_1133aaf30;
  if (param_2 != (undefined **)0x0) {
    ppuVar4 = param_2;
  }
  puVar2 = ppuVar4[3];
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  ppuVar3 = ppuVar4 + 3;
  if (((ulong)puVar2 & 1) != 0) {
    ppuVar3 = (undefined **)(puVar2 + 7);
  }
  lVar5 = (long)*(int *)(ppuVar4 + 4) << 3;
  do {
    if (lVar5 == 0) {
      uStack_60._0_4_ = 0;
      goto LAB_108742f68;
    }
    puVar2 = *ppuVar3;
    lVar5 = lVar5 + -8;
    ppuVar3 = ppuVar3 + 1;
  } while (*(int *)(puVar2 + 0x38) != 1);
  func_0x00010b5a98dc(&ppuStack_70,*(undefined8 *)(puVar2 + 0x30));
LAB_108742f68:
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  if (((uint)uStack_60 >> 2 & 1) == 0) {
    if (((uint)uStack_60 & 1) != 0) {
      func_0x0001087456cc(ppuStack_58[2]);
      ppuVar4 = ppuStack_58;
      goto LAB_108742fa4;
    }
  }
  else {
    func_0x0001087456cc(ppuStack_48[2]);
    ppuVar4 = ppuStack_48;
LAB_108742fa4:
    ppuVar3 = &PTR_PTR_1133aa910;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_a0,(ulong)ppuVar3[3] & 0xfffffffffffffffc);
    uVar1 = uStack_80;
    if (-1 < (long)uStack_78) {
      uVar1 = uStack_78 >> 0x38;
    }
    if ((uVar1 != 0) && (func_0x0001087456a0(), extraout_x8 != 0)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,&uStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b8,&uStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_d0);
      func_0x000108745744();
      param_1[0x30] = 1;
      FUN_108743cf0(auStack_d0);
      goto LAB_108743030;
    }
  }
  *param_1 = 0;
  param_1[0x30] = 0;
LAB_108743030:
  func_0x0001087455a0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  func_0x00010b5a9348(&ppuStack_70);
  return;
}



/* Entry: 1087430a4; end: 1087433ef;  */

void FUN_1087430a4(long *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined1 auStack_128 [24];
  int iStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [56];
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long alStack_70 [2];
  
  puVar6 = (ulong *)*param_1;
  if ((int)puVar6[1] <= param_2) {
    func_0x00010874561c(*(undefined8 *)(param_1[1] + 0x18),0x61021e);
    puVar4 = &stack0xffffffffffffffb8;
    FUN_10873cde8(puVar4);
    func_0x0001087456f8(*(undefined8 *)(*unaff_x19 + 0x58),unaff_x19,puVar4);
    func_0x000108745604();
    return;
  }
  if ((*puVar6 & 1) != 0) {
    puVar6 = (ulong *)(*puVar6 + (long)param_2 * 8 + 7);
  }
  puVar7 = (ulong *)(*puVar6 + 0x10);
  uVar8 = *puVar7;
  if ((uVar8 & 1) != 0) {
    puVar7 = (ulong *)(uVar8 + 7);
  }
  puVar6 = puVar7 + *(int *)(*puVar6 + 0x18);
  do {
    if (puVar7 == puVar6) {
      return;
    }
    uVar8 = *puVar7;
    plVar14 = (long *)param_1[2];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_128,*(ulong *)(uVar8 + 0x20) & 0xfffffffffffffffc);
    uStack_108 = *(undefined8 *)(uVar8 + 0x40);
    iStack_110 = param_2;
    FUN_108743c70(auStack_100,param_3);
    uStack_c8 = *param_4;
    uStack_c4 = *(undefined1 *)(param_4 + 1);
    puVar12 = (ulong *)(plVar14 + 2);
    uVar8 = plVar14[1];
    if (uVar8 < *puVar12) {
      FUN_108743b88(uVar8,auStack_128);
      lVar5 = uVar8 + 0x68;
      plVar14[1] = lVar5;
    }
    else {
      lVar10 = uVar8 - *plVar14;
      uVar8 = lVar10 / 0x68 + 1;
      if (0x276276276276276 < uVar8) {
        FUN_108743bd0();
LAB_10874338c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108743390);
        (*pcVar3)();
      }
      uVar2 = (long)(*puVar12 - *plVar14) / 0x68;
      uVar9 = uVar2 * 2;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0x13b13b13b13b13a < uVar2) {
        uVar9 = 0x276276276276276;
      }
      puStack_a0 = puVar12;
      if (uVar9 == 0) {
        lVar5 = 0;
      }
      else {
        if (0x276276276276276 < uVar9) {
          func_0x000104bd35f4();
          goto LAB_10874338c;
        }
        lVar5 = uVar9 * 0x68;
        __Znwm();
      }
      lVar10 = lVar5 + lVar10;
      lStack_a8 = lVar5 + uVar9 * 0x68;
      lStack_c0 = lVar5;
      lStack_b8 = lVar10;
      lStack_b0 = lVar10;
      FUN_108743b88(lVar10,auStack_128);
      lStack_b0 = lVar10 + 0x68;
      lVar11 = *plVar14;
      lVar1 = plVar14[1];
      lVar10 = lVar10 + ((lVar1 - lVar11) / -0x68) * 0x68;
      plStack_90 = &lStack_78;
      plStack_88 = alStack_70;
      uStack_80 = 0;
      lVar13 = lVar10;
      puStack_98 = puVar12;
      lStack_78 = lVar10;
      for (lVar5 = lVar11; alStack_70[0] = lVar13, lVar5 != lVar1; lVar5 = lVar5 + 0x68) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar13,lVar5);
        uVar15 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)(lVar13 + 0x18) = uVar15;
        FUN_108743c70(lVar13 + 0x28,lVar5 + 0x28);
        *(undefined8 *)(lVar13 + 0x60) = *(undefined8 *)(lVar5 + 0x60);
        lVar13 = alStack_70[0] + 0x68;
      }
      uStack_80 = 1;
      for (; lVar11 != lVar1; lVar11 = lVar11 + 0x68) {
        func_0x000108743b60(lVar11);
      }
      FUN_108743be4(&puStack_98);
      lVar5 = lStack_b0;
      lStack_c0 = *plVar14;
      *plVar14 = lVar10;
      lVar10 = plVar14[2];
      plVar14[2] = lStack_a8;
      plVar14[1] = lStack_b0;
      lStack_b8 = lStack_c0;
      lStack_b0 = lStack_c0;
      lStack_a8 = lVar10;
      func_0x000108743c28(&lStack_c0);
    }
    plVar14[1] = lVar5;
    func_0x000108743b60(auStack_128);
    puVar7 = puVar7 + 1;
  } while( true );
}



/* Entry: 1087433f0; end: 10874343f;  */

void FUN_1087433f0(void)

{
  long *unaff_x19;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010874561c();
  uStack_28 = 0x290;
  FUN_108740c00(auStack_48);
  func_0x0001087456f8(*(undefined8 *)(*unaff_x19 + 0x58));
  func_0x000108745604();
  return;
}



/* Entry: 108743440; end: 108743ab3;  */

void FUN_108743440(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar14;
  undefined8 uVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar16;
  ulong extraout_x8_03;
  uint extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  byte *pbVar17;
  undefined1 auVar18 [16];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar10 = (undefined8 *)0x1e0;
  __Znwm();
  puVar1 = puVar10 + 0x21;
  *puVar10 = FUN_108745198;
  puVar10[1] = FUN_108745338;
  uVar15 = *param_2;
  puVar10[0x2f] = param_2[1];
  puVar10[0x2e] = uVar15;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(puVar10 + 0x30) = 0;
  *(undefined1 *)(puVar10 + 0x31) = 0;
  uVar8 = *(char *)(param_3 + 1) == '\x01';
  if ((bool)uVar8) {
    puVar10[0x30] = *param_3;
    *param_3 = 0;
    *(undefined1 *)(puVar10 + 0x31) = 1;
  }
  *(undefined1 *)(puVar10 + 0x20) = *param_4;
  uVar15 = *(undefined8 *)(param_4 + 8);
  puVar10[0x22] = *(undefined8 *)(param_4 + 0x10);
  *puVar1 = uVar15;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar15 = *param_5;
  puVar10[0x33] = param_5[1];
  puVar10[0x32] = uVar15;
  *param_5 = 0;
  param_5[1] = 0;
  FUN_108744338(&lStack_b0);
  puVar10[3] = lStack_a8;
  puVar10[2] = lStack_b0;
  func_0x0001087456ec();
  lStack_b0 = puVar10[2];
  if (lStack_b0 != 0) {
    do {
      func_0x000108745398();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_b0;
  func_0x0001087456e0();
  puVar10[0x35] = puVar10[0x2f];
  puVar10[0x34] = puVar10[0x2e];
  puVar10[0x2e] = 0;
  puVar10[0x2f] = 0;
  FUN_1087443d4(&lStack_b0);
  lVar5 = lStack_a8;
  lVar12 = lStack_b0;
  uStack_60 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  puVar10[0x2b] = lVar5;
  puVar10[0x2a] = lVar12;
  lStack_70 = 0;
  func_0x000107c27f98(&lStack_70);
  func_0x000107c27f9c(&uStack_60);
  func_0x000107c27fec(&lStack_b0);
  puVar10[0x37] = lVar5;
  if (lVar5 != 0) {
    plVar14 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[0x26] = 0;
  puVar10[0x27] = 0;
  func_0x0001052a42fc(&lStack_b0,puVar10 + 0x34,puVar10 + 0x26);
  func_0x0001052a4324(puVar10 + 4,&lStack_b0);
  func_0x000108745750();
  func_0x0001052a4560(puVar10 + 0x26);
  func_0x000107c27b48(puVar10 + 0x36);
  func_0x000107c27b4c(&lStack_b0,puVar10[0x36]);
  auVar18 = *(undefined1 (*) [16])(puVar10 + 0x36);
  puVar10[0x37] = 0;
  puVar10[0x36] = 0;
  auVar18 = NEON_ext(auVar18,auVar18,8,1);
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_58 = auVar18._8_8_;
  uStack_60 = auVar18._0_8_;
  lStack_80 = puVar10[4] + 0x80;
  uStack_78 = 1;
  __ZNSt3__15mutex4lockEv();
  iVar9 = (int)puVar10[4];
  func_0x0001052a4348();
  if (iVar9 == 0) {
    puVar11 = (undefined8 *)0x18;
    __Znwm();
    uVar6 = uStack_58;
    uVar15 = uStack_60;
    *puVar11 = &PTR_FUN_110a6a580;
    uStack_60 = 0;
    uStack_58 = 0;
    puVar11[2] = uVar6;
    puVar11[1] = uVar15;
    plVar14 = *(long **)(puVar10[4] + 200);
    *(undefined8 **)(puVar10[4] + 200) = puVar11;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
  else {
    func_0x0001052a4324(&lStack_70,puVar10 + 4);
  }
  func_0x000107c2798c(&lStack_80);
  if (lStack_70 != 0) {
    puVar10[0x28] = lStack_70;
    puVar10[0x29] = lStack_68;
    if (lStack_68 != 0) {
      do {
        func_0x000108745514();
      } while (extraout_w10_00 != 0);
    }
    FUN_108744460(&uStack_60);
    func_0x0001052a4560(puVar10 + 0x28);
  }
  puVar10[0x2d] = lStack_a8;
  puVar10[0x2c] = lStack_b0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  func_0x0001052a4560(&lStack_70);
  FUN_108744660(&uStack_60);
  func_0x000107c27b58(&lStack_b0);
  lVar12 = puVar10[0x36];
  puVar10[0x36] = 0;
  if (lVar12 != 0) {
    func_0x000108745710();
  }
  func_0x0001052a4560(puVar10 + 4);
  func_0x000107c27b58(puVar10 + 0x2c);
  func_0x000107c27f98(puVar10 + 0x37);
  puVar10[0x38] = puVar10[0x2a];
  if (puVar10[0x2a] != 0) {
    do {
      func_0x000108745398();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108744688(puVar10 + 0x2a);
  pbVar13 = (byte *)(puVar10 + 0x34);
  func_0x0001052a4560();
  if ((*(byte *)(puVar10 + 0x31) & 1) == 0) {
    puVar10[0x26] = puVar10[0x38];
    do {
      func_0x000108745398();
    } while (extraout_w10_05 != 0);
    func_0x000108745534(puVar10[0x26]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x3b) = 0;
      func_0x0001087455f4();
      lVar12 = *(long *)pbVar13;
      if (lVar12 == 0) {
        func_0x000107c3a5c0();
        lVar12 = *(long *)pbVar13;
      }
      plVar14 = param_5 + 2;
      do {
        if (*plVar14 == 0) {
          func_0x0001087453d8();
          plVar14 = extraout_x8_02;
          uVar4 = extraout_w10_07;
          uVar16 = extraout_x11_02;
        }
        else {
          func_0x0001087455e8();
          plVar14 = extraout_x8_01;
          uVar4 = extraout_w10_06;
          uVar16 = extraout_x11_01;
        }
        if ((uVar16 & 1) != 0) goto LAB_1087438b0;
      } while ((uVar4 >> 1 & 1) == 0);
    }
    FUN_108743d18(puVar10 + 0x26);
    func_0x000108745588();
    func_0x00010874543c();
    *(undefined1 *)(puVar10 + 0x20) = 1;
    func_0x0001087454e8(puVar10 + 0xe);
    func_0x000108745524();
    FUN_108743da4();
    func_0x0001087453b4();
    func_0x000108745468();
    func_0x000108745598();
    func_0x000108745444();
  }
  else {
    uVar15 = puVar10[0x38];
    puVar10[0x38] = 0;
    puVar10[0x39] = uVar15;
    puVar10[0x3a] = puVar10[0x30];
    puVar10[0x30] = 0;
    *(undefined1 *)(puVar10 + 0x23) = *(undefined1 *)(puVar10 + 0x20);
    puVar10[0x25] = puVar10[0x22];
    puVar10[0x24] = *puVar1;
    *puVar1 = 0;
    puVar10[0x22] = 0;
    pbVar13 = (byte *)(puVar10 + 0x39);
    FUN_108743f8c(puVar10 + 0x28,pbVar13,puVar10 + 0x3a,puVar10 + 0x23);
    puVar10[0x26] = puVar10[0x28];
    do {
      func_0x000108745398();
    } while (extraout_w10_02 != 0);
    func_0x000108745534(puVar10[0x26]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x3b) = 1;
      func_0x0001087455f4();
      lVar12 = *(long *)pbVar13;
      if (lVar12 == 0) {
        func_0x000107c3a5c0();
        lVar12 = *(long *)pbVar13;
      }
      plVar14 = param_5 + 2;
      do {
        if (*plVar14 == 0) {
          func_0x0001087453d8();
          plVar14 = extraout_x8_00;
          uVar4 = extraout_w10_04;
          uVar16 = extraout_x11_00;
        }
        else {
          func_0x0001087455e8();
          plVar14 = extraout_x8;
          uVar4 = extraout_w10_03;
          uVar16 = extraout_x11;
        }
        if ((uVar16 & 1) != 0) {
LAB_1087438b0:
          pbVar17 = (byte *)param_5[0x12];
          uVar16 = (ulong)pbVar17[1];
          if (pbVar17[1] == *pbVar17) {
            func_0x000108745408();
            func_0x0001087453f0();
            func_0x000108745454();
            *(byte **)(pbVar17 + 8) = pbVar13;
            param_5[0x12] = pbVar13;
            uVar16 = extraout_x8_03;
            pbVar17 = pbVar13;
          }
          uVar16 = uVar16 & 0xffffffff;
          pbVar13 = pbVar17 + uVar16 * 0x18 + 0x10;
          pbVar13[0] = 0;
          pbVar13[1] = 0;
          pbVar13[2] = 0;
          pbVar13[3] = 0;
          pbVar13[4] = 0;
          pbVar13[5] = 0;
          pbVar13[6] = 0;
          pbVar13[7] = 0;
          *(undefined8 **)(pbVar17 + uVar16 * 0x18 + 0x18) = puVar10;
          *(long *)(pbVar17 + uVar16 * 0x18 + 0x20) = lVar12;
          func_0x0001087454f0(param_5[0x12]);
          param_5[2] = 0;
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
    func_0x000108745774();
    if ((extraout_w9 >> 5 & 1) != 0) {
      func_0x000108745570(&lStack_b0);
      __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_b0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x108743984);
      (*pcVar7)();
    }
    func_0x000108745760();
    if ((bool)uVar8) {
      func_0x0001087456b8();
      *(undefined1 *)(puVar10 + 0xd) = 1;
    }
    func_0x00010874543c();
    func_0x000108745578();
    func_0x000108745560();
    func_0x000108745550();
    func_0x000107c27f9c(puVar10 + 0x39);
    if ((*(byte *)(puVar10 + 0xd) & 1) == 0) {
      func_0x00010874560c(puVar10[0x32],0x226);
      lStack_b0 = CONCAT71(lStack_b0._1_7_,5);
      uStack_a0 = 0;
      lStack_a8 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      func_0x0001087453b4();
      func_0x000108745468();
    }
    else {
      func_0x0001087454e8(puVar10 + 0x17);
      func_0x000108745524();
      FUN_108743da4();
      func_0x0001087453b4();
      func_0x000108745468();
      func_0x0001087455a8();
    }
    func_0x00010874544c();
  }
  func_0x000108745580();
  func_0x0001087453e8();
  func_0x000108745658();
  func_0x000108745650();
  func_0x000108745648();
  func_0x000108745640();
  func_0x000108745418();
  return;
}



/* Entry: 108743ab4; end: 108743aff;  */

byte * FUN_108743ab4(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 8))();
    }
    *param_1 = 1;
  }
  func_0x000108744d14(param_1 + 8);
  return param_1;
}



/* Entry: 108743b00; end: 108743b03;  */

undefined8 * FUN_108743b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a4a8;
  func_0x000107c2826c(param_1 + 0xd);
  func_0x000107c29778(param_1 + 0xb);
  func_0x000107c289f8(param_1 + 5);
  func_0x000107c288a4(param_1 + 3);
  func_0x000108744cec(param_1 + 1);
  return param_1;
}



/* Entry: 108743b04; end: 108743b17;  */

void FUN_108743b04(void)

{
  func_0x000108744c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108743b18; end: 108743b87;  */

long * FUN_108743b18(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x68;
      func_0x000108743b60();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108743b88; end: 108743bcf;  */

long FUN_108743b88(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  FUN_108743c70(lVar1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



/* Entry: 108743bd0; end: 108743be3;  */

undefined * FUN_108743bd0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[0x18] & 1) == 0) {
    lVar3 = **(long **)(puVar1 + 8);
    lVar2 = **(long **)(puVar1 + 0x10);
    while (lVar2 != lVar3) {
      lVar2 = lVar2 + -0x68;
      func_0x000108743b60();
    }
  }
  return puVar1;
}



/* Entry: 108743be4; end: 108743c6f;  */

long FUN_108743be4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x68;
      func_0x000108743b60();
    }
  }
  return param_1;
}



/* Entry: 108743c70; end: 108743ccf;  */

undefined1 * FUN_108743c70(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1);
    func_0x000108745744();
    param_1[0x30] = 1;
  }
  return param_1;
}



/* Entry: 108743cd0; end: 108743cef;  */

void FUN_108743cd0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_108743cf0();
  }
  return;
}



/* Entry: 108743cf0; end: 108743d17;  */

void FUN_108743cf0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 108743d18; end: 108743d6f;  */

long FUN_108743d18(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  func_0x000108745570(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108743d64);
  (*pcVar1)();
}



/* Entry: 108743d70; end: 108743da3;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108743d70(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_10874472c(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
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
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
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
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 108743da4; end: 108743f8b;  */

void FUN_108743da4(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    FUN_1087433f0(*param_2,0x630225);
    lVar3 = param_3[3];
    plVar2 = (long *)*param_2;
    uStack_58 = 0;
    uStack_50 = 0;
    ppuStack_68 = &PTR_FUN_110a609a8;
    uStack_60 = 0;
    uStack_48 = 0x297;
    func_0x000107c278b8(auStack_80,"error_source");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,param_3);
    pppuVar1 = &ppuStack_68;
    func_0x000107c28820(pppuVar1,auStack_80,auStack_98);
    func_0x000107c278b8(auStack_b0,"error_code");
    __ZNSt3__19to_stringEx(auStack_c8,lVar3);
    func_0x000107c28820(pppuVar1,auStack_b0,auStack_c8);
    func_0x0001087456f8(*(undefined8 *)(*plVar2 + 0x58),plVar2,pppuVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    func_0x000107c2882c(&ppuStack_68);
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x10,param_3)
    ;
    *(long *)(param_1 + 0x28) = param_3[3];
  }
  else {
    func_0x00010874560c(*param_2,0x223);
    func_0x000105c40364();
    param_3 = (long *)*param_3;
    if (param_3 == (long *)0x0) {
      param_3 = (long *)0x0;
    }
    else {
      (**(code **)(*param_3 + 0x18))();
      if (param_3 != (long *)0x0) {
        (**(code **)(*(long *)*param_2 + 0x70))((long *)*param_2,0x291,param_3);
      }
    }
    *param_1 = 2;
    *(long **)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


