/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036a1fe0; end: 1036a2177;  */

void FUN_1036a1fe0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [40];
  char cStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_78;
  undefined1 auStack_70 [48];
  
  func_0x00010101bc9c(param_2,auStack_70);
  func_0x00010101bbc4(param_1,auStack_d0);
  func_0x00010101bbc4(auStack_70,&uStack_a0);
  if (cStack_a8 == -1) {
    FUN_1036a2680(auStack_70,0x112d55088,&UNK_10db19ca0);
    if (cStack_78 != -1) goto LAB_1036a2144;
    FUN_1036a2680(auStack_d0,0x112d55088,&UNK_10db19ca0);
  }
  else {
    func_0x00010101bbc4(auStack_d0,auStack_100);
    if (cStack_78 == -1) {
      FUN_1036a2680(auStack_70,0x112d55088,&UNK_10db19ca0);
      func_0x00010101bb90(auStack_100);
LAB_1036a2144:
      FUN_1036a2680(auStack_d0,0x112f85d00,&UNK_10dbf99a8);
      return;
    }
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_120 = uStack_90;
    puVar1 = auStack_100;
    func_0x000103a1d2ec(puVar1,&uStack_130);
    func_0x00010101bb90(&uStack_130);
    FUN_1036a2680(auStack_70,0x112d55088,&UNK_10db19ca0);
    func_0x00010101bb90(auStack_100);
    FUN_1036a2680(auStack_d0,0x112d55088,&UNK_10db19ca0);
    if (((ulong)puVar1 & 1) == 0) {
      return;
    }
  }
  FUN_1036a2680(param_1,0x112d55088,&UNK_10db19ca0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1036a2178; end: 1036a221b;  */

void FUN_1036a2178(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_1;
  }
  lVar2 = 0x112f85cf8;
  func_0x0001000285a8(0x112f85cf8,&UNK_10dbf9998);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x00010101bc9c(param_2,lVar2 + 0x20);
  FUN_1036a2454(lVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1036a221c; end: 1036a2267;  */

void FUN_1036a221c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a2268; end: 1036a22eb;  */

/* WARNING: Possible PIC construction at 0x0001036a22b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a22b4) */

void FUN_1036a2268(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1036a1f64,0,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1036a22ec; end: 1036a2303;  */

void FUN_1036a22ec(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1036a26c0,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1036a2304; end: 1036a23c3;  */

void FUN_1036a2304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(param_4,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1036a23c4; end: 1036a2437;  */

void FUN_1036a23c4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1036a2438; end: 1036a243b;  */

void FUN_1036a2438(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long alStack_80 [6];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(alStack_80);
  func_0x000107c61574(uVar3);
  if (alStack_80[0] != 0) {
    uVar5 = *(ulong *)(alStack_80[0] + 0x10);
    if (uVar5 != 0) {
      lVar4 = alStack_80[0] + uVar5 * 0x30 + -0x10;
      uVar6 = uVar5;
      do {
        if (*(long *)(alStack_80[0] + 0x10) < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f5c);
          (*pcVar1)();
        }
        func_0x00010101bc9c(lVar4,&uStack_e0);
        uStack_ef = uStack_bf;
        uVar3 = uStack_ef;
        uStack_108 = uStack_d8;
        uStack_110 = uStack_e0;
        uStack_100 = uStack_d0;
        uStack_ef._7_1_ = (char)((ulong)uStack_bf >> 0x38);
        bVar2 = uStack_ef._7_1_ == '\0';
        uStack_ef = uVar3;
        if (bVar2) goto LAB_1036a1ee0;
        uVar6 = uVar6 - 1;
        func_0x00010101bb90(&uStack_110);
        lVar4 = lVar4 + -0x30;
      } while (uVar6 != 0);
      lVar4 = uVar5 * 0x30 + alStack_80[0] + -0x10;
      uVar6 = uVar5;
      while( true ) {
        if (*(long *)(alStack_80[0] + 0x10) < (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f60);
          (*pcVar1)();
        }
        func_0x00010101bc9c(lVar4,&uStack_e0);
        uStack_ef = uStack_bf;
        uVar3 = uStack_ef;
        uStack_108 = uStack_d8;
        uStack_110 = uStack_e0;
        uStack_100 = uStack_d0;
        uStack_ef._7_1_ = (char)((ulong)uStack_bf >> 0x38);
        bVar2 = uStack_ef._7_1_ == '\x01';
        uStack_ef = uVar3;
        if (bVar2) break;
        uVar6 = uVar6 - 1;
        func_0x00010101bb90(&uStack_110);
        lVar4 = lVar4 + -0x30;
        if (uVar6 == 0) {
          if (uVar5 <= *(ulong *)(alStack_80[0] + 0x10)) {
            func_0x00010101bc9c(alStack_80[0] + uVar5 * 0x30 + -0x10,param_1);
            func_0x000107c6142c(alStack_80[0]);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a1f64);
          (*pcVar1)();
        }
      }
LAB_1036a1ee0:
      func_0x0001000834e4(&uStack_110);
      func_0x00010101bc9c(lVar4,&uStack_b0);
      func_0x000107c6142c(alStack_80[0]);
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[3] = CONCAT71(uStack_97,uStack_98);
      param_1[2] = uStack_a0;
      *(undefined8 *)((long)param_1 + 0x21) = uStack_8f;
      *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_90,uStack_97);
      return;
    }
    func_0x000107c6142c(alStack_80[0]);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1036a243c; end: 1036a2453;  */

void FUN_1036a243c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1036a2178(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036a2454; end: 1036a254f;  */

void FUN_1036a2454(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a2544);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1036a2550();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a2548);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a254c);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x30 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1106bfb58);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a2550);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1036a2550; end: 1036a2667;  */

undefined * FUN_1036a2550(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a2668);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112f85cf8;
    func_0x0001000285a8(0x112f85cf8,&UNK_10dbf9998);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x30) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106bfb58);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x30 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 1036a2668; end: 1036a267f;  */

