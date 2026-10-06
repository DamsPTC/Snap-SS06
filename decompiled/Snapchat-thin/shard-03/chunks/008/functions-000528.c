/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cea164; end: 102cea18b;  */

void FUN_102cea164(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102cea080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cea18c; end: 102cea30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cea18c(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  
  func_0x000107c614f0();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar1,PTR_s_viewDidLoad_112684cd8);
  func_0x000102ce9f20();
  puVar2 = &UNK_1105c0db0;
  func_0x000107c613fc(&UNK_1105c0db0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102ceadb4;
  func_0x0001000c0ebc(FUN_102ceadb4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  uVar4 = 0;
  func_0x000103b99614();
  puStack_68 = &UNK_1105c3600;
  ppuStack_60 = &PTR_DAT_1105c32c0;
  puVar2 = &UNK_10db3fe50;
  uStack_70 = uVar4;
  func_0x000107c614e0(&UNK_10db3fe50,&uStack_70);
  plVar5 = (long *)0x102ceadd8;
  func_0x0001000bfde0(0x102ceadd8,puVar2,&UNK_1105c3600);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1105c0dd8;
  func_0x000107c613fc(&UNK_1105c0dd8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_102ceae14;
  puVar7 = puVar2;
  (**(code **)(*plVar5 + 0x60))(FUN_102ceae14);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar2);
  pcVar6 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0c9d0),pcVar6,puVar7);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102cea310; end: 102cea567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cea310(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar5 = *param_1;
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      FUN_102cea568(lVar5);
    }
    else {
      if (bVar2 != 2) {
        return;
      }
      func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      lVar1 = param_2 + _DAT_112f0c9d8;
      func_0x000107c61428(lVar1,auStack_60,0,0);
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_102ceb0ac(lVar1,auStack_88);
        func_0x000107c61170(param_2);
        func_0x0001000a8868(auStack_88,uStack_70);
        pcVar4 = *(code **)(lStack_68 + 0x18);
LAB_102cea528:
        (*pcVar4)((uint)lVar5 & 1,uStack_70,lStack_68);
        func_0x0001000834e4(auStack_88);
        return;
      }
    }
  }
  else if (bVar2 == 3) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    lVar1 = param_2 + _DAT_112f0c9d8;
    func_0x000107c61428(lVar1,auStack_60,0,0);
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_102ceb0ac(lVar1,auStack_88);
      func_0x000107c61170(param_2);
      func_0x0001000a8868(auStack_88,uStack_70);
      pcVar4 = *(code **)(lStack_68 + 0x20);
      goto LAB_102cea528;
    }
  }
  else {
    if (bVar2 != 4 || lVar5 != 5) {
      return;
    }
    func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
    lVar5 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar5 == 0) {
      return;
    }
    param_2 = lVar5;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (param_2 == 0) {
      return;
    }
    uVar3 = 0;
    func_0x000103b99614(0);
    lVar5 = param_2;
    func_0x000107c61480(param_2,uVar3);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar5 + _DAT_112ff2570);
      lVar5 = ((undefined8 *)(lVar5 + _DAT_112ff2570))[1];
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(param_2);
      func_0x000107c614f0(uVar3);
      (**(code **)(lVar5 + 0x50))();
      func_0x000107c615e8(uVar3);
      return;
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102cea568; end: 102cea747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cea568(void)

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
  
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112f0c9c8);
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
  FUN_102ceae1c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5[9] = puVar7;
  puVar5[6] = puVar6;
  func_0x000103b82400();
  uVar8 = puVar7[1];
  puVar5[10] = *puVar7;
  puVar5[0xb] = uVar8;
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c61434(uVar8);
  func_0x000107c5dc50(0,0);
  func_0x000107c61180();
  uVar8 = 0;
  FUN_102ceae1c(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
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



/* Entry: 102cea748; end: 102cea76f;  */

void FUN_102cea748(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cea18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cea770; end: 102cea9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cea770(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  
  lVar2 = _DAT_112f0c9d8;
  if (param_2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f0c9d8,auStack_b0,0,0);
    func_0x000102cead4c(unaff_x20 + lVar2,auStack_d8);
    if (lStack_c0 == 0) {
      func_0x000102cead04(auStack_d8);
    }
    else {
      FUN_102cead9c(auStack_d8,auStack_98);
      uVar1 = *(undefined8 *)(param_2 + _DAT_112ff2570);
      lVar2 = ((undefined8 *)(param_2 + _DAT_112ff2570))[1];
      uVar4 = uVar1;
      func_0x000107c614f0(uVar1);
      pcVar8 = *(code **)(lVar2 + 0x10);
      func_0x000107c615f0(uVar1);
      func_0x000107c61174(param_2);
      uVar5 = uVar4;
      (*pcVar8)(uVar4,lVar2);
      func_0x000107c615e8(uVar1);
      lVar6 = unaff_x20;
      func_0x000107c40110();
      func_0x000107c61180();
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        lVar7 = unaff_x20;
        func_0x000107c4abb8();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x102cea9bc);
          (*pcVar8)();
        }
        cVar3 = *(char *)(lVar7 + _DAT_113079d30);
        func_0x000107c61170();
        uVar9 = 0;
        if (cVar3 == '\x01') {
          uVar9 = uVar5;
          func_0x000107c4aba4(uVar5);
          func_0x000107c61180();
          func_0x000107c539d4(*(undefined8 *)(lVar6 + _DAT_113079160));
          func_0x000107c61170(uVar9);
          func_0x000107c534b0(uVar5);
          func_0x000107c4abb8();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102cea9c0);
            (*pcVar8)();
          }
          func_0x000107c61170(lVar6);
          uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113079d28);
          lVar6 = unaff_x20;
        }
        func_0x000107c61170(lVar6);
      }
      func_0x0001000a8868(auStack_98,uStack_80);
      (**(code **)(lStack_78 + 0x10))(uVar9,uVar5,uStack_80,lStack_78);
      lVar6 = _DAT_11380cf00;
      if (param_1 == 0) {
        pcVar8 = *(code **)(lVar2 + 0x40);
        func_0x000107c615f0(uVar1);
        (*pcVar8)(param_2 + lVar6,uVar4,lVar2);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(uVar1);
      }
      else {
        func_0x000107c61170(param_2);
      }
      func_0x000107c61170(uVar5);
      func_0x0001000834e4(auStack_98);
    }
  }
  return;
}



/* Entry: 102cea9c0; end: 102ceab7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cea9c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidFullyAppear_112684c88;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar2 = param_1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0;
    func_0x000103b99614(0);
    lVar4 = lVar2;
    func_0x000107c61480(lVar2,uVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    }
    else {
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112ff2570);
      lVar4 = ((undefined8 *)(lVar4 + _DAT_112ff2570))[1];
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c614f0(uVar3);
      (**(code **)(lVar4 + 0x48))();
      func_0x000107c615e8(uVar3);
    }
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102ceab80; end: 102ceac03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ceab80(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0c9c0 + 8));
  func_0x0001000834e4(unaff_x20 + _DAT_112f0c9c8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f0c9d0));
  lVar1 = unaff_x20 + _DAT_112f0c9d8;
  lVar2 = 0x112f0cb08;
  func_0x0001000285a8(0x112f0cb08,&UNK_10db3fe48);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1,lVar2);
  return lVar1;
}



/* Entry: 102ceac04; end: 102ceac5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102ceac04(long param_1)

{
  long lVar1;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0c9c0 + 8));
  func_0x0001000834e4(param_1 + _DAT_112f0c9c8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0c9d0));
  param_1 = param_1 + _DAT_112f0c9d8;
  lVar1 = 0x112f0cb08;
  func_0x0001000285a8(0x112f0cb08,&UNK_10db3fe48);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102ceac60; end: 102ceacfb;  */

void FUN_102ceac60(undefined8 param_1)

{
  if (lRam0000000112f0ca08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e728a50);
  return;
}



/* Entry: 102ceacfc; end: 102cead03;  */

void FUN_102ceacfc(void)

{
  if (lRam0000000112f0ca08 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e728a50);
  return;
}



/* Entry: 102cead04; end: 102cead9b;  */

undefined8 FUN_102cead04(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f0cb08;
  func_0x0001000285a8(0x112f0cb08,&UNK_10db3fe48);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102cead9c; end: 102ceadb3;  */

undefined8 * FUN_102cead9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102ceadb4; end: 102ceae13;  */

uint FUN_102ceadb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_102ceaee0(uVar1,*(undefined8 *)(param_1 + 0x18));
  return (uint)uVar1 & 1;
}



