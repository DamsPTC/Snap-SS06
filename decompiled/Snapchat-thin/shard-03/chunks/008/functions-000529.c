/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cefe54; end: 102ceff83;  */

undefined8
FUN_102cefe54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar4 = &puStack_f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x102cf0ad4;
  puStack_78 = &UNK_1105c10c0;
  ppuVar2 = &puStack_90;
  uStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c60bc4(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100f7177c;
  puStack_a8 = &UNK_1105c10e8;
  ppuVar3 = &puStack_c0;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000107c60bc4(ppuVar3);
  puStack_f0 = puVar1;
  uStack_e8 = 0x42000000;
  puStack_e0 = &UNK_100c75f50;
  puStack_d8 = &UNK_1105c1110;
  uStack_d0 = param_5;
  uStack_c8 = param_6;
  func_0x000107c60bc4(&puStack_f0);
  func_0x000107c48330();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_68);
  return unaff_x20;
}



/* Entry: 102ceff84; end: 102ceffcf;  */

void FUN_102ceff84(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102ceffd0; end: 102ceffe3;  */

ulong FUN_102ceffd0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf00c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf00cc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ac088;
    func_0x000107c61168(PTR_PTR_1126ac088);
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
    puVar4 = PTR_PTR_1126ac088;
    func_0x000107c61168(PTR_PTR_1126ac088);
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
  func_0x000102cf0a6c(0,0x112efcdd8,&PTR_PTR_1126ac088);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf01a0);
  (*pcVar2)();
}



/* Entry: 102ceffe4; end: 102cf019f;  */

ulong FUN_102ceffe4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf00c8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf00cc);
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
  func_0x000102cf0a6c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf01a0);
  (*pcVar2)();
}



/* Entry: 102cf01a0; end: 102cf01c7;  */

void FUN_102cf01a0(void)

{
  FUN_102cee104();
  return;
}



/* Entry: 102cf01c8; end: 102cf01cf;  */

void FUN_102cf01c8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105c0f68;
    func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    puVar3 = &UNK_1105c1148;
    func_0x000107c613fc(&UNK_1105c1148,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    uVar4 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar5 = 6;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db40020,puVar3,uVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 102cf01d0; end: 102cf01f7;  */

void FUN_102cf01d0(void)

{
  FUN_102cee104();
  return;
}



/* Entry: 102cf01f8; end: 102cf0223;  */

void FUN_102cf01f8(long param_1,long param_2)

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



/* Entry: 102cf0224; end: 102cf028f;  */

void FUN_102cf0224(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102cf0290;
  plVar3[7] = lVar1;
  plVar3[8] = lVar4;
  plVar3[5] = param_1;
  plVar3[6] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cef3b0,lVar1,lVar2);
  return;
}



/* Entry: 102cf0290; end: 102cf02cb;  */

void FUN_102cf0290(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102cf02c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102cf02cc; end: 102cf033f;  */

void FUN_102cf02cc(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102cf0ad8;
  plVar1[7] = lVar3;
  plVar1[8] = lVar4;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cef064,lVar3,lVar2);
  return;
}



/* Entry: 102cf0340; end: 102cf042f;  */

void FUN_102cf0340(undefined1 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_102cf3250();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf03fc);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_102cf057c(lVar4);
    uVar2 = param_2;
    FUN_102cf3250();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1105c39d8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf03d0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102cf0430();
    lVar4 = *unaff_x20;
    goto joined_r0x000102cf0410;
  }
  lVar4 = *unaff_x20;
joined_r0x000102cf0410:
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar2) = param_1;
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar4 + 0x30) + uVar2) = (char)param_2;
  *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar2) = param_1;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf3354);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 102cf0430; end: 102cf057b;  */

void FUN_102cf0430(void)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112f0cf10,&UNK_10db40058);
  lVar10 = *unaff_x20;
  lVar4 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar10 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar10 + 0x40);
    lVar8 = lVar6;
    if (uVar5 == 0) goto LAB_102cf0508;
    do {
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 << 6;
      while( true ) {
        uVar2 = *(undefined1 *)(*(long *)(lVar10 + 0x38) + uVar9);
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar9) =
             *(undefined1 *)(*(long *)(lVar10 + 0x30) + uVar9);
        *(undefined1 *)(*(long *)(lVar4 + 0x38) + uVar9) = uVar2;
        lVar8 = lVar6;
        if (uVar5 != 0) break;
LAB_102cf0508:
        do {
          lVar6 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102cf057c);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar6) goto LAB_102cf055c;
          uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar6 * 0x40;
      }
    } while( true );
  }
LAB_102cf055c:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102cf057c; end: 102cf07ef;  */

void FUN_102cf057c(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f0cf10;
  func_0x0001000285a8(0x112f0cf10,&UNK_10db40058);
  lVar7 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar6);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102cf07bc:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar7;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cf07ec);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_102cf07bc;
        }
        uVar14 = puVar15[lVar17];
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar17 << 6;
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + uVar8);
    uVar16 = (ulong)bVar2;
    uVar3 = *(undefined1 *)(*(long *)(lVar13 + 0x38) + uVar8);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar16 = uVar16 & (uVar12 ^ 0xffffffffffffffff);
    uVar10 = uVar16 >> 6;
    uVar8 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar12 >> 6;
      do {
        uVar16 = uVar10 + 1;
        if ((uVar16 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cf07f0);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar16 != uVar8) {
          uVar10 = uVar16;
        }
        bVar4 = (bool)(uVar16 == uVar8 | bVar4);
        uVar16 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar8 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(byte *)(*(long *)(lVar7 + 0x30) + uVar8) = bVar2;
    *(undefined1 *)(*(long *)(lVar7 + 0x38) + uVar8) = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Entry: 102cf07f0; end: 102cf0853;  */

void FUN_102cf07f0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102cf0adc;
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
  plVar3[5] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cee274,lVar1,lVar2);
  return;
}