void FUN_1036a2668(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1036a1fe0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036a2680; end: 1036a26bf;  */

undefined8 FUN_1036a2680(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1036a26c0; end: 1036a270f;  */

void FUN_1036a26c0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1036a2680(param_1,0x112d55088,&UNK_10db19ca0);
  func_0x00010101bc9c(uVar1,param_1);
  return;
}



/* Entry: 1036a2710; end: 1036a276b;  */

void FUN_1036a2710(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1036a276c; end: 1036a292b;  */

void FUN_1036a276c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11067c198;
  func_0x000107c613fc(&UNK_11067c198,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112f85d08,&UNK_10dbf99b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_1036a292c;
  func_0x0001000bdd8c(FUN_1036a292c,puVar1);
  func_0x000103a1d74c(0);
  func_0x000107c610f8();
  func_0x000103a1d690(pcVar2);
  return;
}



/* Entry: 1036a292c; end: 1036a293b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a292c(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined auStack_90 [48];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar3 = auStack_90;
  func_0x0001000d224c(&ppuStack_60);
  ppuVar1 = ppuStack_60;
  func_0x000107c614f0();
  func_0x000107c61440();
  ppuVar2 = ppuStack_60;
  if (ppuVar1 == (undefined **)0x0 || ppuStack_60 == (undefined **)0x0) {
    func_0x000107c615e8(ppuStack_60);
    ppuVar2 = (undefined **)0x0;
    func_0x0001036a2248();
    func_0x000107c613fc();
    uStack_40 = 0;
    uStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0xff;
    func_0x00010101bbc4(&ppuStack_60,auStack_90);
    func_0x0001000285a8(0x112f85de0,&UNK_10dbf9a00);
    func_0x000107c613fc();
    func_0x00010006c248();
    func_0x00010101bc14(&ppuStack_60);
    ppuVar2[2] = puVar3;
    ppuStack_60 = (undefined **)0x0;
    func_0x0001000285a8(0x112f85de8,&UNK_10dbf9aa0);
    func_0x000107c613fc();
    pppuVar4 = &ppuStack_60;
    func_0x00010006c248();
    ppuVar2[3] = (undefined *)pppuVar4;
    ppuVar1 = &PTR_DAT_11067c148;
  }
  *param_1 = ppuVar2;
  param_1[1] = ppuVar1;
  return;
}



/* Entry: 1036a293c; end: 1036a29db;  */

void FUN_1036a293c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a29dc; end: 1036a2a83;  */

void FUN_1036a29dc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11067c1c0;
  func_0x000107c613fc(&UNK_11067c1c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  func_0x0001000285a8(0x112f85d08,&UNK_10dbf99b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  pcVar2 = FUN_1036a2a84;
  func_0x0001000bdd8c(FUN_1036a2a84,puVar1);
  uVar3 = 0;
  func_0x000103a1d74c(0);
  func_0x000107c610f8();
  func_0x000103a1d690(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1036a2a84; end: 1036a2a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a2a84(undefined8 *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined auStack_90 [48];
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar3 = auStack_90;
  func_0x0001000d224c(&ppuStack_60);
  ppuVar1 = ppuStack_60;
  func_0x000107c614f0();
  func_0x000107c61440();
  ppuVar2 = ppuStack_60;
  if (ppuVar1 == (undefined **)0x0 || ppuStack_60 == (undefined **)0x0) {
    func_0x000107c615e8(ppuStack_60);
    ppuVar2 = (undefined **)0x0;
    func_0x0001036a2248();
    func_0x000107c613fc();
    uStack_40 = 0;
    uStack_58 = 0;
    ppuStack_60 = (undefined **)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0xff;
    func_0x00010101bbc4(&ppuStack_60,auStack_90);
    func_0x0001000285a8(0x112f85de0,&UNK_10dbf9a00);
    func_0x000107c613fc();
    func_0x00010006c248();
    func_0x00010101bc14(&ppuStack_60);
    ppuVar2[2] = puVar3;
    ppuStack_60 = (undefined **)0x0;
    func_0x0001000285a8(0x112f85de8,&UNK_10dbf9aa0);
    func_0x000107c613fc();
    pppuVar4 = &ppuStack_60;
    func_0x00010006c248();
    ppuVar2[3] = (undefined *)pppuVar4;
    ppuVar1 = &PTR_DAT_11067c148;
  }
  *param_1 = ppuVar2;
  param_1[1] = ppuVar1;
  return;
}



/* Entry: 1036a2a88; end: 1036a2b53;  */

void FUN_1036a2a88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1036a2b54; end: 1036a2b77;  */

void FUN_1036a2b54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a2b78; end: 1036a2b7b;  */

void FUN_1036a2b78(void)

{
  return;
}



/* Entry: 1036a2b7c; end: 1036a2bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1036a2b7c(void)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112fcac98);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_30);
  func_0x000107c61574(uVar1);
  func_0x000107c614f0(uStack_30);
  (**(code **)(lStack_28 + 0x10))();
  func_0x000107c615e8(uStack_30);
  return 0;
}



/* Entry: 1036a2bf0; end: 1036a2c2f;  */

void FUN_1036a2bf0(void)

{
  func_0x000107c61168(&PTR_PTR_112f85e30);
  return;
}



/* Entry: 1036a2c30; end: 1036a2c97;  */

void FUN_1036a2c30(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f85e90,&UNK_10dbf9a60);
  func_0x000107c613fc();
  pcVar1 = FUN_1036a2c98;
  func_0x0001000bdd8c(FUN_1036a2c98,0);
  func_0x0001002b4ebc(0);
  func_0x000107c610f8();
  func_0x000103a1d7b8(pcVar1);
  return;
}



/* Entry: 1036a2c98; end: 1036a2d77;  */

void FUN_1036a2c98(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puVar2 = auStack_90;
  lVar1 = 0;
  func_0x0001036a2248();
  func_0x000107c613fc();
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0xff;
  func_0x00010101bbc4(&uStack_60,auStack_90);
  func_0x0001000285a8(0x112f85de0,&UNK_10dbf9a00);
  func_0x000107c613fc();
  func_0x00010006c248();
  func_0x00010101bc14(&uStack_60);
  *(undefined1 **)(lVar1 + 0x10) = puVar2;
  uStack_60 = 0;
  func_0x0001000285a8(0x112f85de8,&UNK_10dbf9aa0);
  func_0x000107c613fc();
  puVar3 = &uStack_60;
  func_0x00010006c248();
  *(undefined8 **)(lVar1 + 0x18) = puVar3;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11067c128;
  return;
}



/* Entry: 1036a2d78; end: 1036a2d87;  */

void FUN_1036a2d78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a2d88; end: 1036a2df3;  */

void FUN_1036a2d88(undefined8 param_1)

{
  if (lRam0000000112f85ec0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e772fe0);
  return;
}



/* Entry: 1036a2df4; end: 1036a2e67;  */

void FUN_1036a2df4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112f85e90,&UNK_10dbf9a60);
  func_0x000107c613fc();
  pcVar1 = FUN_1036a2c98;
  func_0x0001000bdd8c(FUN_1036a2c98,0);
  uVar2 = 0;
  func_0x0001002b4ebc(0);
  func_0x000107c610f8();
  func_0x000103a1d7b8(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 1036a2e68; end: 1036a2ea3;  */

void FUN_1036a2e68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1036a2ea4; end: 1036a2eaf;  */

void FUN_1036a2ea4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1036a2eb0; end: 1036a34b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a2eb0(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined *puStack_88;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + _DAT_11302bad8);
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar15 = puVar2;
  func_0x000103be3d98();
  if ((ulong)puVar15 >> 0x3e == 0) {
    puVar16 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar16 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar16 = puVar15;
    }
    func_0x000107c60480();
  }
  puVar5 = puVar2;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar16 != (undefined *)0x0) {
    if ((long)puVar16 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a34b0);
      (*pcVar1)();
    }
    puVar17 = (undefined *)0x0;
    puVar7 = puVar2;
    do {
      if (((ulong)puVar15 & 0xc000000000000001) == 0) {
        puVar3 = *(undefined **)(puVar15 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar17;
        param_2 = puVar15;
        FUN_1036a3838(puVar17,puVar15,&PTR_PTR_1126b0cc0,0x112df90e8);
      }
      puVar4 = puVar3;
      func_0x000107c44990();
      puVar5 = puVar7;
      if ((int)puVar4 == 0) {
LAB_1036a3080:
        func_0x000107c61170(puVar3);
      }
      else {
        puVar4 = puVar3;
        func_0x000107c4ce20();
        func_0x000107c61180();
        if (puVar4 == (undefined *)0x0) goto LAB_1036a3080;
        puVar5 = puVar4;
        func_0x000107c4ce50();
        if ((int)puVar5 != 0xf) {
LAB_1036a307c:
          func_0x000107c61170(puVar4);
          puVar5 = puVar7;
          goto LAB_1036a3080;
        }
        puVar5 = puVar4;
        func_0x000107c4b260();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) goto LAB_1036a307c;
        puVar7 = puVar5;
        func_0x000107c51f6c();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) {
          func_0x000107c61170(puVar4);
          puVar4 = puVar5;
          puVar7 = puVar5;
          goto LAB_1036a307c;
        }
        puVar6 = puVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar7);
        func_0x00010006c00c(puVar6,param_2);
        puVar7 = puVar8;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          func_0x000100f23260(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          puVar8 = puVar7;
        }
        uVar14 = *(ulong *)(puVar8 + 0x10);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x000100f23260(puVar8,uVar14 + 1,1);
        }
        *(ulong *)(puVar8 + 0x10) = uVar14 + 1;
        *(undefined **)(puVar8 + uVar14 * 0x10 + 0x20) = puVar6;
        *(undefined **)(puVar8 + uVar14 * 0x10 + 0x28) = param_2;
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        func_0x00010006c090(puVar6);
      }
      puVar17 = puVar17 + 1;
      puVar7 = puVar5;
    } while (puVar16 != puVar17);
  }
  func_0x000107c6142c(puVar15);
  uVar14 = *(ulong *)(puVar8 + 0x10);
  if (uVar14 == 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar20 = 0;
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      plVar19 = (long *)(puVar8 + uVar20 * 0x10 + 0x28);
      uVar10 = uVar20;
      while( true ) {
        if (*(ulong *)(puVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a3424);
          (*pcVar1)();
        }
        puVar5 = (undefined *)plVar19[-1];
        param_2 = (undefined *)*plVar19;
        uVar20 = uVar10 + 1;
        puVar15 = PTR_PTR_1126b3850;
        func_0x000107c610f8();
        func_0x00010006c00c(puVar5,param_2);
        puVar16 = puVar5;
        func_0x000107c5ee20(puVar5,param_2);
        func_0x000107c4636c();
        func_0x000107c61170(puVar16);
        uVar18 = 0;
        if (puVar15 != (undefined *)0x0) break;
        uVar9 = uVar18;
        func_0x000107c61174(0);
        func_0x000107c5ed30(0);
        func_0x000107c61170(uVar9);
        func_0x000107c61654();
        func_0x000107c614ac(uVar18);
        func_0x00010006c090(puVar5,param_2);
        plVar19 = plVar19 + 2;
        uVar10 = uVar20;
        if (uVar14 == uVar20) goto LAB_1036a32c4;
      }
      func_0x000107c61174(0);
      func_0x00010006c090(puVar5,param_2);
      puVar16 = puStack_88;
      func_0x000107c61550();
      if (((((ulong)puVar16 & 1) == 0) || ((long)puStack_88 < 0)) ||
         (((ulong)puStack_88 >> 0x3e & 1) != 0)) {
        if ((ulong)puStack_88 >> 0x3e == 0) {
          param_2 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_88) {
            param_2 = puStack_88;
          }
          func_0x000107c60480(param_2);
        }
        param_2 = param_2 + 1;
        puVar16 = (undefined *)0x0;
        FUN_1036a350c(0,param_2,1,puStack_88);
        puStack_88 = puVar16;
      }
      uVar13 = (ulong)puStack_88 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar13 + 0x10);
      puVar5 = (undefined *)(uVar11 + 1);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        param_2 = puVar5;
        FUN_1036a350c(puVar16,puVar5,1,puStack_88);
        uVar13 = (ulong)puVar16 & 0xffffffffffffff8;
        puStack_88 = puVar16;
      }
      *(undefined **)(uVar13 + 0x10) = puVar5;
      *(undefined **)(uVar13 + uVar11 * 8 + 0x20) = puVar15;
    } while (uVar14 - 1 != uVar10);
  }
