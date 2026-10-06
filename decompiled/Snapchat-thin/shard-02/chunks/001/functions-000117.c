/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019ae2ec; end: 1019ae33f;  */

void FUN_1019ae2ec(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[1] + 1;
  if (!SCARRY8(unaff_x20[1],1)) {
    unaff_x20[1] = lVar3;
    lVar2 = *unaff_x20;
    if (lVar3 < *(long *)(lVar2 + 0x10)) {
      func_0x000107c61434();
    }
    else {
      lVar2 = 0;
      lVar3 = 0;
    }
    *param_1 = lVar2;
    param_1[1] = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019ae340);
  (*pcVar1)();
}



/* Entry: 1019ae340; end: 1019ae347;  */

undefined8 FUN_1019ae340(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = unaff_x20[1];
  if (lVar3 < *(long *)(*unaff_x20 + 0x10)) {
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ae2e8);
      (*pcVar2)();
    }
    lVar3 = *(long *)(*unaff_x20 + lVar3 * 8 + 0x20);
    if (param_1 < *(long *)(lVar3 + 0x10)) {
      if (-1 < param_1) {
        lVar3 = lVar3 + param_1 * 0x18;
        uVar1 = *(undefined8 *)(lVar3 + 0x20);
        FUN_1019aee74(uVar1,*(undefined8 *)(lVar3 + 0x28),*(undefined1 *)(lVar3 + 0x30));
        return uVar1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019ae2ec);
      (*pcVar2)();
    }
  }
  return 0;
}



/* Entry: 1019ae348; end: 1019ae4c7;  */

void FUN_1019ae348(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar2 = 0;
  func_0x000107c60188(0,lVar5);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd64();
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_2 + 0x18) + 8))(puVar6,lVar5);
    puVar3 = puVar6;
    (**(code **)(lVar4 + 0x30))(puVar6,1,lVar5);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      (**(code **)(lVar4 + 0x20))(lVar7,puVar6,lVar5);
      (**(code **)(lVar4 + 0x28))(unaff_x20,lVar7,lVar5);
      lVar2 = *(long *)(param_2 + -8);
      (**(code **)(lVar2 + 0x10))(param_1,unaff_x20,param_2);
    }
    else {
      (**(code **)(lVar8 + 8))(puVar6,lVar2);
      lVar2 = *(long *)(param_2 + -8);
    }
    (**(code **)(lVar2 + 0x38))(param_1,!bVar1,1,param_2);
  }
  return;
}



/* Entry: 1019ae4c8; end: 1019ae577;  */

undefined8 * FUN_1019ae4c8(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar5 = *(ulong *)(param_4 + 0x18);
  (**(code **)(uVar5 + 0x10))();
  if ((uVar5 & 0xff) != 0) {
    puVar1 = param_1;
    uVar4 = uVar3;
    (*param_2)();
    puVar2 = puVar1;
    FUN_1019aee98();
    func_0x000107c613f8(&UNK_1104e5c18,puVar2,0,0);
    *puVar2 = puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = 0x8000000000000000;
    puVar2[3] = param_1;
    puVar2[4] = uVar3;
    *(char *)(puVar2 + 5) = (char)uVar5;
    func_0x000107c61654();
  }
  return param_1;
}



/* Entry: 1019ae578; end: 1019ae663;  */

