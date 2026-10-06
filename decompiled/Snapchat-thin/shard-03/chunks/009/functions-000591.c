/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e4cdb4; end: 102e4cf1b;  */

ulong FUN_102e4cdb4(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4cf1c);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4cf10);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4cf14);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4cf18);
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
          FUN_102e4cbf0(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102e4cf1c; end: 102e4cf2b;  */

long FUN_102e4cf1c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102e4cf2c; end: 102e4cf43;  */

void FUN_102e4cf2c(long param_1)

{
  FUN_102e4d5d0(param_1 + 0x20);
  return;
}



/* Entry: 102e4cf44; end: 102e4d383;  */

undefined1 FUN_102e4cf44(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  uStack_71 = 0;
  puVar4 = &UNK_1105dc4f0;
  func_0x000107c613fc(&UNK_1105dc4f0,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_71;
  puVar5 = &UNK_1105dc518;
  func_0x000107c613fc(&UNK_1105dc518,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e4db50;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (code *)0x102e4dbec;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db58;
  puStack_90 = &UNK_1105dc530;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar10);
  pcStack_88 = FUN_102e4c334;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db5c;
  puStack_90 = &UNK_1105dc558;
  ppuVar7 = &puStack_a8;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x102e4c338;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db60;
  puStack_90 = &UNK_1105dc580;
  ppuVar8 = &puStack_a8;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_80);
  pcStack_88 = (code *)0x102e4c33c;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db64;
  puStack_90 = &UNK_1105dc5a8;
  ppuVar9 = &puStack_a8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_80);
  puVar10 = &UNK_1105dc5e0;
  func_0x000107c613fc(&UNK_1105dc5e0,0x18,7);
  *(undefined1 **)(puVar10 + 0x10) = &uStack_71;
  puVar11 = &UNK_1105dc608;
  func_0x000107c613fc(&UNK_1105dc608,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x102e4d398;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = (code *)0x102e4dbf0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db68;
  puStack_90 = &UNK_1105dc620;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1105dc658;
  func_0x000107c613fc(&UNK_1105dc658,0x18,7);
  *(undefined1 **)(puVar13 + 0x10) = &uStack_71;
  puVar14 = &UNK_1105dc680;
  func_0x000107c613fc(&UNK_1105dc680,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x102e4db54;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = FUN_102e4d3a8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  uStack_98 = 0x102e4db6c;
  puStack_90 = &UNK_1105dc698;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c4c690(param_1);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_71;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x72,0x226,0x24,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d370);
    (*pcVar3)();
  }
  uVar16 = 0;
  func_0x000107c61544(0,"",0x72,0x228,0x1d,1);
  if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d374);
    (*pcVar3)();
  }
  uVar16 = 0;
  func_0x000107c61544(0,"",0x72,0x22a,0x20,1);
  if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d378);
    (*pcVar3)();
  }
  uVar16 = 0;
  func_0x000107c61544(0,"",0x72,0x22c,0x1b,1);
  func_0x000107c61574(puVar10);
  if ((uVar16 & 1) == 0) {
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x72,0x22e,0x19,1);
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d380);
      (*pcVar3)();
    }
    puVar4 = puVar14;
    func_0x000107c61544(puVar14,"",0x72,0x230,0x18,1);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar4 & 1) == 0) {
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d384);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4d37c);
  (*pcVar3)();
}



/* Entry: 102e4d384; end: 102e4d3a7;  */

void FUN_102e4d384(long param_1,long param_2)

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



/* Entry: 102e4d3a8; end: 102e4d3c7;  */

void FUN_102e4d3a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e4d3c8; end: 102e4d3eb;  */

long * FUN_102e4d3c8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102e4d3ec; end: 102e4d517;  */

void FUN_102e4d3ec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4d4f4);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4d4f8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4d510);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4d514);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4d518);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 102e4d518; end: 102e4d593;  */

void FUN_102e4d518(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102e4d594;
  *(undefined1 *)((long)plVar5 + 0x71) = uVar4;
  plVar5[7] = lVar1;
  plVar5[8] = lVar2;
  *(undefined1 *)(plVar5 + 0xe) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4af1c,lVar1,0);
  return;
}



/* Entry: 102e4d594; end: 102e4d5cf;  */

void FUN_102e4d594(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e4d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e4d5d0; end: 102e4d5ef;  */

void FUN_102e4d5d0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102e4d5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102e4d5f0; end: 102e4d60f;  */

void FUN_102e4d5f0(void)

{
  FUN_102e4a990();
  return;
}



/* Entry: 102e4d610; end: 102e4d663;  */

void FUN_102e4d610(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc10;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4aa40);
  return;
}



/* Entry: 102e4d664; end: 102e4d6a3;  */

