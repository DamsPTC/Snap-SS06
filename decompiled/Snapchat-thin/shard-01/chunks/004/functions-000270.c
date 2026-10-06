/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fb083c; end: 100fb096b;  */

undefined * FUN_100fb083c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100fa7f24(0,lVar5,0);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar5 != 0) {
    do {
      puVar2 = puStack_68;
      param_1 = param_1 + 0x20;
      func_0x0001000bb420(param_1,auStack_88);
      func_0x000100102924(auStack_88,auStack_a8);
      uVar3 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      uVar4 = 0;
      func_0x000107c6147c(&uStack_b0,auStack_a8,puVar1 + 8,uVar3,6);
      uVar3 = uStack_b0;
      if ((uVar4 & 1) == 0) {
        func_0x000107c61574(puVar2);
        return (undefined *)0x0;
      }
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        func_0x000100fa7f24(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 100fb096c; end: 100fb09af;  */

void FUN_100fb096c(undefined8 param_1,code *param_2)

{
  undefined8 uStack_28;
  
  (*param_2)(&uStack_28);
  func_0x000100b60084(&uStack_28);
  func_0x000107c6142c(uStack_28);
  return;
}



/* Entry: 100fb09b0; end: 100fb09d3;  */

void FUN_100fb09b0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d51398;
  plVar5 = (long *)&UNK_10d918060;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100fb1614(0,0x112d513a0,&PTR_PTR_1126b3060);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fb09d4; end: 100fb0a4b;  */

void FUN_100fb09d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100fb1614(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fb0a4c; end: 100fb0a9f;  */

void FUN_100fb0a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51328 == (undefined *)0x0 || ((ulong)puRam0000000112d51328 & 1) != 0) {
    puVar1 = &UNK_10e83c8aa;
    func_0x000107c61518(&UNK_10e83c8aa,0x1a,0,0);
    puRam0000000112d51328 = puVar1;
  }
  return;
}



/* Entry: 100fb0aa0; end: 100fb0b0b;  */

void FUN_100fb0aa0(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fb0b0c; end: 100fb0b9f;  */

void FUN_100fb0b0c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d51370;
  plVar5 = (long *)&UNK_10d918018;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)0x100fa507c)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fb0ba0; end: 100fb0ef7;  */

ulong FUN_100fb0ba0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb0c7c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb0c80);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x72656c6c61474353,0xed000070616e5379);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb0d50);
  (*pcVar2)();
}



/* Entry: 100fb0ef8; end: 100fb0f1f;  */

ulong FUN_100fb0ef8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1004);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1008);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c66e0;
    func_0x000107c61168(PTR_PTR_1126c66e0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c66e0;
    func_0x000107c61168(PTR_PTR_1126c66e0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100fb1614(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb10dc);
  (*pcVar2)();
}



/* Entry: 100fb0f20; end: 100fb10db;  */

ulong FUN_100fb0f20(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1004);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1008);
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
  FUN_100fb1614(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb10dc);
  (*pcVar2)();
}



/* Entry: 100fb10dc; end: 100fb10ef;  */

ulong FUN_100fb10dc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1004);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1008);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b25d8;
    func_0x000107c61168(PTR_PTR_1126b25d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b25d8;
    func_0x000107c61168(PTR_PTR_1126b25d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100fb1614(0,0x112d512f8,&PTR_PTR_1126b25d8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb10dc);
  (*pcVar2)();
}



/* Entry: 100fb10f0; end: 100fb115b;  */

void FUN_100fb10f0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fb115c;
  plVar1[5] = param_1;
  plVar1[6] = unaff_x20;
  lVar2 = *param_2;
  plVar1[7] = param_3;
  plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fafe38,0,0);
  return;
}



/* Entry: 100fb115c; end: 100fb11e7;  */

void FUN_100fb115c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb11e8; end: 100fb11f7;  */

void FUN_100fb11e8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c430f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      uVar2 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      lVar3 = lVar1;
      func_0x000107c5fc54(lVar1,uVar2);
      func_0x000107c61170(lVar1);
      goto LAB_100fb0794;
    }
  }
  lVar3 = 0;
LAB_100fb0794:
  *param_1 = lVar3;
  return;
}



/* Entry: 100fb11f8; end: 100fb1533;  */

ulong FUN_100fb11f8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb12c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb12cc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000100fa507c(0);
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
    func_0x000100fa507c(0);
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
  func_0x000107c5fb78(0xd000000000000038,0x800000010ef1d9f0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1394);
  (*pcVar2)();
}



/* Entry: 100fb1534; end: 100fb155f;  */