undefined1  [16] FUN_1019ae578(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(param_4 + 0x10);
  uVar6 = *(ulong *)(param_4 + 0x18);
  (**(code **)(uVar6 + 0x10))();
  if ((uVar6 & 0xff) != 0) {
    if (((uint)uVar6 & 0xff) == 4 && (param_1 == 0 && lVar4 == 0)) {
      param_1 = 0;
      uVar6 = 1;
    }
    else {
      lVar1 = param_1;
      lVar5 = lVar4;
      (*param_2)();
      plVar2 = (long *)&UNK_110422320;
      func_0x000107c613fc(&UNK_110422320,0x18,7);
      plVar2[2] = -0x8000000000000000;
      plVar3 = plVar2;
      FUN_1019aee98();
      func_0x000107c613f8(&UNK_1104e5c18,plVar3,0,0);
      *plVar3 = lVar1;
      plVar3[1] = lVar5;
      plVar3[2] = (long)plVar2;
      plVar3[3] = param_1;
      plVar3[4] = lVar4;
      *(char *)(plVar3 + 5) = (char)uVar6;
      func_0x000107c61654();
    }
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1019ae664; end: 1019ae71f;  */

void FUN_1019ae664(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar5 + 0x10))();
  if (((uint)lVar5 & 0xff) != 1) {
    puVar1 = param_1;
    uVar4 = uVar3;
    (*param_2)();
    puVar2 = puVar1;
    FUN_1019aee98();
    func_0x000107c613f8(&UNK_1104e5c18,puVar2,0,0);
    *puVar2 = puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = 0x8000000000000008;
    puVar2[3] = param_1;
    puVar2[4] = uVar3;
    *(char *)(puVar2 + 5) = (char)lVar5;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 1019ae720; end: 1019ae817;  */

long FUN_1019ae720(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_4 + 0x10);
  lVar7 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar7 + 0x10))();
  uVar1 = (uint)lVar7 & 0xff;
  if (uVar1 != 1) {
    if (uVar1 == 4 && (param_1 == 0 && lVar5 == 0)) {
      param_1 = 0;
    }
    else {
      lVar2 = param_1;
      lVar6 = lVar5;
      (*param_2)();
      plVar3 = (long *)&UNK_110422320;
      func_0x000107c613fc(&UNK_110422320,0x18,7);
      plVar3[2] = -0x7ffffffffffffff8;
      plVar4 = plVar3;
      FUN_1019aee98();
      func_0x000107c613f8(&UNK_1104e5c18,plVar4,0,0);
      *plVar4 = lVar2;
      plVar4[1] = lVar6;
      plVar4[2] = (long)plVar3;
      plVar4[3] = param_1;
      plVar4[4] = lVar5;
      *(char *)(plVar4 + 5) = (char)lVar7;
      func_0x000107c61654();
    }
  }
  return param_1;
}



/* Entry: 1019ae818; end: 1019ae8d3;  */

undefined1  [16] FUN_1019ae818(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar5 + 0x10))();
  if (((uint)lVar5 & 0xff) != 3) {
    puVar1 = param_1;
    uVar4 = uVar3;
    (*param_2)();
    puVar2 = puVar1;
    FUN_1019aee98();
    func_0x000107c613f8(&UNK_1104e5c18,puVar2,0,0);
    *puVar2 = puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = 0x8000000000000018;
    puVar2[3] = param_1;
    puVar2[4] = uVar3;
    *(char *)(puVar2 + 5) = (char)lVar5;
    func_0x000107c61654();
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1019ae8d4; end: 1019ae9c7;  */

undefined1  [16] FUN_1019ae8d4(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar7 = *(long *)(param_4 + 0x10);
  lVar6 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar6 + 0x10))();
  uVar1 = (uint)lVar6 & 0xff;
  if (uVar1 != 3) {
    if (uVar1 == 4 && (param_1 == 0 && lVar7 == 0)) {
      param_1 = 0;
      lVar7 = 0;
    }
    else {
      lVar2 = param_1;
      lVar5 = lVar7;
      (*param_2)();
      plVar3 = (long *)&UNK_110422320;
      func_0x000107c613fc(&UNK_110422320,0x18,7);
      plVar3[2] = -0x7fffffffffffffe8;
      plVar4 = plVar3;
      FUN_1019aee98();
      func_0x000107c613f8(&UNK_1104e5c18,plVar4,0,0);
      *plVar4 = lVar2;
      plVar4[1] = lVar5;
      plVar4[2] = (long)plVar3;
      plVar4[3] = param_1;
      plVar4[4] = lVar7;
      *(char *)(plVar4 + 5) = (char)lVar6;
      func_0x000107c61654();
    }
  }
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1019ae9c8; end: 1019aea83;  */