/* Entry: 102ceae14; end: 102ceae1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ceae14(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar6 = *param_1;
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 < 3) {
    if (bVar2 == 1) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
      lVar4 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar4 == 0) {
        return;
      }
      FUN_102cea568(lVar6);
    }
    else {
      if (bVar2 != 2) {
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
      lVar4 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar4 == 0) {
        return;
      }
      lVar1 = lVar4 + _DAT_112f0c9d8;
      func_0x000107c61428(lVar1,auStack_60,0,0);
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_102ceb0ac(lVar1,auStack_88);
        func_0x000107c61170(lVar4);
        func_0x0001000a8868(auStack_88,uStack_70);
        pcVar5 = *(code **)(lStack_68 + 0x18);
LAB_102cea528:
        (*pcVar5)((uint)lVar6 & 1,uStack_70,lStack_68);
        func_0x0001000834e4(auStack_88);
        return;
      }
    }
  }
  else if (bVar2 == 3) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
    lVar1 = lVar4 + _DAT_112f0c9d8;
    func_0x000107c61428(lVar1,auStack_60,0,0);
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_102ceb0ac(lVar1,auStack_88);
      func_0x000107c61170(lVar4);
      func_0x0001000a8868(auStack_88,uStack_70);
      pcVar5 = *(code **)(lStack_68 + 0x20);
      goto LAB_102cea528;
    }
  }
  else {
    if (bVar2 != 4 || lVar6 != 5) {
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
    lVar6 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      return;
    }
    lVar4 = lVar6;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar4 == 0) {
      return;
    }
    uVar3 = 0;
    func_0x000103b99614(0);
    lVar6 = lVar4;
    func_0x000107c61480(lVar4,uVar3);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(lVar6 + _DAT_112ff2570);
      lVar6 = ((undefined8 *)(lVar6 + _DAT_112ff2570))[1];
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar4);
      func_0x000107c614f0(uVar3);
      (**(code **)(lVar6 + 0x50))();
      func_0x000107c615e8(uVar3);
      return;
    }
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102ceae1c; end: 102ceaedb;  */

void FUN_102ceae1c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102ceaedc; end: 102ceaedf;  */

uint FUN_102ceaedc(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c4deec();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      if ((param_1 == lVar2) && (param_2 == puVar3)) {
        uVar4 = 1;
      }
      else {
        func_0x000107c605b8(param_1,param_2,lVar2,puVar3,0);
        uVar4 = (uint)param_1;
      }
      func_0x000107c6142c(puVar3);
      goto LAB_102ceafa0;
    }
  }
  uVar4 = 0;
LAB_102ceafa0:
  return uVar4 & 1;
}



/* Entry: 102ceaee0; end: 102ceafbb;  */

uint FUN_102ceaee0(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_3 + 0x10,puVar3,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c4deec();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      if ((param_1 == lVar2) && (param_2 == puVar3)) {
        uVar4 = 1;
      }
      else {
        func_0x000107c605b8(param_1,param_2,lVar2,puVar3,0);
        uVar4 = (uint)param_1;
      }
      func_0x000107c6142c(puVar3);
      goto LAB_102ceafa0;
    }
  }
  uVar4 = 0;
LAB_102ceafa0:
  return uVar4 & 1;
}



/* Entry: 102ceafbc; end: 102ceafdf;  */

uint FUN_102ceafbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_102ceafe4(uVar1,*(undefined8 *)(param_1 + 0x28));
  return (uint)uVar1 & 1;
}



/* Entry: 102ceafe0; end: 102ceafe3;  */

void FUN_102ceafe0(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = *param_1;
  uStack_38 = *(undefined1 *)(param_1 + 1);
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_18 = param_1[5];
  func_0x000107c614bc(&uStack_40);
  return;
}



/* Entry: 102ceafe4; end: 102ceb0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102ceafe4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + _DAT_112f0cc48);
    lVar2 = ((long *)(param_3 + _DAT_112f0cc48))[1];
    func_0x000107c61434(lVar2);
    func_0x000107c61170(param_3);
    if (lVar2 != 0) {
      if (param_1 == lVar1 && lVar2 == param_2) {
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8(param_1,param_2,lVar1,lVar2,0);
        uVar3 = (uint)param_1;
      }
      func_0x000107c6142c(lVar2);
      goto LAB_102ceb090;
    }
  }
  uVar3 = 0;
LAB_102ceb090:
  return uVar3 & 1;
}



/* Entry: 102ceb0ac; end: 102ceb13f;  */

long FUN_102ceb0ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102ceb140; end: 102ceb183;  */

void FUN_102ceb140(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = *param_1;
  uStack_38 = *(undefined1 *)(param_1 + 1);
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_18 = param_1[5];
  func_0x000107c614bc(&uStack_40);
  return;
}



/* Entry: 102ceb184; end: 102ceb193;  */

uint FUN_102ceb184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_102ceafe4(uVar1,*(undefined8 *)(param_1 + 0x28));
  return (uint)uVar1 & 1;
}



/* Entry: 102ceb194; end: 102ceb19b; -[_TtC40AdOperaLayerFactoryServiceImplementation34AdStaticAdSkipRestrictionLayerView hitTest:withEvent:] */

void FUN_102ceb194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 102ceb19c; end: 102ceb207; -[_TtC40AdOperaLayerFactoryServiceImplementation34AdStaticAdSkipRestrictionLayerView initWithFrame:] */

void FUN_102ceb19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 102ceb208; end: 102ceb287; -[_TtC40AdOperaLayerFactoryServiceImplementation34AdStaticAdSkipRestrictionLayerView initWithCoder:] */

undefined1 * FUN_102ceb208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102ceb288; end: 102ceb2a7;  */

void FUN_102ceb288(void)

{
  func_0x000107c61168(&PTR_PTR_11289f828);
  return;
}



/* Entry: 102ceb2a8; end: 102ceb38b;  */

/* WARNING: Possible PIC construction at 0x000102ceb2d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceb300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceb348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ceb304) */
/* WARNING: Removing unreachable block (ram,0x000102ceb360) */
/* WARNING: Removing unreachable block (ram,0x000102ceb318) */
/* WARNING: Removing unreachable block (ram,0x000102ceb2dc) */
/* WARNING: Removing unreachable block (ram,0x000102ceb35c) */
/* WARNING: Removing unreachable block (ram,0x000102ceb2f0) */
/* WARNING: Removing unreachable block (ram,0x000102ceb34c) */

void FUN_102ceb2a8(undefined8 param_1)

{
  FUN_102ceb288();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ceb38c; end: 102ceb397;  */

undefined8 FUN_102ceb38c(void)

{
  return 0;
}



/* Entry: 102ceb398; end: 102ceb513;  */

void FUN_102ceb398(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a0 [8];
  long lStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar2 = 0;
  dVar7 = param_1;
  dVar6 = param_2;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  dVar7 = dVar7 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb508);
    (*pcVar1)();
  }
  if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb50c);
    (*pcVar1)();
  }
  dVar4 = 1.8446744073709552e+19;
  if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb510);
    (*pcVar1)();
  }
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    dVar5 = dVar4;
    func_0x000107c609cc(dVar4,dVar6,param_3,param_4);
    func_0x000107c609b0(dVar4,dVar6,param_3,param_4);
    dStack_78 = param_2 / dVar4;
    lStack_98 = (long)dVar7;
    dStack_90 = param_1;
    dStack_88 = param_2;
    dStack_80 = param_1 / dVar5;
    FUN_102cebf20(&lStack_98);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb514);
  (*pcVar1)();
}



/* Entry: 102ceb514; end: 102ceb57f;  */