void FUN_102e4d664(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102e4d6a4; end: 102e4d703;  */

void FUN_102e4d6a4(void)

{
  FUN_102e4a990();
  return;
}



/* Entry: 102e4d704; end: 102e4d70b;  */

void FUN_102e4d704(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105dc928;
    func_0x000107c613fc(&UNK_1105dc928,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_102e4d940;
    *(long *)(puVar2 + 0x18) = lVar1;
    uStack_58 = 0x102e4dbf4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_10006eb60;
    puStack_60 = &UNK_1105dc940;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4c734(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 102e4d70c; end: 102e4d733;  */

void FUN_102e4d70c(void)

{
  FUN_102e49c00();
  return;
}



/* Entry: 102e4d734; end: 102e4d73b;  */

void FUN_102e4d734(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105dc8b0;
    func_0x000107c613fc(&UNK_1105dc8b0,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_102e4d81c;
    *(long *)(puVar2 + 0x18) = lVar1;
    pcStack_58 = FUN_102e4d83c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_10006eb60;
    puStack_60 = &UNK_1105dc8c8;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c6157c(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4c604(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 102e4d73c; end: 102e4d763;  */

void FUN_102e4d73c(void)

{
  FUN_102e49c00();
  return;
}



/* Entry: 102e4d764; end: 102e4d7c7;  */

void FUN_102e4d764(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102e4dc14;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e499e0,0,0);
  return;
}



/* Entry: 102e4d7c8; end: 102e4d81b;  */

void FUN_102e4d7c8(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc18;
  plVar1[7] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4a25c);
  return;
}



/* Entry: 102e4d81c; end: 102e4d83b;  */

void FUN_102e4d81c(void)

{
  FUN_102e49e14();
  return;
}



/* Entry: 102e4d83c; end: 102e4d85b;  */

void FUN_102e4d83c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e4d85c; end: 102e4d8af;  */

void FUN_102e4d85c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc1c;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49bd0);
  return;
}



/* Entry: 102e4d8b0; end: 102e4d8db;  */

void FUN_102e4d8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e4d8dc; end: 102e4d93f;  */

void FUN_102e4d8dc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102e4dc20;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49ce8,lVar1,0);
  return;
}



/* Entry: 102e4d940; end: 102e4d95f;  */

void FUN_102e4d940(void)

{
  FUN_102e49e14();
  return;
}



/* Entry: 102e4d960; end: 102e4d967;  */

void FUN_102e4d960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102e4d968; end: 102e4d9bb;  */

void FUN_102e4d968(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc24;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e49e98);
  return;
}



/* Entry: 102e4d9bc; end: 102e4da0f;  */

void FUN_102e4d9bc(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102e4dc28;
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102e49efc;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49f50);
  return;
}



/* Entry: 102e4da10; end: 102e4da63;  */

void FUN_102e4da10(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc2c;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4997c);
  return;
}



/* Entry: 102e4da64; end: 102e4dab7;  */

void FUN_102e4da64(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4dc30;
  plVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4991c);
  return;
}



/* Entry: 102e4dab8; end: 102e4db0b;  */

void FUN_102e4dab8(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102e4dc34;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x102e4dc0c;
  plVar1[7] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4aadc);
  return;
}



/* Entry: 102e4db0c; end: 102e4db4f;  */

long FUN_102e4db0c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102e4db50; end: 102e4dc37;  */

void FUN_102e4db50(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 102e4dc38; end: 102e4dc7b;  */

void FUN_102e4dc38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e4dc7c; end: 102e4dd33;  */

bool FUN_102e4dc7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4ec80();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c443c8();
    if ((int)lVar2 == 0) {
      lVar2 = param_1;
      func_0x000107c5aa6c();
      if (lVar2 == 2) {
        lVar2 = param_1;
        func_0x000107c5e2b0();
        func_0x000107c61180();
        if (lVar2 != 0) {
          lVar1 = lVar2;
          func_0x000107c5fc54();
          func_0x000107c61170(lVar2);
          lVar2 = *(long *)(lVar1 + 0x10);
          func_0x000107c6142c(lVar1);
          func_0x000107c61170(param_1);
          return lVar2 == 0;
        }
      }
      func_0x000107c61170(param_1);
      return false;
    }
    func_0x000107c61170(param_1);
  }
  return true;
}



/* Entry: 102e4dd34; end: 102e4deeb;  */

undefined8 FUN_102e4dd34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c4077c(param_3);
  uVar6 = param_1;
  func_0x000107c44f00(param_3);
  lVar2 = param_3;
  func_0x000107c3e184(param_3);
  func_0x000107c61180();
  func_0x000107c5ee94((long)puVar3 - extraout_x12);
  func_0x000107c61170(lVar2);
  func_0x000107c5ee70();
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)((long)puVar3 - extraout_x12,lVar1);
  lVar4 = param_3;
  func_0x000107c417b4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5ee94(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c5ee70();
    (*pcVar5)(puVar3,lVar1);
  }
  func_0x000107c614e8();
  func_0x000107c610f8();
  lVar1 = param_3;
  func_0x000107c41890(param_3);
  func_0x000107c61180();
  func_0x000107c5b01c(param_3);
  func_0x000107c461c8(param_1,param_2,uVar6,unaff_x20);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 102e4deec; end: 102e4f033;  */

