/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c17a18; end: 101c17a53;  */

void FUN_101c17a18(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c17a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c17a54; end: 101c17a83;  */

void FUN_101c17a54(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c3f474(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = 0;
  func_0x000100de1f70();
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)((long)auStack_60 - extraout_x8);
  uVar3 = 0xff;
  uStack_40 = uVar1;
  __sSccMa(0xff,lVar2,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  uVar1 = 0;
  __sSqMa(0,uVar3);
  func_0x000100075034(&lStack_38,&UNK_10488cea0,auStack_50,uVar1);
  if (lStack_38 != 0) {
    uVar1 = 0;
    __sScEMa();
    uVar3 = uVar1;
    func_0x000100f5abbc();
    _swift_allocError(uVar1,uVar3,0,0);
    __sS2cEycfC(uVar3);
    *puVar4 = uVar1;
    _swift_storeEnumTagMultiPayload(puVar4,lVar2,1);
    func_0x000103969044(puVar4,lStack_38,lVar2);
  }
  return;
}



/* Entry: 101c17a84; end: 101c17a93;  */

undefined1  [16] FUN_101c17a84(void)

{
  return ZEXT816(0x110456ce8);
}



/* Entry: 101c17a94; end: 101c17ab3;  */

void FUN_101c17a94(void)

{
  func_0x000107c61168(&PTR_PTR_112e09260);
  return;
}



/* Entry: 101c17ab4; end: 101c17adb;  */

void FUN_101c17ab4(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101c17adc; end: 101c17d83;  */

undefined1  [16] FUN_101c17adc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_1;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,lVar1);
      uVar2 = 0x112d7e688;
      FUN_101c1838c(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                    PTR___s10Foundation3URLVSQAAMc_1103509a8);
      puVar3 = puVar6;
      func_0x000107c5fab8(puVar6,uStack_68,lVar1,uVar2);
      uVar8 = (uint)puVar3;
      (**(code **)(lVar9 + 8))(puVar6,lVar1);
      if (((ulong)puVar3 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_4_ = uVar8 & 1;
  auVar10._0_8_ = param_2;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 101c17d84; end: 101c17e1b;  */

void FUN_101c17d84(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c17e1c);
  (*pcVar1)();
}



/* Entry: 101c17e1c; end: 101c1838b;  */

void FUN_101c17e1c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  ulong uStack_68;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x0001000285a8(0x112e092d8,&UNK_10d9df208);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c61574(lVar9);
LAB_101c1800c:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar9 + 0x40;
  uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar4 != lVar9) || (lVar1 + uVar6 * 8 <= lVar4 + 0x40U)) {
    func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar9 + 0x40);
  if (uStack_68 == 0) goto LAB_101c17f50;
  do {
    uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
      lVar8 = *(long *)(lVar5 + 0x48) * uVar7;
      (**(code **)(lVar5 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar9 + 0x30) + lVar8,lVar3);
      uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 8);
      (**(code **)(lVar5 + 0x20))
                (*(long *)(lVar4 + 0x30) + lVar8,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar10;
      func_0x000107c61174(uVar10);
      if (uStack_68 != 0) break;
LAB_101c17f50:
      do {
        lVar8 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101c18034);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
          func_0x000107c61574(lVar9);
          goto LAB_101c1800c;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar8 * 8);
        lVar11 = lVar11 + 1;
      } while (uStack_68 == 0);
      uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar11 = lVar8;
    }
  } while( true );
}



/* Entry: 101c1838c; end: 101c183cb;  */

void FUN_101c1838c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101c183cc; end: 101c184df;  */

void FUN_101c183cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e092e8,&UNK_10d9df210);
  puVar1 = &UNK_110456d90;
  func_0x000107c613fc(&UNK_110456d90,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101c184e0,puVar1);
  return;
}



/* Entry: 101c184e0; end: 101c18507;  */

void FUN_101c184e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_48);
  *param_1 = uStack_48;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 101c18508; end: 101c18597;  */

