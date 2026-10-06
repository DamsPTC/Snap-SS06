/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026a5ed0; end: 1026a5f5f;  */

undefined *
FUN_1026a5ed0(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1026a5e58(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1026a5f60; end: 1026a5f7b;  */

void FUN_1026a5f60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1026a5f7c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1026a5f7c; end: 1026a60cf;  */

undefined * FUN_1026a5f7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a60d0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112da2440;
    FUN_1026a5e58(0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8,0x112eb4830,&UNK_10daca7b8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1026a67d4(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026a60d0; end: 1026a626b;  */

ulong FUN_1026a60d0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a61a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a61a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103b3abc8(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103b3abc8(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f0b5b70);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a626c);
  (*pcVar2)();
}



/* Entry: 1026a626c; end: 1026a6427;  */

ulong FUN_1026a626c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a6350);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a6354);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1026a67d4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026a6428);
  (*pcVar2)();
}



/* Entry: 1026a6428; end: 1026a65a7;  */

ulong FUN_1026a6428(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a65a8);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a659c);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1026a67d4(0,0x112da2440,&PTR__OBJC_CLASS___CLLocation_1126b30c8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a65a0);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a65a4);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1026a626c(uVar7,param_3,&PTR__OBJC_CLASS___CLLocation_1126b30c8,0x112da2440);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1026a65a8; end: 1026a65b7;  */

void FUN_1026a65a8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x98) & 1) == 0) {
      puVar3 = &UNK_110535210;
      func_0x000107c613fc(&UNK_110535210,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1026a65b0;
      *(long *)(puVar3 + 0x18) = lVar2;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_78 = FUN_1026a65b8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_10103b938;
      puStack_80 = &UNK_110535228;
      ppuVar4 = &puStack_98;
      puStack_70 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_70;
      func_0x000107c6157c(lVar2);
      func_0x000107c61574(puVar3);
      pcStack_78 = FUN_1026a5784;
      puStack_70 = (undefined *)0x0;
      puStack_98 = puVar1;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_10103b93c;
      puStack_80 = &UNK_110535250;
      ppuVar5 = &puStack_98;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_70);
      func_0x000107c4c600(uVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(lVar2);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1026a65b8; end: 1026a65d7;  */

void FUN_1026a65b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026a65d8; end: 1026a661f;  */

void FUN_1026a65d8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a6844;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a5748,lVar1,lVar2);
  return;
}



/* Entry: 1026a6620; end: 1026a668f;  */

void FUN_1026a6620(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a6848;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026a6690; end: 1026a669f;  */

void FUN_1026a6690(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x98) & 1) == 0) {
      puVar2 = &UNK_1105352b0;
      func_0x000107c613fc(&UNK_1105352b0,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1026a6698;
      *(long *)(puVar2 + 0x18) = lVar1;
      pcStack_58 = FUN_1026a66a0;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_10006eb60;
      puStack_60 = &UNK_1105352c8;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_50;
      func_0x000107c6157c(lVar1);
      func_0x000107c61574(puVar2);
      func_0x000107c4c604(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1026a66a0; end: 1026a66bf;  */

void FUN_1026a66a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026a66c0; end: 1026a6743;  */

void FUN_1026a66c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a6708;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a51d0,lVar1,lVar2);
  return;
}



/* Entry: 1026a6744; end: 1026a67b3;  */

void FUN_1026a6744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a6850;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026a67b4; end: 1026a67cb;  */

void FUN_1026a67b4(void)

{
  FUN_1026a5788();
  return;
}



/* Entry: 1026a67cc; end: 1026a67d3;  */

void FUN_1026a67cc(void)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c448d0();
  if (iVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x98) & 1) == 0) {
        FUN_1026a2ce4(1);
      }
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 1026a67d4; end: 1026a6813;  */

void FUN_1026a67d4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1026a6814; end: 1026a6853;  */