long FUN_102e4deec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x20 + 200) = param_4;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_5;
  func_0x0001000285a8(0x112e50720,&UNK_10da4eef8);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar10 = param_7;
  func_0x000107c6157c(param_7);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  uVar10 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112f20640,&UNK_10db591e0);
  func_0x000107c610f8();
  uVar10 = param_9;
  func_0x000107c6157c(param_9);
  func_0x0001003b3b80();
  puVar5 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar10 = param_10;
  func_0x000107c6157c(param_10);
  func_0x0001003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  func_0x0001000285a8(0x112e4e438,&UNK_10db591f0);
  func_0x000107c610f8();
  uVar10 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  func_0x0001000285a8(0x112f20648,&UNK_10db591f8);
  func_0x000107c610f8();
  uVar10 = param_12;
  func_0x000107c6157c(param_12);
  func_0x0001003b3b80();
  puVar8 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x48) = puVar8;
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar10 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x50) = puVar9;
  func_0x0001000285a8(0x112f20650,&UNK_10db59530);
  func_0x000107c610f8();
  uVar10 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x58) = puVar11;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar10 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x60) = puVar12;
  func_0x0001000285a8(0x112f20658,&UNK_10db59208);
  func_0x000107c610f8();
  uVar10 = param_16;
  func_0x000107c6157c(param_16);
  func_0x0001003b3b80();
  puVar14 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x68) = puVar14;
  func_0x0001000285a8(0x112e4cd30,&UNK_10da47080);
  func_0x000107c610f8();
  uVar10 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x70) = puVar15;
  func_0x0001000285a8(0x112f20660,&UNK_10db595f0);
  func_0x000107c610f8();
  uVar10 = param_18;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar16 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x78) = puVar16;
  func_0x0001000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar10 = param_19;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar17 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x80) = puVar17;
  func_0x0001000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar10 = param_20;
  func_0x000107c6157c(param_20);
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x88) = puVar18;
  func_0x0001000285a8(0x112f20668,&UNK_10db59210);
  func_0x000107c610f8();
  uVar10 = param_21;
  func_0x000107c6157c(param_21);
  func_0x0001003b3b80();
  puVar19 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x90) = puVar19;
  func_0x0001000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  uVar10 = param_22;
  func_0x000107c6157c(param_22);
  func_0x0001003b3b80();
  puVar20 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0x98) = puVar20;
  func_0x0001000285a8(0x112f20670,&UNK_10db59220);
  func_0x000107c610f8();
  uVar10 = param_23;
  func_0x000107c6157c(param_23);
  func_0x00010017da58();
  puVar21 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0xa0) = puVar21;
  func_0x0001000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar10 = param_24;
  func_0x000107c6157c(param_24);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + 0xa8) = puVar22;
  puVar23 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0xb0) = puVar23;
  puVar13 = PTR_PTR_1126ac668;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar13;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar24 = 0xd000000000000013;
  uVar10 = uVar24;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = uVar24;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f053c60);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f111390);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0557f0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1113b0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32a40);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1113e0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111400);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f053cb0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f111420);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f111440);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar13);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f111460);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef13560);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f111480);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar17);
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f01b670);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0cb170);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010eff69a0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar13);
  func_0x000107c61174(puVar21);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1114a0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar13);
  func_0x000107c61174(puVar22);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c3e740(puVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar23 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_8);
    func_0x000107c61574(param_9);
    func_0x000107c61574(param_10);
    func_0x000107c61574(param_11);
    func_0x000107c61574(param_12);
    func_0x000107c61574(param_13);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_15);
    func_0x000107c61574(param_16);
    func_0x000107c61574(param_17);
    func_0x000107c61574(param_18);
    func_0x000107c61574(param_19);
    func_0x000107c61574(param_20);
    func_0x000107c61574(param_21);
    func_0x000107c61574(param_22);
    func_0x000107c61574(param_23);
    func_0x000107c61574(param_24);
    *(undefined **)(unaff_x20 + 0xd8) = puVar23;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4f034);
  (*pcVar1)();
}



/* Entry: 102e4f034; end: 102e4f137;  */