void FUN_101c18508(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x50);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c18598;
                    /* WARNING: Could not recover jumptable at 0x000101c18594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c18598; end: 101c18607;  */

void FUN_101c18598(byte param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x54) = param_1 & 1;
    uVar1 = 0x101c192c8;
  }
  else {
    uVar1 = 0x101c192cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101c18608; end: 101c186a7;  */

void FUN_101c18608(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c192bc;
                    /* WARNING: Could not recover jumptable at 0x000101c186a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c18a14(plVar1,param_1 & 0xffffff,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101c186a8; end: 101c1872b;  */

void FUN_101c186a8(undefined8 param_1)

{
  long *plVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c192c0;
                    /* WARNING: Could not recover jumptable at 0x000101c18728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c18ddc(param_1,in_x4,in_x5,in_x6);
  return;
}



/* Entry: 101c1872c; end: 101c1874b;  */

void FUN_101c1872c(undefined4 param_1)

{
  long unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x20 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1874c,0,0);
  return;
}



/* Entry: 101c1874c; end: 101c187db;  */

void FUN_101c1874c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x50);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c187dc;
                    /* WARNING: Could not recover jumptable at 0x000101c187d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c187dc; end: 101c1884b;  */

void FUN_101c187dc(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x54) = param_1 & 1;
    pcVar1 = FUN_101c1884c;
  }
  else {
    pcVar1 = (code *)0x101c18884;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c1884c; end: 101c188bb;  */

void FUN_101c1884c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c18880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x54));
  return;
}



/* Entry: 101c188bc; end: 101c18957;  */

void FUN_101c188bc(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c192c4;
                    /* WARNING: Could not recover jumptable at 0x000101c18954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c18a14(plVar3,param_1 & 0xffffff,param_2,param_3,uVar1,uVar2,uVar4);
  return;
}



/* Entry: 101c18958; end: 101c189d7;  */

void FUN_101c18958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c189d8;
                    /* WARNING: Could not recover jumptable at 0x000101c189d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c18ddc(param_1,uVar1,uVar2,uVar4);
  return;
}



/* Entry: 101c189d8; end: 101c18a13;  */

void FUN_101c189d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c18a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c18a14; end: 101c18a37;  */

void FUN_101c18a14(undefined4 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_6;
  *(undefined1 *)(unaff_x22 + 0xec) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined4 *)(unaff_x22 + 0xe8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c18a38,0,0);
  return;
}



/* Entry: 101c18a38; end: 101c18ae7;  */