LAB_1036a32c4:
  if ((ulong)puStack_88 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_88) {
      puVar15 = puStack_88;
    }
    func_0x000107c60480();
  }
  if (puVar15 != (undefined *)0x0) {
    uVar14 = 0;
    puVar16 = *(undefined **)(unaff_x20 + 0x18);
    do {
      if (((ulong)puStack_88 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a342c);
          (*pcVar1)();
        }
        uVar20 = *(ulong *)(puStack_88 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar20 = uVar14;
        param_2 = puStack_88;
        FUN_1036a3838(uVar14,puStack_88,&PTR_PTR_1126b3850,0x112f86008);
      }
      puVar17 = (undefined *)(uVar14 + 1);
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a3428);
        (*pcVar1)();
      }
      puVar7 = puVar16;
      func_0x000107c52040();
      func_0x000107c61180();
      puVar5 = puVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      if (puVar5 != (undefined *)0x0) {
        uVar10 = uVar20;
        func_0x000107c51f58();
        func_0x000107c61180();
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a34b4);
          (*pcVar1)();
        }
        uVar11 = uVar10;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar10);
        uVar10 = uVar11;
        func_0x000107c5ee20(uVar11,param_2);
        func_0x00010006c090(uVar11);
        uVar11 = uVar20;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a3420);
          (*pcVar1)();
        }
        func_0x000107c58fe0(puVar5);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar11);
      }
      func_0x000107c61170(uVar20);
      uVar14 = uVar14 + 1;
    } while (puVar17 != puVar15);
  }
  func_0x000107c6142c(puStack_88);
  func_0x000107c61170(puVar2);
  func_0x000107c6142c(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(*(undefined8 *)(puVar5 + 0x10));
  func_0x000107c61170(*(undefined8 *)(puVar5 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar5,0x20,7);
  return;
}



/* Entry: 1036a34b8; end: 1036a34e3;  */

void FUN_1036a34b8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036a34e4; end: 1036a3503;  */

void FUN_1036a34e4(void)

{
  FUN_1036a2eb0();
  return;
}



/* Entry: 1036a3504; end: 1036a350b;  */

undefined8 FUN_1036a3504(void)

{
  return 0;
}



/* Entry: 1036a350c; end: 1036a3633;  */

ulong FUN_1036a350c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a3634);
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
  FUN_1036a3634(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a3630);
      (*pcVar1)();
    }
    FUN_1036a36b4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1036a3634; end: 1036a36b3;  */