undefined8
FUN_102ceb514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_102ceb62c(param_3,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 102ceb580; end: 102ceb583;  */

void FUN_102ceb580(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ceb584; end: 102ceb623;  */

void FUN_102ceb584(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ceb624; end: 102ceb62b;  */

void FUN_102ceb624(void)

{
  if (lRam0000000112f0cb68 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e728ae0);
  return;
}



/* Entry: 102ceb62c; end: 102ceb91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102ceb62c(undefined8 param_1,undefined8 param_2,double param_3,int param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong unaff_x20;
  long lVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if (param_4 != 5) {
    return 0xffffffffffffffff;
  }
  uVar2 = unaff_x20;
  uVar5 = param_5;
  func_0x000107c4e230();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return 0xffffffffffffffff;
  }
  uVar3 = uVar2;
  func_0x000107c499b8();
  if ((int)uVar3 == 0) {
LAB_102ceb868:
    func_0x000107c61170(uVar2);
    return 0xffffffffffffffff;
  }
  lVar8 = *(long *)(uVar2 + _DAT_11307abc8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0e0f8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e0f8);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    uVar3 = uVar5;
    func_0x000100029284(ppuVar4);
    if ((uVar3 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + (long)ppuVar4 * 0x20,&uStack_a0);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(lVar8);
      if (lStack_88 != 0) {
        func_0x00010006e7f4(&uStack_a0);
        uVar5 = unaff_x20;
        func_0x000107c4dec0();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb918);
          (*pcVar1)();
        }
        lVar9 = *(long *)(uVar5 + _DAT_11307a248);
        lVar8 = lVar9;
        func_0x000107c61174();
        func_0x000107c61170(uVar5);
        dVar12 = 0.6000000238418579;
        if (lVar9 != 0) {
          lVar9 = lVar8;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar8);
          if (lVar9 != 0) {
            uVar6 = 0xd000000000000022;
            func_0x000107c5fadc(0xd000000000000022,0x800000010f108c60);
            fVar10 = 0.6;
            func_0x000107c436e4(lVar9);
            func_0x000107c615e8(lVar9);
            func_0x000107c61170(uVar6);
            dVar12 = (double)fVar10;
          }
        }
        uVar5 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ceb91c);
          (*pcVar1)();
        }
        func_0x000107c3ec60();
        func_0x000107c61170(uVar5);
        if (param_5 != 0) {
          dVar11 = (1.0 - dVar12) * param_3;
          uVar6 = 0x3fe0000000000000;
          dVar13 = dVar11 * 0.5;
          func_0x000107c61174();
          func_0x000107c5de64();
          func_0x000107c61180();
          func_0x000107c4b8b8(param_5);
          func_0x000107c61170(unaff_x20);
          if ((dVar13 <= dVar11) && (dVar11 <= dVar12 * param_3 + dVar13)) {
            puVar7 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
            func_0x000107c61168(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
            uVar5 = param_5;
            func_0x000107c6148c(param_5,puVar7);
            if ((uVar5 != 0) || (uVar5 = param_5, func_0x000107c5bcc0(), uVar5 == 3)) {
              FUN_102ceb398(dVar11,uVar6);
            }
            func_0x000107c61170(uVar2);
            func_0x000107c61170(param_5);
            return 1;
          }
          func_0x000107c61170(uVar2);
          uVar2 = param_5;
        }
        goto LAB_102ceb868;
      }
      goto LAB_102ceb888;
    }
    func_0x000107c6142c(lVar8);
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  func_0x000107c6142c(uVar5);
LAB_102ceb888:
  func_0x000107c61170(uVar2);
  func_0x00010006e7f4(&uStack_a0);
  return 0xffffffffffffffff;
}



/* Entry: 102ceb91c; end: 102ceb923;  */

void FUN_102ceb91c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ceb924; end: 102ceb9e3;  */

void FUN_102ceb924(long param_1,long param_2)

{
  undefined *puVar1;
  ulong *unaff_x20;
  undefined8 uVar2;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  uVar2 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50);
  FUN_102ceb9e4(0,uVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_updateViewWithPreviousLayer_curr_112680a50,
                      param_1,param_2);
  if (param_1 != 0) {
    func_0x000107c614a0(param_1,uVar2);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c614a0(param_2,uVar2);
  }
  (**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0x78))(param_1,param_2);
  return;
}



/* Entry: 102ceb9e4; end: 102ceb9ef;  */

void FUN_102ceb9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e728b34);
  return;
}



/* Entry: 102ceb9f0; end: 102cebae7;  */

/* WARNING: Possible PIC construction at 0x000102ceba48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ceba4c) */

void FUN_102ceb9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102ceb924(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102cebae8; end: 102cebb33;  */

void FUN_102cebae8(void)

{
  ulong *unaff_x20;
  
  FUN_102ceb9e4(0,*(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cebb34; end: 102cebb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cebb34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0cc40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0cc48 + 8))
  ;
  return;
}



/* Entry: 102cebb70; end: 102cebb9b;  */

void FUN_102cebb70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayerFactoryServiceImplementation.AdOperaLayerViewController",0x43,
                      "init(configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:featureFlags:)"
                      ,99,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cebb9c);
  (*pcVar1)();
}



/* Entry: 102cebb9c; end: 102cebb9f;  */

void FUN_102cebb9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102cebba0; end: 102cebbeb;  */

void FUN_102cebba0(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = &UNK_10db3ff20;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 102cebbec; end: 102cebd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cebbec(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

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
  uVar3 = param_4;
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
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
    uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    bStack_d0 = param_3 & 1;
    uStack_e0 = param_1;
    uStack_d8 = param_2;
    uStack_c8 = param_4;
    lStack_c0 = lVar2;
    uStack_b8 = uVar3;
    func_0x000107c61434();
    func_0x0001000d224c(auStack_108);
    func_0x0001000a8868(auStack_108,uStack_f0);
    uVar3 = 0x112efcea0;
    func_0x0001000285a8(0x112efcea0,&UNK_10db2eb80);
    uVar4 = 0x112efcea8;
    uStack_118 = uVar3;
    FUN_102cf09a0(0x112efcea8,0x112efcea0,&UNK_10db2eb80);
    puVar5 = &UNK_1105c11e8;
    uStack_110 = uVar4;
    func_0x000107c613fc(&UNK_1105c11e8,0x50,7);
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
    func_0x000102cf09e4(&uStack_a0,auStack_170,0x112efcea0,&UNK_10db2eb80);
    (*pcVar6)(apuStack_130,uStack_f0,lStack_e8);
    func_0x000102cf0a2c(&uStack_e0,0x112efcea0,&UNK_10db2eb80);
    func_0x000102cf0878(apuStack_130);
    func_0x000102cf0878(auStack_108);
  }
  return;
}



/* Entry: 102cebd98; end: 102cebf1f;  */

/* WARNING: Possible PIC construction at 0x000102cebec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cebecc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cebd98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar7 = unaff_x20;
  uVar5 = param_2;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar7 == 0) {
    return;
  }
  lVar1 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    func_0x000107c61434(lVar7);
    FUN_102cf0990(param_1,param_2);
    func_0x000107c61434(uVar5);
    func_0x0001000d224c(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar2 = 0x112f0c918;
    func_0x0001000285a8(0x112f0c918,&UNK_10db3fd10);
    uVar3 = 0x112f0c920;
    uStack_98 = uVar2;
    FUN_102cf09a0(0x112f0c920,0x112f0c918,&UNK_10db3fd10);
    puVar4 = &UNK_1105c11c0;
    uStack_90 = uVar3;
    func_0x000107c613fc(&UNK_1105c11c0,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    puVar4[0x18] = (char)param_2;
    *(long *)(puVar4 + 0x20) = lVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar5;
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    *(long *)(puVar4 + 0x38) = lVar7;
    apuStack_b0[0] = puVar4;
    (**(code **)(lStack_68 + 0x10))(apuStack_b0,uStack_70,lStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 102cebf20; end: 102cec0db;  */

/* WARNING: Possible PIC construction at 0x000102cec08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cec090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cebf20(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_180 [72];
  undefined *apuStack_138 [3];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar2 = unaff_x20;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
  if (lVar2 != 0) {
    uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    uStack_e8 = *param_1;
    uStack_d8 = param_1[2];
    uStack_e0 = param_1[1];
    uStack_c8 = param_1[4];
    uStack_d0 = param_1[3];
    lStack_c0 = lVar1;
    uStack_b8 = param_2;
    lStack_a8 = lVar2;
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    func_0x0001000d224c(auStack_110);
    func_0x0001000a8868(auStack_110,uStack_f8);
    uVar3 = 0x112f0cf00;
    func_0x0001000285a8(0x112f0cf00,&UNK_10db40048);
    uVar4 = 0x112f0cf08;
    uStack_120 = uVar3;
    FUN_102cf09a0(0x112f0cf08,0x112f0cf00,&UNK_10db40048);
    puVar5 = &UNK_1105c1198;
    uStack_118 = uVar4;
    func_0x000107c613fc(&UNK_1105c1198,0x58,7);
    lStack_78 = lStack_c0;
    uStack_80 = uStack_c8;
    uStack_68 = uStack_b0;
    uStack_70 = uStack_b8;
    lStack_60 = lStack_a8;
    uStack_98 = uStack_e0;
    uStack_a0 = uStack_e8;
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    *(long *)(puVar5 + 0x38) = lStack_c0;
    *(undefined8 *)(puVar5 + 0x30) = uStack_c8;
    *(undefined8 *)(puVar5 + 0x48) = uStack_b0;
    *(undefined8 *)(puVar5 + 0x40) = uStack_b8;
    *(long *)(puVar5 + 0x50) = lStack_a8;
    *(undefined8 *)(puVar5 + 0x18) = uStack_e0;
    *(undefined8 *)(puVar5 + 0x10) = uStack_e8;
    *(undefined8 *)(puVar5 + 0x28) = uStack_d0;
    *(undefined8 *)(puVar5 + 0x20) = uStack_d8;
    pcVar6 = *(code **)(lStack_f0 + 0x10);
    apuStack_138[0] = puVar5;
    func_0x000102cf09e4(&uStack_a0,auStack_180,0x112f0cf00,&UNK_10db40048);
    (*pcVar6)(apuStack_138,uStack_f8,lStack_f0);
    func_0x000102cf0a2c(&uStack_e8,0x112f0cf00,&UNK_10db40048);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cec0dc; end: 102cec2af;  */

