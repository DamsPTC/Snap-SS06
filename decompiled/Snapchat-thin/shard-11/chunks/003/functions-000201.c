/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083c9764; end: 1083c977b;  */

void FUN_1083c9764(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 5;
      do {
        if (*(int *)(lVar1 + -0x20 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x20 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083c977c; end: 1083c984f;  */

void FUN_1083c977c(int *param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong uVar6;
  
  puVar4 = param_2;
  FUN_1083c9850();
  uVar2 = param_1[1];
  uVar5 = (ulong)uVar2;
  uVar3 = (uint)puVar4;
  while( true ) {
    if ((int)uVar5 < 1) {
      return;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)(uVar2 - 1 & uVar3) * 0x20);
    if (*puVar1 == 0) break;
    if (uVar3 == *puVar1) {
      uVar5 = *param_2;
      FUN_10821b208(uVar5,param_2[1],*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      if ((uVar5 & 1) != 0) {
        if (*puVar1 != 0) {
          *puVar1 = 0;
        }
        uVar6 = param_2[1];
        uVar5 = *param_2;
        *(ulong *)(puVar1 + 6) = param_2[2];
        *(ulong *)(puVar1 + 4) = uVar6;
        *(ulong *)(puVar1 + 2) = uVar5;
        *puVar1 = uVar3;
        return;
      }
    }
    FUN_1083c9928();
    uVar5 = extraout_x8;
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(ulong *)(puVar1 + 6) = param_2[2];
  *(ulong *)(puVar1 + 4) = uVar6;
  *(ulong *)(puVar1 + 2) = uVar5;
  *puVar1 = uVar3;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1083c9850; end: 1083c988f;  */

uint FUN_1083c9850(uint param_1)

{
  func_0x0001083c986c();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1083c9890; end: 1083c9927;  */

uint * FUN_1083c9890(long param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong extraout_x8;
  
  puVar3 = param_2;
  FUN_1083c9850();
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = (ulong)uVar2;
  while( true ) {
    if ((int)uVar4 < 1) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)(uVar2 - 1 & (uint)puVar3) * 0x20);
    if (*puVar1 == 0) break;
    if ((uint)puVar3 == *puVar1) {
      uVar4 = *param_2;
      FUN_10821b208(uVar4,param_2[1],*(undefined8 *)(puVar1 + 2),*(undefined8 *)(puVar1 + 4));
      if ((uVar4 & 1) != 0) {
        return puVar1 + 2;
      }
    }
    FUN_1083c9928();
    uVar4 = extraout_x8;
  }
  return (uint *)0x0;
}



/* Entry: 1083c9928; end: 1083c9a5b;  */

void FUN_1083c9928(void)

{
  return;
}



/* Entry: 1083c9a5c; end: 1083c9bcf;  */

void FUN_1083c9a5c(undefined8 param_1,int *param_2,char *param_3,long param_4,long param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 auStack_1b8 [24];
  long lStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 uStack_170;
  undefined1 auStack_16f [255];
  long lStack_70;
  
  ppuVar6 = &puStack_180;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = param_3;
  if (param_4 != 0) {
    cVar1 = *param_3;
    if (cVar1 == '$') {
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      pcVar8 = param_3;
      if (param_4 == 0) goto LAB_1083c9b24;
      cVar1 = *param_3;
    }
    pcVar8 = param_3;
    if (cVar1 == '_') {
      uVar7 = 1;
      while( true ) {
        cVar1 = param_3[uVar7];
        if ((long)cVar1 < 0) break;
        if ((*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (long)cVar1 * 4 + 0x3c) >> 10 & 1) == 0)
        {
          if ((1 < uVar7) && (cVar1 == '_')) {
            uVar7 = (ulong)((int)uVar7 + 1);
            pcVar8 = param_3 + uVar7;
            if (*pcVar8 != '\0') {
              param_4 = param_4 - uVar7;
              goto LAB_1083c9b24;
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
      }
      pcVar8 = param_3 + 1;
      param_4 = param_4 + -1;
    }
  }
LAB_1083c9b24:
  uStack_170 = 0x5f;
  do {
    *param_2 = *param_2 + 1;
    puVar3 = auStack_16f;
    FUN_1083a3164();
    puVar9 = puVar3 + 1;
    *puVar3 = 0x5f;
    iVar2 = ((int)&uStack_170 + 0x100) - (int)puVar9;
    if ((int)param_4 <= iVar2) {
      iVar2 = (int)param_4;
    }
    _memcpy(puVar9,pcVar8,(long)iVar2);
    puVar9 = puVar9 + ((long)iVar2 - (long)&uStack_170);
    lVar4 = param_5;
    puStack_180 = &uStack_170;
    puStack_178 = puVar9;
    FUN_1083c9bd0(param_5,&uStack_170);
  } while (lVar4 != 0);
  uVar5 = param_1;
  func_0x000107c27958(param_1,&puStack_180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_1083c9bd0;
  lStack_1a0 = param_5;
  uStack_198 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x0001083c9c10(auStack_1b8,ppuVar6,puVar9);
  FUN_1083edd5c(uVar5,auStack_1b8);
  return;
}



/* Entry: 1083c9bd0; end: 1083c9c3b;  */

void FUN_1083c9bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x0001083c9c10(auStack_38,param_2,param_3);
  FUN_1083edd5c(param_1,auStack_38);
  return;
}



/* Entry: 1083c9c3c; end: 1083c9c67;  */

undefined * FUN_1083c9c3c(int param_1)

{
  if (param_1 - 2U < 0xb) {
    return (&PTR_DAT_110a44368)[(ulong)(param_1 - 2U) & 0xff];
  }
  return &UNK_10f4919c1;
}



/* Entry: 1083c9c68; end: 1083c9cdf;  */

void FUN_1083c9c68(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char cStack_21;
  
  if ((bRam0000000113827630 & 1) == 0) {
    iVar3 = 0x13827630;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_1083c9d08(0x113827228);
      ___cxa_guard_release(0x113827630);
    }
  }
  *param_1 = 0x113827228;
  do {
    iVar3 = iRam0000000113827228;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113827228,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113827228 = iRam0000000113827228 + -1;
    }
  } while (cVar1 != '\0');
  if (iVar3 < 1) {
    iVar3 = 0x1382722c;
    cStack_21 = cRam000000011382722c;
    if ((cRam000000011382722c == '\0') && (func_0x00010841038c(0x11382722c,&cStack_21), iVar3 != 0))
    {
      uVar4 = 8;
      __Znwm();
      func_0x000108410248();
      cRam000000011382722c = '\x02';
      uRam0000000113827230 = uVar4;
    }
    else {
      do {
      } while (cRam000000011382722c != '\x02');
    }
    FUN_1084101d4(uRam0000000113827230);
    return;
  }
  return;
}



/* Entry: 1083c9ce0; end: 1083c9d07;  */

undefined8 * FUN_1083c9ce0(undefined8 *param_1)

{
  FUN_1081efca4(*param_1);
  return param_1;
}



/* Entry: 1083c9d08; end: 1083c9de7;  */

undefined4 * FUN_1083c9d08(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_1083c3a2c(param_1 + 4);
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xfe) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  FUN_1083c9de8(param_1);
  return param_1;
}



/* Entry: 1083c9de8; end: 1083c9fbb;  */

void FUN_1083c9de8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [24];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_1083ca750(&lStack_40);
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 4) = 1;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  FUN_1083c5f2c(lStack_40 + 8);
  func_0x0001083c5f0c(&uStack_80);
  for (lVar3 = 0; lVar3 != 0x220; lVar3 = lVar3 + 8) {
    func_0x0001083cb20c();
    func_0x0001083ee128();
  }
  for (lVar3 = 0; lVar3 != 0x78; lVar3 = lVar3 + 8) {
    func_0x0001083cb20c();
    func_0x0001083ee128();
  }
  uVar2 = *(undefined8 *)(lStack_40 + 8);
  uStack_80 = 0;
  uStack_74 = 0xffffffffffffffff;
  uStack_7c = 0xffffffff;
  uStack_78 = 0xffffffff;
  uStack_64 = 0xffffffffffffffff;
  uStack_6c = 0xffffffffffffffff;
  uStack_54 = 0xffffffffffffffff;
  uStack_5c = 0xffffffffffffffff;
  uVar4 = *(undefined8 *)(param_1 + 0x378);
  func_0x000107c278b8(auStack_98,"");
  FUN_1083f4790(&lStack_48,0xffffff,0xffffff,&uStack_80,0,uVar4,&UNK_10f4919c9,7,auStack_98,0);
  lStack_38 = lStack_48;
  lStack_48 = 0;
  uVar4 = uVar2;
  FUN_1083cb078(uVar2,&lStack_38);
  func_0x0001083ee128(uVar2,uVar4);
  lVar3 = lStack_38;
  lStack_38 = 0;
  if (lVar3 != 0) {
    func_0x0001083cb0e0();
  }
  lVar3 = lStack_48;
  lStack_48 = 0;
  if (lVar3 != 0) {
    func_0x0001083cb0e0();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  lVar3 = lStack_40;
  lStack_40 = 0;
  FUN_1083cadbc(param_1 + 0x3a8,lVar3);
  FUN_1083c62dc(&lStack_40);
  return;
}



/* Entry: 1083c9fbc; end: 1083ca12f;  */

void FUN_1083c9fbc(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *param_1;
  lVar3 = *(long *)(param_2 + 8);
  func_0x0001083cb120(param_1,*(undefined8 *)(lVar4 + 0x1a8));
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  func_0x0001083cb120();
  for (lVar5 = 0; lVar5 != 0x78; lVar5 = lVar5 + 8) {
    lVar2 = *(long *)(lVar4 + 0x10 + *(long *)(&UNK_10df24c48 + lVar5));
    FUN_1083ef730(&uStack_50,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                  *(undefined8 *)(lVar4 + 0xf0));
    uStack_48 = uStack_50;
    lVar2 = lVar3;
    FUN_1083cae14(lVar3,&uStack_48);
    lVar1 = lVar3;
    func_0x0001083ee1c4(lVar3,lVar2);
    func_0x0001083cb1d4();
    if (lVar1 != 0) {
      func_0x0001083cb0e0();
    }
    uStack_50 = 0;
  }
  return;
}



/* Entry: 1083ca130; end: 1083ca1b3;  */

long FUN_1083ca130(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3f8);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca1b4();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3f8);
    func_0x0001083cb138();
    func_0x0001083cb128();
    FUN_1083c9fbc();
    lVar1 = *(long *)(*unaff_x19 + 0x3f8);
  }
  return lVar1;
}



/* Entry: 1083ca1b4; end: 1083ca223;  */

long FUN_1083ca1b4(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3b0);
  if (lVar1 == 0) {
    func_0x0001083cb140(0,&UNK_10df26ac0);
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3b0);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3b0);
  }
  return lVar1;
}



/* Entry: 1083ca224; end: 1083ca36b;  */

void FUN_1083ca224(long *param_1)

{
  code *pcVar1;
  undefined8 *in_x3;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = in_x3[1];
  uStack_60 = *in_x3;
  uStack_50 = in_x3[2];
  in_x3[1] = 0;
  in_x3[2] = 0;
  *in_x3 = 0;
  FUN_1083c544c(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  lVar2 = *param_1;
  if (lVar2 == 0) {
    FUN_1083c9c3c();
    FUN_10841076c(&UNK_10f4919d1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083ca348);
    (*pcVar1)();
  }
  plVar4 = *(long **)(lVar2 + 0x18);
  for (plVar3 = *(long **)(lVar2 + 0x10); plVar5 = plVar4, plVar3 != plVar4; plVar3 = plVar3 + 1) {
    plVar5 = plVar3;
    if (*(int *)(*plVar3 + 0xc) == 2) goto LAB_1083ca2b0;
  }
LAB_1083ca2e8:
  func_0x0001083cab38((undefined8 *)(lVar2 + 0x10),plVar4,plVar5);
  FUN_1083cab78(*param_1 + 0x10);
  return;
LAB_1083ca2b0:
  while (plVar3 = plVar3 + 1, plVar3 != plVar4) {
    if (*(int *)(*plVar3 + 0xc) != 2) {
      FUN_1083cacbc(plVar5,plVar3);
      plVar5 = plVar5 + 1;
    }
  }
  plVar4 = plVar5;
  plVar5 = *(long **)(*param_1 + 0x18);
  goto LAB_1083ca2e8;
}



/* Entry: 1083ca36c; end: 1083ca3df;  */

long FUN_1083ca36c(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x400);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca130();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x400);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x400);
  }
  return lVar1;
}



/* Entry: 1083ca3e0; end: 1083ca453;  */

long FUN_1083ca3e0(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3b8);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca1b4();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3b8);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3b8);
  }
  return lVar1;
}



/* Entry: 1083ca454; end: 1083ca4c7;  */

long FUN_1083ca454(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3c8);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca3e0();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3c8);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3c8);
  }
  return lVar1;
}



/* Entry: 1083ca4c8; end: 1083ca53b;  */

long FUN_1083ca4c8(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3c0);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca3e0();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3c0);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3c0);
  }
  return lVar1;
}



/* Entry: 1083ca53c; end: 1083ca5af;  */

long FUN_1083ca53c(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3d0);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca3e0();
    func_0x0001083cb140();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3d0);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3d0);
  }
  return lVar1;
}



/* Entry: 1083ca5b0; end: 1083ca617;  */

long FUN_1083ca5b0(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3e0);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca454();
    func_0x0001083cb0ec();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3e0);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3e0);
  }
  return lVar1;
}



/* Entry: 1083ca618; end: 1083ca67f;  */

long FUN_1083ca618(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3f0);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca454();
    func_0x0001083cb0ec();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3f0);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3f0);
  }
  return lVar1;
}



/* Entry: 1083ca680; end: 1083ca6e7;  */

long FUN_1083ca680(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 0x3d8);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca4c8();
    func_0x0001083cb0ec();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 0x3d8);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 0x3d8);
  }
  return lVar1;
}



/* Entry: 1083ca6e8; end: 1083ca74f;  */

long FUN_1083ca6e8(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  
  func_0x0001083cb1b4();
  lVar1 = *(long *)(extraout_x8 + 1000);
  if (lVar1 == 0) {
    func_0x0001083cb1c8();
    FUN_1083ca4c8();
    func_0x0001083cb0ec();
    func_0x0001083cb110();
    func_0x0001083cb148();
    func_0x0001083cb100();
    FUN_1083cadbc(extraout_x8_00 + 1000);
    func_0x0001083cb138();
    func_0x0001083cb128();
    lVar1 = *(long *)(*unaff_x19 + 1000);
  }
  return lVar1;
}



/* Entry: 1083ca750; end: 1083cab77;  */

void FUN_1083ca750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 1083cab78; end: 1083cac33;  */

void FUN_1083cab78(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar2 = param_1 + 2;
  lVar1 = *param_1;
  uVar4 = *plVar2 - lVar1;
  uVar5 = param_1[1] - lVar1;
  if (uVar5 < uVar4) {
    plStack_28 = plVar2;
    if (param_1[1] == lVar1) {
      plStack_48 = (long *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = (long)uVar5 >> 3;
      FUN_1083cad10();
      uVar4 = param_1[2] - *param_1;
      plStack_48 = plVar2;
    }
    lStack_40 = (long)plStack_48 + uVar5;
    plStack_30 = plStack_48 + uVar3;
    lStack_38 = lStack_40;
    if (uVar3 < (ulong)((long)uVar4 >> 3)) {
      FUN_1083cacf0(param_1,&plStack_48);
    }
    FUN_1083cad50(&plStack_48);
  }
  return;
}



/* Entry: 1083cac34; end: 1083cac5f;  */

void FUN_1083cac34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1083cac60(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1083cac60; end: 1083cacbb;  */

undefined1  [16] FUN_1083cac60(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_1083cacbc(lVar1,param_2);
    lVar1 = lVar1 + 8;
    param_4 = param_4 + 8;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1083cacbc; end: 1083cacef;  */

long * FUN_1083cacbc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x0001083cb0e0();
  }
  return param_1;
}



/* Entry: 1083cacf0; end: 1083cad0f;  */

void FUN_1083cacf0(void)

{
  func_0x0001083cb194();
  func_0x0001083cb150();
  return;
}



/* Entry: 1083cad10; end: 1083cad33;  */

void FUN_1083cad10(void)

{
  FUN_1083cad34();
  return;
}



/* Entry: 1083cad34; end: 1083cad4f;  */

long * FUN_1083cad34(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1083cad7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083cad50; end: 1083cad7b;  */

long * FUN_1083cad50(long *param_1)

{
  FUN_1083cad7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083cad7c; end: 1083cad83;  */

void FUN_1083cad7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x0001083c63fc();
  }
  return;
}



/* Entry: 1083cad84; end: 1083cadbb;  */

void FUN_1083cad84(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x0001083c63fc();
  }
  return;
}



/* Entry: 1083cadbc; end: 1083cadd3;  */

void FUN_1083cadbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083c6330(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083cadd4; end: 1083cadef;  */

void FUN_1083cadd4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083c6330(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083cadf0; end: 1083cae13;  */

undefined8 FUN_1083cadf0(undefined8 param_1)

{
  FUN_1083cadbc(param_1,0);
  return param_1;
}



/* Entry: 1083cae14; end: 1083cae5f;  */

undefined8 FUN_1083cae14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001083cb1f8();
  func_0x0001083cb1d4();
  if (param_1 != 0) {
    func_0x0001083cb0e0();
  }
  return uVar1;
}



/* Entry: 1083cae60; end: 1083caea7;  */

undefined8 * FUN_1083cae60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_1083caea8();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1083caea8; end: 1083caf57;  */

long FUN_1083caea8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_1083caf58(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_1083cafcc();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar4));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar3 = *param_2;
  *param_2 = 0;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = uVar3;
  FUN_1083caf98(param_1,&plStack_58);
  lVar4 = param_1[1];
  FUN_1083cb00c(&plStack_58);
  return lVar4;
}



/* Entry: 1083caf58; end: 1083caf97;  */

long * FUN_1083caf58(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1083cafb8();
  func_0x0001083cb194();
  func_0x0001083cb150();
  return param_1;
}



/* Entry: 1083caf98; end: 1083cafb7;  */

void FUN_1083caf98(void)

{
  func_0x0001083cb194();
  func_0x0001083cb150();
  return;
}



/* Entry: 1083cafb8; end: 1083cafcb;  */

void FUN_1083cafb8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1083caff0();
  return;
}



/* Entry: 1083cafcc; end: 1083cafef;  */

void FUN_1083cafcc(void)

{
  FUN_1083caff0();
  return;
}



/* Entry: 1083caff0; end: 1083cb00b;  */

long * FUN_1083caff0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1083cb038();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083cb00c; end: 1083cb037;  */

long * FUN_1083cb00c(long *param_1)

{
  FUN_1083cb038();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083cb038; end: 1083cb03f;  */

void FUN_1083cb038(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x0001083c6100();
  }
  return;
}



/* Entry: 1083cb040; end: 1083cb077;  */

void FUN_1083cb040(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x0001083c6100();
  }
  return;
}



/* Entry: 1083cb078; end: 1083cb0c3;  */

undefined8 FUN_1083cb078(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x0001083cb1f8();
  func_0x0001083cb1d4();
  if (param_1 != 0) {
    func_0x0001083cb0e0();
  }
  return uVar1;
}



/* Entry: 1083cb0c4; end: 1083cb21f;  */

void FUN_1083cb0c4(void)

{
  return;
}



/* Entry: 1083cb220; end: 1083cb27b;  */

undefined1 FUN_1083cb220(byte *param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1;
  if ((uVar2 < 0x23) && ((0x4fffff77fU >> (uVar2 & 0x3f) & 1) != 0)) {
    return (&UNK_10df24ee0)[uVar2];
  }
  FUN_10841076c(&UNK_10f491a56);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083cb27c);
  (*pcVar1)();
}



/* Entry: 1083cb27c; end: 1083cb29b;  */

undefined * FUN_1083cb27c(byte *param_1)

