/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9a4310; end: 10b9a4323;  */

void FUN_10b9a4310(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f7d0d89;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b9a4324; end: 10b9a43a7;  */

void FUN_10b9a4324(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b9a43a8; end: 10b9a4417;  */

long * FUN_10b9a43a8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b9a43f4();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b9a4418; end: 10b9a4443;  */

long * FUN_10b9a4418(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = (long *)(param_2 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10b9a4470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b9a4444; end: 10b9a446f;  */

long * FUN_10b9a4444(long *param_1)

{
  FUN_10b9a4470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b9a4470; end: 10b9a4493;  */

void FUN_10b9a4470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b9a4494; end: 10b9a44e3;  */

ulong FUN_10b9a4494(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar3;
  }
  FUN_10b9a4310();
  plVar2 = param_1;
  FUN_10b9a4494();
  FUN_10b9a43a8(auStack_58,plVar2,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  puStack_48 = puStack_48 + 3;
  FUN_10b9a4324(param_1,auStack_58);
  uVar3 = param_1[1];
  FUN_10b9a4444(auStack_58);
  return uVar3;
}



/* Entry: 10b9a44e4; end: 10b9a457f;  */

long FUN_10b9a44e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10b9a4494(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  FUN_10b9a43a8(auStack_48,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  puStack_38 = puStack_38 + 3;
  FUN_10b9a4324(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10b9a4444(auStack_48);
  return lVar2;
}



/* Entry: 10b9a4580; end: 10b9a45bf;  */

void FUN_10b9a4580(void)

{
  func_0x00010b9a45f4();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  return;
}



/* Entry: 10b9a45c0; end: 10b9a46a7;  */

void FUN_10b9a45c0(void)

{
  return;
}



/* Entry: 10b9a46a8; end: 10b9a46ef;  */

long FUN_10b9a46a8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xa0))();
  FUN_10b9a4e8c(param_1 + 0x78);
  func_0x000104bda914(param_1 + 0x60);
  FUN_10b9a1f08(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b9a46f0; end: 10b9a46f3;  */

long FUN_10b9a46f0(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0xa0))();
  FUN_10b9a4e8c(param_1 + 0x78);
  func_0x000104bda914(param_1 + 0x60);
  FUN_10b9a1f08(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b9a46f4; end: 10b9a4707;  */

void FUN_10b9a46f4(void)

{
  FUN_10b9a46a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a4708; end: 10b9a4873;  */

long **** FUN_10b9a4708(undefined8 param_1,long ****param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  undefined8 *puVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long ***ppplVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  long ***ppplStack_250;
  undefined1 uStack_248;
  long lStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  long ***ppplStack_220;
  long ***ppplStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long **pplStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long alStack_1a0 [3];
  long ***ppplStack_188;
  long lStack_180;
  undefined8 uStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long **pplStack_108;
  undefined8 uStack_100;
  undefined8 uStack_d8;
  code **ppcStack_d0;
  long **pplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long ***ppplStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  pppplVar9 = &ppplStack_a0;
  pppplVar10 = &ppplStack_a0;
  uVar6 = param_1;
  pppplVar7 = param_2;
  func_0x00010b9a56cc();
  ppplVar14 = *pppplVar7;
  uStack_38 = extraout_x8;
  func_0x00010893448c();
  pcStack_68 = FUN_10b9a4fe8;
  ppuStack_60 = &PTR_FUN_110d7ea28;
  ppplStack_a0 = (long ***)0x0;
  uStack_58 = uVar6;
  FUN_10b9a32a0(ppplVar14,&pcStack_68);
  func_0x00010b9a56c0(ppuStack_60);
  func_0x000104bf3564(&ppplStack_a0);
  pppplVar7 = (long ****)*param_2;
  (*(code *)(*pppplVar7)[8])();
  if ((int)pppplVar7 != 0) {
    param_2 = (long ****)*param_2;
    if ((param_2 != (long ****)0x0) && (param_2[2] != (long ***)0x0)) {
      ppplVar14 = param_2[2] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppplVar14,0x10);
        if (bVar4) {
          *ppplVar14 = (long **)((long)*ppplVar14 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_98 = (long *)0x10b9a4f38;
    ppuStack_90 = &PTR_FUN_110d7ea08;
    puVar8 = (undefined8 *)0x8;
    ppplStack_a0 = (long ***)param_2;
    __Znwm();
    if ((param_2 != (long ****)0x0) && (param_2[2] != (long ***)0x0)) {
      ppplVar14 = param_2[2] + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppplVar14,0x10);
        if (bVar4) {
          *ppplVar14 = (long **)((long)*ppplVar14 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppplVar14 = (long ***)&plStack_98;
    *puVar8 = param_2;
    puStack_88 = puVar8;
    FUN_10b9a4874(param_1,&plStack_98);
    func_0x00010b9a56b4(ppuStack_90);
    func_0x0001052b2c28();
    pppplVar7 = pppplVar9;
  }
  func_0x00010b9a56a0(uStack_38);
  if ((bool)in_ZR) {
    return pppplVar7;
  }
  ___stack_chk_fail();
  func_0x00010b9a56b4(ppuStack_90);
  func_0x0001052b2c28();
  func_0x00010b9a56dc();
  pcStack_a8 = FUN_10b9a4874;
  ppcStack_d0 = &pcStack_68;
  pplStack_c8 = (long **)ppplVar14;
  ppplStack_c0 = (long ***)param_2;
  ppplStack_b8 = (long ***)pppplVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  uStack_d8 = extraout_x8_00;
  func_0x00010b9a5708();
  uVar5 = *(char *)(param_2 + 0x19) == '\x01';
  if ((bool)uVar5) {
    func_0x00010b9a5724();
    if (((ulong)pppplVar7[1][1] & 1) == 0) {
      (*(code *)*pppplVar7)();
      pppplVar10 = pppplVar7;
    }
  }
  else if (param_2[0xc] == (long ***)0x0) {
    param_2 = param_2 + 0x13;
    pplStack_108 = (long **)*param_2;
    func_0x00010b9a56f4();
    pppplVar10 = param_2;
    func_0x0001090c9764(param_2,pppplVar7);
    func_0x00010b9a5724();
    func_0x00010b9a56b4(uStack_100);
  }
  else {
    func_0x00010b9a5724();
  }
  func_0x00010b9a571c();
  func_0x00010b9a56a0(uStack_d8);
  if ((bool)uVar5) {
    return pppplVar10;
  }
  ___stack_chk_fail();
  func_0x00010b9a56b4(uStack_100);
  func_0x00010b9a571c();
  func_0x00010b9a56dc();
  pcStack_128 = FUN_10b9a4940;
  ppuStack_130 = &puStack_b0;
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  uStack_168 = extraout_x8_01;
  func_0x00010b9a5708();
  pppplVar7 = param_2 + 0xc;
  if (*pppplVar7 == (long ***)0x0) {
    FUN_10b926bb4(pppplVar7,pppplVar10);
    FUN_10b9a50c4(&ppplStack_188,param_2 + 0xf);
    pplStack_1b8 = (long **)alStack_1a0;
    uStack_1a8 = 1;
    uStack_1b0 = 0;
    FUN_10b9a5438(param_2 + 0xf,&pplStack_1b8);
    func_0x00010b9a572c();
    pplStack_1b8 = (long **)param_2[0x13];
    func_0x00010b9a56f4();
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    puStack_1e8 = &UNK_1053a6a3c;
    ppuStack_1e0 = &PTR_DAT_110a21c28;
    func_0x0001090c9764(param_2 + 0x13,&puStack_1e8);
    func_0x00010b9a56c0(ppuStack_1e0);
    func_0x00010b9a5724();
    param_2 = (long ****)ppplStack_188;
    for (lStack_180 = lStack_180 << 3; lStack_180 != 0; lStack_180 = lStack_180 + -8) {
      uVar5 = *pppplVar10 == (long ***)0x1;
      lVar1 = 0x20;
      if (!(bool)uVar5) {
        lVar1 = 0x28;
      }
      (**(code **)((long)**param_2 + lVar1))(*param_2,pppplVar10 + 1);
      param_2 = param_2 + 1;
    }
    func_0x00010b9a56b4(uStack_1b0);
    pppplVar7 = &ppplStack_188;
    FUN_10b9a4e8c();
  }
  func_0x00010b9a571c();
  func_0x00010b9a56a0(uStack_168);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010b9a56b4(uStack_1b0);
    pppplVar11 = &ppplStack_188;
    FUN_10b9a4e8c();
    func_0x00010b9a571c();
    func_0x00010b9a56dc();
    pppplVar10 = &ppplStack_250;
    pppplVar9 = &ppplStack_250;
    pcStack_208 = FUN_10b9a4a90;
    ppplStack_220 = (long ***)param_2;
    ppplStack_218 = (long ***)pppplVar7;
    pppuStack_210 = &ppuStack_130;
    func_0x00010b9a5760();
    func_0x00010b9a56cc();
    ppplStack_250 = (long ***)(pppplVar11 + 3);
    uStack_248 = 1;
    uStack_228 = extraout_x8_02;
    __ZNSt3__15mutex4lockEv();
    if (param_2[0xc] == (long ***)0x0) {
      ppplVar13 = param_2[0x10];
      ppplVar14 = param_2[0xf] + (long)ppplVar13;
      uVar5 = ppplVar13 == param_2[0x11];
      if ((bool)uVar5) {
        FUN_10b9a54e8(&lStack_240,param_2 + 0xf,ppplVar14,pppplVar7);
      }
      else {
        ppplVar12 = *pppplVar7;
        if (ppplVar12 != (long ***)0x0) {
          ppplVar13 = ppplVar12 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppplVar13,0x10);
            if (bVar4) {
              *ppplVar13 = (long **)((long)*ppplVar13 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppplVar13 = param_2[0x10];
        }
        *ppplVar14 = (long **)ppplVar12;
        param_2[0x10] = (long ***)((long)ppplVar13 + 1);
      }
    }
    else {
      FUN_10b905d74(&lStack_240);
      func_0x00010810a108(&ppplStack_250);
      uVar5 = lStack_240 == 1;
      lVar1 = 0x20;
      if (!(bool)uVar5) {
        lVar1 = 0x28;
      }
      (**(code **)((long)**pppplVar7 + lVar1))(*pppplVar7,auStack_238);
      func_0x000104bda914(&lStack_240);
    }
    func_0x000108109a9c();
    func_0x00010b9a56a0(uStack_228);
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x000108109a9c();
      func_0x00010b9a56dc();
      __ZNSt3__15mutex4lockEv((undefined1 *)((long)pppplVar9 + 0x18));
      bVar2 = *(byte *)(*(long *)((long)pppplVar9 + 0xa0) + 8);
      __ZNSt3__15mutex6unlockEv((undefined1 *)((long)pppplVar9 + 0x18));
      return (long ****)(ulong)((bVar2 ^ 0xffffffff) & 1);
    }
    return pppplVar10;
  }
  return pppplVar7;
}



/* Entry: 10b9a4874; end: 10b9a493f;  */

long **** FUN_10b9a4874(long ****param_1)

{
  long ***ppplVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long ***ppplVar11;
  long ***ppplVar12;
  long ****unaff_x19;
  long ****unaff_x20;
  long ***ppplStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long **pplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [3];
  long ***ppplStack_e8;
  long lStack_e0;
  undefined8 uStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long **pplStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  uStack_38 = extraout_x8;
  func_0x00010b9a5708();
  uVar6 = *(char *)(unaff_x20 + 0x19) == '\x01';
  if ((bool)uVar6) {
    func_0x00010b9a5724();
    if (((ulong)unaff_x19[1][1] & 1) == 0) {
      (*(code *)*unaff_x19)();
      param_1 = unaff_x19;
    }
  }
  else if (unaff_x20[0xc] == (long ***)0x0) {
    unaff_x20 = unaff_x20 + 0x13;
    pplStack_68 = (long **)*unaff_x20;
    func_0x00010b9a56f4();
    param_1 = unaff_x20;
    func_0x0001090c9764();
    func_0x00010b9a5724();
    func_0x00010b9a56b4(uStack_60);
  }
  else {
    func_0x00010b9a5724();
  }
  func_0x00010b9a571c();
  func_0x00010b9a56a0(uStack_38);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b9a56b4(uStack_60);
  func_0x00010b9a571c();
  func_0x00010b9a56dc();
  pcStack_88 = FUN_10b9a4940;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  uStack_c8 = extraout_x8_00;
  func_0x00010b9a5708();
  pppplVar7 = unaff_x20 + 0xc;
  if (*pppplVar7 == (long ***)0x0) {
    FUN_10b926bb4(pppplVar7,param_1);
    FUN_10b9a50c4(&ppplStack_e8,unaff_x20 + 0xf);
    pplStack_118 = (long **)alStack_100;
    uStack_108 = 1;
    uStack_110 = 0;
    FUN_10b9a5438(unaff_x20 + 0xf,&pplStack_118);
    func_0x00010b9a572c();
    pplStack_118 = (long **)unaff_x20[0x13];
    func_0x00010b9a56f4();
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    puStack_148 = &UNK_1053a6a3c;
    ppuStack_140 = &PTR_DAT_110a21c28;
    func_0x0001090c9764(unaff_x20 + 0x13,&puStack_148);
    func_0x00010b9a56c0(ppuStack_140);
    func_0x00010b9a5724();
    unaff_x20 = (long ****)ppplStack_e8;
    for (lStack_e0 = lStack_e0 << 3; lStack_e0 != 0; lStack_e0 = lStack_e0 + -8) {
      uVar6 = *param_1 == (long ***)0x1;
      lVar2 = 0x20;
      if (!(bool)uVar6) {
        lVar2 = 0x28;
      }
      (**(code **)((long)**unaff_x20 + lVar2))(*unaff_x20,param_1 + 1);
      unaff_x20 = unaff_x20 + 1;
    }
    func_0x00010b9a56b4(uStack_110);
    pppplVar7 = &ppplStack_e8;
    FUN_10b9a4e8c();
  }
  func_0x00010b9a571c();
  func_0x00010b9a56a0(uStack_c8);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010b9a56b4(uStack_110);
    pppplVar8 = &ppplStack_e8;
    FUN_10b9a4e8c();
    func_0x00010b9a571c();
    func_0x00010b9a56dc();
    pppplVar9 = &ppplStack_1b0;
    pppplVar10 = &ppplStack_1b0;
    pcStack_168 = FUN_10b9a4a90;
    ppplStack_180 = (long ***)unaff_x20;
    ppplStack_178 = (long ***)pppplVar7;
    ppuStack_170 = &puStack_90;
    func_0x00010b9a5760();
    func_0x00010b9a56cc();
    ppplStack_1b0 = (long ***)(pppplVar8 + 3);
    uStack_1a8 = 1;
    uStack_188 = extraout_x8_01;
    __ZNSt3__15mutex4lockEv();
    if (unaff_x20[0xc] == (long ***)0x0) {
      ppplVar12 = unaff_x20[0x10];
      ppplVar1 = unaff_x20[0xf] + (long)ppplVar12;
      uVar6 = ppplVar12 == unaff_x20[0x11];
      if ((bool)uVar6) {
        FUN_10b9a54e8(&lStack_1a0,unaff_x20 + 0xf,ppplVar1,pppplVar7);
      }
      else {
        ppplVar11 = *pppplVar7;
        if (ppplVar11 != (long ***)0x0) {
          ppplVar12 = ppplVar11 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppplVar12,0x10);
            if (bVar5) {
              *ppplVar12 = (long **)((long)*ppplVar12 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppplVar12 = unaff_x20[0x10];
        }
        *ppplVar1 = (long **)ppplVar11;
        unaff_x20[0x10] = (long ***)((long)ppplVar12 + 1);
      }
    }
    else {
      FUN_10b905d74(&lStack_1a0);
      func_0x00010810a108(&ppplStack_1b0);
      uVar6 = lStack_1a0 == 1;
      lVar2 = 0x20;
      if (!(bool)uVar6) {
        lVar2 = 0x28;
      }
      (**(code **)((long)**pppplVar7 + lVar2))(*pppplVar7,auStack_198);
      func_0x000104bda914(&lStack_1a0);
    }
    func_0x000108109a9c();
    func_0x00010b9a56a0(uStack_188);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      func_0x000108109a9c();
      func_0x00010b9a56dc();
      __ZNSt3__15mutex4lockEv((undefined1 *)((long)pppplVar10 + 0x18));
      bVar3 = *(byte *)(*(long *)((long)pppplVar10 + 0xa0) + 8);
      __ZNSt3__15mutex6unlockEv((undefined1 *)((long)pppplVar10 + 0x18));
      return (long ****)(ulong)((bVar3 ^ 0xffffffff) & 1);
    }
    return pppplVar9;
  }
  return pppplVar7;
}



/* Entry: 10b9a4940; end: 10b9a4a8f;  */

undefined8 ** FUN_10b9a4940(void)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 **ppuStack_130;
  undefined1 uStack_128;
  long lStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  uStack_48 = extraout_x8;
  func_0x00010b9a5708();
  ppuVar7 = (undefined8 **)(unaff_x20 + 0xc);
  if (*ppuVar7 == (undefined8 *)0x0) {
    FUN_10b926bb4();
    FUN_10b9a50c4(&puStack_68,unaff_x20 + 0xf);
    puStack_98 = auStack_80;
    uStack_88 = 1;
    uStack_90 = 0;
    FUN_10b9a5438(unaff_x20 + 0xf,&puStack_98);
    func_0x00010b9a572c();
    puStack_98 = (undefined1 *)unaff_x20[0x13];
    func_0x00010b9a56f4();
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    puStack_c8 = &UNK_1053a6a3c;
    ppuStack_c0 = &PTR_DAT_110a21c28;
    func_0x0001090c9764(unaff_x20 + 0x13,&puStack_c8);
    func_0x00010b9a56c0(ppuStack_c0);
    func_0x00010b9a5724();
    unaff_x20 = puStack_68;
    for (lStack_60 = lStack_60 << 3; lStack_60 != 0; lStack_60 = lStack_60 + -8) {
      in_ZR = *unaff_x19 == 1;
      lVar12 = 0x20;
      if (!(bool)in_ZR) {
        lVar12 = 0x28;
      }
      (**(code **)(*(long *)*unaff_x20 + lVar12))((long *)*unaff_x20,unaff_x19 + 1);
      unaff_x20 = unaff_x20 + 1;
    }
    func_0x00010b9a56b4(uStack_90);
    ppuVar7 = &puStack_68;
    FUN_10b9a4e8c();
  }
  func_0x00010b9a571c();
  func_0x00010b9a56a0(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010b9a56b4(uStack_90);
  ppuVar8 = &puStack_68;
  FUN_10b9a4e8c();
  func_0x00010b9a571c();
  func_0x00010b9a56dc();
  pppuVar9 = &ppuStack_130;
  pppuVar10 = &ppuStack_130;
  pcStack_e8 = FUN_10b9a4a90;
  puStack_100 = unaff_x20;
  ppuStack_f8 = ppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  ppuStack_130 = ppuVar8 + 3;
  uStack_128 = 1;
  uStack_108 = extraout_x8_00;
  __ZNSt3__15mutex4lockEv();
  if (unaff_x20[0xc] == 0) {
    lVar12 = unaff_x20[0x10];
    puVar2 = (undefined8 *)(unaff_x20[0xf] + lVar12 * 8);
    uVar6 = lVar12 == unaff_x20[0x11];
    if ((bool)uVar6) {
      FUN_10b9a54e8(&lStack_120,unaff_x20 + 0xf,puVar2,ppuVar7);
    }
    else {
      puVar11 = *ppuVar7;
      if (puVar11 != (undefined8 *)0x0) {
        plVar1 = puVar11 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar12 = unaff_x20[0x10];
      }
      *puVar2 = puVar11;
      unaff_x20[0x10] = lVar12 + 1;
    }
  }
  else {
    FUN_10b905d74(&lStack_120);
    func_0x00010810a108(&ppuStack_130);
    uVar6 = lStack_120 == 1;
    lVar12 = 0x20;
    if (!(bool)uVar6) {
      lVar12 = 0x28;
    }
    (**(code **)(**ppuVar7 + lVar12))(*ppuVar7,auStack_118);
    func_0x000104bda914(&lStack_120);
  }
  func_0x000108109a9c();
  func_0x00010b9a56a0(uStack_108);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x000108109a9c();
    func_0x00010b9a56dc();
    __ZNSt3__15mutex4lockEv((undefined1 *)((long)pppuVar10 + 0x18));
    bVar3 = *(byte *)(*(long *)((long)pppuVar10 + 0xa0) + 8);
    __ZNSt3__15mutex6unlockEv((undefined1 *)((long)pppuVar10 + 0x18));
    return (undefined8 **)(ulong)((bVar3 ^ 0xffffffff) & 1);
  }
  return pppuVar9;
}



/* Entry: 10b9a4a90; end: 10b9a4baf;  */

long * FUN_10b9a4a90(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long unaff_x20;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  plVar8 = &lStack_50;
  plVar9 = &lStack_50;
  func_0x00010b9a5760();
  func_0x00010b9a56cc();
  lStack_50 = param_1 + 0x18;
  uStack_48 = 1;
  uStack_28 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(unaff_x20 + 0x60) == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x78);
    lVar11 = *(long *)(unaff_x20 + 0x80);
    lVar2 = lVar11 * 8;
    uVar7 = lVar11 == *(long *)(unaff_x20 + 0x88);
    if ((bool)uVar7) {
      FUN_10b9a54e8(&lStack_40);
    }
    else {
      lVar10 = *unaff_x19;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar11 = *(long *)(unaff_x20 + 0x80);
      }
      *(long *)(lVar3 + lVar2) = lVar10;
      *(long *)(unaff_x20 + 0x80) = lVar11 + 1;
    }
  }
  else {
    FUN_10b905d74(&lStack_40);
    func_0x00010810a108(&lStack_50);
    uVar7 = lStack_40 == 1;
    lVar2 = 0x20;
    if (!(bool)uVar7) {
      lVar2 = 0x28;
    }
    (**(code **)(*(long *)*unaff_x19 + lVar2))((long *)*unaff_x19,auStack_38);
    func_0x000104bda914(&lStack_40);
  }
  func_0x000108109a9c();
  func_0x00010b9a56a0(uStack_28);
  if ((bool)uVar7) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x000108109a9c();
  func_0x00010b9a56dc();
  __ZNSt3__15mutex4lockEv((undefined1 *)((long)plVar9 + 0x18));
  bVar4 = *(byte *)(*(long *)((long)plVar9 + 0xa0) + 8);
  __ZNSt3__15mutex6unlockEv((undefined1 *)((long)plVar9 + 0x18));
  return (long *)(ulong)((bVar4 ^ 0xffffffff) & 1);
}



/* Entry: 10b9a4bb0; end: 10b9a4beb;  */

byte FUN_10b9a4bb0(long param_1)

{
  byte bVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  bVar1 = *(byte *)(*(long *)(param_1 + 0xa0) + 8);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 10b9a4bec; end: 10b9a4e8b;  */

void FUN_10b9a4bec(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar7;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long alStack_70 [5];
  undefined8 uStack_48;
  
  puVar6 = param_1;
  func_0x00010b9a56cc();
  puStack_d8 = puVar6 + 3;
  uStack_d0 = 1;
  uStack_48 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) goto LAB_10b9a4de8;
  unaff_x20 = param_1 + 0xc;
  if (*unaff_x20 != 0) goto LAB_10b9a4de8;
  *(undefined1 *)(param_1 + 0x19) = 1;
  pcStack_78 = (code *)param_1[0x13];
  (**(code **)(param_1[0x14] + 0x10))(alStack_70);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  puStack_a8 = (undefined8 *)&UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110a21c28;
  func_0x0001090c9764(param_1 + 0x13,&puStack_a8);
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  func_0x00010b9a574c();
  if ((*(byte *)(alStack_70[0] + 8) & 1) == 0) {
    (*pcStack_78)(&pcStack_78);
  }
  FUN_10b99b534(&puStack_d8);
  if (*unaff_x20 == 0) {
    if ((bRam00000001137fd3e8 & 1) == 0) goto LAB_10b9a4e18;
    while( true ) {
      lStack_e0 = lRam00000001137fd3e0;
      if (lRam00000001137fd3e0 != 0) {
        piVar1 = (int *)(lRam00000001137fd3e0 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10b99f6a4(&ppuStack_c8,&lStack_e0,0x65);
      puStack_a8 = (undefined8 *)0x2;
      ppuStack_a0 = ppuStack_c8;
      ppuStack_c8 = (undefined **)0x0;
      FUN_10b8a2ae8(unaff_x20,&puStack_a8);
      func_0x000104bda914(&puStack_a8);
      func_0x000104bda93c(&ppuStack_c8);
      func_0x000107c278f4(&lStack_e0);
      lStack_e8 = param_1[0xd];
      if (lStack_e8 != 0) {
        plVar2 = (long *)(lStack_e8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10b9a50c4(&puStack_a8,param_1 + 0xf);
      ppuStack_c8 = &puStack_b0;
      uStack_b8 = 1;
      uStack_c0 = 0;
      FUN_10b9a5438(param_1 + 0xf,&ppuStack_c8);
      FUN_10b9a4e8c(&ppuStack_c8);
      func_0x00010b9a574c();
      param_1 = puStack_a8;
      for (lVar7 = (long)ppuStack_a0 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
        (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,&lStack_e8);
        param_1 = param_1 + 1;
      }
      func_0x00010b9a572c();
      func_0x000104bda93c(&lStack_e8);
      unaff_x20 = (long *)0x0;
LAB_10b9a4de0:
      func_0x00010b9a56c0(alStack_70[0]);
LAB_10b9a4de8:
      func_0x000108109a9c(&puStack_d8);
      func_0x00010b9a56a0(uStack_48);
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
LAB_10b9a4e18:
      iVar5 = 0x137fd3e8;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        func_0x000107c31088(0x1137fd3e0,&UNK_10f7d04af);
        ___cxa_guard_release(0x1137fd3e8);
      }
    }
    return;
  }
  func_0x00010b9a574c();
  goto LAB_10b9a4de0;
}



/* Entry: 10b9a4e8c; end: 10b9a4eb7;  */

undefined8 * FUN_10b9a4e8c(undefined8 *param_1)

{
  FUN_10b9a4eb8(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10b9a4f1c(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b9a4eb8; end: 10b9a4ee7;  */

void FUN_10b9a4eb8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x00010b8e09d8(param_2);
    param_2 = param_2 + 8;
  }
  return;
}



/* Entry: 10b9a4ee8; end: 10b9a4f1b;  */

long FUN_10b9a4ee8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b9a4f1c(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b9a4f1c; end: 10b9a4f53;  */

void FUN_10b9a4f1c(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9a4f54; end: 10b9a4f73;  */

void FUN_10b9a4f54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001052b2c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9a4f74; end: 10b9a4f8b;  */

void FUN_10b9a4f74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9a4f8c; end: 10b9a4fe7;  */

void FUN_10b9a4f8c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d7ea08;
  plVar3 = (long *)0x8;
  __Znwm();
  lVar4 = *plVar5;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar5 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *plVar3 = lVar4;
  param_1[1] = plVar3;
  return;
}



/* Entry: 10b9a4fe8; end: 10b9a506b;  */

long FUN_10b9a4fe8(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  lVar2 = param_2;
  func_0x00010b9a56cc();
  lVar2 = *(long *)(lVar2 + 0x10);
  uStack_28 = extraout_x8;
  if (lVar2 != 0) {
    FUN_10b905d74(auStack_40,param_1);
    FUN_10b9a4940(lVar2,auStack_40);
    func_0x000104bda914(auStack_40);
    param_1 = *(long *)(param_2 + 0x10);
    if (param_1 != 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      func_0x000107c3105c();
    }
  }
  func_0x00010b9a56a0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104bda914(auStack_40);
  func_0x00010b9a56dc();
  func_0x0001003b6ce0(puVar1 + 8);
  func_0x000104bf3588();
  return param_1;
}



/* Entry: 10b9a506c; end: 10b9a50c3;  */

void FUN_10b9a506c(long param_1)

{
  func_0x0001003b6ce0(param_1 + 8);
  func_0x000104bf3588();
  return;
}



/* Entry: 10b9a50c4; end: 10b9a50ff;  */

long * FUN_10b9a50c4(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 1;
  param_1[1] = 0;
  FUN_10b9a5100(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 10b9a5100; end: 10b9a515b;  */

void FUN_10b9a5100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  if (param_2 + 3 == puVar1) {
    FUN_10b9a515c(param_1,puVar1,puVar1 + param_2[1],0);
    FUN_10b9a4eb8(param_2,*param_2,param_2[1]);
    param_2[1] = 0;
  }
  else {
    *param_1 = puVar1;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 10b9a515c; end: 10b9a5217;  */

void FUN_10b9a515c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (long)param_3 - (long)param_2 >> 3;
  if ((ulong)param_1[2] < uVar5) {
    plVar3 = param_1;
    FUN_10b9a5308(param_1,uVar5);
    plVar6 = (long *)*param_1;
    if (plVar6 != (long *)0x0) {
      FUN_10b9a5218(param_1);
      if (param_1 + 3 != plVar6) {
        __ZdlPv(plVar6);
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar5;
    *param_1 = (long)plVar3;
    lVar4 = 0;
    lVar1 = *param_1;
    lVar2 = param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined8 *)(lVar1 + lVar2 * 8 + lVar4) = *param_2;
      *param_2 = 0;
      lVar4 = lVar4 + 8;
    }
    param_1[1] = lVar2 + (lVar4 >> 3);
    return;
  }
  FUN_10b9a5274(param_1,param_2,uVar5,*param_1,param_1[1]);
  param_1[1] = uVar5;
  return;
}



/* Entry: 10b9a5218; end: 10b9a523f;  */

void FUN_10b9a5218(undefined8 *param_1)

{
  FUN_10b9a4eb8(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 10b9a5240; end: 10b9a5273;  */

void FUN_10b9a5240(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *(undefined8 *)(lVar1 + lVar2 * 8 + lVar3) = *param_2;
    *param_2 = 0;
    lVar3 = lVar3 + 8;
  }
  param_1[1] = lVar2 + (lVar3 >> 3);
  return;
}



/* Entry: 10b9a5274; end: 10b9a5307;  */

void FUN_10b9a5274(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = param_5 - param_3;
  uStack_38 = param_4;
  if (param_3 <= param_5) {
    FUN_10b9a53b4(param_2,param_3,param_4);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      func_0x00010b8e09d8(param_2);
      param_2 = param_2 + 8;
    }
    return;
  }
  FUN_10b9a533c(param_2,param_5,&uStack_38);
  FUN_10b9a5394(param_1,param_2,param_3 - param_5,uStack_38);
  return;
}



/* Entry: 10b9a5308; end: 10b9a533b;  */

long FUN_10b9a5308(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 >> 0x3c != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10b9a5320;
    func_0x00010b9a5754();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010772e264();
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10b9a533c;
  lVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_10b9a53fc(*param_3,param_1);
    param_1 = param_1 + 8;
    *param_3 = *param_3 + 8;
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}



/* Entry: 10b9a533c; end: 10b9a5393;  */

long FUN_10b9a533c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10b9a53fc(*param_3,param_1);
    param_1 = param_1 + 8;
    *param_3 = *param_3 + 8;
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}



/* Entry: 10b9a5394; end: 10b9a53b3;  */

void FUN_10b9a5394(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_4 = *param_2;
    *param_2 = 0;
    param_4 = param_4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10b9a53b4; end: 10b9a53fb;  */

long FUN_10b9a53b4(long param_1,long param_2,long param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10b9a53fc(param_3,param_1);
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* Entry: 10b9a53fc; end: 10b9a5437;  */

undefined8 * FUN_10b9a53fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x00010b8e09fc(uVar1);
  }
  return param_1;
}



/* Entry: 10b9a5438; end: 10b9a546b;  */

long FUN_10b9a5438(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_10b9a546c(param_1,param_2,0);
  }
  return param_1;
}



/* Entry: 10b9a546c; end: 10b9a54e7;  */

void FUN_10b9a546c(undefined8 param_1,long *param_2)

{
  long *unaff_x19;
  long *unaff_x20;
  long lVar1;
  
  func_0x00010b9a5760();
  if (param_2 + 3 == (long *)*param_2) {
    FUN_10b9a515c();
    FUN_10b9a4eb8();
    unaff_x19[1] = 0;
  }
  else {
    FUN_10b9a5218();
    if (*unaff_x20 != 0) {
      func_0x00010b9a5740();
    }
    *unaff_x20 = *unaff_x19;
    lVar1 = unaff_x19[1];
    unaff_x20[2] = unaff_x19[2];
    unaff_x20[1] = lVar1;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 10b9a54e8; end: 10b9a5667;  */

long * FUN_10b9a54e8(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_68;
  long *plStack_60;
  ulong uStack_58;
  
  uVar4 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar4 <= 0xfffffffffffffff - uVar4) {
    if (uVar4 >> 0x3d == 0) {
      uVar11 = (uVar4 << 3) / 5;
    }
    else {
      uVar11 = uVar4 << 3;
      if (4 < uVar4 >> 0x3d) {
        uVar11 = 0xffffffffffffffff;
      }
    }
    lVar13 = *param_2;
    if (0xffffffffffffffe < uVar11) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    plVar8 = param_2;
    FUN_10b9a5308(param_2,uVar1);
    lVar3 = *param_2;
    lVar5 = param_2[1];
    for (lVar9 = 0; puVar10 = (undefined8 *)(lVar3 + lVar9), puVar10 != param_3; lVar9 = lVar9 + 8)
    {
      *(undefined8 *)((long)plVar8 + lVar9) = *puVar10;
      *puVar10 = 0;
    }
    lVar12 = *param_4;
    if (lVar12 != 0) {
      plVar2 = (long *)(lVar12 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    *(long *)((long)plVar8 + lVar9) = lVar12;
    for (puVar10 = param_3; lVar9 = lVar9 + 8, puVar10 != (undefined8 *)(lVar3 + lVar5 * 8);
        puVar10 = puVar10 + 1) {
      *(undefined8 *)((long)plVar8 + lVar9) = *puVar10;
      *puVar10 = 0;
    }
    lStack_68 = 0;
    plStack_60 = param_2;
    uStack_58 = uVar1;
    if (lVar3 != 0) {
      FUN_10b9a4eb8(param_2,lVar3,param_2[1]);
      func_0x00010b9a5740();
    }
    *param_2 = (long)plVar8;
    param_2[1] = param_2[1] + 1;
    param_2[2] = uVar1;
    plVar8 = &lStack_68;
    FUN_10b9a5668(plVar8);
    *param_1 = (long)param_3 + (*param_2 - lVar13);
    return plVar8;
  }
  func_0x00010b9a5754();
  plVar8 = &lStack_68;
  FUN_10b9a5668();
  func_0x00010b9a56dc();
  if ((*plVar8 != 0) && (plVar8[1] + 0x18 != *plVar8)) {
    __ZdlPv();
  }
  return plVar8;
}



/* Entry: 10b9a5668; end: 10b9a569f;  */

long * FUN_10b9a5668(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b9a56a0; end: 10b9a5797;  */

void FUN_10b9a56a0(void)

{
  return;
}



/* Entry: 10b9a5798; end: 10b9a57c7;  */

ulong FUN_10b9a5798(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010b9a576c();
  uVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(uint *)(param_1 + 0x1c) = uVar1;
  return (ulong)uVar1 | lVar2 << 0x20;
}



/* Entry: 10b9a57c8; end: 10b9a57ef;  */

void FUN_10b9a57c8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)((ulong)param_2 >> 0x20);
  func_0x000107c28468(param_1,&uStack_14);
  return;
}



/* Entry: 10b9a57f0; end: 10b9a5817;  */

void FUN_10b9a57f0(void)

{
  return;
}



/* Entry: 10b9a5818; end: 10b9a588f;  */

bool FUN_10b9a5818(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long alStack_30 [2];
  
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bVar3 = true;
  }
  else {
    func_0x000107c278f0(alStack_30);
    bVar3 = alStack_30[0] != 0;
    if (alStack_30[0] != 0) {
      alStack_30[0] = 0;
      alStack_30[1] = 0;
    }
    func_0x000107c278ec(alStack_30);
  }
  return bVar3;
}



/* Entry: 10b9a5890; end: 10b9a58f7;  */

void FUN_10b9a5890(void)

{
  code *pcVar1;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  FUN_10bd3f434(appuStack_38,&UNK_10f7d0dce,0x113,&UNK_10f7d0ee2);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  FUN_10bd3f4e0(appuStack_38[0],&UNK_10f7d0ee8,0x7e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b9a58e4);
  (*pcVar1)();
}



/* Entry: 10b9a58f8; end: 10b9a5937;  */

void FUN_10b9a58f8(void)

{
  FUN_10b9a5938();
  return;
}



/* Entry: 10b9a5938; end: 10b9a5943;  */

long FUN_10b9a5938(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  func_0x0001003a81cc();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 10b9a5944; end: 10b9a5963;  */

void FUN_10b9a5944(void)

{
  func_0x00010b9a59c4();
  return;
}



/* Entry: 10b9a5964; end: 10b9a596b;  */

void FUN_10b9a5964(long param_1)

{
  param_1 = param_1 + -0x10;
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10b9a596c; end: 10b9a598b;  */

void FUN_10b9a596c(void)

{
  func_0x00010b9a59c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a598c; end: 10b9a5acb;  */

void FUN_10b9a598c(long param_1)

{
  func_0x00010b9a59c4(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9a5acc; end: 10b9a5b53;  */

bool FUN_10b9a5acc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  iVar1 = (int)&uStack_20;
  if (param_2 == param_4) {
    uStack_20 = param_1;
    lStack_18 = param_2;
    func_0x000107409a14(&uStack_20,param_3,param_4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b9a5b54; end: 10b9a5b87;  */

void FUN_10b9a5b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b9a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm_110346280)
            (param_1,param_2,param_3);
  return;
}



/* Entry: 10b9a5b88; end: 10b9a5c53;  */

void FUN_10b9a5b88(void)

{
  undefined1 in_ZR;
  int extraout_w9;
  
  func_0x00010b9a5e14();
  if ((bool)in_ZR) {
    func_0x00010b9a5e08();
    func_0x00010b9977bc();
  }
  else if (extraout_w9 == 1) {
    func_0x00010b9a5e08();
    FUN_10b9972a0();
  }
  return;
}



/* Entry: 10b9a5c54; end: 10b9a5ccf;  */

void FUN_10b9a5c54(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_29;
  long lStack_28;
  
  puVar1 = &uStack_29;
  lStack_28 = param_2;
  func_0x00010b9a5e3c(puVar1,param_2 + 1);
  *param_1 = puVar1;
  puVar1[lStack_28 + 0x20] = 0;
  return;
}



/* Entry: 10b9a5cd0; end: 10b9a5cff;  */

void FUN_10b9a5cd0(void)

{
  long *unaff_x21;
  
  func_0x00010b9a5e48();
  FUN_10b9a5c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*unaff_x21 + 0x20);
  return;
}



/* Entry: 10b9a5d00; end: 10b9a5d03;  */

void FUN_10b9a5d00(void)

{
  long *unaff_x21;
  
  func_0x00010b9a5e48();
  FUN_10b9a5c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*unaff_x21 + 0x20);
  return;
}



/* Entry: 10b9a5d04; end: 10b9a5d33;  */

void FUN_10b9a5d04(void)

{
  long *unaff_x21;
  
  func_0x00010b9a5e48();
  func_0x00010b9a5c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*unaff_x21 + 0x20);
  return;
}



/* Entry: 10b9a5d34; end: 10b9a5d7b;  */

void FUN_10b9a5d34(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if ((ulong)param_1[1] <= param_3) {
    param_3 = param_1[1];
  }
  FUN_10b9a5d7c(*param_1,param_2,param_3);
  return;
}



/* Entry: 10b9a5d7c; end: 10b9a5dbf;  */

undefined8 FUN_10b9a5d7c(uint *param_1,uint *param_2,long param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_1 < *param_2) break;
    if (*param_2 < *param_1) {
      return 1;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0xffffffff;
}



/* Entry: 10b9a5dc0; end: 10b9a5e07;  */

void FUN_10b9a5dc0(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(param_2 + 0x20);
  __Znwm();
  uVar3 = *param_3;
  uVar1 = *param_4;
  *puVar2 = &PTR_DAT_110d7ebb0;
  puVar2[1] = 1;
  puVar2[2] = uVar3;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  return;
}



/* Entry: 10b9a5e08; end: 10b9a5e5b;  */

undefined1  [16] FUN_10b9a5e08(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(param_1 + 0x10);
  auVar1._0_8_ = param_1 + 0x20;
  return auVar1;
}



/* Entry: 10b9a5e5c; end: 10b9a5ea7;  */

void FUN_10b9a5e5c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puStack_20;
  ulong uStack_18;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puStack_20 = &UNK_10f7d0ef0;
    uStack_18 = 0;
  }
  else {
    puStack_20 = (undefined *)(lVar1 + 0x18);
    uStack_18 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  func_0x000107c27958(param_1,&puStack_20);
  return;
}



/* Entry: 10b9a5ea8; end: 10b9a5ecf;  */

bool FUN_10b9a5ea8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined *puStack_20;
  ulong uStack_18;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puStack_20 = &UNK_10f7d0ef0;
    uStack_18 = 0;
  }
  else {
    puStack_20 = (undefined *)(lVar3 + 0x18);
    uStack_18 = (ulong)*(uint *)(lVar3 + 0xc);
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == param_2[1]) {
    func_0x000100067218(&puStack_20,*param_2,param_2[1]);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10b9a5ed0; end: 10b9a5ffb;  */

uint FUN_10b9a5ed0(uint param_1)

{
  FUN_10b9a5ea8();
  return param_1 ^ 1;
}



/* Entry: 10b9a5ffc; end: 10b9a60d7;  */

void FUN_10b9a5ffc(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long alStack_158 [35];
  
  func_0x0001078d8678(alStack_158,param_2,0x18);
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  bVar2 = true;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  while( true ) {
    plVar1 = alStack_158;
    func_0x000105c43344(plVar1,&uStack_170,10);
    if ((*(byte *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x20) & 5) != 0) break;
    if (!bVar2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f7d0ef1);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_10f7d0ef3);
    func_0x000107c27fc4(param_1,&uStack_170);
    bVar2 = false;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_170);
  func_0x000105673d7c(alStack_158);
  return;
}



/* Entry: 10b9a60d8; end: 10b9a60f3;  */

bool FUN_10b9a60d8(long *param_1)

{
  if (*param_1 != 0) {
    return *(int *)(*param_1 + 0xc) == 0;
  }
  return true;
}



/* Entry: 10b9a60f4; end: 10b9a616f;  */

void FUN_10b9a60f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b9a6b60(param_1,param_2,param_2);
  return;
}



/* Entry: 10b9a6170; end: 10b9a61af;  */

void FUN_10b9a6170(long *param_1)

{
  long lVar1;
  undefined *puStack_20;
  ulong uStack_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    puStack_20 = &UNK_10f7d0ef0;
    uStack_18 = 0;
  }
  else {
    puStack_20 = (undefined *)(lVar1 + 0x18);
    uStack_18 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  FUN_10b989e74(&puStack_20);
  return;
}



/* Entry: 10b9a61b0; end: 10b9a61f7;  */

void FUN_10b9a61b0(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  undefined1 auStack_20 [16];
  
  func_0x00010b9a6b98(&UNK_10f7d0ef0);
  uVar1 = extraout_x8;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x10;
  }
  FUN_10b989e74(auStack_20,uVar1);
  return;
}



/* Entry: 10b9a61f8; end: 10b9a62b3;  */

void FUN_10b9a61f8(undefined8 *param_1,long *param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  int extraout_w11;
  byte ***pppbStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  uVar1 = param_3;
  func_0x00010b9a5ee8();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    if (*param_2 != 0) {
      do {
        func_0x000107c3a308();
        uVar2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar2;
  }
  else {
    FUN_10b9a5e5c(&pppbStack_58,param_2);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      pppbStack_58 = (byte ***)&pppbStack_58;
    }
    for (; uStack_50 != 0; uStack_50 = uStack_50 - 1) {
      if ((uint)*(byte *)pppbStack_58 == ((uint)param_3 & 0xff)) {
        *(byte *)pppbStack_58 = param_4;
      }
      pppbStack_58 = (byte ***)((long)pppbStack_58 + 1);
    }
    func_0x000107c31084();
    func_0x000107c3a30c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppbStack_58);
  }
  return;
}



/* Entry: 10b9a62b4; end: 10b9a6367;  */

void FUN_10b9a62b4(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x000107c3a308();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar1;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x00010b9a6b80();
    func_0x0001073727e0(&uStack_48,param_3);
    func_0x00010b9a6b74();
    func_0x000107c31084();
    func_0x000107c3a30c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  }
  return;
}



/* Entry: 10b9a6368; end: 10b9a63db;  */

void FUN_10b9a6368(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puStack_20;
  ulong uStack_18;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    lVar4 = *param_3;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = lVar4;
  }
  else {
    lVar4 = *param_3;
    if (lVar4 == 0) {
      puStack_20 = &UNK_10f7d0ef0;
      uStack_18 = 0;
    }
    else {
      puStack_20 = (undefined *)(lVar4 + 0x18);
      uStack_18 = (ulong)*(uint *)(lVar4 + 0xc);
    }
    FUN_10b9a63dc(param_2,&puStack_20);
  }
  return;
}



/* Entry: 10b9a63dc; end: 10b9a646f;  */

void FUN_10b9a63dc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + 0xc);
  }
  func_0x00010b9a6b80(uVar1);
  func_0x00010b9a6b74();
  func_0x0001073727e0(&uStack_48,param_2);
  func_0x000107c31084();
  func_0x000107c3a30c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 10b9a6470; end: 10b9a6487;  */

void FUN_10b9a6470(undefined8 *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (*param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)*(uint *)(*param_2 + 0xc);
  }
  uVar5 = *param_2 == 0;
  puVar9 = &UNK_10f7d0ef0;
  if (!(bool)uVar5) {
    puVar9 = (undefined *)(*param_2 + 0x18);
  }
  func_0x000107c31084();
  puStack_40 = puVar9 + param_3;
  if (uVar8 - param_3 == 0) {
    *param_1 = 0;
    return;
  }
  ppuVar6 = &puStack_40;
  lStack_38 = uVar8 - param_3;
  func_0x0001003a8464(ppuVar6);
  func_0x000107c60d88(param_2 + 6);
  ppuVar7 = &puStack_40;
  func_0x0001003a857c(param_2,ppuVar7,ppuVar6);
  func_0x0001003a8718();
  if (!(bool)uVar5) {
    puVar9 = *ppuVar7;
    piVar1 = (int *)(puVar9 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      puStack_48 = (undefined *)0x0;
    }
    else {
      puStack_48 = puVar9;
      if (puVar9 != (undefined *)0x0) {
        uStack_50 = 0;
        puStack_48 = (undefined *)0x0;
        *param_1 = puVar9;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&puStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&puStack_48);
  }
  func_0x0001003a87ec(param_1,param_2,puStack_40,lStack_38,ppuVar6);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a6488; end: 10b9a64d3;  */

void FUN_10b9a6488(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar5 = *param_2 == 0;
  puVar8 = &UNK_10f7d0ef0;
  if (!(bool)uVar5) {
    puVar8 = (undefined *)(*param_2 + 0x18);
  }
  func_0x000107c31084();
  puStack_40 = puVar8 + param_3;
  if (param_4 - param_3 == 0) {
    *param_1 = 0;
    return;
  }
  ppuVar6 = &puStack_40;
  lStack_38 = param_4 - param_3;
  func_0x0001003a8464(ppuVar6);
  func_0x000107c60d88(param_2 + 6);
  ppuVar7 = &puStack_40;
  func_0x0001003a857c(param_2,ppuVar7,ppuVar6);
  func_0x0001003a8718();
  if (!(bool)uVar5) {
    puVar8 = *ppuVar7;
    piVar1 = (int *)(puVar8 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      puStack_48 = (undefined *)0x0;
    }
    else {
      puStack_48 = puVar8;
      if (puVar8 != (undefined *)0x0) {
        uStack_50 = 0;
        puStack_48 = (undefined *)0x0;
        *param_1 = puVar8;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&puStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&puStack_48);
  }
  func_0x0001003a87ec(param_1,param_2,puStack_40,lStack_38,ppuVar6);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a64d4; end: 10b9a6503;  */

void FUN_10b9a64d4(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar8 = param_2;
  _strlen();
  lVar6 = param_2;
  func_0x000107c31084();
  if (lVar8 == 0) {
    *param_1 = 0;
    return;
  }
  plVar5 = &lStack_40;
  lStack_40 = param_2;
  lStack_38 = lVar8;
  func_0x0001003a8464(plVar5);
  func_0x000107c60d88(lVar6 + 0x30);
  plVar7 = &lStack_40;
  func_0x0001003a857c(lVar6,plVar7,plVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    lVar8 = *plVar7;
    piVar1 = (int *)(lVar8 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      lStack_48 = 0;
    }
    else {
      lStack_48 = lVar8;
      if (lVar8 != 0) {
        uStack_50 = 0;
        lStack_48 = 0;
        *param_1 = lVar8;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&lStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&lStack_48);
  }
  func_0x0001003a87ec(param_1,lVar6,lStack_40,lStack_38,plVar5);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a6504; end: 10b9a6537;  */

void FUN_10b9a6504(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar6 = param_2;
  func_0x000107c31084();
  if (param_3 == 0) {
    *param_1 = 0;
    return;
  }
  plVar5 = &lStack_40;
  lStack_40 = param_2;
  lStack_38 = param_3;
  func_0x0001003a8464(plVar5);
  func_0x000107c60d88(lVar6 + 0x30);
  plVar7 = &lStack_40;
  func_0x0001003a857c(lVar6,plVar7,plVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    lVar8 = *plVar7;
    piVar1 = (int *)(lVar8 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      lStack_48 = 0;
    }
    else {
      lStack_48 = lVar8;
      if (lVar8 != 0) {
        uStack_50 = 0;
        lStack_48 = 0;
        *param_1 = lVar8;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&lStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&lStack_48);
  }
  func_0x0001003a87ec(param_1,lVar6,lStack_40,lStack_38,plVar5);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a6538; end: 10b9a656f;  */

void FUN_10b9a6538(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar7 = bVar4 == 0;
  uVar2 = param_2[1];
  puVar11 = (undefined8 *)*param_2;
  if (-1 < (char)bVar4) {
    uVar2 = (ulong)bVar4;
    puVar11 = param_2;
  }
  puVar9 = puVar11;
  func_0x000107c31084();
  if (uVar2 == 0) {
    *param_1 = 0;
    return;
  }
  ppuVar8 = &puStack_40;
  puStack_40 = puVar11;
  uStack_38 = uVar2;
  func_0x0001003a8464(ppuVar8);
  func_0x000107c60d88(puVar9 + 6);
  ppuVar10 = &puStack_40;
  func_0x0001003a857c(puVar9,ppuVar10,ppuVar8);
  func_0x0001003a8718();
  if (!(bool)uVar7) {
    puVar11 = *ppuVar10;
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      *piVar1 = 0;
      puStack_48 = (undefined8 *)0x0;
    }
    else {
      puStack_48 = puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        uStack_50 = 0;
        puStack_48 = (undefined8 *)0x0;
        *param_1 = puVar11;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&puStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&puStack_48);
  }
  func_0x0001003a87ec(param_1,puVar9,puStack_40,uStack_38,ppuVar8);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a6570; end: 10b9a66e3;  */

undefined1 **
FUN_10b9a6570(undefined8 *param_1,undefined1 **param_2,long param_3,undefined1 *param_4,long param_5
             )

{
  long lVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int extraout_w11;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 *apuStack_c8 [12];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    uVar3 = 0;
    if (*param_2 != (undefined1 *)0x0) {
      do {
        func_0x000107c3a308();
        uVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar3;
    param_5 = unaff_x20;
  }
  else {
    lVar7 = 0;
    for (lVar4 = 0; param_3 != lVar4; lVar4 = lVar4 + 1) {
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = param_5;
      }
      uVar6 = 0;
      if (param_2[lVar4] != (undefined1 *)0x0) {
        uVar6 = (ulong)*(uint *)(param_2[lVar4] + 0xc);
      }
      lVar7 = lVar1 + lVar7 + uVar6;
    }
    FUN_10b9a6a8c(apuStack_c8,lVar7);
    for (lVar4 = 0; lVar4 != param_3; lVar4 = lVar4 + 1) {
      puVar8 = apuStack_c8[0];
      lVar7 = param_5;
      puVar5 = param_4;
      if (lVar4 != 0) {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      puVar5 = param_2[lVar4];
      puVar2 = puVar5 + 0x18;
      if (puVar5 == (undefined1 *)0x0) {
        uVar6 = 0;
        puVar2 = &UNK_10f7d0ef0;
      }
      else {
        uVar6 = (ulong)*(uint *)(puVar5 + 0xc);
      }
      _memcpy(puVar8,puVar2,uVar6);
      apuStack_c8[0] = puVar8 + uVar6;
    }
    func_0x000107c31084();
    func_0x00010b9a6bac(param_1);
    param_2 = apuStack_c8;
    FUN_10b9a6a50(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_d8 = FUN_10b9a66e4;
    lStack_f0 = param_5;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10b9a6368(auStack_f8);
    func_0x000107c31060(param_2,auStack_f8);
    func_0x00010b9a6b44();
    return param_2;
  }
  return param_2;
}



/* Entry: 10b9a66e4; end: 10b9a6723;  */

undefined8 FUN_10b9a66e4(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_10b9a6368(auStack_28);
  func_0x000107c31060(param_1,auStack_28);
  func_0x00010b9a6b44();
  return param_1;
}



/* Entry: 10b9a6724; end: 10b9a67cb;  */

void FUN_10b9a6724(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c31084();
  func_0x00010b9a6bac(&uStack_38);
  func_0x000107c31084();
  func_0x00010b9a6bac(&uStack_40);
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  func_0x000107c278f4(&uStack_40);
  func_0x00010b9a6b44();
  return;
}



/* Entry: 10b9a67cc; end: 10b9a68e3;  */

void FUN_10b9a67cc(undefined8 param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_68 [8];
  
  func_0x000107c3a310();
  if (extraout_x8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)*(uint *)(extraout_x8 + 0xc);
  }
  uVar3 = 0;
  uVar4 = 0;
  puVar1 = &UNK_10f7d0ef0;
  if (extraout_x8 != 0) {
    puVar1 = (undefined *)(extraout_x8 + 0x18);
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  for (; uVar2 != uVar3; uVar3 = uVar3 + 1) {
    if ((uint)(byte)puVar1[uVar3] == (param_2 & 0xff)) {
      if ((param_3 == 0) || (uVar3 != uVar4)) {
        func_0x000107c31084();
        func_0x00010b9a6b2c();
        func_0x00010b9a6bac(auStack_68);
        func_0x00010b9a6b54();
        func_0x00010b9a6b44();
      }
      uVar4 = uVar3 + 1;
    }
  }
  if (uVar2 != uVar4) {
    if (uVar4 == 0) {
      func_0x00010811ffc4();
    }
    else {
      func_0x000107c31084();
      func_0x00010b9a6b2c();
      func_0x00010b9a6bac(auStack_68);
      func_0x00010b9a6b54();
      func_0x00010b9a6b44();
    }
  }
  return;
}



/* Entry: 10b9a68e4; end: 10b9a69ff;  */

void FUN_10b9a68e4(void)

{
  undefined1 uVar1;
  int iVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  undefined *extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_60;
  ulong uStack_58;
  
  func_0x000107c3a310();
  if (extraout_x8 == 0) {
    uVar6 = 0;
    puStack_60 = &UNK_10f7d0ef0;
  }
  else {
    uVar6 = (ulong)*(uint *)(extraout_x8 + 0xc);
    puStack_60 = (undefined *)(extraout_x8 + 0x18);
  }
  uVar4 = 0;
  uStack_58 = uVar6;
  while ((uVar5 = uVar6, uVar6 != uVar4 &&
         (iVar2 = (int)&puStack_60, FUN_10b989e38(&puStack_60,uVar4,&UNK_10f7d0ef6), uVar5 = uVar4,
         iVar2 != 0))) {
    uVar4 = uVar4 + 1;
  }
  while ((uVar1 = uVar6 == uVar5, uVar5 < uVar6 &&
         (iVar2 = (int)&puStack_60, FUN_10b989e74(&puStack_60,&UNK_10f7d0ef6), iVar2 != 0))) {
    uVar6 = uVar6 - 1;
    func_0x00010b9a6b2c();
    puStack_60 = &UNK_10f7d0ef0;
    uStack_58 = uVar6;
    if (!(bool)uVar1) {
      puStack_60 = extraout_x9;
    }
  }
  if (uVar5 == 0) {
    if (*unaff_x20 == 0) {
      uVar3 = 0;
      if (uVar6 == 0) goto LAB_10b9a69f4;
    }
    else if (*(uint *)(*unaff_x20 + 0xc) == uVar6) {
      do {
        func_0x000107c3a308();
        uVar3 = extraout_x8_00;
      } while (extraout_w11 != 0);
LAB_10b9a69f4:
      *unaff_x19 = uVar3;
      return;
    }
  }
  func_0x000107c31084();
  func_0x00010b9a6b2c();
  func_0x000107c3107c();
  return;
}



/* Entry: 10b9a6a00; end: 10b9a6a4f;  */

undefined8 FUN_10b9a6a00(void)

{
  int iVar1;
  
  if ((bRam00000001138469e8 & 1) == 0) {
    iVar1 = 0x138469e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138469e0 = 0;
      ___cxa_guard_release(0x1138469e8);
    }
  }
  return 0x1138469e0;
}



/* Entry: 10b9a6a50; end: 10b9a6a8b;  */

void FUN_10b9a6a50(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 0;
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10b9a6a8c; end: 10b9a6a97;  */

undefined8 * FUN_10b9a6a8c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  func_0x00010b9a6ac4(param_1,param_2,0x40,param_1 + 4);
  return param_1;
}



/* Entry: 10b9a6a98; end: 10b9a6b13;  */

undefined8 * FUN_10b9a6a98(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  func_0x00010b9a6ac4();
  return param_1;
}



/* Entry: 10b9a6b14; end: 10b9a6baf;  */

/* WARNING: Removing unreachable block (ram,0x0001003b06c8) */

long FUN_10b9a6b14(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long in_x9;
  long lStack0000000000000008;
  
  lVar2 = 0;
  if (param_3[1] != 0) {
    lVar1 = in_x9;
    lStack0000000000000008 = param_1;
    func_0x0001003b0714(in_x9,in_x9 + param_1,*param_3,*param_3 + param_3[1]);
    lVar2 = lVar1 - in_x9;
    if (lVar1 == in_x9 + param_1) {
      lVar2 = -1;
    }
  }
  return lVar2;
}



/* Entry: 10b9a6bb0; end: 10b9a6bf7;  */

void FUN_10b9a6bb0(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_10b9972a0();
  if (param_4 == 0) {
    *param_1 = 0;
    return;
  }
  plVar5 = &lStack_40;
  lStack_40 = param_3;
  lStack_38 = param_4;
  func_0x0001003a8464(plVar5);
  func_0x000107c60d88(param_2 + 0x30);
  plVar6 = &lStack_40;
  func_0x0001003a857c(param_2,plVar6,plVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    lVar7 = *plVar6;
    piVar1 = (int *)(lVar7 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      lStack_48 = 0;
    }
    else {
      lStack_48 = lVar7;
      if (lVar7 != 0) {
        uStack_50 = 0;
        lStack_48 = 0;
        *param_1 = lVar7;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&lStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&lStack_48);
  }
  func_0x0001003a87ec(param_1,param_2,lStack_40,lStack_38,plVar5);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 10b9a6bf8; end: 10b9a6d4f;  */

void FUN_10b9a6bf8(long *param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000104bda340(*param_1,param_1[3]);
  for (uVar9 = 0; uVar9 != param_1[3]; uVar9 = uVar9 + 1) {
    if (*(char *)(*param_1 + uVar9) == -2) {
      uVar3 = *(ulong *)(*(long *)(param_1[1] + uVar9 * 8) + 0x10);
      func_0x000107c31090();
      lVar7 = *param_1;
      uVar8 = param_1[3];
      uVar4 = uVar3;
      func_0x000107c3a314();
      uVar5 = uVar8 & uVar3 >> 7;
      if (((uVar4 - uVar5 ^ uVar9 - uVar5) & uVar8) < 8) {
        *(byte *)(lVar7 + uVar9) = (byte)uVar3 & 0x7f;
        func_0x000107c3a318();
      }
      else {
        cVar1 = *(char *)(lVar7 + uVar4);
        bVar2 = (byte)uVar3 & 0x7f;
        *(byte *)(lVar7 + uVar4) = bVar2;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & uVar4 - 8) + 1) = bVar2;
        lVar7 = param_1[1];
        if (cVar1 == -0x80) {
          *(undefined8 *)(lVar7 + uVar4 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
          *(undefined1 *)(*param_1 + uVar9) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar9 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          uVar6 = *(undefined8 *)(lVar7 + uVar9 * 8);
          *(undefined8 *)(lVar7 + uVar9 * 8) = *(undefined8 *)(lVar7 + uVar4 * 8);
          *(undefined8 *)(lVar7 + uVar4 * 8) = uVar6;
          uVar9 = uVar9 - 1;
        }
      }
    }
  }
  lVar7 = 6;
  if (uVar9 != 7) {
    lVar7 = uVar9 - (uVar9 >> 3);
  }
  param_1[5] = lVar7 - param_1[2];
  return;
}



/* Entry: 10b9a6d50; end: 10b9a6de7;  */

void FUN_10b9a6d50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10b9a6f24(param_2 + 3);
  FUN_10b99f8ac(&ppuStack_68);
  param_2 = param_2 + 3;
  FUN_10b9a6f24();
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    ppuStack_68 = &ppuStack_68;
  }
  FUN_10b9a6de8(param_1,uVar1,uVar2,ppuStack_68,uStack_60,param_2[1]);
  func_0x00010b9a743c();
  return;
}



/* Entry: 10b9a6de8; end: 10b9a6f23;  */

void FUN_10b9a6de8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [48];
  
  uVar1 = param_6 + 0x10U;
  if (param_3 <= param_6 + 0x10U) {
    uVar1 = param_3;
  }
  puVar2 = &uStack_60;
  lVar3 = param_6;
  lStack_78 = param_6;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c2810c(puVar2,param_6,uVar1 - param_6);
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puStack_88 = puVar2;
  lStack_80 = lVar3;
  if (lVar3 == 0) {
    puVar2 = &uStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (puVar2,&UNK_10f7d0fa2);
  }
  else {
    puVar2 = &uStack_a0;
    func_0x0001082afa98(puVar2,&puStack_88);
    if (lStack_80 != uStack_58 - param_6) {
      puVar2 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (puVar2,&UNK_10f7d0fa8);
    }
  }
  func_0x000107c31084();
  FUN_10b9a73ec(auStack_50,&lStack_78,&uStack_a0,&uStack_70);
  func_0x000107c2793c(&UNK_10f7d0fac);
  func_0x000107c3173c(auStack_c0);
  func_0x000107c31080(auStack_a8,puVar2,auStack_c0);
  FUN_10b99f560(param_1,auStack_a8);
  func_0x000107c278f4(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  return;
}



/* Entry: 10b9a6f24; end: 10b9a6f3b;  */

void FUN_10b9a6f24(long param_1)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010b9a7484();
  func_0x00010b9a749c();
  FUN_10b99f560(auStack_48,auStack_50);
  FUN_10b9a72b8();
  func_0x00010b9a74dc();
  func_0x00010b9a747c();
  return;
}



/* Entry: 10b9a6f3c; end: 10b9a6f97;  */

void FUN_10b9a6f3c(void)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010b9a7484();
  func_0x00010b9a749c();
  FUN_10b99f560(auStack_38,auStack_40);
  FUN_10b9a72b8();
  func_0x00010b9a74dc();
  func_0x00010b9a747c();
  return;
}



/* Entry: 10b9a6f98; end: 10b9a6fe3;  */

long FUN_10b9a6f98(long *param_1,code *param_2)

{
  long lVar1;
  
  if ((ulong)param_1[2] < (ulong)param_1[1]) {
    lVar1 = (long)*(char *)(*param_1 + param_1[2]);
    (*param_2)();
    if ((int)lVar1 != 0) {
      param_1[2] = param_1[2] + 1;
      lVar1 = 1;
    }
    return lVar1;
  }
  return 0;
}