/* Entry: 102cf0854; end: 102cf0897;  */

undefined8 FUN_102cf0854(int param_1)

{
  if (param_1 - 1U < 9) {
    return *(undefined8 *)(&UNK_10db40060 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 102cf0898; end: 102cf08ff;  */

void FUN_102cf0898(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102cf0ae0;
  plVar1[7] = lVar3;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cedf00,lVar3,lVar2);
  return;
}



/* Entry: 102cf0900; end: 102cf092b;  */

void FUN_102cf0900(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102cf092c; end: 102cf098f;  */

void FUN_102cf092c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102cf0ae4;
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
  plVar3[5] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cedcfc,lVar1,lVar2);
  return;
}



/* Entry: 102cf0990; end: 102cf099f;  */

void FUN_102cf0990(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102cf09a0; end: 102cf0aab;  */

void FUN_102cf09a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10db4158c;
    func_0x000107c61520(&DAT_10db4158c,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102cf0aac; end: 102cf0ae7;  */

void FUN_102cf0aac(long param_1,long param_2)

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



/* Entry: 102cf0ae8; end: 102cf0aef; -[_TtC40AdOperaLayerFactoryServiceImplementation22AdPageabilityLayerView hitTest:withEvent:] */

void FUN_102cf0ae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102cf0af0; end: 102cf0b5b; -[_TtC40AdOperaLayerFactoryServiceImplementation22AdPageabilityLayerView initWithFrame:] */

void FUN_102cf0af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102cf0b5c; end: 102cf0bdb; -[_TtC40AdOperaLayerFactoryServiceImplementation22AdPageabilityLayerView initWithCoder:] */

undefined1 * FUN_102cf0b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102cf0bdc; end: 102cf0bfb;  */

void FUN_102cf0bdc(void)

{
  func_0x000107c61168(&PTR_PTR_11289fae0);
  return;
}



/* Entry: 102cf0bfc; end: 102cf0c7b;  */

void FUN_102cf0bfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  
  func_0x0001018e929c(param_2,auStack_48);
  uVar1 = 0x112f03b88;
  func_0x0001000285a8(0x112f03b88,&UNK_10db37850);
  uVar2 = 0x112f03b90;
  func_0x0001000285a8(0x112f03b90,&UNK_10db3f9e0);
  puVar3 = param_1;
  func_0x000107c6147c(param_1,auStack_48,uVar1,uVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 102cf0c7c; end: 102cf0d0b;  */

uint FUN_102cf0c7c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,lVar2);
  (**(code **)(lVar3 + 0x20))();
  uVar1 = 0;
  if (param_3 != 0) {
    if (lVar2 == param_2 && param_3 == lVar3) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)lVar2;
    }
  }
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 102cf0d0c; end: 102cf0efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf0d0c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  ulong *puStack_68;
  ulong *puStack_58;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar5);
  FUN_102d2468c(&uStack_78,&UNK_1105c3940,uVar5,&UNK_1105c3940,uVar7,&PTR_DAT_1105c3310,param_1);
  if (puStack_68 == (ulong *)0x0) {
    return;
  }
  puVar6 = &uStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar6,0,0);
  uVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    func_0x000107c6142c(puStack_58);
    goto LAB_102cf0edc;
  }
  func_0x000107c61434(puStack_68);
  uVar3 = uVar2;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c61170(uVar2);
    func_0x000107c61430(puStack_68,2);
    puStack_68 = puStack_58;
    goto LAB_102cf0edc;
  }
  uVar4 = uVar3;
  func_0x000107c3b9ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  if ((uStack_70 == uVar3) && (puStack_68 == puVar6)) {
    func_0x000107c6142c(puStack_68);
    func_0x000107c6142c(puVar6);
LAB_102cf0e64:
    lVar1 = _DAT_112f0cf48;
    func_0x000107c61428(uVar2 + _DAT_112f0cf48,auStack_90,0x21,0);
    uVar5 = *(undefined8 *)(uVar2 + lVar1);
    func_0x000107c61558(uVar5);
    uVar7 = *(undefined8 *)(uVar2 + lVar1);
    *(undefined8 *)(uVar2 + lVar1) = 0x8000000000000000;
    FUN_102cf0340(uStack_78 >> 8,uStack_78,uVar5);
    *(undefined8 *)(uVar2 + lVar1) = uVar7;
    func_0x000107c614a8(auStack_90);
    FUN_102cf0ff0();
  }
  else {
    uVar4 = uStack_70;
    func_0x000107c605b8(uStack_70,puStack_68,uVar3,puVar6,0);
    func_0x000107c6142c(puStack_68);
    func_0x000107c6142c(puVar6);
    if ((uVar4 & 1) != 0) goto LAB_102cf0e64;
  }
  func_0x000107c6142c(puStack_68);
  func_0x000107c61170(uVar2);
  puStack_68 = puStack_58;
LAB_102cf0edc:
  func_0x000107c6142c(puStack_68);
  return;
}



/* Entry: 102cf0efc; end: 102cf0fe3;  */