{
  code *pcVar1;
  
  if ((ulong)*param_1 < 0x23) {
    return (&PTR_DAT_110a443c0)[*param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083cb29c);
  (*pcVar1)();
}



/* Entry: 1083cb29c; end: 1083cb2fb;  */

undefined1  [16] FUN_1083cb29c(char *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  FUN_1083cb27c();
  pcVar1 = param_1;
  _strlen();
  if (pcVar1 == (char *)0x0) {
LAB_1083cb2e8:
    lVar2 = 0;
  }
  else {
    if (*param_1 == ' ') {
      param_1 = param_1 + 1;
      pcVar1 = pcVar1 + -1;
      if (pcVar1 == (char *)0x0) goto LAB_1083cb2e8;
    }
    lVar2 = (long)pcVar1 - (ulong)((param_1 + (long)pcVar1)[-1] == ' ');
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1083cb2fc; end: 1083cb31f;  */

byte FUN_1083cb2fc(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 - 0x16 < 10) {
    bVar1 = (&UNK_10df24f03)[(ulong)(bVar1 - 0x16) & 0xff];
  }
  return bVar1;
}



/* Entry: 1083cb320; end: 1083cb9c7;  */

/* WARNING: Type propagation algorithm not settling */

byte *******
FUN_1083cb320(byte *******param_1,long *param_2,byte *******param_3,byte *******param_4,
             ulong *param_5,ulong *param_6,ulong *param_7)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *******pppppppbVar6;
  long *plVar7;
  long *plVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong extraout_x8;
  byte ******ppppppbVar11;
  long lVar12;
  ulong uVar13;
  ulong extraout_x9;
  uint uVar14;
  uint uVar15;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  undefined4 uStack_68;
  
  bVar2 = *(byte *)(param_2[1] + 0x25);
  bVar3 = *(byte *)param_1;
  if (bVar3 - 8 < 3) {
    lVar12 = *param_2;
    uVar13 = *(ulong *)(lVar12 + 0xc0);
    *param_5 = uVar13;
    *param_6 = uVar13;
    uVar13 = *(ulong *)(lVar12 + 0xc0);
    *param_7 = uVar13;
    FUN_1083cb9c8(param_3,uVar13,bVar2);
    if ((int)param_3 == 0) {
      return param_3;
    }
    param_3 = *(byte ********)(*param_2 + 0xc0);
LAB_1083cb3e4:
    FUN_1083f06ac();
    uVar15 = (uint)bVar2;
    if ((ulong)param_4 >> 0x20 == 0) {
      uVar15 = 1;
    }
    uVar1 = 0;
    if (((ulong)param_3 & 1) == 0) {
      uVar1 = uVar15;
    }
    return (byte *******)(ulong)uVar1;
  }
  if (bVar3 - 0x10 < 2) {
    uVar15 = *(byte *)((long)param_3 + 0x2c) - 1;
    if ((uVar15 < 0xf) && ((0x7a61U >> (ulong)(uVar15 & 0x1f) & 1) != 0)) goto LAB_1083cb4f4;
    plVar7 = param_2;
    func_0x0001083cbb00();
    uStack_68 = SUB84(plVar7,0);
    pppppppbVar10 = param_1;
    plVar8 = plVar7;
    pppppppbStack_70 = param_1;
    func_0x0001083cbaf4();
    pppppppbVar6 = (byte *******)&pppppppbStack_70;
    func_0x0001083cb9fc(pppppppbVar6,pppppppbVar10,(ulong)plVar8 & 0xffffffff);
    if ((int)pppppppbVar6 == 0) {
      func_0x0001083cbb0c((ulong)pppppppbVar10 >> 0x20);
      if (((ulong)plVar8 & 1) != 0) {
        return pppppppbVar6;
      }
      if (extraout_w8 == 0) {
        return pppppppbVar6;
      }
    }
    else {
      pppppppbVar6 = (byte *******)0x0;
      func_0x0001083cbb0c((ulong)param_1 >> 0x20,0);
      if (((ulong)plVar7 & 1) != 0) {
        return pppppppbVar6;
      }
      param_4 = param_3;
      if ((extraout_x8 & 1) == 0) {
        return pppppppbVar6;
      }
    }
    *param_5 = (ulong)param_4;
    *param_6 = (ulong)param_4;
    *param_7 = *(ulong *)(*param_2 + 0xc0);
LAB_1083cb528:
    pppppppbVar6 = (byte *******)0x1;
  }
  else {
    if (bVar3 == 0x22) {
      uVar15 = *(byte *)((long)param_3 + 0x2c) - 1;
      if (((0xe < uVar15) || ((0x7261U >> (ulong)(uVar15 & 0x1f) & 1) == 0)) &&
         ((uVar15 = *(byte *)((long)param_4 + 0x2c) - 1, 0xe < uVar15 ||
          ((0x7261U >> (ulong)(uVar15 & 0x1f) & 1) == 0)))) {
        *param_5 = (ulong)param_3;
        *param_6 = (ulong)param_4;
        *param_7 = (ulong)param_4;
        return (byte *******)0x1;
      }
    }
    else if (bVar3 == 0xf) {
      if (*(char *)((long)param_3 + 0x2c) != '\f') {
        *param_5 = (ulong)param_3;
        *param_6 = (ulong)param_3;
        *param_7 = (ulong)param_3;
        goto LAB_1083cb3e4;
      }
    }
    else {
      pppppppbVar6 = param_1;
      plVar7 = param_2;
      func_0x0001083cbab8(*param_3);
      func_0x0001083cbaa8();
      func_0x0001083cbae4();
      if (((int)pppppppbVar6 != 3) && (func_0x0001083cbac4(), (int)pppppppbVar6 != 3)) {
        bVar2 = *(byte *)param_1;
        uVar1 = (uint)(bVar2 < 0x20) & 0xffc08000U >> (ulong)(bVar2 & 0x1f);
        if (bVar2 != 0x18 && bVar2 != 2) {
LAB_1083cb5b8:
          ppppppbVar11 = *param_3;
LAB_1083cb6a8:
          func_0x0001083cbaa0(ppppppbVar11[0x1a]);
          if (((ulong)pppppppbVar6 & 1) == 0) {
            func_0x0001083cbaa0((*param_3)[0x1b]);
          }
          else {
            pppppppbVar6 = (byte *******)0x1;
          }
          uVar14 = 0;
          uVar15 = uVar14;
          pppppppbVar10 = param_1;
          if ((*(byte *)param_1 < 0x20) &&
             (uVar15 = 0, (1 << (ulong)(*(byte *)param_1 & 0x1f) & 0xffc0707fU) != 0)) {
            if ((int)pppppppbVar6 == 0) {
              uVar14 = 0;
LAB_1083cb788:
              uVar15 = 1;
              goto LAB_1083cb78c;
            }
            func_0x0001083cba98((*param_4)[0x17]);
            if ((int)pppppppbVar6 == 0) {
              uVar14 = 1;
              goto LAB_1083cb788;
            }
            func_0x0001083cbab8(*param_3);
            func_0x0001083cbad4(param_1,param_2,pppppppbVar6,param_4);
            if ((int)pppppppbVar10 == 0) {
              return pppppppbVar10;
            }
            func_0x0001083cba78();
            func_0x0001083cba68();
            func_0x0001083cba88();
            FUN_1083f0d08();
            *param_5 = (ulong)pppppppbVar10;
            if (*(byte *)param_1 - 0x12 < 4) goto LAB_1083cb528;
            func_0x0001083cba78();
            func_0x0001083cba68();
            func_0x0001083cba88();
          }
          else {
LAB_1083cb78c:
            func_0x0001083cba98((*param_4)[0x1a]);
            if (((ulong)pppppppbVar6 & 1) == 0) {
              func_0x0001083cba98((*param_4)[0x1b]);
            }
            else {
              pppppppbVar6 = (byte *******)0x1;
            }
            if (((uVar15 & (uint)pppppppbVar6 & (uVar1 ^ 1)) != 1) ||
               (func_0x0001083cbaa0((*param_3)[0x17]), (int)pppppppbVar6 == 0)) {
              func_0x0001083cbb00();
              uStack_68 = SUB84(plVar7,0);
              pppppppbVar10 = pppppppbVar6;
              pppppppbStack_70 = pppppppbVar6;
              if (uVar1 == 0) {
                func_0x0001083cbaf4();
                pppppppbStack_78 = pppppppbVar10;
              }
              else {
                pppppppbStack_78 = (byte *******)0x0;
                plVar7 = (long *)0x1;
              }
              uVar15 = (uint)pppppppbVar10;
              func_0x0001083cbaa0((*param_3)[0x17]);
              if (uVar15 == 0) {
                if (uVar14 != 0) goto LAB_1083cb8b4;
              }
              else {
                func_0x0001083cba98((*param_4)[0x17]);
                if (uVar14 != 0 || (uVar15 & 1) != 0) {
LAB_1083cb8b4:
                  if (((0x1f < *(byte *)param_1) ||
                      ((1 << (ulong)(*(byte *)param_1 & 0x1f) & 0xfc007070U) == 0)) ||
                     ((func_0x0001083cbae4(), (uVar15 - 1 & 0xff) < 2 &&
                      (func_0x0001083cbac4(), (uVar15 - 1 & 0xff) < 2)))) {
                    func_0x0001083cbb0c((ulong)pppppppbVar6 >> 0x20);
                    if (((extraout_x9 & 1) == 0) && (extraout_w8_00 != 0)) {
                      pppppppbVar6 = (byte *******)&pppppppbStack_70;
                      func_0x0001083cb9fc(pppppppbVar6,pppppppbStack_78,(ulong)plVar7 & 0xffffffff);
                      if (((ulong)pppppppbVar6 & 1) == 0) goto LAB_1083cb92c;
                    }
                    else {
LAB_1083cb92c:
                      pppppppbVar6 = (byte *******)0x0;
                      func_0x0001083cbb0c((ulong)pppppppbStack_78 >> 0x20,0);
                      if (((ulong)plVar7 & 1) != 0) {
                        return pppppppbVar6;
                      }
                      param_3 = param_4;
                      if (extraout_w8_01 == 0) {
                        return pppppppbVar6;
                      }
                    }
                    *param_5 = (ulong)param_3;
                    *param_6 = (ulong)param_3;
                    *param_7 = (ulong)param_3;
                    if (*(byte *)param_1 - 0x12 < 4) {
                      *param_7 = *(ulong *)(*param_2 + 0xc0);
                    }
                    goto LAB_1083cb528;
                  }
                }
              }
              goto LAB_1083cb4f4;
            }
            func_0x0001083cbaa8();
            func_0x0001083cbad4(param_1,param_2,param_3,pppppppbVar6);
            if ((int)pppppppbVar10 == 0) {
              return pppppppbVar10;
            }
            func_0x0001083cba58();
            func_0x0001083cba48();
            func_0x0001083cba88();
            FUN_1083f0d08();
            *param_6 = (ulong)pppppppbVar10;
            if (*(byte *)param_1 - 0x12 < 4) goto LAB_1083cb528;
            func_0x0001083cba58();
            func_0x0001083cba48();
            func_0x0001083cba88();
          }
          FUN_1083f0d08();
          *param_7 = (ulong)pppppppbVar10;
          goto LAB_1083cb528;
        }
        func_0x0001083cbaa0((*param_3)[0x1b]);
        if ((int)pppppppbVar6 == 0) {
          func_0x0001083cbaa0((*param_3)[0x1a]);
          if (((ulong)pppppppbVar6 & 1) == 0) goto LAB_1083cb5b8;
          lVar12 = 0xd8;
LAB_1083cb5c4:
          func_0x0001083cba98(*(undefined8 *)((long)*param_4 + lVar12));
          ppppppbVar11 = *param_3;
          if ((int)pppppppbVar6 == 0) goto LAB_1083cb6a8;
        }
        else {
          func_0x0001083cba98((*param_4)[0x1b]);
          if ((int)pppppppbVar6 == 0) {
            lVar12 = 0xd0;
            goto LAB_1083cb5c4;
          }
          ppppppbVar11 = *param_3;
        }
        func_0x0001083cbab8(ppppppbVar11);
        pppppppbVar10 = pppppppbVar6;
        func_0x0001083cbaa8();
        FUN_1083cb320(param_1,param_2,pppppppbVar6,pppppppbVar10,param_5,param_6,param_7);
        if ((int)param_1 == 0) {
          return param_1;
        }
        func_0x0001083cba78();
        func_0x0001083cba68();
        func_0x0001083cba88();
        FUN_1083f0d08();
        *param_5 = (ulong)param_1;
        func_0x0001083cba58();
        func_0x0001083cba48();
        func_0x0001083cba88();
        FUN_1083f0d08();
        *param_6 = (ulong)param_1;
        func_0x0001083cba78();
        pppppppbVar6 = param_1;
        func_0x0001083cba68();
        pppppppbVar10 = pppppppbVar6;
        func_0x0001083cba58();
        uVar4 = uVar15;
        func_0x0001083cba48();
        uVar5 = uVar4;
        func_0x0001083cba98((*param_4)[0x1a]);
        uVar15 = (uint)pppppppbVar10;
        uVar14 = uVar4;
        if (uVar5 == 0) {
          uVar14 = uVar15;
        }
        pppppppbVar10 = (byte *******)(ulong)uVar14;
        if (uVar5 == 0) {
          uVar15 = uVar4;
        }
        plVar7 = (long *)*param_7;
        pppppppbVar9 = pppppppbVar6;
        if (1 < (int)uVar14) {
          pppppppbVar9 = pppppppbVar10;
          pppppppbVar10 = pppppppbVar6;
        }
        FUN_1083f0d08(plVar7,param_2,pppppppbVar9,pppppppbVar10);
        *param_7 = (ulong)plVar7;
        if (uVar1 == 0) {
LAB_1083cb9b4:
          return (byte *******)(ulong)((uint)param_1 == uVar15);
        }
        (**(code **)(*plVar7 + 0x60))();
        if ((uint)plVar7 == (uint)param_1) {
          plVar7 = (long *)*param_7;
          (**(code **)(*plVar7 + 0x68))();
          if ((int)plVar7 == (int)pppppppbVar6) goto LAB_1083cb9b4;
        }
      }
    }
LAB_1083cb4f4:
    pppppppbVar6 = (byte *******)0x0;
  }
  return pppppppbVar6;
}



/* Entry: 1083cb9c8; end: 1083cb9fb;  */

undefined4 FUN_1083cb9c8(ulong param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_1083f06ac();
  if (param_1 >> 0x20 == 0) {
    param_3 = 1;
  }
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = param_3;
  }
  return uVar1;
}



/* Entry: 1083cb9fc; end: 1083cbb17;  */

bool FUN_1083cb9fc(int *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = (int)((ulong)param_2 >> 0x20);
  if (*(byte *)(param_1 + 2) < param_3) {
    return true;
  }
  if (*(byte *)(param_1 + 2) <= param_3) {
    if (param_1[1] < iVar1) {
      return true;
    }
    if (param_1[1] <= iVar1) {
      return *param_1 < (int)param_2;
    }
  }
  return false;
}



/* Entry: 1083cbb18; end: 1083cbb3f;  */

void FUN_1083cbb18(undefined8 param_1,undefined8 param_2)

{
  FUN_1083cbb40(param_1,param_2,&stack0x00000000);
  return;
}



/* Entry: 1083cbb40; end: 1083cbc43;  */

long * FUN_1083cbb40(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  puVar3 = &uStack_460;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_448;
  uStack_458 = param_3;
  uStack_450 = param_3;
  _vsnprintf(puVar2,0x400,param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 0x401) {
    (**(code **)(*param_1 + 0x18))(param_1,auStack_448,(long)iVar1);
  }
  else {
    uVar4 = (ulong)(iVar1 + 1);
    __Znam();
    uStack_460 = uVar4;
    _vsnprintf();
    (**(code **)(*param_1 + 0x18))(param_1,uVar4,(ulong)puVar2 & 0xffffffff);
    func_0x0001078ae540();
    param_1 = (long *)puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001078ae540(&uStack_460);
  __Unwind_Resume(param_1);
  func_0x0001083c635c(param_1 + 10);
  func_0x0001073f2190(param_1 + 9);
  return param_1;
}



/* Entry: 1083cbc44; end: 1083cbc6f;  */

long FUN_1083cbc44(long param_1)

{
  func_0x0001083c635c(param_1 + 0x50);
  func_0x0001073f2190(param_1 + 0x48);
  return param_1;
}



/* Entry: 1083cbc70; end: 1083cbe03;  */

undefined1  [16] FUN_1083cbc70(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  int iVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [24];
  
  if (*(int *)(param_1 + 0x84) == 0x5d) {
    uVar5 = param_1 + 0x68;
    func_0x0001083c9940();
    iVar6 = (int)uVar5;
    cVar3 = SBORROW4(iVar6,3);
    cVar4 = iVar6 + -3 < 0;
    if (iVar6 == 3) {
      func_0x0001083d35a0(*(undefined8 *)(param_1 + 0x48),uVar5);
      func_0x0001083d32ec();
      func_0x0001083d328c(&DAT_10f638984);
      func_0x0001083d3298();
      func_0x0001083d322c();
      uVar1 = extraout_x11_00;
      puVar2 = extraout_x10_00;
      if (cVar4 == cVar3) {
        uVar1 = extraout_x8_00;
        puVar2 = auStack_58;
      }
      func_0x0001083d3528(param_1,uVar5,param_3,puVar2,uVar1);
      func_0x0001083d34a4();
      func_0x0001083d3430();
      func_0x0001083d3374();
      uVar7 = 3;
    }
    else {
      cVar3 = SBORROW4(iVar6,0x28);
      cVar4 = iVar6 + -0x28 < 0;
      if (iVar6 != 0x28) {
        uVar7 = uVar5;
        if (iVar6 != 0x29) goto LAB_1083cbd54;
        uVar7 = 0x2a;
        if (0xe < *(byte *)(param_1 + 0x41)) goto LAB_1083cbd54;
        cVar4 = false;
        cVar3 = false;
        if ((1 << (ulong)(*(byte *)(param_1 + 0x41) & 0x1f) & 0x6380U) == 0) goto LAB_1083cbd54;
      }
      func_0x0001083d35a0(*(undefined8 *)(param_1 + 0x48),uVar5);
      func_0x0001083d32ec();
      func_0x0001083d328c(&UNK_10f491b74);
      func_0x0001083d3298();
      func_0x0001083d322c();
      uVar1 = extraout_x11;
      puVar2 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar1 = extraout_x8;
        puVar2 = auStack_58;
      }
      func_0x0001083d3528(param_1,uVar5,param_3,puVar2,uVar1);
      func_0x0001083d34a4();
      func_0x0001083d3430();
      func_0x0001083d3374();
      uVar7 = 0x2a;
    }
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x84);
    param_2 = (ulong)*(uint *)(param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x84) = 0x5d;
    uVar5 = uVar7;
  }
LAB_1083cbd54:
  auVar8._8_8_ = param_2 & 0xffffffff;
  auVar8._0_8_ = uVar5 & 0xffffffff00000000 | uVar7 & 0xffffffff;
  return auVar8;
}



/* Entry: 1083cbe04; end: 1083cbe47;  */

void FUN_1083cbe04(long *param_1,ulong param_2,int param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  if (0xfe < param_3) {
    param_3 = 0xff;
  }
  uVar1 = 0xffffff;
  if ((param_2 & 0x8000000000000000) == 0) {
    uVar1 = (uint)(param_2 >> 0x20) & 0xffffff | param_3 << 0x18;
  }
  plVar3 = *(long **)(*(long *)(*param_1 + 0x28) + 0x10);
  uVar2 = param_4;
  FUN_1083c8ae0(param_4,param_5,&UNK_10df20bcd,8);
  if ((uVar2 & 1) != 0) {
    return;
  }
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001083c8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,param_4,param_5,uVar1);
  return;
}



/* Entry: 1083cbe48; end: 1083cbed3;  */

undefined8 FUN_1083cbe48(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_40;
  puVar4 = &uStack_40;
  lVar1 = param_1;
  FUN_1083cbc70();
  if ((int)lVar1 == 0x59) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    lVar5 = lVar1;
    func_0x0001083cbe30(uVar2,lVar1,param_2 & 0xffffffff);
    uStack_40 = uVar2;
    lStack_38 = lVar5;
    func_0x0001057fa6dc(&uStack_40,0xd,0);
    if ((puVar3 != (undefined8 *)0xffffffffffffffff) ||
       (func_0x0001057fa6dc(&uStack_40,10,0), puVar4 != (undefined8 *)0xffffffffffffffff)) {
      return 1;
    }
  }
  *(long *)(param_1 + 0x84) = lVar1;
  *(int *)(param_1 + 0x8c) = (int)param_2;
  return 0;
}



/* Entry: 1083cbed4; end: 1083cbf4b;  */

void FUN_1083cbed4(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    FUN_1083cbc70();
  } while (iVar1 - 0x59U < 3);
  return;
}



/* Entry: 1083cbf4c; end: 1083cbfb3;  */