ulong FUN_100fb1534(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1004);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb1008);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126becd8;
    func_0x000107c61168(PTR_PTR_1126becd8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126becd8;
    func_0x000107c61168(PTR_PTR_1126becd8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100fb1614(0,0x112d51360,&PTR_PTR_1126becd8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb10dc);
  (*pcVar2)();
}



/* Entry: 100fb1560; end: 100fb15af;  */

void FUN_100fb1560(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  undefined8 uStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(&uStack_38);
  func_0x000100b60084(&uStack_38);
  (*param_2)(uStack_38);
  return;
}



/* Entry: 100fb15b0; end: 100fb15c3;  */

void FUN_100fb15b0(undefined8 param_1,char param_2,code *UNRECOVERED_JUMPTABLE)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fb15c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fb15c4; end: 100fb15ff;  */

void FUN_100fb15c4(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  (**(code **)(unaff_x20 + 0x10))(auStack_38);
  func_0x000100b60084(auStack_38);
  return;
}



/* Entry: 100fb1600; end: 100fb1613;  */

void FUN_100fb1600(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 100fb1614; end: 100fb1653;  */

void FUN_100fb1614(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100fb1654; end: 100fb1673;  */

void FUN_100fb1654(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x40);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    FUN_100fb15b0(uVar4,1,PTR__swift_bridgeObjectRelease_11034f258);
    uVar3 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fadcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 100fb1674; end: 100fb1883;  */

void FUN_100fb1674(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar1 = 0x112d50c80;
  func_0x0001000285a8(0x112d50c80,&UNK_10d918580);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x112d50c88;
  uStack_48 = param_2;
  func_0x0001000285a8(0x112d50c88,&UNK_10d917610);
  func_0x000107c5fd28(auStack_50 + -extraout_x8,&uStack_48,uVar2);
  (**(code **)(lVar3 + 8))(auStack_50 + -extraout_x8,lVar1);
  func_0x000107c5fd2c(uVar2);
  return;
}



/* Entry: 100fb1884; end: 100fb191f;  */

void FUN_100fb1884(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x31) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar2 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb1920,0,0);
  return;
}



/* Entry: 100fb1920; end: 100fb1ac3;  */

void FUN_100fb1920(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long *plVar12;
  
  lVar11 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x10,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x78) = lVar11;
  if (lVar11 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x31);
    lVar3 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar10,1,1,lVar3);
    uVar10 = *(undefined8 *)(lVar11 + 0x78);
    puVar4 = &UNK_1103724d0;
    func_0x000107c613fc(&UNK_1103724d0,0x20,7);
    *(undefined **)(unaff_x22 + 0x80) = puVar4;
    puVar4[0x10] = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar10;
    plVar12 = (long *)0xe0;
    func_0x000107c6157c(uVar10);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar12;
    lVar3 = 0x112d50c68;
    func_0x0001000285a8(0x112d50c68,&UNK_10d9175e8);
    lVar5 = 0;
    FUN_100fb2944(0,0x112d50c78,&PTR_PTR_1126b25c0);
    lVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    lVar7 = lVar6;
    func_0x000100fb28f4();
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_100fb1ac4;
    puVar2 = PTR___ss5ErrorWS_11034ee10;
    lVar8 = *(long *)(unaff_x22 + 0x70);
    plVar12[0x16] = lVar11 + 0x70;
    plVar12[0x17] = unaff_x22 + 0x48;
    plVar12[0x14] = lVar7;
    plVar12[0x15] = (long)puVar2;
    plVar12[0x12] = lVar5;
    plVar12[0x13] = lVar6;
    plVar12[0x10] = (long)puVar4;
    plVar12[0x11] = lVar3;
    plVar12[0xe] = lVar8;
    plVar12[0xf] = (long)&UNK_10d9181f0;
    lVar11 = *(long *)(lVar6 + -8);
    plVar12[0x18] = lVar11;
    uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar12[0x19] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100fb1ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1ac4; end: 100fb1b3b;  */