void FUN_1026a6814(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026a6854; end: 1026a6cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a6854(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined *apuStack_a0 [3];
  undefined *apuStack_88 [3];
  
  lVar10 = _DAT_112eb4848;
  lVar20 = *(long *)(unaff_x20 + _DAT_112eb4848);
  plVar1 = (long *)(lVar20 + _DAT_112eb8120);
  puVar11 = (undefined *)*plVar1;
  lVar5 = plVar1[1];
  lVar18 = plVar1[2];
  lVar6 = plVar1[3];
  lVar9 = plVar1[4];
  if ((char)lVar9 == '\x01') {
    FUN_1026e4480(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar5);
    func_0x0001026e45b0(lVar18,lVar6,puVar11,lVar5);
    puVar14 = puVar11;
  }
  else {
    uVar22 = *(ulong *)(puVar11 + 0x10);
    if ((uVar22 == 1) &&
       ((uVar12 = *(ulong *)(puVar11 + 0x20),
        uVar12 == *(ulong *)(unaff_x20 + _DAT_112eb4850) &&
        *(ulong *)(puVar11 + 0x28) == ((ulong *)(unaff_x20 + _DAT_112eb4850))[1] ||
        (func_0x000107c605b8(), (uVar12 & 1) != 0)))) {
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb4840);
      func_0x000107c61428(puVar2,apuStack_88,0,0);
      pcVar23 = (code *)*puVar2;
      if (pcVar23 != (code *)0x0) {
        uVar19 = puVar2[1];
        uVar24 = *(undefined8 *)(lVar20 + _DAT_112eb8130);
        FUN_1026e876c(0);
        func_0x000107c610f8();
        func_0x0001026a7ab0(puVar11,lVar5,lVar18,lVar6,(char)lVar9);
        func_0x000100cffb80(pcVar23,uVar19);
        func_0x000107c61434(lVar6);
        func_0x000107c61174(uVar24);
        func_0x000107c61434(lVar18);
        uVar17 = 0x61;
        func_0x0001026e8540(0x61,uVar24,lVar18,lVar6);
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar18);
        func_0x000107c6142c(puVar11);
        (*pcVar23)(uVar17,0);
        func_0x000107c61170(uVar17);
        func_0x000100cffb70(pcVar23,uVar19);
      }
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb4838);
      func_0x000107c61428(puVar2,apuStack_a0,0,0);
      pcVar23 = (code *)*puVar2;
      if (pcVar23 == (code *)0x0) {
        return;
      }
      uVar17 = puVar2[1];
      func_0x000107c6157c(uVar17);
      (*pcVar23)();
      func_0x000100cffb70(pcVar23,uVar17);
      return;
    }
    uVar12 = *(ulong *)(unaff_x20 + _DAT_112eb4850);
    uVar7 = ((ulong *)(unaff_x20 + _DAT_112eb4850))[1];
    func_0x000107c61434(puVar11);
    func_0x000107c61434(lVar18);
    func_0x000107c61434(lVar6);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar22 != 0) {
      uVar15 = 0;
      do {
        puVar16 = (ulong *)(puVar11 + uVar15 * 0x10 + 0x28);
        uVar21 = uVar15;
        while( true ) {
          if (*(ulong *)(puVar11 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1026a6cfc);
            (*pcVar23)();
          }
          uVar3 = puVar16[-1];
          uVar8 = *puVar16;
          if ((uVar3 != uVar12 || uVar8 != uVar7) &&
             (uVar15 = uVar3, func_0x000107c605b8(uVar3,uVar8,uVar12,uVar7,0), (uVar15 & 1) == 0))
          break;
          uVar21 = uVar21 + 1;
          puVar16 = puVar16 + 2;
          if (uVar22 == uVar21) goto LAB_1026a6b94;
        }
        func_0x000107c61434(uVar8);
        puVar13 = puVar14;
        func_0x000107c61558();
        apuStack_88[0] = puVar14;
        if (((ulong)puVar13 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar14 + 0x10) + 1,1);
        }
        uVar4 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar4) {
          func_0x000100403514(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar4 + 1,1);
        }
        uVar15 = uVar21 + 1;
        *(ulong *)(apuStack_88[0] + 0x10) = uVar4 + 1;
        *(ulong *)(apuStack_88[0] + uVar4 * 0x10 + 0x20) = uVar3;
        *(ulong *)(apuStack_88[0] + uVar4 * 0x10 + 0x28) = uVar8;
        puVar14 = apuStack_88[0];
      } while (uVar22 - 1 != uVar21);
    }
LAB_1026a6b94:
    FUN_1026e42dc(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar18);
    func_0x000107c61434(lVar6);
    FUN_1026e4220(puVar14,(uint)lVar5 & 1,lVar18,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar18);
    func_0x000107c6142c(puVar11);
  }
  uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + lVar10) + _DAT_112eb8128);
  uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + lVar10) + _DAT_112eb8130);
  FUN_1026e4f9c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar19);
  func_0x000107c615f0(puVar14);
  func_0x000107c61174();
  puVar13 = puVar14;
  FUN_1026e4d34(puVar14,uVar17,uVar19);
  apuStack_a0[0] = puVar13;
  func_0x00010008a7c8(apuStack_88,apuStack_a0);
  puVar11 = apuStack_88[0];
  func_0x000100083b20(apuStack_a0);
  func_0x000107c61574(puVar11);
  lVar18 = _DAT_112eb4878;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112eb4878);
  *(undefined **)(unaff_x20 + _DAT_112eb4878) = apuStack_a0[0];
  func_0x000107c615e8(uVar17);
  lVar18 = *(long *)(unaff_x20 + lVar18);
  if (lVar18 != 0) {
    func_0x000107c615f0(lVar18);
    func_0x000107c4eefc();
    func_0x000107c615e8(lVar18);
  }
  func_0x000107c61170(puVar13);
  func_0x000107c615e8(puVar14);
  return;
}