undefined8 FUN_1083cbf4c(long param_1,int param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x84) == 0x5d || *(int *)(param_1 + 0x84) == param_2) {
    lVar1 = param_1;
    iVar3 = param_2;
    FUN_1083cbed4();
    if (param_2 == (int)lVar1) {
      if (param_3 != (long *)0x0) {
        *param_3 = lVar1;
        *(int *)(param_3 + 1) = iVar3;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      *(long *)(param_1 + 0x84) = lVar1;
      *(int *)(param_1 + 0x8c) = iVar3;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 1083cbfb4; end: 1083cc14b;  */

bool FUN_1083cbfb4(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  iVar3 = param_2;
  FUN_1083cbed4();
  if (param_2 == (int)lVar1) {
    if (param_4 != (long *)0x0) {
      *param_4 = lVar1;
      *(int *)(param_4 + 1) = iVar3;
    }
  }
  else {
    func_0x000107c278b8(auStack_b8,param_3);
    func_0x0001004c3cd0(auStack_a0,&UNK_10f491ba7,auStack_b8);
    func_0x00010048a6c8(auStack_88,auStack_a0,&UNK_10f491bb1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    lVar4 = lVar1;
    func_0x0001083d35a0();
    uStack_e0 = uVar2;
    lStack_d8 = lVar4;
    func_0x000107c27958(auStack_d0,&uStack_e0);
    func_0x00010533a9c0(auStack_70,auStack_88,auStack_d0);
    func_0x0001083d34c0();
    func_0x00010048a6c8(auStack_58,auStack_70);
    func_0x0001083d3528(param_1,lVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    func_0x0001083d34f0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return param_2 == (int)lVar1;
}



/* Entry: 1083cc14c; end: 1083cc247;  */

void FUN_1083cc14c(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  int iVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  FUN_1083cbfb4(param_1,0x2a,&UNK_10f491bbf,param_2);
  if ((int)lVar1 != 0) {
    func_0x0001083d37c0();
    iVar2 = (int)*(undefined8 *)(extraout_x8 + 0x20);
    func_0x0001083d3668();
    func_0x0001083d36fc();
    func_0x0001083d3918();
    if (iVar2 != 0) {
      func_0x0001083d33cc();
      func_0x0001083d32ec();
      func_0x0001083d328c(&UNK_10f491bcd);
      func_0x0001083d34c0();
      func_0x00010048a6c8(auStack_48,auStack_60);
      func_0x0001083d3408();
      func_0x0001083d3910();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      func_0x0001083d3430();
      func_0x0001083d3374();
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  return;
}



/* Entry: 1083cc248; end: 1083cc2b3;  */

void FUN_1083cc248(int param_1)

{
  undefined4 uVar1;
  long extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar2;
  
  func_0x0001083d34ac();
  FUN_1083cbf4c();
  if (param_1 != 0) {
    func_0x0001083d37c0();
    iVar2 = (int)*(undefined8 *)(extraout_x8 + 0x20);
    func_0x0001083d3668();
    func_0x0001083d36fc();
    func_0x0001083d3918();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(unaff_x20 + 1);
      *(undefined8 *)(unaff_x19 + 0x84) = *unaff_x20;
      *(undefined4 *)(unaff_x19 + 0x8c) = uVar1;
    }
  }
  return;
}



/* Entry: 1083cc2b4; end: 1083cc323;  */

void FUN_1083cc2b4(long *param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(*param_1 + 0x28) + 0x10);
  uVar1 = param_3;
  FUN_1083c8ae0(param_3,param_4,&UNK_10df20bcd,8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001083c8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4,param_2);
  return;
}



/* Entry: 1083cc324; end: 1083cc3e7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083cc324(void)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long alStack_30 [2];
  
  func_0x0001083d382c();
  *unaff_x19 = 0;
  if (*(int *)(*(long *)(*(long *)(*unaff_x20 + 0x28) + 0x10) + 0x18) != 0) {
    lVar2 = unaff_x20[10];
    lVar1 = unaff_x20[0xb];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -8;
      func_0x0001083c63fc();
    }
    unaff_x20[0xb] = lVar2;
    return;
  }
  alStack_30[0] = unaff_x20[9];
  lStack_48 = unaff_x20[0xb];
  lStack_50 = unaff_x20[10];
  lStack_40 = unaff_x20[0xc];
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  FUN_1083c5790(alStack_30 + 1,*unaff_x20,alStack_30,&lStack_50);
  alStack_30[1] = 0;
  FUN_1083211c0();
  FUN_108321198(alStack_30 + 1);
  func_0x0001083c635c(&lStack_50);
  func_0x0001073f2190(alStack_30);
  return;
}



/* Entry: 1083cc3e8; end: 1083cc4bb;  */

void FUN_1083cc3e8(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 8) = 0;
  if ((*(char *)(param_1[9] + 0x17) < '\0') && (0x7ffffe < *(ulong *)(param_1[9] + 8))) {
    puVar6 = &UNK_10f491bf6;
    uVar4 = 0xffffff;
    uVar7 = 0x14;
FUN_1083cc2b4:
    plVar3 = *(long **)(*(long *)(*param_1 + 0x28) + 0x10);
    puVar2 = puVar6;
    FUN_1083c8ae0(puVar6,uVar7,&UNK_10df20bcd,8);
    if (((ulong)puVar2 & 1) == 0) {
      *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001083c8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar6,uVar7,uVar4);
      return;
    }
    return;
  }
  plVar3 = param_1;
  func_0x0001083d337c();
  if ((int)plVar3 != 0x2b) goto LAB_1083cc468;
  param_2 = 1;
  do {
    plVar3 = param_1;
    FUN_1083cc588();
LAB_1083cc468:
    while( true ) {
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        return;
      }
      func_0x0001083d337c();
      iVar5 = (int)param_2;
      iVar1 = (int)plVar3;
      if (iVar1 == 0x2b) break;
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == 0x5c) {
        func_0x0001083d337c();
        puVar6 = &UNK_10f491c0b;
        if (0xfe < iVar5) {
          iVar5 = 0xff;
        }
        uVar4 = 0xffffff;
        if (((ulong)plVar3 & 0x8000000000000000) == 0) {
          uVar4 = (uint)((ulong)plVar3 >> 0x20) & 0xffffff | iVar5 << 0x18;
        }
        uVar7 = 0xd;
        goto FUN_1083cc2b4;
      }
      plVar3 = param_1;
      FUN_1083cc870();
    }
    param_2 = 0;
  } while( true );
}



/* Entry: 1083cc4bc; end: 1083cc55b;  */

void FUN_1083cc4bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined8 *puVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x0001083d382c();
  func_0x0001083d36c8();
  uVar1 = *(undefined8 *)(extraout_x8 + 0x20);
  puVar2 = (undefined8 *)unaff_x20[9];
  uStack_40 = puVar2[2];
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  FUN_1083ee024(uVar1,&uStack_50);
  func_0x0001083d3494();
  FUN_1083ca750();
  puVar2 = (undefined8 *)*unaff_x19;
  *puVar2 = param_2;
  FUN_1083cc55c(puVar2 + 1,*unaff_x20 + 0x38);
  FUN_1083d2980(*unaff_x19 + 0x10,unaff_x20 + 10);
  func_0x0001083d36c8();
  *(undefined1 *)(*unaff_x19 + 0x28) = **(undefined1 **)(extraout_x8_00 + 8);
  return;
}



/* Entry: 1083cc55c; end: 1083cc587;  */

undefined8 FUN_1083cc55c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_1083c5f2c(param_1,uVar1);
  return param_1;
}



/* Entry: 1083cc588; end: 1083cc86f;  */

void FUN_1083cc588(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long alStack_a8 [3];
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_78;
  undefined4 uStack_70;
  ulong uStack_60;
  undefined4 uStack_58;
  
  uStack_60 = 0xffffffff0000005d;
  uStack_58 = 0xffffffff;
  uVar5 = 0x2b;
  plVar2 = param_1;
  FUN_1083cbfb4(param_1,0x2b,&UNK_10f491ca4,&uStack_60);
  if ((int)plVar2 == 0) {
    return;
  }
  func_0x0001083d3204();
  plVar3 = plVar2;
  func_0x000107c27944();
  iVar1 = (int)plVar3;
  if (iVar1 != 0) {
    func_0x0001083d3968();
    lStack_78 = -0xffffffa3;
    uStack_70 = 0xffffffff;
    func_0x0001083d34b8();
    if (iVar1 == 0) {
      return;
    }
    plVar2 = param_1;
    func_0x0001083d3318(param_1,0x46,&DAT_10f491c19);
    if ((int)plVar2 == 0) {
      return;
    }
    uStack_90 = 0xffffffff0000005d;
    uStack_88 = 0xffffffff;
    plVar2 = param_1;
    func_0x0001083d37cc();
    if ((int)plVar2 == 0) {
      return;
    }
    plVar2 = param_1;
    FUN_1083cbe48();
    if ((int)plVar2 != 0) {
      uVar8 = *(undefined8 *)(*param_1 + 0x28);
      func_0x0001083d3408();
      func_0x0001083cc2c8();
      lVar9 = param_1[9];
      lVar4 = lVar9;
      lVar6 = lStack_78;
      func_0x0001083cbe30(lVar9,lStack_78,uStack_70);
      uVar5 = uStack_90;
      func_0x0001083cbe30(lVar9,uStack_90,uStack_88);
      FUN_1083dee60(alStack_a8,uVar8,(ulong)plVar2 & 0xffffffff,lVar4,lVar6,lVar9,uVar5);
      lVar4 = alStack_a8[0];
      if (alStack_a8[0] != 0) {
        alStack_a8[0] = 0;
        func_0x0001083d3800();
        if (lVar4 != 0) {
          func_0x0001083d314c();
        }
      }
      func_0x0001083d29ec(alStack_a8);
      return;
    }
    func_0x0001083d3408();
    goto LAB_1083cc814;
  }
  func_0x000107c27944(plVar2,uVar5,&UNK_10f491cbb,8);
  if ((int)plVar2 == 0) {
    func_0x0001083d3204();
    func_0x0001083d32ec();
    func_0x0001083d328c(&UNK_10f491cc4);
    func_0x0001083d34c0();
    func_0x0001083d3298();
    func_0x0001083d322c();
    func_0x0001083d33f8();
    func_0x0001083d34a4();
    func_0x0001083d3430();
    func_0x0001083d3374();
    return;
  }
  if ((param_2 & 1) == 0) {
    func_0x0001083d3408();
    goto LAB_1083cc814;
  }
  plVar2 = param_1;
  FUN_1083cd77c(param_1,&lStack_78);
  if ((int)plVar2 == 0) {
    return;
  }
  if (lStack_78 == 100) {
    uVar7 = 0;
LAB_1083cc7dc:
    *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x28) + 8) + 0x30) = uVar7;
    FUN_1083cbe48();
    if (((ulong)param_1 & 1) != 0) {
      return;
    }
  }
  else if (lStack_78 == 300) {
    uVar7 = 1;
    goto LAB_1083cc7dc;
  }
  func_0x0001083d3408();
LAB_1083cc814:
  func_0x0001083cc2b4();
  return;
}



