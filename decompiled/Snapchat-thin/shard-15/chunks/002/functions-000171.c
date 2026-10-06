/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b982608; end: 10b982657;  */

long FUN_10b982608(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b982658; end: 10b982687;  */

void FUN_10b982658(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_FUN_110d7cfd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b982688; end: 10b98268b;  */

void FUN_10b982688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cfd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b98268c; end: 10b98269f;  */

void FUN_10b98268c(void)

{
  func_0x00010b982710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9826a0; end: 10b98272f;  */

void FUN_10b9826a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b982824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b982730; end: 10b982757;  */

long FUN_10b982730(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b982758; end: 10b982763;  */

long * FUN_10b982758(long *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x10);
  *param_1 = (long)plVar2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x18);
  cVar1 = *(char *)(param_2 + 0x19);
  *(char *)((long)param_1 + 9) = cVar1;
  if (cVar1 == '\x01' && plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



/* Entry: 10b982764; end: 10b98278f;  */

undefined8 * FUN_10b982764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cf88;
  FUN_10b9a8f04(param_1 + 1);
  return param_1;
}



/* Entry: 10b982790; end: 10b9829d7;  */

long * FUN_10b982790(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b9829d8; end: 10b982a03;  */

undefined8 * FUN_10b9829d8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  FUN_10b982a04();
  return param_1;
}



/* Entry: 10b982a04; end: 10b982a1f;  */

void FUN_10b982a04(long *param_1)

{
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b982a20; end: 10b982a4f;  */

undefined8 * FUN_10b982a20(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  FUN_10b982a04();
  return param_1;
}



/* Entry: 10b982a50; end: 10b982a6b;  */

void FUN_10b982a50(long *param_1)

{
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 10b982a6c; end: 10b982ab3;  */

undefined8 * FUN_10b982a6c(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_10b982a50(param_1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 10b982ab4; end: 10b982b2f;  */

ulong * FUN_10b982ab4(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *extraout_x8;
  
  if ((char)param_1[1] == '\x05') {
    return (ulong *)(ulong)(uint)*param_1;
  }
  _abort();
  if ((char)param_1[1] != '\x06') {
    _abort();
    if ((char)param_1[1] == '\x04') {
      return (ulong *)(ulong)(byte)*param_1;
    }
    _abort();
    if ((char)param_1[1] == '\x03') {
      return param_1;
    }
    _abort();
    if ((char)param_1[1] == '\x02') {
      param_1 = (ulong *)*param_1;
      _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return param_1;
    }
    _abort();
    if (((char)param_1[1] != '\x01') &&
       (_abort(), ((byte)param_1[1] != 1 || param_2 != 2) && (byte)param_1[1] != param_2)) {
      _abort();
      if (param_2 != 2 || (byte)param_1[1] != 1) {
        if ((byte)param_1[1] != param_2) {
          _abort();
          *extraout_x8 = (ulong)param_1 & 0xffffffff;
          *(undefined1 *)(extraout_x8 + 1) = 5;
          puVar2 = extraout_x8;
          if ((char)extraout_x8[1] == '\x02') {
            puVar1 = (ulong *)*extraout_x8;
            puVar2 = (ulong *)0x0;
            if (puVar1 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__CFRetain_11034a770)();
              return puVar1;
            }
          }
          return puVar2;
        }
        if (param_2 == 2) {
          param_1 = (ulong *)*param_1;
          if (param_1 != (ulong *)0x0) {
            _objc_retain(param_1);
            _CFAutorelease(param_1);
          }
          return param_1;
        }
      }
    }
  }
  return (ulong *)*param_1;
}



/* Entry: 10b982b30; end: 10b982b67;  */

ulong * FUN_10b982b30(long *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong *puVar2;
  
  if ((char)param_1[1] == '\x02') {
    puVar2 = (ulong *)*param_1;
    _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  _abort();
  if (((char)param_1[1] != '\x01') &&
     (_abort(), (*(byte *)(param_1 + 1) != 1 || param_2 != 2) && *(byte *)(param_1 + 1) != param_2))
  {
    _abort();
    if (param_2 != 2 || *(byte *)(param_1 + 1) != 1) {
      if (*(byte *)(param_1 + 1) != param_2) {
        _abort();
        *extraout_x8 = (ulong)param_1 & 0xffffffff;
        *(undefined1 *)(extraout_x8 + 1) = 5;
        puVar2 = extraout_x8;
        if ((char)extraout_x8[1] == '\x02') {
          puVar1 = (ulong *)*extraout_x8;
          puVar2 = (ulong *)0x0;
          if (puVar1 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__CFRetain_11034a770)();
            return puVar1;
          }
        }
        return puVar2;
      }
      if (param_2 == 2) {
        puVar2 = (ulong *)*param_1;
        if (puVar2 != (ulong *)0x0) {
          _objc_retain(puVar2);
          _CFAutorelease(puVar2);
        }
        return puVar2;
      }
    }
  }
  return (ulong *)*param_1;
}



/* Entry: 10b982b68; end: 10b982be3;  */

ulong * FUN_10b982b68(long *param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *extraout_x8;
  
  if (((char)param_1[1] != '\x01') &&
     (_abort(), (*(byte *)(param_1 + 1) != 1 || param_2 != 2) && *(byte *)(param_1 + 1) != param_2))
  {
    _abort();
    if (param_2 != 2 || *(byte *)(param_1 + 1) != 1) {
      if (*(byte *)(param_1 + 1) != param_2) {
        _abort();
        *extraout_x8 = (ulong)param_1 & 0xffffffff;
        *(undefined1 *)(extraout_x8 + 1) = 5;
        puVar2 = extraout_x8;
        if ((char)extraout_x8[1] == '\x02') {
          puVar1 = (ulong *)*extraout_x8;
          puVar2 = (ulong *)0x0;
          if (puVar1 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__CFRetain_11034a770)();
            return puVar1;
          }
        }
        return puVar2;
      }
      if (param_2 == 2) {
        puVar2 = (ulong *)*param_1;
        if (puVar2 != (ulong *)0x0) {
          _objc_retain(puVar2);
          _CFAutorelease(puVar2);
        }
        return puVar2;
      }
    }
  }
  return (ulong *)*param_1;
}



/* Entry: 10b982be4; end: 10b982c77;  */

void FUN_10b982be4(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 & 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 5;
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b982c78; end: 10b982d0f;  */

undefined8 * FUN_10b982c78(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d7d040;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[9] + lVar2)) {
        FUN_10b980260(param_1[10] + lVar3);
        lVar1 = param_1[0xc];
      }
      lVar3 = lVar3 + 0x20;
    }
    __ZdlPv();
    param_1[0xe] = 0;
    param_1[9] = &UNK_10dd5b8b0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  *param_1 = &PTR_FUN_110d7d2a0;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b982d10; end: 10b982d13;  */

undefined8 * FUN_10b982d10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_110d7d040;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(param_1[9] + lVar2)) {
        FUN_10b980260(param_1[10] + lVar3);
        lVar1 = param_1[0xc];
      }
      lVar3 = lVar3 + 0x20;
    }
    __ZdlPv();
    param_1[0xe] = 0;
    param_1[9] = &UNK_10dd5b8b0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  *param_1 = &PTR_FUN_110d7d2a0;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b982d14; end: 10b982d27;  */

void FUN_10b982d14(void)

{
  FUN_10b982c78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b982d28; end: 10b982e23;  */

void FUN_10b982d28(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_3;
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10b982e24();
  if ((int)uVar2 == 0) {
    FUN_10b982b30();
    _objc_retainAutoreleasedReturnValue();
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b986530();
    _objc_retain(param_3);
    puVar3 = PTR_PTR_1126d94c8;
    _objc_opt_class(PTR_PTR_1126d94c8);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    func_0x00010b986468();
    if (uVar2 == 0) {
      *param_1 = 0;
    }
    else {
      func_0x00010c124da0(param_1,param_3);
    }
    func_0x00010b986530();
    func_0x00010b986468();
  }
  else {
    *param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b982e24; end: 10b982e67;  */

uint FUN_10b982e24(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = (uint)param_1;
  }
  return uVar1 & 1;
}



/* Entry: 10b982e68; end: 10b982f3b;  */

void FUN_10b982e68(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_10b982e24();
  puVar2 = PTR_PTR_1126d94c8;
  if ((uVar1 & 1) == 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    func_0x00010c0e02e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (plVar3 != (long *)0x0) {
      func_0x00010b9864b0();
    }
    _objc_setAssociatedObject(param_2,param_1,puVar2,1);
    func_0x00010b986468();
  }
  func_0x00010b98643c();
  return;
}



/* Entry: 10b982f3c; end: 10b98314b;  */

void FUN_10b982f3c(undefined1 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 auStack_50 [2];
  
  uVar6 = param_3;
  FUN_10b98402c();
  lVar5 = 0;
  uVar10 = uVar6 >> 7;
  uVar7 = *(ulong *)(param_2 + 0x60);
  lVar13 = *(long *)(param_2 + 0x48);
  while( true ) {
    uVar10 = uVar10 & uVar7;
    uVar11 = *(ulong *)(lVar13 + uVar10);
    uVar12 = uVar11 ^ (uVar6 & 0x7f) * 0x101010101010101;
    for (uVar12 = uVar12 + 0xfefefefefefefeff & (uVar12 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar14 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar10 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar7;
      if (*(int *)(*(long *)(param_2 + 0x50) + uVar14 * 0x20) == (int)param_3) {
        if (uVar7 != uVar14) {
          lVar1 = *(long *)(param_2 + 0x50) + uVar14 * 0x20;
          lVar5 = lVar1 + 8;
          FUN_10b9802e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            puVar2 = (ulong *)(lVar13 + uVar14);
            for (pcVar15 = (char *)((long)puVar2 + 1); *pcVar15 < -1;
                pcVar15 = pcVar15 + ((ulong)puVar4 & 0xffffffff)) {
              auStack_50[0] = *(undefined8 *)pcVar15;
              puVar4 = auStack_50;
              func_0x000107c27e58();
            }
            FUN_10b980260(lVar1 + 8);
            uVar6 = 0;
            *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + -1;
            puVar8 = (undefined1 *)((long)puVar2 + (-8 - *(long *)(param_2 + 0x48)));
            uVar10 = *(ulong *)(*(long *)(param_2 + 0x48) +
                               ((ulong)puVar8 & *(ulong *)(param_2 + 0x60)));
            uVar9 = 0xfe;
            uVar10 = uVar10 & ~uVar10 << 6 & 0x8080808080808080;
            if ((uVar10 != 0) && (uVar7 = *puVar2 & ~*puVar2 << 6 & 0x8080808080808080, uVar7 != 0))
            {
              uVar7 = uVar7 >> 7;
              uVar6 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              bVar3 = (int)((ulong)LZCOUNT(uVar10) >> 3) +
                      ((uint)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) < 8;
              uVar6 = (ulong)bVar3;
              uVar9 = 0x80;
              if (!bVar3) {
                uVar9 = 0xfe;
              }
            }
            *(undefined1 *)puVar2 = uVar9;
            *(undefined1 *)
             (*(long *)(param_2 + 0x48) + (*(ulong *)(param_2 + 0x60) & 7) +
              (*(ulong *)(param_2 + 0x60) & (ulong)puVar8) + 1) = uVar9;
            *(ulong *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + uVar6;
            *param_1 = 0;
            param_1[0x10] = 0;
          }
          else {
            func_0x00010b982c24(auStack_50,lVar5);
            func_0x00010b986768();
            param_1[0x10] = 1;
            func_0x00010b986528();
          }
          func_0x00010b986468();
          return;
        }
        goto LAB_10b982ffc;
      }
    }
    if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar10 = lVar5 + uVar10;
  }
LAB_10b982ffc:
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



/* Entry: 10b98314c; end: 10b9831b3;  */

void FUN_10b98314c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  uStack_31 = 0;
  uStack_30 = param_3;
  FUN_10b984050(auStack_50,param_1 + 0x48,&uStack_24,&uStack_30,&uStack_31);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9831b4; end: 10b9831df;  */

undefined8 * FUN_10b9831b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d080;
  FUN_10b982c78(param_1 + 3);
  return param_1;
}



/* Entry: 10b9831e0; end: 10b9831e3;  */

undefined8 * FUN_10b9831e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d080;
  FUN_10b982c78(param_1 + 3);
  return param_1;
}



/* Entry: 10b9831e4; end: 10b9831f7;  */

void FUN_10b9831e4(void)

{
  FUN_10b9831b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9831f8; end: 10b983207;  */

void FUN_10b9831f8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b983208; end: 10b983243;  */

void FUN_10b983208(undefined8 param_1)

{
  func_0x00010b986604();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b983244; end: 10b98324b;  */

void FUN_10b983244(long *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 6;
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b98324c; end: 10b983287;  */

void FUN_10b98324c(undefined8 param_1)

{
  func_0x00010b986604();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b983288; end: 10b98328b;  */

void FUN_10b983288(long *param_1,long param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 3;
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b98328c; end: 10b9832c3;  */

void FUN_10b98328c(undefined8 param_1)

{
  func_0x00010b986604();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9832c4; end: 10b9832cb;  */

void FUN_10b9832c4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  *param_1 = param_3 & 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 4;
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b9832cc; end: 10b983307;  */

void FUN_10b9832cc(undefined8 param_1)

{
  func_0x00010b986604();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b983308; end: 10b98334b;  */

void FUN_10b983308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10b9812a4(&uStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
  func_0x00010b98643c();
  return;
}



/* Entry: 10b98334c; end: 10b98338f;  */

void FUN_10b98334c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_10b9812d4(&uStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
  func_0x00010b98643c();
  return;
}



/* Entry: 10b983390; end: 10b9833cb;  */

void FUN_10b983390(undefined8 param_1,undefined8 param_2)

{
  FUN_10b981730(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b9833cc; end: 10b983407;  */

void FUN_10b9833cc(undefined8 param_1,undefined8 param_2)

{
  FUN_10b980ac4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b983408; end: 10b98344b;  */

void FUN_10b983408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b986520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b98344c; end: 10b983487;  */

void FUN_10b98344c(undefined8 param_1,undefined8 param_2)

{
  FUN_10b982b30(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010b9863c8();
  return;
}



/* Entry: 10b983488; end: 10b983527;  */

void FUN_10b983488(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9867f0();
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b982b30(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c12d3e0(param_2);
  }
  else {
    func_0x00010c220220(param_2);
  }
  func_0x00010b986468();
  func_0x00010b986484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b983528; end: 10b983653;  */

void FUN_10b983528(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0865c0();
  _objc_retainAutoreleasedReturnValue();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) break;
    lVar3 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b982c30(auStack_60,lVar2);
    func_0x00010b982c30(auStack_70,lVar3);
    plVar4 = param_3;
    (**(code **)(*param_3 + 0x10))(param_3,auStack_60,auStack_70,param_4);
    func_0x00010b986528();
    FUN_10b982a50(auStack_60);
    _objc_release(lVar3);
    func_0x00010b986468();
  } while (((ulong)plVar4 & 1) != 0);
  func_0x00010b986484();
  func_0x00010b98643c();
  return;
}



/* Entry: 10b983654; end: 10b9836bb;  */

void FUN_10b983654(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b982c24(&uStack_30);
  *param_1 = uStack_30;
  *(undefined1 *)(param_1 + 1) = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b986528();
  func_0x00010b98643c();
  return;
}



/* Entry: 10b9836bc; end: 10b98375f;  */

void FUN_10b9836bc(undefined8 param_1,long param_2)

{
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9867f0();
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d04c0();
  if (param_2 == 0) {
    func_0x00010b986530();
  }
  func_0x00010b986484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b983760; end: 10b9837b7;  */

void FUN_10b983760(undefined8 param_1,undefined8 param_2)

{
  FUN_10b982b30(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e00();
  func_0x00010b98681c();
  func_0x00010b986484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b9837b8; end: 10b983847;  */

void FUN_10b9837b8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 auStack_40 [16];
  
  uVar1 = param_3;
  FUN_10b982b30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = uVar1;
  FUN_10b983848(uVar1,puVar2,param_4);
  if ((uVar3 & 1) == 0) {
    func_0x00010b982c48(auStack_40);
    func_0x00010b986768();
    *(undefined8 *)(param_1 + 0x10) = 0;
    func_0x00010b986528();
  }
  else {
    func_0x00010bf529e0();
    FUN_10b982a20(param_1,param_3);
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 10b983848; end: 10b983a07;  */

uint FUN_10b983848(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puStack_80;
  undefined *puStack_78;
  byte bStack_69;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  uVar4 = param_1;
  _objc_opt_isKindOfClass();
  if (((uVar4 & 1) == 0) && (uVar5 = param_1, FUN_10b982e24(), (uVar5 & 1) == 0)) {
    _NSStringFromClass(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30f2c(&uStack_58);
    func_0x00010b986530();
    if (param_1 == 0) {
      puStack_80 = &uStack_58;
      puStack_78 = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7d0379);
      func_0x000107c3173c(&ppuStack_50);
      puVar1 = puStack_48;
      pppuVar2 = (undefined8 ***)ppuStack_50;
      if (-1 < (long)puStack_40) {
        puVar1 = (undefined *)((ulong)puStack_40 >> 0x38);
        pppuVar2 = &ppuStack_50;
      }
      FUN_10b99ffd4(param_3,pppuVar2,puVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_50);
    }
    else {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c30f2c(&puStack_60);
      func_0x00010b986468();
      puStack_48 = &UNK_1003ab990;
      puStack_40 = &uStack_58;
      puStack_38 = &UNK_1003ab990;
      ppuStack_50 = &puStack_60;
      func_0x000107c2793c(&UNK_10f7d03a9);
      func_0x000107c3173c(&puStack_80);
      puVar1 = puStack_78;
      ppuVar3 = (undefined8 **)puStack_80;
      if (-1 < (char)bStack_69) {
        puVar1 = (undefined *)(ulong)bStack_69;
        ppuVar3 = &puStack_80;
      }
      FUN_10b99ffd4(param_3,ppuVar3,puVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_80);
      func_0x000107c278f8(puStack_60);
    }
    func_0x000107c278f8(uStack_58);
  }
  return (uint)uVar4 & 1;
}



/* Entry: 10b983a08; end: 10b983a7b;  */

void FUN_10b983a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b982b30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98643c();
  func_0x00010b982c24(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b983a7c; end: 10b983acf;  */

void FUN_10b983a7c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1bd8;
  _objc_alloc(PTR_PTR_1126e1bd8);
  func_0x00010c03b560();
  func_0x00010b982c24(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b983ad0; end: 10b983aff;  */

void FUN_10b983ad0(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b983ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),*param_2 + 0x10);
  return;
}



/* Entry: 10b983b00; end: 10b983c47;  */

void FUN_10b983b00(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))(&lStack_38,*(long **)(param_2 + 0x10),*param_4);
  lVar2 = lStack_38;
  if (lStack_38 == 0) {
    *param_1 = 0;
    goto LAB_10b983c28;
  }
  lVar3 = *param_3;
  if (*(char *)(*param_4 + 0x10) != '\x01') {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    puVar1[1] = 1;
    *puVar1 = &PTR_DAT_110d7d500;
    if (lVar3 == 0) {
      puVar1[2] = 0;
LAB_10b983c0c:
      do {
        func_0x00010b9864d4();
      } while (extraout_w11_02 != 0);
    }
    else {
      do {
        func_0x00010b9864d4();
      } while (extraout_w11_00 != 0);
      puVar1[2] = lVar3;
      lVar2 = lStack_38;
      if (lStack_38 != 0) goto LAB_10b983c0c;
    }
    puVar1[3] = lVar2;
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_00 != 0);
    *param_1 = puVar1;
    func_0x00010b986390();
    goto LAB_10b983c28;
  }
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 1;
  *puVar1 = &PTR_DAT_110d7d2e0;
  if (lVar3 == 0) {
    puVar1[2] = 0;
LAB_10b983be4:
    do {
      func_0x00010b9864d4();
    } while (extraout_w11_01 != 0);
  }
  else {
    do {
      func_0x00010b9864d4();
    } while (extraout_w11 != 0);
    puVar1[2] = lVar3;
    lVar2 = lStack_38;
    if (lStack_38 != 0) goto LAB_10b983be4;
  }
  puVar1[3] = lVar2;
  do {
    func_0x00010b9863d4();
  } while (extraout_w10 != 0);
  *param_1 = puVar1;
  func_0x00010b985ef0();
LAB_10b983c28:
  func_0x000107c30e58(lStack_38);
  return;
}



/* Entry: 10b983c48; end: 10b983c87;  */

uint FUN_10b983c48(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_10b982b68();
    return (uint)(param_2 == 0);
  }
  FUN_10b982b30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = (uint)param_2;
  }
  return uVar1 & 1;
}



/* Entry: 10b983c88; end: 10b983ca7;  */

ulong * FUN_10b983c88(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *extraout_x8;
  
  uVar3 = (uint)param_2;
  if ((char)param_2[1] == '\x05') {
    return (ulong *)(ulong)(uint)*param_2;
  }
  _abort();
  if ((char)param_2[1] != '\x06') {
    _abort();
    if ((char)param_2[1] == '\x04') {
      return (ulong *)(ulong)(byte)*param_2;
    }
    _abort();
    if ((char)param_2[1] == '\x03') {
      return param_2;
    }
    _abort();
    if ((char)param_2[1] == '\x02') {
      param_2 = (ulong *)*param_2;
      _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
      return param_2;
    }
    _abort();
    if (((char)param_2[1] != '\x01') &&
       (_abort(), ((byte)param_2[1] != 1 || uVar3 != 2) && (byte)param_2[1] != uVar3)) {
      _abort();
      if (uVar3 != 2 || (byte)param_2[1] != 1) {
        if ((byte)param_2[1] != uVar3) {
          _abort();
          *extraout_x8 = (ulong)param_2 & 0xffffffff;
          *(undefined1 *)(extraout_x8 + 1) = 5;
          puVar2 = extraout_x8;
          if ((char)extraout_x8[1] == '\x02') {
            puVar1 = (ulong *)*extraout_x8;
            puVar2 = (ulong *)0x0;
            if (puVar1 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__CFRetain_11034a770)();
              return puVar1;
            }
          }
          return puVar2;
        }
        if (uVar3 == 2) {
          param_2 = (ulong *)*param_2;
          if (param_2 != (ulong *)0x0) {
            _objc_retain(param_2);
            _CFAutorelease(param_2);
          }
          return param_2;
        }
      }
    }
  }
  return (ulong *)*param_2;
}



/* Entry: 10b983ca8; end: 10b983dbb;  */

void FUN_10b983ca8(int param_1)

{
  func_0x00010b9867a8();
  FUN_10b982b30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b98642c();
  func_0x00010b986410();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c067ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 10b983dbc; end: 10b983e8f;  */

void FUN_10b983dbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  FUN_10b982b30(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010b986724();
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010b9828b8(param_3);
    func_0x00010c08fa60(unaff_x19);
    func_0x00010b9a5c98(unaff_x20);
    func_0x00010bfc38e0(unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
    return;
  }
  puVar2 = &stack0xffffffffffffffd7;
  func_0x00010b9a5e3c(puVar2,1);
  *param_1 = puVar2;
  puVar2[0x20] = 0;
  return;
}



/* Entry: 10b983e90; end: 10b983ed7;  */

void FUN_10b983e90(undefined8 param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010b9867a8();
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b972880(extraout_x8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b983ed8; end: 10b983f07;  */

void FUN_10b983ed8(undefined8 *param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined **ppuStack_160;
  ulong uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_118 [2];
  ulong uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  
  FUN_10b982b30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
LAB_10b980524:
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    in_ZR = param_3 == puVar2;
    if ((bool)in_ZR) goto LAB_10b980524;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010b982848();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      func_0x00010b982848();
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class();
        func_0x00010b982848();
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class();
          func_0x00010b982848();
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_opt_class();
            func_0x00010b982848();
            if (((ulong)puVar2 & 1) == 0) {
              puVar2 = PTR_PTR_1126d9288;
              _objc_opt_class();
              func_0x00010b982848();
              if (((ulong)puVar2 & 1) == 0) {
                func_0x00010b98299c();
                if (((ulong)puVar2 & 1) == 0) {
                  func_0x00010b98299c();
                  if (((ulong)puVar2 & 1) == 0) {
                    func_0x00010b98299c();
                    if (((ulong)puVar2 & 1) == 0) {
                      FUN_10b981514(auStack_100,param_3);
                      func_0x00010b9a8f78(param_1,auStack_100);
                      func_0x000104bddf04(auStack_100[0]);
                    }
                    else {
                      *(undefined2 *)(param_1 + 1) = 0;
                      *param_1 = 0;
                      func_0x00010c296580(param_3);
                    }
                  }
                  else {
                    FUN_10b981454(param_1,param_3);
                  }
                }
                else {
                  func_0x00010b9828b0();
                  uStack_158 = CONCAT71(uStack_158._1_7_,1);
                  ppuStack_160 = &PTR_FUN_110d7e6e0;
                  plStack_150 = (long *)((ulong)plStack_150 & 0xffffffffffffff00);
                  uStack_148 = uStack_148 & 0xffffffffffffff00;
                  FUN_10b9a0ad4(auStack_100,&ppuStack_160);
                  func_0x00010c11c3e0(param_3);
                  if ((uStack_158 & 1) == 0) goto LAB_10b980910;
                  FUN_10b9a10dc(alStack_118,auStack_100,param_3);
                  FUN_10b9a0b2c(auStack_100);
                  FUN_10b9a01e4(&ppuStack_160);
                  func_0x000104bf351c(&lStack_80,alStack_118);
                  FUN_10b9a8d98(alStack_118);
                  in_ZR = lStack_80 == 1;
                  if ((bool)in_ZR) {
                    *param_1 = uStack_78;
                    *(undefined2 *)(param_1 + 1) = uStack_70;
                    uStack_78 = 0;
                    uStack_70 = 0;
                  }
                  else {
                    FUN_10b9a8e90(param_1,&uStack_78);
                  }
                  func_0x000104bda914(&lStack_80);
                  func_0x00010b9827fc();
                }
              }
              else {
                func_0x00010c296d80(param_3);
                FUN_10b9a8f04(param_1,param_3);
              }
            }
            else {
              FUN_10b98134c(param_1,param_3);
            }
          }
          else {
            func_0x00010b9828b0();
            puVar2 = param_3;
            func_0x00010bf529e0();
            func_0x00010b9abe10(alStack_118);
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_158 = 0;
            ppuStack_160 = (undefined **)0x0;
            uStack_148 = 0;
            plStack_150 = (long *)0x0;
            func_0x00010b9828b0();
            func_0x00010b9827b4();
            if (puVar2 != (undefined *)0x0) {
              lVar8 = 0;
              lVar10 = *plStack_150;
              do {
                puVar11 = (undefined *)0x0;
                puVar7 = (undefined *)(alStack_118[0] + 0x18 + lVar8 * 0x10);
                do {
                  if (*plStack_150 != lVar10) {
                    _objc_enumerationMutation(param_3);
                  }
                  FUN_10b980484(&lStack_80,*(undefined8 *)(uStack_158 + (long)puVar11 * 8));
                  lVar8 = lVar8 + 1;
                  puVar5 = puVar7;
                  FUN_10b9a9020(puVar7,&lStack_80);
                  func_0x00010b9829d0();
                  puVar11 = puVar11 + 1;
                  puVar7 = puVar7 + 0x10;
                  in_ZR = puVar11 == puVar2;
                } while (puVar11 < puVar2);
                func_0x00010b9827b4();
                puVar2 = puVar5;
              } while (puVar5 != (undefined *)0x0);
            }
            func_0x00010b9827fc();
            func_0x00010b9a8f84(param_1,alStack_118);
            func_0x000104bddf60(alStack_118[0]);
            func_0x00010b9827fc();
          }
        }
        else {
          func_0x00010b9828b0();
          func_0x000104bd4df4(alStack_118);
          lVar8 = alStack_118[0];
          puVar2 = param_3;
          func_0x00010bf529e0(param_3);
          uVar3 = lVar8 + 0x10;
          FUN_10b90d498(uVar3,puVar2);
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          ppuStack_160 = (undefined **)0x0;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          func_0x00010b9828b0();
          func_0x00010b9827b4();
          if (uVar3 != 0) {
            lVar8 = *plStack_150;
            do {
              uVar9 = 0;
              do {
                if (*plStack_150 != lVar8) {
                  _objc_enumerationMutation(param_3);
                }
                uVar6 = *(undefined8 *)(uStack_158 + uVar9 * 8);
                func_0x00010c0dff20(param_3);
                _objc_retainAutoreleasedReturnValue();
                FUN_10b980484(&lStack_80);
                func_0x000107c30f2c(&uStack_108,uVar6);
                FUN_10b8b510c(alStack_118[0] + 0x10,&uStack_108);
                FUN_10b9a9020();
                uVar4 = uStack_108;
                func_0x000107c278f8();
                func_0x00010b9829d0();
                func_0x00010b9829c8();
                uVar9 = uVar9 + 1;
                in_ZR = uVar9 == uVar3;
              } while (uVar9 < uVar3);
              func_0x00010b9827b4();
              uVar3 = uVar4;
            } while (uVar4 != 0);
          }
          func_0x00010b9827fc();
          FUN_10b9a8f54(param_1,alStack_118);
          func_0x000104bd4e64(alStack_118[0]);
          func_0x00010b9827fc();
        }
      }
      else {
        func_0x00010bf885a0(param_3);
        *(undefined2 *)(param_1 + 1) = 6;
        *param_1 = CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      }
    }
    else {
      func_0x000107c30f2c(auStack_100,param_3);
      FUN_10b9a8e18(param_1,auStack_100);
      func_0x000107c278f8(auStack_100[0]);
    }
  }
  func_0x00010b9827fc();
  func_0x00010b9827c8(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b980910:
  FUN_10b9a0084(&uStack_108,&ppuStack_160);
  FUN_10b981e8c(&uStack_108);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b980928);
  (*pcVar1)();
}



/* Entry: 10b983f08; end: 10b983f27;  */

long FUN_10b983f08(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10b983f28; end: 10b983f87;  */

void FUN_10b983f28(undefined8 param_1)

{
  long alStack_38 [3];
  
  func_0x00010b983e28(alStack_38);
  func_0x0001089332fc(param_1,&UNK_10e5fc6c8,alStack_38);
  if (alStack_38[0] != 0) {
    func_0x00010b9864b0();
  }
  return;
}



/* Entry: 10b983f88; end: 10b983f9f;  */

undefined8 FUN_10b983f88(void)

{
  return 0;
}



/* Entry: 10b983fa0; end: 10b984023;  */

void FUN_10b983fa0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_3 + 0x18) == 2) {
    lVar1 = param_3;
    FUN_10b9a5b88(param_3);
  }
  else {
    if (*(int *)(param_3 + 0x18) == 1) {
      lVar1 = *(long *)(param_3 + 0x10);
      lVar2 = 0x78;
      param_3 = param_3 + 0x20;
      goto LAB_10b983ffc;
    }
    lVar1 = *(long *)(param_3 + 0x10);
    param_3 = param_3 + 0x20;
  }
  lVar2 = 0x70;
LAB_10b983ffc:
                    /* WARNING: Could not recover jumptable at 0x00010b984020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + lVar2))(param_1,param_2,param_3,lVar1,param_4);
  return;
}



/* Entry: 10b984024; end: 10b98402b;  */

void FUN_10b984024(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b984028);
  (*pcVar1)();
}



/* Entry: 10b98402c; end: 10b98404f;  */

void FUN_10b98402c(undefined4 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,param_1);
  return;
}



/* Entry: 10b984050; end: 10b98417f;  */

void FUN_10b984050(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar11;
  
  puVar3 = param_3;
  func_0x00010b9868a4();
  uVar2 = (ulong)*puVar3;
  FUN_10b98402c();
  lVar6 = 0;
  uVar7 = uVar2 >> 7;
  lVar4 = *unaff_x20;
  uVar11 = uVar2;
  while( true ) {
    uVar7 = uVar7 & unaff_x20[3];
    uVar10 = *(ulong *)(lVar4 + uVar7);
    uVar8 = uVar10 ^ (uVar2 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar11 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      lVar9 = unaff_x20[1];
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & unaff_x20[3];
      uVar1 = *(uint *)(lVar9 + uVar11 * 0x20);
      if (uVar1 == *param_3) {
        uVar5 = 0;
        goto LAB_10b984118;
      }
      uVar11 = (ulong)uVar1;
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  func_0x00010b9867b4();
  FUN_10b984180();
  puVar3 = (uint *)(unaff_x20[1] + uVar11 * 0x20);
  uVar5 = *param_5;
  *puVar3 = *param_3;
  FUN_10b980190(puVar3 + 2,*param_4,uVar5);
  *(byte *)(*unaff_x20 + uVar11) = (byte)uVar2 & 0x7f;
  func_0x00010b9867d8();
  lVar4 = *unaff_x20;
  lVar9 = unaff_x20[1];
  uVar5 = 1;
LAB_10b984118:
  *unaff_x19 = lVar4 + uVar11;
  unaff_x19[1] = lVar9 + uVar11 * 0x20;
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
  return;
}



/* Entry: 10b984180; end: 10b984243;  */

void FUN_10b984180(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x00010b9868a4();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b984244(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_10b984284();
      }
      else {
        func_0x00010b98439c();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_10b984244(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b984244; end: 10b984283;  */

ulong FUN_10b984244(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b984284; end: 10b984543;  */

void FUN_10b984284(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x20;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b984544();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b984244(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b984568(param_1[1] + lVar4 * 0x20,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b984544; end: 10b984567;  */

void FUN_10b984544(undefined4 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b984568; end: 10b98459f;  */

undefined8 * FUN_10b984568(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined ***)(param_1 + 2) = &PTR_FUN_110d7cbe8;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined ***)(param_2 + 2) = &PTR_FUN_110d7cbe8;
  lVar1 = *(long *)(param_2 + 4);
  if (lVar1 != 0) {
    FUN_10b9869cc(lVar1,*(undefined8 *)(param_2 + 6));
  }
  FUN_10b982030(param_2 + 4);
  return (undefined8 *)(param_2 + 2);
}



/* Entry: 10b9845a0; end: 10b9845b3;  */

void FUN_10b9845a0(void)

{
  func_0x00010b984968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9845b4; end: 10b984767;  */

void FUN_10b9845b4(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = lVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10 != 0);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar4 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = *param_3;
  if (lVar5 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_01 != 0);
  }
  FUN_10b9a3a64(auStack_a8);
  func_0x00010b98686c();
  lVar6 = *param_4;
  if (lVar6 != 0) {
    do {
      func_0x00010b986458();
    } while (extraout_w10_02 != 0);
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc6000000;
  pcStack_80 = FUN_10b984994;
  puStack_78 = &UNK_110d7d340;
  if (lVar4 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_03 != 0);
  }
  lStack_70 = lVar4;
  if (lVar1 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_04 != 0);
  }
  lStack_68 = lVar1;
  if (lVar5 != 0) {
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_05 != 0);
  }
  lStack_60 = lVar5;
  if (lVar6 != 0) {
    do {
      func_0x00010b986458();
    } while (extraout_w10_06 != 0);
  }
  ppuVar3 = &puStack_90;
  lStack_58 = lVar6;
  _objc_retainBlock(ppuVar3);
  func_0x000107c278f8(lStack_58);
  func_0x000104bda3ac(lStack_60);
  FUN_10b97ad80(lStack_68);
  func_0x000107c30e58(lStack_70);
  FUN_10b972364(param_1,lVar2,ppuVar3);
  _objc_release(ppuVar3);
  func_0x000107c278f8(lVar6);
  func_0x00010b986420();
  func_0x000104bda3ac(lVar5);
  func_0x000107c30e58(lVar4);
  FUN_10b97ad80(lVar1);
  return;
}



/* Entry: 10b984768; end: 10b984947;  */

void FUN_10b984768(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long lVar7;
  long lStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar3 = &lStack_70;
  FUN_10b9a3a64(&lStack_70,param_5);
  func_0x00010b9a35e8();
  lVar7 = *plVar3;
  if (lVar7 != 0) {
    do {
      func_0x00010b986458();
    } while (extraout_w10 != 0);
  }
  lStack_58 = lVar7;
  FUN_10b9a3d64(auStack_68);
  if (param_3 == 0) {
    FUN_10b982b30();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b986874();
    FUN_10b985604();
    do {
      func_0x00010b9863d4();
    } while (extraout_w10_01 != 0);
    *param_1 = param_4;
    FUN_10b985ecc(param_4);
  }
  else {
    FUN_10b982b30();
    _objc_retainAutoreleasedReturnValue();
    FUN_10b982b68();
    puVar4 = param_4;
    func_0x00010b986874();
    _objc_retain(param_3);
    plVar3 = puVar4 + 1;
    *plVar3 = 1;
    *puVar4 = &PTR_FUN_110d7d380;
    uVar6 = 0;
    if (*(long *)(param_2 + 0x10) != 0) {
      do {
        func_0x00010b9864d4();
        uVar6 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar4[2] = uVar6;
    lVar5 = param_3;
    _objc_opt_class();
    puVar4[3] = lVar5;
    _objc_initWeak(puVar4 + 4,param_3);
    puVar4[5] = param_4;
    uVar6 = 0;
    if (*(long *)(param_2 + 0x18) != 0) {
      do {
        func_0x00010b9864d4();
        uVar6 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    puVar4[6] = uVar6;
    if (lVar7 != 0) {
      do {
        func_0x00010b986458();
      } while (extraout_w10_00 != 0);
    }
    puVar4[7] = lVar7;
    func_0x00010b986484();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = puVar4;
    func_0x00010b9855e0(puVar4);
  }
  func_0x00010b986484();
  func_0x000107c278f8(lVar7);
  return;
}



/* Entry: 10b984948; end: 10b984993;  */

void FUN_10b984948(void)

{
  func_0x00010b9868c4();
  FUN_10b97ad80();
  return;
}



/* Entry: 10b984994; end: 10b984abb;  */

undefined1 * FUN_10b984994(undefined1 *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar4;
  long unaff_x22;
  long lVar5;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined1 auStack_210 [16];
  byte bStack_200;
  undefined1 auStack_1f8 [8];
  byte bStack_1f0;
  ulong uStack_1d8;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_58;
  
  puVar3 = auStack_210;
  puVar2 = param_1;
  func_0x00010b986400();
  lVar4 = *(long *)(*(long *)(puVar2 + 0x20) + 0x28) + -2;
  uStack_58 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar4 * 8);
  func_0x00010b986744();
  uStack_1d8 = extraout_x8_00 | 8;
  lVar5 = lVar4;
  while (lVar5 != 0) {
    func_0x00010b9867c0();
    lVar5 = extraout_x9;
  }
  func_0x00010b986538();
  uStack_160 = 0x10;
  uStack_168 = 0;
  func_0x00010b986808();
  for (lVar5 = lVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
    func_0x00010b9866f4();
    unaff_x22 = unaff_x22 + 8;
  }
  func_0x00010b9864e4();
  func_0x00010b9865bc();
  func_0x00010b9866ec();
  if ((bStack_1f0 & 1) == 0) {
    func_0x00010b9868dc();
    puVar2 = auStack_1f8;
    FUN_10b984abc();
  }
  else {
    if ((bStack_200 & 1) == 0) goto LAB_10b984a9c;
    func_0x00010b9868dc();
    func_0x00010b982bac();
    puVar2 = puVar3;
  }
  func_0x00010b9864bc();
  func_0x00010b9867a0();
  func_0x00010b9863b4(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10b984a9c:
  func_0x0001080da3e4();
  func_0x00010b9864bc();
  func_0x00010b9867a0();
  func_0x00010b986450();
  pcStack_218 = FUN_10b984abc;
  lStack_240 = unaff_x22;
  lStack_238 = lVar4;
  puStack_230 = param_1;
  puStack_228 = auStack_210;
  puStack_220 = &stack0xfffffffffffffff0;
  FUN_10b9a0084(&uStack_248);
  FUN_10b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c076f00();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 != 0) {
    FUN_10b99fc44(&uStack_258,&uStack_248);
    FUN_10b99f828();
    FUN_10b98101c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(puVar2);
    func_0x00010b986530();
    func_0x00010b986468();
    func_0x000104bda960(uStack_258);
  }
  func_0x00010b986484();
  switch((ulong)param_2 & 0xffffffff) {
  case 0:
    uStack_258 = 0;
    uStack_250 = 0;
    break;
  case 1:
    func_0x00010b982c3c(&uStack_258,0);
    break;
  default:
    func_0x00010b982c48(&uStack_258);
    break;
  case 3:
    func_0x00010b982c10(&uStack_258,0);
    break;
  case 4:
    func_0x00010b982c00(&uStack_258,0);
    break;
  case 5:
    func_0x00010b982be4(&uStack_258,0);
    break;
  case 6:
    func_0x00010b982bf4(&uStack_258,0);
  }
  func_0x00010b982bac(&uStack_258,param_2);
  func_0x00010b98687c();
  func_0x000104bda960(uStack_248);
  return param_2;
}



/* Entry: 10b984abc; end: 10b984c6f;  */

ulong FUN_10b984abc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  FUN_10b9a0084(&uStack_38);
  FUN_10b96bf1c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c076f00();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 != 0) {
    FUN_10b99fc44(&uStack_48,&uStack_38);
    FUN_10b99f828();
    FUN_10b98101c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(param_1);
    func_0x00010b986530();
    func_0x00010b986468();
    func_0x000104bda960(uStack_48);
  }
  func_0x00010b986484();
  switch(param_2 & 0xffffffff) {
  case 0:
    uStack_48 = 0;
    uStack_40 = 0;
    break;
  case 1:
    func_0x00010b982c3c(&uStack_48,0);
    break;
  default:
    func_0x00010b982c48(&uStack_48);
    break;
  case 3:
    func_0x00010b982c10(&uStack_48,0);
    break;
  case 4:
    func_0x00010b982c00(&uStack_48,0);
    break;
  case 5:
    func_0x00010b982be4(&uStack_48,0);
    break;
  case 6:
    func_0x00010b982bf4(&uStack_48,0);
  }
  func_0x00010b982bac(&uStack_48,param_2);
  func_0x00010b98687c();
  func_0x000104bda960(uStack_38);
  return param_2;
}



/* Entry: 10b984c70; end: 10b984cf3;  */

void FUN_10b984c70(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  long lVar5;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  uVar4 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b9864d4();
      uVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar4 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    do {
      func_0x00010b9864d4();
      uVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar4 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x00010b9864d4();
      uVar4 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  lVar5 = *(long *)(param_2 + 0x38);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 0x38) = lVar5;
  return;
}



/* Entry: 10b984cf4; end: 10b984d27;  */

undefined8 * FUN_10b984cf4(long param_1)

{
  func_0x00010b986850();
  func_0x000104bda388(param_1 + 0x30);
  FUN_10b984948(param_1 + 0x28);
  func_0x0001003ad610(*(undefined8 *)(param_1 + 0x20));
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b984d28; end: 10b984df3;  */

void FUN_10b984d28(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if ((ulong)param_1[2] < param_2) {
    plVar3 = param_1;
    FUN_10b984e5c();
    lVar2 = *param_1;
    lVar1 = lVar2 + param_1[1] * 0x10;
    plVar4 = plVar3;
    func_0x00010b9867b4();
    func_0x00010b984ee4();
    func_0x00010b984ee4(param_1,lVar1,lVar1,plVar4);
    func_0x00010b9865f8();
    if (lVar2 != 0) {
      func_0x00010b9867b4();
      FUN_10b984e90();
      func_0x00010b9865ec();
    }
    *param_1 = (long)plVar3;
    param_1[2] = param_2;
    func_0x00010b98662c();
  }
  return;
}



/* Entry: 10b984df4; end: 10b984e5b;  */

void FUN_10b984df4(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = *param_1 + param_1[1] * 0x10;
  if (param_1[1] == param_1[2]) {
    FUN_10b984f88(auStack_28,param_1,lVar1);
  }
  else {
    FUN_10b9829d8(lVar1,param_2,*param_3);
    param_1[1] = param_1[1] + 1;
  }
  return;
}



/* Entry: 10b984e5c; end: 10b984e8f;  */

void FUN_10b984e5c(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 >> 0x3b != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10b984e74;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010772e264();
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10b984e90;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b982a50(param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 10b984e90; end: 10b984ec7;  */

void FUN_10b984e90(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b982a50(param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 10b984ec8; end: 10b984f17;  */

void FUN_10b984ec8(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b984f18; end: 10b984f87;  */

void FUN_10b984f18(long param_1)

{
  long *unaff_x19;
  
  func_0x00010b9868c4();
  while (param_1 != unaff_x19[1]) {
    FUN_10b982a50();
    param_1 = *unaff_x19 + 0x10;
    *unaff_x19 = param_1;
  }
  return;
}



/* Entry: 10b984f88; end: 10b98508b;  */

void FUN_10b984f88(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  func_0x00010b9868a4();
  lVar3 = *param_2;
  FUN_10b98508c(param_2,1);
  plVar2 = param_2;
  func_0x00010b9867b4();
  FUN_10b984e5c();
  lVar1 = *unaff_x20;
  func_0x00010b984ee4();
  FUN_10b9829d8();
  func_0x00010b984ee4();
  func_0x00010b9865f8();
  if (lVar1 != 0) {
    FUN_10b984e90();
    func_0x00010b9865ec();
  }
  *unaff_x20 = (long)plVar2;
  unaff_x20[1] = unaff_x20[1] + 1;
  unaff_x20[2] = (long)param_2;
  func_0x00010b98662c();
  *unaff_x19 = *unaff_x20 + (param_3 - lVar3);
  return;
}



/* Entry: 10b98508c; end: 10b9850f3;  */

ulong FUN_10b98508c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if ((param_2 - uVar1) + *(long *)(param_1 + 8) <= 0x7ffffffffffffff - uVar1) {
    if (uVar1 >> 0x3d == 0) {
      uVar2 = (uVar1 << 3) / 5;
    }
    else {
      uVar2 = uVar1 << 3;
      if (4 < uVar1 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    uVar1 = *(long *)(param_1 + 8) + param_2;
    if (0x7fffffffffffffe < uVar2) {
      uVar2 = 0x7ffffffffffffff;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  _abort();
  FUN_10b984e90();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b984ec8(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b9850f4; end: 10b98512b;  */

undefined8 * FUN_10b9850f4(undefined8 *param_1)

{
  FUN_10b984e90(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10b984ec8(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b98512c; end: 10b98515b;  */

long FUN_10b98512c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b984ec8(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b98515c; end: 10b98515f;  */

undefined8 * FUN_10b98515c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d380;
  func_0x00010b986850();
  func_0x000107c30e54(param_1 + 6);
  _objc_destroyWeak(param_1 + 4);
  func_0x00010b98670c();
  return param_1;
}



/* Entry: 10b985160; end: 10b985173;  */

void FUN_10b985160(void)

{
  FUN_10b9853e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b985174; end: 10b9853cf;  */

undefined1  [16] FUN_10b985174(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 auStack_1f0 [2];
  undefined8 auStack_1e0 [6];
  undefined8 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [256];
  undefined8 uStack_58;
  
  lVar1 = param_1;
  lVar5 = param_2;
  func_0x00010b986400();
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  puVar2 = (undefined8 *)(lVar1 + 0x20);
  uStack_58 = extraout_x8;
  _objc_loadWeakRetained();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x000107c31084();
    _NSStringFromClass(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30f2c(&ppuStack_178);
    puStack_1a8 = &UNK_1003ab990;
    ppuStack_1b0 = &ppuStack_178;
    func_0x000107c2793c(&UNK_10f7d043c);
    func_0x000107c3173c(&puStack_170);
    func_0x000107c31080(auStack_1f0,puVar2,&puStack_170);
    FUN_10b99f560(auStack_1e0,auStack_1f0);
    puVar6 = auStack_1e0;
    FUN_10b99ff08(uVar7,puVar6);
    func_0x000104bda960(auStack_1e0[0]);
    func_0x000107c278f8(auStack_1f0[0]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_170);
    func_0x000107c278f8(ppuStack_178);
    func_0x00010b986468();
    func_0x00010b9868d0();
  }
  else {
    puStack_170 = auStack_158;
    uStack_160 = 0x10;
    uStack_168 = 0;
    func_0x00010b985424(&puStack_170,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28));
    func_0x00010b986830();
    func_0x00010b986828(puStack_170);
    func_0x00010b986814();
    func_0x00010b982c3c(&ppuStack_1b0,*(undefined8 *)(param_1 + 0x28));
    func_0x00010b986828(puStack_170 + 0x10);
    func_0x00010b986814();
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar6 = *(undefined8 **)(param_2 + 8);
    func_0x00010b986470(puStack_170,uVar3,puVar6,*(undefined8 *)(param_2 + 0x10));
    func_0x00010b986590();
    (*extraout_x9)();
    if ((uVar3 & 1) == 0) {
      func_0x00010b9868d0();
    }
    else {
      FUN_10b967988(puVar2,*(undefined8 *)(param_1 + 0x28));
      FUN_10b972240(auStack_1f0,*(undefined8 *)(param_1 + 0x30),puVar2,puStack_170);
      func_0x00010b986470(*(undefined8 *)(param_1 + 0x10));
      func_0x00010b98664c();
      func_0x00010b9866dc();
      func_0x00010b986528();
      puVar6 = puVar2;
    }
    ppuVar4 = &puStack_170;
    FUN_10b9850f4(ppuVar4);
    ppuStack_178 = ppuVar4;
  }
  func_0x00010b98643c();
  func_0x00010b9863b4(uStack_58);
  if ((bool)in_ZR) {
    auVar8._8_8_ = puVar6;
    auVar8._0_8_ = ppuStack_178;
    return auVar8;
  }
  ___stack_chk_fail();
  func_0x00010b986528();
  FUN_10b9850f4(&puStack_170);
  func_0x00010b98643c();
  func_0x00010b986450();
  auVar9._8_8_ = 0x12;
  auVar9._0_8_ = &UNK_10f7d0479;
  return auVar9;
}



/* Entry: 10b9853d0; end: 10b9853df;  */

undefined1  [16] FUN_10b9853d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f7d0479;
  return auVar1;
}



/* Entry: 10b9853e0; end: 10b9854bf;  */

undefined8 * FUN_10b9853e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d380;
  func_0x00010b986850();
  func_0x000107c30e54(param_1 + 6);
  _objc_destroyWeak(param_1 + 4);
  func_0x00010b98670c();
  return param_1;
}



/* Entry: 10b9854c0; end: 10b9855c3;  */

void FUN_10b9854c0(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long lVar4;
  
  lVar3 = param_4;
  func_0x00010b9868a4();
  lVar4 = *param_2;
  FUN_10b98508c(param_2,lVar3);
  plVar1 = unaff_x20;
  FUN_10b984e5c();
  lVar3 = *unaff_x20;
  plVar2 = unaff_x20;
  func_0x00010b984ee4();
  FUN_10b9855c4(param_4,plVar2);
  func_0x00010b9867b4();
  func_0x00010b984ee4();
  func_0x00010b9865f8();
  if (lVar3 != 0) {
    FUN_10b984e90();
    func_0x00010b9865ec();
  }
  *unaff_x20 = (long)plVar1;
  unaff_x20[1] = unaff_x20[1] + param_4;
  unaff_x20[2] = (long)param_2;
  func_0x00010b98662c();
  *unaff_x19 = *unaff_x20 + (param_3 - lVar4);
  return;
}



/* Entry: 10b9855c4; end: 10b985603;  */

void FUN_10b9855c4(long param_1,undefined8 *param_2)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    param_2 = param_2 + 2;
  }
  return;
}



/* Entry: 10b985604; end: 10b9856eb;  */

undefined8 *
FUN_10b985604(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  long lVar5;
  int extraout_w11;
  int extraout_w11_00;
  
  *param_1 = &PTR_DAT_110d7ed50;
  param_1[1] = 1;
  func_0x00010bf51e00(param_3);
  FUN_10b980190(param_1 + 2,param_3,1);
  _objc_release(param_3);
  *param_1 = &PTR_FUN_110d7d3f8;
  param_1[2] = &PTR_DAT_110d7d458;
  uVar4 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b9864d4();
      uVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[5] = uVar4;
  uVar4 = 0;
  if (*param_4 != 0) {
    do {
      func_0x00010b9864d4();
      uVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[6] = uVar4;
  lVar5 = *param_5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = lVar5;
  return param_1;
}



/* Entry: 10b9856ec; end: 10b9856ef;  */

undefined8 * FUN_10b9856ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7d3f8;
  param_1[2] = &PTR_DAT_110d7d458;
  func_0x00010b986850();
  func_0x000107c30e54(param_1 + 6);
  func_0x00010b98670c();
  FUN_10b980260(param_1 + 2);
  return param_1;
}



/* Entry: 10b9856f0; end: 10b985703;  */

void FUN_10b9856f0(void)

{
  FUN_10b9859c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