void FUN_102e4f034(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 102e4f138; end: 102e4f187;  */

undefined8 FUN_102e4f138(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e4f188; end: 102e4f1cb;  */

undefined1  [16] FUN_102e4f188(void)

{
  return ZEXT816(0x1105dcab8);
}



/* Entry: 102e4f1cc; end: 102e4f1f3;  */

void FUN_102e4f1cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e4f1f4; end: 102e4f1fb;  */

undefined8 FUN_102e4f1f4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e4f1fc; end: 102e525ab;  */

long FUN_102e4f1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  long unaff_x20;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 in_stack_000001f0;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x228) = param_2;
  *(undefined8 *)(unaff_x20 + 0x230) = param_3;
  *(undefined8 *)(unaff_x20 + 0x238) = param_4;
  *(undefined8 *)(unaff_x20 + 0x240) = param_5;
  *(undefined8 *)(unaff_x20 + 0x248) = param_6;
  func_0x0001000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_7;
  func_0x000107c6157c(param_7);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112ec3f30,&UNK_10db59500);
  func_0x000107c610f8();
  uVar5 = param_8;
  func_0x000107c6157c(param_8);
  func_0x0001003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar5 = param_9;
  func_0x000107c6157c(param_9);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar5 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x30) = puVar7;
  func_0x0001000285a8(0x112f20818,&UNK_10db59508);
  func_0x000107c610f8();
  uVar5 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x38) = puVar8;
  func_0x0001000285a8(0x112e51d98,&UNK_10da52000);
  func_0x000107c610f8();
  uVar5 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x40) = puVar9;
  func_0x0001000285a8(0x112e51dc0,&UNK_10db60af0);
  func_0x000107c610f8();
  uVar5 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x48) = puVar10;
  func_0x0001000285a8(0x112f20820,&UNK_10db59510);
  func_0x000107c610f8();
  uVar5 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x50) = puVar11;
  func_0x0001000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar5 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar12 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x58) = puVar12;
  func_0x0001000285a8(0x112e4ccd0,&UNK_10daaf8b0);
  func_0x000107c610f8();
  uVar5 = param_16;
  func_0x000107c6157c(param_16);
  func_0x00010017da58();
  puVar13 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x60) = puVar13;
  func_0x0001000285a8(0x112e3e750,&UNK_10da2bb78);
  func_0x000107c610f8();
  uVar5 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010017da58();
  puVar14 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x68) = puVar14;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar5 = param_18;
  func_0x000107c6157c(param_18);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x70) = puVar15;
  func_0x0001000285a8(0x112f20658,&UNK_10db59208);
  func_0x000107c610f8();
  uVar5 = param_19;
  func_0x000107c6157c(param_19);
  func_0x0001003b3b80();
  puVar16 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x78) = puVar16;
  func_0x0001000285a8(0x112e49ff0,&UNK_10da41b70);
  func_0x000107c610f8();
  uVar5 = param_20;
  func_0x000107c6157c(param_20);
  func_0x00010017da58();
  puVar17 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x80) = puVar17;
  func_0x0001000285a8(0x112f20828,&UNK_10db59518);
  func_0x000107c610f8();
  uVar5 = param_21;
  func_0x000107c6157c(param_21);
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x88) = puVar18;
  func_0x0001000285a8(0x112f20830,&UNK_10db59520);
  func_0x000107c610f8();
  uVar5 = param_22;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar19 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x90) = puVar19;
  func_0x0001000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar5 = param_23;
  func_0x000107c6157c(param_23);
  func_0x00010017da58();
  puVar20 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x98) = puVar20;
  func_0x0001000285a8(0x112ea9508,&UNK_10dabe670);
  func_0x000107c610f8();
  uVar5 = param_24;
  func_0x000107c6157c(param_24);
  func_0x00010017da58();
  puVar21 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xa0) = puVar21;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar5 = param_25;
  func_0x000107c6157c(param_25);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xa8) = puVar22;
  func_0x0001000285a8(0x112f20650,&UNK_10db59530);
  func_0x000107c610f8();
  uVar5 = param_26;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar23 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xb0) = puVar23;
  func_0x0001000285a8(0x112f20838,&UNK_10db59538);
  func_0x000107c610f8();
  uVar5 = param_27;
  func_0x000107c6157c(param_27);
  func_0x00010017da58();
  puVar24 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xb8) = puVar24;
  func_0x0001000285a8(0x112f20840,&UNK_10db59540);
  func_0x000107c610f8();
  uVar5 = param_28;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar26 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xc0) = puVar26;
  func_0x0001000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar5 = param_29;
  func_0x000107c6157c(param_29);
  func_0x00010017da58();
  puVar27 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 200) = puVar27;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar5 = param_30;
  func_0x000107c6157c(param_30);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xd0) = puVar28;
  func_0x0001000285a8(0x112f20848,&UNK_10db59548);
  func_0x000107c610f8();
  uVar5 = param_31;
  func_0x000107c6157c(param_31);
  func_0x0001003b3b80();
  puVar29 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xd8) = puVar29;
  func_0x0001000285a8(0x112ea5300,&UNK_10dacd1a0);
  func_0x000107c610f8();
  uVar5 = param_32;
  func_0x000107c6157c(param_32);
  func_0x00010017da58();
  puVar30 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xe0) = puVar30;
  func_0x0001000285a8(0x112e84d88,&UNK_10dab88e0);
  func_0x000107c610f8();
  uVar5 = param_33;
  func_0x000107c6157c(param_33);
  func_0x00010017da58();
  puVar31 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xe8) = puVar31;
  func_0x0001000285a8(0x112f20850,&UNK_10db59550);
  func_0x000107c610f8();
  uVar5 = param_34;
  func_0x000107c6157c(param_34);
  func_0x0001003b3b80();
  puVar32 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xf0) = puVar32;
  func_0x0001000285a8(0x112f20858,&UNK_10db59558);
  func_0x000107c610f8();
  uVar5 = param_35;
  func_0x000107c6157c(param_35);
  func_0x0001003b3b80();
  puVar33 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0xf8) = puVar33;
  func_0x0001000285a8(0x112f20860,&UNK_10db59560);
  func_0x000107c610f8();
  uVar5 = param_36;
  func_0x000107c6157c(param_36);
  func_0x0001003b3b80();
  puVar34 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x100) = puVar34;
  func_0x0001000285a8(0x112f20868,&UNK_10db59568);
  func_0x000107c610f8();
  uVar5 = param_37;
  func_0x000107c6157c(param_37);
  func_0x0001003b3b80();
  puVar35 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x108) = puVar35;
  func_0x0001000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar5 = param_38;
  func_0x000107c6157c(param_38);
  func_0x00010017da58();
  puVar36 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x110) = puVar36;
  func_0x0001000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  uVar5 = param_39;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar37 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x118) = puVar37;
  func_0x0001000285a8(0x112f20870,&UNK_10db59570);
  func_0x000107c610f8();
  uVar5 = param_40;
  func_0x000107c6157c(param_40);
  func_0x00010017da58();
  puVar38 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x120) = puVar38;
  func_0x0001000285a8(0x112f20878,&UNK_10db59578);
  func_0x000107c610f8();
  uVar5 = param_41;
  func_0x000107c6157c(param_41);
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x128) = puVar39;
  func_0x0001000285a8(0x112e028a8,&UNK_10db59580);
  func_0x000107c610f8();
  uVar5 = param_42;
  func_0x000107c6157c(param_42);
  func_0x00010017da58();
  puVar40 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x130) = puVar40;
  func_0x0001000285a8(0x112e11a60,&UNK_10d9ece28);
  func_0x000107c610f8();
  uVar5 = param_43;
  func_0x000107c6157c(param_43);
  func_0x00010017da58();
  puVar41 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x138) = puVar41;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar5 = param_44;
  func_0x000107c6157c(param_44);
  func_0x00010017da58();
  puVar42 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x140) = puVar42;
  func_0x0001000285a8(0x112f20880,&UNK_10db59588);
  func_0x000107c610f8();
  uVar5 = param_45;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar43 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x148) = puVar43;
  func_0x0001000285a8(0x112e51088,&UNK_10db59590);
  func_0x000107c610f8();
  uVar5 = param_46;
  func_0x000107c6157c(param_46);
  func_0x00010017da58();
  puVar44 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x150) = puVar44;
  func_0x0001000285a8(0x112f20888,&UNK_10db95370);
  func_0x000107c610f8();
  uVar5 = param_47;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar45 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x158) = puVar45;
  func_0x0001000285a8(0x112f20890,&UNK_10db595a0);
  func_0x000107c610f8();
  uVar5 = param_48;
  func_0x000107c6157c(param_48);
  func_0x0001003b3b80();
  puVar46 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x160) = puVar46;
  func_0x0001000285a8(0x112e4cd30,&UNK_10da47080);
  func_0x000107c610f8();
  uVar5 = param_49;
  func_0x000107c6157c(param_49);
  func_0x00010017da58();
  puVar47 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x168) = puVar47;
  func_0x0001000285a8(0x112f20898,&UNK_10db595b0);
  func_0x000107c610f8();
  uVar5 = param_50;
  func_0x000107c6157c(param_50);
  func_0x00010017da58();
  puVar48 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x170) = puVar48;
  func_0x0001000285a8(0x112e783c0,&UNK_10da81b68);
  func_0x000107c610f8();
  uVar5 = param_51;
  func_0x000107c6157c(param_51);
  func_0x00010017da58();
  puVar49 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x178) = puVar49;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar5 = param_52;
  func_0x000107c6157c(param_52);
  func_0x00010017da58();
  puVar50 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x180) = puVar50;
  func_0x0001000285a8(0x112f15e88,&UNK_10db4bd68);
  func_0x000107c610f8();
  uVar5 = param_53;
  func_0x000107c6157c(param_53);
  func_0x00010017da58();
  puVar51 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x188) = puVar51;
  func_0x0001000285a8(0x112f208a0,&UNK_10db595c0);
  func_0x000107c610f8();
  uVar5 = param_54;
  func_0x000107c6157c(param_54);
  func_0x0001003b3b80();
  puVar52 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 400) = puVar52;
  func_0x0001000285a8(0x112efa838,&UNK_10db2f7b0);
  func_0x000107c610f8();
  uVar5 = param_55;
  func_0x000107c6157c(param_55);
  func_0x0001003b3b80();
  puVar53 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x198) = puVar53;
  func_0x0001000285a8(0x112e51dd0,&UNK_10da52040);
  func_0x000107c610f8();
  uVar5 = param_56;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar54 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1a0) = puVar54;
  func_0x0001000285a8(0x112e5cf78,&UNK_10da63610);
  func_0x000107c610f8();
  uVar5 = param_57;
  func_0x000107c6157c(param_57);
  func_0x00010017da58();
  puVar55 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1a8) = puVar55;
  func_0x0001000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  uVar5 = param_58;
  func_0x000107c6157c(param_58);
  func_0x00010017da58();
  puVar56 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1b0) = puVar56;
  func_0x0001000285a8(0x112f208a8,&UNK_10db595d8);
  func_0x000107c610f8();
  uVar5 = param_59;
  func_0x000107c6157c(param_59);
  func_0x0001003b3b80();
  puVar57 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1b8) = puVar57;
  func_0x0001000285a8(0x112f208b0,&UNK_10db595e0);
  func_0x000107c610f8();
  uVar5 = param_60;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar58 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1c0) = puVar58;
  func_0x0001000285a8(0x112f208b8,&UNK_10db595e8);
  func_0x000107c610f8();
  uVar5 = param_61;
  func_0x000107c6157c(param_61);
  func_0x0001003b3b80();
  puVar59 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1c8) = puVar59;
  func_0x0001000285a8(0x112f20660,&UNK_10db595f0);
  func_0x000107c610f8();
  uVar5 = param_62;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar60 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1d0) = puVar60;
  func_0x0001000285a8(0x112e4cd00,&UNK_10da47050);
  func_0x000107c610f8();
  uVar5 = param_63;
  func_0x000107c6157c(param_63);
  func_0x00010017da58();
  puVar61 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1d8) = puVar61;
  func_0x0001000285a8(0x112e4cd08,&UNK_10da47800);
  func_0x000107c610f8();
  uVar5 = param_64;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar62 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1e0) = puVar62;
  func_0x0001000285a8(0x112e4cd10,&UNK_10da47060);
  func_0x000107c610f8();
  uVar5 = param_65;
  func_0x000107c6157c(param_65);
  func_0x00010017da58();
  puVar63 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1e8) = puVar63;
  func_0x0001000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar5 = param_66;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar64 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1f0) = puVar64;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar5 = param_67;
  func_0x000107c6157c(param_67);
  func_0x00010017da58();
  puVar65 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x1f8) = puVar65;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar5 = param_68;
  func_0x000107c6157c(param_68);
  func_0x00010017da58();
  puVar66 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x200) = puVar66;
  func_0x0001000285a8(0x112f208c0,&UNK_10db595f8);
  func_0x000107c610f8();
  uVar5 = param_69;
  func_0x000107c6157c(param_69);
  func_0x0001003b3b80();
  puVar67 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x208) = puVar67;
  func_0x0001000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  uVar5 = param_70;
  func_0x000107c6157c(param_70);
  func_0x00010017da58();
  puVar68 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x210) = puVar68;
  func_0x0001000285a8(0x112e9f4b0,&UNK_10dab0378);
  func_0x000107c610f8();
  uVar5 = in_stack_000001f0;
  func_0x000107c6157c(in_stack_000001f0);
  func_0x00010017da58();
  puVar69 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + 0x218) = puVar69;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x220) = puVar6;
  puVar25 = PTR_PTR_1126ac670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar25;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1114c0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef32700);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1114e0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f03ecc0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1113b0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar73 = 0xd000000000000014;
  uVar5 = uVar73;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar70 = 0xd000000000000019;
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03ecf0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f052f80);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  uVar71 = 0xd000000000000016;
  uVar5 = uVar71;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar72 = 0xd000000000000017;
  uVar5 = uVar72;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f111420);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar5 = uVar72;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef35a00);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar74 = 0xd000000000000015;
  uVar5 = uVar74;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c830);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef35950);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar12);
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055830);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar13);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111500);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f01a9e0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = uVar73;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f111460);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar17);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111520);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar18);
  uVar5 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f111540);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar19);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111570);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar20);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar21);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111590);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar22);
  uVar5 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar23);
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f111440);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1115b0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar26);
  uVar5 = uVar72;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1115d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar27);
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar28);
  uVar5 = uVar71;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1e140);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar29);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2d4d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1115f0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar31);
  uVar5 = uVar72;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef25330);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111610);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar33);
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f111630);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar34);
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f111660);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar35);
  func_0x000107c5fadc(0xd000000000000015,0x800000010f111690);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(uVar74);
  func_0x000107c61174();
  func_0x000107c61174(puVar36);
  uVar5 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b4d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar37);
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1116b0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar38);
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1116d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar39);
  uVar5 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f111700);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar40);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010effe360);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar40);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar41);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f008830);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar41);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar42);
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar42);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar43);
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f075930);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar43);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar44);
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f059550);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar44);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar45);
  uVar5 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111730);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar45);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar46);
  uVar5 = uVar71;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f111750);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar46);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar47);
  uVar5 = uVar73;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef13560);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar47);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar48);
  uVar5 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f111770);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar48);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar75 = 0xd00000000000001a;
  uVar5 = uVar75;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1e120);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar49);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar50);
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0790);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar50);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1117a0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar51);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar52);
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1117d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar52);
  func_0x000107c61170(uVar70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0fcc00);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar53);
  func_0x000107c61170(uVar72);
  func_0x000107c61174();
  func_0x000107c61174(puVar54);
  func_0x000107c5fadc(0xd000000000000016,0x800000010f05c850);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar54);
  func_0x000107c61170(uVar71);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1117f0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar55);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar56);
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1113e0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar56);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar70 = 0xd000000000000018;
  uVar5 = uVar70;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c810);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar57);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar58);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar58);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar59);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef359b0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar59);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar60);
  uVar5 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111810);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar60);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar61);
  func_0x000107c5fadc(0xd000000000000014,0x800000010f09c900);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar61);
  func_0x000107c61170(uVar73);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar62);
  uVar74 = 0xd000000000000012;
  uVar5 = uVar74;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f09c920);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar62);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar63);
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0b3130);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar63);
  func_0x000107c61170(uVar74);
  func_0x000107c61174();
  func_0x000107c61174(puVar64);
  uVar5 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f01b670);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar64);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar65);
  uVar5 = uVar75;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a4110);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar65);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar66);
  func_0x000107c61170(uVar70);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar67);
  uVar5 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111830);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar67);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar68);
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1ae20);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar68);
  func_0x000107c61170(uVar75);
  func_0x000107c61174(puVar25);
  func_0x000107c61174(puVar69);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef328d0);
  func_0x000107c5a49c(puVar25);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar69);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(puVar25);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61574(param_7);
    func_0x000107c61574(param_8);
    func_0x000107c61574(param_9);
    func_0x000107c61574(param_10);
    func_0x000107c61574(param_11);
    func_0x000107c61574(param_12);
    func_0x000107c61574(param_13);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_15);
    func_0x000107c61574(param_16);
    func_0x000107c61574(param_17);
    func_0x000107c61574(param_18);
    func_0x000107c61574(param_19);
    func_0x000107c61574(param_20);
    func_0x000107c61574(param_21);
    func_0x000107c61574(param_22);
    func_0x000107c61574(param_23);
    func_0x000107c61574(param_24);
    func_0x000107c61574(param_25);
    func_0x000107c61574(param_26);
    func_0x000107c61574(param_27);
    func_0x000107c61574(param_28);
    func_0x000107c61574(param_29);
    func_0x000107c61574(param_30);
    func_0x000107c61574(param_31);
    func_0x000107c61574(param_32);
    func_0x000107c61574(param_33);
    func_0x000107c61574(param_34);
    func_0x000107c61574(param_35);
    func_0x000107c61574(param_36);
    func_0x000107c61574(param_37);
    func_0x000107c61574(param_38);
    func_0x000107c61574(param_39);
    func_0x000107c61574(param_40);
    func_0x000107c61574(param_41);
    func_0x000107c61574(param_42);
    func_0x000107c61574(param_43);
    func_0x000107c61574(param_44);
    func_0x000107c61574(param_45);
    func_0x000107c61574(param_46);
    func_0x000107c61574(param_47);
    func_0x000107c61574(param_48);
    func_0x000107c61574(param_49);
    func_0x000107c61574(param_50);
    func_0x000107c61574(param_51);
    func_0x000107c61574(param_52);
    func_0x000107c61574(param_53);
    func_0x000107c61574(param_54);
    func_0x000107c61574(param_55);
    func_0x000107c61574(param_56);
    func_0x000107c61574(param_57);
    func_0x000107c61574(param_58);
    func_0x000107c61574(param_59);
    func_0x000107c61574(param_60);
    func_0x000107c61574(param_61);
    func_0x000107c61574(param_62);
    func_0x000107c61574(param_63);
    func_0x000107c61574(param_64);
    func_0x000107c61574(param_65);
    func_0x000107c61574(param_66);
    func_0x000107c61574(param_67);
    func_0x000107c61574(param_68);
    func_0x000107c61574(param_69);
    func_0x000107c61574(param_70);
    func_0x000107c61574(in_stack_000001f0);
    *(undefined **)(unaff_x20 + 0x250) = puVar6;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e525ac);
  (*pcVar1)();
}



