/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105274ec0; end: 105274ed3;  */

void FUN_105274ec0(void)

{
  FUN_105275898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105274ed4; end: 105274fd7;  */

undefined8 * FUN_105274ed4(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  
  func_0x000100b9dac4();
  func_0x00010527ba84();
  uStack_48 = extraout_x8;
  func_0x00010b9abe10(&lStack_78,(param_2[1] - *param_2) / 0x18);
  lVar6 = 0;
  uVar7 = 0;
  lVar8 = 0x18;
  while( true ) {
    uVar1 = (unaff_x20[1] - *unaff_x20) / 0x18;
    uVar2 = uVar7 == uVar1;
    if (uVar1 <= uVar7) break;
    plVar4 = (long *)(*unaff_x20 + lVar6);
    lVar5 = (long)*(char *)((long)plVar4 + 0x17);
    if (lVar5 < 0) {
      lVar5 = plVar4[1];
      plVar4 = (long *)*plVar4;
    }
    func_0x00010b9a8dd4(auStack_58,plVar4,lVar5);
    func_0x00010b9a9020(lStack_78 + lVar8,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x10;
    lVar6 = lVar6 + 0x18;
  }
  func_0x00010b9a8f84(auStack_58,&lStack_78);
  func_0x00010527bb9c(auStack_70);
  func_0x000104bda914(auStack_70);
  puVar3 = auStack_58;
  func_0x00010b9a8d98();
  func_0x00010527c0d0();
  func_0x00010527ba10(uStack_48);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3[-1] = &PTR_FUN_110872f58;
  *puVar3 = &PTR_FUN_110872f88;
  func_0x00010bcc7964(puVar3 + 5);
  FUN_1052758ec(puVar3 + 5);
  FUN_105275ccc(puVar3 + 4);
  func_0x000104bda388(puVar3 + 3);
  func_0x0001003a81d8(puVar3 + 1);
  return puVar3 + -1;
}



/* Entry: 105274fd8; end: 105274feb;  */

undefined8 * FUN_105274fd8(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110872f58;
  *param_1 = &PTR_FUN_110872f88;
  func_0x00010bcc7964(param_1 + 5);
  FUN_1052758ec(param_1 + 5);
  FUN_105275ccc(param_1 + 4);
  func_0x000104bda388(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 105274fec; end: 105274fff;  */

void FUN_105274fec(void)

{
  FUN_105275914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105275000; end: 105275003;  */

undefined8 * FUN_105275000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110872dc8;
  FUN_105275ca0(param_1 + 0x16);
  func_0x00010b9a1f08(param_1 + 0xd);
  func_0x00010bcce460(param_1 + 3);
  func_0x000104bd4c74(param_1 + 1);
  return param_1;
}



/* Entry: 105275004; end: 105275017;  */

void FUN_105275004(void)

{
  func_0x000105275b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105275018; end: 10527501b;  */

undefined8 * FUN_105275018(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110872d98;
  FUN_1052750b0(param_1 + 6);
  func_0x00010527bfa8();
  func_0x00010527c0e4();
  return param_1;
}



/* Entry: 10527501c; end: 10527503b;  */

void FUN_10527501c(void)

{
  FUN_10527b9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527503c; end: 10527505b;  */

void FUN_10527503c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    func_0x00010054b180();
  }
  return;
}



/* Entry: 10527505c; end: 1052750af;  */

void FUN_10527505c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x00010054b180();
  }
  return;
}



/* Entry: 1052750b0; end: 1052750d3;  */

void FUN_1052750b0(void)

{
  func_0x00010045db50();
  FUN_1052750d4();
  return;
}



/* Entry: 1052750d4; end: 1052750ff;  */

void FUN_1052750d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052750f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 105275100; end: 105275137;  */

void FUN_105275100(void)

{
  func_0x00010527bde8();
  return;
}



/* Entry: 105275138; end: 1052751ab;  */

void FUN_105275138(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}



/* Entry: 1052751ac; end: 1052751d3;  */

undefined1  [16] FUN_1052751ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = "sqlite";
  return auVar1;
}



/* Entry: 1052751d4; end: 10527520f;  */

void FUN_1052751d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010045db50();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x00010527bae8();
    }
  }
  return;
}



/* Entry: 105275210; end: 10527522b;  */

void FUN_105275210(void)

{
  FUN_10527525c();
  return;
}



/* Entry: 10527522c; end: 10527525b;  */

void FUN_10527522c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2 + param_2 * 3;
  for (param_2 = param_2 * 0x18; param_2 != 0; param_2 = param_2 + -0x18) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10527525c; end: 10527529f;  */

ulong FUN_10527525c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x00010527bccc();
  while ((unaff_x20 != unaff_x21 &&
         (uVar1 = unaff_x20, func_0x0001000e107c(unaff_x20,param_3), (uVar1 & 1) == 0))) {
    unaff_x20 = unaff_x20 + 0x18;
  }
  return unaff_x20;
}



/* Entry: 1052752a0; end: 1052752f7;  */

void FUN_1052752a0(void)

{
  func_0x00010527bc98();
  func_0x0001052752c4();
  return;
}



/* Entry: 1052752f8; end: 1052752ff;  */

void FUN_1052752f8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001000e30f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105275300; end: 105275333;  */

void FUN_105275300(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001000e30f4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 105275334; end: 1052753cb;  */

undefined8 * FUN_105275334(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110872e08;
  plVar2 = param_1 + 0x17;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010527bae8();
  }
  FUN_1052753cc();
  func_0x00010527bc14();
  FUN_105275444(param_1 + 0x19,param_1 + 0x18);
  func_0x00010527bb0c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x19);
  FUN_105275ca0(param_1 + 0x18);
  FUN_105275748(plVar2);
  func_0x00010bcce910(param_1 + 3);
  func_0x00010527c128();
  return param_1;
}



/* Entry: 1052753cc; end: 105275443;  */

void FUN_1052753cc(void)

{
  int iVar1;
  
  if ((bRam00000001136b96a0 & 1) == 0) {
    iVar1 = 0x136b96a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puRam00000001136b96b8 = &UNK_10dd5b8b0;
      uRam00000001136b96c0 = 0;
      uRam00000001136b96c8 = 0;
      uRam00000001136b96d0 = 0;
      uRam00000001136b96e8 = 0;
      uRam00000001136b96e0 = 0;
      uRam00000001136b96f8 = 0;
      uRam00000001136b96f0 = 0;
      uRam00000001136b9700 = 0x32aaaba7;
      uRam00000001136b9710 = 0;
      uRam00000001136b9708 = 0;
      uRam00000001136b9720 = 0;
      uRam00000001136b9718 = 0;
      uRam00000001136b9730 = 0;
      uRam00000001136b9728 = 0;
      uRam00000001136b9738 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b96a0);
      return;
    }
  }
  return;
}



/* Entry: 105275444; end: 1052756f3;  */