void FUN_100fb1ac4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x88));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x90) = param_1;
    func_0x0001000abe54(*(undefined8 *)(lVar3 + 0x70));
    pcVar2 = FUN_100fb1b3c;
  }
  else {
    pcVar2 = FUN_100fb1c1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb1b3c; end: 100fb1c1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb1b3c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined1 *)(unaff_x22 + 0x40) = 0;
  uVar3 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd28(uVar2,(undefined8 *)(unaff_x22 + 0x38),uVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd2c();
  func_0x000107c61574(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fb1c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1c1c; end: 100fb1d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb1c1c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000abe54(*(undefined8 *)(unaff_x22 + 0x70));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x30) = 1;
  func_0x000107c614b0(uVar5);
  uVar3 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd28(uVar2,(undefined8 *)(unaff_x22 + 0x28),uVar3);
  func_0x000107c614ac(uVar5);
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd2c();
  func_0x000107c61574(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fb1d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1d18; end: 100fb1d3b;  */

void FUN_100fb1d18(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb1d3c,0,0);
  return;
}



/* Entry: 100fb1d3c; end: 100fb1ddf;  */

void FUN_100fb1d3c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  uVar1 = (ulong)*(byte *)(unaff_x22 + 0x80);
  FUN_100fb1fc4(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  uVar2 = 0x112d512f0;
  func_0x0001000285a8(0x112d512f0,&UNK_10da03ae0);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  plVar5 = plVar3;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fb1de0;
  plVar7 = *(long **)(unaff_x22 + 0x30);
  plVar3[0xb] = (long)plVar5;
  plVar3[0xc] = unaff_x22 + 0x20;
  plVar3[9] = unaff_x22 + 0x18;
  plVar3[10] = (long)&UNK_1107a6f08;
  plVar3[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar3[0xd] = (long)&PTR_FUN_1107a6e88;
  lVar4 = 0x10;
  _swift_task_alloc();
  plVar3[0xe] = lVar4;
  lVar4 = *(long *)(lVar6 + 0x50);
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x11] = uVar1;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar3[0x12] = (long)plVar5;
  *plVar5 = (long)plVar3;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar1;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar4 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[9] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar1;
  lVar4 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fb1de0; end: 100fb1e87;  */

void FUN_100fb1de0(void)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 == 0) {
    lVar3 = *(long *)(lVar4 + 0x10);
    *(long *)(lVar4 + 0x60) = lVar3;
    func_0x000107c614f0(lVar3);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x68) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_100fb1e88;
    lVar5 = *(long *)(lVar4 + 0x40);
    plVar1[7] = *(long *)(lVar4 + 0x48);
    plVar1[8] = lVar3;
    plVar1[6] = lVar5;
    pcVar2 = FUN_100faac74;
  }
  else {
    pcVar2 = FUN_100fb1f58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb1e88; end: 100fb1efb;  */

void FUN_100fb1e88(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(long *)(lVar3 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x78) = param_1;
    pcVar2 = FUN_100fb1efc;
  }
  else {
    pcVar2 = FUN_100fb1fac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb1efc; end: 100fb1f57;  */

void FUN_100fb1efc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  uVar1 = uVar2;
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100fb1f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1f58; end: 100fb1fab;  */

void FUN_100fb1f58(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1 = &UNK_1107a6f08;
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar3;
  **(undefined8 **)(unaff_x22 + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000100fb1fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1fac; end: 100fb1fc3;  */

void FUN_100fb1fac(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000100fb1fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb1fc4; end: 100fb2107;  */

undefined8 FUN_100fb1fc4(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  if ((param_1 & 1) != 0) {
    func_0x000107c4ca10();
    func_0x000107c61180();
    if (param_2 != 0) {
      uStack_58 = 0;
      uVar3 = 0;
      FUN_100fb2944(0,0x112d512f8,&PTR_PTR_1126b25d8);
      func_0x000107c5fc50(param_2,&uStack_58,uVar3);
      func_0x000107c61170(param_2);
      uVar1 = uStack_58;
      if (uStack_58 != 0) {
        uVar8 = uStack_58 & 0xffffffffffffff8;
        if (uStack_58 >> 0x3e == 0) {
          uVar6 = *(ulong *)(uVar8 + 0x10);
        }
        else {
          uVar6 = uStack_58;
          if (-1 < (long)uStack_58) {
            uVar6 = uVar8;
          }
          func_0x000107c60480();
        }
        uVar7 = 0;
        while (uVar6 != uVar7) {
          if ((uVar1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb20f4);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(uVar1 + uVar7 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar7;
            FUN_100fb10dc(uVar7,uVar1);
          }
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb20b8);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000107c4ca5c();
          func_0x000107c61170(uVar4);
          uVar7 = uVar7 + 1;
          if ((int)uVar5 == 2) {
            func_0x000107c6142c(uVar1);
            return 10;
          }
        }
        func_0x000107c6142c(uVar1);
      }
    }
  }
  return 5;
}



/* Entry: 100fb2108; end: 100fb21b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb2108(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x0001000834e4(unaff_x20 + 0x80);
  lVar1 = _DAT_112d513b0;
  lVar2 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112d513b8;
  lVar2 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d513c0));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100fb21b4; end: 100fb21bb;  */

void FUN_100fb21b4(void)

{
  if (lRam0000000112d513f0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61cb30);
  return;
}



/* Entry: 100fb21bc; end: 100fb21f3;  */

void FUN_100fb21bc(undefined8 param_1)

{
  if (lRam0000000112d513f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61cb30);
  return;
}



/* Entry: 100fb21f4; end: 100fb232f;  */

void FUN_100fb21f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBbWV_11034d660 + 0x40;
  puStack_68 = &UNK_10d9180d0;
  puStack_58 = PTR___sBoWV_11034d678 + 0x40;
  puStack_50 = &UNK_10d9180e8;
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_48 = &UNK_10d918100;
  uVar2 = 0x112d50ac0;
  lVar1 = 0x13f;
  func_0x000100fb22e8(0x13f,0x112d50ac0,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112d50ac8;
    lVar1 = 0x13f;
    func_0x000100fb22e8(0x13f,0x112d50ac8,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10d918118;
      func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100fb2330; end: 100fb2373;  */

void FUN_100fb2330(void)

{
  return;
}



/* Entry: 100fb2374; end: 100fb23fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb2374(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = _DAT_112d513c0;
  lVar3 = *(long *)(unaff_x22 + 0x10);
  lVar4 = *(long *)(lVar3 + _DAT_112d513c0);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar4);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar4);
    uVar2 = *(undefined8 *)(lVar3 + lVar1);
  }
  *(undefined8 *)(lVar3 + lVar1) = 0;
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fb23f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb23fc; end: 100fb2463;  */

void FUN_100fb23fc(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  lVar3 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar2 = *unaff_x20;
  *(ulong *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2464,uVar2,0);
  return;
}



/* Entry: 100fb2464; end: 100fb24fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb2464(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined1 *)(unaff_x22 + 0x18) = 2;
  uVar4 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  func_0x000107c5fd28(uVar1,(undefined8 *)(unaff_x22 + 0x10),uVar4);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fb24f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb24fc; end: 100fb2513;  */

void FUN_100fb24fc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2514,uVar1,0);
  return;
}



/* Entry: 100fb2514; end: 100fb256f;  */

void FUN_100fb2514(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar2 = *(ulong *)(*(long *)(unaff_x22 + 0x10) + 0x70);
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fb2558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1 == 0);
  return;
}



/* Entry: 100fb2570; end: 100fb2587;  */

void FUN_100fb2570(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2588,uVar1,0);
  return;
}



/* Entry: 100fb2588; end: 100fb25db;  */

void FUN_100fb2588(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar2 = *(ulong *)(*(long *)(unaff_x22 + 0x10) + 0x70);
  if (uVar2 >> 0x3e != 0) {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100fb25c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb25dc; end: 100fb2737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb25dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_112d513b0;
  lVar3 = *unaff_x20;
  lVar2 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
                    /* WARNING: Could not recover jumptable at 0x000100fb2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100fb2738; end: 100fb274f;  */

void FUN_100fb2738(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2750,uVar1,0);
  return;
}



/* Entry: 100fb2750; end: 100fb278b;  */

void FUN_100fb2750(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100fb2788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fb278c; end: 100fb2793;  */

void FUN_100fb278c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0x112d50c80;
  func_0x0001000285a8(0x112d50c80,&UNK_10d918580);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0x112d50c88;
  uStack_48 = uVar3;
  func_0x0001000285a8(0x112d50c88,&UNK_10d917610);
  func_0x000107c5fd28(auStack_50 + -extraout_x8,&uStack_48,uVar2);
  (**(code **)(lVar4 + 8))(auStack_50 + -extraout_x8,lVar1);
  func_0x000107c5fd2c(uVar2);
  return;
}



/* Entry: 100fb2794; end: 100fb27fb;  */

void FUN_100fb2794(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fb27fc;
  *(undefined1 *)((long)plVar3 + 0x31) = uVar1;
  plVar3[10] = lVar4;
  lVar4 = 0x112d50c40;
  func_0x0001000285a8(0x112d50c40,&UNK_10d9181b0);
  plVar3[0xb] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0xc] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xd] = uVar2;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xe] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb1920,0,0);
  return;
}



/* Entry: 100fb27fc; end: 100fb2837;  */

void FUN_100fb27fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb2834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb2838; end: 100fb28b7;  */

void FUN_100fb2838(long param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fb28b8;
  *(undefined1 *)(plVar2 + 0x10) = uVar1;
  plVar2[5] = param_1;
  plVar2[6] = lVar3;
  lVar3 = *param_2;
  plVar2[7] = param_3;
  plVar2[8] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb1d3c,0,0);
  return;
}



/* Entry: 100fb28b8; end: 100fb2943;  */

void FUN_100fb28b8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb2944; end: 100fb2983;  */

void FUN_100fb2944(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100fb2984; end: 100fb2987;  */

void FUN_100fb2984(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100fb2788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fb2988; end: 100fb2c87;  */

void FUN_100fb2988(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb2a74);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100fb4c74();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb2a78);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb2a7c);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1106a7c78);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb2a80);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 100fb2c88; end: 100fb2cdf;  */