/* Entry: 1083cc870; end: 1083cd77b;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_1083cc870(mach_header *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  dword dVar8;
  mach_header *pmVar9;
  undefined1 *puVar10;
  mach_header *pmVar11;
  mach_header *pmVar12;
  ulong *puVar13;
  mach_header **ppmVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong *puVar17;
  ulong *puVar18;
  int iVar19;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  mach_header *pmVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  ulong unaff_x27;
  mach_header *pmVar30;
  ulong *puStack_1b0;
  undefined1 auStack_1a4 [60];
  undefined1 auStack_168 [24];
  mach_header *pmStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [20];
  dword dStack_11c;
  dword dStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  mach_header *pmStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  char cStack_c1;
  undefined4 uStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  mach_header *pmStack_88;
  undefined8 uStack_80;
  
  pmVar9 = param_1;
  func_0x0001083d335c();
  uStack_80 = extraout_x8;
  func_0x0001083cbf08();
  uVar6 = (int)pmVar9 == 0x58;
  if ((bool)uVar6) {
    func_0x0001083d35e0();
    func_0x0001083d3620();
    FUN_1083cbe04();
    goto LAB_1083cc8d0;
  }
  puVar10 = auStack_1a4;
  FUN_1083cd86c(puVar10,param_1);
  func_0x0001083d337c();
  puVar29 = &UNK_10df24000;
  iVar19 = (int)puVar10;
  if (iVar19 == 0x1f) {
    auStack_168._8_8_ = auStack_168._8_8_ & 0xffffffff00000000;
    auStack_168._0_8_ = param_1;
    func_0x0001083d337c();
    func_0x0001083d3734(0xffffff);
    uVar6 = ((ulong)puVar10 & 0x8000000000000000) == 0;
    pmVar9 = param_1;
    func_0x0001083d3318(param_1,0x1f,&UNK_10f491d87);
    if (((ulong)pmVar9 & 1) == 0) {
      uVar20 = 0;
      lVar27 = 0;
    }
    else {
      auStack_130._0_8_ = (mach_header *)0xffffffff0000005d;
      auStack_130._8_4_ = 0xffffffff;
      func_0x0001083d34b8();
      if ((((ulong)pmVar9 & 1) == 0) ||
         (pmVar9 = param_1, func_0x0001083d3318(param_1,0x2e,&DAT_10f491d90), (int)pmVar9 == 0)) {
LAB_1083ccdf4:
        lVar27 = 0;
      }
      else {
        pmVar9 = (mach_header *)auStack_168;
        func_0x0001083cf840();
        if ((int)pmVar9 == 0) goto LAB_1083ccdf4;
        auStack_140._0_8_ = (mach_header *)0x0;
        auStack_140._8_8_ = &MACH_HEADER;
        puVar24 = (undefined8 *)((ulong)&uStack_d8 | 4);
        while( true ) {
          uVar20 = 0x2f;
          pmVar9 = param_1;
          func_0x0001083d333c();
          if (((ulong)pmVar9 & 1) != 0) {
            uVar25 = *(undefined8 *)(*(long *)param_1 + 0x28);
            func_0x0001083d3408();
            func_0x0001083cc2c8();
            pmVar23 = pmVar9;
            pmVar11 = (mach_header *)auStack_130._0_8_;
            func_0x0001083d3668();
            FUN_1083d2d60(&uStack_d8,auStack_140);
            FUN_1083eaff0(auStack_130 + 0x10,uVar25,(ulong)pmVar9 & 0xffffffff,pmVar23,pmVar11,
                          &uStack_d8);
            func_0x0001083d3690();
            pmVar9 = (mach_header *)CONCAT44(dStack_11c,auStack_130._16_4_);
            if (pmVar9 == (mach_header *)0x0) {
              lVar27 = 0;
            }
            else {
              lVar27._0_4_ = pmVar9->ncmds;
              lVar27._4_4_ = pmVar9->sizeofcmds;
              auStack_130._16_4_ = 0;
              dStack_11c = 0;
              pmStack_150 = pmVar9;
              FUN_1083d2a10(&param_1[2].ncmds,&pmStack_150);
              if (pmStack_150 != (mach_header *)0x0) {
                func_0x0001083d314c();
              }
            }
            func_0x0001083d2e24(auStack_130 + 0x10);
            goto LAB_1083cd1f0;
          }
          func_0x0001083d337c();
          pmVar23 = pmVar9;
          func_0x0001083d3510();
          func_0x0001083d3530();
          uVar3 = uStack_e8;
          if (pmVar23 == (mach_header *)0x0) break;
          iVar19 = (int)uVar20;
          if (0xfe < iVar19) {
            iVar19 = 0xff;
          }
          uVar16 = (uint)((ulong)pmVar9 >> 0x20) & 0xffffff | iVar19 << 0x18;
          uVar6 = pmVar9 == (mach_header *)0xffffffffffffffff;
          pmVar11 = pmVar23;
          if ((mach_header *)0x7fffffffffffffff < pmVar9) {
            uVar16 = 0xffffff;
          }
          do {
            pmStack_150 = (mach_header *)0xffffffff0000005d;
            uStack_148 = 0xffffffff;
            func_0x0001083d34b8();
            pmVar30 = pmVar23;
            if ((int)pmVar11 == 0) goto LAB_1083cd1ec;
            while( true ) {
              func_0x0001083d3988();
              func_0x0001083d333c();
              if ((int)pmVar11 == 0) break;
              func_0x0001083d36d4();
              iVar19 = (int)pmVar11;
              if (((ulong)pmVar11 & 1) == 0) goto LAB_1083cd1ec;
              func_0x0001083d3784();
              func_0x0001083d3318();
              if (iVar19 == 0) goto LAB_1083cd1ec;
              uVar21 = uStack_d8 & 0xffffffff;
              pmVar12 = param_1;
              func_0x0001083cc2c8(param_1,uVar16);
              pmVar11 = param_1;
              func_0x0001083cea7c(param_1,pmVar30,uVar21,(ulong)pmVar12 & 0xffffffff);
              pmVar30 = pmVar11;
            }
            pmVar11 = param_1;
            func_0x0001083cc300(param_1,pmVar9,uVar20 & 0xffffffff);
            puVar17 = *(ulong **)&param_1[2].cpusubtype;
            pmVar12 = pmStack_150;
            func_0x0001083cbe30();
            *(undefined4 *)(puVar24 + 6) = uStack_ec;
            puVar24[1] = CONCAT44(uStack_110,uStack_114);
            *puVar24 = CONCAT44(dStack_118,dStack_11c);
            puVar24[3] = uStack_104;
            puVar24[2] = uStack_10c;
            puVar24[5] = uStack_f4;
            puVar24[4] = uStack_fc;
            uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)pmVar11);
            uStack_a0 = uVar3;
            puStack_98 = puVar17;
            uStack_90 = pmVar12;
            pmStack_88 = pmVar30;
            func_0x0001083cf8b8(auStack_140,&uStack_d8);
            pmVar11 = param_1;
            func_0x0001083d32c0();
          } while (((ulong)pmVar11 & 1) != 0);
          pmVar9 = param_1;
          func_0x0001083d347c(param_1,0x58);
          func_0x0001083d3318();
          if (((ulong)pmVar9 & 1) == 0) break;
        }
LAB_1083cd1ec:
        lVar27 = 0;
LAB_1083cd1f0:
        pmVar9 = (mach_header *)auStack_140;
        func_0x0001083d2d14();
      }
      uVar20 = auStack_168._8_8_ & 0xffffffff;
    }
    func_0x0001083d3168(uVar20);
    if (lVar27 != 0) {
      uStack_d8 = 0xffffffff0000005d;
      uStack_d0 = 0xffffffff;
      func_0x0001083d38cc();
      uVar3 = uStack_d0;
      uVar20 = uStack_d8;
      if ((int)pmVar9 == 0) {
        func_0x0001083d347c();
        func_0x0001083d3240(param_1);
      }
      else {
        func_0x0001083d353c();
        func_0x0001083cc300();
        FUN_1083ce384(param_1,(ulong)pmVar9 & 0xffffffff,auStack_1a4,lVar27,uVar20,uVar3);
      }
    }
LAB_1083cd1b0:
    bVar22 = true;
    goto LAB_1083cd1b4;
  }
  if (iVar19 == 0x58) {
    func_0x0001083d35e0();
    FUN_1083e8ce4(&uStack_d8,*(undefined8 *)(*(long *)param_1 + 0x28),auStack_1a4);
    uVar20 = uStack_d8;
    uVar6 = uStack_d8 == 0;
    bVar22 = !(bool)uVar6;
    if (uStack_d8 != 0) {
      uStack_d8 = 0;
      auStack_130._16_4_ = (undefined4)uVar20;
      dStack_11c = (dword)(uVar20 >> 0x20);
      FUN_1083d2a10(&param_1[2].ncmds,auStack_130 + 0x10);
      if (CONCAT44(dStack_11c,auStack_130._16_4_) != 0) {
        func_0x0001083d314c();
      }
    }
    FUN_1083d2b08(&uStack_d8);
    goto LAB_1083cd1b4;
  }
  uVar6 = iVar19 == 0x2a;
  if ((bool)uVar6) {
    pmVar23 = *(mach_header **)(*(long *)(*(long *)param_1 + 0x28) + 0x20);
    func_0x0001083d33dc();
    func_0x0001083d36fc();
    func_0x0001083d3548();
    if (((ulong)pmVar23 & 1) != 0) goto LAB_1083cc930;
    auStack_130._0_8_ = (mach_header *)0xffffffff0000005d;
    auStack_130._8_4_ = 0xffffffff;
    pmVar9 = (mach_header *)auStack_130;
    func_0x0001083d34b8();
    if ((int)pmVar23 != 0) {
      func_0x0001083d337c();
      if ((int)pmVar23 == 0x2e) {
        func_0x0001083d35e0();
        uVar3 = auStack_130._8_4_;
        pmVar9 = (mach_header *)auStack_130._0_8_;
        auStack_168._0_8_ = (mach_header *)0x0;
        dVar8 = auStack_130._8_4_;
        if (0xfe < (int)auStack_130._8_4_) {
          dVar8 = 0xff;
        }
        uVar16 = SUB84(auStack_130._0_8_,4) & 0xffffff | dVar8 << 0x18;
        puVar24 = (undefined8 *)((ulong)&uStack_d8 | 4);
        uVar6 = (mach_header *)auStack_130._0_8_ == (mach_header *)0xffffffffffffffff;
        auStack_168._8_8_ = 0x100000000;
        if ((mach_header *)0x7fffffffffffffff < (ulong)auStack_130._0_8_) {
          uVar16 = 0xffffff;
        }
        while( true ) {
          iVar19 = 0x2f;
          pmVar23 = param_1;
          func_0x0001083d333c();
          if (((ulong)pmVar23 & 1) != 0) break;
          func_0x0001083d337c();
          if (0xfe < iVar19) {
            iVar19 = 0xff;
          }
          uVar6 = ((ulong)pmVar23 & 0x8000000000000000) == 0;
          uVar1 = 0xffffff;
          if ((bool)uVar6) {
            uVar1 = (uint)((ulong)pmVar23 >> 0x20) & 0xffffff | iVar19 << 0x18;
          }
          func_0x0001083d3510();
          func_0x0001083d3530();
          uVar4 = uStack_e8;
          pmVar11 = pmVar23;
          if (pmVar23 == (mach_header *)0x0) goto LAB_1083cd440;
          do {
            auStack_140._0_8_ = (mach_header *)0xffffffff0000005d;
            auStack_140._8_4_ = 0xffffffff;
            puVar10 = auStack_140;
            func_0x0001083d34b8();
            if (((ulong)pmVar11 & 1) == 0) goto LAB_1083cd440;
            func_0x0001083d3988();
            func_0x0001083d333c();
            pmVar30 = pmVar23;
            if ((int)pmVar11 != 0) {
              func_0x0001083d337c();
              uVar6 = (int)pmVar11 == 0x31;
              if ((bool)uVar6) {
                bVar2 = *(byte *)((long)&param_1[2].magic + 1);
                uVar6 = bVar2 == 6;
                if (bVar2 < 7) {
                  func_0x0001083d353c();
                  func_0x0001083cead4();
                }
                else {
                  unaff_x27 = unaff_x27 & 0xffffffff00000000 | (ulong)puVar10 & 0xffffffff;
                  FUN_1083cbe04(param_1,pmVar11,unaff_x27,&UNK_10f491d06,0x25);
                  pmVar11 = pmVar23;
                }
              }
              else {
                func_0x0001083d36d4();
                if (((ulong)pmVar11 & 1) == 0) goto LAB_1083cd440;
                func_0x0001083d353c();
                func_0x0001083cea7c();
              }
              func_0x0001083d3784();
              func_0x0001083d3318();
              pmVar30 = pmVar11;
            }
            pmVar11 = param_1;
            func_0x0001083d347c(param_1,0x58);
            iVar19 = (int)pmVar11;
            func_0x0001083d3318();
            if (iVar19 == 0) goto LAB_1083cd440;
            pmVar11 = param_1;
            func_0x0001083cc2c8(param_1,uVar1);
            puVar29 = (undefined *)
                      ((ulong)puVar29 & 0xffffffff00000000 | auStack_140._8_8_ & 0xffffffff);
            puVar17 = *(ulong **)&param_1[2].cpusubtype;
            pmVar12 = (mach_header *)auStack_140._0_8_;
            func_0x0001083cbe30(puVar17,auStack_140._0_8_,puVar29);
            *(undefined4 *)(puVar24 + 6) = uStack_ec;
            puVar24[1] = CONCAT44(uStack_110,uStack_114);
            *puVar24 = CONCAT44(dStack_118,dStack_11c);
            puVar24[3] = uStack_104;
            puVar24[2] = uStack_10c;
            puVar24[5] = uStack_f4;
            puVar24[4] = uStack_fc;
            uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)pmVar11);
            uStack_a0 = uVar4;
            puStack_98 = puVar17;
            uStack_90 = pmVar12;
            pmStack_88 = pmVar30;
            func_0x0001083cf8b8(auStack_168,&uStack_d8);
            pmVar11 = param_1;
            func_0x0001083d32c0();
          } while (((ulong)pmVar11 & 1) != 0);
        }
        auStack_130._16_4_ = 0x5d;
        dStack_11c = 0xffffffff;
        dStack_118 = 0xffffffff;
        auStack_140._0_8_ = (mach_header *)0x0;
        func_0x0001083d38cc();
        if ((int)pmVar23 == 0) {
          pmVar23 = (mach_header *)0x0;
          uVar25 = 0;
LAB_1083cd458:
          func_0x0001083d347c();
          func_0x0001083d3240(param_1);
          uVar26 = *(undefined8 *)(*(long *)param_1 + 0x28);
          uVar15._0_4_ = param_1[2].cpusubtype;
          uVar15._4_4_ = param_1[2].filetype;
          func_0x0001083cbe30(uVar15,pmVar9,uVar3);
          FUN_1083d2d60(&uStack_d8,auStack_168);
          FUN_1083e75b0(&pmStack_150,uVar26,uVar16,auStack_1a4,uVar15,pmVar9,&uStack_d8,pmVar23,
                        uVar25,(int)auStack_140._0_8_);
          func_0x0001083d3690();
          pmVar9 = pmStack_150;
          uVar6 = pmStack_150 == (mach_header *)0x0;
          bVar22 = !(bool)uVar6;
          if (pmStack_150 != (mach_header *)0x0) {
            pmStack_150 = (mach_header *)0x0;
            pmStack_e0 = pmVar9;
            func_0x0001083d37f4();
            if (pmStack_e0 != (mach_header *)0x0) {
              func_0x0001083d314c();
            }
          }
          FUN_1083d3048(&pmStack_150);
        }
        else {
          uVar25 = CONCAT44(dStack_11c,auStack_130._16_4_);
          func_0x0001083d3668();
          pmVar11 = pmVar23;
          func_0x0001083d3988();
          func_0x0001083d333c();
          if ((int)pmVar11 == 0) goto LAB_1083cd458;
          func_0x0001083d36d4();
          if (((ulong)pmVar11 & 1) != 0) {
            func_0x0001083d3784();
            func_0x0001083d3318();
            goto LAB_1083cd458;
          }
LAB_1083cd440:
          bVar22 = false;
        }
        func_0x0001083d2d14(auStack_168);
        goto LAB_1083cd1b4;
      }
      func_0x0001083d33cc();
      auStack_140._0_8_ = pmVar23;
      auStack_140._8_8_ = pmVar9;
      func_0x000107c27958(auStack_168,auStack_140);
      func_0x0001004c3cd0(auStack_130 + 0x10,&UNK_10f491eee,auStack_168);
      func_0x0001083d34c0();
      func_0x00010048a6c8(&uStack_d8,auStack_130 + 0x10);
      uVar6 = cStack_c1 == '\0';
      func_0x0001083d3408();
      func_0x0001083d3910();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130 + 0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    }
LAB_1083cc8d0:
    bVar22 = false;
    goto LAB_1083cd1b4;
  }
LAB_1083cc930:
  pmVar23 = param_1;
  FUN_1083cdffc(param_1,auStack_1a4);
  bVar22 = false;
  if (pmVar23 == (mach_header *)0x0) goto LAB_1083cd1b4;
  auStack_140._0_8_ = (mach_header *)0xffffffff0000005d;
  auStack_140._8_4_ = 0xffffffff;
  pmVar11 = pmVar23;
  func_0x0001083d34b8();
  if ((int)pmVar11 == 0) goto LAB_1083cc8d0;
  pmVar30 = param_1;
  func_0x0001083d333c(param_1,0x2c);
  pmVar11 = (mach_header *)auStack_140._0_8_;
  puVar17 = (ulong *)((ulong)pmVar9 >> 0x20);
  uVar16 = (uint)((ulong)pmVar9 >> 0x20);
  if ((int)pmVar30 == 0) {
    if ((long)pmVar9 < 0) {
      uVar16 = 0xffffff;
    }
    else {
      uVar6 = param_2 == 0xff;
      if (0xfe < param_2) {
        param_2 = 0xff;
      }
      uVar16 = uVar16 & 0xffffff | param_2 << 0x18;
    }
    FUN_1083ce384(param_1,uVar16,auStack_1a4,pmVar23,auStack_140._0_8_,
                  auStack_140._8_8_ & 0xffffffff);
    goto LAB_1083cd1b0;
  }
  if ((long)pmVar9 < 0) {
    puStack_1b0 = (ulong *)0xffffff;
  }
  else {
    if (0xfe < param_2) {
      param_2 = 0xff;
    }
    puVar17 = (ulong *)(ulong)(uVar16 & 0xffffff | param_2 << 0x18);
    puStack_1b0 = puVar17;
  }
  uVar20 = auStack_140._8_8_ & 0xffffffff;
  func_0x0001083d337c();
  puStack_98 = &uStack_d8;
  uStack_90 = (mach_header *)0x1000000000;
  uVar6 = 1;
  if ((int)pmVar30 == 0x2d) {
LAB_1083ccf5c:
    bVar22 = true;
  }
  else {
    uVar6 = (int)pmVar30 == 0x2a;
    if ((bool)uVar6) {
      func_0x0001083d33dc();
      func_0x000107c27944();
      if ((int)pmVar30 != 0) {
        func_0x0001083d35e0();
        goto LAB_1083ccf5c;
      }
    }
    bVar22 = true;
    do {
      iVar19 = (int)puVar17;
      func_0x0001083d337c();
      if (0xfe < iVar19) {
        iVar19 = 0xff;
      }
      uVar6 = ((ulong)pmVar30 & 0x8000000000000000) == 0;
      uVar16 = 0xffffff;
      if ((bool)uVar6) {
        uVar16 = (uint)((ulong)pmVar30 >> 0x20) & 0xffffff | iVar19 << 0x18;
      }
      func_0x0001083d3510();
      func_0x0001083d3530();
      auStack_130._0_8_ = pmVar30;
      if (pmVar30 == (mach_header *)0x0) goto LAB_1083cd2c0;
      auStack_168._0_8_ = (mach_header *)0xffffffff0000005d;
      auStack_168._8_4_ = 0xffffffff;
      func_0x0001083d38cc();
      uVar25 = auStack_168._0_8_;
      if ((int)pmVar30 == 0) {
        func_0x0001083d38e0();
      }
      else {
        dVar8 = auStack_168._8_4_;
        uVar26._0_4_ = param_1[2].cpusubtype;
        uVar26._4_4_ = param_1[2].filetype;
        func_0x0001083cbe30(uVar26,auStack_168._0_8_,auStack_168._8_8_ & 0xffffffff);
        if ((long)uVar25 < 0) {
          pmVar30 = (mach_header *)0xffffff;
        }
        else {
          uVar6 = dVar8 == 0xff;
          if (0xfe < (int)dVar8) {
            dVar8 = 0xff;
          }
          pmVar30 = (mach_header *)(ulong)(SUB84(uVar25,4) & 0xffffff | dVar8 << 0x18);
        }
      }
      pmVar9 = param_1;
      FUN_1083ceb24(param_1,uVar16,auStack_130);
      if ((int)pmVar9 == 0) goto LAB_1083cd2c0;
      uVar25 = *(undefined8 *)(*(long *)param_1 + 0x28);
      func_0x0001083d38e0();
      puVar18 = (ulong *)((ulong)pmVar9 & 0xffffffff);
      FUN_1083f44d0(&pmStack_150,uVar25,puVar18,auStack_130._16_4_,&dStack_11c,uStack_e8,
                    auStack_130._0_8_,(ulong)pmVar30 & 0xffffffff);
      pmVar9 = pmStack_150;
      bVar7 = pmStack_150 != (mach_header *)0x0;
      uVar6 = (uint)uStack_90 == uStack_90._4_4_ >> 1;
      if ((int)(uint)uStack_90 < (int)(uStack_90._4_4_ >> 1)) {
        puStack_98[(int)(uint)uStack_90] = (ulong)pmStack_150;
        puVar17 = puVar18;
        uVar16 = (uint)uStack_90;
      }
      else {
        if ((uint)uStack_90 == 0x7fffffff) goto LAB_1083cd58c;
        puVar13 = (ulong *)(ulong)((uint)uStack_90 + 1);
        FUN_1083d2b2c(0x3ff8000000000000);
        puVar13[(int)(uint)uStack_90] = (ulong)pmVar9;
        puVar17 = puVar18;
        if ((uint)uStack_90 != 0) {
          puVar17 = puStack_98;
          _memcpy(puVar13,puStack_98,(long)(int)(uint)uStack_90 << 3);
        }
        if (((ulong)uStack_90 & 0x100000000) != 0) {
          _free(puStack_98);
        }
        uVar21 = (ulong)puVar18 >> 3;
        uVar6 = uVar21 == 0x7fffffff;
        if (0x7ffffffe < uVar21) {
          uVar21 = 0x7fffffff;
        }
        puStack_98 = puVar13;
        func_0x0001083d36a4(uVar21);
        uStack_90 = (mach_header *)CONCAT44(extraout_w8,(uint)uStack_90);
        uVar16 = (uint)uStack_90;
      }
      uStack_90 = (mach_header *)CONCAT44(uStack_90._4_4_,uVar16 + 1);
      pmVar30 = param_1;
      func_0x0001083d32c0();
      bVar22 = (bool)(bVar22 & bVar7);
    } while (((ulong)pmVar30 & 1) != 0);
  }
  pmVar9 = param_1;
  func_0x0001083d32e0();
  if ((int)pmVar9 == 0) {
LAB_1083cd2c0:
    bVar22 = false;
  }
  else {
    if (bVar22) {
      lVar27 = *(long *)(*(long *)param_1 + 0x28);
      pmVar9 = param_1;
      func_0x0001083cc2c8(param_1,puStack_1b0);
      uVar25._0_4_ = param_1[2].cpusubtype;
      uVar25._4_4_ = param_1[2].filetype;
      func_0x0001083cbe30(uVar25,pmVar11,uVar20);
      auStack_130._16_4_ = 0;
      dStack_11c = 0;
      dStack_118 = 0;
      dVar8 = (uint)uStack_90;
      if (((ulong)uStack_90 & 0x100000000) == 0) {
        uVar20 = (ulong)uStack_90 & 0xffffffff;
        pmVar30 = pmVar11;
        FUN_1083d2b2c(0x3ff0000000000000);
        func_0x0001083d3438((ulong)pmVar30 >> 3);
        auStack_130._16_4_ = (undefined4)uVar20;
        dStack_11c = (dword)(uVar20 >> 0x20);
        func_0x0001083d36a4();
        dStack_118 = dVar8;
        uStack_114 = extraout_w8_00;
        dVar8 = 0;
        if ((uint)uStack_90 != 0) {
          _memcpy();
          dVar8 = (dword)uStack_90;
        }
      }
      else {
        auStack_130._16_4_ = SUB84(puStack_98,0);
        dStack_11c = (dword)((ulong)puStack_98 >> 0x20);
        uStack_114 = (uint)uStack_90 << 1 | 1;
        puStack_98 = (ulong *)0x0;
        uStack_90 = &MACH_HEADER;
      }
      dStack_118 = dVar8;
      uStack_90 = (mach_header *)((ulong)uStack_90 & 0xffffffff00000000);
      FUN_1083e34f8(lVar27,(ulong)pmVar9 & 0xffffffff,auStack_1a4,uVar25,pmVar11,auStack_130 + 0x10,
                    puStack_1b0,pmVar23);
      func_0x0001083d22c4(auStack_130 + 0x10);
    }
    else {
      lVar27 = 0;
    }
    pmVar9 = param_1;
    func_0x0001083d333c(param_1,0x58);
    if ((int)pmVar9 == 0) {
      uVar25 = *(undefined8 *)(*(long *)param_1 + 0x28);
      func_0x0001083d337c();
      auStack_168._0_8_ = (mach_header *)0x0;
      FUN_1083d231c(auStack_130,param_1,auStack_168,1);
      if (lVar27 != 0) {
        puVar24 = *(undefined8 **)(lVar27 + 0x38);
        for (lVar28 = (long)*(int *)(lVar27 + 0x40) << 3; lVar28 != 0; lVar28 = lVar28 + -8) {
          FUN_1083eddb8(auStack_168._0_8_,*(undefined8 *)(*(long *)param_1 + 0x28),*puVar24);
          puVar24 = puVar24 + 1;
        }
      }
      ppmVar14 = &pmStack_150;
      FUN_1083ce664(ppmVar14,param_1,0,auStack_168);
      pmVar9 = pmStack_150;
      dVar8 = (dword)ppmVar14;
      if ((mach_header *)auStack_130._0_8_ != (mach_header *)0x0) {
        func_0x0001083d31a8();
      }
      if (lVar27 == 0) {
        if (pmVar9 != (mach_header *)0x0) {
          func_0x0001083d33ac();
        }
LAB_1083cd3d8:
        bVar22 = false;
      }
      else {
        if (pmVar9 == (mach_header *)0x0) goto LAB_1083cd3d8;
        func_0x0001083d3620();
        func_0x0001083cc300();
        pmVar9->cpusubtype = dVar8;
        pmStack_150 = pmVar9;
        FUN_1083e4fb0(auStack_130,uVar25,dVar8,lVar27,&pmStack_150);
        pmVar9 = pmStack_150;
        pmStack_150 = (mach_header *)0x0;
        if (pmVar9 != (mach_header *)0x0) {
          func_0x0001083d314c();
        }
        uVar25 = auStack_130._0_8_;
        uVar6 = (mach_header *)auStack_130._0_8_ == (mach_header *)0x0;
        bVar22 = !(bool)uVar6;
        if ((mach_header *)auStack_130._0_8_ != (mach_header *)0x0) {
          *(undefined8 *)(lVar27 + 0x28) = auStack_130._0_8_;
          *(undefined1 *)(lVar27 + 0x54) = 0xff;
          auStack_130._0_8_ = (mach_header *)0x0;
          pmStack_e0 = (mach_header *)uVar25;
          func_0x0001083d37f4();
          if (pmStack_e0 != (mach_header *)0x0) {
            func_0x0001083d314c();
          }
        }
        func_0x0001083d2bd0(auStack_130);
      }
      func_0x0001083d3688();
    }
    else {
      if (lVar27 == 0) goto LAB_1083cd2c0;
      func_0x0001083d3598();
      pmVar9->cpusubtype = *(dword *)(lVar27 + 8);
      pmVar9->filetype = 2;
      *(undefined ***)pmVar9 = &PTR_FUN_110a44668;
      pmVar9->ncmds = (int)lVar27;
      pmVar9->sizeofcmds = (int)((ulong)lVar27 >> 0x20);
      auStack_130._0_8_ = (mach_header *)0x0;
      auStack_168._0_8_ = pmVar9;
      FUN_1083d2a10(&param_1[2].ncmds,auStack_168);
      if ((mach_header *)auStack_168._0_8_ != (mach_header *)0x0) {
        func_0x0001083d314c();
      }
      FUN_1083d2bac(auStack_130);
      bVar22 = true;
    }
  }
  FUN_1083d38c0();
LAB_1083cd1b4:
  func_0x0001083d3278(uStack_80);
  if ((bool)uVar6) {
    return bVar22;
  }
  ___stack_chk_fail();
LAB_1083cd58c:
  func_0x00010bdb1a68();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083cd594);
  (*pcVar5)();
}



/* Entry: 1083cd77c; end: 1083cd86b;  */

ulong FUN_1083cd77c(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined1 auStack_90 [48];
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x0001083d34ac();
  uStack_50 = 0xffffffff0000005d;
  uStack_48 = 0xffffffff;
  FUN_1083cbfb4();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(unaff_x19 + 0x48);
    uVar2 = uStack_50;
    func_0x0001083d35a0();
    uStack_60 = uVar1;
    uStack_58 = uVar2;
    FUN_1083d3f28();
    if ((uVar1 & 1) == 0) {
      func_0x000107c27958(auStack_90,&uStack_60);
      func_0x0001083d380c(&UNK_10f492086);
      func_0x0001083d353c();
      func_0x0001083d3528();
      func_0x0001083d3374();
      func_0x0001083d3494();
    }
  }
  return uVar1;
}



/* Entry: 1083cd86c; end: 1083cdffb;  */