/* Entry: 1026a6cfc; end: 1026a7317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1026a6cfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  undefined *puVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong *puVar23;
  long unaff_x20;
  ulong uVar24;
  char cVar25;
  long lVar26;
  ulong uVar27;
  
  uVar17 = 0;
  FUN_1026e772c(0);
  lVar18 = param_1;
  func_0x000107c61480(param_1,uVar17);
  lVar15 = _DAT_112eb4848;
  if (lVar18 == 0) goto LAB_1026a72e8;
  puVar23 = (ulong *)(lVar18 + _DAT_112eb8120);
  uVar1 = *puVar23;
  uVar7 = puVar23[1];
  uVar2 = puVar23[2];
  uVar8 = puVar23[3];
  cVar25 = (char)puVar23[4];
  puVar23 = (ulong *)(*(long *)(unaff_x20 + _DAT_112eb4848) + _DAT_112eb8120);
  uVar3 = *puVar23;
  uVar9 = puVar23[1];
  uVar4 = puVar23[2];
  uVar10 = puVar23[3];
  cVar13 = (char)puVar23[4];
  if (cVar25 == '\x01') {
    if (cVar13 != '\x01') {
      cVar25 = '\x01';
LAB_1026a6e74:
      func_0x000107c615f0(param_1);
      func_0x0001026a7ab0(uVar3,uVar9,uVar4,uVar10,cVar13);
      func_0x0001026a7ab0(uVar1,uVar7,uVar2,uVar8,cVar25);
      func_0x0001026a7af4(uVar1,uVar7,uVar2,uVar8,cVar25);
      func_0x0001026a7af4(uVar3,uVar9,uVar4,uVar10,cVar13);
      goto LAB_1026a6efc;
    }
    if (uVar1 == uVar3 && uVar7 == uVar9) {
      func_0x0001026a7ab0(uVar1,uVar7,uVar4,uVar10,1);
      func_0x0001026a7ab0(uVar1,uVar7,uVar2,uVar8,1);
      func_0x0001026a7af4(uVar1,uVar7,uVar2,uVar8,1);
      func_0x0001026a7af4(uVar1,uVar7,uVar4,uVar10,1);
      goto LAB_1026a72e8;
    }
    uVar19 = uVar1;
    func_0x000107c605b8(uVar1,uVar7,uVar3,uVar9,0);
    func_0x000107c615f0(param_1);
    func_0x0001026a7ab0(uVar3,uVar9,uVar4,uVar10,1);
    func_0x0001026a7ab0(uVar1,uVar7,uVar2,uVar8,1);
    func_0x0001026a7af4(uVar1,uVar7,uVar2,uVar8,1);
    func_0x0001026a7af4(uVar3,uVar9,uVar4,uVar10,1);
    if ((uVar19 & 1) == 0) goto LAB_1026a6efc;
  }
  else {
    if (cVar13 == '\x01') goto LAB_1026a6e74;
    uVar27 = *(ulong *)(uVar1 + 0x10);
    uVar19 = *(ulong *)(unaff_x20 + _DAT_112eb4850);
    uVar11 = ((ulong *)(unaff_x20 + _DAT_112eb4850))[1];
    func_0x000107c615f0();
    func_0x0001026a7ab0(uVar3,uVar9,uVar4,uVar10,cVar13);
    func_0x0001026a7ab0(uVar1,uVar7,uVar2,uVar8,cVar25);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar27 != 0) {
      uVar22 = 0;
      do {
        puVar23 = (ulong *)(uVar1 + 0x28 + uVar22 * 0x10);
        uVar24 = uVar22;
        while( true ) {
          if (*(ulong *)(uVar1 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1026a7314);
            (*pcVar16)();
          }
          uVar5 = puVar23[-1];
          uVar12 = *puVar23;
          if ((uVar5 != uVar19 || uVar12 != uVar11) &&
             (uVar22 = uVar5, func_0x000107c605b8(uVar5,uVar12,uVar19,uVar11,0), (uVar22 & 1) == 0))
          break;
          uVar24 = uVar24 + 1;
          puVar23 = puVar23 + 2;
          if (uVar27 == uVar24) goto LAB_1026a7170;
        }
        func_0x000107c61434(uVar12);
        puVar20 = puVar14;
        func_0x000107c61558();
        if (((ulong)puVar20 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar14 + 0x10) + 1,1);
        }
        uVar6 = *(ulong *)(puVar14 + 0x10);
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar6 + 1,1);
        }
        uVar22 = uVar24 + 1;
        *(ulong *)(puVar14 + 0x10) = uVar6 + 1;
        *(ulong *)(puVar14 + uVar6 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar14 + uVar6 * 0x10 + 0x28) = uVar12;
      } while (uVar27 - 1 != uVar24);
    }
LAB_1026a7170:
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar27 = *(ulong *)(uVar3 + 0x10);
    if (uVar27 != 0) {
      uVar22 = 0;
      do {
        puVar23 = (ulong *)(uVar3 + 0x28 + uVar22 * 0x10);
        uVar24 = uVar22;
        while( true ) {
          if (*(ulong *)(uVar3 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1026a7318);
            (*pcVar16)();
          }
          uVar5 = puVar23[-1];
          uVar12 = *puVar23;
          if ((uVar5 != uVar19 || uVar12 != uVar11) &&
             (uVar22 = uVar5, func_0x000107c605b8(uVar5,uVar12,uVar19,uVar11,0), (uVar22 & 1) == 0))
          break;
          uVar24 = uVar24 + 1;
          puVar23 = puVar23 + 2;
          if (uVar27 == uVar24) goto LAB_1026a7284;
        }
        func_0x000107c61434(uVar12);
        puVar21 = puVar20;
        func_0x000107c61558();
        if (((ulong)puVar21 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar20 + 0x10) + 1,1);
        }
        uVar6 = *(ulong *)(puVar20 + 0x10);
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puVar20 + 0x18),uVar6 + 1,1);
        }
        uVar22 = uVar24 + 1;
        *(ulong *)(puVar20 + 0x10) = uVar6 + 1;
        *(ulong *)(puVar20 + uVar6 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar20 + uVar6 * 0x10 + 0x28) = uVar12;
      } while (uVar27 - 1 != uVar24);
    }
LAB_1026a7284:
    puVar21 = puVar14;
    func_0x00010142cfc4(puVar14,puVar20);
    func_0x0001026a7af4(uVar1,uVar7,uVar2,uVar8,cVar25);
    func_0x0001026a7af4(uVar3,uVar9,uVar4,uVar10,cVar13);
    func_0x000107c61574(puVar14);
    func_0x000107c61574(puVar20);
    if (((ulong)puVar21 & 1) != 0) goto LAB_1026a72e4;
LAB_1026a6efc:
    uVar17 = *(undefined8 *)(unaff_x20 + lVar15);
    *(long *)(unaff_x20 + lVar15) = lVar18;
    func_0x000107c615f0(param_1);
    func_0x000107c61170(uVar17);
    lVar15 = _DAT_112eb4878;
    lVar26 = *(long *)(unaff_x20 + _DAT_112eb4878);
    if (lVar26 == 0) {
      uVar17 = 0;
    }
    else {
      func_0x000107c615f0(lVar26);
      func_0x000107c3fc1c();
      uVar17 = *(undefined8 *)(unaff_x20 + lVar15);
    }
    *(undefined8 *)(unaff_x20 + lVar15) = 0;
    func_0x000107c615e8(uVar17);
    FUN_1026a6854();
    func_0x000107c615e8(param_1);
    param_1 = lVar26;
  }
LAB_1026a72e4:
  func_0x000107c615e8(param_1);
LAB_1026a72e8:
  return lVar18 != 0;
}



/* Entry: 1026a7318; end: 1026a7377; -[_TtC23MapRouterImplementation18FocusCardsWorkflow init] */

void FUN_1026a7318(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.FocusCardsWorkflow",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a7344);
  (*pcVar1)();
}