void FUN_100fb2c88(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  puVar1 = PTR_PTR_1133bb5a0;
  *(undefined **)(lVar2 + 0x20) = PTR_PTR_1133bb5a0;
  lRam0000000112d515b0 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar1);
  return;
}



/* Entry: 100fb2ce0; end: 100fb2d3f; -[_TtC29MemoriesQuickCutOrchestration26SnapEditorPreviewPresenter init] */

void FUN_100fb2ce0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesQuickCutOrchestration.SnapEditorPreviewPresenter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb2d0c);
  (*pcVar1)();
}



/* Entry: 100fb2d40; end: 100fb2dbb; -[_TtC29MemoriesQuickCutOrchestration26SnapEditorPreviewPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb2d40(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51538));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51540));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d51548));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d51550));
  FUN_100fb7b0c(param_1 + _DAT_112d51558,0x112d515d0,&UNK_10d918288);
  return;
}



/* Entry: 100fb2dbc; end: 100fb2dc3;  */

void FUN_100fb2dbc(void)

{
  if (lRam0000000112d51588 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61cbe8);
  return;
}



/* Entry: 100fb2dc4; end: 100fb2dfb;  */

void FUN_100fb2dc4(undefined8 param_1)

{
  if (lRam0000000112d51588 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61cbe8);
  return;
}



/* Entry: 100fb2dfc; end: 100fb2ee3;  */

void FUN_100fb2dfc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = &UNK_10d918220;
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  func_0x000100fb2e84();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,5,&puStack_48,param_1 + 0x50);
  }
  return;
}



/* Entry: 100fb2ee4; end: 100fb2f07;  */

void FUN_100fb2ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2f08,0,0);
  return;
}



/* Entry: 100fb2f08; end: 100fb30b3;  */

void FUN_100fb2f08(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar8 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  *(long *)(unaff_x22 + 0x68) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar8 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  *(long *)(unaff_x22 + 0x80) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  lVar8 = 0x112d515c8;
  func_0x0001000285a8(0x112d515c8,&UNK_10d918280);
  lVar9 = *(long *)(lVar8 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar9 + 0x68))();
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    func_0x000100fbb0c8(uVar3,uVar4,uVar5);
  }
  else {
    func_0x000107c5fd10(uVar3,uVar4,&UNK_110371cb0,uVar5,&UNK_110371cb0);
  }
  (**(code **)(lVar9 + 8))(uVar5,lVar8);
  func_0x000107c615c0(uVar5);
  uVar6 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar7 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  uVar7 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb30b4,uVar6,uVar7);
  return;
}



/* Entry: 100fb30b4; end: 100fb31b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb30b4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  lVar9 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  lVar5 = 0x112d515d0;
  func_0x0001000285a8(0x112d515d0,&UNK_10d918288);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  (**(code **)(lVar2 + 0x10))();
  (**(code **)(lVar2 + 0x38))(uVar6,0,1,uVar1);
  lVar5 = _DAT_112d51558;
  func_0x000107c61428(lVar9 + _DAT_112d51558,unaff_x22 + 0x10,0x21,0);
  FUN_100fb77cc(uVar6,lVar9 + lVar5);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar6);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100fb31b8;
  lVar5 = *(long *)(unaff_x22 + 0x58);
  lVar9 = *(long *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  plVar7[7] = *(long *)(unaff_x22 + 0x38);
  plVar7[8] = lVar9;
  plVar7[5] = lVar3;
  plVar7[6] = lVar5;
  plVar7[3] = lVar4;
  plVar7[4] = lVar2;
  plVar7[2] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3314,0,0);
  return;
}



/* Entry: 100fb31b8; end: 100fb3213;  */

void FUN_100fb31b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fb3214;
  }
  else {
    pcVar1 = FUN_100fb3284;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fb3214; end: 100fb3283;  */

void FUN_100fb3214(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x28),uVar2,*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fb3280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb3284; end: 100fb32ef;  */

void FUN_100fb3284(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fb32ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb32f0; end: 100fb3313;  */

void FUN_100fb32f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3314,0,0);
  return;
}