void FUN_105275444(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  char *pcVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 auStack_78 [3];
  
  func_0x00010527c034(*(undefined1 *)((long)param_1 + 0x17));
  if (extraout_x8 != 0) {
    puVar2 = param_1;
    FUN_1052756f4();
    uVar7 = uRam00000001136b96d0;
    lVar14 = 0;
    uVar5 = (ulong)puVar2 >> 7;
    while( true ) {
      uVar5 = uVar5 & uVar7;
      uVar11 = *(ulong *)(lRam00000001136b96b8 + uVar5);
      uVar6 = uVar11 ^ ((ulong)puVar2 & 0x7f) * 0x101010101010101;
      for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
          uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
        uVar13 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar5 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar7;
        puVar3 = param_1;
        FUN_10527571c(param_1,lRam00000001136b96c0 + uVar13 * 0x20);
        if (((ulong)puVar3 & 1) != 0) {
          puVar12 = (ulong *)(lRam00000001136b96b8 + uVar13);
          uVar11 = lRam00000001136b96c0 + uVar13 * 0x20;
          goto LAB_105275550;
        }
      }
      if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
      lVar14 = lVar14 + 8;
      uVar5 = lVar14 + uVar5;
    }
    puVar12 = (ulong *)(lRam00000001136b96b8 + uRam00000001136b96d0);
LAB_105275550:
    if ((ulong *)(lRam00000001136b96b8 + uRam00000001136b96d0) != puVar12) {
      iVar4 = *(int *)(uVar11 + 0x18) + -1;
      *(int *)(uVar11 + 0x18) = iVar4;
      if (iVar4 == 0) {
        FUN_105273488(&puStack_90,*param_2);
        func_0x00010b9a2460(auStack_78,&puStack_90);
        puVar2 = param_1;
        func_0x0001000e107c(param_1,auStack_78);
        func_0x00010527bd04();
        func_0x0001000e30f4(&puStack_90);
        if (((ulong)puVar2 & 1) == 0) {
          uStack_88 = param_1[1];
          puStack_90 = (undefined8 *)*param_1;
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uStack_88 = (ulong)*(byte *)((long)param_1 + 0x17);
            puStack_90 = param_1;
          }
          func_0x00010b9a2108(auStack_78,&puStack_90);
          FUN_105274ccc(auStack_78);
          func_0x0001000e30f4(auStack_78);
        }
        iVar4 = *(int *)(uVar11 + 0x18);
      }
      if (iVar4 < 1) {
        for (pcVar10 = (char *)((long)puVar12 + 1); *pcVar10 < -1;
            pcVar10 = pcVar10 + ((ulong)puVar2 & 0xffffffff)) {
          auStack_78[0] = *(undefined8 *)pcVar10;
          puVar2 = auStack_78;
          func_0x0001003acc00();
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar11);
        uVar7 = 0;
        lRam00000001136b96c8 = lRam00000001136b96c8 + -1;
        puVar8 = (undefined1 *)((long)puVar12 + (-8 - lRam00000001136b96b8));
        uVar5 = *(ulong *)(lRam00000001136b96b8 + ((ulong)puVar8 & uRam00000001136b96d0));
        uVar9 = 0xfe;
        uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
        if ((uVar5 != 0) && (uVar11 = *puVar12 & ~*puVar12 << 6 & 0x8080808080808080, uVar11 != 0))
        {
          uVar11 = uVar11 >> 7;
          uVar7 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) +
                  ((uint)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) < 8;
          uVar7 = (ulong)bVar1;
          uVar9 = 0x80;
          if (!bVar1) {
            uVar9 = 0xfe;
          }
        }
        *(undefined1 *)puVar12 = uVar9;
        *(undefined1 *)
         (lRam00000001136b96b8 + (uRam00000001136b96d0 & 7) + (uRam00000001136b96d0 & (ulong)puVar8)
         + 1) = uVar9;
        lRam00000001136b96e0 = lRam00000001136b96e0 + uVar7;
      }
    }
  }
  return;
}



/* Entry: 1052756f4; end: 10527571b;  */

void FUN_1052756f4(void)

{
  func_0x00010527c040();
  func_0x0001001030f4();
  func_0x00010527c13c();
  return;
}



/* Entry: 10527571c; end: 105275747;  */

bool FUN_10527571c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  iVar1 = (int)&puStack_20;
  if (uStack_18 == uVar4) {
    func_0x000100067218(&puStack_20,puVar3,uVar4);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 105275748; end: 10527576f;  */

void FUN_105275748(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010045db50();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010527bae8();
  }
  return;
}



/* Entry: 105275770; end: 1052757d3;  */

undefined8 * FUN_105275770(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110872e60;
  puVar1 = param_1 + 3;
  *puVar1 = &PTR_FUN_110872ea0;
  func_0x00010054c334(puVar1);
  func_0x00010b9a8d98(param_1 + 0x18);
  FUN_1052757d4(param_1 + 0x15);
  FUN_105275ccc(param_1 + 0x14);
  func_0x00010054c360(puVar1);
  func_0x00010527c128();
  return param_1;
}



/* Entry: 1052757d4; end: 10527588b;  */

long * FUN_1052757d4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x0001003a8c94();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10527588c; end: 105275897;  */

void FUN_10527588c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 105275898; end: 1052758eb;  */

undefined8 * FUN_105275898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110872f58;
  param_1[1] = &PTR_FUN_110872f88;
  func_0x00010bcc7964(param_1 + 6);
  FUN_1052758ec(param_1 + 6);
  FUN_105275ccc(param_1 + 5);
  func_0x000104bda388(param_1 + 4);
  func_0x0001003a81d8(param_1 + 2);
  return param_1;
}



/* Entry: 1052758ec; end: 10527590f;  */

undefined8 FUN_1052758ec(undefined8 param_1)

{
  func_0x00010bcc7964();
  return param_1;
}



/* Entry: 105275910; end: 105275913;  */

void FUN_105275910(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined **ppuStack_40;
  byte bStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  bStack_38 = 1;
  ppuStack_40 = &PTR_DAT_110d7e6e0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  pppuStack_60 = &ppuStack_40;
  uStack_58 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  (**(code **)(*param_2 + 0x20))(auStack_50,param_2,&uStack_78);
  if ((bStack_38 & 1) == 0) {
    func_0x00010b9a0084(&uStack_78,&ppuStack_40);
    *param_1 = 2;
    param_1[1] = uStack_78;
    uStack_78 = 0;
    func_0x000104bda93c(&uStack_78);
  }
  else {
    func_0x000104bf351c(param_1,auStack_50);
  }
  func_0x00010b9a8d98(auStack_50);
  func_0x00010b9a01e4(&ppuStack_40);
  return;
}



/* Entry: 105275914; end: 10527595b;  */