undefined * FUN_1036a3634(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1036a37cc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1036a36b4; end: 1036a37cb;  */

long FUN_1036a36b4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a37c8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a37cc);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1036a3a14(0,0x112f86008,&PTR_PTR_1126b3850);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1036a3a14(0,0x112f86008,&PTR_PTR_1126b3850);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a37c4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1036a37cc; end: 1036a3837;  */

void FUN_1036a37cc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1036a3a14(0,0x112f86008,&PTR_PTR_1126b3850);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f86010;
  plVar5 = (long *)&UNK_10dbf9b28;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1036a3838; end: 1036a39f3;  */

ulong FUN_1036a3838(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a391c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a3920);
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
  FUN_1036a3a14(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a39f4);
  (*pcVar2)();
}



/* Entry: 1036a39f4; end: 1036a3a13;  */

void FUN_1036a39f4(void)

{
  func_0x000107c61168(&PTR_PTR_112f85fa0);
  return;
}



/* Entry: 1036a3a14; end: 1036a3a53;  */

void FUN_1036a3a14(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036a3a54; end: 1036a41e3;  */

void FUN_1036a3a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86018,&UNK_10dbf9b30);
  puVar1 = &UNK_11067c3d8;
  func_0x000107c613fc(&UNK_11067c3d8,0x188,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_17;
  *(undefined8 *)(puVar1 + 0x20) = param_34;
  *(undefined8 *)(puVar1 + 0x28) = param_35;
  *(undefined8 *)(puVar1 + 0x30) = param_39;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_7;
  *(undefined8 *)(puVar1 + 0x70) = param_8;
  *(undefined8 *)(puVar1 + 0x78) = param_9;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_12;
  *(undefined8 *)(puVar1 + 0x90) = param_13;
  *(undefined8 *)(puVar1 + 0x98) = param_14;
  *(undefined8 *)(puVar1 + 0xa0) = param_15;
  *(undefined8 *)(puVar1 + 0xa8) = param_16;
  *(undefined8 *)(puVar1 + 0xb0) = param_18;
  *(undefined8 *)(puVar1 + 0xb8) = param_19;
  *(undefined8 *)(puVar1 + 0xc0) = param_20;
  *(undefined8 *)(puVar1 + 200) = param_21;
  *(undefined8 *)(puVar1 + 0xd0) = param_22;
  *(undefined8 *)(puVar1 + 0xd8) = param_23;
  *(undefined8 *)(puVar1 + 0xe0) = param_24;
  *(undefined8 *)(puVar1 + 0xe8) = param_25;
  *(undefined8 *)(puVar1 + 0xf0) = param_26;
  *(undefined8 *)(puVar1 + 0xf8) = param_27;
  *(undefined8 *)(puVar1 + 0x100) = param_28;
  *(undefined8 *)(puVar1 + 0x108) = param_29;
  *(undefined8 *)(puVar1 + 0x110) = param_30;
  *(undefined8 *)(puVar1 + 0x118) = param_31;
  *(undefined8 *)(puVar1 + 0x120) = param_32;
  *(undefined8 *)(puVar1 + 0x128) = param_33;
  *(undefined8 *)(puVar1 + 0x130) = param_36;
  *(undefined8 *)(puVar1 + 0x138) = param_37;
  *(undefined8 *)(puVar1 + 0x140) = param_38;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x0001000823a8(FUN_1036a41e4,puVar1);
  return;
}



/* Entry: 1036a41e4; end: 1036a426f;  */

void FUN_1036a41e4(void)

{
  long unaff_x20;
  
  func_0x0001036a3e04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180));
  return;
}



/* Entry: 1036a4270; end: 1036a427f;  */

undefined1  [16] FUN_1036a4270(void)

{
  return ZEXT816(0x11067c400);
}



/* Entry: 1036a4280; end: 1036a46f7;  */