/* Entry: 100fb3314; end: 100fb36d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb3314(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte **ppbVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  byte *pbStack_48;
  ulong uStack_40;
  
  pbVar11 = *(byte **)(unaff_x22 + 0x18);
  pbVar1 = *(byte **)(unaff_x22 + 0x20);
  pbVar7 = (byte *)((ulong)pbVar11 & 0xffffffffffff);
  pbVar9 = (byte *)((ulong)pbVar1 >> 0x38 & 0xf);
  pbVar8 = pbVar7;
  if (((ulong)pbVar1 & 0x2000000000000000) != 0) {
    pbVar8 = pbVar9;
  }
  if (pbVar8 == (byte *)0x0) goto LAB_100fb35b8;
  if (((ulong)pbVar1 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar1 >> 0x3d & 1) != 0) {
      pbStack_48 = pbVar11;
      uStack_40 = (ulong)pbVar1 & 0xffffffffffffff;
      uVar16 = (uint)pbVar11 & 0xff;
      if (uVar16 == 0x2b) {
        if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb36d4);
          (*pcVar3)();
        }
        pbVar9 = pbVar9 + -1;
        if (pbVar9 == (byte *)0x0) goto LAB_100fb3570;
        lVar14 = 0;
        pbVar11 = (byte *)((ulong)&pbStack_48 | 1);
        do {
          if (((9 < *pbVar11 - 0x30) ||
              (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar11 - 0x30), lVar14 = lVar13 + uVar5, SCARRY8(lVar13,uVar5)
             )) goto LAB_100fb3570;
          uVar16 = 0;
          pbVar9 = pbVar9 + -1;
          pbVar11 = pbVar11 + 1;
        } while (pbVar9 != (byte *)0x0);
      }
      else if (uVar16 == 0x2d) {
        if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb36cc);
          (*pcVar3)();
        }
        pbVar9 = pbVar9 + -1;
        if (pbVar9 == (byte *)0x0) {
LAB_100fb3570:
          uVar16 = 1;
        }
        else {
          lVar14 = 0;
          pbVar11 = (byte *)((ulong)&pbStack_48 | 1);
          do {
            if (((9 < *pbVar11 - 0x30) ||
                (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f))
               || (uVar5 = (ulong)(byte)(*pbVar11 - 0x30), lVar14 = lVar13 - uVar5,
                  SBORROW8(lVar13,uVar5))) goto LAB_100fb3570;
            uVar16 = 0;
            pbVar9 = pbVar9 + -1;
            pbVar11 = pbVar11 + 1;
          } while (pbVar9 != (byte *)0x0);
        }
      }
      else {
        if (pbVar9 == (byte *)0x0) goto LAB_100fb3570;
        lVar14 = 0;
        ppbVar12 = &pbStack_48;
        do {
          if (((9 < *(byte *)ppbVar12 - 0x30) ||
              (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30), lVar14 = lVar13 + uVar5,
             SCARRY8(lVar13,uVar5))) goto LAB_100fb3570;
          uVar16 = 0;
          pbVar9 = pbVar9 + -1;
          ppbVar12 = (byte **)((long)ppbVar12 + 1);
        } while (pbVar9 != (byte *)0x0);
      }
      goto LAB_100fb3578;
    }
    if (((ulong)pbVar11 >> 0x3c & 1) == 0) {
      pbVar7 = pbVar1;
      func_0x000107c60358();
    }
    else {
      pbVar11 = (byte *)(((ulong)pbVar1 & 0xfffffffffffffff) + 0x20);
    }
    if (*pbVar11 == 0x2b) {
      pbVar8 = pbVar7 + -1;
      if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb36d0);
        (*pcVar3)();
      }
      if (pbVar8 == (byte *)0x0) goto LAB_100fb35b8;
      lVar14 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        if (((9 < *pbVar11 - 0x30) ||
            (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
           (uVar5 = (ulong)(byte)(*pbVar11 - 0x30), lVar14 = lVar13 + uVar5, SCARRY8(lVar13,uVar5)))
        goto LAB_100fb35b8;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else if (*pbVar11 == 0x2d) {
      pbVar8 = pbVar7 + -1;
      if ((long)pbVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb36c8);
        (*pcVar3)();
      }
      if (pbVar8 == (byte *)0x0) goto LAB_100fb35b8;
      lVar14 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        if (((9 < *pbVar11 - 0x30) ||
            (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
           (uVar5 = (ulong)(byte)(*pbVar11 - 0x30), lVar14 = lVar13 - uVar5, SBORROW8(lVar13,uVar5))
           ) goto LAB_100fb35b8;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else {
      if (pbVar7 == (byte *)0x0) goto LAB_100fb35b8;
      lVar14 = 0;
      pbVar8 = pbVar11;
      while (pbVar8 != (byte *)0x0) {
        if (((9 < *pbVar11 - 0x30) ||
            (lVar13 = lVar14 * 10, SUB168(SEXT816(lVar14) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
           (uVar5 = (ulong)(byte)(*pbVar11 - 0x30), lVar14 = lVar13 + uVar5, SCARRY8(lVar13,uVar5)))
        goto LAB_100fb35b8;
        pbVar7 = pbVar7 + -1;
        pbVar11 = pbVar11 + 1;
        pbVar8 = pbVar7;
      }
    }
  }
  else {
    func_0x000107c61434(pbVar1);
    pbVar8 = pbVar1;
    FUN_100fb6b80(pbVar11,pbVar1,10);
    uVar16 = (uint)pbVar8;
    func_0x000107c6142c(pbVar1);
LAB_100fb3578:
    if ((uVar16 & 0xff) == 1) goto LAB_100fb35b8;
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar4 = PTR_PTR_1126b00c0;
  func_0x000107c610f8(PTR_PTR_1126b00c0);
  func_0x000107c453e4();
  func_0x000107c55218();
  func_0x000107c55bcc(uVar17);
  func_0x000107c61170(puVar4);
LAB_100fb35b8:
  uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar14 = *(long *)(unaff_x22 + 0x18);
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x40) + _DAT_112d51550);
  func_0x000107c42428();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x48) = lVar13;
  FUN_100fb764c(lVar14,pbVar1,uVar17,uVar2);
  *(long *)(unaff_x22 + 0x50) = lVar14;
  lVar10 = *(long *)(lVar14 + _DAT_112facb48);
  *(long *)(unaff_x22 + 0x58) = lVar10;
  lVar18 = *(long *)(lVar14 + _DAT_112facb50);
  *(long *)(unaff_x22 + 0x60) = lVar18;
  plVar15 = (long *)0xa0;
  func_0x000107c61174();
  func_0x000107c61434(lVar18);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_100fb36d4;
  lVar14 = *(long *)(unaff_x22 + 0x40);
  plVar15[9] = *(long *)(unaff_x22 + 0x38);
  plVar15[10] = lVar14;
  plVar15[7] = lVar18;
  plVar15[8] = lVar13;
  plVar15[5] = lVar10;
  plVar15[6] = 1;
  lVar14 = 0;
  func_0x000107c5eea4();
  plVar15[0xb] = lVar14;
  lVar14 = *(long *)(lVar14 + -8);
  plVar15[0xc] = lVar14;
  uVar5 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0xd] = uVar5;
  lVar14 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  plVar15[0xe] = lVar14;
  uVar5 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0xf] = uVar5;
  lVar14 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar5 = *(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x10] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x11] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar15[0x12] = uVar5;
  lVar13 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  lVar14 = lVar13;
  func_0x000107c5fce8();
  plVar15[0x13] = lVar14;
  uVar17 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar13,uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3e4c,lVar13,uVar17);
  return;
}



/* Entry: 100fb36d4; end: 100fb374b;  */

void FUN_100fb36d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  uVar4 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar4);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100fb374c;
  }
  else {
    pcVar2 = (code *)0x100fb3788;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb374c; end: 100fb37c3;  */

void FUN_100fb374c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fb3784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb37c4; end: 100fb37e7;  */

void FUN_100fb37c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb37e8,0,0);
  return;
}



/* Entry: 100fb37e8; end: 100fb3993;  */

void FUN_100fb37e8(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar8 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar8 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  *(long *)(unaff_x22 + 0x68) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  lVar8 = 0x112d515c8;
  func_0x0001000285a8(0x112d515c8,&UNK_10d918280);
  lVar9 = *(long *)(lVar8 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  (**(code **)(lVar9 + 0x68))();
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    func_0x000100fbb0c8(uVar3,uVar4,uVar5);
  }
  else {
    func_0x000107c5fd10(uVar3,uVar4,&UNK_110371cb0,uVar5,&UNK_110371cb0);
  }
  (**(code **)(lVar9 + 8))(uVar5,lVar8);
  func_0x000107c615c0(uVar5);
  uVar6 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar7 = uVar6;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
  uVar7 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3994,uVar6,uVar7);
  return;
}