/* Entry: 1026a7378; end: 1026a742b; -[_TtC23MapRouterImplementation18FocusCardsWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7378(long param_1)

{
  func_0x000100cffb70(*(undefined8 *)(param_1 + _DAT_112eb4838),
                      ((undefined8 *)(param_1 + _DAT_112eb4838))[1]);
  func_0x000100cffb70(*(undefined8 *)(param_1 + _DAT_112eb4840),
                      ((undefined8 *)(param_1 + _DAT_112eb4840))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4848));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb4850 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4858));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4860));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb4868));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4870));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4878));
  return;
}



/* Entry: 1026a742c; end: 1026a744b;  */

void FUN_1026a742c(void)

{
  func_0x000107c61168(&PTR_PTR_1128585c8);
  return;
}



/* Entry: 1026a744c; end: 1026a7497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a744c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  code *pcVar23;
  undefined8 uVar24;
  undefined *apuStack_a0 [3];
  undefined *apuStack_88 [3];
  
  lVar10 = _DAT_112eb4848;
  lVar20 = *(long *)(unaff_x20 + _DAT_112eb4848);
  plVar1 = (long *)(lVar20 + _DAT_112eb8120);
  puVar11 = (undefined *)*plVar1;
  lVar5 = plVar1[1];
  lVar18 = plVar1[2];
  lVar6 = plVar1[3];
  lVar9 = plVar1[4];
  if ((char)lVar9 == '\x01') {
    FUN_1026e4480(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar5);
    func_0x0001026e45b0(lVar18,lVar6,puVar11,lVar5);
    puVar14 = puVar11;
  }
  else {
    uVar22 = *(ulong *)(puVar11 + 0x10);
    if ((uVar22 == 1) &&
       ((uVar12 = *(ulong *)(puVar11 + 0x20),
        uVar12 == *(ulong *)(unaff_x20 + _DAT_112eb4850) &&
        *(ulong *)(puVar11 + 0x28) == ((ulong *)(unaff_x20 + _DAT_112eb4850))[1] ||
        (func_0x000107c605b8(), (uVar12 & 1) != 0)))) {
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb4840);
      func_0x000107c61428(puVar2,apuStack_88,0,0);
      pcVar23 = (code *)*puVar2;
      if (pcVar23 != (code *)0x0) {
        uVar19 = puVar2[1];
        uVar24 = *(undefined8 *)(lVar20 + _DAT_112eb8130);
        FUN_1026e876c(0);
        func_0x000107c610f8();
        func_0x0001026a7ab0(puVar11,lVar5,lVar18,lVar6,(char)lVar9);
        func_0x000100cffb80(pcVar23,uVar19);
        func_0x000107c61434(lVar6);
        func_0x000107c61174(uVar24);
        func_0x000107c61434(lVar18);
        uVar17 = 0x61;
        func_0x0001026e8540(0x61,uVar24,lVar18,lVar6);
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar18);
        func_0x000107c6142c(puVar11);
        (*pcVar23)(uVar17,0);
        func_0x000107c61170(uVar17);
        func_0x000100cffb70(pcVar23,uVar19);
      }
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eb4838);
      func_0x000107c61428(puVar2,apuStack_a0,0,0);
      pcVar23 = (code *)*puVar2;
      if (pcVar23 == (code *)0x0) {
        return;
      }
      uVar17 = puVar2[1];
      func_0x000107c6157c(uVar17);
      (*pcVar23)();
      func_0x000100cffb70(pcVar23,uVar17);
      return;
    }
    uVar12 = *(ulong *)(unaff_x20 + _DAT_112eb4850);
    uVar7 = ((ulong *)(unaff_x20 + _DAT_112eb4850))[1];
    func_0x000107c61434(puVar11);
    func_0x000107c61434(lVar18);
    func_0x000107c61434(lVar6);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar22 != 0) {
      uVar15 = 0;
      do {
        puVar16 = (ulong *)(puVar11 + uVar15 * 0x10 + 0x28);
        uVar21 = uVar15;
        while( true ) {
          if (*(ulong *)(puVar11 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1026a6cfc);
            (*pcVar23)();
          }
          uVar3 = puVar16[-1];
          uVar8 = *puVar16;
          if ((uVar3 != uVar12 || uVar8 != uVar7) &&
             (uVar15 = uVar3, func_0x000107c605b8(uVar3,uVar8,uVar12,uVar7,0), (uVar15 & 1) == 0))
          break;
          uVar21 = uVar21 + 1;
          puVar16 = puVar16 + 2;
          if (uVar22 == uVar21) goto LAB_1026a6b94;
        }
        func_0x000107c61434(uVar8);
        puVar13 = puVar14;
        func_0x000107c61558();
        apuStack_88[0] = puVar14;
        if (((ulong)puVar13 & 1) == 0) {
          func_0x000100403514(0,*(long *)(puVar14 + 0x10) + 1,1);
        }
        uVar4 = *(ulong *)(apuStack_88[0] + 0x10);
        if (*(ulong *)(apuStack_88[0] + 0x18) >> 1 <= uVar4) {
          func_0x000100403514(1 < *(ulong *)(apuStack_88[0] + 0x18),uVar4 + 1,1);
        }
        uVar15 = uVar21 + 1;
        *(ulong *)(apuStack_88[0] + 0x10) = uVar4 + 1;
        *(ulong *)(apuStack_88[0] + uVar4 * 0x10 + 0x20) = uVar3;
        *(ulong *)(apuStack_88[0] + uVar4 * 0x10 + 0x28) = uVar8;
        puVar14 = apuStack_88[0];
      } while (uVar22 - 1 != uVar21);
    }
LAB_1026a6b94:
    FUN_1026e42dc(0);
    func_0x000107c610f8();
    func_0x000107c61434(lVar18);
    func_0x000107c61434(lVar6);
    FUN_1026e4220(puVar14,(uint)lVar5 & 1,lVar18,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar18);
    func_0x000107c6142c(puVar11);
  }
  uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + lVar10) + _DAT_112eb8128);
  uVar19 = *(undefined8 *)(*(long *)(unaff_x20 + lVar10) + _DAT_112eb8130);
  FUN_1026e4f9c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar19);
  func_0x000107c615f0(puVar14);
  func_0x000107c61174();
  puVar13 = puVar14;
  FUN_1026e4d34(puVar14,uVar17,uVar19);
  apuStack_a0[0] = puVar13;
  func_0x00010008a7c8(apuStack_88,apuStack_a0);
  puVar11 = apuStack_88[0];
  func_0x000100083b20(apuStack_a0);
  func_0x000107c61574(puVar11);
  lVar18 = _DAT_112eb4878;
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112eb4878);
  *(undefined **)(unaff_x20 + _DAT_112eb4878) = apuStack_a0[0];
  func_0x000107c615e8(uVar17);
  lVar18 = *(long *)(unaff_x20 + lVar18);
  if (lVar18 != 0) {
    func_0x000107c615f0(lVar18);
    func_0x000107c4eefc();
    func_0x000107c615e8(lVar18);
  }
  func_0x000107c61170(puVar13);
  func_0x000107c615e8(puVar14);
  return;
}



/* Entry: 1026a7498; end: 1026a74d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a7498(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4838;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4838,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a74d8;
  return auVar2;
}



/* Entry: 1026a74d8; end: 1026a74ef;  */