void FUN_1083cd86c(uint *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  int iVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong unaff_x24;
  ulong unaff_x28;
  ulong uStack_328;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 auStack_2d0 [2];
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char *apcStack_298 [2];
  undefined4 auStack_288 [2];
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  uint uVar12;
  
  puVar9 = param_1;
  func_0x0001083d335c();
  uVar12 = (uint)((ulong)puVar9 >> 0x20);
  uStack_70 = extraout_x8;
  func_0x0001083d3934();
  if ((bRam000000011372b318 & 1) == 0) {
    lVar17 = 0x11372b318;
    lVar19 = lVar17;
    ___cxa_guard_acquire();
    if ((int)lVar19 != 0) {
      apcStack_298[0] = "location";
      apcStack_298[1] = (char *)0x8;
      auStack_288[0] = 0x10;
      puStack_280 = &DAT_10f63975c;
      uStack_278 = 6;
      uStack_270 = 0x20;
      puStack_268 = &DAT_10f491dce;
      uStack_260 = 7;
      uStack_258 = 0x40;
      puStack_250 = &DAT_10f636fd0;
      uStack_248 = 7;
      uStack_240 = 0x80;
      puStack_238 = &DAT_10f638aa0;
      uStack_230 = 7;
      uStack_228 = 0x100;
      puStack_220 = &DAT_10f2c4679;
      uStack_218 = 5;
      uStack_210 = 0x200;
      puStack_208 = &DAT_10f3dd81d;
      uStack_200 = 3;
      uStack_1f8 = 0x400;
      puStack_1f0 = &DAT_10f491dd6;
      uStack_1e8 = 7;
      uStack_1e0 = 0x800;
      puStack_1d8 = &DAT_10f491dde;
      uStack_1d0 = 0x16;
      uStack_1c8 = 0x1000;
      puStack_1c0 = &DAT_10f491df5;
      uStack_1b8 = 0x11;
      uStack_1b0 = 1;
      puStack_1a8 = &DAT_10f486b16;
      uStack_1a0 = 0x1b;
      uStack_198 = 4;
      puStack_190 = &DAT_10f491e07;
      uStack_188 = 0xd;
      uStack_180 = 2;
      puStack_178 = &DAT_10f68f0f0;
      uStack_170 = 5;
      uStack_168 = 8;
      puStack_160 = &DAT_10f491e15;
      uStack_158 = 6;
      uStack_150 = 0x2000;
      puStack_148 = &DAT_10f2c5356;
      uStack_140 = 5;
      uStack_138 = 0x4000;
      puStack_130 = &DAT_10f491e1c;
      uStack_128 = 6;
      uStack_120 = 0x8000;
      puStack_118 = &DAT_10f491e23;
      uStack_110 = 8;
      uStack_108 = 0x10000;
      puStack_100 = &DAT_10f491e2c;
      uStack_f8 = 5;
      uStack_f0 = 0x20000;
      puStack_e8 = &DAT_10f491e32;
      uStack_e0 = 7;
      uStack_d8 = 0x40000;
      puStack_d0 = &DAT_10f491e3a;
      uStack_c8 = 4;
      uStack_c0 = 0x80000;
      puStack_b8 = &DAT_10f491e3f;
      uStack_b0 = 0xc;
      uStack_a8 = 0x100000;
      puStack_a0 = &DAT_10f491e4c;
      uStack_98 = 0xc;
      uStack_90 = 0x200000;
      puStack_88 = &DAT_10f491e59;
      uStack_80 = 0xc;
      uStack_78 = 0x400000;
      uStack_2d8 = 0;
      auStack_2d0[0] = 0;
      FUN_1083d2e48(&uStack_2d8,0x20);
      lVar19 = 0;
      do {
        if (lVar19 == 0x228) goto LAB_1083cdf5c;
        uStack_2a8 = *(undefined8 *)((long)auStack_288 + lVar19 + -8);
        uStack_2b0 = *(undefined8 *)((long)apcStack_298 + lVar19);
        uStack_2a0 = *(undefined8 *)((long)auStack_288 + lVar19);
        if (uStack_2d8._4_4_ * 3 <= (int)uStack_2d8 * 4) {
          iVar16 = uStack_2d8._4_4_ << 1;
          if (uStack_2d8._4_4_ < 1) {
            iVar16 = 4;
          }
          FUN_1083d2e48(&uStack_2d8,iVar16);
        }
        FUN_1083d2f34(&uStack_2d8,&uStack_2b0);
        lVar19 = lVar19 + 0x18;
      } while( true );
    }
  }
  do {
    uVar13 = 0x20;
    uVar10 = param_2;
    func_0x0001083d333c();
    if (((int)uVar10 == 0) || (func_0x0001083d3190(), (int)uVar10 == 0)) {
      uStack_2f0 = 0xffffffff;
      uStack_2ec = 0xffffffff;
      uStack_2e0 = 0xffffffff;
      uStack_2dc = 0;
      uStack_2e8 = 0xffffffff;
      uStack_2e4 = 0xffffffff;
      uStack_2f8 = 0xffffffff;
      uStack_2f4 = 0xffffffff;
      uStack_300 = 0xffffffff;
      uStack_2fc = 0xffffffff;
      uStack_308 = 0xffffffff;
      uStack_304 = 0xffffffff;
      uStack_30c = 0xffffffff;
    }
    else {
      uStack_2e0 = 0xffffffff;
      uStack_2dc = 0;
      uStack_2e8 = 0xffffffff;
      uStack_2e4 = 0xffffffff;
      uStack_2f8 = 0xffffffff;
      uStack_2f4 = 0xffffffff;
      uStack_2f0 = 0xffffffff;
      uStack_2ec = 0xffffffff;
      uStack_300 = 0xffffffff;
      uStack_2fc = 0xffffffff;
      uStack_308 = 0xffffffff;
      uStack_304 = 0xffffffff;
      uStack_30c = 0xffffffff;
      do {
        func_0x0001083d3460();
        uVar20 = uVar10;
        func_0x0001083d35e8();
        uStack_2c0 = uVar20;
        uStack_2b8 = uVar13;
        FUN_1083d3018();
        iVar16 = 0;
        uVar18 = iRam000000011372b324 - 1U & (uint)uVar20;
        iVar15 = iRam000000011372b324;
        while( true ) {
          cVar5 = SBORROW4(iVar16,iVar15);
          cVar6 = iVar16 - iVar15 < 0;
          if (iVar15 <= iVar16) break;
          puVar9 = (uint *)(lRam000000011372b328 + (long)(int)uVar18 * 0x20);
          if (*puVar9 == 0) break;
          if ((uint)uVar20 == *puVar9) {
            uVar13 = uStack_2c0;
            FUN_10821b208(uStack_2c0,uStack_2b8,*(undefined8 *)(puVar9 + 2),
                          *(undefined8 *)(puVar9 + 4));
            uVar8 = (uint)uVar13;
            iVar15 = iRam000000011372b324;
            if ((uVar13 & 1) != 0) {
              uVar18 = puVar9[6];
              cVar6 = (int)(uVar18 & uStack_2dc) < 0;
              cVar5 = '\0';
              if ((uVar18 & uStack_2dc) != 0) {
                func_0x0001083d37dc();
                func_0x0001004c3cd0(&uStack_2b0,&UNK_10f491e8c,&uStack_2d8);
                func_0x0001083d35a8();
                func_0x0001083d3448();
                uVar2 = extraout_x11_00;
                uVar4 = extraout_x10_00;
                if (cVar6 == cVar5) {
                  uVar2 = extraout_x8_01;
                  uVar4 = extraout_x9_00;
                }
                uStack_328 = unaff_x24 | uStack_328 & 0xffffffff00000000;
                uVar13 = param_2;
                FUN_1083cbe04(param_2,uVar10,uStack_328,uVar4,uVar2);
                uVar8 = (uint)uVar13;
                func_0x0001083d36b0();
                func_0x0001083d36b8();
                func_0x0001083d34f0();
                uVar18 = puVar9[6];
              }
              uStack_2dc = uVar18 | uStack_2dc;
              if (uVar18 == 0x400000) {
                func_0x0001083d3420();
                uStack_30c = uVar8;
              }
              else if (uVar18 == 0x20) {
                func_0x0001083d3420();
                uStack_2e0 = uVar8;
              }
              else if (uVar18 == 0x40) {
                func_0x0001083d3420();
                uStack_2e4 = uVar8;
              }
              else if (uVar18 == 0x80) {
                func_0x0001083d3420();
                uStack_2ec = uVar8;
              }
              else if (uVar18 == 0x100) {
                func_0x0001083d3420();
                uStack_2f8 = uVar8;
              }
              else if (uVar18 == 0x200) {
                func_0x0001083d3420();
                uStack_2e8 = uVar8;
              }
              else if (uVar18 == 0x400) {
                func_0x0001083d3420();
                uStack_2f4 = uVar8;
              }
              else if (uVar18 == 0x800) {
                func_0x0001083d3420();
                uStack_2fc = uVar8;
              }
              else if (uVar18 == 0x1000) {
                func_0x0001083d3420();
                uStack_300 = uVar8;
              }
              else if (uVar18 == 0x100000) {
                func_0x0001083d3420();
                uStack_304 = uVar8;
              }
              else if (uVar18 == 0x200000) {
                func_0x0001083d3420();
                uStack_308 = uVar8;
              }
              else if (uVar18 == 0x10) {
                func_0x0001083d3420();
                uStack_2f0 = uVar8;
              }
              goto LAB_1083cd9b8;
            }
          }
          iVar1 = 0;
          if ((int)uVar18 < 1) {
            iVar1 = iVar15;
          }
          uVar18 = (uVar18 + iVar1) - 1;
          iVar16 = iVar16 + 1;
        }
        func_0x0001083d37dc();
        func_0x0001083d35bc();
        func_0x00010048a6c8(apcStack_298,&uStack_2b0,&UNK_10f491e6a);
        func_0x0001083d3448();
        uVar2 = extraout_x11;
        uVar4 = extraout_x10;
        if (cVar6 == cVar5) {
          uVar2 = extraout_x8_00;
          uVar4 = extraout_x9;
        }
        unaff_x28 = unaff_x24 | unaff_x28 & 0xffffffff00000000;
        FUN_1083cbe04(param_2,uVar10,unaff_x28,uVar4,uVar2);
        func_0x0001083d36b0();
        func_0x0001083d36b8();
        func_0x0001083d34f0();
LAB_1083cd9b8:
        uVar13 = 0x2d;
        uVar10 = param_2;
        func_0x0001083d333c();
        if ((uVar10 & 1) != 0) break;
        uVar13 = 0x33;
        uVar10 = param_2;
        func_0x0001083d3318(param_2,0x33,&DAT_10f491eb8);
      } while ((uVar10 & 1) != 0);
    }
    uVar10 = param_2;
    FUN_1083cbc70();
    uVar20 = uVar10 >> 0x20;
    if (2 < (int)uVar10 - 0x59U) {
      *(ulong *)(param_2 + 0x84) = uVar10;
      *(int *)(param_2 + 0x8c) = (int)uVar13;
    }
    uVar18 = 0;
    unaff_x28 = 0;
    lVar17 = 0xff;
    while( true ) {
      uVar11 = uVar10;
      func_0x0001083d3334();
      uVar8 = (int)uVar11 - 0x12;
      if ((0x15 < uVar8) || ((0x3f9fffU >> (ulong)(uVar8 & 0x1f) & 1) == 0)) break;
      uVar3 = *(uint *)(&UNK_10df25088 + (ulong)uVar8 * 4);
      func_0x0001083d3460();
      uVar8 = uVar3 & uVar18;
      uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar8);
      uVar10 = uVar11;
      uVar14 = uVar13;
      if (uVar8 != 0) {
        FUN_1083e8b44(&uStack_2d8,&uStack_2c0);
        func_0x0001083d35bc();
        func_0x0001083d35a8();
        func_0x0001083d3448();
        uVar10 = param_2;
        uVar14 = uVar11;
        func_0x0001083d3528();
        func_0x0001083d36b0();
        func_0x0001083d36b8();
        func_0x0001083d34f0();
      }
      uVar18 = uVar3 | uVar18;
      iVar16 = (int)uVar13;
      if (0xfe < iVar16) {
        iVar16 = 0xff;
      }
      uVar8 = 0xffffff;
      if ((uVar11 & 0x8000000000000000) == 0) {
        uVar8 = (uint)(uVar11 >> 0x20) & 0xffffff | iVar16 << 0x18;
      }
      uVar20 = (ulong)(((int)(uVar8 << 8) >> 8) + (uVar8 >> 0x18));
      uVar13 = uVar14;
      unaff_x24 = uVar11;
    }
    iVar16 = (int)uVar20 - uVar12;
    bVar7 = iVar16 == 0xff;
    if (0xfe < iVar16) {
      iVar16 = 0xff;
    }
    *param_1 = uVar12 & 0xffffff | iVar16 << 0x18;
    param_1[1] = uStack_2dc;
    param_1[2] = uStack_2f0;
    param_1[3] = uStack_2e0;
    param_1[4] = uStack_2e4;
    param_1[5] = uStack_2ec;
    param_1[6] = uStack_2f8;
    param_1[7] = uStack_2e8;
    param_1[8] = uStack_2f4;
    param_1[9] = uStack_2fc;
    param_1[10] = uStack_300;
    param_1[0xb] = uStack_304;
    param_1[0xc] = uStack_308;
    param_1[0xd] = uStack_30c;
    param_1[0xe] = uVar18;
    func_0x0001083d3278(uStack_70);
    if (bVar7) {
      return;
    }
    ___stack_chk_fail();
LAB_1083cdf5c:
    uVar2 = auStack_2d0[0];
    *(undefined8 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 8) = uStack_2d8;
    auStack_2d0[0] = 0;
    FUN_1083d2f1c((undefined8 *)(lVar17 + 0x10),uVar2);
    uStack_2d8 = 0;
    func_0x0001083d2568(auStack_2d0);
    ___cxa_guard_release(lVar17);
  } while( true );
}



/* Entry: 1083cdffc; end: 1083ce383;  */

uint * FUN_1083cdffc(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  char in_NG;
  char in_OV;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  long *extraout_x8_01;
  uint extraout_w9;
  uint extraout_w10;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *unaff_x25;
  ulong uStack_c8;
  uint uStack_c0;
  undefined8 uStack_88;
  uint uStack_80;
  uint *puStack_70;
  uint *puStack_68;
  
  uStack_c8 = 0xffffffff0000005d;
  uStack_c0 = 0xffffffff;
  puVar6 = param_1;
  puVar5 = param_2;
  func_0x0001083d37cc(param_1,param_2,&UNK_10f491ee7,&uStack_c8);
  if ((int)puVar6 == 0) {
    return (uint *)0x0;
  }
  func_0x0001083d37c0();
  uVar1 = uStack_c0;
  uVar2 = uStack_c8;
  puVar6 = *(uint **)(extraout_x8 + 0x20);
  func_0x0001083d3204();
  func_0x0001083d36fc();
  func_0x0001083d3548();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x0001083d3204();
    puStack_70 = puVar6;
    puStack_68 = puVar5;
    func_0x0001083d33ec();
    func_0x0001083d328c(&UNK_10f491eee);
    func_0x0001083d34c0();
    func_0x0001083d3298();
    func_0x0001083d322c();
    func_0x0001083d33f8();
    goto LAB_1083ce204;
  }
  func_0x0001083d3968();
  if (in_NG == in_OV) {
    uVar1 = extraout_w10;
  }
  uVar8 = extraout_x8_00;
  if ((uVar2 & 0x8000000000000000) == 0) {
    uVar8 = (ulong)(extraout_w9 & 0xffffff | uVar1 << 0x18);
  }
  func_0x0001083d3204();
  puVar7 = *(uint **)(*(long *)param_1 + 0x28);
  puVar4 = *(uint **)(puVar7 + 8);
  puStack_70 = puVar6;
  puStack_68 = puVar5;
  FUN_1083c9bd0(puVar4,puVar6,puVar5);
  if (puVar4 == (uint *)0x0) {
    func_0x0001083d33ec();
    func_0x0001083d328c(&UNK_10f491ebc);
    func_0x0001083d34c0();
    func_0x0001083d3298();
    func_0x0001083d322c();
    func_0x0001083d38d4();
LAB_1083ce1a8:
    param_2 = (uint *)&uStack_88;
    func_0x0001083d34a4();
    func_0x0001083d3430();
    func_0x0001083d3374();
LAB_1083ce1b4:
    puVar4 = *(uint **)(*(long *)puVar7 + 0xe8);
  }
  else {
    unaff_x25 = puVar4;
    if (puVar4[3] != 10) {
      func_0x0001083d33ec();
      func_0x0001083d328c(&UNK_10f491ece);
      puVar6 = (uint *)&UNK_10f491ed7;
      func_0x0001083d3298();
      func_0x0001083d322c();
      func_0x0001083d38d4();
      goto LAB_1083ce1a8;
    }
    if ((**(char **)(puVar7 + 2) == '\0') &&
       (puVar5 = puVar7, puVar6 = puVar4, FUN_1083f2dd8(puVar7,puVar4,uVar8),
       ((ulong)puVar5 & 1) == 0)) goto LAB_1083ce1b4;
    puVar6 = (uint *)(ulong)*param_2;
    if (*param_2 >> 0x18 == 0) {
      puVar6 = param_1;
      func_0x0001083cc2c8(param_1);
    }
    FUN_1083f08fc(puVar4,puVar7,param_2 + 0xe,(ulong)puVar6 & 0xffffffff);
    puVar6 = puVar7;
  }
  puVar5 = puVar4;
  (**(code **)(*(long *)puVar4 + 0xf8))();
  if ((int)puVar5 == 0) {
    uStack_88 = 0xffffffff0000005d;
    uStack_80 = 0xffffffff;
    while( true ) {
      while( true ) {
        iVar3 = (int)puVar5;
        func_0x0001083d3988();
        FUN_1083cbf4c();
        if (iVar3 == 0) {
          return puVar4;
        }
        func_0x0001083d3784();
        func_0x0001083d333c();
        puVar5 = param_1;
        if (iVar3 == 0) break;
        if (*(byte *)((long)param_1 + 0x41) < 7) {
          uVar8 = uVar8 & 0xffffffff00000000 | (ulong)uStack_c0;
          func_0x0001083cc300(param_1,uStack_c8,uVar8);
          func_0x0001083d3620();
          func_0x0001083cead4();
          puVar4 = puVar5;
        }
        else {
          param_2 = (uint *)((ulong)param_2 & 0xffffffff00000000 | (ulong)uStack_80);
          puVar6 = param_1;
          func_0x0001083cc300(param_1,uStack_88,param_2);
          func_0x0001083d384c(param_1,(ulong)puVar6 & 0xffffffff,&UNK_10f491d06);
        }
      }
      func_0x0001083d36d4();
      if (iVar3 == 0) break;
      func_0x0001083d3784();
      func_0x0001083d3318();
      unaff_x25 = (uint *)((ulong)unaff_x25 & 0xffffffff00000000 | (ulong)uStack_c0);
      func_0x0001083cc300(param_1,uStack_c8,unaff_x25);
      func_0x0001083d3620();
      func_0x0001083cea7c();
      puVar4 = puVar5;
    }
    return (uint *)0x0;
  }
  func_0x0001083d3204();
  puStack_70 = puVar5;
  puStack_68 = puVar6;
  func_0x0001083d33ec();
  func_0x0001083d328c(&UNK_10f491efe);
  func_0x0001083d34c0();
  func_0x0001083d3298();
  func_0x0001083d322c();
  func_0x0001083d33f8();
LAB_1083ce204:
  func_0x0001083d34a4();
  func_0x0001083d3430();
  func_0x0001083d3374();
  func_0x0001083d37c0();
  return *(uint **)(*extraout_x8_01 + 0xe0);
}



/* Entry: 1083ce384; end: 1083ce663;  */

void FUN_1083ce384(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,int param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  uint uStack_98;
  long *plStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  undefined8 uStack_78;
  
  plStack_80 = (long *)0x0;
  plVar3 = param_1;
  uStack_78 = param_4;
  FUN_1083ceb24(param_1,param_2,&uStack_78);
  if ((int)plVar3 != 0) {
    plVar3 = param_1;
    FUN_1083cec2c(param_1,&plStack_80);
    if ((int)plVar3 == 0) {
      if (plStack_80 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083ce5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_80 + 8))();
        return;
      }
    }
    else {
      uVar7 = *(undefined8 *)(*param_1 + 0x28);
      func_0x0001083d3620();
      func_0x0001083cc2c8();
      uVar2 = uStack_78;
      iVar5 = param_6;
      if (0xfe < param_6) {
        iVar5 = 0xff;
      }
      uVar8 = 0xffffff;
      if ((param_5 & 0x8000000000000000) == 0) {
        uVar8 = (uint)(param_5 >> 0x20) & 0xffffff | iVar5 << 0x18;
      }
      FUN_1083d38a8(param_1[9],param_5,param_6);
      plStack_90 = plStack_80;
      plStack_80 = (long *)0x0;
      FUN_1083f3a30(auStack_88,uVar7,(ulong)plVar3 & 0xffffffff,param_3,uVar2,uVar8);
      FUN_1083cef94(param_1,auStack_88);
      func_0x0001083d388c();
      if (plStack_90 != (long *)0x0) {
        func_0x0001083d314c();
      }
      while (plVar3 = param_1, func_0x0001083d32c0(), (int)plVar3 != 0) {
        lStack_a0 = -0xffffffa3;
        uStack_98 = 0xffffffff;
        uStack_78 = param_4;
        func_0x0001083d34b8();
        iVar5 = (int)plVar3;
        if (((ulong)plVar3 & 1) == 0) {
          return;
        }
        func_0x0001083d3620();
        FUN_1083ceb24();
        if (iVar5 == 0) {
          return;
        }
        lStack_a8 = 0;
        plVar3 = param_1;
        FUN_1083cec2c(param_1,&lStack_a8);
        uVar8 = uStack_98;
        lVar1 = lStack_a0;
        if ((int)plVar3 == 0) {
          if (lStack_a8 == 0) {
            return;
          }
          func_0x0001083d314c();
          return;
        }
        uVar7 = *(undefined8 *)(*param_1 + 0x28);
        uVar6 = (ulong)uStack_98;
        param_5 = param_5 & 0xffffffff00000000 | uVar6;
        plVar3 = param_1;
        func_0x0001083cc300(param_1,lStack_a0,param_5);
        uVar2 = uStack_78;
        if (lVar1 < 0) {
          uVar8 = 0xffffff;
        }
        else {
          if (0xfe < (int)uVar8) {
            uVar8 = 0xff;
          }
          uVar8 = (uint)((ulong)lVar1 >> 0x20) & 0xffffff | uVar8 << 0x18;
        }
        FUN_1083d38a8(param_1[9],lVar1,uVar6);
        FUN_1083f3a30(auStack_b0,uVar7,(ulong)plVar3 & 0xffffffff,param_3,uVar2,uVar8);
        FUN_1083cef94(param_1,auStack_b0);
        puVar4 = auStack_b0;
        func_0x0001083d2c8c();
        func_0x0001083d34e4();
        if (puVar4 != (undefined1 *)0x0) {
          func_0x0001083d314c();
        }
      }
      func_0x0001083d347c();
      func_0x0001083d3240(param_1);
    }
  }
  return;
}



/* Entry: 1083ce664; end: 1083ce8a3;  */

long ******* FUN_1083ce664(undefined8 param_1,long *******param_2,undefined8 param_3,long **param_4)