undefined1  [16] FUN_1019ae9c8(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar5 + 0x10))();
  if (((uint)lVar5 & 0xff) != 2) {
    puVar1 = param_1;
    uVar4 = uVar3;
    (*param_2)();
    puVar2 = puVar1;
    FUN_1019aee98();
    func_0x000107c613f8(&UNK_1104e5c18,puVar2,0,0);
    *puVar2 = puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = 0x8000000000000010;
    puVar2[3] = param_1;
    puVar2[4] = uVar3;
    *(char *)(puVar2 + 5) = (char)lVar5;
    func_0x000107c61654();
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 1019aea84; end: 1019aeb77;  */

undefined1  [16] FUN_1019aea84(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  lVar7 = *(long *)(param_4 + 0x10);
  lVar6 = *(long *)(param_4 + 0x18);
  (**(code **)(lVar6 + 0x10))();
  uVar1 = (uint)lVar6 & 0xff;
  if (uVar1 != 2) {
    if (uVar1 == 4 && (param_1 == 0 && lVar7 == 0)) {
      param_1 = 0;
      lVar7 = -0x1000000000000000;
    }
    else {
      lVar2 = param_1;
      lVar5 = lVar7;
      (*param_2)();
      plVar3 = (long *)&UNK_110422320;
      func_0x000107c613fc(&UNK_110422320,0x18,7);
      plVar3[2] = -0x7ffffffffffffff0;
      plVar4 = plVar3;
      FUN_1019aee98();
      func_0x000107c613f8(&UNK_1104e5c18,plVar4,0,0);
      *plVar4 = lVar2;
      plVar4[1] = lVar5;
      plVar4[2] = (long)plVar3;
      plVar4[3] = param_1;
      plVar4[4] = lVar7;
      *(char *)(plVar4 + 5) = (char)lVar6;
      func_0x000107c61654();
    }
  }
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1019aeb78; end: 1019aec2b;  */

void FUN_1019aeb78(void)

{
  FUN_1019ae348();
  return;
}



/* Entry: 1019aec2c; end: 1019aed43;  */

undefined * FUN_1019aec2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019aed44);
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
    puVar2 = (undefined *)0x112de1b08;
    func_0x0001000285a8(0x112de1b08,&UNK_10d9a9880);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1104e5d68);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 1019aed44; end: 1019aee73;  */

undefined * FUN_1019aed44(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019aee74);
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
    puVar3 = (undefined *)0x112de1b00;
    func_0x0001000285a8(0x112de1b00,&UNK_10d9a9878);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112de1720;
    func_0x0001000285a8(0x112de1720,&UNK_10d9a9420);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1019aee74; end: 1019aee97;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1019aee74(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if (param_3 != '\x02') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1019aee98; end: 1019aeed7;  */

void FUN_1019aee98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de1af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da70dc0;
  func_0x000107c61520(&UNK_10da70dc0,&UNK_1104e5c18);
  puRam0000000112de1af8 = puVar1;
  return;
}



/* Entry: 1019aeed8; end: 1019aeef3;  */

void FUN_1019aeed8(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1019aeef4; end: 1019aef1f;  */

undefined8 * FUN_1019aeef4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1019aef20; end: 1019aef27;  */

void FUN_1019aef20(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 1019aef28; end: 1019aef73;  */

undefined8 * FUN_1019aef28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1019aef74; end: 1019aefaf;  */

undefined8 * FUN_1019aef74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1019aefb0; end: 1019af04b;  */

int FUN_1019aefb0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019af04c; end: 1019af127;  */

void FUN_1019af04c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,1,&lStack_28,param_1 + 0x20);
  }
  return;
}



/* Entry: 1019af128; end: 1019af137;  */

void FUN_1019af128(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001019af134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 1019af138; end: 1019af1f7;  */

undefined8 FUN_1019af138(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x10))();
  return param_1;
}



/* Entry: 1019af1f8; end: 1019af2eb;  */

uint * FUN_1019af1f8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_1019af290;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (0xff < uVar7) {
      if (uVar7 >> 0x10 == 0) {
        uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
      }
      else {
        uVar7 = *(uint *)((long)param_1 + uVar5);
      }
      goto LAB_1019af228;
    }
    if (1 < uVar7) goto LAB_1019af224;
  }
  else {
LAB_1019af224:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
LAB_1019af228:
    if (uVar7 != 0) {
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        uVar3 = 4;
        if (uVar4 < 4) {
          uVar3 = uVar4;
        }
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            uVar5 = (ulong)(byte)*param_1;
          }
          else {
            uVar5 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar3 == 3) {
          uVar5 = (ulong)(uint3)*param_1;
        }
        else {
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_1019af290:
                    /* WARNING: Could not recover jumptable at 0x0001019af294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))();
  return param_1;
}



/* Entry: 1019af2ec; end: 1019af497;  */

void FUN_1019af2ec(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  
  lVar4 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar2 = *(uint *)(lVar4 + 0x54);
  lVar6 = *(long *)(lVar4 + 0x40);
  uVar5 = (uint)lVar6;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar8 = 0;
  }
  else if (uVar5 < 4) {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
  }
  else {
    bVar8 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar6);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar6);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + lVar6) = (char)iVar7;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + lVar6) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar6) = iVar7;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + lVar6) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + lVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar6) = 0;
    }
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001019af434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x38))();
      return;
    }
  }
  return;
}



/* Entry: 1019af498; end: 1019af4a7;  */

void FUN_1019af498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e6613e4);
  return;
}



/* Entry: 1019af4a8; end: 1019af4e3; -[_TtC27FriendingExperimentServices18InterstitialConfig initWithProtoConfig:] */