void FUN_1026a74d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a74f0; end: 1026a754f;  */

undefined1  [16] FUN_1026a74f0(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a7550; end: 1026a7563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7550(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4840);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026a7564; end: 1026a75bf;  */

void FUN_1026a7564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026a75c0; end: 1026a7687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a75c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4840;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4840,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a7ddc;
  return auVar2;
}



/* Entry: 1026a7688; end: 1026a76cf; -[_TtC23MapRouterImplementation18FocusCardsWorkflow mapFocusCardsPresenterDidDismiss:] */

void FUN_1026a7688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x0001026a7600(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a76d0; end: 1026a77e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a76d0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb4868);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x000100513914(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar3 = 0x36;
  func_0x000103c082bc(0x36,puVar2);
  func_0x000107c42c1c(lVar4);
  func_0x000100083b20(&uStack_48);
  func_0x000107c56a0c(uStack_48);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1026a77e4; end: 1026a780b; -[_TtC23MapRouterImplementation18FocusCardsWorkflow wantsToOpenBitmojiBuilder] */

void FUN_1026a77e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026a76d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a780c; end: 1026a7877;  */

void FUN_1026a780c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a7878,uVar1,uVar2);
  return;
}



/* Entry: 1026a7878; end: 1026a7937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7878(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4840);
  func_0x000107c61428(puVar1,unaff_x22 + 0x10,0,0);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar5 = puVar1[1];
    FUN_1026e876c(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar5);
    uVar3 = 0x61;
    func_0x0001026e8540(0x61,0,0,0);
    (*pcVar4)();
    func_0x000107c61170(uVar3);
    func_0x000100cffb70(pcVar4,uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026a7934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pcVar4 == (code *)0x0);
  return;
}



/* Entry: 1026a7938; end: 1026a797b;  */

void FUN_1026a7938(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001026a7978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1026a797c; end: 1026a7a4f; -[_TtC23MapRouterImplementation18FocusCardsWorkflow wantsToShowBitmojiTray] */

void FUN_1026a797c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105353a8;
  func_0x000107c613fc(&UNK_1105353a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_1105353d0;
  func_0x000107c613fc(&UNK_1105353d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10daca850;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x72;
  func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca860,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a7a50; end: 1026a7a5f; -[_TtC23MapRouterImplementation18FocusCardsWorkflow operaPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb4860));
  return;
}



/* Entry: 1026a7a60; end: 1026a7b33; -[_TtC23MapRouterImplementation18FocusCardsWorkflow bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_1026a7a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1026a7c20();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1026a7b34; end: 1026a7c1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4838);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4840);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb4878) = 0;
  *(undefined8 *)(lVar2 + _DAT_112eb4848) = param_1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112eb4850);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar2 + _DAT_112eb4858) = param_4;
  *(undefined8 *)(lVar2 + _DAT_112eb4860) = param_5;
  *(undefined8 *)(lVar2 + _DAT_112eb4868) = param_6;
  *(undefined8 *)(lVar2 + _DAT_112eb4870) = param_7;
  lStack_60 = lVar2;
  lStack_58 = param_8;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026a7c20; end: 1026a7c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7c20(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb4868);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  func_0x000100083b20(&uStack_28);
  func_0x000107c56a0c(uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 1026a7ca0; end: 1026a7d2f;  */

void FUN_1026a7ca0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1026a7cec;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a7878,lVar1,lVar3);
  return;
}



/* Entry: 1026a7d30; end: 1026a7d9f;  */

void FUN_1026a7d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026a7da0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026a7da0; end: 1026a7ddb;  */

void FUN_1026a7da0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026a7dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026a7ddc; end: 1026a7ddf;  */

void FUN_1026a7ddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a7de0; end: 1026a7e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7de0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48e8);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112eb48e8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026a7e78; end: 1026a7f1f; -[_TtC23MapRouterImplementation19FocusedDropWorkflow dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7e78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112eb48e8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar4 = ((long *)(param_1 + _DAT_112eb48e8))[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar3);
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026a7f20; end: 1026a7fcf; -[_TtC23MapRouterImplementation19FocusedDropWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001026a7f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a7f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7f20(long param_1)

{
  func_0x000100cffbd8(*(undefined8 *)(param_1 + _DAT_112eb48a8),
                      ((undefined8 *)(param_1 + _DAT_112eb48a8))[1]);
  func_0x000100cffbd8(*(undefined8 *)(param_1 + _DAT_112eb48b0),
                      ((undefined8 *)(param_1 + _DAT_112eb48b0))[1]);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb48b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb48c0));
  return;
}