/* WARNING: Possible PIC construction at 0x000102cf0f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf0f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf0fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf0f58) */
/* WARNING: Removing unreachable block (ram,0x000102cf0fb8) */
/* WARNING: Removing unreachable block (ram,0x000102cf0f6c) */
/* WARNING: Removing unreachable block (ram,0x000102cf0f30) */
/* WARNING: Removing unreachable block (ram,0x000102cf0fb4) */
/* WARNING: Removing unreachable block (ram,0x000102cf0f44) */
/* WARNING: Removing unreachable block (ram,0x000102cf0fa4) */

void FUN_102cf0efc(undefined8 param_1)

{
  FUN_102cf0bdc();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf0fe4; end: 102cf0fef;  */

undefined8 FUN_102cf0fe4(void)

{
  return 0;
}



/* Entry: 102cf0ff0; end: 102cf1157;  */

/* WARNING: Possible PIC construction at 0x000102cf1118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf112c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf113c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf111c) */
/* WARNING: Removing unreachable block (ram,0x000102cf1130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf0ff0(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar3 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  uVar4 = 0;
  func_0x000103b985c4(0);
  puVar5 = puVar3;
  func_0x000107c61480(puVar3,uVar4);
  lVar1 = _DAT_112f0cf48;
  if ((puVar5 != (undefined *)0x0) && (puVar5[_DAT_112ff24f0] == '\x01')) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0cf48,auStack_48,0x20,0);
    if (*(long *)(*(long *)(unaff_x20 + lVar1) + 0x10) != 0) {
      FUN_102cf3250();
    }
    func_0x000107c614a8(auStack_48);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cf1158);
      (*pcVar2)();
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c3fdd0(0x3fe3333333333333);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 102cf1158; end: 102cf117b;  */

void FUN_102cf1158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102cf12a8(param_3);
  return;
}



/* Entry: 102cf117c; end: 102cf11a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf117c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0cf40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + _DAT_112f0cf48));
  return;
}



/* Entry: 102cf11a8; end: 102cf11ab;  */

void FUN_102cf11a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cf11ac; end: 102cf11df;  */

void FUN_102cf11ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cf11e0; end: 102cf1217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf11e0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0cf40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0cf48));
  return;
}



/* Entry: 102cf1218; end: 102cf129f;  */

void FUN_102cf1218(undefined8 param_1)

{
  if (lRam0000000112f0cf78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e728c48);
  return;
}



/* Entry: 102cf12a0; end: 102cf12a7;  */

void FUN_102cf12a0(void)

{
  if (lRam0000000112f0cf78 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e728c48);
  return;
}



/* Entry: 102cf12a8; end: 102cf1353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cf12a8(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = _DAT_112f0cf48;
  uVar3 = param_1 - 1;
  if ((uVar3 < 6) && ((0x3bU >> (ulong)((uint)uVar3 & 0x1f) & 1) != 0)) {
    puVar2 = auStack_48;
    func_0x000107c61428(unaff_x20 + _DAT_112f0cf48,puVar2,0x20,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar3 = 0x10004000203 >> (uVar3 * 8 & 0x38);
      FUN_102cf3250();
      if (((ulong)puVar2 & 1) != 0) {
        bVar1 = *(byte *)(*(long *)(lVar4 + 0x38) + uVar3);
        func_0x000107c614a8(auStack_48);
        return (ulong)bVar1 - 1;
      }
    }
    func_0x000107c614a8(auStack_48);
  }
  return -1;
}



/* Entry: 102cf1354; end: 102cf1357;  */

void FUN_102cf1354(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cf1358; end: 102cf13bb; -[_TtC40AdOperaLayerFactoryServiceImplementation21AdTapTooltipLayerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf1358(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112f0d070) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdOperaLayerFactoryServiceImplementation/TapTooltipLayerView.swift",0x42,2,
                      0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf13bc);
  (*pcVar1)();
}



/* Entry: 102cf13bc; end: 102cf141b; -[_TtC40AdOperaLayerFactoryServiceImplementation21AdTapTooltipLayerView initWithFrame:] */

void FUN_102cf13bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdTapTooltipLayerView",0x3e,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf13e8);
  (*pcVar1)();
}



/* Entry: 102cf141c; end: 102cf1463; -[_TtC40AdOperaLayerFactoryServiceImplementation21AdTapTooltipLayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102cf1448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf144c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf141c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0d068));
  return;
}



/* Entry: 102cf1464; end: 102cf1483;  */

void FUN_102cf1464(void)

{
  func_0x000107c61168(&PTR_PTR_11289fc40);
  return;
}



/* Entry: 102cf1484; end: 102cf1503;  */

void FUN_102cf1484(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  
  func_0x000102cf39b8(param_2,auStack_48);
  uVar1 = 0x112f03b88;
  func_0x0001000285a8(0x112f03b88,&UNK_10db37850);
  uVar2 = 0x112f03b90;
  func_0x0001000285a8(0x112f03b90,&UNK_10db3f9e0);
  puVar3 = param_1;
  func_0x000107c6147c(param_1,auStack_48,uVar1,uVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 102cf1504; end: 102cf1593;  */

uint FUN_102cf1504(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,lVar2);
  (**(code **)(lVar3 + 0x20))();
  uVar1 = 0;
  if (param_3 != 0) {
    if (lVar2 == param_2 && param_3 == lVar3) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)lVar2;
    }
  }
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 102cf1594; end: 102cf180b;  */