void FUN_1036a4280(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_49)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112f86028,&UNK_10dbf9b80);
  puVar1 = auStack_70;
  auStack_70[0] = uVar4;
  func_0x0001000838ec();
  FUN_1036af46c(param_3,param_4,param_5,param_6,param_7);
  func_0x000100082720("SnapEditorSaberPluginScopedUserTaggingFriendsServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f86030,&UNK_10dbf9b88);
  puVar2 = &UNK_11067c448;
  func_0x000107c613fc(&UNK_11067c448,0x170,7);
  *(undefined8 *)(puVar2 + 0x10) = param_38;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_16;
  *(undefined8 *)(puVar2 + 0x28) = param_17;
  *(undefined8 *)(puVar2 + 0x30) = param_18;
  *(undefined8 *)(puVar2 + 0x38) = param_19;
  *(undefined8 *)(puVar2 + 0x40) = param_39;
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  *(undefined8 **)(puVar2 + 0x50) = puVar1;
  *(undefined8 *)(puVar2 + 0x58) = param_48;
  *(undefined8 *)(puVar2 + 0x60) = param_36;
  *(undefined8 *)(puVar2 + 0x68) = param_40;
  *(undefined8 *)(puVar2 + 0x70) = param_29;
  *(undefined8 *)(puVar2 + 0x78) = param_35;
  *(undefined8 *)(puVar2 + 0x80) = param_43;
  *(undefined8 *)(puVar2 + 0x88) = param_30;
  *(undefined8 *)(puVar2 + 0x90) = param_10;
  *(undefined8 *)(puVar2 + 0x98) = param_9;
  *(undefined8 *)(puVar2 + 0xa0) = param_11;
  *(undefined8 *)(puVar2 + 0xa8) = param_47;
  *(undefined8 *)(puVar2 + 0xb0) = param_14;
  *(undefined8 *)(puVar2 + 0xb8) = param_15;
  *(undefined8 *)(puVar2 + 0xc0) = param_22;
  *(undefined8 *)(puVar2 + 200) = param_32;
  *(undefined8 *)(puVar2 + 0xd0) = param_20;
  *(undefined8 *)(puVar2 + 0xd8) = param_23;
  *(undefined8 *)(puVar2 + 0xe0) = param_25;
  *(undefined8 *)(puVar2 + 0xe8) = param_24;
  *(undefined8 *)(puVar2 + 0xf0) = param_27;
  *(undefined8 *)(puVar2 + 0xf8) = param_26;
  *(undefined8 *)(puVar2 + 0x100) = param_13;
  *(undefined8 *)(puVar2 + 0x108) = param_42;
  *(undefined8 *)(puVar2 + 0x110) = param_41;
  *(undefined8 *)(puVar2 + 0x118) = param_46;
  *(undefined8 *)(puVar2 + 0x120) = param_28;
  *(undefined8 *)(puVar2 + 0x128) = param_45;
  *(undefined8 *)(puVar2 + 0x130) = param_37;
  *(undefined8 *)(puVar2 + 0x138) = param_44;
  *(undefined8 *)(puVar2 + 0x140) = param_33;
  *(undefined8 *)(puVar2 + 0x148) = param_12;
  *(undefined8 *)(puVar2 + 0x150) = param_31;
  *(undefined8 *)(puVar2 + 0x158) = param_49;
  *(undefined8 *)(puVar2 + 0x160) = param_21;
  *(undefined8 *)(puVar2 + 0x168) = param_34;
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_34);
  uVar4 = 0x1036a4958;
  func_0x0001000823a8(0x1036a4958,puVar2);
  func_0x000100082720("SnapEditorSaberPluginRegistryServiceProvider",0x2c,2);
  uVar3 = uVar4;
  func_0x000103ec9f1c();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar4);
  func_0x000100082720("SnapEditorSaberPluginServiceImplementationEntryPointProvider",0x3c,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 1036a46f8; end: 1036a488b;  */

void FUN_1036a46f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036a488c; end: 1036a49db;  */

void FUN_1036a488c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1036a4280(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180));
  return;
}



/* Entry: 1036a49dc; end: 1036a513f;  */

/* WARNING: Possible PIC construction at 0x0001036a4c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a4d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a4d50) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d40) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d30) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d20) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d10) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d00) */
/* WARNING: Removing unreachable block (ram,0x0001036a4cf0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4ce0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4cd0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4cc0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4cb0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4ca0) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c90) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c80) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c70) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c60) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c50) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c40) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c30) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c20) */
/* WARNING: Removing unreachable block (ram,0x0001036a4c10) */
/* WARNING: Removing unreachable block (ram,0x0001036a4d60) */

void FUN_1036a49dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11067c470;
  func_0x000107c613fc(&UNK_11067c470,0x170,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  uVar2 = 0x112f86038;
  func_0x0001000285a8(0x112f86038,&UNK_10dbf9ba8);
  func_0x000107c613fc();
  pcVar3 = FUN_1036a5140;
  func_0x0001000841fc(FUN_1036a5140,puVar1,uVar2);
  func_0x000100084214("SnapEditorSaberPluginRegistryServiceProvider",0x2c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1036a5140; end: 1036a51ff;  */

void FUN_1036a5140(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001036a4d84(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Entry: 1036a5200; end: 1036a529b;  */

void FUN_1036a5200(undefined8 param_1)

{
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1036a524c,param_1);
  return;
}



/* Entry: 1036a529c; end: 1036a52ab;  */

undefined1  [16] FUN_1036a529c(void)

{
  return ZEXT816(0x11067c540);
}



/* Entry: 1036a52ac; end: 1036a5343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a52ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86048) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036a5344; end: 1036a550f;  */

/* WARNING: Possible PIC construction at 0x0001036a53c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a54ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a53c4) */
/* WARNING: Removing unreachable block (ram,0x0001036a54f4) */
/* WARNING: Removing unreachable block (ram,0x0001036a53e0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001036a54b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5344(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  puVar1 = PTR_PTR_1133bb508;
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112f86048) + _DAT_11302bab8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    func_0x000107c61434(lVar2);
    func_0x000100fac3bc();
    if ((param_2 & 1) != 0) {
      func_0x000107c615f0(*(undefined8 *)(*(long *)(lVar2 + 0x38) + (long)puVar1 * 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1036a5510; end: 1036a555f; -[_TtC32SnapEditorCameraPluginEntryPoint22SnapEditorCameraPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036a5548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a554c) */

void FUN_1036a5510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036a5344(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036a5560; end: 1036a5593;  */

void FUN_1036a5560(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036a5594; end: 1036a55c7; -[_TtC32SnapEditorCameraPluginEntryPoint22SnapEditorCameraPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86048));
  return;
}



/* Entry: 1036a55c8; end: 1036a55e7;  */

void FUN_1036a55c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128df9e0);
  return;
}



/* Entry: 1036a55e8; end: 1036a582f;  */

void FUN_1036a55e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067c700;
  func_0x000107c613fc(&UNK_11067c700,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1036a56c8,puVar1);
  return;
}



/* Entry: 1036a5830; end: 1036a583f;  */

undefined1  [16] FUN_1036a5830(void)

{
  return ZEXT816(0x11067c728);
}



/* Entry: 1036a5840; end: 1036a5b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1036a5840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long alStack_a0 [2];
  undefined1 auStack_70 [16];
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  lVar2 = _DAT_112f86078;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112f86080;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112f86088;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86090) = param_1;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f86098) = puVar4;
  *(byte *)(unaff_x20 + _DAT_112f860a0) = param_6;
  puVar4 = PTR_PTR_1126bae70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f860a8) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f860b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f860b8) = param_4;
  (**(code **)(lVar7 + 0x68))
            (auStack_70 + lVar1 + -0x20,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f158af0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar7 + 8))(auStack_70 + lVar1 + -0x20,lVar3);
  *(undefined **)(unaff_x20 + _DAT_112f860c0) = puVar4;
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  if ((param_6 & 1) == 0) {
    func_0x000107c61174(puVar6);
  }
  else {
    uVar5 = *(undefined8 *)(puVar6 + _DAT_112f86080);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar5);
    func_0x000107c453e4(puVar4);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
  }
  FUN_1036a5b9c(param_5);
  puVar4 = &UNK_11067c7f0;
  func_0x000107c613fc(&UNK_11067c7f0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined1 **)(puVar4 + 0x18) = puVar6;
  func_0x000107c61174(puVar6);
  func_0x000107c61174(param_2);
  *(undefined **)((long)alStack_a0 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar5 = 1;
  func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9c58,puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return puVar6;
}



/* Entry: 1036a5b9c; end: 1036a5cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5b9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4e424();
    func_0x000107c61180();
    puVar2 = &UNK_11067c818;
    func_0x000107c613fc(&UNK_11067c818,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_50 = FUN_1036a840c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1036a68ac;
    puStack_58 = &UNK_11067c9c0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar4 = lVar1;
    func_0x000107c5c320(lVar1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c3e924(lVar4);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1036a5cac; end: 1036a5cc3;  */