/* Entry: 1026a7fd0; end: 1026a812f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a7fd0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48d8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48a8);
    func_0x000107c61428(puVar1,auStack_58,0,0);
    pcVar8 = (code *)*puVar1;
    if (pcVar8 != (code *)0x0) {
      uVar7 = puVar1[1];
      func_0x000107c6157c(uVar7);
      (*pcVar8)();
      func_0x000100cffbd8(pcVar8,uVar7);
    }
    return;
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  plVar3 = *(long **)(unaff_x20 + _DAT_112eb48c0);
  func_0x000107c4c330();
  func_0x000107c61180();
  plVar4 = plVar3;
  func_0x0001000b637c();
  func_0x000107c61170(plVar3);
  puVar5 = &UNK_110535450;
  func_0x000107c613fc(&UNK_110535450,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar8 = FUN_1026a8890;
  puVar6 = puVar5;
  (**(code **)(*plVar4 + 0x60))();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48e8);
  uVar7 = *puVar1;
  *puVar1 = pcVar8;
  puVar1[1] = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
  return;
}



/* Entry: 1026a8130; end: 1026a82b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8130(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar8 = _DAT_112eb48d8;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112eb48d8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112eb48d0);
      uVar7 = *(undefined8 *)(*(long *)(param_2 + _DAT_112eb48b8) + _DAT_112eb8160);
      uVar9 = *(undefined8 *)(*(long *)(param_2 + _DAT_112eb48b8) + _DAT_112eb8168);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar7);
      lVar2 = param_2;
      func_0x000107c61174();
      uVar4 = uVar7;
      func_0x00010438b534(uVar7,lVar2,0,uVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c42c1c(*(undefined8 *)(param_2 + lVar8));
      plVar1 = (long *)(lVar2 + _DAT_112eb48e8);
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        lVar6 = plVar1[1];
        lVar5 = lVar8;
        func_0x000107c614f0(lVar8);
        pcVar10 = *(code **)(lVar6 + 8);
        func_0x000107c615f0(lVar8);
        (*pcVar10)(lVar5,lVar6);
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(uVar4);
      lVar8 = *plVar1;
      *plVar1 = 0;
      plVar1[1] = 0;
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar8);
    }
    else {
      func_0x000107c61170();
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1026a82b8; end: 1026a836f;  */

/* WARNING: Possible PIC construction at 0x0001026a8310: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a82b8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48e8);
  if (lVar2 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112eb48d8);
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
  }
  else {
    lVar3 = ((long *)(unaff_x20 + _DAT_112eb48e8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1026a8370; end: 1026a83bb; -[_TtC23MapRouterImplementation19FocusedDropWorkflow init] */

void FUN_1026a8370(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.FocusedDropWorkflow",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a839c);
  (*pcVar1)();
}



/* Entry: 1026a83bc; end: 1026a83bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a83bc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48d8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48a8);
    func_0x000107c61428(puVar1,auStack_58,0,0);
    pcVar8 = (code *)*puVar1;
    if (pcVar8 != (code *)0x0) {
      uVar7 = puVar1[1];
      func_0x000107c6157c(uVar7);
      (*pcVar8)();
      func_0x000100cffbd8(pcVar8,uVar7);
    }
    return;
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  plVar3 = *(long **)(unaff_x20 + _DAT_112eb48c0);
  func_0x000107c4c330();
  func_0x000107c61180();
  plVar4 = plVar3;
  func_0x0001000b637c();
  func_0x000107c61170(plVar3);
  puVar5 = &UNK_110535450;
  func_0x000107c613fc(&UNK_110535450,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar8 = FUN_1026a8890;
  puVar6 = puVar5;
  (**(code **)(*plVar4 + 0x60))();
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48e8);
  uVar7 = *puVar1;
  *puVar1 = pcVar8;
  puVar1[1] = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
  return;
}



/* Entry: 1026a83c0; end: 1026a83f7;  */

bool FUN_1026a83c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001026e7e54(0);
  func_0x000107c61480(param_1,uVar1);
  return param_1 != 0;
}



/* Entry: 1026a83f8; end: 1026a8423;  */

/* WARNING: Possible PIC construction at 0x0001026a8310: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a83f8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48e8);
  if (lVar2 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112eb48d8);
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
  }
  else {
    lVar3 = ((long *)(unaff_x20 + _DAT_112eb48e8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1026a8424; end: 1026a8463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a8424(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb48a8;
  func_0x000107c61428(unaff_x20 + _DAT_112eb48a8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a8464;
  return auVar2;
}



/* Entry: 1026a8464; end: 1026a847b;  */

void FUN_1026a8464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a847c; end: 1026a84db;  */

undefined1  [16] FUN_1026a847c(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a84dc; end: 1026a84ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a84dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48b0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026a84f0; end: 1026a854b;  */

void FUN_1026a84f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026a854c; end: 1026a858b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a854c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb48b0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb48b0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a8bb8;
  return auVar2;
}



/* Entry: 1026a858c; end: 1026a869b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a858c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112eb48d8);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c61170();
  func_0x000107c4ffe8(lVar3);
  func_0x000107c61180();
  func_0x000107c615e8();
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb48c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c40ec0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      goto LAB_1026a8644;
    }
  }
  lVar2 = unaff_x20 + _DAT_112eb48e0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c50358();
    func_0x000107c615e8(lVar2);
  }
LAB_1026a8644:
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb48a8);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
    uVar4 = puVar1[1];
    func_0x000107c6157c(uVar4);
    (*pcVar5)();
    func_0x000100cffbd8(pcVar5,uVar4);
  }
  return;
}



/* Entry: 1026a869c; end: 1026a86c3; -[_TtC23MapRouterImplementation19FocusedDropWorkflow didCloseDropsTray] */

void FUN_1026a869c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026a858c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026a86c4; end: 1026a872f;  */

void FUN_1026a86c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a8730,uVar1,uVar2);
  return;
}