/* WARNING: Possible PIC construction at 0x000102cec23c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cec258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cec240) */
/* WARNING: Removing unreachable block (ram,0x000102cec25c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec0dc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar7 = unaff_x20;
  lVar5 = param_2;
  func_0x000107c4deec();
  func_0x000107c61180();
  if (lVar7 == 0) {
    return;
  }
  lVar1 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f0cc48))[1];
  if (lVar7 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0cc48);
    func_0x000107c61434(lVar7);
    func_0x00010006c00c(param_1,param_2);
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c61434(lVar5);
    func_0x0001000d224c(auStack_88);
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar2 = 0x112f0cee8;
    func_0x0001000285a8(0x112f0cee8,&UNK_10db3fff0);
    uVar3 = 0x112f0cef0;
    uStack_98 = uVar2;
    FUN_102cf09a0(0x112f0cef0,0x112f0cee8,&UNK_10db3fff0);
    puVar4 = &UNK_1105c1058;
    uStack_90 = uVar3;
    func_0x000107c613fc(&UNK_1105c1058,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = param_2;
    *(long *)(puVar4 + 0x20) = lVar1;
    *(long *)(puVar4 + 0x28) = lVar5;
    *(undefined8 *)(puVar4 + 0x30) = uVar6;
    *(long *)(puVar4 + 0x38) = lVar7;
    pcVar8 = *(code **)(lStack_68 + 0x10);
    apuStack_b0[0] = puVar4;
    func_0x00010006c00c(param_1,param_2);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar7);
    (*pcVar8)(apuStack_b0,uStack_70,lStack_68);
    func_0x00010006c090(param_1,param_2);
    lVar5 = lVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar5);
  return;
}



/* Entry: 102cec2b0; end: 102cec313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec2b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_teardown_112678538;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  func_0x000107c504e8(*(undefined8 *)(param_1 + _DAT_112f0cd20));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102cec314; end: 102cec43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec314(void)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a568();
  func_0x000107c61170(puVar2);
  func_0x0001000d224c(&uStack_40);
  uVar4 = uStack_40;
  func_0x000107c614f0(uStack_40);
  uVar3 = 0xd00000000000002f;
  func_0x00010403c628(0xd00000000000002f,0x800000010f108e00,uVar4,uStack_38);
  func_0x000107c615e8(uStack_40);
  if ((uVar3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c53fcc();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0cd00);
    *(undefined **)(unaff_x20 + _DAT_112f0cd00) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cec440);
      (*pcVar1)();
    }
    func_0x000107c3d6fc();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 102cec440; end: 102cec467;  */

void FUN_102cec440(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cec314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cec468; end: 102cec597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec468(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidFullyAppear_112684c88);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0cd18);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c504f4(*(undefined8 *)(unaff_x20 + _DAT_112f0cd20));
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112f0cd40);
  uVar8 = puVar5[3];
  lVar2 = puVar5[4];
  func_0x0001000a8868(puVar5,uVar8);
  func_0x000103bbab08();
  uVar1 = *puVar5;
  uVar3 = puVar5[1];
  func_0x000107c61434(uVar3);
  func_0x000107c4e230();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  FUN_102cec598();
  lVar7 = lVar6;
  func_0x0001012254e8();
  func_0x000107c6142c(lVar6);
  (**(code **)(lVar2 + 0x20))(uVar1,uVar3,unaff_x20,lVar7,uVar8,lVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(lVar7);
  return;
}



/* Entry: 102cec598; end: 102cec70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102cec598(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  double dVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  
  puVar5 = (undefined8 *)0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  dVar9 = 9.88131291682493e-324;
  puVar5[3] = 4;
  puVar5[2] = 2;
  puVar6 = puVar5;
  func_0x000103bb6e38();
  uStack_110 = *puVar6;
  uVar1 = puVar6[1];
  uStack_108 = uVar1;
  func_0x000107c61438(uVar1,2);
  puVar4 = PTR___sSSSHsWP_11034da90;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c602d4(puVar5 + 4,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar6 = *(undefined8 **)(unaff_x20 + _DAT_112f0cd20);
  func_0x000107c3cf50();
  puVar5[0xc] = PTR___sSdN_11034dd90;
  puVar5[9] = dVar9 * 1000.0;
  func_0x00010404b784();
  uStack_110 = *puVar6;
  uVar2 = puVar6[1];
  uStack_108 = uVar2;
  func_0x000107c61438(uVar2,2);
  func_0x000107c602d4(puVar5 + 0xd,&uStack_110,puVar3,puVar4);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f0ccd8);
  uVar7 = 0x112f0cef8;
  func_0x0001000285a8(0x112f0cef8,&UNK_10db40040);
  puVar5[0x15] = uVar7;
  func_0x000107c61174(uVar8);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
  puVar5[0x12] = uVar8;
  puVar6 = puVar5;
  func_0x000100dfa3f0(puVar5);
  func_0x000107c61588(puVar5);
  uVar7 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  func_0x000107c61408(puVar5 + 4,2,uVar7);
  return puVar6;
}



/* Entry: 102cec710; end: 102cec737;  */