void FUN_101c18a38(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar3 = *(uint *)(unaff_x22 + 0xe8);
  func_0x00010008a7c8(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000100083b20(unaff_x22 + 0x10);
  func_0x000107c61574(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
  piVar5 = *(int **)(lVar2 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c18ae8;
                    /* WARNING: Could not recover jumptable at 0x000101c18ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,uVar3 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x90),
             *(undefined1 *)(unaff_x22 + 0xec),uVar6,lVar2);
  return;
}



/* Entry: 101c18ae8; end: 101c18b57;  */

void FUN_101c18ae8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = param_2;
    *(undefined8 *)(lVar2 + 200) = param_1;
    pcVar1 = FUN_101c18b58;
  }
  else {
    pcVar1 = (code *)0x101c18d6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c18b58; end: 101c18bef;  */

void FUN_101c18b58(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0xe8);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar3 + 0x50);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c18bf0;
                    /* WARNING: Could not recover jumptable at 0x000101c18bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xc0),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c18bf0; end: 101c18c57;  */

void FUN_101c18bf0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0xc0);
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  func_0x000107c6142c(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c18c58;
  }
  else {
    pcVar1 = (code *)0x101c18da0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c18c58; end: 101c18ce7;  */

void FUN_101c18c58(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c18ce8;
                    /* WARNING: Could not recover jumptable at 0x000101c18ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(0,uVar2,lVar3);
  return;
}



/* Entry: 101c18ce8; end: 101c18ddb;  */

void FUN_101c18ce8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c18d30,0,0);
  return;
}



/* Entry: 101c18ddc; end: 101c18dfb;  */

void FUN_101c18ddc(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c18dfc,0,0);
  return;
}



/* Entry: 101c18dfc; end: 101c18e87;  */

void FUN_101c18dfc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c18e88;
                    /* WARNING: Could not recover jumptable at 0x000101c18e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined1 *)(unaff_x22 + 0xb8),uVar2,lVar3);
  return;
}



/* Entry: 101c18e88; end: 101c18ee3;  */

void FUN_101c18e88(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c18ee4;
  }
  else {
    pcVar1 = FUN_101c19048;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101c18ee4; end: 101c18f73;  */

void FUN_101c18ee4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c18f74;
                    /* WARNING: Could not recover jumptable at 0x000101c18f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(1,uVar2,lVar3);
  return;
}



/* Entry: 101c18f74; end: 101c18fbb;  */

void FUN_101c18f74(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c18fbc,0,0);
  return;
}



/* Entry: 101c18fbc; end: 101c19047;  */

void FUN_101c18fbc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x000100083b20(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
  (**(code **)(lVar2 + 8))(6,0,0,0,0,1,uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000101c19044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c19048; end: 101c1907b;  */

void FUN_101c19048(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c19078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1907c; end: 101c1908b;  */

undefined1  [16] FUN_101c1907c(void)

{
  return ZEXT816(0x110456dd8);
}



/* Entry: 101c1908c; end: 101c190ef;  */

long FUN_101c1908c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c190f0; end: 101c191cf;  */

undefined8 * FUN_101c190f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101c191d0; end: 101c19223;  */

undefined8 * FUN_101c191d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c19224; end: 101c192cf;  */

int FUN_101c19224(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c192d0; end: 101c1931b;  */

void FUN_101c192d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e092f0,&UNK_10d9df2e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c1931c,param_1);
  return;
}



/* Entry: 101c1931c; end: 101c1933f;  */

void FUN_101c1931c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
  param_1[1] = 0x796669746f7053;
  param_1[2] = 0xe700000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c19340; end: 101c1939f;  */

void FUN_101c19340(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c193a0,0,0);
  return;
}



/* Entry: 101c193a0; end: 101c1948b;  */

void FUN_101c193a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  if (lRam0000000112e09300 != -1) {
    func_0x000107c61568(0x112e09300,FUN_101c1991c);
  }
  lVar3 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = uVar9;
  func_0x000100028790(uVar9,0x113803bb8);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar6,uVar9);
  piVar8 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c1948c;
                    /* WARNING: Could not recover jumptable at 0x000101c19470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x50),uVar2,lVar4);
  return;
}



/* Entry: 101c1948c; end: 101c194f7;  */

void FUN_101c1948c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  lVar3 = *(long *)(lVar4 + 0x48);
  *(undefined8 *)(lVar4 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x58));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c194f8,0,0);
  return;
}



/* Entry: 101c194f8; end: 101c19537;  */

void FUN_101c194f8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c19534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101c19538; end: 101c19563;  */

undefined1  [16] FUN_101c19538(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101c19564; end: 101c195c3;  */

void FUN_101c19564(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar3 = *unaff_x20;
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c195c4,0,0);
  return;
}



/* Entry: 101c195c4; end: 101c196af;  */

void FUN_101c195c4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  if (lRam0000000112e09300 != -1) {
    func_0x000107c61568(0x112e09300,FUN_101c1991c);
  }
  lVar3 = *(long *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = uVar9;
  func_0x000100028790(uVar9,0x113803bb8);
  (**(code **)(lVar3 + 0x10))(uVar5,uVar6,uVar9);
  piVar8 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c196b0;
                    /* WARNING: Could not recover jumptable at 0x000101c19694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x48),uVar2,lVar4);
  return;
}



/* Entry: 101c196b0; end: 101c1971f;  */

void FUN_101c196b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar1 = *(long *)(lVar3 + 0x40);
  uVar2 = *(undefined8 *)(lVar3 + 0x48);
  uVar4 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c19720,0,0);
  return;
}