/* Entry: 100fb3994; end: 100fb3a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb3994(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  lVar3 = 0x112d515d0;
  func_0x0001000285a8(0x112d515d0,&UNK_10d918288);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar2 + 0x10))();
  (**(code **)(lVar2 + 0x38))(uVar4,0,1,uVar1);
  lVar3 = _DAT_112d51558;
  func_0x000107c61428(lVar5 + _DAT_112d51558,unaff_x22 + 0x10,0x21,0);
  FUN_100fb77cc(uVar4,lVar5 + lVar3);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3a74,0,0);
  return;
}



/* Entry: 100fb3a74; end: 100fb3b8b;  */

void FUN_100fb3a74(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x22;
  
  puVar2 = PTR_PTR_1126c81d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  if (lRam0000000112d515a8 != -1) {
    func_0x000107c61568(0x112d515a8,FUN_100fb2c88);
  }
  uVar4 = uRam0000000112d515b0;
  cVar1 = *(char *)(unaff_x22 + 0xb0);
  uVar3 = 0;
  FUN_100f99ab0(0);
  func_0x000107c5fc48(uVar4,uVar3);
  func_0x000107c57538(puVar2);
  func_0x000107c61170(uVar4);
  if (cVar1 == '\x01') {
    func_0x000107c576ec(puVar2);
  }
  lVar5 = 0;
  FUN_100fb7030(0,0,0,*(undefined8 *)(unaff_x22 + 0x40));
  *(long *)(unaff_x22 + 0x90) = lVar5;
  FUN_100fb742c();
  *(long *)(unaff_x22 + 0x98) = lVar5;
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100fb3b8c;
  lVar10 = *(long *)(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  plVar6[9] = *(long *)(unaff_x22 + 0x38);
  plVar6[10] = lVar10;
  plVar6[7] = lVar5;
  plVar6[8] = lVar7;
  plVar6[5] = (long)puVar2;
  plVar6[6] = 1;
  lVar7 = 0;
  func_0x000107c5eea4();
  plVar6[0xb] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0xc] = lVar7;
  uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xd] = uVar8;
  lVar7 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  plVar6[0xe] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar8;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x10] = uVar9;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar8;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar7 = lVar5;
  func_0x000107c5fce8();
  plVar6[0x13] = lVar7;
  uVar4 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3e4c,lVar5,uVar4);
  return;
}



/* Entry: 100fb3b8c; end: 100fb3bef;  */

void FUN_100fb3b8c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100fb3bf0;
  }
  else {
    pcVar2 = FUN_100fb3c88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fb3bf0; end: 100fb3c87;  */

void FUN_100fb3bf0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar7 + 0x20))(uVar8,uVar3,uVar4);
  (**(code **)(lVar2 + 8))(uVar5,uVar6);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fb3c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb3c88; end: 100fb3d17;  */

void FUN_100fb3c88(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar7 + 8))(uVar3,uVar4);
  (**(code **)(lVar2 + 8))(uVar5,uVar6);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fb3d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb3d18; end: 100fb3e4b;  */

void FUN_100fb3d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x58) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  lVar2 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  uVar6 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb3e4c,uVar5,uVar6);
  return;
}