void FUN_102cec710(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cec468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cec738; end: 102cec7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec738(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidFullyDisappear_112684ca8;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f0cd18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c4e454(*(undefined8 *)(param_1 + _DAT_112f0cd20));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102cec7dc; end: 102cec883;  */

/* WARNING: Possible PIC construction at 0x000102cec838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cec83c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cec7dc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f0ccd0) == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cec884);
  (*pcVar1)();
}



/* Entry: 102cec884; end: 102cec8ab;  */

void FUN_102cec884(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cec7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cec8ac; end: 102ceca73;  */

/* WARNING: Possible PIC construction at 0x000102cec910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cec938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cec98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cec9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cec9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceca1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceca2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ceca20) */
/* WARNING: Removing unreachable block (ram,0x000102cec9f8) */
/* WARNING: Removing unreachable block (ram,0x000102ceca70) */
/* WARNING: Removing unreachable block (ram,0x000102ceca0c) */
/* WARNING: Removing unreachable block (ram,0x000102cec9c4) */
/* WARNING: Removing unreachable block (ram,0x000102cec990) */
/* WARNING: Removing unreachable block (ram,0x000102ceca6c) */
/* WARNING: Removing unreachable block (ram,0x000102cec9b0) */
/* WARNING: Removing unreachable block (ram,0x000102cec93c) */
/* WARNING: Removing unreachable block (ram,0x000102cec950) */
/* WARNING: Removing unreachable block (ram,0x000102cec97c) */
/* WARNING: Removing unreachable block (ram,0x000102cec914) */
/* WARNING: Removing unreachable block (ram,0x000102ceca30) */

void FUN_102cec8ac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126ac2a8;
    func_0x000107c610f8(PTR_PTR_1126ac2a8);
    func_0x000107c61174(param_2);
    func_0x000107c453e4(puVar1);
    uVar2 = 0x3c;
    func_0x000107c5fe40(0x3c);
    func_0x000107c59ec4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102ceca74; end: 102ced147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ceca74(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  char cStack_71;
  
  lVar17 = _DAT_112f0ccd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0ccd0);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f0cd10);
    if (lVar2 != 0) {
      func_0x000107c615f0(lVar2);
      lVar3 = param_1;
      func_0x000107c42978();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126ac2b0;
      func_0x000107c610f8(PTR_PTR_1126ac2b0);
      func_0x000107c453e4();
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0cd18);
      func_0x000107c5cb24(uVar5);
      func_0x000107c61180();
      func_0x000107c571ec(puVar4);
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0cd28);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c53548(puVar4);
      func_0x000107c615e8(uVar5);
      func_0x0001000d224c(&puStack_a8);
      func_0x000107c522dc(puVar4);
      func_0x000107c615e8(puStack_a8);
      lVar6 = *(long *)(unaff_x20 + _DAT_112f0cd38);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = lVar6;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (lVar7 != 0) {
          lVar8 = lVar7;
          func_0x000107c508d0();
          func_0x000107c61180();
          lVar9 = lVar8;
          func_0x000107c40974();
          func_0x000107c61180();
          lVar10 = lVar9;
          func_0x000107c41408();
          func_0x000107c61180();
          func_0x000107c53e8c(puVar4);
          func_0x000107c615e8(lVar6);
          func_0x000107c615e8(lVar7);
          func_0x000107c615e8(lVar8);
          func_0x000107c615e8(lVar9);
          lVar6 = lVar10;
        }
        func_0x000107c615e8(lVar6);
      }
      func_0x000107c54010(lVar3);
      puVar15 = &UNK_1105c0f68;
      puVar11 = puVar15;
      func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar12 = puVar15;
      func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      puVar13 = PTR_PTR_1126ac2b8;
      func_0x000107c610f8(PTR_PTR_1126ac2b8);
      pcVar1 = FUN_102cf01a0;
      FUN_102cefe54(FUN_102cf01a0,puVar11,FUN_102cf01c8,puVar12,FUN_102cee100,0,puVar13);
      puVar12 = puVar15;
      func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
      func_0x000107c61614(puVar12 + 0x10);
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_102cf01d0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1027f43c4;
      puStack_90 = &UNK_1105c0f80;
      ppuVar14 = &puStack_a8;
      puStack_80 = puVar12;
      func_0x000107c60bc4(ppuVar14);
      func_0x000107c61574(puStack_80);
      func_0x000107c56d2c(pcVar1);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
      func_0x000107c61614(puVar15 + 0x10);
      pcStack_88 = (code *)0x102cf0214;
      puStack_a8 = puVar11;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_100f70bd8;
      puStack_90 = &UNK_1105c0fa8;
      ppuVar14 = &puStack_a8;
      puStack_80 = puVar15;
      func_0x000107c60bc4(ppuVar14);
      func_0x000107c61574(puStack_80);
      func_0x000107c56f58(pcVar1);
      func_0x000107c60bd0(ppuVar14);
      puVar15 = &UNK_1105c0fe0;
      func_0x000107c613fc(&UNK_1105c0fe0,0x18,7);
      *(long *)(puVar15 + 0x10) = unaff_x20;
      pcStack_88 = (code *)0x102cf021c;
      puStack_a8 = puVar11;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_101341328;
      puStack_90 = &UNK_1105c0ff8;
      ppuVar14 = &puStack_a8;
      puStack_80 = puVar15;
      func_0x000107c60bc4(ppuVar14);
      puVar15 = puStack_80;
      lVar6 = unaff_x20;
      func_0x000107c61174();
      func_0x000107c61574(puVar15);
      func_0x000107c56d28(pcVar1);
      func_0x000107c60bd0(ppuVar14);
      if (lVar3 != 0) {
        func_0x000107c56974(lVar3);
      }
      lVar7 = param_1;
      func_0x000107c42994(param_1);
      func_0x000107c61180();
      puVar15 = PTR_PTR_1126ac2c0;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(lVar7);
      uVar5 = *(undefined8 *)(unaff_x20 + lVar17);
      *(undefined **)(unaff_x20 + lVar17) = puVar15;
      func_0x000107c61174(puVar15);
      func_0x000107c61170(uVar5);
      func_0x000107c4265c();
      if ((int)param_1 != 0) {
        puVar11 = puVar15;
        func_0x000107c61174(puVar15);
        puVar12 = puVar11;
        func_0x000107c4aba4();
        func_0x000107c61180();
        puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        puVar16 = puVar13;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c61170(puVar13);
        func_0x000107c52df8(puVar12);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar16);
        puVar12 = puVar11;
        func_0x000107c4aba4(puVar11);
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c52e0c(0x4008000000000000,puVar12);
        func_0x000107c61170(puVar12);
      }
      lVar17 = lVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ced148);
        (*pcVar1)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170(lVar17);
      func_0x0001000d224c(&uStack_b8);
      uVar5 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      puStack_a8 = (undefined *)0xd00000000000002b;
      uStack_a0 = 0x800000010f108da0;
      pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff00);
      (**(code **)(lStack_b0 + 8))
                (&cStack_71,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lStack_b0);
      func_0x000107c615e8(uStack_b8);
      if ((cStack_71 == '\x01') && (*(char *)((undefined8 *)(lVar6 + _DAT_112f0cce0) + 1) != '\x01')
         ) {
        FUN_102ced2b4(*(undefined8 *)(lVar6 + _DAT_112f0cce0));
      }
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(pcVar1);
      func_0x000107c61170(lVar3);
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c42994(param_1);
    func_0x000107c61180();
    func_0x000107c5a588(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&uStack_b8);
    uVar5 = uStack_b8;
    func_0x000107c614f0(uStack_b8);
    puStack_a8 = (undefined *)0xd00000000000002b;
    uStack_a0 = 0x800000010f108da0;
    pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffffffffff00);
    (**(code **)(lStack_b0 + 8))
              (&cStack_71,&puStack_a8,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar5,lStack_b0);
    func_0x000107c615e8(uStack_b8);
    if ((cStack_71 == '\x01') &&
       (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f0cce0) + 1) != '\x01')) {
      FUN_102ced2b4(*(undefined8 *)(unaff_x20 + _DAT_112f0cce0));
    }
  }
  return;
}



/* Entry: 102ced148; end: 102ced14f;  */

undefined8 FUN_102ced148(void)

{
  return 0;
}



/* Entry: 102ced150; end: 102ced2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ced150(byte param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  char cStack_41;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&uStack_68);
  uVar4 = uStack_68;
  func_0x000107c614f0(uStack_68);
  uStack_58 = 0xd00000000000002b;
  uStack_50 = 0x800000010f108da0;
  uStack_48 = 0;
  (**(code **)(lStack_60 + 8))
            (&cStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar4,lStack_60);
  func_0x000107c615e8(uStack_68);
  if (cStack_41 == '\x01') {
    bVar3 = param_1 & 1;
    func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_setMuted__1126503d0,bVar3);
    if (bVar3 != *(byte *)(unaff_x20 + _DAT_112f0ccf0)) {
      *(byte *)(unaff_x20 + _DAT_112f0ccf0) = bVar3;
      if ((param_1 & 1) == 0) {
        dVar5 = 0.0;
        if (0.0 < *(double *)(unaff_x20 + _DAT_112f0cce8)) {
          dVar5 = *(double *)(unaff_x20 + _DAT_112f0cce8);
        }
        pdVar2 = (double *)(unaff_x20 + _DAT_112f0cce0);
        *pdVar2 = dVar5;
        *(undefined1 *)(pdVar2 + 1) = 0;
      }
      else {
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0cce0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
        dVar5 = 0.0;
      }
      FUN_102ced2b4(dVar5);
    }
  }
  else {
    func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_setMuted__1126503d0,param_1 & 1);
  }
  return;
}



/* Entry: 102ced2b4; end: 102ced5af;  */

/* WARNING: Possible PIC construction at 0x000102ced358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced4a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ced584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ced568) */
/* WARNING: Removing unreachable block (ram,0x000102ced528) */
/* WARNING: Removing unreachable block (ram,0x000102ced570) */
/* WARNING: Removing unreachable block (ram,0x000102ced578) */
/* WARNING: Removing unreachable block (ram,0x000102ced550) */
/* WARNING: Removing unreachable block (ram,0x000102ced4fc) */
/* WARNING: Removing unreachable block (ram,0x000102ced4d4) */
/* WARNING: Removing unreachable block (ram,0x000102ced4ac) */
/* WARNING: Removing unreachable block (ram,0x000102ced484) */
/* WARNING: Removing unreachable block (ram,0x000102ced45c) */
/* WARNING: Removing unreachable block (ram,0x000102ced434) */
/* WARNING: Removing unreachable block (ram,0x000102ced40c) */
/* WARNING: Removing unreachable block (ram,0x000102ced3b8) */
/* WARNING: Removing unreachable block (ram,0x000102ced38c) */
/* WARNING: Removing unreachable block (ram,0x000102ced3f4) */
/* WARNING: Removing unreachable block (ram,0x000102ced3f8) */
/* WARNING: Removing unreachable block (ram,0x000102ced3a0) */
/* WARNING: Removing unreachable block (ram,0x000102ced35c) */
/* WARNING: Removing unreachable block (ram,0x000102ced588) */

void FUN_102ced2b4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar1 = PTR_PTR_1126ca6a0;
    func_0x000107c61168(PTR_PTR_1126ca6a0);
    lVar2 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar1);
    if (lVar2 != 0) {
      func_0x000107c42994();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c610f8(PTR_PTR_1126ca6a8);
        func_0x000107c453e4();
        func_0x000107c4002c(lVar2);
        func_0x000107c61180();
        func_0x000107c5ee30();
        unaff_x20 = lVar2;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
  return;
}



/* Entry: 102ced5b0; end: 102ced5df;  */