undefined8 * FUN_105275914(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110873000;
  FUN_10527595c();
  FUN_105275ca0(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  func_0x00010527bfa8();
  func_0x00010527c128();
  return param_1;
}



/* Entry: 10527595c; end: 105275a73;  */

void FUN_10527595c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_1052753cc();
  __ZNSt3__15mutex4lockEv(0x1136b9700);
  lVar1 = lRam00000001136b96f0;
  lStack_50 = param_1 + 0x18;
  lStack_48 = param_1 + 0x30;
  for (lVar5 = lRam00000001136b96e8; lVar4 = lVar1, lVar5 != lVar1; lVar5 = lVar5 + 0x48) {
    iVar2 = (int)&lStack_50;
    FUN_105275ae4(&lStack_50,lVar5);
    lVar4 = lVar5;
    if (iVar2 != 0) goto LAB_1052759e8;
  }
LAB_105275a1c:
  if (lRam00000001136b96f0 != lVar4) {
    FUN_105275a74(lVar4);
    func_0x00010bcc6708(param_1 + 0x18);
    FUN_105275444(param_1 + 0x30,param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1136b9700);
  return;
LAB_1052759e8:
  while (lVar5 = lVar5 + 0x48, lVar5 != lVar1) {
    uVar3 = 0;
    FUN_105275ae4(&lStack_50,lVar5);
    if ((uVar3 & 1) == 0) {
      func_0x000105275b24(lVar4,lVar5);
      lVar4 = lVar4 + 0x48;
    }
  }
  goto LAB_105275a1c;
}



/* Entry: 105275a74; end: 105275ae3;  */

void FUN_105275a74(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = lRam00000001136b96f0;
  if (param_1 != param_2) {
    func_0x000100b9dac4();
    lVar1 = lRam00000001136b96f0;
    for (; lVar2 = lRam00000001136b96f0, unaff_x20 != lVar1; unaff_x20 = unaff_x20 + 0x48) {
      func_0x000105275b24(unaff_x19,unaff_x20);
      unaff_x19 = unaff_x19 + 0x48;
    }
    while (lVar1 = unaff_x19, unaff_x19 != lVar2) {
      lVar2 = lVar2 + -0x48;
      func_0x000105275b5c();
    }
  }
  lRam00000001136b96f0 = lVar1;
  return;
}



/* Entry: 105275ae4; end: 105275bcf;  */

/* WARNING: Possible PIC construction at 0x000105275afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105275b00) */
/* WARNING: Removing unreachable block (ram,0x000105275b18) */
/* WARNING: Removing unreachable block (ram,0x000105275b04) */

bool FUN_105275ae4(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  
  func_0x00010054d294();
  plVar7 = (long *)*param_1;
  bVar4 = *(byte *)((long)unaff_x19 + 0x17);
  uVar1 = unaff_x19[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)plVar7 + 0x17);
  uVar2 = plVar7[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    puVar6 = (undefined8 *)*unaff_x19;
    if (-1 < (char)bVar4) {
      puVar6 = unaff_x19;
    }
    plVar3 = (long *)*plVar7;
    if (-1 < (char)bVar5) {
      plVar3 = plVar7;
    }
    func_0x000107c610b0(puVar6,plVar3);
    return (int)puVar6 == 0;
  }
  return false;
}



/* Entry: 105275bd0; end: 105275bf3;  */

void FUN_105275bd0(void)

{
  func_0x00010045db50();
  FUN_105275bf4();
  return;
}



/* Entry: 105275bf4; end: 105275bff;  */

void FUN_105275bf4(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 105275c00; end: 105275c9f;  */

void FUN_105275c00(byte param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010527bd34();
  func_0x000104bd9d64();
  plVar4 = unaff_x20;
  plVar6 = param_2;
  func_0x000104bd9d88();
  uVar5 = SUB81(plVar6,0);
  if (((ulong)plVar6 & 1) != 0) {
    plVar6 = (long *)(unaff_x20[1] + (long)plVar4 * 0x18);
    lVar7 = *param_2;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined2 *)(plVar6 + 2) = 0;
    *plVar6 = lVar7;
    plVar6[1] = 0;
    *(byte *)(*unaff_x20 + (long)plVar4) = param_1 & 0x7f;
    func_0x00010527bc80();
  }
  lVar7 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar4;
  unaff_x19[1] = lVar7 + (long)plVar4 * 0x18;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  return;
}



/* Entry: 105275ca0; end: 105275cbf;  */

void FUN_105275ca0(void)

{
  func_0x00010045db50();
  FUN_105275cc0();
  return;
}



/* Entry: 105275cc0; end: 105275ccb;  */

void FUN_105275cc0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 105275ccc; end: 105275cef;  */

void FUN_105275ccc(long param_1)

{
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 105275cf0; end: 105275d3f;  */

void FUN_105275cf0(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    if (param_3 != 0) {
      do {
        func_0x00010527bcd8();
      } while (extraout_w10 != 0);
    }
    func_0x00010527c154();
    func_0x00010527c08c();
    return;
  }
  return;
}



/* Entry: 105275d40; end: 105275d43;  */

void FUN_105275d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873160;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105275d44; end: 105275d57;  */

void FUN_105275d44(void)

{
  func_0x000105275d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105275d58; end: 105275d6b;  */

void FUN_105275d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105275d6c; end: 105275dab;  */

void FUN_105275d6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = &PTR_FUN_1108731b0;
  func_0x00010527c1b4(1);
  *param_1 = puVar1;
  return;
}



/* Entry: 105275dac; end: 105275daf;  */

undefined8 * FUN_105275dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108731b0;
  FUN_105275bd0(param_1 + 0xb);
  func_0x00010b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 105275db0; end: 105275dc3;  */

void FUN_105275db0(void)

{
  FUN_105275dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105275dc4; end: 105275e03;  */

undefined8 * FUN_105275dc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108731b0;
  FUN_105275bd0(param_1 + 0xb);
  func_0x00010b9a1f08(param_1 + 2);
  return param_1;
}



/* Entry: 105275e04; end: 105275e07;  */

void FUN_105275e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108731f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105275e08; end: 105275e1b;  */

void FUN_105275e08(void)

{
  FUN_105276440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105275e1c; end: 105275e23;  */

void FUN_105275e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010527bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105275e24; end: 105275fe7;  */

void FUN_105275e24(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  FUN_105273488(auStack_78);
  func_0x00010b9a2460(param_1,auStack_78);
  func_0x00010527be30();
  func_0x00010527c034(*(undefined1 *)(param_1 + 0x17));
  if (extraout_x8 != 0) {
    uVar3 = param_1;
    FUN_1052756f4();
    uVar2 = uRam00000001136b96d0;
    lVar8 = 0;
    uVar5 = uVar3 >> 7;
    while( true ) {
      uVar5 = uVar5 & uVar2;
      uVar9 = *(ulong *)(lRam00000001136b96b8 + uVar5);
      uVar6 = uVar9 ^ (uVar3 & 0x7f) * 0x101010101010101;
      for (uVar6 = uVar6 + 0xfefefefefefefeff & (uVar6 ^ 0xffffffffffffffff) & 0x8080808080808080;
          uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
        uVar4 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar5 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar2;
        uVar4 = param_1;
        FUN_10527571c(param_1,lRam00000001136b96c0 + uVar7 * 0x20);
        if ((uVar4 & 1) != 0) goto LAB_105275f98;
      }
      if ((uVar9 & ~uVar9 << 6 & 0x8080808080808080) != 0) break;
      lVar8 = lVar8 + 8;
      uVar5 = lVar8 + uVar5;
    }
    uVar7 = uVar3;
    FUN_105275fe8();
    lVar8 = lRam00000001136b96c0 + uVar7 * 0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar8,param_1);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    bVar1 = (byte)uVar3 & 0x7f;
    *(byte *)(lRam00000001136b96b8 + uVar7) = bVar1;
    *(byte *)(lRam00000001136b96b8 + (uRam00000001136b96d0 & uVar7 - 8) + (uRam00000001136b96d0 & 7)
             + 1) = bVar1;
LAB_105275f98:
    lVar8 = lRam00000001136b96c0 + uVar7 * 0x20;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
  }
  return;
}



/* Entry: 105275fe8; end: 10527609f;  */

void FUN_105275fe8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1;
  FUN_1052760a0();
  if (lRam00000001136b96e0 != 0) goto LAB_10054b1c0;
  if (*(char *)(lRam00000001136b96b8 + lVar1) == -2) {
    lRam00000001136b96e0 = 0;
    goto LAB_10054b1c0;
  }
  if (uRam00000001136b96d0 == 0) {
    uVar2 = 1;
LAB_105276080:
    FUN_1052760f0(uVar2);
  }
  else {
    if (uRam00000001136b96d0 - (uRam00000001136b96d0 >> 3) >> 1 < uRam00000001136b96c8) {
      uVar2 = uRam00000001136b96d0 << 1 | 1;
      goto LAB_105276080;
    }
    FUN_105276200();
  }
  FUN_1052760a0();
  lVar1 = param_1;