void FUN_102cf1594(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  undefined8 uStack_120;
  byte abStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(&uStack_d0,&UNK_1105c41d8,uVar1,&UNK_1105c41d8,uVar2,&PTR_DAT_1105c33a8,lVar4);
  if (lStack_b0 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_178,0,0);
    lVar4 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      FUN_102cf3698((uint)uStack_c0 & 1);
      func_0x000107c61170(lVar4);
    }
    FUN_102c8136c(uStack_d0,uStack_c8,uStack_c0,uStack_b8,lStack_b0,uStack_a8,lStack_a0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(abStack_118,&UNK_1105c3dc8,uVar1,&UNK_1105c3dc8,uVar2,&PTR_DAT_1105c3358,lVar4);
  bVar3 = abStack_118[0];
  uStack_c8 = uStack_110;
  uStack_b8 = uStack_100;
  uStack_c0 = uStack_108;
  uStack_a8 = uStack_f0;
  lStack_b0 = uStack_f8;
  uStack_98 = uStack_e0;
  lStack_a0 = lStack_e8;
  uStack_90 = uStack_d8;
  if (lStack_e8 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_160,0,0);
    lVar4 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      abStack_118[0] = bVar3 & 1;
      FUN_102cf180c(abStack_118);
      func_0x000107c61170(lVar4);
    }
    FUN_102cf3938(&uStack_d0,0x112f0d250,&UNK_10db40200);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d2468c(&uStack_148,&UNK_1105c3d48,uVar1,&UNK_1105c3d48,uVar2,&PTR_DAT_1105c3350,param_1);
  if (lStack_130 != 0) {
    func_0x000107c61428(param_2 + 0x10,&uStack_148,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(uStack_120);
      func_0x000107c6142c(lStack_130);
    }
    else {
      FUN_102cf374c(uStack_148,uStack_140);
      func_0x000107c6142c(uStack_120);
      func_0x000107c6142c(lStack_130);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102cf180c; end: 102cf19c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf180c(uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = 0;
  uVar12 = 0;
  uVar10 = 0;
  uVar9 = 0;
  if ((*param_1 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 6);
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)(param_1 + 2);
    uVar12 = *(undefined8 *)(param_1 + 4);
  }
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f0d0b0);
  uVar1 = puVar6[3];
  lVar3 = puVar6[4];
  func_0x0001000a8868(puVar6,uVar1);
  func_0x000103b828b8();
  uVar2 = *puVar6;
  uVar4 = puVar6[1];
  func_0x000107c61434(uVar4);
  func_0x000107c4e230();
  func_0x000107c61180();
  puVar6 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar6[3] = 2;
  puVar6[2] = 1;
  puVar7 = puVar6;
  func_0x000103b828f4();
  uVar5 = puVar7[1];
  puVar6[4] = *puVar7;
  puVar6[5] = uVar5;
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar5);
  func_0x000107c5dc54(uVar11,uVar12,uVar10,uVar9);
  func_0x000107c61180();
  uVar9 = 0;
  func_0x000102cf3978(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar6[9] = uVar9;
  puVar6[6] = puVar8;
  puVar7 = puVar6;
  func_0x000100214a84(puVar6);
  func_0x000107c61588(puVar6);
  func_0x000102cf3938(puVar6 + 4,0x112d4b5f0,&UNK_10d9127d0);
  (**(code **)(lVar3 + 0x20))(uVar2,uVar4,unaff_x20,puVar7,uVar1,lVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102cf19c4; end: 102cf1b4b;  */

/* WARNING: Possible PIC construction at 0x000102cf1a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf1b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf1aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf1a60) */
/* WARNING: Removing unreachable block (ram,0x000102cf1a6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf19c4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined *)0x0) {
    return;
  }
  puVar2 = *(undefined **)(param_2 + _DAT_112ff25d8);
  if (param_1 == 0) {
    if (puVar2 != (undefined *)0x0) goto LAB_102cf1a8c;
LAB_102cf1ab8:
    func_0x000107c61174(param_2);
  }
  else {
    puVar4 = *(undefined **)(param_1 + _DAT_112ff25d8);
    puVar1 = puVar4;
    func_0x000107c61174(puVar4);
    if (puVar2 == (undefined *)0x0) {
      if (puVar4 != (undefined *)0x0) {
        func_0x000107c61174(param_2);
        param_2 = puVar1;
        goto code_r0x000107c61170;
      }
      goto LAB_102cf1ab8;
    }
    if (puVar4 != (undefined *)0x0) {
      func_0x000102cf3978(0,0x112f09848,&PTR_PTR_1126ac1d0);
      func_0x000107c61174(param_2);
      func_0x000107c61174(puVar2);
      func_0x000107c60118();
      param_2 = puVar2;
      goto code_r0x000107c61170;
    }
LAB_102cf1a8c:
    func_0x000107c61174(param_2);
    FUN_102cf1b4c();
  }
  if ((((param_2[_DAT_112ff25e8] & 1) == 0) && (param_2[_DAT_112ff25e0] == '\x01')) &&
     ((param_1 == 0 || ((*(byte *)(param_1 + _DAT_112ff25e0) & 1) == 0)))) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0d0c0);
    param_2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar3);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cf1b4c; end: 102cf1d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf1b4c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  
  lVar2 = _DAT_112f0d0b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d0b8,auStack_80,0,0);
  FUN_102cf3650(unaff_x20 + lVar2,auStack_a8,0x112f0d228,&UNK_10db401a0);
  if (lStack_90 == 0) {
    FUN_102cf3938(auStack_a8,0x112f0d228,&UNK_10db401a0);
    return;
  }
  func_0x000102cf30f8(auStack_a8,auStack_68);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000103b9a070(0);
    lVar4 = lVar2;
    func_0x000107c61480(lVar2,uVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar7 = *(long *)(lVar4 + _DAT_112ff25d8);
      lVar4 = lVar7;
      func_0x000107c61174();
      func_0x000107c61170(lVar2);
      if (lVar7 != 0) {
        FUN_102cf1d1c(lVar4);
        lVar2 = unaff_x20;
        func_0x000107c4aba4();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar7 = lVar2;
          func_0x000107c61480();
          if (lVar7 == 0) {
            func_0x000107c61170(lVar4);
            lVar4 = lVar2;
          }
          else {
            bVar1 = *(byte *)(lVar7 + _DAT_112ff25e8);
            func_0x000107c61170(lVar2);
            if ((bVar1 & 1) != 0) {
              lVar2 = lVar4;
              func_0x000107c5c720();
              func_0x000107c61180();
              if (lVar2 != 0) {
                func_0x000107c61170(lVar2);
              }
              uVar5 = (ulong)(lVar2 != 0);
              uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0d0d0);
              func_0x000107c5fca0(uVar5);
              func_0x000107c4d664(uVar3);
              func_0x000107c61170(uVar5);
            }
          }
        }
        func_0x000107c61170(lVar4);
        goto LAB_102cf1cfc;
      }
    }
  }
  puVar6 = auStack_68;
  func_0x0001000a8868(puVar6,uStack_50);
  func_0x000107c550d8(*puVar6);
LAB_102cf1cfc:
  func_0x0001000834e4(auStack_68);
  return;
}



/* Entry: 102cf1d1c; end: 102cf21bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf1d1c(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  long alStack_a0 [3];
  undefined8 uStack_88;
  
  lVar3 = _DAT_112f0d0b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d0b8,auStack_b8,0,0);
  FUN_102cf3650(unaff_x20 + lVar3,&puStack_e8,0x112f0d228,&UNK_10db401a0);
  if (puStack_d0 == (undefined *)0x0) {
    FUN_102cf3938(&puStack_e8,0x112f0d228,&UNK_10db401a0);
    return;
  }
  func_0x000102cf30f8(&puStack_e8,alStack_a0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0d0a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) goto LAB_102cf2194;
  lVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_102cf1e34:
    plVar6 = (long *)&DAT_112f0d0c8;
  }
  else {
    uVar5 = 0;
    func_0x000103b9a070(0);
    lVar16 = lVar4;
    func_0x000107c61480(lVar4,uVar5);
    if (lVar16 == 0) {
      func_0x000107c61170(lVar4);
      goto LAB_102cf1e34;
    }
    bVar1 = *(byte *)(lVar16 + _DAT_112ff25e8);
    func_0x000107c61170(lVar4);
    if ((bVar1 & 1) == 0) goto LAB_102cf1e34;
    plVar6 = (long *)&DAT_112f0d0d0;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + *plVar6);
  func_0x000107c5cb24();
  func_0x000107c61180();
  plVar6 = alStack_a0;
  func_0x0001000a8868(plVar6,uStack_88);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0d0c0);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  puVar11 = &UNK_1105c1258;
  puVar8 = puVar11;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = puVar11;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = puVar11;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar17 = PTR_PTR_1126ac2c8;
  func_0x000107c610f8();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x102cf3110;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0x42000000;
  pcStack_d8 = FUN_102a70bf8;
  puStack_d0 = &UNK_1105c1270;
  ppuVar12 = &puStack_e8;
  puStack_c0 = puVar8;
  func_0x000107c60bc4(ppuVar12);
  pcStack_f8 = FUN_102cf3118;
  puStack_118 = puVar2;
  uStack_110 = 0x42000000;
  puStack_108 = &UNK_100f70bd8;
  puStack_100 = &UNK_1105c1298;
  ppuVar13 = &puStack_118;
  puStack_f0 = puVar9;
  func_0x000107c60bc4(ppuVar13);
  uStack_128 = 0x102cf3140;
  puStack_148 = puVar2;
  uStack_140 = 0x42000000;
  puStack_138 = &UNK_100f70bd8;
  puStack_130 = &UNK_1105c12c0;
  ppuVar14 = &puStack_148;
  puStack_120 = puVar10;
  func_0x000107c60bc4(ppuVar14);
  pcStack_158 = FUN_102cf3168;
  puStack_178 = puVar2;
  uStack_170 = 0x42000000;
  puStack_168 = &UNK_100f71478;
  puStack_160 = &UNK_1105c12e8;
  ppuVar15 = &puStack_178;
  puStack_150 = puVar11;
  func_0x000107c60bc4();
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar11);
  func_0x000107c486dc();
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puStack_150);
  func_0x000107c61574(puStack_120);
  func_0x000107c61574(puStack_f0);
  puVar2 = puStack_c0;
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar2);
  lVar4 = _DAT_112f0d070;
  lVar18 = *plVar6;
  lVar16 = *(long *)(lVar18 + _DAT_112f0d070);
  if (lVar16 == 0) {
    puVar11 = PTR_PTR_1126ac2d0;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c3ec60(lVar18);
    func_0x000107c54b80(puVar11);
    func_0x000107c52ab8(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c3d89c(lVar18);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar17);
    puVar17 = *(undefined **)(lVar18 + lVar4);
    *(undefined **)(lVar18 + lVar4) = puVar11;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5a588();
    func_0x000107c61174(lVar16);
    func_0x000107c550d8();
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar16);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(puVar17);
LAB_102cf2194:
  func_0x0001000834e4(alStack_a0);
  return;
}



/* Entry: 102cf21c0; end: 102cf22e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf21c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  (**(code **)(unaff_x20 + _DAT_112f0d0a0))(auStack_80);
  if (lStack_68 == 0) {
    func_0x000102cf3938(auStack_80,0x112f0d228,&UNK_10db401a0);
  }
  else {
    func_0x000102cf30f8(auStack_80,auStack_58);
    func_0x000102cf39b8(auStack_58,auStack_80);
    lVar2 = _DAT_112f0d0b8;
    func_0x000107c61428(unaff_x20 + _DAT_112f0d0b8,auStack_98,0x21,0);
    func_0x000102cf3528(auStack_80,unaff_x20 + lVar2);
    func_0x000107c614a8(auStack_98);
    func_0x0001000a8868(auStack_58,uStack_40);
    func_0x000107c5a568();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf22e4);
      (*pcVar1)();
    }
    lVar2 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    func_0x000107c5a81c(0x4059000000000000,lVar2);
    func_0x000107c61170(lVar2);
    FUN_102cf1b4c();
    func_0x0001000834e4(auStack_58);
  }
  return;
}



/* Entry: 102cf22e4; end: 102cf230b;  */

void FUN_102cf22e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cf21c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cf230c; end: 102cf240f;  */

void FUN_102cf230c(undefined8 param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_1105c1258;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618(param_4);
  func_0x000107c61614(puVar1 + 0x10,param_4);
  func_0x000107c61170(param_4);
  puVar2 = &UNK_1105c13e8;
  func_0x000107c613fc(&UNK_1105c13e8,0x29,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar2[0x28] = param_3;
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db401f0,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102cf2410; end: 102cf2483;  */

void FUN_102cf2410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2484,uVar1,uVar2);
  return;
}



/* Entry: 102cf2484; end: 102cf2503;  */

void FUN_102cf2484(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cf2504(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                  *(undefined1 *)(unaff_x22 + 0x50));
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cf2500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cf2504; end: 102cf26af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf2504(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_170 [64];
  undefined *apuStack_130 [3];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    lStack_a8 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
    if (lStack_a8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
      return;
    }
    uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    bStack_d0 = param_3 & 1;
    uStack_c8 = 1;
    uStack_e0 = param_1;
    uStack_d8 = param_2;
    lStack_c0 = lVar2;
    uStack_b8 = param_4;
    func_0x000107c61434();
    func_0x0001000d224c(auStack_108);
    func_0x0001000a8868(auStack_108,uStack_f0);
    uVar3 = 0x112efcea0;
    func_0x0001000285a8(0x112efcea0,&UNK_10db2eb80);
    uVar4 = 0x112efcea8;
    uStack_118 = uVar3;
    FUN_102cf34e4(0x112efcea8,0x112efcea0,&UNK_10db2eb80);
    puVar5 = &UNK_1105c1410;
    uStack_110 = uVar4;
    func_0x000107c613fc(&UNK_1105c1410,0x50,7);
    uStack_90 = CONCAT71(uStack_cf,bStack_d0);
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_88 = uStack_c8;
    uStack_78 = uStack_b8;
    lStack_80 = lStack_c0;
    lStack_68 = lStack_a8;
    uStack_70 = uStack_b0;
    *(undefined8 *)(puVar5 + 0x18) = uStack_d8;
    *(undefined8 *)(puVar5 + 0x10) = uStack_e0;
    *(undefined8 *)(puVar5 + 0x28) = uStack_c8;
    *(undefined8 *)(puVar5 + 0x20) = uStack_90;
    *(undefined8 *)(puVar5 + 0x38) = uStack_b8;
    *(long *)(puVar5 + 0x30) = lStack_c0;
    *(long *)(puVar5 + 0x48) = lStack_a8;
    *(undefined8 *)(puVar5 + 0x40) = uStack_b0;
    pcVar6 = *(code **)(lStack_e8 + 0x10);
    apuStack_130[0] = puVar5;
    FUN_102cf3650(&uStack_a0,auStack_170,0x112efcea0,&UNK_10db2eb80);
    (*pcVar6)(apuStack_130,uStack_f0,lStack_e8);
    FUN_102cf3938(&uStack_e0,0x112efcea0,&UNK_10db2eb80);
    func_0x0001000834e4(apuStack_130);
    func_0x0001000834e4(auStack_108);
  }
  return;
}



/* Entry: 102cf26b0; end: 102cf271f;  */

void FUN_102cf26b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2720,uVar1,uVar2);
  return;
}