void FUN_102ced5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102ced150(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ced5e0; end: 102ced723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ced5e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  char cStack_41;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&uStack_68);
  uVar2 = uStack_68;
  func_0x000107c614f0(uStack_68);
  uStack_58 = 0xd00000000000002b;
  uStack_50 = 0x800000010f108da0;
  uStack_48 = 0;
  (**(code **)(lStack_60 + 8))
            (&cStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lStack_60);
  func_0x000107c615e8(uStack_68);
  if (cStack_41 == '\x01') {
    func_0x000107c61154(param_1,&stack0xffffffffffffff78,PTR_s_setVolume__112666a90);
    *(undefined8 *)(unaff_x20 + _DAT_112f0cce8) = param_1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0cce0);
    if (*(char *)(unaff_x20 + _DAT_112f0ccf0) == '\x01') {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      param_1 = 0;
    }
    else {
      *puVar1 = param_1;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    FUN_102ced2b4(param_1);
  }
  else {
    func_0x000107c61154(param_1,&stack0xffffffffffffff88,PTR_s_setVolume__112666a90);
  }
  return;
}



/* Entry: 102ced724; end: 102ced75b;  */

void FUN_102ced724(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102ced5e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102ced75c; end: 102ced7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ced75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_setPausedForAttachment__112654090;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if ((int)param_3 == 0) {
    func_0x000107c5ba38(*(undefined8 *)(param_1 + _DAT_112f0cd20));
  }
  else {
    func_0x000107c4e454();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102ced7dc; end: 102ced83f;  */

void FUN_102ced7dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cec598();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102ced840; end: 102ced9af;  */

void FUN_102ced840(undefined8 param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_70 [48];
  
  func_0x000107c614f0();
  func_0x000107c61154(param_1,&stack0xffffffffffffffc0,
                      PTR_s_updateViewWithHorizontalPageOffs_112680a48,param_2 & 1);
  lVar2 = unaff_x20;
  func_0x000107c415cc();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ced964);
    (*pcVar1)();
  }
  uVar3 = param_1;
  func_0x000107c51824(param_1);
  func_0x000107c615e8(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ced968);
    (*pcVar1)();
  }
  func_0x000107c6088c(auStack_70,uVar3,uVar3);
  func_0x000107c5a03c(lVar2);
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c415cc();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ced96c);
    (*pcVar1)();
  }
  func_0x000107c3dc44(param_1);
  func_0x000107c615e8(lVar2);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c526c0(param_1);
    func_0x000107c61170(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ced970);
  (*pcVar1)();
}



/* Entry: 102ced9b0; end: 102cedabf;  */

/* WARNING: Possible PIC construction at 0x000102ceda74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ceda78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ced9b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0ccd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0ccd8));
  func_0x000107c61610(unaff_x20 + _DAT_112f0ccf8);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd00));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112f0cd10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f0cd38));
  func_0x000102cf0878(unaff_x20 + _DAT_112f0cd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112f0cd48));
  return;
}



/* Entry: 102cedac0; end: 102cedba7;  */

/* WARNING: Possible PIC construction at 0x000102cedb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cedb90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cedac0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0ccd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0ccd8));
  func_0x000107c61610(param_1 + _DAT_112f0ccf8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd00));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0cd10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0cd38));
  func_0x000102cf0878(param_1 + _DAT_112f0cd40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0cd48));
  return;
}



/* Entry: 102cedba8; end: 102cedc83;  */

void FUN_102cedba8(undefined8 param_1)

{
  if (lRam0000000112f0cd80 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e728bb8);
  return;
}



/* Entry: 102cedc84; end: 102cedc8b;  */

void FUN_102cedc84(void)

{
  if (lRam0000000112f0cd80 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e728bb8);
  return;
}



/* Entry: 102cedc8c; end: 102cedcfb;  */

void FUN_102cedc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cedcfc,uVar1,uVar2);
  return;
}



/* Entry: 102cedcfc; end: 102cedd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cedcfc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(lVar2 + _DAT_112f0ccd8);
    *(undefined8 *)(lVar2 + _DAT_112f0ccd8) = uVar3;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar2);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar2 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cedd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cedd94; end: 102cede8f;  */

void FUN_102cedd94(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1105c0f68;
    func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    puVar2 = &UNK_1105c1148;
    func_0x000107c613fc(&UNK_1105c1148,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    uVar3 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar4 = 6;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db40020,puVar2,uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102cede90; end: 102cedeff;  */

void FUN_102cede90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cedf00,uVar1,uVar2);
  return;
}



/* Entry: 102cedf00; end: 102cedfc3;  */

void FUN_102cedf00(void)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x22;
  double dVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    dVar4 = *(double *)(unaff_x22 + 0x38);
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cedfbc);
      (*pcVar1)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cedfc0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cedfc4);
      (*pcVar1)();
    }
    FUN_102cedfc4((long)dVar4);
    func_0x000107c61170(lVar3);
    uVar2 = 0;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102cedfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cedfc4; end: 102cee0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cedfc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f0cd40);
  uVar1 = puVar6[3];
  lVar3 = puVar6[4];
  func_0x0001000a8868(puVar6,uVar1);
  func_0x000103b81f54();
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
  func_0x000103b81fc8();
  uVar5 = puVar7[1];
  puVar6[4] = *puVar7;
  puVar6[9] = PTR___sSiN_11034deb0;
  puVar6[5] = uVar5;
  puVar6[6] = param_1;
  func_0x000107c61434();
  puVar7 = puVar6;
  func_0x000100214a84(puVar6);
  func_0x000107c61588(puVar6);
  func_0x000102cf0a2c(puVar6 + 4,0x112d4b5f0,&UNK_10d9127d0);
  (**(code **)(lVar3 + 0x20))(uVar2,uVar4,unaff_x20,puVar7,uVar1,lVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 102cee100; end: 102cee103;  */

void FUN_102cee100(void)

{
  return;
}



/* Entry: 102cee104; end: 102cee203;  */

void FUN_102cee104(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1105c0f68;
    func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_2);
    func_0x000107c613fc(param_3,0x20,7);
    *(undefined **)(param_3 + 0x10) = puVar1;
    *(undefined8 *)(param_3 + 0x18) = param_1;
    func_0x000107c61174(param_1);
    uVar2 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar3 = 6;
    func_0x0001001ca524(6,0,8,3,0,0,param_4,param_3,uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102cee204; end: 102cee273;  */

void FUN_102cee204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cee274,uVar1,uVar2);
  return;
}



/* Entry: 102cee274; end: 102cee2ef;  */