{
  long **pplVar1;
  long *****ppppplVar2;
  undefined1 in_ZR;
  char cVar3;
  char cVar4;
  int iVar5;
  long *******ppppppplVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  int iVar9;
  long *******ppppppplVar10;
  undefined *puVar12;
  undefined8 uVar13;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  uint extraout_w9;
  int extraout_w10;
  long *unaff_x19;
  long *******unaff_x20;
  long *****ppppplStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  long ******pppppplStack_f0;
  long ******pppppplStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined4 uStack_a0;
  long ******pppppplStack_98;
  undefined4 uStack_90;
  long *****appppplStack_88 [2];
  long *****appppplStack_78 [2];
  long ****apppplStack_68 [2];
  long *****ppppplStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *******ppppppplVar11;
  
  func_0x0001083d34ac();
  func_0x0001083d335c();
  uStack_90 = 0;
  plStack_a8 = (long *)0xffffffff0000005d;
  uStack_a0 = 0xffffffff;
  ppppppplVar10 = (long *******)0x2e;
  pppppplStack_98 = (long ******)param_2;
  uStack_48 = extraout_x8;
  FUN_1083cbfb4(param_2,0x2e,&DAT_10f491d90,&plStack_a8);
  if (((ulong)param_2 & 1) == 0) {
LAB_1083ce748:
    *unaff_x19 = 0;
  }
  else {
    param_2 = &pppppplStack_98;
    FUN_1083cf840();
    if (((ulong)param_2 & 1) == 0) goto LAB_1083ce748;
    plStack_b0 = (long *)0x0;
    in_ZR = param_4 == (long **)0x0;
    pplVar1 = &plStack_b0;
    if (!(bool)in_ZR) {
      pplVar1 = param_4;
    }
    ppppplStack_58 = apppplStack_68;
    uStack_50 = 0x400000000;
    param_2 = (long *******)&ppppplStack_b8;
    func_0x0001083d34cc();
    FUN_1083d231c();
    do {
      func_0x0001083d3334();
      if ((int)param_2 == 0) {
        func_0x0001083d3334();
        ppppppplVar6 = unaff_x20;
        ppppppplVar10 = param_2;
        FUN_1083cbe04();
        param_2 = ppppppplVar6;
        break;
      }
      in_ZR = (int)param_2 == 0x2f;
      if ((bool)in_ZR) {
        func_0x0001083d3460();
        iVar9 = 1;
        goto LAB_1083ce788;
      }
      param_2 = (long *******)&ppppplStack_c0;
      func_0x0001083d3328();
      if ((long ******)ppppplStack_c0 != (long ******)0x0) {
        param_2 = (long *******)&ppppplStack_58;
        func_0x0001083d37d4();
        func_0x0001083d3468();
        if (param_2 != (long *******)0x0) {
          func_0x0001083d314c();
        }
      }
    } while (((ulong)unaff_x20[8] & 1) == 0);
    iVar9 = 0;
    *unaff_x19 = 0;
LAB_1083ce788:
    if ((long ******)ppppplStack_b8 != (long ******)0x0) {
      func_0x0001083d376c();
      iVar9 = extraout_w8;
    }
    if (iVar9 != 0) {
      func_0x0001083cc300();
      FUN_1083d0a60(appppplStack_88,apppplStack_68);
      plStack_c8 = *pplVar1;
      *pplVar1 = (long *)0x0;
      uVar7 = (ulong)unaff_x20 & 0xffffffff;
      unaff_x20 = (long *******)appppplStack_88;
      ppppppplVar10 = (long *******)appppplStack_88;
      FUN_1083da37c(&ppppplStack_b8,uVar7,ppppppplVar10,1,&plStack_c8);
      ppppplVar2 = ppppplStack_b8;
      ppppplStack_b8 = (long *****)0x0;
      *unaff_x19 = (long)ppppplVar2;
      func_0x0001083d3070(&ppppplStack_b8);
      func_0x0001083d35d0();
      param_2 = (long *******)appppplStack_78;
      FUN_1082da480();
    }
    func_0x0001083d36ec();
    func_0x0001083d3680();
    param_4 = pplVar1;
  }
  func_0x0001083d3168(uStack_90);
  func_0x0001083d3278(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001083d35d0();
  ppppppplVar6 = unaff_x20 + 2;
  FUN_1082da480();
  func_0x0001083d36ec();
  func_0x0001083d3680();
  func_0x0001083d3128(uStack_90);
  pcStack_d8 = FUN_1083ce8a4;
  *ppppppplVar10 = (long ******)0x1;
  ppppppplVar8 = ppppppplVar6;
  ppppppplVar11 = ppppppplVar10;
  uStack_100 = param_3;
  pplStack_f8 = param_4;
  pppppplStack_f0 = (long ******)unaff_x20;
  pppppplStack_e8 = (long ******)param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001083cbf08();
  iVar9 = (int)ppppppplVar11;
  iVar5 = (int)ppppppplVar8;
  cVar3 = SBORROW4(iVar5,0x31);
  cVar4 = iVar5 + -0x31 < 0;
  if (iVar5 == 0x31) {
    func_0x0001083d3734(0xffffff);
    if (cVar4 == cVar3) {
      iVar9 = extraout_w10;
    }
    uVar7 = extraout_x8_00;
    if (((ulong)ppppppplVar8 & 0x8000000000000000) == 0) {
      uVar7 = (ulong)(extraout_w9 & 0xffffff | iVar9 << 0x18);
    }
    func_0x0001083d384c(ppppppplVar6,uVar7,&UNK_10f491d06);
    return (long *******)0x1;
  }
  FUN_1083ce9b0(&uStack_108,ppppppplVar6);
  if (uStack_108 == 0) {
    return (long *******)0x0;
  }
  if (*(int *)(uStack_108 + 0xc) != 0x2b) {
    uVar7 = uStack_108;
    FUN_1083c6640(uStack_108,&ppppplStack_110);
    if ((uVar7 & 1) == 0) {
      puVar12 = &UNK_10f491d2c;
      uVar13 = 0x1d;
    }
    else if ((long)ppppplStack_110 < 0x80000000) {
      if (0 < (long)ppppplStack_110) {
        *ppppppplVar10 = (long ******)ppppplStack_110;
        goto LAB_1083ce974;
      }
      puVar12 = &UNK_10f491d63;
      uVar13 = 0x1b;
    }
    else {
      puVar12 = &UNK_10f491d4a;
      uVar13 = 0x18;
    }
    func_0x0001083cc2b4(ppppppplVar6,*(undefined4 *)(uStack_108 + 8),puVar12,uVar13);
  }
LAB_1083ce974:
  func_0x0001083d3158();
  return (long *******)(ulong)(uStack_108 != 0);
}



/* Entry: 1083ce8a4; end: 1083ce9af;  */

bool FUN_1083ce8a4(ulong param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined *puVar8;
  undefined8 uVar9;
  ulong extraout_x8;
  uint extraout_w9;
  int extraout_w10;
  long lStack_40;
  ulong uStack_38;
  long *plVar7;
  
  *param_2 = 1;
  uVar5 = param_1;
  plVar7 = param_2;
  func_0x0001083cbf08();
  iVar6 = (int)plVar7;
  iVar4 = (int)uVar5;
  cVar2 = SBORROW4(iVar4,0x31);
  cVar3 = iVar4 + -0x31 < 0;
  if (iVar4 == 0x31) {
    func_0x0001083d3734(0xffffff);
    if (cVar3 == cVar2) {
      iVar6 = extraout_w10;
    }
    uVar1 = extraout_x8;
    if ((uVar5 & 0x8000000000000000) == 0) {
      uVar1 = (ulong)(extraout_w9 & 0xffffff | iVar6 << 0x18);
    }
    func_0x0001083d384c(param_1,uVar1,&UNK_10f491d06);
    return true;
  }
  FUN_1083ce9b0(&uStack_38,param_1);
  if (uStack_38 == 0) {
    return false;
  }
  if (*(int *)(uStack_38 + 0xc) != 0x2b) {
    uVar5 = uStack_38;
    FUN_1083c6640(uStack_38,&lStack_40);
    if ((uVar5 & 1) == 0) {
      puVar8 = &UNK_10f491d2c;
      uVar9 = 0x1d;
    }
    else if (lStack_40 < 0x80000000) {
      if (0 < lStack_40) {
        *param_2 = lStack_40;
        goto LAB_1083ce974;
      }
      puVar8 = &UNK_10f491d63;
      uVar9 = 0x1b;
    }
    else {
      puVar8 = &UNK_10f491d4a;
      uVar9 = 0x18;
    }
    FUN_1083cc2b4(param_1,*(undefined4 *)(uStack_38 + 8),puVar8,uVar9);
  }
LAB_1083ce974:
  func_0x0001083d3158();
  return uStack_38 != 0;
}



/* Entry: 1083ce9b0; end: 1083cea7b;  */

void FUN_1083ce9b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong unaff_x19;
  long *unaff_x20;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x0001083d3608();
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x0001083d3934();
  uVar2 = unaff_x19;
  FUN_1083cec8c(&lStack_48);
  if (lStack_48 == 0) {
LAB_1083cea2c:
    *unaff_x20 = lStack_48;
  }
  else {
    do {
      iVar1 = (int)uVar2;
      func_0x0001083d337c();
      if (iVar1 != 0x33) goto LAB_1083cea2c;
      uVar2 = unaff_x19;
      func_0x0001083d31f8();
    } while ((uVar2 & 1) != 0);
    *unaff_x20 = 0;
    if (lStack_48 != 0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3110();
  return;
}



/* Entry: 1083cea7c; end: 1083ceb23;  */

long * FUN_1083cea7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined1 auStack_78 [8];
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x0001083d3608();
  plVar6 = *(long **)(*param_1 + 0x28);
  FUN_1083f1a78(param_2,plVar6,param_4);
  iVar5 = (int)param_2;
  if (iVar5 == 0) {
    return *(long **)(*plVar6 + 0xe8);
  }
  func_0x0001083d3744();
  if (iVar5 == 0) {
    return unaff_x19;
  }
  func_0x0001083eea40();
  while ((((*unaff_x20 != 0 && ((*(byte *)((long)unaff_x20 + 0x21) & 1) == 0)) &&
          (*(char *)unaff_x19[1] == '\0')) &&
         (plVar6 = unaff_x19, (**(code **)(*unaff_x19 + 0x18))(), (int)plVar6 != 0))) {
    unaff_x20 = (long *)*unaff_x20;
  }
  FUN_1083ef6e4(&pppuStack_58);
  uVar1 = uStack_50;
  ppppuVar2 = (undefined8 ****)pppuStack_58;
  if (-1 < (long)uStack_48) {
    uVar1 = uStack_48 >> 0x38;
    ppppuVar2 = &pppuStack_58;
  }
  plVar6 = unaff_x20;
  FUN_1083c9bd0(unaff_x20,ppppuVar2,uVar1);
  if ((plVar6 != (long *)0x0) &&
     (plVar3 = plVar6, (**(code **)(*plVar6 + 0xe0))(), (int)plVar3 != 0)) {
    (**(code **)(*plVar6 + 0x50))(plVar6);
    plVar3 = unaff_x19;
    (**(code **)(*unaff_x19 + 0x38))();
    if (((ulong)plVar3 & 1) != 0) goto LAB_1083ee338;
  }
  uStack_68 = uStack_50;
  pppuStack_70 = pppuStack_58;
  uStack_60 = uStack_48;
  pppuStack_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1083ee024(unaff_x20,&pppuStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_70);
  lVar4 = (long)*(char *)((long)unaff_x20 + 0x17);
  plVar6 = unaff_x20;
  if (lVar4 < 0) {
    plVar6 = (long *)*unaff_x20;
    lVar4 = unaff_x20[1];
  }
  FUN_1083ef7a4(auStack_78,unaff_x19,plVar6,lVar4);
  func_0x0001083eeaa4();
  FUN_1083e7a3c();
  plVar3 = unaff_x19;
  func_0x0001083eeab0();
  plVar6 = unaff_x19;
  if (plVar3 != (long *)0x0) {
    func_0x0001083eea0c();
  }
LAB_1083ee338:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_58);
  return plVar6;
}



/* Entry: 1083ceb24; end: 1083cec2b;  */

uint FUN_1083ceb24(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x21;
  
  func_0x0001083d3724();
  while( true ) {
    lVar1 = unaff_x21;
    FUN_1083cbf4c();
    if ((uint)lVar1 == 0) break;
    lVar2 = unaff_x21;
    func_0x0001083d333c();
    if ((int)lVar2 == 0) {
      lVar2 = unaff_x21;
      FUN_1083ce8a4();
      if (((int)lVar2 == 0) || (lVar2 = unaff_x21, func_0x0001083d3318(), (int)lVar2 == 0)) break;
      func_0x0001083d351c();
      lVar1 = unaff_x21;
      func_0x0001083cea7c();
      *unaff_x19 = lVar1;
    }
    else if (*(byte *)(unaff_x21 + 0x41) < 7) {
      func_0x0001083d351c();
      lVar1 = unaff_x21;
      func_0x0001083cead4();
      *unaff_x19 = lVar1;
    }
    else {
      func_0x0001083d351c();
      func_0x0001083d384c();
    }
  }
  return (uint)lVar1 ^ 1;
}



/* Entry: 1083cec2c; end: 1083cec8b;  */

bool FUN_1083cec2c(int param_1)

{
  bool bVar1;
  long lVar2;
  long *unaff_x19;
  long lStack_28;
  
  func_0x0001083d3608();
  func_0x0001083d333c();
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    func_0x0001083d3924(&lStack_28);
    lVar2 = *unaff_x19;
    *unaff_x19 = lStack_28;
    if (lVar2 != 0) {
      func_0x0001083d314c();
      lStack_28 = *unaff_x19;
    }
    bVar1 = lStack_28 != 0;
  }
  return bVar1;
}



/* Entry: 1083cec8c; end: 1083cef93;  */

void FUN_1083cec8c(undefined8 *param_1,undefined8 ***param_2)

{
  uint uVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  undefined4 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 extraout_x9;
  undefined8 ***pppuVar8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined4 auStack_70 [2];
  undefined8 **ppuStack_68;
  undefined4 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined4 uStack_48;
  
  pppuVar7 = &ppuStack_a0;
  uStack_90 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  pppuVar5 = param_2;
  ppuStack_98 = param_2;
  ppuStack_68 = param_2;
  ppuStack_50 = param_2;
  FUN_1083d0d04(&ppuStack_58);
  if ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) {
    do {
      func_0x0001083d3334();
      pppuVar8 = (undefined8 ***)ppuStack_58;
      if ((int)pppuVar5 != 0x41) goto LAB_1083ced18;
      pppuVar5 = param_2;
      func_0x0001083d31f8(param_2,&ppuStack_50,9);
    } while (((ulong)pppuVar5 & 1) != 0);
    pppuVar5 = (undefined8 ***)ppuStack_58;
    if ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) {
      func_0x0001083d314c();
    }
  }
  pppuVar8 = (undefined8 ***)0x0;
LAB_1083ced18:
  func_0x0001083d3168(uStack_48);
  pppuVar3 = pppuVar8;
  if ((pppuVar8 == (undefined8 ***)0x0) ||
     (pppuVar5 = param_2, func_0x0001083d333c(param_2,0x45), ((ulong)pppuVar5 & 1) == 0))
  goto LAB_1083cee28;
  pppuVar5 = &ppuStack_68;
  FUN_1083cf840();
  if (((ulong)pppuVar5 & 1) == 0) {
LAB_1083cee10:
    ppuStack_a0 = (undefined8 ***)0x0;
  }
  else {
    pppuVar5 = &ppuStack_50;
    func_0x0001083d3428();
    ppuVar2 = ppuStack_50;
    if ((undefined8 ***)ppuStack_50 == (undefined8 ***)0x0) goto LAB_1083cee10;
    pppuVar5 = param_2;
    func_0x0001083d3318(param_2,0x46,&DAT_10f491c19);
    if ((((ulong)pppuVar5 & 1) != 0) &&
       (func_0x0001083d3924(&ppuStack_58), (undefined8 ***)ppuStack_58 != (undefined8 ***)0x0)) {
      auStack_70[0] = *(undefined4 *)(pppuVar8 + 1);
      puVar6 = auStack_70;
      FUN_1083d0cc4(puVar6,*(undefined4 *)(ppuStack_58 + 1));
      func_0x0001083d3614();
      ppuStack_80 = ppuVar2;
      ppuStack_88 = ppuStack_58;
      ppuStack_78 = pppuVar8;
      FUN_1083eead0(auStack_70,extraout_x9,(ulong)puVar6 & 0xffffffff,&ppuStack_78,&ppuStack_80,
                    &ppuStack_88);
      func_0x0001083d34cc();
      FUN_1083d0ae4();
      func_0x0001083d365c();
      if (pppuVar7 != (undefined8 ***)0x0) {
        func_0x0001083d314c();
      }
      func_0x0001083d34e4();
      if (pppuVar7 != (undefined8 ***)0x0) {
        func_0x0001083d314c();
      }
      pppuVar5 = (undefined8 ***)ppuStack_80;
      ppuStack_80 = (undefined8 **)0x0;
      if (pppuVar5 != (undefined8 ***)0x0) {
        func_0x0001083d314c();
      }
      func_0x0001083d3754();
      pppuVar8 = (undefined8 ***)ppuStack_a0;
      pppuVar3 = (undefined8 ***)ppuStack_a0;
      if (pppuVar5 != (undefined8 ***)0x0) {
        func_0x0001083d314c();
        pppuVar8 = (undefined8 ***)ppuStack_a0;
        pppuVar3 = (undefined8 ***)ppuStack_a0;
      }
      goto LAB_1083cee28;
    }
    ppuStack_a0 = (undefined8 ***)0x0;
    func_0x0001083d324c();
  }
  func_0x0001083d3158();
  pppuVar8 = (undefined8 ***)0x0;
  pppuVar3 = (undefined8 ***)ppuStack_a0;
LAB_1083cee28:
  ppuStack_a0 = pppuVar3;
  func_0x0001083d3168(uStack_60);
  if (pppuVar8 == (undefined8 ***)0x0) {
    pppuVar5 = (undefined8 ***)0x0;
LAB_1083ceea0:
    *param_1 = pppuVar5;
  }
  else {
    do {
      iVar4 = (int)pppuVar5;
      func_0x0001083d3334();
      uVar1 = iVar4 - 0x47;
      pppuVar5 = (undefined8 ***)ppuStack_a0;
      if ((0x10 < uVar1) || ((0x1ff81U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) goto LAB_1083ceea0;
      pppuVar5 = param_2;
      func_0x0001083d31f8(param_2,&ppuStack_98,(&UNK_10df250e0)[uVar1]);
    } while (((ulong)pppuVar5 & 1) != 0);
    *param_1 = 0;
    if ((undefined8 ***)ppuStack_a0 != (undefined8 ***)0x0) {
      func_0x0001083d314c();
    }
  }
  func_0x0001083d3168(uStack_90);
  return;
}



/* Entry: 1083cef94; end: 1083cf01b;  */

void FUN_1083cef94(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *unaff_x20;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  if (*param_2 != 0) {
    func_0x0001083d34ac();
    func_0x0001083d3598();
    lVar1 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)((long)param_1 + 0xc) = 3;
    *param_1 = &PTR_DAT_110a446a8;
    param_1[2] = lVar1;
    *(undefined8 **)(*(long *)(lVar1 + 0x10) + 0x28) = param_1;
    uStack_30 = 0;
    puStack_28 = param_1;
    func_0x0001083d3800();
    if (puStack_28 != (undefined8 *)0x0) {
      func_0x0001083d314c();
    }
    FUN_1083d2c54(&uStack_30);
  }
  return;
}



/* Entry: 1083cf01c; end: 1083cf3af;  */

void FUN_1083cf01c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,int param_7)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  uint uStack_90;
  long *plStack_88;
  long *plStack_80;
  ulong uStack_78;
  
  plStack_80 = (long *)0x0;
  plVar3 = param_2;
  uStack_78 = param_5;
  FUN_1083ceb24(param_2,param_3,&uStack_78);
  if (((ulong)plVar3 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    plVar3 = param_2;
    FUN_1083cec2c(param_2,&plStack_80);
    if ((int)plVar3 == 0) {
      *param_1 = 0;
      if (plStack_80 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083cf2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_80 + 8))();
        return;
      }
    }
    else {
      uVar6 = *(undefined8 *)(*param_2 + 0x28);
      func_0x0001083d3894();
      uVar9 = uStack_78;
      iVar4 = param_7;
      if (0xfe < param_7) {
        iVar4 = 0xff;
      }
      uVar5 = 0xffffff;
      if ((param_6 & 0x8000000000000000) == 0) {
        uVar5 = (uint)(param_6 >> 0x20) & 0xffffff | iVar4 << 0x18;
      }
      FUN_1083d38a8(param_2[9],param_6,param_7);
      plStack_88 = plStack_80;
      plStack_80 = (long *)0x0;
      FUN_1083f3a30(&lStack_98,uVar6,(ulong)plVar3 & 0xffffffff,param_4,uVar9,uVar5);
      lVar8 = lStack_98;
      lStack_98 = 0;
      plVar3 = &lStack_98;
      func_0x0001083d2c8c();
      func_0x0001083d35fc();
      if (plVar3 != (long *)0x0) {
        func_0x0001083d314c();
      }
      while (plVar3 = param_2, func_0x0001083d32c0(), ((ulong)plVar3 & 1) != 0) {
        lStack_98 = -0xffffffa3;
        uStack_90 = 0xffffffff;
        plVar3 = param_2;
        uStack_78 = param_5;
        FUN_1083cc14c(param_2,&lStack_98);
        if ((((ulong)plVar3 & 1) == 0) ||
           (plVar3 = param_2, FUN_1083ceb24(param_2,param_3,&uStack_78), (int)plVar3 == 0))
        goto LAB_1083cf2c4;
        plStack_a0 = (long *)0x0;
        plVar3 = param_2;
        FUN_1083cec2c(param_2,&plStack_a0);
        uVar5 = uStack_90;
        lVar1 = lStack_98;
        if ((int)plVar3 == 0) {
          plVar3 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            func_0x0001083d314c();
          }
          goto LAB_1083cf2c4;
        }
        lVar10 = *(long *)(*param_2 + 0x28);
        uVar7 = (ulong)uStack_90;
        plVar3 = param_2;
        func_0x0001083cc300(param_2,lStack_98,uVar7);
        uVar2 = uStack_78;
        if (lVar1 < 0) {
          uVar5 = 0xffffff;
        }
        else {
          if (0xfe < (int)uVar5) {
            uVar5 = 0xff;
          }
          uVar5 = (uint)((ulong)lVar1 >> 0x20) & 0xffffff | uVar5 << 0x18;
        }
        uVar9 = uVar9 & 0xffffffff00000000 | uVar7;
        FUN_1083d38a8(param_2[9],lVar1,uVar9);
        plStack_b0 = plStack_a0;
        FUN_1083f3a30(&lStack_a8,lVar10,(ulong)plVar3 & 0xffffffff,param_4,uVar2,uVar5);
        lVar1 = lStack_a8;
        lStack_a8 = 0;
        func_0x0001083d388c();
        func_0x0001083d3950();
        if (lVar10 != 0) {
          func_0x0001083d314c();
        }
        lStack_c0 = lVar1;
        plVar3 = &lStack_b8;
        lStack_b8 = lVar8;
        FUN_1083da3a8(&lStack_a8,plVar3,&lStack_c0);
        lVar8 = lStack_a8;
        lStack_a8 = 0;
        func_0x0001083d365c();
        if (plVar3 != (long *)0x0) {
          func_0x0001083d314c();
        }
        func_0x0001083d3708();
        if (plVar3 != (long *)0x0) {
          func_0x0001083d314c();
        }
      }
      func_0x0001083d347c();
      func_0x0001083d3240(param_2);
      plVar3 = param_2;
LAB_1083cf2c4:
      func_0x0001083d3894();
      lStack_c8 = lVar8;
      FUN_1083cf3b0(param_1,(ulong)plVar3 & 0xffffffff,&lStack_c8);
      if (lStack_c8 != 0) {
        func_0x0001083d314c();
      }
    }
  }
  return;
}



/* Entry: 1083cf3b0; end: 1083cf443;  */

void FUN_1083cf3b0(long *param_1,uint param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    FUN_1083cfa70(&lStack_38);
    lVar2 = lStack_38;
    lStack_38 = 0;
    lVar1 = *param_3;
    *param_3 = lVar2;
    if (lVar1 != 0) {
      func_0x0001083d314c();
      func_0x0001083d3760();
      if (lVar1 != 0) {
        func_0x0001083d314c();
      }
    }
    lVar2 = *param_3;
  }
  if ((((param_2 ^ 0xffffffff) & 0xffffff) != 0) &&
     (((*(uint *)(lVar2 + 8) ^ 0xffffffff) & 0xffffff) == 0)) {
    *(uint *)(lVar2 + 8) = param_2;
    lVar2 = *param_3;
  }
  *param_3 = 0;
  *param_1 = lVar2;
  return;
}



/* Entry: 1083cf444; end: 1083cf643;  */

void FUN_1083cf444(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  long *unaff_x19;
  ulong unaff_x20;
  int iVar7;
  long lVar8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x0001083d3608();
  func_0x0001083d3934();
  if (param_1 == 0x16) {
    func_0x0001083d37b4();
    func_0x0001083d34ac();
    FUN_1083cf6b8(unaff_x20,auStack_88);
    if ((unaff_x20 & 1) == 0) {
      *unaff_x19 = 0;
    }
    else {
      func_0x0001083d3408();
      FUN_1083cf01c();
    }
    return;
  }
  if (2 < param_1 - 0x21U) {
    iVar7 = (int)*(undefined8 *)(*(long *)(*unaff_x19 + 0x28) + 0x20);
    func_0x0001083d33dc();
    func_0x0001083d36fc();
    func_0x0001083d3548();
    if (iVar7 == 0) goto LAB_1083cf608;
  }
  auStack_88[0] = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_a0 = &PTR_FUN_110a444e8;
  puStack_80 = (undefined8 *)0x0;
  uStack_78 = 0x100000000;
  func_0x0001083d37c0();
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0x8c);
  uVar6 = *(undefined8 *)((long)unaff_x19 + 0x84);
  lVar8 = unaff_x19[0xf];
  uStack_70 = *(undefined8 *)(extraout_x8 + 0x10);
  uStack_68 = (undefined1)unaff_x19[8];
  *(undefined ****)(extraout_x8 + 0x10) = &ppuStack_a0;
  plVar3 = unaff_x19;
  FUN_1083cf6b8();
  *(undefined8 *)(*(long *)(*unaff_x19 + 0x28) + 0x10) = uStack_70;
  uStack_70 = 0;
  if ((int)plVar3 == 0) {
    *(undefined8 *)((long)unaff_x19 + 0x84) = uVar6;
    *(undefined4 *)((long)unaff_x19 + 0x8c) = uVar1;
    *(int *)(unaff_x19 + 0xf) = (int)lVar8;
    *(undefined1 *)(unaff_x19 + 8) = uStack_68;
  }
  else {
    puVar2 = puStack_80;
    for (lVar8 = (long)(int)uStack_78 << 5; lVar8 != 0; lVar8 = lVar8 + -0x20) {
      lVar5 = (long)*(char *)((long)puVar2 + 0x17);
      puVar4 = puVar2;
      if (lVar5 < 0) {
        lVar5 = puVar2[1];
        puVar4 = (undefined8 *)*puVar2;
      }
      FUN_1083cc2b4(unaff_x19,*(undefined4 *)(puVar2 + 3),puVar4,lVar5);
      puVar2 = puVar2 + 4;
    }
    func_0x0001083d37b4();
    FUN_1083cf01c();
  }
  FUN_1083d2510(&ppuStack_a0);
  if (((ulong)plVar3 & 1) != 0) {
    return;
  }