/* Entry: 102cf2720; end: 102cf27bb;  */

void FUN_102cf2720(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cf29c4(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),0x112f0d240,
                  &UNK_10db401e0,0x112f0d248,&UNK_1105c13c0);
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cf27b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cf27bc; end: 102cf28b7;  */

void FUN_102cf27bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_1105c1258;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined **)(param_4 + 0x10) = puVar1;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,param_5,param_4,uVar2);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 102cf28b8; end: 102cf2927;  */

void FUN_102cf28b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2928,uVar1,uVar2);
  return;
}



/* Entry: 102cf2928; end: 102cf29c3;  */

void FUN_102cf2928(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cf29c4(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),0x112f0d230,
                  &UNK_10db401c8,0x112f0d238,&UNK_1105c1370);
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cf29c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cf29c4; end: 102cf2b3f;  */

/* WARNING: Possible PIC construction at 0x000102cf2ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf2ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf29c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long alStack_c0 [3];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  lVar5 = unaff_x20;
  uVar3 = param_4;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return;
  }
  lVar1 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(uVar3);
    func_0x0001000d224c(auStack_98);
    func_0x0001000a8868(auStack_98,uStack_80);
    uVar2 = param_3;
    func_0x0001000285a8(param_3,param_4);
    uStack_a8 = uVar2;
    FUN_102cf34e4(param_5,param_3,param_4);
    uStack_a0 = param_5;
    func_0x000107c613fc(param_6,0x40,7);
    *(undefined8 *)(param_6 + 0x10) = param_1;
    *(undefined8 *)(param_6 + 0x18) = param_2;
    *(long *)(param_6 + 0x20) = lVar1;
    *(undefined8 *)(param_6 + 0x28) = uVar3;
    *(undefined8 *)(param_6 + 0x30) = uVar4;
    *(long *)(param_6 + 0x38) = lVar5;
    alStack_c0[0] = param_6;
    (**(code **)(lStack_78 + 0x10))(alStack_c0,uStack_80,lStack_78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102cf2b40; end: 102cf2c47;  */