/* Entry: 101c19720; end: 101c1975f;  */

void FUN_101c19720(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c1975c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 101c19760; end: 101c1976f;  */

undefined1  [16] FUN_101c19760(void)

{
  return ZEXT816(0x110456ea0);
}



/* Entry: 101c19770; end: 101c197d3;  */

void FUN_101c19770(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[2]);
  return;
}



/* Entry: 101c197d4; end: 101c19837;  */

undefined8 * FUN_101c197d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101c19838; end: 101c1987b;  */

undefined8 * FUN_101c19838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 101c1987c; end: 101c1991b;  */

int FUN_101c1987c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c1991c; end: 101c19c1b;  */

void FUN_101c1991c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_50;
  undefined4 auStack_48 [2];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100028750();
  lVar1 = lVar2;
  func_0x000100028790(lVar2,0x113803bb8);
  func_0x000107c5edd0(puVar4,0xd000000000000053,0x800000010f003910);
  puVar3 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 != 1) {
    pcVar7 = *(code **)(lVar6 + 0x20);
    (*pcVar7)(lVar5,puVar4,lVar2);
    (*pcVar7)(lVar1,lVar5,lVar2);
    return;
  }
  func_0x0001000293e4(puVar4);
  *(undefined4 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -0x10) = 10;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000026,0x800000010f003970,
                      "SpotifyMusicProviderPluginImplementation/SpotifyMusicProviderConstants.swift"
                      ,0x4c,2);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x101c19a9c);
  (*pcVar7)();
}



/* Entry: 101c19c1c; end: 101c19cd7;  */

void FUN_101c19c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e09308,&UNK_10d9df340);
  puVar1 = &UNK_110456f48;
  func_0x000107c613fc(&UNK_110456f48,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_101c19d64,puVar1);
  return;
}



/* Entry: 101c19cd8; end: 101c19d63;  */

/* WARNING: Possible PIC construction at 0x000101c19d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c19d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c19d3c) */
/* WARNING: Removing unreachable block (ram,0x000101c19d4c) */

void FUN_101c19cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  param_1[3] = &UNK_110457040;
  param_1[4] = &PTR_DAT_110456f88;
  puVar1 = &UNK_110457078;
  func_0x000107c613fc(&UNK_110457078,0x30,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c19d64; end: 101c19d77;  */

/* WARNING: Possible PIC construction at 0x000101c19d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c19d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c19d3c) */
/* WARNING: Removing unreachable block (ram,0x000101c19d4c) */

void FUN_101c19d64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  param_1[3] = &UNK_110457040;
  param_1[4] = &PTR_DAT_110456f88;
  puVar5 = &UNK_110457078;
  func_0x000107c613fc(&UNK_110457078,0x30,7,uVar4,uVar6);
  *param_1 = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c19d78; end: 101c19e67;  */

void FUN_101c19d78(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[3] = &UNK_110456e50;
  param_1[4] = &PTR_DAT_110456da8;
  puVar1 = &UNK_110456f70;
  func_0x000107c613fc(&UNK_110456f70,0x30,7);
  *param_1 = puVar1;
  func_0x000100083b20(puVar1 + 0x10);
  return;
}



/* Entry: 101c19e68; end: 101c19e77;  */

undefined1  [16] FUN_101c19e68(void)

{
  return ZEXT816(0x110456fc8);
}



/* Entry: 101c19e78; end: 101c19edb;  */

long FUN_101c19e78(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c19edc; end: 101c19fbb;  */

undefined8 * FUN_101c19edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101c19fbc; end: 101c1a00f;  */

undefined8 * FUN_101c19fbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c1a010; end: 101c1a0a7;  */

int FUN_101c1a010(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c1a0a8; end: 101c1a0e3;  */

void FUN_101c1a0a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c1a0e4; end: 101c1a1df;  */

undefined1  [16] FUN_101c1a0e4(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == '\0') {
    func_0x000107c602fc(0x36);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000033,0x800000010f0039e0);
  }
  else {
    if (param_3 != '\x01') {
      uStack_40 = 0xd00000000000001b;
      uStack_38 = 0x800000010f0039c0;
      goto LAB_101c1a1cc;
    }
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd00000000000001b;
    uStack_38 = 0x800000010f0039a0;
  }
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
LAB_101c1a1cc:
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 101c1a1e0; end: 101c1a207;  */

undefined1  [16] FUN_101c1a1e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 2) == '\0') {
    func_0x000107c602fc(0x36);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000033,0x800000010f0039e0);
  }
  else {
    if (*(char *)(unaff_x20 + 2) != '\x01') {
      uStack_40 = 0xd00000000000001b;
      uStack_38 = 0x800000010f0039c0;
      goto LAB_101c1a1cc;
    }
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd00000000000001b;
    uStack_38 = 0x800000010f0039a0;
  }
  func_0x000107c5fb78(uVar1,uVar2);
  func_0x000107c5fb78(0x2e,0xe100000000000000);