LAB_10054b1c0:
  uRam00000001136b96c8 = uRam00000001136b96c8 + 1;
  lRam00000001136b96e0 =
       lRam00000001136b96e0 - (ulong)(*(char *)(lRam00000001136b96b8 + lVar1) == -0x80);
  return;
}



/* Entry: 1052760a0; end: 1052760ef;  */

ulong FUN_1052760a0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1 = param_1 >> 7;
  while( true ) {
    param_1 = param_1 & uRam00000001136b96d0;
    uVar1 = *(ulong *)(lRam00000001136b96b8 + param_1) &
            ~*(ulong *)(lRam00000001136b96b8 + param_1) << 7 & 0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_1 = lVar2 + param_1;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_1 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uRam00000001136b96d0;
}



/* Entry: 1052760f0; end: 1052761ff;  */

void FUN_1052760f0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = uRam00000001136b96d0;
  lVar5 = lRam00000001136b96c0;
  lVar1 = lRam00000001136b96b8;
  lVar6 = (param_1 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar6 + param_1 * 0x20;
  __Znwm();
  lRam00000001136b96c0 = lVar3 + lVar6;
  lRam00000001136b96b8 = lVar3;
  _memset();
  lVar6 = 0;
  *(undefined1 *)(lVar3 + param_1) = 0xff;
  lRam00000001136b96e0 = 6;
  if (param_1 != 7) {
    lRam00000001136b96e0 = param_1 - (param_1 >> 3);
  }
  lRam00000001136b96e0 = lRam00000001136b96e0 - lRam00000001136b96c8;
  uRam00000001136b96d0 = param_1;
  for (; lVar2 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar3 = lVar5;
      FUN_1052763c8();
      lVar4 = lVar3;
      FUN_1052760a0();
      *(byte *)(lRam00000001136b96b8 + lVar4) = (byte)lVar3 & 0x7f;
      func_0x00010527bc80();
      FUN_1052763f0(lRam00000001136b96c0 + lVar4 * 0x20,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 105276200; end: 1052763c7;  */

void FUN_105276200(void)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  func_0x00010527ba84();
  uStack_68 = extraout_x8;
  func_0x000104bda340(lRam00000001136b96b8,uRam00000001136b96d0);
  for (uVar8 = 0; uVar8 != uRam00000001136b96d0; uVar8 = uVar8 + 1) {
    if (*(char *)(lRam00000001136b96b8 + uVar8) == -2) {
      uVar5 = lRam00000001136b96c0 + uVar8 * 0x20;
      FUN_1052763c8();
      uVar6 = uVar5;
      FUN_1052760a0();
      uVar7 = uRam00000001136b96d0 & uVar5 >> 7;
      if (((uVar6 - uVar7 ^ uVar8 - uVar7) & uRam00000001136b96d0) < 8) {
        *(byte *)(lRam00000001136b96b8 + uVar8) = (byte)uVar5 & 0x7f;
        func_0x00010527bc80();
      }
      else {
        cVar2 = *(char *)(lRam00000001136b96b8 + uVar6);
        bVar3 = (byte)uVar5 & 0x7f;
        *(byte *)(lRam00000001136b96b8 + uVar6) = bVar3;
        *(byte *)(lRam00000001136b96b8 + (uRam00000001136b96d0 & 7) +
                  (uRam00000001136b96d0 & uVar6 - 8) + 1) = bVar3;
        lVar1 = lRam00000001136b96c0 + uVar8 * 0x20;
        if (cVar2 == -0x80) {
          FUN_1052763f0(lRam00000001136b96c0 + uVar6 * 0x20,lVar1);
          *(undefined1 *)(lRam00000001136b96b8 + uVar8) = 0x80;
          *(undefined1 *)
           (lRam00000001136b96b8 + (uRam00000001136b96d0 & uVar8 - 8) + (uRam00000001136b96d0 & 7) +
           1) = 0x80;
        }
        else {
          FUN_1052763f0(auStack_88,lVar1);
          FUN_1052763f0(lRam00000001136b96c0 + uVar8 * 0x20,lRam00000001136b96c0 + uVar6 * 0x20);
          FUN_1052763f0(lRam00000001136b96c0 + uVar6 * 0x20,auStack_88);
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  bVar4 = uVar8 == 7;
  lRam00000001136b96e0 = 6;
  if (!bVar4) {
    lRam00000001136b96e0 = uVar8 - (uVar8 >> 3);
  }
  lRam00000001136b96e0 = lRam00000001136b96e0 - lRam00000001136b96c8;
  func_0x00010527ba10(uStack_68);
  if (bVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010527c040();
  func_0x0001001030f4();
  func_0x00010527c13c();
  return;
}



/* Entry: 1052763c8; end: 1052763ef;  */

void FUN_1052763c8(void)

{
  func_0x00010527c040();
  func_0x0001001030f4();
  func_0x00010527c13c();
  return;
}



/* Entry: 1052763f0; end: 105276417;  */

void FUN_1052763f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2);
  return;
}



/* Entry: 105276418; end: 10527643f;  */

long FUN_105276418(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105276440; end: 10527644b;  */

void FUN_105276440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108731f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527644c; end: 10527654f;  */

undefined1 * FUN_10527644c(void)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w12;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  undefined8 uStack_1b0;
  long alStack_1a8 [5];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_f8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x00010527bef8();
  func_0x00010527ba24();
  plVar6 = (long *)0x0;
  puVar4 = unaff_x21;
  uStack_38 = extraout_x8;
  FUN_105276790(auStack_68);
  func_0x00010527bf3c();
  func_0x00010527bfb8();
  func_0x00010527bca8();
  func_0x00010527bd0c();
  func_0x00010527bf4c();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (unaff_x21 != (undefined8 *)0x0) {
    do {
      func_0x00010527c1d4();
    } while (extraout_w10 != 0);
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010527bb40();
    } while (extraout_w12 != 0);
  }
  func_0x00010527c264();
  func_0x00010527bfd0();
  func_0x00010527ba64(uStack_60);
  FUN_105276770(auStack_a0);
  func_0x00010527bad8();
  puVar2 = auStack_88;
  FUN_105276cbc();
  func_0x00010527ba10(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010527ba64(uStack_60);
  FUN_105276770(auStack_a0);
  puVar2 = auStack_88;
  FUN_105276cbc();
  func_0x00010527bb70();
  puVar5 = &uStack_1b0;
  puVar3 = puVar2;
  func_0x00010527ba84();
  uStack_f8 = extraout_x8_00;
  func_0x00010b8c2a68();
  if (((puVar3 == (undefined1 *)0x0) || (*(long *)(puVar3 + 0x118) == 0)) ||
     (*(long *)(*(long *)(puVar3 + 0x118) + 0x148) == 0)) {
    uVar7 = 0;
  }
  else {
    func_0x00010b8f4ba0(&pcStack_158);
    if (pcStack_158 == (code *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(pcStack_158 + 0x30);
    }
    FUN_1052768f0(&pcStack_158);
  }
  uStack_1b0 = *puVar4;
  (**(code **)(puVar4[1] + 0x10))(alStack_1a8,puVar4 + 1);
  lStack_180 = 0;
  if (*plVar6 != 0) {
    do {
      func_0x00010527bba8();
      lStack_180 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  lStack_178 = 0;
  if (*in_x3 != 0) {
    do {
      func_0x00010527bba8();
      lStack_178 = extraout_x8_02;
    } while (extraout_w11_00 != 0);
  }
  uStack_170 = uVar7;
  if (puVar2 == (undefined1 *)0x0) {
    puStack_168 = (undefined1 *)0x0;
    lStack_160 = 0;
  }
  else {
    puStack_168 = puVar2;
    if (*(long *)(puVar2 + 8) == 0) {
      lStack_160 = *(long *)(puVar2 + 0x10);
      if (lStack_160 != 0) {
        do {
          func_0x00010527bcd8();
        } while (extraout_w10_01 != 0);
      }
    }
    else {
      func_0x0001003ae9f0(&pcStack_158);
      if (pcStack_158 == (code *)0x0) {
        puStack_168 = (undefined1 *)0x0;
        lStack_160 = 0;
      }
      else {
        lStack_160 = (long)ppuStack_150;
        if (ppuStack_150 != (undefined **)0x0) {
          do {
            func_0x00010527bcd8();
          } while (extraout_w10_00 != 0);
        }
      }
      func_0x0001003a90c4(&pcStack_158);
    }
  }
  pcStack_158 = FUN_105276920;
  ppuStack_150 = &PTR_FUN_110873258;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_1b0;
  (**(code **)(alStack_1a8[0] + 0x10))(puVar4 + 1,alStack_1a8);
  uVar7 = 0;
  if (lStack_180 != 0) {
    do {
      func_0x00010527bba8();
      uVar7 = extraout_x8_03;
    } while (extraout_w11_01 != 0);
  }
  puVar4[6] = uVar7;
  uVar7 = 0;
  if (lStack_178 != 0) {
    do {
      func_0x00010527bba8();
      uVar7 = extraout_x8_04;
    } while (extraout_w11_02 != 0);
  }
  puVar4[7] = uVar7;
  puVar4[9] = puStack_168;
  puVar4[8] = uStack_170;
  puVar4[10] = lStack_160;
  puStack_168 = (undefined1 *)0x0;
  lStack_160 = 0;
  puStack_148 = puVar4;
  (**(code **)(*(long *)(puVar2 + 0x18) + 0x10))(puVar2 + 0x18,&pcStack_158);
  func_0x00010527bf84();
  FUN_105276bf8();
  func_0x00010527ba10(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527bf84();
    FUN_105276bf8(&uStack_1b0);
    func_0x00010527bb70();
    func_0x00010527bce8();
    FUN_105275ccc();
    func_0x00010007e5d0(puVar5);
    func_0x000104bd4e64();
    return (undefined1 *)puVar5;
  }
  return (undefined1 *)puVar5;
}



/* Entry: 105276550; end: 10527676f;  */

undefined8 * FUN_105276550(long param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 uVar4;
  undefined8 uStack_110;
  long alStack_108 [5];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_58;
  
  puVar3 = &uStack_110;
  lVar1 = param_1;
  func_0x00010527ba84();
  uStack_58 = extraout_x8;
  func_0x00010b8c2a68();
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x118) == 0)) ||
     (*(long *)(*(long *)(lVar1 + 0x118) + 0x148) == 0)) {
    uVar4 = 0;
  }
  else {
    func_0x00010b8f4ba0(&pcStack_b8);
    if (pcStack_b8 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(pcStack_b8 + 0x30);
    }
    FUN_1052768f0(&pcStack_b8);
  }
  uStack_110 = *param_2;
  (**(code **)(param_2[1] + 0x10))(alStack_108,param_2 + 1);
  lStack_e0 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010527bba8();
      lStack_e0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_d8 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010527bba8();
      lStack_d8 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  uStack_d0 = uVar4;
  if (param_1 == 0) {
    lStack_c8 = 0;
    lStack_c0 = 0;
  }
  else {
    lStack_c8 = param_1;
    if (*(long *)(param_1 + 8) == 0) {
      lStack_c0 = *(long *)(param_1 + 0x10);
      if (lStack_c0 != 0) {
        do {
          func_0x00010527bcd8();
        } while (extraout_w10_00 != 0);
      }
    }
    else {
      func_0x0001003ae9f0(&pcStack_b8);
      if (pcStack_b8 == (code *)0x0) {
        lStack_c8 = 0;
        lStack_c0 = 0;
      }
      else {
        lStack_c0 = (long)ppuStack_b0;
        if (ppuStack_b0 != (undefined **)0x0) {
          do {
            func_0x00010527bcd8();
          } while (extraout_w10 != 0);
        }
      }
      func_0x0001003a90c4(&pcStack_b8);
    }
  }
  pcStack_b8 = FUN_105276920;
  ppuStack_b0 = &PTR_FUN_110873258;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  *puVar2 = uStack_110;
  (**(code **)(alStack_108[0] + 0x10))(puVar2 + 1,alStack_108);
  uVar4 = 0;
  if (lStack_e0 != 0) {
    do {
      func_0x00010527bba8();
      uVar4 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  puVar2[6] = uVar4;
  uVar4 = 0;
  if (lStack_d8 != 0) {
    do {
      func_0x00010527bba8();
      uVar4 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  puVar2[7] = uVar4;
  puVar2[9] = lStack_c8;
  puVar2[8] = uStack_d0;
  puVar2[10] = lStack_c0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  puStack_a8 = puVar2;
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(param_1 + 0x18,&pcStack_b8);
  func_0x00010527bf84();
  FUN_105276bf8();
  func_0x00010527ba10(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010527bf84();
    FUN_105276bf8(&uStack_110);
    func_0x00010527bb70();
    func_0x00010527bce8();
    FUN_105275ccc();
    func_0x00010007e5d0(puVar3);
    func_0x000104bd4e64();
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar3;
}



/* Entry: 105276770; end: 10527678f;  */

undefined8 FUN_105276770(void)

{
  undefined8 unaff_x19;
  
  func_0x00010527bce8();
  FUN_105275ccc();
  func_0x00010007e5d0();
  func_0x000104bd4e64();
  return unaff_x19;
}



/* Entry: 105276790; end: 105276833;  */

void FUN_105276790(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bac0();
  func_0x00010527c1e4();
  func_0x00010b9aabd0();
  func_0x00010527c258();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c28c();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527c240();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527bc2c();
  func_0x00010527ba70();
  func_0x00010527bea4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052767fc);
  (*pcVar1)();
}



/* Entry: 105276834; end: 1052768d7;  */

void FUN_105276834(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bac0();
  func_0x00010527c1e4();
  func_0x00010b9aab78();
  func_0x00010527c258();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c28c();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527c240();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527bc2c();
  func_0x00010527ba70();
  func_0x00010527bea4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052768a0);
  (*pcVar1)();
}



/* Entry: 1052768d8; end: 1052768ef;  */

void FUN_1052768d8(void)

{
  __ZNSt11logic_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  func_0x00010527c204();
  return;
}



/* Entry: 1052768f0; end: 105276913;  */

void FUN_1052768f0(void)

{
  func_0x00010045db50();
  FUN_105276914();
  return;
}



/* Entry: 105276914; end: 10527691f;  */

void FUN_105276914(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 105276920; end: 1052769d7;  */

void FUN_105276920(long param_1,undefined ***param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined ***pppuVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar6;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined ***pppuVar7;
  undefined ***unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_48;
  undefined8 uStack_28;
  undefined1 *puVar3;
  
  func_0x00010527ba84();
  lStack_68 = *(long *)(param_1 + 0x10);
  ppuStack_78 = (undefined **)(lStack_68 + 0x48);
  lStack_70 = lStack_68 + 0x38;
  lStack_60 = lStack_68 + 0x30;
  uStack_28 = extraout_x8;
  if (*(code **)(lStack_68 + 0x40) == (code *)0x0) {
    pppuVar7 = &ppuStack_78;
    FUN_1052769d8();
  }
  else {
    pcStack_58 = FUN_105276b8c;
    ppuStack_50 = &PTR_DAT_110873238;
    pppuStack_48 = &ppuStack_78;
    (**(code **)(lStack_68 + 0x40))(&pcStack_58);
    pppuVar7 = &ppuStack_50;
    (*(code *)*ppuStack_50)();
  }
  func_0x00010527ba10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar8 = FUN_1052769d8;
  pppuVar4 = pppuVar7;
  func_0x00010527bb70();
  puVar1 = auStack_80;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar1;
    *(undefined ****)(puVar3 + -0x20) = unaff_x20;
    *(undefined ****)(puVar3 + -0x18) = pppuVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(code **)(puVar3 + -8) = pcVar8;
    unaff_x20 = pppuVar4;
    func_0x00010527ba84();
    *(undefined8 *)(puVar3 + -0x28) = extraout_x8_00;
    puVar6 = **unaff_x20;
    if ((char)puVar6[0xf7] < '\0') {
      if (*(long *)(puVar6 + 0xe8) != 0) goto LAB_105276a08;
LAB_105276a88:
      (*(code *)*pppuVar4[2])(puVar3 + -0x70);
      pppuVar7 = (undefined ***)*pppuVar4[3];
      if (pppuVar7 != (undefined ***)0x0) {
        func_0x00010b9a8f04(puVar3 + -0x88,puVar3 + -0x70);
        param_2 = (undefined ***)(puVar3 + -0x88);
        func_0x00010527bb9c(puVar3 + -0xa0);
        func_0x00010527c06c();
        func_0x00010b9a8d98(puVar3 + -0x88);
      }
      unaff_x20 = (undefined ***)(puVar3 + -0x70);
      func_0x00010b9a8d98();
    }
    else {
      if (puVar6[0xf7] == '\0') goto LAB_105276a88;
LAB_105276a08:
      pppuVar7 = (undefined ***)*pppuVar4[1];
      if (pppuVar7 != (undefined ***)0x0) {
        *(undefined8 *)(puVar3 + -0x88) = 0;
        *(undefined8 *)(puVar3 + -0x80) = 0;
        *(undefined8 *)(puVar3 + -0x78) = 0;
        uVar9 = *(undefined8 *)(puVar6 + 0xe0);
        *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar6 + 0xe8);
        *(undefined8 *)(puVar3 + -0x70) = uVar9;
        *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar6 + 0xf0);
        *(undefined8 *)(puVar6 + 0xe0) = 0;
        *(undefined8 *)(puVar6 + 0xe8) = 0;
        *(undefined8 *)(puVar6 + 0xf0) = 0;
        func_0x000100066230(puVar6 + 0xe0,puVar3 + -0x88);
        func_0x00010527c2dc();
        uVar9 = extraout_x11;
        puVar1 = extraout_x10;
        if (in_NG == in_OV) {
          uVar9 = extraout_x8_01;
          puVar1 = puVar3 + -0x70;
        }
        func_0x00010b9a8dd4(puVar3 + -0x50,puVar1,uVar9);
        param_2 = (undefined ***)(puVar3 + -0x50);
        func_0x00010527bb9c(puVar3 + -0x40);
        func_0x000104bda914(puVar3 + -0x40);
        func_0x00010527c074();
        func_0x00010527bd4c();
        unaff_x20 = (undefined ***)(puVar3 + -0x88);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    while( true ) {
      func_0x00010527ba10(*(undefined8 *)(puVar3 + -0x28));
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar5 = (int)param_2;
      in_OV = SBORROW4(iVar5,1);
      in_NG = iVar5 + -1 < 0;
      in_ZR = iVar5 == 1;
      if (!(bool)in_ZR) break;
      ___cxa_begin_catch();
      puVar6 = *pppuVar7[1];
      if (puVar6 == (undefined *)0x0) {
        func_0x00010527bb78();
        pppuVar4 = (undefined ***)(**pppuVar7 + 0xe0);
        param_2 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
        unaff_x20 = pppuVar4;
      }
      else {
        func_0x00010527bb78();
        func_0x00010b9a8e9c(puVar3 + -0x70,unaff_x20);
        param_2 = (undefined ***)(puVar3 + -0x70);
        FUN_105275910(puVar3 + -0xb8,puVar6,param_2,1);
        func_0x000104bda914(puVar3 + -0xb8);
        unaff_x20 = (undefined ***)(puVar3 + -0x70);
        func_0x00010b9a8d98();
      }
      ___cxa_end_catch();
    }
    pcVar8 = FUN_105276b8c;
    pppuVar4 = unaff_x20;
    func_0x00010527bc78();
    pppuVar4 = (undefined ***)pppuVar4[2];
    puVar1 = puVar3 + -0xc0;
    puVar2 = puVar3;
  } while( true );
}



/* Entry: 1052769d8; end: 105276b8b;  */

void FUN_1052769d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  int iVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  do {
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = param_1;
    func_0x00010527ba84();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    lVar4 = *(long *)*unaff_x20;
    if (*(char *)(lVar4 + 0xf7) < '\0') {
      if (*(long *)(lVar4 + 0xe8) != 0) goto LAB_105276a08;
LAB_105276a88:
      (**(code **)param_1[2])((undefined1 *)((long)register0x00000008 + -0x70));
      unaff_x19 = *(undefined8 **)param_1[3];
      if (unaff_x19 != (undefined8 *)0x0) {
        func_0x00010b9a8f04((undefined1 *)((long)register0x00000008 + -0x88),
                            (undefined1 *)((long)register0x00000008 + -0x70));
        param_2 = (undefined8 *)((long)register0x00000008 + -0x88);
        func_0x00010527bb9c((undefined1 *)((long)register0x00000008 + -0xa0));
        func_0x00010527c06c();
        func_0x00010b9a8d98((undefined1 *)((long)register0x00000008 + -0x88));
      }
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x70);
      func_0x00010b9a8d98();
    }
    else {
      if (*(char *)(lVar4 + 0xf7) == '\0') goto LAB_105276a88;
LAB_105276a08:
      unaff_x19 = *(undefined8 **)param_1[1];
      if (unaff_x19 != (undefined8 *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        uVar5 = *(undefined8 *)(lVar4 + 0xe0);
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar4 + 0xe8);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x60) = *(undefined8 *)(lVar4 + 0xf0);
        *(undefined8 *)(lVar4 + 0xe0) = 0;
        *(undefined8 *)(lVar4 + 0xe8) = 0;
        *(undefined8 *)(lVar4 + 0xf0) = 0;
        func_0x000100066230(lVar4 + 0xe0,(undefined1 *)((long)register0x00000008 + -0x88));
        func_0x00010527c2dc();
        uVar5 = extraout_x11;
        puVar1 = extraout_x10;
        if (in_NG == in_OV) {
          uVar5 = extraout_x8_00;
          puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
        }
        func_0x00010b9a8dd4((undefined1 *)((long)register0x00000008 + -0x50),puVar1,uVar5);
        param_2 = (undefined8 *)((long)register0x00000008 + -0x50);
        func_0x00010527bb9c((undefined1 *)((long)register0x00000008 + -0x40));
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0x40));
        func_0x00010527c074();
        func_0x00010527bd4c();
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x88);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    while( true ) {
      func_0x00010527ba10(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar3 = (int)param_2;
      in_OV = SBORROW4(iVar3,1);
      in_NG = iVar3 + -1 < 0;
      in_ZR = iVar3 == 1;
      if (!(bool)in_ZR) break;
      ___cxa_begin_catch();
      lVar4 = *(long *)unaff_x19[1];
      if (lVar4 == 0) {
        func_0x00010527bb78();
        puVar2 = (undefined8 *)(*(long *)*unaff_x19 + 0xe0);
        param_2 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
        unaff_x20 = puVar2;
      }
      else {
        func_0x00010527bb78();
        func_0x00010b9a8e9c((undefined1 *)((long)register0x00000008 + -0x70),unaff_x20);
        param_2 = (undefined8 *)((long)register0x00000008 + -0x70);
        FUN_105275910((undefined1 *)((long)register0x00000008 + -0xb8),lVar4,param_2,1);
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0xb8));
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x70);
        func_0x00010b9a8d98();
      }
      ___cxa_end_catch();
    }
    unaff_x30 = FUN_105276b8c;
    puVar2 = unaff_x20;
    func_0x00010527bc78();
    param_1 = (undefined8 *)puVar2[2];
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 105276b8c; end: 105276bbf;  */

void FUN_105276b8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  int iVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  do {
    puVar2 = (undefined8 *)param_1[2];
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = puVar2;
    func_0x00010527ba84();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    lVar4 = *(long *)*unaff_x20;
    if (*(char *)(lVar4 + 0xf7) < '\0') {
      if (*(long *)(lVar4 + 0xe8) != 0) goto LAB_105276a08;
LAB_105276a88:
      (**(code **)puVar2[2])((undefined1 *)((long)register0x00000008 + -0x70));
      unaff_x19 = *(undefined8 **)puVar2[3];
      if (unaff_x19 != (undefined8 *)0x0) {
        func_0x00010b9a8f04((undefined1 *)((long)register0x00000008 + -0x88),
                            (undefined1 *)((long)register0x00000008 + -0x70));
        param_2 = (undefined8 *)((long)register0x00000008 + -0x88);
        func_0x00010527bb9c((undefined1 *)((long)register0x00000008 + -0xa0));
        func_0x00010527c06c();
        func_0x00010b9a8d98((undefined1 *)((long)register0x00000008 + -0x88));
      }
      unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x70);
      func_0x00010b9a8d98();
    }
    else {
      if (*(char *)(lVar4 + 0xf7) == '\0') goto LAB_105276a88;
LAB_105276a08:
      unaff_x19 = *(undefined8 **)puVar2[1];
      if (unaff_x19 != (undefined8 *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        uVar5 = *(undefined8 *)(lVar4 + 0xe0);
        *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar4 + 0xe8);
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x60) = *(undefined8 *)(lVar4 + 0xf0);
        *(undefined8 *)(lVar4 + 0xe0) = 0;
        *(undefined8 *)(lVar4 + 0xe8) = 0;
        *(undefined8 *)(lVar4 + 0xf0) = 0;
        func_0x000100066230(lVar4 + 0xe0,(undefined1 *)((long)register0x00000008 + -0x88));
        func_0x00010527c2dc();
        uVar5 = extraout_x11;
        puVar1 = extraout_x10;
        if (in_NG == in_OV) {
          uVar5 = extraout_x8_00;
          puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
        }
        func_0x00010b9a8dd4((undefined1 *)((long)register0x00000008 + -0x50),puVar1,uVar5);
        param_2 = (undefined8 *)((long)register0x00000008 + -0x50);
        func_0x00010527bb9c((undefined1 *)((long)register0x00000008 + -0x40));
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0x40));
        func_0x00010527c074();
        func_0x00010527bd4c();
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x88);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    while( true ) {
      func_0x00010527ba10(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      iVar3 = (int)param_2;
      in_OV = SBORROW4(iVar3,1);
      in_NG = iVar3 + -1 < 0;
      in_ZR = iVar3 == 1;
      if (!(bool)in_ZR) break;
      ___cxa_begin_catch();
      lVar4 = *(long *)unaff_x19[1];
      if (lVar4 == 0) {
        func_0x00010527bb78();
        puVar2 = (undefined8 *)(*(long *)*unaff_x19 + 0xe0);
        param_2 = unaff_x20;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
        unaff_x20 = puVar2;
      }
      else {
        func_0x00010527bb78();
        func_0x00010b9a8e9c((undefined1 *)((long)register0x00000008 + -0x70),unaff_x20);
        param_2 = (undefined8 *)((long)register0x00000008 + -0x70);
        FUN_105275910((undefined1 *)((long)register0x00000008 + -0xb8),lVar4,param_2,1);
        func_0x000104bda914((undefined1 *)((long)register0x00000008 + -0xb8));
        unaff_x20 = (undefined8 *)((long)register0x00000008 + -0x70);
        func_0x00010b9a8d98();
      }
      ___cxa_end_catch();
    }
    unaff_x30 = FUN_105276b8c;
    param_1 = unaff_x20;
    func_0x00010527bc78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



/* Entry: 105276bc0; end: 105276bdf;  */

void FUN_105276bc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105276bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105276be0; end: 105276bf7;  */

void FUN_105276be0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105276bf8; end: 105276c3f;  */

long FUN_105276bf8(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001000df548();
  }
  func_0x000104bda388(param_1 + 0x38);
  func_0x000104bda388(param_1 + 0x30);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 105276c40; end: 105276ca7;  */

void FUN_105276c40(void)

{
  undefined1 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [56];
  
  func_0x00010527bd34();
  FUN_1052736b0(auStack_58,unaff_x20 + 0x10);
  puVar1 = auStack_58;
  func_0x00010054b1c8(puVar1,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0xb8));
  *(undefined2 *)(unaff_x19 + 8) = 7;
  *(bool *)unaff_x19 = (int)puVar1 != -1;
  func_0x00010054d304(auStack_58);
  return;
}



/* Entry: 105276ca8; end: 105276cbb;  */

undefined8 FUN_105276ca8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010527bce8(param_1 + 8);
  FUN_105275ccc();
  func_0x00010007e5d0();
  func_0x000104bd4e64();
  return unaff_x19;
}