void FUN_102cf2b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_1105c1258;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618(param_5);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  func_0x000107c61170(param_5);
  puVar2 = &UNK_1105c1320;
  func_0x000107c613fc(&UNK_1105c1320,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db401b0,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 102cf2c48; end: 102cf2cbb;  */

void FUN_102cf2c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2cbc,uVar1,uVar2);
  return;
}



/* Entry: 102cf2cbc; end: 102cf2ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf2cbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar10 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x60,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  if (lVar10 != 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c308a8(uVar11,uVar12,uVar13,uVar14);
    puVar5 = (undefined8 *)(lVar10 + _DAT_112f0d0b0);
    uVar1 = puVar5[3];
    lVar3 = puVar5[4];
    func_0x0001000a8868();
    func_0x000103b828b8();
    uVar2 = *puVar5;
    uVar4 = puVar5[1];
    func_0x000107c61434(uVar4);
    lVar6 = lVar10;
    func_0x000107c4e230(lVar10);
    func_0x000107c61180();
    puVar5 = (undefined8 *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    puVar5[3] = 2;
    puVar5[2] = 1;
    puVar7 = puVar5;
    func_0x000103b828f4();
    uVar9 = puVar7[1];
    puVar5[4] = *puVar7;
    puVar5[5] = uVar9;
    puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168();
    func_0x000107c61434(uVar9);
    func_0x000107c5dc54(uVar11,uVar12,uVar13,uVar14);
    func_0x000107c61180();
    uVar9 = 0;
    func_0x000102cf3978(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
    puVar5[9] = uVar9;
    puVar5[6] = puVar8;
    puVar7 = puVar5;
    func_0x000100214a84(puVar5);
    func_0x000107c61588(puVar5);
    func_0x000102cf3938(puVar5 + 4,0x112d4b5f0,&UNK_10d9127d0);
    (**(code **)(lVar3 + 0x20))(uVar2,uVar4,lVar6,puVar7,uVar1,lVar3);
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(lVar10);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x78) = lVar10 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cf2ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cf2ec0; end: 102cf2f93;  */