void FUN_1036a5cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a5cc4,0,0);
  return;
}



/* Entry: 1036a5cc4; end: 1036a5e3f;  */

void FUN_1036a5cc4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4b710();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c53fcc();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar2 = lVar1;
    func_0x000107c3dba8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    uVar3 = 0;
    FUN_1036a827c(0,0x112f860f0,&PTR_PTR_1126dbfe0);
    lVar1 = lVar2;
    func_0x000107c5fc54(lVar2,uVar3);
    func_0x000107c61170(lVar2);
    puVar4 = &UNK_11067c818;
    func_0x000107c613fc(&UNK_11067c818,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,uVar6);
    puVar5 = &UNK_11067c9a8;
    func_0x000107c613fc(&UNK_11067c9a8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar1;
    func_0x000107c61434(lVar1);
    uVar3 = 1;
    func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9d08,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c6142c(lVar1);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001036a5e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036a5e40; end: 1036a5ea3;  */

void FUN_1036a5e40(void)

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
  plVar3[1] = 0x1036a8438;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a5cc4,0,0);
  return;
}



/* Entry: 1036a5ea4; end: 1036a5ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5ea4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f86088));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036a5ef4; end: 1036a5f5b; -[_TtC33SnapEditorCaptionPluginEntryPoint32SCSnapEditorCaptionsDependencies dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5ef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f86088);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036a5f5c; end: 1036a6003; -[_TtC33SnapEditorCaptionPluginEntryPoint32SCSnapEditorCaptionsDependencies .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036a5f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a5fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a5fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a5fe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a5fcc) */
/* WARNING: Removing unreachable block (ram,0x0001036a5fac) */
/* WARNING: Removing unreachable block (ram,0x0001036a5f8c) */
/* WARNING: Removing unreachable block (ram,0x0001036a5fec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a5f5c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f86090));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86098));
  return;
}



/* Entry: 1036a6004; end: 1036a62b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036a6004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR_PTR_1126ad380;
  func_0x000107c610f8(PTR_PTR_1126ad380);
  func_0x000107c453e4();
  puVar5 = &UNK_11067c818;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_11067c818,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036a6370;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1010342f8;
  puStack_68 = &UNK_11067c830;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c58d1c(puVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c613fc(&UNK_11067c818,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_60 = FUN_1036a6570;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x1036a6660;
  puStack_68 = &UNK_11067c858;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54e64(puVar2);
  func_0x000107c60bd0(ppuVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f86098);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c531a8(puVar2);
  func_0x000107c61170(uVar7);
  if (*(char *)(unaff_x20 + _DAT_112f860a0) == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f86080);
    func_0x000107c5cb24(uVar7);
    func_0x000107c61180();
    func_0x000107c5259c(puVar2);
    func_0x000107c61170(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f860b0);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c56a84(puVar2);
  func_0x000107c615e8(uVar7);
  lVar8 = *(long *)(unaff_x20 + _DAT_112f860b8);
  func_0x000107c439dc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(lVar8,puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c60bd0(lVar8);
  lVar8 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar8 != 0) {
    func_0x000107c54c28(puVar2);
    func_0x000107c615e8(lVar8);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f86078);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c52d24(puVar2);
  func_0x000107c61170(uVar7);
  return puVar2;
}



/* Entry: 1036a62b4; end: 1036a636f;  */