/* Entry: 105276cbc; end: 105276cdb;  */

undefined8 FUN_105276cbc(void)

{
  undefined8 unaff_x19;
  
  func_0x00010527be74();
  func_0x00010527c120();
  func_0x00010007e5d0();
  func_0x000104bd4e64();
  return unaff_x19;
}



/* Entry: 105276cdc; end: 105276d87;  */

void FUN_105276cdc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010045db50();
  if (param_1 != 0) {
    func_0x0001003a916c();
  }
  return;
}



/* Entry: 105276d88; end: 105276e93;  */

/* WARNING: Possible PIC construction at 0x000105276dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105276dc8) */
/* WARNING: Removing unreachable block (ram,0x000105276dd4) */
/* WARNING: Removing unreachable block (ram,0x000105276dd8) */
/* WARNING: Removing unreachable block (ram,0x000105276de0) */
/* WARNING: Removing unreachable block (ram,0x000105276de8) */
/* WARNING: Removing unreachable block (ram,0x000105276dec) */
/* WARNING: Removing unreachable block (ram,0x000105276df4) */
/* WARNING: Removing unreachable block (ram,0x000105276dfc) */
/* WARNING: Removing unreachable block (ram,0x000105276e00) */
/* WARNING: Removing unreachable block (ram,0x000105276e08) */
/* WARNING: Removing unreachable block (ram,0x000105276e50) */
/* WARNING: Removing unreachable block (ram,0x000105276e90) */
/* WARNING: Removing unreachable block (ram,0x00010527bebc) */
/* WARNING: Removing unreachable block (ram,0x000105276e48) */
/* WARNING: Removing unreachable block (ram,0x00010527bb30) */