/* WARNING: Possible PIC construction at 0x000102cf2ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf2edc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf2ec0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112f0d0a0 + 8));
  return;
}



/* Entry: 102cf2f94; end: 102cf303f;  */

/* WARNING: Possible PIC construction at 0x000102cf2fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf2fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf2f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0d0a0 + 8));
  return;
}



/* Entry: 102cf3040; end: 102cf30ef;  */

void FUN_102cf3040(undefined8 param_1)

{
  if (lRam0000000112f0d108 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e728d00);
  return;
}



/* Entry: 102cf30f0; end: 102cf3117;  */

void FUN_102cf30f0(void)

{
  if (lRam0000000112f0d108 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e728d00);
  return;
}



/* Entry: 102cf3118; end: 102cf3167;  */

void FUN_102cf3118(void)

{
  FUN_102cf27bc();
  return;
}



/* Entry: 102cf3168; end: 102cf318b;  */

void FUN_102cf3168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = &UNK_1105c1258;
  func_0x000107c613fc(&UNK_1105c1258,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar2);
  func_0x000107c61614(puVar1 + 0x10,lVar2);
  func_0x000107c61170(lVar2);
  puVar3 = &UNK_1105c1320;
  func_0x000107c613fc(&UNK_1105c1320,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 6;
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db401b0,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 102cf318c; end: 102cf3213;  */

void FUN_102cf318c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102cf3214;
  plVar1[0x13] = lVar5;
  plVar1[0x14] = lVar6;
  plVar1[0x11] = lVar3;
  plVar1[0x12] = lVar4;
  plVar1[0xf] = param_1;
  plVar1[0x10] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[0x15] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2cbc,lVar3,lVar2);
  return;
}



/* Entry: 102cf3214; end: 102cf324f;  */

void FUN_102cf3214(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102cf324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102cf3250; end: 102cf32a7;  */

void FUN_102cf3250(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102cf32a8; end: 102cf3353;  */

void FUN_102cf32a8(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102cf3354; end: 102cf33c7;  */

void FUN_102cf3354(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102cf3a14;
  plVar1[7] = lVar3;
  plVar1[8] = lVar4;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2928,lVar3,lVar2);
  return;
}



/* Entry: 102cf33c8; end: 102cf343b;  */

void FUN_102cf33c8(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102cf3a18;
  plVar1[7] = lVar3;
  plVar1[8] = lVar4;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar3;
  func_0x000107c5fce8();
  plVar1[9] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2720,lVar3,lVar2);
  return;
}



/* Entry: 102cf343c; end: 102cf3467;  */

void FUN_102cf343c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102cf3468; end: 102cf34e3;  */

void FUN_102cf3468(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102cf3a1c;
  *(undefined1 *)(plVar2 + 10) = uVar1;
  plVar2[7] = lVar4;
  plVar2[8] = lVar5;
  plVar2[5] = param_1;
  plVar2[6] = lVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar4;
  func_0x000107c5fce8();
  plVar2[9] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cf2484,lVar4,lVar3);
  return;
}