/* Entry: 100fb3e4c; end: 100fb43c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb3e4c(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  undefined8 uVar15;
  
  lVar9 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  lVar3 = *(long *)(lVar9 + _DAT_112d51538);
  func_0x000107c4141c();
  func_0x000107c61180();
  lVar9 = lVar3;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  lVar3 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    lVar9 = lVar3;
    if (lVar4 != 0) {
      lVar9 = *(long *)(unaff_x22 + 0x40);
      func_0x000107c40c40();
      func_0x000107c61180();
      if (lVar9 != 0) {
        func_0x000107c5ee94(*(undefined8 *)(unaff_x22 + 0x90));
        func_0x000107c61170(lVar9);
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar14 = *(long *)(unaff_x22 + 0x70);
      lVar3 = *(long *)(unaff_x22 + 0x78);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar1 = *(long *)(unaff_x22 + 0x60);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x38);
      (*UNRECOVERED_JUMPTABLE)(uVar11,lVar9 == 0,1,uVar12);
      (*UNRECOVERED_JUMPTABLE)(uVar8,1,1,uVar12);
      lVar14 = (long)*(int *)(lVar14 + 0x30);
      func_0x0001009f0578(uVar11,lVar3);
      func_0x0001009f0578(uVar8,lVar3 + lVar14);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
      lVar9 = lVar3;
      (*UNRECOVERED_JUMPTABLE)(lVar3,1,uVar12);
      if ((int)lVar9 == 1) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
        FUN_100fb7b0c(*(undefined8 *)(unaff_x22 + 0x88),0x112d373d8,&UNK_10d9014c0);
        FUN_100fb7b0c(uVar8,0x112d373d8,&UNK_10d9014c0);
        lVar3 = lVar3 + lVar14;
        (*UNRECOVERED_JUMPTABLE)(lVar3,1,uVar12);
        if ((int)lVar3 == 1) {
          uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
          FUN_100fb7b0c(uVar5,0x112d373d8,&UNK_10d9014c0);
LAB_100fb41ac:
          lVar9 = *(long *)(unaff_x22 + 0x60);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
          func_0x000107c5eea0(uVar8);
          func_0x000107c5ee70();
          (**(code **)(lVar9 + 8))(uVar8,uVar11);
          func_0x000107c53ab4(uVar12);
          func_0x000107c61170(uVar5);
        }
        else {
LAB_100fb40d4:
          uVar11 = 0x112d373d0;
          FUN_100fb7b0c(*(undefined8 *)(unaff_x22 + 0x78),0x112d373d0,&UNK_10d90f8f0);
        }
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
        func_0x0001009f0578(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
        lVar9 = lVar3 + lVar14;
        (*UNRECOVERED_JUMPTABLE)(lVar9,1,uVar8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar10 = *(ulong *)(unaff_x22 + 0x80);
        if ((int)lVar9 == 1) {
          uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
          lVar9 = *(long *)(unaff_x22 + 0x60);
          FUN_100fb7b0c(uVar8,0x112d373d8,&UNK_10d9014c0);
          FUN_100fb7b0c(uVar12,0x112d373d8,&UNK_10d9014c0);
          (**(code **)(lVar9 + 8))(uVar10,uVar11);
          goto LAB_100fb40d4;
        }
        uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
        lVar9 = *(long *)(unaff_x22 + 0x60);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
        (**(code **)(lVar9 + 0x20))(uVar13,lVar3 + lVar14,uVar15);
        uVar11 = 0x112d373e0;
        FUN_100fb785c(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                      PTR___s10Foundation4DateVSQAAMc_110350be0);
        uVar6 = uVar10;
        func_0x000107c5fab8(uVar10,uVar13,uVar15,uVar11);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
        (*UNRECOVERED_JUMPTABLE)(uVar13,uVar15);
        uVar11 = 0x112d373d8;
        FUN_100fb7b0c(uVar8,0x112d373d8,&UNK_10d9014c0);
        FUN_100fb7b0c(uVar12,0x112d373d8,&UNK_10d9014c0);
        (*UNRECOVERED_JUMPTABLE)(uVar10,uVar15);
        FUN_100fb7b0c(uVar5,0x112d373d8,&UNK_10d9014c0);
        if ((uVar6 & 1) != 0) goto LAB_100fb41ac;
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
      cVar2 = *(char *)(unaff_x22 + 0x34);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar9 = lVar4;
      func_0x000107c615f0(lVar4);
      func_0x00010011df08();
      func_0x000107c61180();
      lVar3 = lVar9;
      func_0x000107c5faec();
      func_0x000107c61170(lVar9);
      func_0x000103eccdc8(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar5);
      func_0x000107c61174(uVar13);
      func_0x000107c615f0(uVar12);
      func_0x000107c61434(uVar8);
      lVar9 = 0xc;
      func_0x000103ecba40(0xc,uVar13,uVar8,lVar4,uVar5,uVar12,lVar3,uVar11,0,0,0,0,0,0,0);
      if (cVar2 != '\x01') {
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ecc();
        lVar3 = _DAT_11302bbc8;
        func_0x000107c61428(lVar9 + _DAT_11302bbc8,unaff_x22 + 0x10,1,0);
        uVar8 = *(undefined8 *)(lVar9 + lVar3);
        *(undefined **)(lVar9 + lVar3) = puVar7;
        func_0x000107c61170(uVar8);
      }
      lVar3 = *(long *)(unaff_x22 + 0x50);
      uVar8 = *(undefined8 *)(lVar3 + _DAT_112d51548);
      func_0x000107c3ed2c(uVar8);
      func_0x000107c61180();
      lVar14 = *(long *)(lVar3 + _DAT_112d51540);
      lVar3 = lVar14;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar14);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000107c42c1c(lVar14);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar9);
      func_0x000107c615e8(lVar4);
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar12);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar11);
      func_0x000107c615c0(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100fb43a8;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_100fb781c();
  func_0x000107c613f8(&UNK_110372628,lVar9,0,0);
  func_0x000107c61654();
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar5);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100fb43a8:
                    /* WARNING: Could not recover jumptable at 0x000100fb43c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fb43c8; end: 100fb4467;  */

void FUN_100fb43c8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fb4468;
  plVar1[0xb] = param_7;
  plVar1[0xc] = lVar2;
  plVar1[9] = param_5;
  plVar1[10] = param_6;
  plVar1[7] = param_3;
  plVar1[8] = param_4;
  plVar1[5] = param_1;
  plVar1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb2f08,0,0);
  return;
}



/* Entry: 100fb4468; end: 100fb44a3;  */

void FUN_100fb4468(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb44a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb44a4; end: 100fb4527;  */

void FUN_100fb44a4(long param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fb7cc0;
  plVar1[8] = param_4;
  plVar1[9] = lVar2;
  *(undefined1 *)(plVar1 + 0x16) = param_5;
  plVar1[6] = param_2;
  plVar1[7] = param_3;
  plVar1[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb37e8,0,0);
  return;
}



/* Entry: 100fb4528; end: 100fb452b;  */

void FUN_100fb4528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126c81d8;
  func_0x000107c610f8(PTR_PTR_1126c81d8);
  func_0x000107c453e4();
  if (lRam0000000112d515a8 != -1) {
    func_0x000107c61568(0x112d515a8,FUN_100fb2c88);
  }
  uVar7 = uRam0000000112d515b0;
  lVar4 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar2 = PTR_PTR_1133bb588;
  puVar1 = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x20) = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61434(uVar7);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000100fb2a80(lVar4);
  uVar5 = 0;
  FUN_100f99ab0(0);
  uVar6 = uVar7;
  func_0x000107c5fc48(uVar7,uVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c57538(puVar3);
  func_0x000107c61170(uVar6);
  FUN_100fb7030(param_1,param_2,param_3,param_4);
  uVar7 = param_1;
  FUN_100fb742c();
  func_0x000107c61170(param_1);
  func_0x0001038e138c(0);
  func_0x000107c610f8();
  func_0x0001038e11e8(puVar3,uVar7);
  return;
}



/* Entry: 100fb452c; end: 100fb465f;  */

void FUN_100fb452c(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined1 *)(unaff_x22 + 0xf9) = param_3;
  *(undefined1 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  lVar6 = 0x112d515d0;
  func_0x0001000285a8(0x112d515d0,&UNK_10d918288);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  lVar6 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  *(long *)(unaff_x22 + 200) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar6 = 0x112d515f0;
  func_0x0001000285a8(0x112d515f0,&UNK_10d9182d8);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
  uVar5 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb4660,uVar4,uVar5);
  return;
}