/* Entry: 102e525ac; end: 102e52827;  */

void FUN_102e525ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  return;
}



/* Entry: 102e52828; end: 102e52877;  */

undefined8 FUN_102e52828(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e52878; end: 102e528bb;  */

undefined1  [16] FUN_102e52878(void)

{
  return ZEXT816(0x1105dcb80);
}



/* Entry: 102e528bc; end: 102e528e3;  */

void FUN_102e528bc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102e528e4; end: 102e528eb;  */

undefined8 FUN_102e528e4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102e528ec; end: 102e52977; -[_TtC18AdApplePromptScope18AdApplePromptScope scopeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e528ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f20bd8;
  func_0x000107c61428(param_1 + _DAT_112f20bd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52978; end: 102e52b1b; -[_TtC18AdApplePromptScope18AdApplePromptScope setScopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f20bd8;
  func_0x000107c61428(param_1 + _DAT_112f20bd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e52b1c; end: 102e52b3b; -[_TtC18AdApplePromptScope18AdApplePromptScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52b1c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f20be0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52b3c; end: 102e52b4b; -[_TtC18AdApplePromptScope18AdApplePromptScope adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e52b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f20be8);
}



/* Entry: 102e52b4c; end: 102e52b7b;  */

void FUN_102e52b4c(void)

{
  func_0x000100333540();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e52b7c; end: 102e52bff; -[_TtC18AdApplePromptScope18AdApplePromptScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52b7c(long param_1)

{
  func_0x00010242e4c0(param_1 + _DAT_112f20bd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f20be0));
  return;
}



/* Entry: 102e52c00; end: 102e52cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102e52c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100333540();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f20bd8;
  func_0x000107c61614(lVar4 + _DAT_112f20bd8,0);
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_112f20be0) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f20be8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar5;
}



/* Entry: 102e52d00; end: 102e52d7b; -[_TtC18AdApplePromptScope26AdApplePromptScopeServices buildWithScopeDelegate:uiContainer:adProductType:] */

void FUN_102e52d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102e52c00(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e52d7c; end: 102e52daf;  */

void FUN_102e52d7c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e52db0; end: 102e52ddf; -[_TtC18AdApplePromptScope26AdApplePromptScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f20bf8));
  return;
}



/* Entry: 102e52de0; end: 102e52def; -[SCAdOperaSessionScope adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f20c68));
  return;
}



/* Entry: 102e52df0; end: 102e52dff; -[SCAdOperaSessionScope viewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e52df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f20c70);
}



/* Entry: 102e52e00; end: 102e52e0b; -[SCAdOperaSessionScope fromViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f20c78;
  func_0x000107c61428(param_1 + _DAT_112f20c78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52e0c; end: 102e52e17; -[SCAdOperaSessionScope setFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f20c78;
  func_0x000107c61428(param_1 + _DAT_112f20c78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e52e18; end: 102e52e23; -[SCAdOperaSessionScope baseView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f20c80;
  func_0x000107c61428(param_1 + _DAT_112f20c80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52e24; end: 102e52e2f; -[SCAdOperaSessionScope setBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f20c80;
  func_0x000107c61428(param_1 + _DAT_112f20c80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e52e30; end: 102e52e3f; -[SCAdOperaSessionScope transitionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e52e30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f20c88);
}



/* Entry: 102e52e40; end: 102e52e4b; -[SCAdOperaSessionScope operaPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f20c90;
  func_0x000107c61428(param_1 + _DAT_112f20c90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52e4c; end: 102e52e8f;  */

void FUN_102e52e4c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e52e90; end: 102e52e9b; -[SCAdOperaSessionScope setOperaPresenterDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f20c90;
  func_0x000107c61428(param_1 + _DAT_112f20c90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e52e9c; end: 102e52eef;  */

void FUN_102e52e9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e52ef0; end: 102e52f4b; -[SCAdOperaSessionScope userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52ef0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f20c98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f20c98);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e52f4c; end: 102e52f77; -[SCAdOperaSessionScope init] */

void FUN_102e52f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScope.SCAdOperaSessionScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e52f78);
  (*pcVar1)();
}



/* Entry: 102e52f78; end: 102e52fe3; -[SCAdOperaSessionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52f78(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f20c68));
  func_0x000100d290ec(param_1 + _DAT_112f20c78);
  func_0x000107c61610(param_1 + _DAT_112f20c80);
  func_0x000100d290ec(param_1 + _DAT_112f20c90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f20c98 + 8))
  ;
  return;
}



/* Entry: 102e52fe4; end: 102e5304f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e52fe4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003700b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f20ca8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102e53050; end: 102e53057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e53050(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003700b0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f20ca8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102e53058; end: 102e530a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e53058(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f20ca8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e530a4; end: 102e53253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102e530a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_d0 [2];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = param_1;
  func_0x00010036ea2c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar3 = _DAT_112f20c78;
  func_0x000107c61614(lVar7 + _DAT_112f20c78,0);
  lVar4 = _DAT_112f20c80;
  func_0x000107c61614(lVar7 + _DAT_112f20c80,0);
  lVar5 = _DAT_112f20c90;
  func_0x000107c61614(lVar7 + _DAT_112f20c90,0);
  *(long *)(lVar7 + _DAT_112f20c68) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112f20c70) = param_2;
  func_0x000107c61428(lVar7 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar7 + lVar3,param_3);
  func_0x000107c61428(lVar7 + lVar4,auStack_90,1,0);
  func_0x000107c61604(lVar7 + lVar4,param_4);
  *(undefined8 *)(lVar7 + _DAT_112f20c88) = param_5;
  func_0x000107c61428(lVar7 + lVar5,auStack_a8,1,0);
  func_0x000107c61604(lVar7 + lVar5,param_6);
  puVar1 = (undefined8 *)(lVar7 + _DAT_112f20c98);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_b8 = lVar7;
  lStack_b0 = lVar6;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_8);
  plVar8 = &lStack_b8;
  func_0x000107c61154(plVar8,puVar2);
  aplStack_d0[0] = plVar8;
  func_0x00010008a7c8(&uStack_c0,aplStack_d0);
  func_0x000100083b20(aplStack_d0);
  func_0x000107c61574(uStack_c0);
  func_0x000107c615e8(aplStack_d0[0]);
  return plVar8;
}



/* Entry: 102e53254; end: 102e5335f; -[_TtC21SCAdOperaSessionScope29SCAdOperaSessionScopeServices buildWithAdResponse:viewLocation:fromViewController:baseView:transitionMode:operaPresenterDelegate:userId:] */

void FUN_102e53254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_9 == 0) {
    param_9 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_102e530a4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e53360; end: 102e5338b; -[_TtC21SCAdOperaSessionScope29SCAdOperaSessionScopeServices init] */

void FUN_102e53360(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdOperaSessionScope.SCAdOperaSessionScopeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e5338c);
  (*pcVar1)();
}



/* Entry: 102e5338c; end: 102e5338f;  */

void FUN_102e5338c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e53390; end: 102e533c3;  */

void FUN_102e53390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e533c4; end: 102e5340b; -[_TtC21SCAdOperaSessionScope29SCAdOperaSessionScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e533c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f20ca8));
  return;
}



/* Entry: 102e5340c; end: 102e534e3;  */

void FUN_102e5340c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e534e4; end: 102e53503;  */

void FUN_102e534e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102e53504; end: 102e53543;  */

void FUN_102e53504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f20d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db59b70;
  func_0x000107c61520(&UNK_10db59b70,&UNK_1105dcde8);
  puRam0000000112f20d18 = puVar1;
  return;
}



/* Entry: 102e53544; end: 102e53567;  */

undefined1  [16] FUN_102e53544(void)

{
  return ZEXT816(0x1105dcde8);
}



/* Entry: 102e53568; end: 102e53613;  */

void FUN_102e53568(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e53614; end: 102e5363b;  */

void FUN_102e53614(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102e5363c; end: 102e53683; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e5363c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f20d20;
  func_0x000107c61428(param_1 + _DAT_112f20d20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e53684; end: 102e536db; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e53684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f20d20;
  func_0x000107c61428(param_1 + _DAT_112f20d20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e536dc; end: 102e536fb; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e536dc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f20d28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e536fc; end: 102e5370b; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e536fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f20d30);
}



/* Entry: 102e5370c; end: 102e5371b; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102e5370c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f20d38);
}



/* Entry: 102e5371c; end: 102e537c3; -[_TtC22SCBitmojiSettingsScope22SCBitmojiSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e5371c(long param_1)

{
  func_0x000102e53754(param_1 + _DAT_112f20d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f20d28));
  return;
}



/* Entry: 102e537c4; end: 102e538d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102e537c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x0001002b3ea0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f20d20;
  func_0x000107c61614(lVar4 + _DAT_112f20d20,0);
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_112f20d28) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f20d30) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f20d38) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  func_0x000107c61574(uStack_80);
  func_0x000107c615e8(aplStack_90[0]);
  return plVar5;
}



/* Entry: 102e538d4; end: 102e53963; -[_TtC22SCBitmojiSettingsScope30SCBitmojiSettingsScopeServices buildWithDelegate:uiContainer:status:page:] */

void FUN_102e538d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102e537c4(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e53964; end: 102e53967;  */

void FUN_102e53964(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e53968; end: 102e5399b;  */

void FUN_102e53968(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e5399c; end: 102e539af; -[_TtC22SCBitmojiSettingsScope30SCBitmojiSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e5399c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f20d48));
  return;
}