LAB_1083cf608:
  func_0x0001083d37b4();
  FUN_1083cf754();
  return;
}



/* Entry: 1083cf644; end: 1083cf6b7;  */

void FUN_1083cf644(void)

{
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001083d34ac();
  FUN_1083cf6b8();
  if ((unaff_x20 & 1) == 0) {
    *unaff_x19 = 0;
  }
  else {
    func_0x0001083d3408();
    FUN_1083cf01c();
  }
  return;
}



/* Entry: 1083cf6b8; end: 1083cf753;  */

void FUN_1083cf6b8(ulong param_1,int param_2)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  uint extraout_w8;
  long extraout_x8;
  uint extraout_w9;
  int extraout_w10;
  long unaff_x19;
  int iVar3;
  uint *unaff_x20;
  undefined8 unaff_x22;
  undefined1 auStack_60 [4];
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 in_stack_ffffffffffffffd8;
  
  func_0x0001083d34ac();
  func_0x0001083cbf08();
  func_0x0001083d3734(0xffffff);
  if (in_NG == in_OV) {
    param_2 = extraout_w10;
  }
  uVar1 = extraout_w8;
  if ((param_1 & 0x8000000000000000) == 0) {
    uVar1 = extraout_w9 & 0xffffff | param_2 << 0x18;
  }
  *unaff_x20 = uVar1;
  FUN_1083cd86c(&uStack_5c);
  *(undefined8 *)(unaff_x20 + 3) = uStack_54;
  *(undefined8 *)(unaff_x20 + 1) = uStack_5c;
  *(ulong *)(unaff_x20 + 7) = CONCAT44(uStack_40,uStack_44);
  *(ulong *)(unaff_x20 + 5) = CONCAT44(uStack_48,uStack_4c);
  *(ulong *)(unaff_x20 + 0xb) = CONCAT44(uStack_30,uStack_34);
  *(ulong *)(unaff_x20 + 9) = CONCAT44(uStack_38,uStack_3c);
  *(undefined8 *)(unaff_x20 + 0xe) = in_stack_ffffffffffffffd8;
  *(ulong *)(unaff_x20 + 0xc) = CONCAT44(uStack_2c,uStack_30);
  lVar2 = unaff_x19;
  FUN_1083cdffc();
  *(long *)(unaff_x20 + 0x10) = lVar2;
  if (lVar2 == 0) {
    return;
  }
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  lVar2 = unaff_x19;
  FUN_1083cbfb4();
  if ((int)lVar2 != 0) {
    func_0x0001083d37c0();
    iVar3 = (int)*(undefined8 *)(extraout_x8 + 0x20);
    func_0x0001083d3668();
    func_0x0001083d36fc();
    func_0x0001083d3918();
    if (iVar3 != 0) {
      func_0x0001083d33cc();
      func_0x0001083d32ec();
      func_0x0001083d328c(&UNK_10f491bcd);
      func_0x0001083d34c0();
      func_0x00010048a6c8(&uStack_48,auStack_60);
      func_0x0001083d3408();
      func_0x0001083d3910();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
      func_0x0001083d3430();
      func_0x0001083d3374();
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
    }
  }
  return;
}



/* Entry: 1083cf754; end: 1083cf83f;  */

void FUN_1083cf754(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  FUN_1083ce9b0(&plStack_38);
  if (plStack_38 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    func_0x0001083d347c();
    plVar1 = param_2;
    func_0x0001083d3240();
    if ((int)plVar1 == 0) {
      *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001083cf800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plStack_38 + 8))(plStack_38);
      return;
    }
    lVar2 = *(long *)(*param_2 + 0x28);
    plStack_48 = plStack_38;
    FUN_1083deba8(auStack_40,lVar2,&plStack_48);
    func_0x0001083d3620();
    FUN_1083cf3b0();
    func_0x0001083d3468();
    if (lVar2 != 0) {
      func_0x0001083d314c();
    }
    if (plStack_48 != (long *)0x0) {
      func_0x0001083d314c();
    }
  }
  return;
}



/* Entry: 1083cf840; end: 1083cf973;  */

bool FUN_1083cf840(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x80);
  *(int *)(lVar3 + 0x80) = iVar1 + 1;
  if (0x31 < iVar1) {
    plVar2 = param_1;
    func_0x0001083d3334();
    FUN_1083cbe04(lVar3,plVar2,param_2 & 0xffffffff,&UNK_10f4920f7,0x18);
    *(undefined1 *)(*param_1 + 0x40) = 1;
  }
  return iVar1 < 0x32;
}



/* Entry: 1083cf974; end: 1083cfa6f;  */