undefined8 FUN_1019af4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1019af50c();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1019af4e4; end: 1019af50b;  */

void FUN_1019af4e4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8228;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000113803940 = puVar1;
  return;
}



/* Entry: 1019af50c; end: 1019af727;  */

void FUN_1019af50c(undefined8 param_1)

{
  func_0x000107c426e0();
  func_0x000107c439f0(param_1);
  func_0x000107c411e8(param_1);
  func_0x000107c52034(param_1);
  func_0x000107c3f528(param_1);
  func_0x000107c3d96c(param_1);
  func_0x000107c5dc88();
  func_0x000107c4fb60();
  func_0x000107c42648();
  func_0x000107c46768();
  return;
}



/* Entry: 1019af728; end: 1019af74f; -[_TtC27FriendingExperimentServices19MutualFriendsConfig initWithProtoConfig:] */

void FUN_1019af728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001019af5e0();
  return;
}



/* Entry: 1019af750; end: 1019af76b;  */

void FUN_1019af750(undefined8 param_1)

{
  FUN_1019af76c();
  uRam0000000113803948 = param_1;
  return;
}



/* Entry: 1019af76c; end: 1019af81b;  */

undefined * FUN_1019af76c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb468;
  func_0x000107c610f8(PTR_PTR_1126bb468);
  func_0x000107c453e4();
  func_0x000107c54514();
  func_0x000107c568dc(puVar1,param_2,0);
  func_0x000107c532a0(puVar1,param_2,0);
  func_0x000107c532a4(puVar1,param_2,0);
  func_0x000107c59154(puVar1,param_2,0);
  func_0x000107c5339c(puVar1,param_2,0);
  func_0x000107c52488(puVar1,param_2,0);
  func_0x000107c54d00(puVar1,param_2,0);
  func_0x000107c54cfc(puVar1,param_2,0);
  func_0x000107c5a258(puVar1,param_2,0);
  func_0x000107c5a254(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1019af81c; end: 1019af8ab;  */

long FUN_1019af81c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x00010098a744();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010098a774();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c4980c(uVar1);
  func_0x000107c61170(param_1);
  return (long)(int)uVar1;
}



/* Entry: 1019af8ac; end: 1019af903; -[_TtC41FriendingExperimentServicesImplementation39FriendingExperimentReaderImplementation intForKey:] */

undefined8 FUN_1019af8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1019af81c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1019af904; end: 1019afb0f;  */

/* WARNING: Removing unreachable block (ram,0x0001019afa6c) */

undefined8 FUN_1019af904(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  if (lRam0000000112de1b18 != -1) {
    param_2 = FUN_1019af750;
    func_0x000107c61568(0x112de1b18,FUN_1019af750);
  }
  lVar6 = lRam0000000113803948;
  puVar1 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    lVar6 = lVar2;
    func_0x000107c5ee20(lVar2,param_2);
    func_0x00010006c090(lVar2,param_2);
  }
  func_0x000107c5a494(puVar1);
  func_0x000107c61170(lVar6);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar5 = 0x800000010efc6350;
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6350);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      func_0x000107c610f8(PTR_PTR_1126bb468);
      func_0x00010006c00c(lVar4,uVar5);
      lVar2 = lVar4;
      FUN_1019b0164(lVar4,uVar5);
      func_0x00010006c090(lVar4,uVar5);
      uVar3 = 0;
      func_0x000103e6de98(0);
      func_0x000107c610f8();
      func_0x000107c481a4();
      func_0x000107c61170(lVar2);
      func_0x00010006c090(lVar4,uVar5);
      goto LAB_1019afa98;
    }
  }
  uVar3 = 0;
  func_0x000103e6de98(0);
  func_0x000107c610f8();
  func_0x000107c481a4();
LAB_1019afa98:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar6);
  return uVar3;
}



/* Entry: 1019afb10; end: 1019afb1b; -[_TtC41FriendingExperimentServicesImplementation39FriendingExperimentReaderImplementation getMutualFriendsConfig] */

void FUN_1019afb10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019af904();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019afb1c; end: 1019afd27;  */

/* WARNING: Removing unreachable block (ram,0x0001019afc84) */