void FUN_102cee274(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cee2f0(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cee2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cee2f0; end: 102ceeef3;  */

/* WARNING: Possible PIC construction at 0x000102cee380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cee398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102cee444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceea08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceeec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceee70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceee80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceee90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceeea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceeeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceecbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceeccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ceec9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ceecd0) */
/* WARNING: Removing unreachable block (ram,0x000102ceecc0) */
/* WARNING: Removing unreachable block (ram,0x000102ceeeb4) */
/* WARNING: Removing unreachable block (ram,0x000102ceeea4) */
/* WARNING: Removing unreachable block (ram,0x000102ceee94) */
/* WARNING: Removing unreachable block (ram,0x000102ceee84) */
/* WARNING: Removing unreachable block (ram,0x000102ceee74) */
/* WARNING: Removing unreachable block (ram,0x000102ceec88) */
/* WARNING: Removing unreachable block (ram,0x000102ceeeb8) */
/* WARNING: Removing unreachable block (ram,0x000102ceec78) */
/* WARNING: Removing unreachable block (ram,0x000102ceec68) */
/* WARNING: Removing unreachable block (ram,0x000102ceec58) */
/* WARNING: Removing unreachable block (ram,0x000102ceec48) */
/* WARNING: Removing unreachable block (ram,0x000102ceea0c) */
/* WARNING: Removing unreachable block (ram,0x000102ceec90) */
/* WARNING: Removing unreachable block (ram,0x000102ceea14) */
/* WARNING: Removing unreachable block (ram,0x000102ceecb0) */
/* WARNING: Removing unreachable block (ram,0x000102ceea20) */
/* WARNING: Removing unreachable block (ram,0x000102ceeab4) */
/* WARNING: Removing unreachable block (ram,0x000102ceecd8) */
/* WARNING: Removing unreachable block (ram,0x000102ceecec) */
/* WARNING: Removing unreachable block (ram,0x000102ceeef0) */
/* WARNING: Removing unreachable block (ram,0x000102ceecf4) */
/* WARNING: Removing unreachable block (ram,0x000102ceeaf4) */
/* WARNING: Removing unreachable block (ram,0x000102cee448) */
/* WARNING: Removing unreachable block (ram,0x000102cee39c) */
/* WARNING: Removing unreachable block (ram,0x000102cee384) */
/* WARNING: Removing unreachable block (ram,0x000102ceeca0) */
/* WARNING: Removing unreachable block (ram,0x000102ceeea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cee2f0(double param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 *apuStack_2a0 [3];
  undefined8 *puStack_288;
  undefined1 auStack_280 [480];
  undefined8 *puStack_a0;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0ccd0);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c3ec60();
      func_0x000107c5e400();
      func_0x000107c61180();
      if (lVar4 == 0) {
        dVar18 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
        dVar19 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
        func_0x000107c519dc(param_2);
        dVar15 = param_1;
        func_0x000107c519e0(param_2);
        func_0x000107c40724(lVar3);
        dVar16 = param_1;
        func_0x000107c5def8();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000102cf0a6c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c60110();
          puVar5 = param_2;
          func_0x000107c5b634();
          func_0x000107c5b66c(param_2);
          dVar17 = dVar16;
          func_0x000107c5b670(param_2);
          puVar6 = param_2;
          func_0x000107c5ac70();
          func_0x000107c5fe50();
          puVar7 = param_2;
          func_0x000107c5c998();
          func_0x000107c61180();
          puVar8 = param_2;
          func_0x000107c51c74();
          func_0x000107c61180();
          puVar9 = param_2;
          func_0x000107c51a38();
          func_0x000107c61180();
          func_0x000107c51a44();
          func_0x000107c61180();
          puVar10 = (undefined8 *)0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          puVar10[3] = 10;
          puVar10[2] = 5;
          puVar11 = puVar10;
          func_0x000103b82008();
          uVar1 = puVar11[1];
          puVar10[4] = *puVar11;
          puVar10[5] = uVar1;
          FUN_102cf0854(puVar5);
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8();
          func_0x000107c61434(uVar1);
          func_0x000107c46ed0();
          puVar13 = (undefined8 *)0x0;
          func_0x000102cf0a6c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          puVar10[9] = puVar13;
          puVar10[6] = puVar12;
          puVar11 = puVar13;
          func_0x000103b82040();
          puVar5 = (undefined8 *)puVar11[1];
          puVar10[10] = *puVar11;
          puVar10[0xb] = puVar5;
          puVar10[0xf] = PTR___sSbN_11034dd40;
          *(char *)(puVar10 + 0xc) = (char)puVar6;
          func_0x000107c61434();
          func_0x000103b820e8();
          puVar6 = (undefined8 *)puVar5[1];
          puVar10[0x10] = *puVar5;
          puVar10[0x11] = puVar6;
          uVar14 = 0;
          func_0x000100f6e714();
          puVar10[0x15] = uVar14;
          puVar10[0x12] = dVar16;
          puVar10[0x13] = dVar17;
          func_0x000107c61434();
          func_0x000103b82120();
          puVar5 = (undefined8 *)puVar6[1];
          puVar10[0x16] = *puVar6;
          puVar10[0x17] = puVar5;
          puVar10[0x1b] = uVar14;
          puVar10[0x18] = param_1 / dVar18;
          puVar10[0x19] = dVar15 / dVar19;
          func_0x000107c61434();
          func_0x000103b82158();
          uVar1 = puVar5[1];
          puVar10[0x1c] = *puVar5;
          puVar10[0x1d] = uVar1;
          puVar10[0x21] = uVar14;
          puVar10[0x1e] = param_1;
          puVar10[0x1f] = dVar15;
          func_0x000107c61434();
          puVar5 = puVar10;
          func_0x000100214a84();
          func_0x000107c61588(puVar10);
          func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
          func_0x000107c61408(puVar10 + 4,5);
          puStack_a0 = puVar5;
          if (puVar7 != (undefined8 *)0x0) {
            func_0x000107c61174();
            puVar10 = puVar7;
            func_0x000103b82078();
            uVar1 = *puVar10;
            uVar14 = puVar10[1];
            apuStack_2a0[0] = puVar7;
            if (puVar13 == (undefined8 *)0x0) {
              puStack_288 = puVar13;
              func_0x000107c61434(uVar14);
              func_0x000102cf0a2c(apuStack_2a0,0x112d387f8,&UNK_10d902650);
              func_0x000100216878(auStack_280,uVar1,uVar14);
              func_0x000107c6142c(uVar14);
              func_0x000102cf0a2c(auStack_280,0x112d387f8,&UNK_10d902650);
            }
            else {
              puStack_288 = puVar13;
              func_0x000100102924(apuStack_2a0,auStack_280);
              func_0x000107c61434(uVar14);
              puVar10 = puVar5;
              func_0x000107c61558(puVar5);
              apuStack_2a0[0] = puVar5;
              func_0x0001001029e8(auStack_280,uVar1,uVar14,puVar10);
              func_0x000107c6142c(uVar14);
              puStack_a0 = apuStack_2a0[0];
            }
          }
          if (puVar8 != (undefined8 *)0x0) {
            func_0x000107c61174();
            puVar10 = puVar8;
            func_0x000103b820b0();
            uVar1 = *puVar10;
            uVar14 = puVar10[1];
            apuStack_2a0[0] = puVar8;
            if (puVar13 == (undefined8 *)0x0) {
              puStack_288 = puVar13;
              func_0x000107c61434(uVar14);
              func_0x000102cf0a2c(apuStack_2a0,0x112d387f8,&UNK_10d902650);
              func_0x000100216878(auStack_280,uVar1,uVar14);
              func_0x000107c6142c(uVar14);
              func_0x000102cf0a2c(auStack_280,0x112d387f8,&UNK_10d902650);
            }
            else {
              puStack_288 = puVar13;
              func_0x000100102924(apuStack_2a0,auStack_280);
              func_0x000107c61434(uVar14);
              puVar10 = puStack_a0;
              puVar5 = puStack_a0;
              func_0x000107c61558(puStack_a0);
              apuStack_2a0[0] = puVar10;
              func_0x0001001029e8(auStack_280,uVar1,uVar14,puVar5);
              func_0x000107c6142c(uVar14);
              puStack_a0 = apuStack_2a0[0];
            }
          }
          if (puVar9 != (undefined8 *)0x0) {
            func_0x000107c61174();
            puVar10 = puVar9;
            func_0x000103b82190();
            uVar1 = *puVar10;
            uVar14 = puVar10[1];
            apuStack_2a0[0] = puVar9;
            if (puVar13 == (undefined8 *)0x0) {
              puStack_288 = puVar13;
              func_0x000107c61434(uVar14);
              func_0x000102cf0a2c(apuStack_2a0,0x112d387f8,&UNK_10d902650);
              func_0x000100216878(auStack_280,uVar1,uVar14);
              func_0x000107c6142c(uVar14);
              func_0x000102cf0a2c(auStack_280,0x112d387f8,&UNK_10d902650);
            }
            else {
              puStack_288 = puVar13;
              func_0x000100102924(apuStack_2a0,auStack_280);
              func_0x000107c61434(uVar14);
              puVar10 = puStack_a0;
              puVar5 = puStack_a0;
              func_0x000107c61558(puStack_a0);
              apuStack_2a0[0] = puVar10;
              func_0x0001001029e8(auStack_280,uVar1,uVar14,puVar5);
              func_0x000107c6142c(uVar14);
              puStack_a0 = apuStack_2a0[0];
            }
          }
          if (param_2 != (undefined8 *)0x0) {
            func_0x000107c61174();
            puVar10 = param_2;
            func_0x000103b821c8();
            uVar1 = *puVar10;
            uVar14 = puVar10[1];
            apuStack_2a0[0] = param_2;
            if (puVar13 == (undefined8 *)0x0) {
              puStack_288 = puVar13;
              func_0x000107c61434(uVar14);
              func_0x000102cf0a2c(apuStack_2a0,0x112d387f8,&UNK_10d902650);
              func_0x000100216878(auStack_280,uVar1,uVar14);
              func_0x000107c6142c(uVar14);
              func_0x000102cf0a2c(auStack_280,0x112d387f8,&UNK_10d902650);
            }
            else {
              puStack_288 = puVar13;
              func_0x000100102924(apuStack_2a0,auStack_280);
              func_0x000107c61434(uVar14);
              puVar10 = puStack_a0;
              puVar5 = puStack_a0;
              func_0x000107c61558(puStack_a0);
              apuStack_2a0[0] = puVar10;
              func_0x0001001029e8(auStack_280,uVar1,uVar14,puVar5);
              func_0x000107c6142c(uVar14);
              puStack_a0 = apuStack_2a0[0];
            }
          }
          puVar10 = (undefined8 *)(unaff_x20 + _DAT_112f0cd40);
          uVar1 = puVar10[3];
          lVar3 = puVar10[4];
          func_0x0001000a8868(puVar10,uVar1);
          func_0x000103b81f8c();
          uVar14 = *puVar10;
          uVar2 = puVar10[1];
          func_0x000107c61434(uVar2);
          func_0x000107c4e230();
          func_0x000107c61180();
          puVar10 = puStack_a0;
          (**(code **)(lVar3 + 0x20))(uVar14,uVar2,unaff_x20,puStack_a0,uVar1,lVar3);
          func_0x000107c6142c(puVar10);
          func_0x000107c6142c(uVar2);
          lVar3 = unaff_x20;
        }
        else {
          func_0x000107c41558();
          func_0x000107c61180();
        }
      }
      else {
        func_0x000107c519d4();
        func_0x000107c61180();
        lVar3 = lVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 102ceeef4; end: 102ceeff3;  */

void FUN_102ceeef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    puVar1 = &UNK_1105c0f68;
    func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_3);
    puVar2 = &UNK_1105c1080;
    func_0x000107c613fc(&UNK_1105c1080,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    uVar3 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    uVar4 = 6;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db40000,puVar2,uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102ceeff4; end: 102cef063;  */

void FUN_102ceeff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cef064,uVar1,uVar2);
  return;
}