undefined4 FUN_1083cf974(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar1 = param_1;
  func_0x0001083d3318(param_1,0x47,&DAT_10f491d94);
  uVar3 = 0xffffffff;
  if ((int)uVar1 != 0) {
    uStack_40 = 0xffffffff0000005d;
    uStack_38 = 0xffffffff;
    uVar2 = 2;
    FUN_1083cbfb4(param_1,2,&UNK_10f491d98,&uStack_40);
    if ((int)param_1 != 0) {
      func_0x0001083d33cc();
      uStack_50 = param_1;
      uStack_48 = uVar2;
      FUN_1083d3f28();
      uVar3 = uStack_58;
      if ((param_1 & 1) == 0) {
        func_0x000107c27958(auStack_88,&uStack_50);
        func_0x0001004c3cd0(auStack_70,&UNK_10f491daf,auStack_88);
        func_0x0001083d3408();
        func_0x0001083d3910();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
        func_0x0001083d36c0();
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}



/* Entry: 1083cfa70; end: 1083cfaa7;  */

void FUN_1083cfa70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1083d25b8(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  FUN_1083d2618(&uStack_28);
  return;
}



/* Entry: 1083cfaa8; end: 1083d0833;  */

/* WARNING: Removing unreachable block (ram,0x0001083d081c) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_1083cfaa8(undefined8 param_1,long *******param_2,long *******param_3,long *******param_4)

{
  undefined1 in_ZR;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *******ppppppplVar6;
  long lVar7;
  undefined8 uVar8;
  long *******ppppppplVar9;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined **ppuVar10;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *pcVar11;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  long ******pppppplVar12;
  undefined8 *unaff_x19;
  long *******ppppppplVar13;
  long *******unaff_x20;
  long *******ppppppplVar14;
  long *******unaff_x22;
  long *******unaff_x23;
  long *******unaff_x24;
  long *******unaff_x25;
  undefined8 uStack_208;
  long ******pppppplStack_200;
  undefined1 auStack_1f8 [32];
  long *****appppplStack_1d8 [2];
  long ******pppppplStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  undefined8 uStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_160;
  undefined4 uStack_158;
  long ******pppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  undefined4 uStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******appppppplStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_c8;
  long *******ppppppplStack_a8;
  undefined4 uStack_a0;
  long *******ppppppplStack_98;
  undefined8 uStack_90;
  long ******pppppplStack_88;
  int iStack_80;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppppppplVar9 = param_3;
  func_0x0001083d34ac();
  func_0x0001083d335c();
  uStack_158 = 0;
  ppppppplVar13 = (long *******)&ppppppplStack_160;
  ppppppplStack_160 = param_2;
  uStack_68 = extraout_x8;
  FUN_1083cf840();
  if (((ulong)ppppppplVar13 & 1) == 0) goto LAB_1083d0050;
  func_0x0001083d3334();
  iVar3 = (int)ppppppplVar13;
  iVar4 = iVar3 + -6;
  cVar1 = SBORROW4(iVar4,0x1d);
  cVar2 = iVar3 + -0x23 < 0;
  in_ZR = iVar4 == 0x1d;
  switch(iVar4) {
  case 0:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f17;
    func_0x0001083d3560();
    param_2 = (long *******)0x6;
    FUN_1083cbfb4();
    if ((((ulong)ppppppplVar13 & 1) != 0) &&
       (func_0x0001083d3190(), ((ulong)ppppppplVar13 & 1) != 0)) {
      ppppppplVar13 = (long *******)&ppppppplStack_a8;
      func_0x0001083d3428();
      ppppppplVar14 = ppppppplStack_a8;
      if (ppppppplStack_a8 != (long *******)0x0) {
        func_0x0001083d3214();
        if (((ulong)ppppppplVar13 & 1) != 0) {
          ppppppplVar13 = (long *******)&uStack_c8;
          func_0x0001083d3328();
          if (uStack_c8 != (long *******)0x0) {
            param_2 = (long *******)0x7;
            ppppppplVar13 = unaff_x20;
            func_0x0001083d333c();
            if ((int)ppppppplVar13 == 0) {
              unaff_x22 = (long *******)0x0;
code_r0x0001083d0364:
              func_0x0001083d325c();
              func_0x0001083d3614();
              ppppppplStack_100 = uStack_c8;
              ppppppplStack_a8 = (long *******)0x0;
              ppppppplStack_118 = ppppppplVar14;
              uStack_c8 = (long *******)0x0;
              unaff_x20 = (long *******)((ulong)ppppppplVar13 & 0xffffffff);
              param_4 = (long *******)&ppppppplStack_100;
              lVar7 = extraout_x9_00;
              param_2 = unaff_x20;
              ppppppplStack_108 = unaff_x22;
              FUN_1083e6680(appppppplStack_f8,extraout_x9_00,unaff_x20,&ppppppplStack_118,param_4,
                            &ppppppplStack_108);
              ppppppplVar9 = (long *******)appppppplStack_f8;
              func_0x0001083d3408();
              FUN_1083cf3b0();
              func_0x0001083d395c();
              if (lVar7 != 0) {
                func_0x0001083d314c();
              }
              func_0x0001083d35fc();
              if (lVar7 != 0) {
                func_0x0001083d314c();
              }
              ppppppplVar13 = ppppppplStack_100;
              ppppppplStack_100 = (long *******)0x0;
              if (ppppppplVar13 != (long *******)0x0) {
                func_0x0001083d314c();
              }
              func_0x0001083d39a0();
              if (ppppppplVar13 != (long *******)0x0) {
                func_0x0001083d314c();
              }
              ppppppplVar14 = (long *******)0x0;
            }
            else {
              ppppppplVar13 = (long *******)&uStack_e8;
              func_0x0001083d3328();
              unaff_x22 = uStack_e8;
              if (uStack_e8 != (long *******)0x0) goto code_r0x0001083d0364;
              *unaff_x19 = 0;
            }
            func_0x0001083d3994();
            if (ppppppplVar13 != (long *******)0x0) {
              func_0x0001083d314c();
            }
            ppppppplStack_a8 = (long *******)0x0;
            goto joined_r0x0001083d0088;
          }
        }
        *unaff_x19 = 0;
        ppppppplStack_a8 = (long *******)0x0;
        goto code_r0x0001083d0530;
      }
    }
    break;
  case 1:
  case 6:
  case 7:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    goto LAB_1083cfbc4;
  case 2:
    pppppplStack_88 = (long ******)0xffffffff0000005d;
    iStack_80 = -1;
    ppppppplVar9 = (long *******)&UNK_10f491f3d;
    func_0x0001083d3560();
    param_2 = (long *******)0x8;
    FUN_1083cbfb4();
    if (((ulong)ppppppplVar13 & 1) != 0) {
      ppppppplStack_a8 = (long *******)0xffffffff0000005d;
      uStack_a0 = 0xffffffff;
      ppppppplVar9 = (long *******)&DAT_10f491e66;
      param_4 = (long *******)&ppppppplStack_a8;
      param_2 = (long *******)0x2c;
      ppppppplVar13 = unaff_x20;
      FUN_1083cbfb4();
      if (((ulong)ppppppplVar13 & 1) != 0) {
        appppppplStack_f8[0] = (long *******)0x0;
        uStack_c8 = (long *******)0xffffffff0000005d;
        uStack_e8 = (long *******)0xffffffff0000005d;
        ppppppplVar13 = (long *******)&ppppppplStack_118;
        ppppppplVar9 = (long *******)appppppplStack_f8;
        func_0x0001083d37e8();
        func_0x0001083d3334();
        in_ZR = (int)ppppppplVar13 == 0x58;
        if (!(bool)in_ZR) {
          ppppppplVar13 = (long *******)&ppppppplStack_100;
          param_2 = unaff_x20;
          FUN_1083cf444();
          ppppppplVar14 = ppppppplStack_100;
          if (ppppppplStack_100 != (long *******)0x0) {
            unaff_x25 = (long *******)(ulong)(*(int *)(unaff_x20 + 0xf) - 1);
            goto code_r0x0001083d00ac;
          }
          unaff_x22 = (long *******)0x0;
          unaff_x23 = (long *******)0x0;
          goto code_r0x0001083d01f0;
        }
        func_0x0001083d3460();
        unaff_x25 = (long *******)((ulong)ppppppplVar13 >> 0x20);
        ppppppplVar14 = (long *******)0x0;
code_r0x0001083d00ac:
        iVar4 = (int)ppppppplVar13;
        func_0x0001083d3334();
        in_ZR = iVar4 == 0x58;
        if ((bool)in_ZR) {
          unaff_x22 = (long *******)0x0;
code_r0x0001083d00f0:
          func_0x0001083d347c();
          param_4 = (long *******)&uStack_c8;
          param_2 = (long *******)0x58;
          ppppppplVar13 = unaff_x20;
          FUN_1083cbfb4();
          if ((int)ppppppplVar13 == 0) goto code_r0x0001083d0120;
          func_0x0001083d3334();
          in_ZR = (int)ppppppplVar13 == 0x2d;
          if ((bool)in_ZR) {
            unaff_x23 = (long *******)0x0;
          }
          else {
            ppppppplVar13 = (long *******)&ppppppplStack_100;
            func_0x0001083d3428();
            unaff_x23 = ppppppplStack_100;
            if (ppppppplStack_100 == (long *******)0x0) goto code_r0x0001083d01f0;
          }
          ppppppplVar9 = (long *******)&DAT_10f491d02;
          param_4 = (long *******)&uStack_e8;
          param_2 = (long *******)0x2d;
          ppppppplVar13 = unaff_x20;
          FUN_1083cbfb4();
          if ((int)ppppppplVar13 == 0) goto code_r0x0001083d01f0;
          ppppppplVar13 = (long *******)&ppppppplStack_100;
          ppppppplVar9 = (long *******)0x0;
          param_2 = unaff_x20;
          FUN_1083cfaa8();
          if (ppppppplStack_100 == (long *******)0x0) goto code_r0x0001083d01f0;
          iVar4 = 1;
          unaff_x24 = ppppppplStack_100;
        }
        else {
          ppppppplVar13 = (long *******)&ppppppplStack_100;
          func_0x0001083d3428();
          unaff_x22 = ppppppplStack_100;
          if (ppppppplStack_100 != (long *******)0x0) goto code_r0x0001083d00f0;
code_r0x0001083d0120:
          unaff_x23 = (long *******)0x0;
code_r0x0001083d01f0:
          unaff_x24 = (long *******)0x0;
          iVar4 = 0;
          *unaff_x19 = 0;
        }
        if (ppppppplStack_118 != (long *******)0x0) {
          func_0x0001083d376c();
          iVar4 = extraout_w8_01;
        }
        if (iVar4 == 0) {
          if (unaff_x24 != (long *******)0x0) {
            func_0x0001083d33ac();
          }
          if (unaff_x23 != (long *******)0x0) {
            func_0x0001083d339c();
          }
          if (unaff_x22 != (long *******)0x0) {
            func_0x0001083d324c();
          }
          if (ppppppplVar14 != (long *******)0x0) {
            func_0x0001083d31e8();
            pcVar11 = extraout_x8_03;
            goto code_r0x0001083d0344;
          }
        }
        else {
          func_0x0001083d325c();
          iVar4 = uStack_e8._4_4_;
          if (uStack_e8._4_4_ <= uStack_c8._4_4_ + 2) {
            iVar4 = uStack_c8._4_4_ + 2;
          }
          iVar4 = iVar4 - (uStack_c8._4_4_ + 1U);
          in_ZR = iVar4 == 0xff;
          if (0xfe < iVar4) {
            iVar4 = 0xff;
          }
          param_4 = (long *******)(ulong)(uStack_c8._4_4_ + 1U & 0xffffff | iVar4 << 0x18);
          func_0x0001083d3614();
          ppppppplStack_140 = appppppplStack_f8[0];
          appppppplStack_f8[0] = (long *******)0x0;
          unaff_x20 = (long *******)((ulong)ppppppplVar13 & 0xffffffff);
          ppppppplStack_170 = (long *******)&ppppppplStack_140;
          lVar7 = extraout_x9;
          param_2 = unaff_x20;
          ppppppplStack_138 = unaff_x24;
          ppppppplStack_130 = unaff_x23;
          ppppppplStack_128 = unaff_x22;
          ppppppplStack_120 = ppppppplVar14;
          FUN_1083dfc70(&ppppppplStack_108);
          ppppppplVar9 = (long *******)&ppppppplStack_108;
          func_0x0001083d3408();
          FUN_1083cf3b0();
          func_0x0001083d35fc();
          if (lVar7 != 0) {
            func_0x0001083d314c();
          }
          ppppppplVar13 = (long *******)&ppppppplStack_140;
          func_0x0001083c5f0c();
          func_0x0001083d3708();
          if (ppppppplVar13 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          func_0x0001083d3950();
          if (ppppppplVar13 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          ppppppplVar13 = ppppppplStack_128;
          ppppppplStack_128 = (long *******)0x0;
          if (ppppppplVar13 != (long *******)0x0) {
            func_0x0001083d314c();
          }
          ppppppplVar13 = ppppppplStack_120;
          ppppppplStack_120 = (long *******)0x0;
          if (ppppppplVar13 != (long *******)0x0) {
            func_0x0001083d32fc();
            pcVar11 = extraout_x8_02;
code_r0x0001083d0344:
            (*pcVar11)();
          }
        }
        func_0x0001083d3688();
        goto LAB_1083d0054;
      }
    }
    break;
  case 3:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f21;
    func_0x0001083d3560();
    param_2 = (long *******)0x9;
    FUN_1083cbfb4();
    if ((((ulong)ppppppplVar13 & 1) != 0) &&
       (func_0x0001083d3190(), ((ulong)ppppppplVar13 & 1) != 0)) {
      ppppppplVar13 = (long *******)&ppppppplStack_a8;
      func_0x0001083d3428();
      ppppppplVar14 = ppppppplStack_a8;
      if (ppppppplStack_a8 != (long *******)0x0) {
        func_0x0001083d3214();
        if (((ulong)ppppppplVar13 & 1) != 0) {
          ppppppplVar13 = (long *******)&uStack_c8;
          func_0x0001083d3328();
          unaff_x22 = uStack_c8;
          if (uStack_c8 != (long *******)0x0) {
            func_0x0001083d325c();
            func_0x0001083d3614();
            appppppplStack_f8[0] = ppppppplVar14;
            uStack_c8 = (long *******)0x0;
            ppppppplStack_118 = unaff_x22;
            unaff_x20 = (long *******)((ulong)ppppppplVar13 & 0xffffffff);
            func_0x0001083d379c();
            FUN_1083e02e4();
            ppppppplVar9 = (long *******)&uStack_e8;
            func_0x0001083d3408();
            FUN_1083cf3b0();
            func_0x0001083d39ac();
            if (ppppppplVar13 != (long *******)0x0) {
              func_0x0001083d314c();
            }
            if (ppppppplStack_118 != (long *******)0x0) {
              func_0x0001083d314c();
            }
            ppppppplVar13 = appppppplStack_f8[0];
            if (appppppplStack_f8[0] != (long *******)0x0) {
              func_0x0001083d314c();
            }
            func_0x0001083d3994();
            goto joined_r0x0001083d018c;
          }
        }
        *unaff_x19 = 0;
        goto code_r0x0001083d0530;
      }
    }
    break;
  case 4:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f1c;
    func_0x0001083d3560();
    param_2 = (long *******)0xa;
    FUN_1083cbfb4();
    if (((ulong)ppppppplVar13 & 1) != 0) {
      ppppppplVar13 = (long *******)&ppppppplStack_a8;
      func_0x0001083d3328();
      if (ppppppplStack_a8 != (long *******)0x0) {
        ppppppplVar9 = (long *******)&UNK_10f491f21;
        param_2 = (long *******)0x9;
        ppppppplVar13 = unaff_x20;
        func_0x0001083d3318();
        if ((((ulong)ppppppplVar13 & 1) == 0) ||
           (func_0x0001083d3190(), ((ulong)ppppppplVar13 & 1) == 0)) {
code_r0x0001083cfffc:
          *unaff_x19 = 0;
        }
        else {
          puVar5 = &uStack_c8;
          func_0x0001083d3428();
          ppppppplVar13 = uStack_c8;
          if (uStack_c8 == (long *******)0x0) goto code_r0x0001083cfffc;
          func_0x0001083d3214();
          if (((int)puVar5 == 0) || (func_0x0001083d3178(), (int)puVar5 == 0)) {
            *unaff_x19 = 0;
            func_0x0001083d31e8();
            pcVar11 = extraout_x8_04;
code_r0x0001083d0358:
            (*pcVar11)();
          }
          else {
            func_0x0001083d325c();
            func_0x0001083d3614();
            appppppplStack_f8[0] = ppppppplStack_a8;
            ppppppplStack_a8 = (long *******)0x0;
            ppppppplStack_118 = ppppppplVar13;
            unaff_x20 = (long *******)((ulong)puVar5 & 0xffffffff);
            func_0x0001083d379c();
            FUN_1083de700();
            ppppppplVar9 = (long *******)&uStack_e8;
            func_0x0001083d3408();
            FUN_1083cf3b0();
            func_0x0001083d39ac();
            if (puVar5 != (undefined8 *)0x0) {
              func_0x0001083d314c();
            }
            func_0x0001083d39a0();
            if (puVar5 != (undefined8 *)0x0) {
              func_0x0001083d314c();
            }
            func_0x0001083d395c();
            if (puVar5 != (undefined8 *)0x0) {
              func_0x0001083d32fc();
              pcVar11 = extraout_x8_00;
              goto code_r0x0001083d0358;
            }
          }
        }
        ppppppplVar13 = ppppppplStack_a8;
        ppppppplStack_a8 = (long *******)0x0;
        goto joined_r0x0001083d018c;
      }
    }
    break;
  case 5:
    ppppppplStack_118 = (long *******)0xffffffff0000005d;
    uStack_110 = 0xffffffff;
    ppppppplVar9 = (long *******)&UNK_10f491f30;
    param_4 = (long *******)&ppppppplStack_118;
    param_2 = (long *******)0xb;
    ppppppplVar13 = unaff_x20;
    FUN_1083cbfb4();
    if ((((ulong)ppppppplVar13 & 1) != 0) &&
       (func_0x0001083d3190(), ((ulong)ppppppplVar13 & 1) != 0)) {
      ppppppplVar13 = (long *******)&ppppppplStack_120;
      func_0x0001083d3428();
      if (ppppppplStack_120 != (long *******)0x0) {
        func_0x0001083d3214();
        if (((ulong)ppppppplVar13 & 1) != 0) {
          ppppppplVar9 = (long *******)&DAT_10f491d90;
          param_2 = (long *******)0x2e;
          ppppppplVar13 = unaff_x20;
          func_0x0001083d3318();
          if ((int)ppppppplVar13 != 0) {
            ppppppplStack_128 = (long *******)0x0;
            unaff_x24 = &pppppplStack_88;
            uStack_70 = 0x400000000;
            unaff_x25 = (long *******)&ppppppplStack_a8;
            uStack_90 = 0x400000000;
            ppppppplVar13 = (long *******)&ppppppplStack_130;
            ppppppplStack_98 = unaff_x25;
            ppppppplStack_78 = unaff_x24;
            func_0x0001083d37e8();
            ppppppplVar14 = (long *******)&UNK_10f491f29;
            while( true ) {
              iVar4 = (int)ppppppplVar13;
              func_0x0001083d3334();
              in_ZR = iVar4 == 0xc;
              if (!(bool)in_ZR) break;
              param_4 = (long *******)appppppplStack_f8;
              param_2 = (long *******)0xc;
              ppppppplVar13 = unaff_x20;
              ppppppplVar9 = ppppppplVar14;
              FUN_1083cbfb4();
              unaff_x22 = ppppppplVar14;
              if (((int)ppppppplVar13 == 0) ||
                 (func_0x0001083d3428(&ppppppplStack_100), ppppppplStack_100 == (long *******)0x0))
              goto code_r0x0001083d0504;
              ppppppplStack_108 = ppppppplStack_100;
              param_2 = &pppppplStack_88;
              ppppppplVar9 = (long *******)&ppppppplStack_a8;
              param_4 = (long *******)&ppppppplStack_108;
              unaff_x23 = unaff_x20;
              FUN_1083d0834();
              ppppppplVar13 = unaff_x23;
              func_0x0001083d35fc();
              if (ppppppplVar13 != (long *******)0x0) {
                func_0x0001083d314c();
              }
              unaff_x22 = (long *******)&UNK_10f491f29;
              if (((ulong)unaff_x23 & 1) == 0) goto code_r0x0001083d0504;
            }
            ppppppplVar13 = unaff_x20;
            func_0x0001083d333c();
            if ((int)ppppppplVar13 == 0) {
code_r0x0001083d0438:
              ppppppplVar9 = (long *******)&DAT_10f491f39;
              param_2 = (long *******)0x2f;
              ppppppplVar13 = unaff_x20;
              func_0x0001083d3318();
              unaff_x22 = ppppppplVar14;
              if ((int)ppppppplVar13 != 0) {
                if (ppppppplStack_130 != (long *******)0x0) {
                  func_0x0001083d31a8();
                }
                unaff_x22 = unaff_x20;
                func_0x0001083cc300();
                unaff_x20 = (long *******)(*unaff_x20)[5];
                ppppppplStack_148 = ppppppplStack_120;
                FUN_1083c8078(&uStack_c8,&pppppplStack_88);
                FUN_1083d0a60(&uStack_e8,&ppppppplStack_a8);
                pppppplStack_150 = (long ******)ppppppplStack_128;
                ppppppplStack_128 = (long *******)0x0;
                param_2 = (long *******)((ulong)unaff_x22 & 0xffffffff);
                param_4 = (long *******)&uStack_c8;
                ppppppplVar13 = unaff_x20;
                FUN_1083eb624(&ppppppplStack_140,unaff_x20,param_2,&ppppppplStack_148,param_4,
                              &uStack_e8,&pppppplStack_150);
                ppppppplVar9 = (long *******)&ppppppplStack_140;
                func_0x0001083d353c();
                FUN_1083cf3b0();
                func_0x0001083d365c();
                if (ppppppplVar13 != (long *******)0x0) {
                  func_0x0001083d314c();
                }
                func_0x0001083d3680();
                func_0x0001083d3678(&uStack_e8);
                func_0x0001083d3670(&uStack_c8);
                func_0x0001083d3754();
                if (ppppppplVar13 != (long *******)0x0) {
                  func_0x0001083d314c();
                }
                ppppppplVar14 = (long *******)0x0;
                goto code_r0x0001083d0514;
              }
            }
            else {
              ppppppplStack_138 = (long *******)0x0;
              param_2 = &pppppplStack_88;
              ppppppplVar9 = (long *******)&ppppppplStack_a8;
              param_4 = (long *******)&ppppppplStack_138;
              ppppppplVar14 = unaff_x20;
              FUN_1083d0834();
              ppppppplVar13 = ppppppplVar14;
              func_0x0001083d3708();
              if (ppppppplVar13 != (long *******)0x0) {
                func_0x0001083d314c();
              }
              unaff_x22 = ppppppplVar14;
              if (((ulong)ppppppplVar14 & 1) != 0) goto code_r0x0001083d0438;
            }
code_r0x0001083d0504:
            *unaff_x19 = 0;
            ppppppplVar14 = ppppppplStack_120;
            if (ppppppplStack_130 != (long *******)0x0) {
              func_0x0001083d31a8();
            }
code_r0x0001083d0514:
            FUN_1082da480(&ppppppplStack_98);
            func_0x0001083d3844();
            ppppppplVar13 = (long *******)&ppppppplStack_128;
            func_0x0001083c5f0c();
            ppppppplStack_120 = (long *******)0x0;
            goto joined_r0x0001083d0088;
          }
        }
        *unaff_x19 = 0;
        ppppppplStack_120 = (long *******)0x0;
        goto code_r0x0001083d0530;
      }
    }
    break;
  case 8:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f4c;
    func_0x0001083d3560();
    param_2 = (long *******)0xe;
    FUN_1083cbfb4();
    if (((int)ppppppplVar13 != 0) && (func_0x0001083d3178(), (int)ppppppplVar13 != 0)) {
      if ((long)pppppplStack_88 < 0) {
        unaff_x20 = (long *******)0xffffff;
      }
      else {
        func_0x0001083d393c();
        iVar4 = extraout_w9_00;
        if (cVar2 == cVar1) {
          iVar4 = extraout_w8_00;
        }
        unaff_x20 = (long *******)(ulong)((uint)unaff_x20 & 0xffffff | iVar4 << 0x18);
      }
      func_0x0001083d38a0();
      *(int *)(ppppppplVar13 + 1) = (int)unaff_x20;
      *(undefined4 *)((long)ppppppplVar13 + 0xc) = 0xd;
      ppuVar10 = &PTR_FUN_110a44570;
      goto code_r0x0001083d015c;
    }
code_r0x0001083cfd3c:
    ppppppplVar13 = (long *******)0x0;
    goto code_r0x0001083d0160;
  case 9:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f54;
    func_0x0001083d3560();
    param_2 = (long *******)0xf;
    FUN_1083cbfb4();
    if (((int)ppppppplVar13 == 0) || (func_0x0001083d3178(), (int)ppppppplVar13 == 0))
    goto code_r0x0001083cfd3c;
    if ((long)pppppplStack_88 < 0) {
      unaff_x20 = (long *******)0xffffff;
    }
    else {
      func_0x0001083d393c();
      iVar4 = extraout_w9;
      if (cVar2 == cVar1) {
        iVar4 = extraout_w8;
      }
      unaff_x20 = (long *******)(ulong)((uint)unaff_x20 & 0xffffff | iVar4 << 0x18);
    }
    func_0x0001083d38a0();
    *(int *)(ppppppplVar13 + 1) = (int)unaff_x20;
    *(undefined4 *)((long)ppppppplVar13 + 0xc) = 0xe;
    ppuVar10 = &PTR_DAT_110a445b8;
code_r0x0001083d015c:
    *ppppppplVar13 = (long ******)ppuVar10;
code_r0x0001083d0160:
    *unaff_x19 = ppppppplVar13;
    goto LAB_1083d0054;
  case 10:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f54;
    func_0x0001083d3560();
    param_2 = (long *******)0x10;
    FUN_1083cbfb4();
    if ((((ulong)ppppppplVar13 & 1) == 0) ||
       (func_0x0001083d3178(), ((ulong)ppppppplVar13 & 1) == 0)) break;
    if ((long)pppppplStack_88 < 0) {
      param_2 = (long *******)0xffffff;
    }
    else {
      in_ZR = iStack_80 == 0xff;
      iVar4 = iStack_80;
      if (0xfe < iStack_80) {
        iVar4 = 0xff;
      }
      param_2 = (long *******)
                (ulong)((uint)((ulong)pppppplStack_88 >> 0x20) & 0xffffff | iVar4 << 0x18);
    }
    func_0x0001083d397c();
    FUN_1083de5ac(&ppppppplStack_a8);
    ppppppplVar9 = (long *******)&ppppppplStack_a8;
    func_0x0001083d353c();
    FUN_1083cf3b0();
    ppppppplVar13 = ppppppplStack_a8;
joined_r0x0001083d018c:
    if (ppppppplVar13 == (long *******)0x0) goto LAB_1083d0054;
    func_0x0001083d32fc();
    pcVar11 = extraout_x8_01;
    goto code_r0x0001083d0534;
  case 0xb:
    func_0x0001083d3308(0xffffffff0000005d);
    ppppppplVar9 = (long *******)&UNK_10f491f43;
    func_0x0001083d3560();
    param_2 = (long *******)0x11;
    FUN_1083cbfb4();
    if (((ulong)ppppppplVar13 & 1) == 0) break;
    func_0x0001083d3334();
    in_ZR = (int)ppppppplVar13 == 0x58;
    if ((bool)in_ZR) {
      ppppppplVar6 = ppppppplVar13;
      ppppppplVar14 = (long *******)0x0;
    }
    else {
      ppppppplVar13 = (long *******)&ppppppplStack_a8;
      func_0x0001083d3428();
      ppppppplVar6 = ppppppplVar13;
      ppppppplVar14 = ppppppplStack_a8;
      if (ppppppplStack_a8 == (long *******)0x0) break;
    }
    func_0x0001083d3178();
    if ((int)ppppppplVar6 != 0) {
      func_0x0001083d325c();
      ppppppplVar13 = ppppppplVar6;
      func_0x0001083d3598();
      *(int *)(ppppppplVar13 + 1) = (int)ppppppplVar6;
      *(undefined4 *)((long)ppppppplVar13 + 0xc) = 0x15;
      *ppppppplVar13 = (long ******)&PTR_FUN_110a44528;
      ppppppplVar13[2] = (long ******)ppppppplVar14;
      unaff_x20 = ppppppplVar6;
      goto code_r0x0001083d0160;
    }
    *unaff_x19 = 0;
    ppppppplVar13 = ppppppplVar6;
joined_r0x0001083d0088:
    if (ppppppplVar14 == (long *******)0x0) goto LAB_1083d0054;
code_r0x0001083d0530:
    func_0x0001083d31e8();
    pcVar11 = extraout_x8_05;
code_r0x0001083d0534:
    (*pcVar11)();
    goto LAB_1083d0054;
  case 0x10:
    func_0x0001083d3408();
    FUN_1083cf644();
    goto LAB_1083d0054;
  case 0x1b:
  case 0x1c:
  case 0x1d:
LAB_1083cfbb8:
    func_0x0001083d3408();
    FUN_1083cf444();
    goto LAB_1083d0054;
  default:
    in_ZR = true;
    if (iVar3 == 0x2a) goto LAB_1083cfbb8;
    in_ZR = iVar3 == 0x2e;
    if ((bool)in_ZR) {
      func_0x0001083d3408();
      param_4 = (long *******)0x0;
      FUN_1083ce664();
      ppppppplVar9 = param_3;
      goto LAB_1083d0054;
    }
    in_ZR = iVar3 == 0x58;
    if ((bool)in_ZR) {
      func_0x0001083d3460();
      FUN_1083cfa70();
      goto LAB_1083d0054;
    }
    goto LAB_1083cfbc4;
  }
LAB_1083d0050:
  *unaff_x19 = 0;
LAB_1083d0054:
  func_0x0001083d3110();
  func_0x0001083d3278(uStack_68);
  if ((bool)in_ZR) {
    return ppppppplVar13;
  }
  ___stack_chk_fail();
  ppppppplVar14 = ppppppplVar13;
  func_0x0001083d365c();
  if (ppppppplVar14 != (long *******)0x0) {
    func_0x0001083d314c();
  }
  func_0x0001083d3680();
  func_0x0001083d3678(&uStack_e8);
  func_0x0001083d3670(&uStack_c8);
  ppppppplVar14 = ppppppplStack_148;
  ppppppplStack_148 = (long *******)0x0;
  if (ppppppplVar14 != (long *******)0x0) {
    func_0x0001083d3158();
  }
  FUN_1082da480(unaff_x25 + 2);
  func_0x0001083d3844();
  ppppppplVar14 = (long *******)&ppppppplStack_128;
  func_0x0001083c5f0c();
  ppppppplStack_120 = (long *******)0x0;
  func_0x0001083d30f4();
  pcStack_178 = FUN_1083d0834;
  ppppppplVar6 = ppppppplVar14;
  ppppppplStack_1b0 = unaff_x24;
  ppppppplStack_1a8 = unaff_x23;
  ppppppplStack_1a0 = unaff_x22;
  uStack_198 = 0;
  ppppppplStack_190 = unaff_x20;
  ppppppplStack_188 = ppppppplVar13;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x0001083d335c();
  uStack_1b8 = extraout_x8_06;
  func_0x0001083d3318();
  if ((int)ppppppplVar6 == 0) {
    ppppppplVar13 = (long *******)0x0;
  }
  else {
    pppppplStack_1c8 = appppplStack_1d8;
    uStack_1c0 = 0x400000000;
    while( true ) {
      iVar4 = (int)ppppppplVar6;
      func_0x0001083d3818();
      in_ZR = true;
      if (iVar4 == 0x2f) break;
      func_0x0001083d3818();
      in_ZR = true;
      if (iVar4 == 0xc) break;
      func_0x0001083d3818();
      in_ZR = iVar4 == 0xd;
      if ((bool)in_ZR) break;
      ppppppplVar6 = &pppppplStack_200;
      FUN_1083cfaa8(ppppppplVar6,ppppppplVar14,1);
      if (pppppplStack_200 == (long ******)0x0) {
        ppppppplVar13 = (long *******)0x0;
        goto LAB_1083d0948;
      }
      ppppppplVar6 = &pppppplStack_1c8;
      func_0x0001083d37d4();
      func_0x0001083d3468();
      if (ppppppplVar6 != (long *******)0x0) {
        func_0x0001083d314c();
      }
    }
    FUN_1083c7ed8(param_2 + 2,param_4);
    FUN_1083d0a60(auStack_1f8,appppplStack_1d8);
    uStack_208 = 0;
    FUN_1083da13c(&pppppplStack_200,0xffffff,auStack_1f8,0,&uStack_208);
    ppppppplVar6 = ppppppplVar9 + 2;
    func_0x0001083d37d4();
    func_0x0001083d3468();
    if (ppppppplVar6 != (long *******)0x0) {
      func_0x0001083d314c();
    }
    func_0x0001083d35d0();
    func_0x0001083d3678(auStack_1f8);
    ppppppplVar13 = (long *******)0x1;
LAB_1083d0948:
    func_0x0001083d36ec();
  }
  func_0x0001083d3278(uStack_1b8);
  if ((bool)in_ZR) {
    return ppppppplVar13;
  }
  ___stack_chk_fail();
  ppppppplVar13 = ppppppplVar6;
  func_0x0001083d3468();
  if (ppppppplVar13 != (long *******)0x0) {
    func_0x0001083d314c();
  }
  func_0x0001083d35d0();
  func_0x0001083d3678(auStack_1f8);
  func_0x0001083d36ec();
  func_0x0001083d3320();
  func_0x0001083d34ac();
  iVar4 = *(int *)(ppppppplVar13 + 1);
  if (iVar4 < (int)(*(uint *)((long)ppppppplVar13 + 0xc) >> 1)) {
    pppppplVar12 = *param_4;
    ppppppplVar13 = (long *******)(*ppppppplVar6 + iVar4);
    *param_4 = (long ******)0x0;
    *ppppppplVar13 = pppppplVar12;
  }
  else {
    uVar8 = 1;
    ppppppplVar9 = ppppppplVar6;
    FUN_1083d2938(0x3ff8000000000000,ppppppplVar6,1);
    pppppplVar12 = *param_4;
    ppppppplVar13 = ppppppplVar9 + *(int *)(ppppppplVar6 + 1);
    *param_4 = (long ******)0x0;
    *ppppppplVar13 = pppppplVar12;
    FUN_1083d28e8(ppppppplVar6,ppppppplVar9,uVar8);
    iVar4 = *(int *)(ppppppplVar6 + 1);
  }
  *(int *)(ppppppplVar6 + 1) = iVar4 + 1;
  return ppppppplVar13;
LAB_1083cfbc4:
  func_0x0001083d3408();
  FUN_1083cf754();
  goto LAB_1083d0054;
}



/* Entry: 1083d0834; end: 1083d09d3;  */

undefined1 ** FUN_1083d0834(undefined1 **param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = param_1;
  func_0x0001083d335c();
  uStack_48 = extraout_x8;
  func_0x0001083d3318();
  if ((int)ppuVar2 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    puStack_58 = auStack_68;
    uStack_50 = 0x400000000;
    while( true ) {
      iVar1 = (int)ppuVar2;
      func_0x0001083d3818();
      in_ZR = true;
      if (iVar1 == 0x2f) break;
      func_0x0001083d3818();
      in_ZR = true;
      if (iVar1 == 0xc) break;
      func_0x0001083d3818();
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) break;
      ppuVar2 = &puStack_90;
      FUN_1083cfaa8(ppuVar2,param_1,1);
      if (puStack_90 == (undefined1 *)0x0) {
        ppuVar6 = (undefined1 **)0x0;
        goto LAB_1083d0948;
      }
      ppuVar2 = &puStack_58;
      func_0x0001083d37d4();
      func_0x0001083d3468();
      if (ppuVar2 != (undefined1 **)0x0) {
        func_0x0001083d314c();
      }
    }
    FUN_1083c7ed8(param_2 + 0x10,param_4);
    FUN_1083d0a60(auStack_88,auStack_68);
    uStack_98 = 0;
    FUN_1083da13c(&puStack_90,0xffffff,auStack_88,0,&uStack_98);
    ppuVar2 = (undefined1 **)(param_3 + 0x10);
    func_0x0001083d37d4();
    func_0x0001083d3468();
    if (ppuVar2 != (undefined1 **)0x0) {
      func_0x0001083d314c();
    }
    func_0x0001083d35d0();
    func_0x0001083d3678(auStack_88);
    ppuVar6 = (undefined1 **)0x1;
LAB_1083d0948:
    func_0x0001083d36ec();
  }
  func_0x0001083d3278(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  ppuVar6 = ppuVar2;
  func_0x0001083d3468();
  if (ppuVar6 != (undefined1 **)0x0) {
    func_0x0001083d314c();
  }
  func_0x0001083d35d0();
  func_0x0001083d3678(auStack_88);
  func_0x0001083d36ec();
  func_0x0001083d3320();
  func_0x0001083d34ac();
  iVar1 = *(int *)(ppuVar6 + 1);
  if (iVar1 < (int)(*(uint *)((long)ppuVar6 + 0xc) >> 1)) {
    puVar5 = (undefined1 *)*param_4;
    ppuVar6 = (undefined1 **)(*ppuVar2 + (long)iVar1 * 8);
    *param_4 = 0;
    *ppuVar6 = puVar5;
  }
  else {
    uVar4 = 1;
    ppuVar3 = ppuVar2;
    FUN_1083d2938(0x3ff8000000000000,ppuVar2,1);
    puVar5 = (undefined1 *)*param_4;
    ppuVar6 = ppuVar3 + *(int *)(ppuVar2 + 1);
    *param_4 = 0;
    *ppuVar6 = puVar5;
    FUN_1083d28e8(ppuVar2,ppuVar3,uVar4);
    iVar1 = *(int *)(ppuVar2 + 1);
  }
  *(int *)(ppuVar2 + 1) = iVar1 + 1;
  return ppuVar6;
}