undefined8 FUN_1019afb1c(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  
  if (lRam0000000112de1b10 != -1) {
    param_2 = FUN_1019af4e4;
    func_0x000107c61568(0x112de1b10,FUN_1019af4e4);
  }
  lVar6 = lRam0000000113803940;
  puVar1 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar2 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    lVar6 = lVar2;
    func_0x000107c5ee20(lVar2,param_2);
    func_0x00010006c090(lVar2,param_2);
  }
  func_0x000107c5a494(puVar1);
  func_0x000107c61170(lVar6);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  uVar5 = 0x800000010efc6310;
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6310);
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar6 != 0) {
    lVar2 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      func_0x000107c610f8(PTR_PTR_1126a8228);
      func_0x00010006c00c(lVar4,uVar5);
      lVar2 = lVar4;
      FUN_1019b0164(lVar4,uVar5);
      func_0x00010006c090(lVar4,uVar5);
      uVar3 = 0;
      func_0x000103e6dadc(0);
      func_0x000107c610f8();
      func_0x000107c481a4();
      func_0x000107c61170(lVar2);
      func_0x00010006c090(lVar4,uVar5);
      goto LAB_1019afcb0;
    }
  }
  uVar3 = 0;
  func_0x000103e6dadc(0);
  func_0x000107c610f8();
  func_0x000107c481a4();
LAB_1019afcb0:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar6);
  return uVar3;
}



/* Entry: 1019afd28; end: 1019afd33; -[_TtC41FriendingExperimentServicesImplementation39FriendingExperimentReaderImplementation getInterstitialConfig] */

void FUN_1019afd28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019afb1c();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019afd34; end: 1019afff7;  */

void FUN_1019afd34(void)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc6310);
  uVar3 = uVar7;
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc6330);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar3;
    func_0x000107c5dc0c(uVar3);
    func_0x000107c61180();
  }
  uVar4 = uVar8;
  FUN_1019b0224(uVar8);
  func_0x000107c61170(uVar8);
  if (uVar7 == 0) {
LAB_1019afe74:
    lVar9 = 2;
  }
  else {
    uVar8 = uVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61174();
    uVar5 = uVar8;
    func_0x000107c4a924();
    if ((int)uVar5 != 1) {
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar8);
      goto LAB_1019afe74;
    }
    uVar5 = uVar8;
    func_0x000107c49804(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar8);
    lVar9 = (long)(int)uVar5;
  }
  if ((uVar3 == 0) ||
     (uVar8 = uVar3, puVar6 = PTR_s_respondsToSelector__11262c7e0,
     func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_configResult_1125af238),
     (uVar8 & 1) == 0)) {
LAB_1019aff0c:
    if (uVar7 != 0) goto LAB_1019aff10;
  }
  else {
    uVar8 = uVar3;
    func_0x000107c400d8();
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c5c218();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (uVar5 == 0) goto LAB_1019aff0c;
    uVar8 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    func_0x000107c6142c(puVar6);
    uVar8 = uVar8 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    bVar1 = uVar8 != 0;
    if ((uVar7 == 0) || (uVar8 != 0)) goto LAB_1019aff94;
LAB_1019aff10:
    uVar8 = uVar7;
    puVar6 = PTR_s_respondsToSelector__11262c7e0;
    func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,PTR_s_configResult_1125af238);
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar7;
      func_0x000107c400d8();
      func_0x000107c61180();
      uVar5 = uVar8;
      func_0x000107c5c218();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      bVar1 = false;
      if (uVar5 != 0) {
        uVar8 = uVar5;
        func_0x000107c5faec(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(puVar6);
        uVar8 = uVar8 & 0xffffffffffff;
        if (((ulong)puVar6 & 0x2000000000000000) != 0) {
          uVar8 = (ulong)puVar6 >> 0x38 & 0xf;
        }
        bVar1 = uVar8 != 0;
      }
      goto LAB_1019aff94;
    }
  }
  bVar1 = false;
LAB_1019aff94:
  puVar6 = &UNK_110422538;
  func_0x000107c613fc(&UNK_110422538,0x20,7);
  *(ulong *)(puVar6 + 0x10) = uVar3;
  *(ulong *)(puVar6 + 0x18) = uVar7;
  func_0x000103e6e8cc(0);
  func_0x000107c610f8();
  func_0x000103e6e680(uVar4,lVar9,bVar1,FUN_1019b046c,puVar6);
  return;
}



/* Entry: 1019afff8; end: 1019b0003; -[_TtC41FriendingExperimentServicesImplementation39FriendingExperimentReaderImplementation getInterstitialEligibilityPeek] */

void FUN_1019afff8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019afd34();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019b0004; end: 1019b0103;  */