undefined * FUN_1036a62b4(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 == 0) {
    param_3 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar1 = param_3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_1036a6378(param_3,param_1,param_2);
    puVar1 = param_3;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1036a6370; end: 1036a6377;  */

undefined * FUN_1036a6370(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_3 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar2 = param_3;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_1036a6378(param_3,param_1,param_2);
    puVar2 = param_3;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1036a6378; end: 1036a64a7;  */

undefined * FUN_1036a6378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  puVar3 = puVar2;
  func_0x0001010345b0();
  func_0x000107c61170(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = &UNK_11067c818;
    func_0x000107c613fc(&UNK_11067c818,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11067c930;
    func_0x000107c613fc(&UNK_11067c930,0x38,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = unaff_x20;
    *(undefined **)(puVar3 + 0x30) = puVar1;
    func_0x000107c61434(param_3);
    func_0x000107c61174();
    func_0x000107c61174(puVar1);
    uVar4 = 1;
    func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9d00,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return puVar1;
}



/* Entry: 1036a64a8; end: 1036a64c3;  */

void FUN_1036a64a8(long param_1,long param_2)

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



/* Entry: 1036a64c4; end: 1036a656f;  */

undefined * FUN_1036a64c4(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    param_1 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_1036a6578(param_1);
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1036a6570; end: 1036a6577;  */

undefined * FUN_1036a6570(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_1 = PTR_PTR_1126ae820;
    func_0x000107c610f8(PTR_PTR_1126ae820);
    func_0x000107c453e4();
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_1036a6578(param_1);
    puVar2 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1036a6578; end: 1036a66a7;  */

undefined * FUN_1036a6578(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 == 0) {
    puVar2 = &UNK_11067c818;
    func_0x000107c613fc(&UNK_11067c818,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_11067c8b8;
    func_0x000107c613fc(&UNK_11067c8b8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    func_0x000107c61174();
    func_0x000107c61174(puVar1);
    uVar4 = 1;
    func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9cf0,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return puVar1;
}



/* Entry: 1036a66a8; end: 1036a68ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a66a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar9 = param_1;
    func_0x000107c3fe08();
    func_0x000107c61180();
    lVar1 = lVar9;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(lVar9);
    lVar9 = param_1;
    func_0x000107c3e540(param_1);
    func_0x000107c61180();
    lVar2 = lVar9;
    func_0x000107c5faec();
    puVar8 = puVar6;
    func_0x000107c61170(lVar9);
    func_0x000107c43978();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar9 = 0;
      puVar8 = (undefined1 *)0x0;
    }
    else {
      lVar9 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uVar3 = 0;
    func_0x000103ee3360(0);
    puVar7 = puVar5;
    func_0x000103ee041c(lVar1,puVar5,lVar2,puVar6,lVar9,puVar8,0,uVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar8);
    lVar9 = lVar1;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar9 != 0) {
      lVar2 = lVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar9);
      uVar3 = *(undefined8 *)(param_2 + _DAT_112f86078);
      puVar4 = PTR_PTR_1126b3800;
      func_0x000107c610f8(PTR_PTR_1126b3800);
      func_0x000107c61174(uVar3);
      func_0x00010006c00c(lVar2,puVar7);
      lVar9 = lVar2;
      func_0x000107c5ee20(lVar2,puVar7);
      func_0x000107c45ae0(puVar4);
      func_0x000107c61170(lVar9);
      func_0x00010006c090(lVar2,puVar7);
      func_0x000107c4d664(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      func_0x00010006c090(lVar2,puVar7);
    }
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1036a68ac; end: 1036a68f7;  */

void FUN_1036a68ac(long param_1,undefined8 param_2)

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



/* Entry: 1036a68f8; end: 1036a6917;  */

void FUN_1036a68f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a6918,0,0);
  return;
}



/* Entry: 1036a6918; end: 1036a69c7;  */

void FUN_1036a6918(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x50,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x68;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1036a69c8;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_1036a6c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001036a69c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036a69c8; end: 1036a6a07;  */

void FUN_1036a69c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a6a08,0,0);
  return;
}



/* Entry: 1036a6a08; end: 1036a6c6b;  */

void FUN_1036a6a08(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x68);
  uVar12 = uVar11 & 0xffffffffffffff8;
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    uVar10 = uVar12;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = 0;
  while( true ) {
    if (uVar10 == uVar13) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c6142c(uVar11);
      puVar8 = puVar9;
      FUN_1036a6dd4(puVar9,&PTR_PTR_1126dc208,0x112d55c18);
      func_0x000107c6142c(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar7 = puVar8;
      func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar8);
      func_0x000107c45788(puVar9);
      func_0x000107c61170(puVar7);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036a6c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036a6c58);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar13;
      FUN_1036a7d30(uVar13,uVar11,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar1 = uVar13 + 1;
    if (SCARRY8(uVar13,1)) break;
    uVar6 = uVar5;
    FUN_1036a7f5c();
    func_0x000107c61170(uVar5);
    uVar13 = uVar13 + 1;
    if (uVar6 != 0) {
      puVar8 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
         (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar7 = puVar9;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_1036a7ab4(0,puVar7 + 1,1,puVar9,0x112d55c18,&PTR_PTR_1126dc208,0x112d55e88,
                      &UNK_10d91cd80);
      }
      uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar5 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1036a7ab4(puVar9,uVar13 + 1,1,puVar8,0x112d55c18,&PTR_PTR_1126dc208,0x112d55e88,
                      &UNK_10d91cd80);
        uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
      *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar6;
      uVar13 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1036a6c54);
  (*pcVar4)();
}



/* Entry: 1036a6c6c; end: 1036a6dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a6c6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(param_2 + _DAT_112f86090);
  func_0x000107c5fadc(param_3,param_4);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112f860c0);
  func_0x000107c4f7c0(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_11067c958;
  func_0x000107c613fc(&UNK_11067c958,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uStack_40 = 0x1036a8434;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1036a6d64;
  puStack_48 = &UNK_11067c970;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5b4c8(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1036a6dd4; end: 1036a6fbf;  */

undefined * FUN_1036a6dd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a6fc0);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1036a827c(0,param_3,param_2);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        FUN_1036a7d30(uVar8,param_1,param_2,param_3);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_1036a827c(0,param_3,param_2);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 1036a6fc0; end: 1036a6fdb;  */

void FUN_1036a6fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a6fdc,0,0);
  return;
}



/* Entry: 1036a6fdc; end: 1036a7127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a6fdc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x80,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  if (lVar4 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0xa8);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1036a7128;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112f86090);
    uVar2 = *(undefined8 *)(lVar6 + _DAT_112f860c0);
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    puVar3 = &UNK_11067c8e0;
    func_0x000107c613fc(&UNK_11067c8e0,0x18,7);
    puVar7 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1036a7f58;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x1036a6d64;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11067c8f8;
    func_0x000107c60bc4(puVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c3db84(uVar5);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001036a7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036a7128; end: 1036a7167;  */

void FUN_1036a7128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a7168,0,0);
  return;
}



/* Entry: 1036a7168; end: 1036a73cb;  */

void FUN_1036a7168(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x98);
  uVar12 = uVar11 & 0xffffffffffffff8;
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    uVar10 = uVar12;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar13 = 0;
  while( true ) {
    if (uVar10 == uVar13) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
      func_0x000107c6142c(uVar11);
      puVar8 = puVar9;
      FUN_1036a6dd4(puVar9,&PTR_PTR_1126dc208,0x112d55c18);
      func_0x000107c6142c(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar7 = puVar8;
      func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar8);
      func_0x000107c45788(puVar9);
      func_0x000107c61170(puVar7);
      func_0x000107c4d664(uVar2);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001036a73ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar12 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036a73b8);
        (*pcVar4)();
      }
      uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar13;
      FUN_1036a7d30(uVar13,uVar11,&PTR_PTR_1126b15c8,0x112d4ed88);
    }
    uVar1 = uVar13 + 1;
    if (SCARRY8(uVar13,1)) break;
    uVar6 = uVar5;
    FUN_1036a7f5c();
    func_0x000107c61170(uVar5);
    uVar13 = uVar13 + 1;
    if (uVar6 != 0) {
      puVar8 = puVar9;
      func_0x000107c61550();
      if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
         (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar7 = puVar9;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_1036a7ab4(0,puVar7 + 1,1,puVar9,0x112d55c18,&PTR_PTR_1126dc208,0x112d55e88,
                      &UNK_10d91cd80);
      }
      uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar5 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1036a7ab4(puVar9,uVar13 + 1,1,puVar8,0x112d55c18,&PTR_PTR_1126dc208,0x112d55e88,
                      &UNK_10d91cd80);
        uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
      *(ulong *)(uVar5 + uVar13 * 8 + 0x20) = uVar6;
      uVar13 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1036a73b4);
  (*pcVar4)();
}



/* Entry: 1036a73cc; end: 1036a73e3;  */

void FUN_1036a73cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a73e4,0,0);
  return;
}