/* Entry: 1026a8730; end: 1026a8843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8730(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar2 = lVar4 + _DAT_112eb48e0;
    func_0x000107c61618();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000107c50358(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  lVar4 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x28,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + _DAT_112eb48a8);
    func_0x000107c61428(puVar1,unaff_x22 + 0x40,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61170(lVar4);
    }
    else {
      uVar5 = puVar1[1];
      func_0x000100cffbe8(pcVar3,uVar5);
      func_0x000107c61170(lVar4);
      (*pcVar3)();
      func_0x000100cffbd8(pcVar3,uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001026a8840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026a8844; end: 1026a888f; -[_TtC23MapRouterImplementation19FocusedDropWorkflow didSuccessfullySendDrop:] */

/* WARNING: Possible PIC construction at 0x0001026a8878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a887c) */

void FUN_1026a8844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1026a8898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026a8890; end: 1026a8897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8890(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar8 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar5 = _DAT_112eb48d8;
  if (lVar8 != 0) {
    lVar2 = *(long *)(lVar8 + _DAT_112eb48d8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar8 + _DAT_112eb48d0);
      uVar7 = *(undefined8 *)(*(long *)(lVar8 + _DAT_112eb48b8) + _DAT_112eb8160);
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + _DAT_112eb48b8) + _DAT_112eb8168);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(uVar7);
      lVar2 = lVar8;
      func_0x000107c61174();
      uVar4 = uVar7;
      func_0x00010438b534(uVar7,lVar2,0,uVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar2);
      func_0x000107c42c1c(*(undefined8 *)(lVar8 + lVar5));
      plVar1 = (long *)(lVar2 + _DAT_112eb48e8);
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        lVar6 = plVar1[1];
        lVar5 = lVar8;
        func_0x000107c614f0(lVar8);
        pcVar10 = *(code **)(lVar6 + 8);
        func_0x000107c615f0(lVar8);
        (*pcVar10)(lVar5,lVar6);
        func_0x000107c615e8(lVar8);
      }
      func_0x000107c61170(uVar4);
      lVar8 = *plVar1;
      *plVar1 = 0;
      plVar1[1] = 0;
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar8);
    }
    else {
      func_0x000107c61170();
      func_0x000107c61170(lVar8);
    }
  }
  return;
}



/* Entry: 1026a8898; end: 1026a898f;  */

/* WARNING: Possible PIC construction at 0x0001026a8968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a896c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8898(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112eb48d8);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
    puVar2 = &UNK_110535450;
    func_0x000107c613fc(&UNK_110535450,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110535478;
    func_0x000107c613fc(&UNK_110535478,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10daca8a8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x0001001ca524(0x72,0,0x3c,4,0,0,&UNK_10daca8b0,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1026a8990; end: 1026a8a13;  */

void FUN_1026a8990(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a89d8;
  plVar3[0xb] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xc] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026a8730,lVar1,lVar2);
  return;
}



/* Entry: 1026a8a14; end: 1026a8a83;  */

void FUN_1026a8a14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026a8bbc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026a8a84; end: 1026a8bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb48a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb48b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112eb48e0;
  func_0x000107c61614(lVar4 + _DAT_112eb48e0,0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112eb48e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112eb48b8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112eb48c0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112eb48c8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112eb48d0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112eb48d8) = param_5;
  func_0x000107c61604(lVar4 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = param_7;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_70,puVar2);
  return;
}



/* Entry: 1026a8bb8; end: 1026a8bbf;  */

void FUN_1026a8bb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a8bc0; end: 1026a8cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8bc0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar2 = _DAT_112eb4930;
  if (*(long *)(unaff_x20 + _DAT_112eb4930) == 0) {
    FUN_1026e242c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x0001026e23a4();
    lStack_48 = lVar3;
    func_0x00010008a7c8(auStack_60,&lStack_48);
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(auStack_60[0]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lStack_48;
    func_0x000107c615e8(uVar4);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4918);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffc40(pcVar5,uVar4);
    }
  }
  return;
}



/* Entry: 1026a8cc0; end: 1026a8d1f; -[_TtC23MapRouterImplementation17FootstepsWorkflow init] */

void FUN_1026a8cc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapRouterImplementation.FootstepsWorkflow",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026a8cec);
  (*pcVar1)();
}



/* Entry: 1026a8d20; end: 1026a8d7f; -[_TtC23MapRouterImplementation17FootstepsWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8d20(long param_1)

{
  func_0x000100cffc40(*(undefined8 *)(param_1 + _DAT_112eb4918),
                      ((undefined8 *)(param_1 + _DAT_112eb4918))[1]);
  func_0x000100cffc40(*(undefined8 *)(param_1 + _DAT_112eb4920),
                      ((undefined8 *)(param_1 + _DAT_112eb4920))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb4928));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb4930));
  return;
}



/* Entry: 1026a8d80; end: 1026a8d9f;  */

void FUN_1026a8d80(void)

{
  func_0x000107c61168(&PTR_PTR_1128587c8);
  return;
}



/* Entry: 1026a8da0; end: 1026a8da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8da0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar2 = _DAT_112eb4930;
  if (*(long *)(unaff_x20 + _DAT_112eb4930) == 0) {
    FUN_1026e242c(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    lVar3 = unaff_x20;
    func_0x0001026e23a4();
    lStack_48 = lVar3;
    func_0x00010008a7c8(auStack_60,&lStack_48);
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(auStack_60[0]);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lStack_48;
    func_0x000107c615e8(uVar4);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4918);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    pcVar5 = (code *)*puVar1;
    if (pcVar5 != (code *)0x0) {
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar5)();
      func_0x000100cffc40(pcVar5,uVar4);
    }
  }
  return;
}



/* Entry: 1026a8da4; end: 1026a8dd7;  */

bool FUN_1026a8da4(undefined **param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = param_1;
  func_0x000107c611b4();
  return ppuVar1 == &PTR_PTR_112eb8280 && param_1 != (undefined **)0x0;
}