void FUN_1019b0004(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc62e0);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61174();
    lVar5 = lVar2;
    func_0x000107c4a924();
    if ((int)lVar5 == 4) {
      lVar5 = lVar2;
      func_0x000107c3ebcc(lVar2);
    }
    else {
      lVar5 = 0;
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  puVar3 = &UNK_110422510;
  func_0x000107c613fc(&UNK_110422510,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar4;
  uVar1 = 0;
  func_0x000103e6e8ec(0);
  func_0x000107c610f8();
  func_0x000103e6e7ec(lVar5,0x1019b0154,puVar3,uVar1);
  return;
}



/* Entry: 1019b0104; end: 1019b010f; -[_TtC41FriendingExperimentServicesImplementation39FriendingExperimentReaderImplementation getRecentlyActiveNotificationEligibilityPeek] */

void FUN_1019b0104(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1019b0004();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019b0110; end: 1019b0147;  */

void FUN_1019b0110(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019b0148; end: 1019b0163;  */

void FUN_1019b0148(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001019b0468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1019b0164; end: 1019b0223;  */

/* WARNING: Removing unreachable block (ram,0x0001019b0398) */

long FUN_1019b0164(undefined8 param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long unaff_x20;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar5 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  if (lRam0000000112de1b10 != -1) {
    param_2 = FUN_1019af4e4;
    func_0x000107c61568(0x112de1b10);
  }
  lVar6 = 0;
  func_0x000103e6dadc(0);
  lVar11 = lVar6;
  func_0x000107c610f8();
  func_0x000107c481a4();
  if (lVar5 == 0) {
    return lVar11;
  }
  func_0x000107c61174();
  lVar7 = lVar5;
  func_0x000107c4a924();
  if ((int)lVar7 != 6) goto LAB_1019b03e8;
  lVar7 = lVar5;
  func_0x000107c3dd54();
  func_0x000107c61180();
  if (lVar7 == 0) goto LAB_1019b03e8;
  lVar8 = lVar7;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1019b042c);
    (*pcVar4)();
  }
  lVar9 = lVar8;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar8);
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar10 == 0) {
      pcVar4 = param_2;
      func_0x00010006c090(lVar9);
      uVar2 = (ulong)param_2 & 0xff000000000000;
      param_2 = pcVar4;
      if (uVar2 != 0) {
LAB_1019b0338:
        lVar8 = lVar7;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019b0430);
          (*pcVar4)();
        }
        lVar9 = lVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar8);
        func_0x000107c610f8(PTR_PTR_1126a8228);
        lVar8 = lVar9;
        FUN_1019b0164(lVar9,param_2);
        func_0x00010006c090(lVar9,param_2);
        if (lVar8 != 0) {
          func_0x000107c610f8(lVar6);
          func_0x000107c481a4();
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar5);
          lVar11 = lVar6;
          lVar5 = lVar8;
        }
      }
    }
    else {
      func_0x00010006c090(lVar9);
      if ((long)(int)lVar9 != lVar9 >> 0x20) goto LAB_1019b0338;
    }
  }
  else if (uVar10 == 2) {
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar1 = *(long *)(lVar9 + 0x18);
    func_0x00010006c090(lVar9);
    if (lVar8 != lVar1) goto LAB_1019b0338;
  }
  else {
    func_0x00010006c090(lVar9);
  }
  func_0x000107c61170(lVar7);
LAB_1019b03e8:
  func_0x000107c61170(lVar5);
  return lVar11;
}



/* Entry: 1019b0224; end: 1019b042f;  */

/* WARNING: Removing unreachable block (ram,0x0001019b0398) */

void FUN_1019b0224(long param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  if (lRam0000000112de1b10 != -1) {
    param_2 = FUN_1019af4e4;
    func_0x000107c61568(0x112de1b10);
  }
  uVar5 = 0;
  func_0x000103e6dadc(0);
  uVar6 = uVar5;
  func_0x000107c610f8();
  func_0x000107c481a4();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar7 = param_1;
  func_0x000107c4a924();
  if ((int)lVar7 != 6) goto LAB_1019b03e8;
  lVar7 = param_1;
  func_0x000107c3dd54();
  func_0x000107c61180();
  if (lVar7 == 0) goto LAB_1019b03e8;
  lVar8 = lVar7;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1019b042c);
    (*pcVar4)();
  }
  lVar9 = lVar8;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar8);
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar10 == 0) {
      pcVar4 = param_2;
      func_0x00010006c090(lVar9);
      uVar2 = (ulong)param_2 & 0xff000000000000;
      param_2 = pcVar4;
      if (uVar2 != 0) {
LAB_1019b0338:
        lVar8 = lVar7;
        func_0x000107c5dc0c();
        func_0x000107c61180();
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1019b0430);
          (*pcVar4)();
        }
        lVar9 = lVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar8);
        func_0x000107c610f8(PTR_PTR_1126a8228);
        lVar8 = lVar9;
        FUN_1019b0164(lVar9,param_2);
        func_0x00010006c090(lVar9,param_2);
        if (lVar8 != 0) {
          func_0x000107c610f8(uVar5);
          func_0x000107c481a4();
          func_0x000107c61170(uVar6);
          func_0x000107c61170(param_1);
          param_1 = lVar8;
        }
      }
    }
    else {
      func_0x00010006c090(lVar9);
      if ((long)(int)lVar9 != lVar9 >> 0x20) goto LAB_1019b0338;
    }
  }
  else if (uVar10 == 2) {
    lVar8 = *(long *)(lVar9 + 0x10);
    lVar1 = *(long *)(lVar9 + 0x18);
    func_0x00010006c090(lVar9);
    if (lVar8 != lVar1) goto LAB_1019b0338;
  }
  else {
    func_0x00010006c090(lVar9);
  }
  func_0x000107c61170(lVar7);