LAB_101c1a1cc:
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = uStack_40;
  return auVar3;
}



/* Entry: 101c1a208; end: 101c1a247;  */

void FUN_101c1a208(void)

{
  func_0x0001000285a8(0x112e09310,&UNK_10d9df3b0);
  func_0x0001000823a8(FUN_101c1a248,0);
  return;
}



/* Entry: 101c1a248; end: 101c1a24b;  */

void FUN_101c1a248(void)

{
  return;
}



/* Entry: 101c1a24c; end: 101c1a2b7;  */

void FUN_101c1a24c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c1b210;
                    /* WARNING: Could not recover jumptable at 0x000101c1a2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101c1a410)(param_1,param_2);
  return;
}



/* Entry: 101c1a2b8; end: 101c1a34b;  */

void FUN_101c1a2b8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c1a310;
                    /* WARNING: Could not recover jumptable at 0x000101c1a30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c1ab5c();
  return;
}



/* Entry: 101c1a34c; end: 101c1a3b7;  */

void FUN_101c1a34c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c1b214;
                    /* WARNING: Could not recover jumptable at 0x000101c1a3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101c1a410)(param_1,param_2);
  return;
}



/* Entry: 101c1a3b8; end: 101c1a4fb;  */

void FUN_101c1a3b8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c1b218;
                    /* WARNING: Could not recover jumptable at 0x000101c1a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101c1ab5c();
  return;
}



/* Entry: 101c1a4fc; end: 101c1a83f;  */