/* Entry: 102cef064; end: 102cef0df;  */

void FUN_102cef064(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cef0e0(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cef0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cef0e0; end: 102cef26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cef0e0(double param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar6 = (undefined8 *)(unaff_x20 + _DAT_112f0cd40);
  uVar1 = puVar6[3];
  lVar3 = puVar6[4];
  func_0x0001000a8868(puVar6,uVar1);
  func_0x000103bb6b44();
  uVar2 = *puVar6;
  uVar4 = puVar6[1];
  func_0x000107c61434(uVar4);
  func_0x000107c4e230();
  func_0x000107c61180();
  puVar6 = (undefined8 *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  puVar6[3] = 4;
  puVar6[2] = 2;
  puVar7 = puVar6;
  func_0x000103bb6dfc();
  puVar8 = (undefined8 *)puVar7[1];
  puVar6[4] = *puVar7;
  puVar6[5] = puVar8;
  puVar5 = PTR___sSdN_11034dd90;
  puVar6[9] = PTR___sSdN_11034dd90;
  puVar6[6] = param_2 * 1000.0;
  func_0x000107c61434();
  func_0x000103bb6fe0();
  uVar9 = puVar8[1];
  puVar6[10] = *puVar8;
  puVar6[0xb] = uVar9;
  puVar6[0xf] = puVar5;
  puVar6[0xc] = param_1 * 1000.0;
  func_0x000107c61434();
  puVar8 = puVar6;
  func_0x000100214a84(puVar6);
  func_0x000107c61588(puVar6);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar6 + 4,2,uVar9);
  (**(code **)(lVar3 + 0x20))(uVar2,uVar4,unaff_x20,puVar8,uVar1,lVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(unaff_x20);
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 102cef26c; end: 102cef33f;  */

/* WARNING: Possible PIC construction at 0x000102cef324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cef328) */

void FUN_102cef26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1105c0f68;
  func_0x000107c613fc(&UNK_1105c0f68,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_1105c1030;
  func_0x000107c613fc(&UNK_1105c1030,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x00010006c00c(param_1,param_2);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10db3ffe0,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102cef340; end: 102cef3af;  */

void FUN_102cef340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102cef3b0,uVar1,uVar2);
  return;
}



/* Entry: 102cef3b0; end: 102cef453;  */

void FUN_102cef3b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x00010006c00c(uVar1,uVar2);
    FUN_102cec0dc(uVar1,uVar2);
    func_0x000107c61170(lVar3);
    func_0x00010006c090(uVar1,uVar2);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x28) = lVar3 == 0;
                    /* WARNING: Could not recover jumptable at 0x000102cef450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102cef454; end: 102cef457;  */

void FUN_102cef454(void)

{
  return;
}



/* Entry: 102cef458; end: 102cefa0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cef458(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  lVar2 = _DAT_112f0ccf8;
  lVar4 = unaff_x20 + _DAT_112f0ccf8;
  func_0x000107c61618();
  if ((lVar4 == 0) && (uVar5 = *(ulong *)(unaff_x20 + _DAT_112f0ccd0), uVar5 != 0)) {
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000102cef644();
    if (uVar6 != 0) {
      uVar12 = uVar6;
      func_0x000107c5c3b0();
      func_0x000107c61180();
      uVar7 = 0;
      func_0x000102cf0a6c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar8 = uVar12;
      func_0x000107c5fc54(uVar12,uVar7);
      func_0x000107c61170(uVar12);
      if (uVar8 >> 0x3e == 0) {
        uVar12 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar12 = uVar8;
        }
        func_0x000107c60480();
      }
      if (uVar12 != 0) {
        uVar13 = 0;
        do {
          if ((uVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102cef5dc);
              (*pcVar3)();
            }
            uVar9 = *(ulong *)(uVar8 + uVar13 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar9 = uVar13;
            FUN_102ceffe4(uVar13,uVar8,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
          }
          uVar1 = uVar13 + 1;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102cef5d8);
            (*pcVar3)();
          }
          puVar10 = PTR__OBJC_CLASS___UIScrollView_1126af098;
          func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
          uVar11 = uVar9;
          func_0x000107c6148c(uVar9,puVar10);
          if (uVar11 != 0) {
            func_0x000107c6142c(uVar8);
            func_0x000107c61604(unaff_x20 + lVar2,uVar11);
            func_0x000102cef80c();
            goto LAB_102cef610;
          }
          func_0x000107c61170(uVar9);
          uVar13 = uVar13 + 1;
        } while (uVar1 != uVar12);
      }
      func_0x000107c6142c(uVar8);
    }
    func_0x000107c61604(unaff_x20 + lVar2,0);
LAB_102cef610:
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 102cefa10; end: 102cefa47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cefa10(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_112f0ccd0) != 0) {
    func_0x000107c438d4();
    return param_1;
  }
  return 0;
}



/* Entry: 102cefa48; end: 102cefa5b;  */

undefined8 FUN_102cefa48(void)

{
  return 0x3ffc756b2dbd1942;
}



/* Entry: 102cefa5c; end: 102cefb17;  */

void FUN_102cefa5c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c450ac(param_1);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar3 = 0;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010443de78(0);
      func_0x000107c610f8();
      func_0x00010443ccb8(puVar2,uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cefb18);
  (*pcVar1)();
}



/* Entry: 102cefb18; end: 102cefb4b;  */

void FUN_102cefb18(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cefa5c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cefb4c; end: 102cefd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102cefb4c(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  char cStack_51;
  
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  lVar3 = param_3;
  func_0x000107c6148c(param_3,puVar2);
  if (lVar3 == 0) {
    return 1;
  }
  func_0x000107c61174(param_3);
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5dc98(lVar3);
  func_0x000107c61170();
  dVar5 = ABS(param_2);
  param_1 = ABS(param_1);
  if ((param_1 < dVar5) && (FUN_102cef458(), unaff_x20 != 0)) {
    func_0x000107c4b8b8(lVar3);
    lVar3 = unaff_x20;
    func_0x000107c3ec60();
    iVar1 = (int)lVar3;
    func_0x000107c609a4();
    if (iVar1 != 0) {
      func_0x0001000d224c(&uStack_78);
      uVar4 = uStack_78;
      func_0x000107c614f0(uStack_78);
      uStack_68 = 0xd00000000000002d;
      uStack_60 = 0x800000010f108d50;
      uStack_58 = 0;
      (**(code **)(lStack_70 + 8))
                (&cStack_51,&uStack_68,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar4,lStack_70);
      func_0x000107c615e8(uStack_78);
      func_0x000107c404a0(unaff_x20);
      func_0x000107c3d9b4(unaff_x20);
      func_0x000107c61170(param_3);
      func_0x000107c61170(unaff_x20);
      if (cStack_51 != '\x01') {
        return 1;
      }
      if (0.0 < param_2) {
        if (param_1 <= 0.5 - dVar5) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    func_0x000107c61170(param_3);
    param_3 = unaff_x20;
  }
  func_0x000107c61170(param_3);
  return 0;
}



/* Entry: 102cefd0c; end: 102cefd67;  */

uint FUN_102cefd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102cefb4c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102cefd68; end: 102cefe53;  */

bool FUN_102cefd68(void)

{
  undefined *puVar1;
  long lVar2;
  long in_x3;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar2 = in_x3;
  if (in_x3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScrollView_1126af098);
    func_0x000107c6148c(in_x3,puVar1);
    if (lVar2 == 0) {
      func_0x000107c61170(in_x3);
      lVar2 = 0;
    }
  }
  func_0x000107c61170();
  return lVar2 != 0;
}