/* Entry: 1036a73e4; end: 1036a779f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a73e4(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x22;
  ulong uVar19;
  
  lVar16 = *(long *)(unaff_x22 + 0x28);
  puVar12 = (undefined *)(unaff_x22 + 0x10);
  func_0x000107c61428(lVar16 + 0x10,puVar12,0,0);
  lVar16 = lVar16 + 0x10;
  func_0x000107c61618();
  if (lVar16 != 0) {
    uVar17 = *(ulong *)(unaff_x22 + 0x30);
    uVar18 = uVar17 & 0xffffffffffffff8;
    if (uVar17 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar18 + 0x10);
      uVar3 = uVar17;
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar4 = _DAT_112f860a8;
    }
    else {
      uVar6 = uVar18;
      if (0x7fffffffffffffff < uVar17) {
        uVar6 = uVar17;
      }
      func_0x000107c60480();
      uVar3 = *(ulong *)(unaff_x22 + 0x30);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar4 = _DAT_112f860a8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
    _DAT_112f860a8 = lVar4;
    if (uVar6 != 0) {
      uVar19 = 0;
      do {
        while( true ) {
          if ((uVar17 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar18 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1036a76b4);
              (*pcVar5)();
            }
            uVar7 = *(ulong *)(uVar3 + 0x20 + uVar19 * 8);
            func_0x000107c61174(uVar7);
          }
          else {
            puVar12 = *(undefined **)(unaff_x22 + 0x30);
            uVar7 = uVar19;
            FUN_1036a7d30(uVar19,puVar12,&PTR_PTR_1126dbfe0,0x112f860f0);
          }
          uVar1 = uVar19 + 1;
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1036a76b0);
            (*pcVar5)();
          }
          lVar8 = *(long *)(lVar16 + lVar4);
          func_0x000107c3abcc();
          func_0x000107c61180();
          if (lVar8 != 0) break;
LAB_1036a7498:
          func_0x000107c61170(uVar7);
LAB_1036a74a0:
          uVar19 = uVar19 + 1;
          if (uVar1 == uVar6) goto LAB_1036a76d4;
        }
        lVar9 = lVar8;
        func_0x000107c41214();
        func_0x000107c61180();
        if (lVar9 == 0) {
          func_0x000107c61170(lVar8);
          goto LAB_1036a7498;
        }
        lVar10 = lVar9;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar9);
        puVar11 = PTR_PTR_1126dc1f8;
        func_0x000107c610f8();
        lVar9 = lVar10;
        func_0x000107c5ee20(lVar10,puVar12);
        func_0x000107c45ae0();
        func_0x000107c61170(lVar9);
        func_0x00010006c090(lVar10);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(lVar8);
        if (puVar11 == (undefined *)0x0) goto LAB_1036a74a0;
        puVar13 = puVar14;
        func_0x000107c61550();
        if ((((int)puVar13 == 0) || ((long)puVar14 < 0)) ||
           (puVar13 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar12 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar12 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar12 = puVar14;
            }
            func_0x000107c60480();
          }
          puVar12 = puVar12 + 1;
          puVar13 = (undefined *)0x0;
          FUN_1036a7ab4(0,puVar12,1,puVar14,0x112f860f8,&PTR_PTR_1126dc1f8,0x112f86100,
                        &UNK_10dbf9cd8);
        }
        uVar7 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar19 = *(ulong *)(uVar7 + 0x10);
        puVar2 = (undefined *)(uVar19 + 1);
        puVar14 = puVar13;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar19) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          puVar12 = puVar2;
          FUN_1036a7ab4(puVar14,puVar2,1,puVar13,0x112f860f8,&PTR_PTR_1126dc1f8,0x112f86100,
                        &UNK_10dbf9cd8);
          uVar7 = (ulong)puVar14 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar7 + 0x10) = puVar2;
        *(undefined **)(uVar7 + uVar19 * 8 + 0x20) = puVar11;
        uVar19 = uVar1;
      } while (uVar1 != uVar6);
    }
LAB_1036a76d4:
    uVar15 = *(undefined8 *)(lVar16 + _DAT_112f86098);
    func_0x000107c61174(uVar15);
    puVar12 = puVar14;
    FUN_1036a6dd4(puVar14,&PTR_PTR_1126dc1f8,0x112f860f8);
    func_0x000107c6142c(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar11 = puVar12;
    func_0x000107c5fc48(puVar12,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar12);
    func_0x000107c45788(puVar14);
    func_0x000107c61170(puVar11);
    func_0x000107c4d664(uVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(lVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x0001036a779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1036a77a0; end: 1036a77eb; -[_TtC33SnapEditorCaptionPluginEntryPoint32SCSnapEditorCaptionsDependencies init] */

void FUN_1036a77a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorCaptionPluginEntryPoint.SCSnapEditorCaptionsDependencies",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a77cc);
  (*pcVar1)();
}



/* Entry: 1036a77ec; end: 1036a790b; -[_TtC33SnapEditorCaptionPluginEntryPoint32SCSnapEditorCaptionsDependencies captionDataProviderDidUpdate:captionStylesWithNoRecents:] */

/* WARNING: Possible PIC construction at 0x0001036a78ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a78f0) */

void FUN_1036a77ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  FUN_1036a827c(0,0x112f860f0,&PTR_PTR_1126dbfe0);
  func_0x000107c5fc54(param_4,uVar1);
  puVar2 = &UNK_11067c818;
  func_0x000107c613fc(&UNK_11067c818,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_11067c890;
  func_0x000107c613fc(&UNK_11067c890,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9cc8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1036a790c; end: 1036a796f;  */

void FUN_1036a790c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1036a7970;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a73e4,0,0);
  return;
}



/* Entry: 1036a7970; end: 1036a79ab;  */

void FUN_1036a7970(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036a79a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036a79ac; end: 1036a7a3b;  */

undefined *
FUN_1036a79ac(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1036a7a3c(param_3,param_4,param_5,param_6);
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



/* Entry: 1036a7a3c; end: 1036a7ab3;  */

void FUN_1036a7a3c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1036a827c(0,param_1,param_2);
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



/* Entry: 1036a7ab4; end: 1036a7c13;  */

ulong FUN_1036a7ab4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a7c14);
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
  FUN_1036a79ac(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a7c10);
      (*pcVar1)();
    }
    FUN_1036a7c14(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1036a7c14; end: 1036a7d2f;  */

long FUN_1036a7c14(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a7d2c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a7d30);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1036a827c(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1036a827c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1036a7d28);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1036a7d30; end: 1036a7eeb;  */

ulong FUN_1036a7d30(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a7e14);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a7e18);
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
  FUN_1036a827c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036a7eec);
  (*pcVar2)();
}