LAB_1019b03e8:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019b0430; end: 1019b046b;  */

void FUN_1019b0430(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001019b0468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1019b046c; end: 1019b04a3;  */

/* WARNING: Possible PIC construction at 0x0001019b0480: Changing call to branch */

void FUN_1019b046c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((lVar1 == 0) && (lVar1 = *(long *)(unaff_x20 + 0x18), *(long *)(unaff_x20 + 0x18) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_expose_1125c4ec8);
  return;
}



/* Entry: 1019b04a4; end: 1019b04e3;  */

void FUN_1019b04a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1019b04e4; end: 1019b04ff;  */

/* WARNING: Possible PIC construction at 0x0001019b04f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019b04f4) */

void FUN_1019b04e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019b0500; end: 1019b054b;  */

void FUN_1019b0500(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b054c; end: 1019b05f7;  */

void FUN_1019b054c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110422560;
  func_0x000107c613fc(&UNK_110422560,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112de1bc8,&UNK_10d9a9930);
  func_0x000107c613fc();
  pcVar2 = FUN_1019b05f8;
  func_0x0001000bdd8c(FUN_1019b05f8,puVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  func_0x0001001b89f4(0);
  func_0x000107c610f8();
  func_0x0001003e0ca8();
  *param_1 = pcVar3;
  return;
}



/* Entry: 1019b05f8; end: 1019b05fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019b05f8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000029,0x800000010efc6420,
                        "FriendingExperimentServicesImplementation/FriendingExperimentServiceProvider.swift"
                        ,0x52,2,0x1c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100989bf0);
    (*pcVar1)();
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_113092298);
  func_0x000107c615f0(uVar5);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    func_0x000100989c98();
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    *(long *)(lVar4 + 0x18) = lVar3;
    func_0x000107c61574(lVar2);
    *param_1 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100989ba4);
  (*pcVar1)();
}



/* Entry: 1019b05fc; end: 1019b0803;  */

void FUN_1019b05fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1019b0804; end: 1019b080b;  */

void FUN_1019b0804(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c421c8();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar2);
    lVar2 = 0;
    if (lVar1 != 0) {
      func_0x0001019b0ba4();
      func_0x000107c613fc();
      *(long *)(lVar2 + 0x10) = lVar1;
    }
  }
  return;
}



/* Entry: 1019b080c; end: 1019b0843;  */

void FUN_1019b080c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019b0844; end: 1019b085f;  */

void FUN_1019b0844(long param_1,long param_2)

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



/* Entry: 1019b0860; end: 1019b0883;  */

/* WARNING: Possible PIC construction at 0x0001019b086c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019b0870) */