/* Entry: 102cf34e4; end: 102cf3577;  */

void FUN_102cf34e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = &DAT_10db4158c;
    func_0x000107c61520(&DAT_10db4158c,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102cf3578; end: 102cf364f;  */

undefined * FUN_102cf3578(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x0001000285a8(0x112f0cf10);
    puVar4 = puVar7;
    func_0x000107c60498();
    puVar9 = (undefined1 *)(param_1 + 0x21);
    do {
      bVar2 = puVar9[-1];
      uVar8 = (ulong)bVar2;
      uVar1 = *puVar9;
      FUN_102cf3250();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cf364c);
        (*pcVar3)();
      }
      uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar8) = bVar2;
      *(undefined1 *)(*(long *)(puVar4 + 0x38) + uVar8) = uVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cf3650);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 2;
    } while (puVar7 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 102cf3650; end: 102cf3697;  */

undefined8 FUN_102cf3650(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102cf3698; end: 102cf374b;  */

/* WARNING: Possible PIC construction at 0x000102cf36f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cf370c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cf36f4) */
/* WARNING: Removing unreachable block (ram,0x000102cf36f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3698(uint param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f0d0c8);
    uVar2 = (ulong)((param_1 ^ 0xffffffff) & 1);
    func_0x000107c5fca0(uVar2);
    func_0x000107c4d664(uVar1);
  }
  else {
    uVar1 = 0;
    func_0x000103b9a070(0);
    func_0x000107c61480(uVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102cf374c; end: 102cf3937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf374c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112f0d0b0);
  uVar1 = puVar5[3];
  lVar3 = puVar5[4];
  func_0x0001000a8868(puVar5,uVar1);
  func_0x000103b82204();
  uVar2 = *puVar5;
  uVar4 = puVar5[1];
  func_0x000107c61434(uVar4);
  func_0x000107c4e230();
  func_0x000107c61180();
  puVar5 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar5[3] = 4;
  puVar5[2] = 2;
  puVar7 = puVar5;
  func_0x000103b81bc8();
  uVar8 = puVar7[1];
  puVar5[4] = *puVar7;
  puVar5[5] = uVar8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  func_0x000107c46ed0();
  puVar7 = (undefined8 *)0x0;
  func_0x000102cf3978(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5[9] = puVar7;
  puVar5[6] = puVar6;
  func_0x000103b82400();
  uVar8 = puVar7[1];
  puVar5[10] = *puVar7;
  puVar5[0xb] = uVar8;
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar8);
  func_0x000107c5dc50(param_1,param_2);
  func_0x000107c61180();
  uVar8 = 0;
  func_0x000102cf3978(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar5[0xf] = uVar8;
  puVar5[0xc] = puVar6;
  puVar7 = puVar5;
  func_0x000100214a84(puVar5);
  func_0x000107c61588(puVar5);
  uVar8 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar5 + 4,2,uVar8);
  (**(code **)(lVar3 + 0x20))(uVar2,uVar4,unaff_x20,puVar7,uVar1,lVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102cf3938; end: 102cf39fb;  */

undefined8 FUN_102cf3938(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102cf39fc; end: 102cf3a1f;  */

void FUN_102cf39fc(long param_1,long param_2)

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



/* Entry: 102cf3a20; end: 102cf3a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3a20(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d258) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cf3a6c; end: 102cf3acb; -[_TtC27AdFormatEventLoggerServices27AdFormatEventLoggerServices init] */

void FUN_102cf3a6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdFormatEventLoggerServices.AdFormatEventLoggerServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cf3a98);
  (*pcVar1)();
}



/* Entry: 102cf3acc; end: 102cf3adb; -[_TtC27AdFormatEventLoggerServices27AdFormatEventLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0d258));
  return;
}



/* Entry: 102cf3adc; end: 102cf3ae7; -[SCLegacyLiveLensPreviewPageLauncherPayload presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3adc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d288;
  func_0x000107c61428(param_1 + _DAT_112f0d288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cf3ae8; end: 102cf3af3; -[SCLegacyLiveLensPreviewPageLauncherPayload setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d288;
  func_0x000107c61428(param_1 + _DAT_112f0d288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cf3af4; end: 102cf3b03; -[SCLegacyLiveLensPreviewPageLauncherPayload replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f0d290));
  return;
}



/* Entry: 102cf3b04; end: 102cf3b23; -[SCLegacyLiveLensPreviewPageLauncherPayload lensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3b04(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f0d298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cf3b24; end: 102cf3b33; -[SCLegacyLiveLensPreviewPageLauncherPayload context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cf3b24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0d2a0);
}



/* Entry: 102cf3b34; end: 102cf3b43; -[SCLegacyLiveLensPreviewPageLauncherPayload cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cf3b34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0d2a8);
}



/* Entry: 102cf3b44; end: 102cf3b4f; -[SCLegacyLiveLensPreviewPageLauncherPayload captureWorkflowResultDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3b44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d2b0;
  func_0x000107c61428(param_1 + _DAT_112f0d2b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cf3b50; end: 102cf3b5b; -[SCLegacyLiveLensPreviewPageLauncherPayload setCaptureWorkflowResultDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d2b0;
  func_0x000107c61428(param_1 + _DAT_112f0d2b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102cf3b5c; end: 102cf3b67; -[SCLegacyLiveLensPreviewPageLauncherPayload cameraScopeDismissalDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cf3b5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d2b8;
  func_0x000107c61428(param_1 + _DAT_112f0d2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