void FUN_105276d88(void)

{
  undefined1 auStack_68 [56];
  
  func_0x00010527bef8();
  func_0x00010527ba24();
  func_0x00010527bbf0(auStack_68);
  func_0x00010527bf3c();
  func_0x00010527bfb8();
  func_0x00010527bca8();
  func_0x00010527bd0c();
  func_0x00010007e5d0(auStack_68);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 105276e94; end: 105276eb3;  */

undefined8 FUN_105276e94(void)

{
  undefined8 unaff_x19;
  
  func_0x00010527bce8();
  FUN_105275ccc();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 105276eb4; end: 105276f57;  */

void FUN_105276eb4(void)

{
  code *pcVar1;
  uint extraout_w8;
  
  func_0x00010527bac0();
  func_0x00010527c1e4();
  func_0x00010b9aaac4();
  func_0x00010527c258();
  if ((extraout_w8 & 1) != 0) {
    return;
  }
  func_0x00010527bbdc();
  func_0x00010527c28c();
  func_0x00010527bdac();
  func_0x00010527bb18();
  func_0x00010527bd74();
  func_0x00010527c240();
  func_0x00010527bb00();
  func_0x00010527ba94();
  func_0x00010527bc2c();
  func_0x00010527ba70();
  func_0x00010527bea4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105276f20);
  (*pcVar1)();
}



/* Entry: 105276f58; end: 10527701b;  */

void FUN_105276f58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_78 [8];
  long alStack_70 [3];
  code *pcStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  undefined8 uStack_28;
  
  func_0x00010527ba24();
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = 0;
    puVar2 = &UNK_10f7d0ef0;
  }
  else {
    puVar2 = (undefined *)(lVar4 + 0x18);
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
  }
  pcStack_58 = FUN_105277094;
  ppuStack_50 = &PTR_FUN_1108732c8;
  plStack_48 = alStack_70;
  uStack_28 = extraout_x8;
  func_0x00010527c100(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),puVar2,uVar3,param_4,
                      &pcStack_58);
  func_0x00010527ba38();
  FUN_10527701c(auStack_78,alStack_70);
  func_0x000100b9dd30();
  func_0x00010b9a8f84();
  func_0x00010527c0d0();
  FUN_1052774cc();
  func_0x00010527ba10(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar1 = alStack_70;
  FUN_1052774cc();
  func_0x00010527bb70();
  func_0x00010b9abe10(extraout_x8_00,plVar1[1] - *plVar1 >> 4);
  lVar4 = *plVar1;
  lVar5 = plVar1[1];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    lVar6 = *extraout_x8_00;
    for (uVar8 = 0; uVar8 < (ulong)(lVar5 - lVar4 >> 4); uVar8 = uVar8 + 1) {
      func_0x00010b9a9020(lVar6 + 0x18 + lVar7,lVar4 + lVar7);
      lVar4 = *plVar1;
      lVar5 = plVar1[1];
      lVar7 = lVar7 + 0x10;
    }
  }
  return;
}