/* Entry: 100fb4660; end: 100fb49eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb4660(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  
  lVar6 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  lVar9 = _DAT_112d51558;
  if (lVar6 == 0) goto LAB_100fb4984;
  if (((*(byte *)(unaff_x22 + 0xf8) & 1) == 0) && (*(char *)(unaff_x22 + 0xf9) == '\0')) {
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    lVar1 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c61428(lVar6 + _DAT_112d51558,unaff_x22 + 0x28,0,0);
    pcVar14 = *(code **)(lVar1 + 0x30);
    uVar12 = 1;
    lVar1 = lVar6 + lVar9;
    (*pcVar14)(lVar1,1,uVar8);
    if ((int)lVar1 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar12 = *(undefined8 *)(unaff_x22 + 200);
      lVar1 = *(long *)(unaff_x22 + 0xd0);
      (**(code **)(lVar1 + 0x10))(uVar8,lVar6 + lVar9,uVar12);
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      func_0x000107c5fd28(uVar11,unaff_x22 + 0x88,uVar12);
      (**(code **)(lVar1 + 8))(uVar8,uVar12);
      lVar9 = 0xe0;
LAB_100fb4880:
      uVar12 = 0;
    }
    else {
      lVar9 = 0xe0;
    }
  }
  else {
    uVar10 = *(ulong *)(unaff_x22 + 0xb0);
    uVar15 = uVar10 & 0xffffffffffffff8;
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar15 + 0x10);
      uVar5 = uVar10;
    }
    else {
      uVar7 = uVar15;
      if (0x7fffffffffffffff < uVar10) {
        uVar7 = uVar10;
      }
      func_0x000107c60480();
      uVar5 = *(ulong *)(unaff_x22 + 0xb0);
    }
    uVar2 = 0;
    do {
      uVar4 = uVar2;
      if (uVar7 == uVar4) break;
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar15 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100fb49d4);
          (*pcVar14)();
        }
        uVar2 = *(ulong *)(uVar5 + 0x20 + uVar4 * 8);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar4;
        FUN_100fb1534(uVar4,*(undefined8 *)(unaff_x22 + 0xb0));
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100fb4794);
        (*pcVar14)();
      }
      uVar3 = uVar2;
      func_0x000107c5d0f0();
      func_0x000107c61170(uVar2);
      uVar2 = uVar4 + 1;
    } while ((int)uVar3 != 2);
    lVar1 = _DAT_112d51558;
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    lVar9 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c61428(lVar6 + _DAT_112d51558,unaff_x22 + 0x70,0,0);
    pcVar14 = *(code **)(lVar9 + 0x30);
    uVar12 = 1;
    lVar9 = lVar6 + lVar1;
    (*pcVar14)(lVar9,1,uVar8);
    if ((int)lVar9 == 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar9 = *(long *)(unaff_x22 + 0xd0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar11 = *(undefined8 *)(unaff_x22 + 200);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      (**(code **)(lVar9 + 0x10))(uVar8,lVar6 + lVar1,uVar11);
      *(ulong *)(unaff_x22 + 0x98) = (ulong)(uVar7 != uVar4);
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar13;
      func_0x000107c61434(uVar13);
      func_0x000107c5fd28(uVar12,unaff_x22 + 0x98,uVar11);
      (**(code **)(lVar9 + 8))(uVar8,uVar11);
      lVar9 = 0xe8;
      goto LAB_100fb4880;
    }
    lVar9 = 0xe8;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + lVar9);
  lVar1 = 0x112d515f8;
  func_0x0001000285a8(0x112d515f8,&UNK_10d9182e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar8,uVar12,1,lVar1);
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  FUN_100fb7b0c(*(undefined8 *)(unaff_x22 + lVar9),0x112d515f0,&UNK_10d9182d8);
  lVar1 = _DAT_112d51558;
  func_0x000107c61428(lVar6 + _DAT_112d51558,unaff_x22 + 0x40,0,0);
  lVar9 = lVar6 + lVar1;
  (*pcVar14)(lVar9,1,uVar8);
  if ((int)lVar9 == 0) {
    lVar9 = *(long *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    (**(code **)(lVar9 + 0x10))(uVar8,lVar6 + lVar1,uVar12);
    func_0x000107c5fd2c(uVar12);
    (**(code **)(lVar9 + 8))(uVar8,uVar12);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x38))(uVar8,1,1,*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61428(lVar6 + lVar1,unaff_x22 + 0x58,0x21,0);
  FUN_100fb77cc(uVar8,lVar6 + lVar1);
  func_0x000107c614a8(unaff_x22 + 0x58);
  func_0x000107c61170(lVar6);
LAB_100fb4984:
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100fb49cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb49ec; end: 100fb4a97; -[_TtC29MemoriesQuickCutOrchestration26SnapEditorPreviewPresenter snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

/* WARNING: Possible PIC construction at 0x000100fb4a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fb4a80) */

void FUN_100fb49ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  uVar1 = 0;
  func_0x000100fb7b4c(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c61174(param_1);
  FUN_100fb789c(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 100fb4a98; end: 100fb4a9f;  */

undefined8 FUN_100fb4a98(void)

{
  return 1;
}



/* Entry: 100fb4aa0; end: 100fb4b3f;  */

void FUN_100fb4aa0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100fb4b40; end: 100fb4b5f;  */

void FUN_100fb4b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE16errorDescriptionSSSgvg_1103506c0)();
  return;
}



/* Entry: 100fb4b60; end: 100fb4c5f;  */

undefined * FUN_100fb4b60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb4c60);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d51618;
    func_0x0001000285a8(0x112d51618,&UNK_10d918310);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100fb4c60; end: 100fb4c73;  */

ulong FUN_100fb4c60(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb5010);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,FUN_100fb09b0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb500c);
      (*pcVar1)();
    }
    FUN_100fb56c0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb4c74; end: 100fb4d7b;  */

undefined * FUN_100fb4c74(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb4d7c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d51018;
    func_0x0001000285a8(0x112d51018,&UNK_10d9182f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1106a7c78);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x10 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100fb4d7c; end: 100fb4ebf;  */

undefined * FUN_100fb4d7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb4ec0);
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
    puVar3 = (undefined *)0x112d51608;
    func_0x0001000285a8(0x112d51608,&UNK_10d918300);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d51610;
    func_0x0001000285a8(0x112d51610,&UNK_10d918308);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100fb4ec0; end: 100fb4ed3;  */

ulong FUN_100fb4ec0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb5010);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,0x100fb0a60);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb500c);
      (*pcVar1)();
    }
    (*(code *)0x100fb57d8)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb4ed4; end: 100fb500f;  */

ulong FUN_100fb4ed4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb5010);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb500c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}