/* Entry: 1026a8dd8; end: 1026a8e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8dd8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eb4930) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf82f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112eb4930),PTR_s_dismiss_1125be578);
    return;
  }
  return;
}



/* Entry: 1026a8e18; end: 1026a8e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a8e18(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4918;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4918,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a8e58;
  return auVar2;
}



/* Entry: 1026a8e58; end: 1026a8e6f;  */

void FUN_1026a8e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a8e70; end: 1026a8ecf;  */

undefined1  [16] FUN_1026a8e70(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_3);
  func_0x000107c61428(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 1026a8ed0; end: 1026a8ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb4920);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_1026a17a0(uVar2,uVar3);
  return;
}



/* Entry: 1026a8ee4; end: 1026a8f3f;  */

void FUN_1026a8ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_5);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Entry: 1026a8f40; end: 1026a8f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026a8f40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112eb4920;
  func_0x000107c61428(unaff_x20 + _DAT_112eb4920,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_1026a9020;
  return auVar2;
}



/* Entry: 1026a8f80; end: 1026a901f; -[_TtC23MapRouterImplementation17FootstepsWorkflow mapFootstepsTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026a8f80(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb4930);
  *(undefined8 *)(param_1 + _DAT_112eb4930) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb4918);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 == (code *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*pcVar3)();
    func_0x000107c61170(param_1);
    func_0x000100cffc40(pcVar3,uVar2);
  }
  return;
}



/* Entry: 1026a9020; end: 1026a9023;  */

void FUN_1026a9020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a9024; end: 1026a90f3;  */

/* WARNING: Possible PIC construction at 0x0001026a9050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a90d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a90dc) */

void FUN_1026a9024(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_1026a90f4();
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      pcVar3 = *(code **)(unaff_x20 + 0x10);
      if (pcVar3 != (code *)0x0) {
        uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c6157c(uVar4);
        (*pcVar3)();
        func_0x000100cffc50(pcVar3,uVar4);
      }
      return;
    }
    func_0x000107c61174();
    func_0x00010438bdd4();
    func_0x000107c42c1c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026a90f4; end: 1026a9207;  */

/* WARNING: Possible PIC construction at 0x0001026a91b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a91dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a91bc) */
/* WARNING: Removing unreachable block (ram,0x0001026a91e0) */
/* WARNING: Removing unreachable block (ram,0x0001026a91e8) */

void FUN_1026a90f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(lVar5 + 0x10);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  uVar6 = *(undefined8 *)(lVar5 + 0x20);
  uVar7 = *(undefined8 *)(lVar5 + 0x28);
  uVar8 = *(undefined8 *)(lVar5 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(uVar1);
  func_0x000107c466c0(uVar8,puVar2);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x38);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(uVar8);
  uVar8 = 0;
  func_0x00010438c3c4(0);
  func_0x000107c610f8();
  func_0x00010438c100(uVar6,uVar7,lVar4,uVar1,puVar2,puVar3,uVar8);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  if (lVar5 == 0) {
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c49470();
  }
  else {
    func_0x000107c61174();
    func_0x000107c4d664();
    lVar4 = lVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1026a9208; end: 1026a9273;  */

void FUN_1026a9208(void)

{
  long unaff_x20;
  
  func_0x000100cffc50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100cffc50(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026a9274; end: 1026a9277;  */

/* WARNING: Possible PIC construction at 0x0001026a9050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026a90d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026a90dc) */

void FUN_1026a9274(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_1026a90f4();
    if (*(long *)(unaff_x20 + 0x48) == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      pcVar3 = *(code **)(unaff_x20 + 0x10);
      if (pcVar3 != (code *)0x0) {
        uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
        func_0x000107c6157c(uVar4);
        (*pcVar3)();
        func_0x000100cffc50(pcVar3,uVar4);
      }
      return;
    }
    func_0x000107c61174();
    func_0x00010438bdd4();
    func_0x000107c42c1c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1026a9278; end: 1026a92e3;  */

bool FUN_1026a9278(undefined **param_1)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  ppuVar1 = param_1;
  func_0x000107c611b4();
  if (ppuVar1 == &PTR_PTR_112eb8318 && param_1 != (undefined **)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined ***)(unaff_x20 + 0x30) = param_1;
    func_0x000107c615f4(param_1,2);
    func_0x000107c61574(uVar2);
    FUN_1026a90f4();
    func_0x000107c615e8(param_1);
  }
  return ppuVar1 == &PTR_PTR_112eb8318 && param_1 != (undefined **)0x0;
}



/* Entry: 1026a92e4; end: 1026a937f;  */

void FUN_1026a92e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1026a9380; end: 1026a93cf;  */

void FUN_1026a9380(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100cffc50(uVar1,uVar2);
  return;
}



/* Entry: 1026a93d0; end: 1026a93ff;  */

undefined1  [16] FUN_1026a93d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_1026a9400;
  return auVar1;
}



/* Entry: 1026a9400; end: 1026a9403;  */

void FUN_1026a9400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1026a9404; end: 1026a944f;  */

undefined1  [16] FUN_1026a9404(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x000100cffc60(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1026a9450; end: 1026a949f;  */

void FUN_1026a9450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x000100cffc50(uVar1,uVar2);
  return;
}



/* Entry: 1026a94a0; end: 1026a94cf;  */

undefined1  [16] FUN_1026a94a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = FUN_1026a95b4;
  return auVar1;
}



/* Entry: 1026a94d0; end: 1026a956f;  */

void FUN_1026a94d0(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if ((lVar1 != 0) && (func_0x000107c61170(), lVar1 == param_1)) {
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    pcVar3 = *(code **)(unaff_x20 + 0x10);
    if (pcVar3 != (code *)0x0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c6157c(uVar4);
      (*pcVar3)();
      func_0x000100cffc50(pcVar3,uVar4);
    }
  }
  return;
}