void FUN_101c1a4fc(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x90);
  uVar7 = *(ulong *)(unaff_x22 + 0x98);
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar4 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    FUN_101c1af9c();
    func_0x000107c613f8(&UNK_1104571c0,param_1,0,0);
    *param_1 = uVar1;
    param_1[1] = uVar7;
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x000107c61654();
  }
  else {
    if (lRam0000000112e092f8 != -1) {
      func_0x000107c61568(0x112e092f8,0x101c19a9c);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar2 = *(long *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar3 = *(long *)(unaff_x22 + 0xb0);
    uVar5 = uVar12;
    func_0x000100028790(uVar12,0x113803ba0);
    (**(code **)(lVar3 + 0x10))(uVar9,uVar5,uVar12);
    func_0x000107c5ebe4(uVar13,uVar9,1);
    pcVar11 = *(code **)(lVar3 + 8);
    *(code **)(unaff_x22 + 0xe8) = pcVar11;
    (*pcVar11)(uVar9,uVar12);
    (**(code **)(lVar2 + 0x30))(uVar13,1,uVar10);
    if ((int)uVar13 != 1) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar2 = *(long *)(unaff_x22 + 0xb0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      (**(code **)(*(long *)(unaff_x22 + 0xd8) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 200),
                 *(undefined8 *)(unaff_x22 + 0xd0));
      func_0x000107c5fb78(uVar13,uVar9);
      func_0x000107c5ebf8(0x2f6b636172742f,0xe700000000000000);
      func_0x000107c5ebe8(uVar12);
      (**(code **)(lVar2 + 0x30))(uVar12,1,uVar10);
      if ((int)uVar12 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xa0),
                   *(undefined8 *)(unaff_x22 + 0xa8));
        puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x000107c61168();
        *(undefined **)(unaff_x22 + 0xf0) = puVar8;
        uVar9 = 0;
        func_0x000107c5fcec();
        puVar8 = PTR___sScMMa_11034fc70;
        uVar10 = uVar9;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0xf8) = uVar10;
        uVar10 = 0x112d45220;
        FUN_101c1af44(0x112d45220,puVar8,PTR___sScMScAsMc_11034fc78);
        func_0x000107c5fca8(uVar9,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1a840,uVar9,uVar10);
        return;
      }
      lVar2 = *(long *)(unaff_x22 + 0xd8);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar6 = *(undefined8 **)(unaff_x22 + 0xa0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
      FUN_101c1afdc(puVar6,0x112d36580,&UNK_10d9016d0);
      FUN_101c1af9c();
      func_0x000107c613f8(&UNK_1104571c0,puVar6,0,0);
      *puVar6 = uVar12;
      puVar6[1] = uVar7;
      *(undefined1 *)(puVar6 + 2) = 0;
      func_0x000107c61654();
      pcVar11 = *(code **)(lVar2 + 8);
      func_0x000107c61434(uVar10);
      (*pcVar11)(uVar9,uVar13);
      goto LAB_101c1a648;
    }
    puVar6 = *(undefined8 **)(unaff_x22 + 200);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(ulong *)(unaff_x22 + 0x98);
    FUN_101c1afdc(puVar6,0x112d4b5b0,&UNK_10d912140);
    FUN_101c1af9c();
    func_0x000107c613f8(&UNK_1104571c0,puVar6,0,0);
    *puVar6 = uVar10;
    puVar6[1] = uVar7;
    *(undefined1 *)(puVar6 + 2) = 0;
    func_0x000107c61654();
    uVar7 = uVar4;
  }
  func_0x000107c61434(uVar7);
LAB_101c1a648:
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000101c1a69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1a840; end: 101c1a88f;  */

void FUN_101c1a840(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c5a9c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1a890,0,0);
  return;
}



/* Entry: 101c1a890; end: 101c1a9bf;  */

void FUN_101c1a890(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c5ed90();
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8();
  uVar2 = 0;
  func_0x000100dfa6ec(0);
  uVar3 = 0x112d377a8;
  FUN_101c1af44(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar4 = puVar1;
  func_0x000107c5f9dc(puVar1,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  *(undefined **)(unaff_x22 + 0x110) = puVar4;
  func_0x000107c6142c(puVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x118;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101c1a9c0;
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar5,0);
  uVar3 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a67e30;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110457118;
  *(long *)(unaff_x22 + 0x70) = lVar5;
  func_0x000107c4de70(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c1a9c0; end: 101c1a9ff;  */

void FUN_101c1a9c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1aa00,0,0);
  return;
}



/* Entry: 101c1aa00; end: 101c1ab5b;  */

void FUN_101c1aa00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  bVar5 = *(byte *)(unaff_x22 + 0x118);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c61170(uVar2);
  func_0x000107c61170();
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar3 = *(long *)(unaff_x22 + 0xd8);
  if ((bVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    FUN_101c1af9c();
    func_0x000107c613f8(&UNK_1104571c0,puVar6,0,0);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 2) = 2;
    func_0x000107c61654();
    (*UNRECOVERED_JUMPTABLE)(uVar7,uVar9);
    (**(code **)(lVar3 + 8))(uVar2,uVar1);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 200);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    (*UNRECOVERED_JUMPTABLE)(uVar8,*(undefined8 *)(unaff_x22 + 0xa8));
    (**(code **)(lVar3 + 8))(uVar2,uVar1);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1ab58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c1ab5c; end: 101c1abb7;  */

void FUN_101c1ab5c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1abb8,0,0);
  return;
}