void FUN_1019b0860(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019b0884; end: 1019b08d7;  */

void FUN_1019b0884(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b08d8; end: 1019b0957;  */

void FUN_1019b08d8(undefined8 param_1)

{
  if (lRam0000000112de1cd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6614d8);
  return;
}



/* Entry: 1019b0958; end: 1019b0a3f;  */

void FUN_1019b0958(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110422620;
  func_0x000107c613fc(&UNK_110422620,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x1019b0a48;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1019b080c;
  puStack_48 = &UNK_110422660;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001001dfa64(0);
  func_0x000107c610f8();
  func_0x000101ce4008();
  *param_1 = puVar1;
  return;
}



/* Entry: 1019b0a40; end: 1019b0a4b;  */

void FUN_1019b0a40(long param_1,long param_2)

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



/* Entry: 1019b0a4c; end: 1019b0a8f;  */

void FUN_1019b0a4c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000105b40284(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1019b0a90; end: 1019b0b7f; -[_TtC42IncomingFriendsImpressionCountManagingImpl37IncomingFriendsImpressionCountMutator increaseImpressionCount:] */

void FUN_1019b0a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = &UNK_1104226b0;
  func_0x000107c613fc(&UNK_1104226b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  pcStack_50 = FUN_1019b0bc4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ab3660;
  puStack_58 = &UNK_1104226c8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c4e55c(uVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1019b0b80; end: 1019b0bc3;  */

void FUN_1019b0b80(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b0bc4; end: 1019b0be7;  */

void FUN_1019b0bc4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000105b40284(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1019b0be8; end: 1019b0eaf;  */

long FUN_1019b0be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  func_0x000100734968();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001007349f8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100734a8c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  return unaff_x20;
}



/* Entry: 1019b0eb0; end: 1019b0f53;  */

void FUN_1019b0eb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 1019b0f54; end: 1019b0f97;  */

undefined1  [16] FUN_1019b0f54(void)

{
  return ZEXT816(0x110422810);
}



/* Entry: 1019b0f98; end: 1019b0feb;  */

void FUN_1019b0f98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b0fec; end: 1019b1137;  */

long FUN_1019b0fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000100771a88(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100771b08();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100771d6c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 1019b1138; end: 1019b1183;  */

void FUN_1019b1138(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b1184; end: 1019b11c7;  */

undefined1  [16] FUN_1019b1184(void)

{
  return ZEXT816(0x1104228d8);
}



/* Entry: 1019b11c8; end: 1019b121b;  */

void FUN_1019b11c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b121c; end: 1019b126f;  */

undefined8 FUN_1019b121c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010073dcac(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1019b1270; end: 1019b12ab;  */

void FUN_1019b1270(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b12ac; end: 1019b12ef;  */

undefined1  [16] FUN_1019b12ac(void)

{
  return ZEXT816(0x1104229a0);
}



/* Entry: 1019b12f0; end: 1019b1343;  */

void FUN_1019b12f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b1344; end: 1019b1397;  */

undefined8 FUN_1019b1344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007e5ef4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1019b1398; end: 1019b13d3;  */

void FUN_1019b1398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b13d4; end: 1019b1417;  */

undefined1  [16] FUN_1019b13d4(void)

{
  return ZEXT816(0x110422a68);
}



/* Entry: 1019b1418; end: 1019b146b;  */

void FUN_1019b1418(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b146c; end: 1019b1523;  */

long FUN_1019b146c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001007ad92c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001007ad9a8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001007ad9d0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 1019b1524; end: 1019b1557;  */

void FUN_1019b1524(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b1558; end: 1019b159b;  */

undefined1  [16] FUN_1019b1558(void)

{
  return ZEXT816(0x110422b30);
}



/* Entry: 1019b159c; end: 1019b15ef;  */

void FUN_1019b159c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b15f0; end: 1019b165b;  */

long FUN_1019b15f0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010046dd04();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x00010046e3c0();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1019b165c; end: 1019b1687;  */

void FUN_1019b165c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019b1688; end: 1019b16cb;  */

undefined1  [16] FUN_1019b1688(void)

{
  return ZEXT816(0x110422bd0);
}



/* Entry: 1019b16cc; end: 1019b171f;  */

void FUN_1019b16cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b1720; end: 1019b189f;  */

long FUN_1019b1720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x0001003d4424(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003d44a8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003d44f8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 1019b18a0; end: 1019b190b;  */

void FUN_1019b18a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1019b190c; end: 1019b194f;  */

undefined1  [16] FUN_1019b190c(void)

{
  return ZEXT816(0x110422c98);
}



/* Entry: 1019b1950; end: 1019b19a3;  */

void FUN_1019b1950(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019b19a4; end: 1019b1acf;  */

void FUN_1019b19a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x00010023424c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x000102151740(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001021510e0(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_102151624();
  *(undefined8 *)(param_2 + 0x38) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1019b1ad0; end: 1019b1adf;  */

void FUN_1019b1ad0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x00010023424c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  func_0x000102151740(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001021510e0(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_102151624();
  *(undefined8 *)(lVar1 + 0x38) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1019b1ae0; end: 1019b1baf;  */

long FUN_1019b1ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000102151740(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x0001021510e0(param_1,param_2,param_3,param_4,param_5);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_102151624();
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  return unaff_x20;
}



/* Entry: 1019b1bb0; end: 1019b1bfb;  */

void FUN_1019b1bb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