/* Entry: 10527701c; end: 105277093;  */

void FUN_10527701c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x00010b9abe10(param_1,param_2[1] - *param_2 >> 4);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar1 != lVar2) {
    lVar4 = 0;
    lVar3 = *param_1;
    for (uVar5 = 0; uVar5 < (ulong)(lVar2 - lVar1 >> 4); uVar5 = uVar5 + 1) {
      func_0x00010b9a9020(lVar3 + 0x18 + lVar4,lVar1 + lVar4);
      lVar1 = *param_2;
      lVar2 = param_2[1];
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}



/* Entry: 105277094; end: 105277227;  */

undefined8 FUN_105277094(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  puVar2 = param_1;
  func_0x000104bd4df4(&lStack_80);
  for (uVar8 = (ulong)((uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
      uVar8 = uVar8 - 1) {
    func_0x0001003a8364();
    uVar7 = *param_3;
    uVar3 = uVar7;
    _strlen(uVar7);
    func_0x0001003a8480(auStack_88,puVar2,uVar7,uVar3);
    pcVar1 = "null";
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    func_0x00010b9a8e9c(auStack_78,pcVar1);
    FUN_1052739d0(lStack_80 + 0x10,auStack_88);
    func_0x00010b9a9020();
    puVar2 = auStack_78;
    func_0x00010b9a8d98();
    func_0x00010527bbb8();
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  plVar5 = *(long **)(param_4 + 0x10);
  uVar8 = plVar5[1];
  if (uVar8 < (ulong)plVar5[2]) {
    func_0x00010b9a8f54(uVar8,&lStack_80);
    lVar6 = uVar8 + 0x10;
    plVar5[1] = lVar6;
  }
  else {
    plVar4 = plVar5;
    FUN_105277228(plVar5,((long)(uVar8 - *plVar5) >> 4) + 1);
    FUN_1052772ac(auStack_78,plVar4,plVar5[1] - *plVar5 >> 4,plVar5 + 2);
    func_0x00010b9a8f54(lStack_68,&lStack_80);
    lStack_68 = lStack_68 + 0x10;
    FUN_105277268(plVar5,auStack_78);
    lVar6 = plVar5[1];
    func_0x00010527744c(auStack_78);
  }
  plVar5[1] = lVar6;
  func_0x00010527bf64();
  return 0;
}



/* Entry: 105277228; end: 105277267;  */

long * FUN_105277228(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_1052772a0();
  func_0x00010054d294();
  plVar1 = param_1 + 2;
  FUN_105277328(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x000100b9de8c();
  return plVar1;
}



/* Entry: 105277268; end: 10527729f;  */

void FUN_105277268(long *param_1,long param_2)

{
  func_0x00010054d294();
  FUN_105277328(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000100b9de8c();
  return;
}



/* Entry: 1052772a0; end: 1052772ab;  */

void FUN_1052772a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010527bb84();
  func_0x000100b9dbcc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052772ec();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 1052772ac; end: 10527730b;  */

void FUN_1052772ac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100b9dbcc();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052772ec();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 10527730c; end: 105277327;  */

void FUN_10527730c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000100b9dd80();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010b9a8fa8(param_4,unaff_x22);
    param_4 = lStack_48 + 0x10;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_10527739c();
  FUN_1052773cc(auStack_70);
  return;
}



/* Entry: 105277328; end: 10527739b;  */

void FUN_105277328(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x000100b9dd80();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010b9a8fa8(in_x3,unaff_x22);
    in_x3 = lStack_38 + 0x10;
    lStack_38 = in_x3;
  }
  uStack_48 = 1;
  FUN_10527739c();
  FUN_1052773cc(auStack_60);
  return;
}



/* Entry: 10527739c; end: 1052773cb;  */

void FUN_10527739c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010b9a8d98();
  }
  return;
}



/* Entry: 1052773cc; end: 1052773fb;  */

long FUN_1052773cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1052773fc(param_1);
  }
  return param_1;
}



/* Entry: 1052773fc; end: 10527741b;  */

void FUN_1052773fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b9a8d98();
  }
  return;
}



/* Entry: 10527741c; end: 105277477;  */

void FUN_10527741c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x00010b9a8d98();
  }
  return;
}



/* Entry: 105277478; end: 10527747f;  */

void FUN_105277478(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b9a8d98();
  }
  return;
}



/* Entry: 105277480; end: 1052774b3;  */

void FUN_105277480(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054d294();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010b9a8d98();
  }
  return;
}