/* Entry: 101c1abb8; end: 101c1ac53;  */

void FUN_101c1abb8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  *(undefined **)(unaff_x22 + 0xa8) = puVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c1af44(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ac54,uVar2,uVar3);
  return;
}



/* Entry: 101c1ac54; end: 101c1aca3;  */

void FUN_101c1ac54(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c5a9c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1aca4,0,0);
  return;
}



/* Entry: 101c1aca4; end: 101c1ae37;  */

void FUN_101c1aca4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  if (lRam0000000112e092f8 != -1) {
    func_0x000107c61568(0x112e092f8,0x101c19a9c);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = uVar8;
  func_0x000100028790(uVar8,0x113803ba0);
  uVar1 = uVar4;
  (**(code **)(lVar6 + 0x10))(uVar4,uVar3,uVar8);
  func_0x000107c5ed90();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  (**(code **)(lVar6 + 8))(uVar4,uVar8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8();
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = 0x112d377a8;
  FUN_101c1af44(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar5 = puVar2;
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  *(undefined **)(unaff_x22 + 200) = puVar5;
  func_0x000107c6142c(puVar2);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101c1ae38;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar6,0);
  uVar4 = 0x112df01c0;
  func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101a67e30;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104570f0;
  *(long *)(unaff_x22 + 0x70) = lVar6;
  func_0x000107c4de70(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101c1ae38; end: 101c1ae77;  */

void FUN_101c1ae38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1ae78,0,0);
  return;
}



/* Entry: 101c1ae78; end: 101c1af23;  */

void FUN_101c1ae78(void)

{
  byte bVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  bVar1 = *(byte *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  if ((bVar1 & 1) == 0) {
    FUN_101c1af9c();
    func_0x000107c613f8(&UNK_1104571c0,puVar2,0,0);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 2;
    func_0x000107c61654();
    func_0x000107c615c0(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c615c0(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c1af20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c1af24; end: 101c1af43;  */

undefined1  [16] FUN_101c1af24(void)

{
  return ZEXT816(0x1104570c0);
}



/* Entry: 101c1af44; end: 101c1af83;  */

void FUN_101c1af44(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101c1af84; end: 101c1af9b;  */

long FUN_101c1af84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101c1af9c; end: 101c1afdb;  */

void FUN_101c1af9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e09318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9df4a0;
  func_0x000107c61520(&UNK_10d9df4a0,&UNK_1104571c0);
  puRam0000000112e09318 = puVar1;
  return;
}



/* Entry: 101c1afdc; end: 101c1b01b;  */

undefined8 FUN_101c1afdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c1b01c; end: 101c1b05b;  */

void FUN_101c1b01c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 101c1b05c; end: 101c1b0f7;  */

undefined8 * FUN_101c1b05c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101c1b01c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101c1b0f8; end: 101c1b13b;  */

undefined8 * FUN_101c1b0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101c1b044(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101c1b13c; end: 101c1b22b;  */

int FUN_101c1b13c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c1b22c; end: 101c1b277;  */

void FUN_101c1b22c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e09320,&UNK_10d9df4e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c1b278,param_1);
  return;
}



/* Entry: 101c1b278; end: 101c1b2a3;  */

void FUN_101c1b278(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c1b2a4; end: 101c1b33b;  */

void FUN_101c1b2a4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined4 *)(unaff_x22 + 0x70);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c1b33c;
                    /* WARNING: Could not recover jumptable at 0x000101c1b338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c1b33c; end: 101c1b3ab;  */

void FUN_101c1b33c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x60) = param_2;
    *(undefined8 *)(lVar2 + 0x68) = param_1;
    pcVar1 = FUN_101c1b3ac;
  }
  else {
    pcVar1 = (code *)0x101c1b3e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


